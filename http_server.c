



int main(int argc, char** argv)
{
  int sock_listen;
  
  sock_listen = watalab_tcp_listen(4500);
  
  while(true){
    int sock_client;
    
    sock_client = watalab_accept(sock_listen);
    watalab_invoke_thread(sock_client);
  }
  
  return 0;
}
