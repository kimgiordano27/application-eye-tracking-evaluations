/*
FUNCTION_NAME: WebSocket_acceptCloseFrame_mC3FB3C05F6E9A6E5CAC72F7238606C286B296735
ENTRY_POINT: 01f319fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_2
*/


undefined4
WebSocket_acceptCloseFrame_mC3FB3C05F6E9A6E5CAC72F7238606C286B296735
          (undefined8 param_1,WebSocketFrame_t4502E8AF829CD1DFBE65C84A950A904E2E5A157B *param_2)

{
  byte bVar1;
  void *pvVar2;
  
  NullCheck(param_2);
  pvVar2 = (void *)WebSocketFrame_get_PayloadData_m2D692CB8EE635C5C117E2FFD0083CFBEB5EE1A40_inline
                             (param_2,(MethodInfo *)0x0);
  NullCheck(pvVar2);
  bVar1 = PayloadData_get_ContainsReservedCloseStatusCode_mCF7F100AAA70F8571B493C0028F2EC7600E9ED62
                    (pvVar2,0);
  WebSocket_close_m2C7BAF29DD007D6E95099DDF863762BD79F294EF(param_1,pvVar2,(bVar1 & 1) == 0,0,0);
  return 0;
}


