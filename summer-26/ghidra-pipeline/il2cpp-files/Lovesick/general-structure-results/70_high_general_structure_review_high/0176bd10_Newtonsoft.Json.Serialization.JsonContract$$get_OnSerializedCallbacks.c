/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 0176bd10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks(void)

{
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar1;
  long unaff_x22;
  undefined4 unaff_w23;
  int unaff_w24;
  int unaff_w25;
  
  FUN_0176b850();
  if (unaff_w25 == 0) {
    lVar1 = unaff_x22 + 8;
  }
  else {
    lVar1 = unaff_x22 + 10;
    *(undefined2 *)(unaff_x22 + 8) = 0x2d;
  }
  FUN_0176b850(lVar1,*(undefined1 *)(unaff_x20 + 10),*(undefined1 *)(unaff_x20 + 0xb));
  FUN_0176b850(lVar1 + 8,*(undefined1 *)(unaff_x20 + 0xc),*(undefined1 *)(unaff_x20 + 0xd));
  FUN_0176b850(lVar1 + 0x10,*(undefined1 *)(unaff_x20 + 0xe),*(undefined1 *)(unaff_x20 + 0xf));
  if (unaff_w24 != 0) {
    *(short *)(lVar1 + 0x18) = (short)((uint)unaff_w24 >> 0x10);
  }
  *unaff_x19 = unaff_w23;
  return 1;
}


