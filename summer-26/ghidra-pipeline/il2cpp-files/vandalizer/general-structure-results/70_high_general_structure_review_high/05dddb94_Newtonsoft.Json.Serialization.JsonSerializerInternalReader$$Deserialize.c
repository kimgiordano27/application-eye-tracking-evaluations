/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 05dddb94
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(void)

{
  undefined4 uVar1;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar2;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x23 + 0x293) = 1;
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_05c857f0();
    uVar1 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_075ebb80 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05dddcc4(uVar2,uVar1);
  return;
}


