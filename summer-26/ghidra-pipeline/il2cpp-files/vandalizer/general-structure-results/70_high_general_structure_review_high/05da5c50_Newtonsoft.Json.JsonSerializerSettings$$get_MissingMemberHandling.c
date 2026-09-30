/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MissingMemberHandling
ENTRY_POINT: 05da5c50
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_MissingMemberHandling(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x217) = 1;
  FUN_05e44034();
  lVar2 = *unaff_x20;
  lVar1 = *(long *)(lVar2 + 0x38);
  if (lVar1 == 0) {
    FUN_0322bf50(lVar2);
    lVar1 = *(long *)(lVar2 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x10));
  return;
}


