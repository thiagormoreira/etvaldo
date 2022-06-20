
void recvMsg(uint8_t *data, size_t len){
  WebSerial.println("Received Data...");
  String d = "";
  for(int i=0; i < len; i++){
    d += char(data[i]);
  }
  WebSerial.println(d);
}

void setupWebSerial() {

  WebSerial.begin(&asyncWebServer);
  WebSerial.msgCallback(recvMsg);
}

void handleWebSerial() {
}

