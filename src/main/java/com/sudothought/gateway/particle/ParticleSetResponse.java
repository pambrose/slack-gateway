package com.sudothought.gateway.particle;

public class ParticleSetResponse {
  private String  id           = null;
  private String  last_app     = null;
  private boolean connected    = true;
  private String  return_value = null;

  public boolean isConnected() { return this.connected; }

  public ParticleSetResponse() { }
}
