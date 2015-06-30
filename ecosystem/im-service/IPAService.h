/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef IPAService_H
#define IPAService_H

#include <thrift/TDispatchProcessor.h>
#include "service_types.h"



class IPAServiceIf {
 public:
  virtual ~IPAServiceIf() {}
  virtual void submitQuery(std::string& _return, const  ::QuerySpec& query) = 0;
};

class IPAServiceIfFactory {
 public:
  typedef IPAServiceIf Handler;

  virtual ~IPAServiceIfFactory() {}

  virtual IPAServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(IPAServiceIf* /* handler */) = 0;
};

class IPAServiceIfSingletonFactory : virtual public IPAServiceIfFactory {
 public:
  IPAServiceIfSingletonFactory(const boost::shared_ptr<IPAServiceIf>& iface) : iface_(iface) {}
  virtual ~IPAServiceIfSingletonFactory() {}

  virtual IPAServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(IPAServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<IPAServiceIf> iface_;
};

class IPAServiceNull : virtual public IPAServiceIf {
 public:
  virtual ~IPAServiceNull() {}
  void submitQuery(std::string& /* _return */, const  ::QuerySpec& /* query */) {
    return;
  }
};

typedef struct _IPAService_submitQuery_args__isset {
  _IPAService_submitQuery_args__isset() : query(false) {}
  bool query :1;
} _IPAService_submitQuery_args__isset;

class IPAService_submitQuery_args {
 public:

  static const char* ascii_fingerprint; // = "87E958EDAC9A2A943ED96A885F2D3696";
  static const uint8_t binary_fingerprint[16]; // = {0x87,0xE9,0x58,0xED,0xAC,0x9A,0x2A,0x94,0x3E,0xD9,0x6A,0x88,0x5F,0x2D,0x36,0x96};

  IPAService_submitQuery_args(const IPAService_submitQuery_args&);
  IPAService_submitQuery_args& operator=(const IPAService_submitQuery_args&);
  IPAService_submitQuery_args() {
  }

  virtual ~IPAService_submitQuery_args() throw();
   ::QuerySpec query;

  _IPAService_submitQuery_args__isset __isset;

  void __set_query(const  ::QuerySpec& val);

  bool operator == (const IPAService_submitQuery_args & rhs) const
  {
    if (!(query == rhs.query))
      return false;
    return true;
  }
  bool operator != (const IPAService_submitQuery_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IPAService_submitQuery_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const IPAService_submitQuery_args& obj);
};


class IPAService_submitQuery_pargs {
 public:

  static const char* ascii_fingerprint; // = "87E958EDAC9A2A943ED96A885F2D3696";
  static const uint8_t binary_fingerprint[16]; // = {0x87,0xE9,0x58,0xED,0xAC,0x9A,0x2A,0x94,0x3E,0xD9,0x6A,0x88,0x5F,0x2D,0x36,0x96};


  virtual ~IPAService_submitQuery_pargs() throw();
  const  ::QuerySpec* query;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const IPAService_submitQuery_pargs& obj);
};

typedef struct _IPAService_submitQuery_result__isset {
  _IPAService_submitQuery_result__isset() : success(false) {}
  bool success :1;
} _IPAService_submitQuery_result__isset;

class IPAService_submitQuery_result {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};

  IPAService_submitQuery_result(const IPAService_submitQuery_result&);
  IPAService_submitQuery_result& operator=(const IPAService_submitQuery_result&);
  IPAService_submitQuery_result() : success() {
  }

  virtual ~IPAService_submitQuery_result() throw();
  std::string success;

  _IPAService_submitQuery_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const IPAService_submitQuery_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const IPAService_submitQuery_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IPAService_submitQuery_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const IPAService_submitQuery_result& obj);
};

typedef struct _IPAService_submitQuery_presult__isset {
  _IPAService_submitQuery_presult__isset() : success(false) {}
  bool success :1;
} _IPAService_submitQuery_presult__isset;

class IPAService_submitQuery_presult {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};


  virtual ~IPAService_submitQuery_presult() throw();
  std::string* success;

  _IPAService_submitQuery_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const IPAService_submitQuery_presult& obj);
};

class IPAServiceClient : virtual public IPAServiceIf {
 public:
  IPAServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  IPAServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void submitQuery(std::string& _return, const  ::QuerySpec& query);
  void send_submitQuery(const  ::QuerySpec& query);
  void recv_submitQuery(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class IPAServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<IPAServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (IPAServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_submitQuery(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  IPAServiceProcessor(boost::shared_ptr<IPAServiceIf> iface) :
    iface_(iface) {
    processMap_["submitQuery"] = &IPAServiceProcessor::process_submitQuery;
  }

  virtual ~IPAServiceProcessor() {}
};

class IPAServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  IPAServiceProcessorFactory(const ::boost::shared_ptr< IPAServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< IPAServiceIfFactory > handlerFactory_;
};

class IPAServiceMultiface : virtual public IPAServiceIf {
 public:
  IPAServiceMultiface(std::vector<boost::shared_ptr<IPAServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~IPAServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<IPAServiceIf> > ifaces_;
  IPAServiceMultiface() {}
  void add(boost::shared_ptr<IPAServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void submitQuery(std::string& _return, const  ::QuerySpec& query) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->submitQuery(_return, query);
    }
    ifaces_[i]->submitQuery(_return, query);
    return;
  }

};



#endif
