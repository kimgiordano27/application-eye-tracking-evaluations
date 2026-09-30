/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeDictionary
ENTRY_POINT: 013efbbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert__DeserializeDictionary(void)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  byte unaff_w23;
  undefined8 *unaff_x25;
  undefined4 unaff_s8;
  
  lVar1 = thunk_FUN_00d62348(*unaff_x25);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
    *(undefined8 *)(lVar1 + 0x28) = unaff_x22;
    *(byte *)(lVar1 + 0x34) = unaff_w23 & 1;
    *(undefined8 *)(lVar1 + 0x38) = unaff_x20;
    *(undefined8 *)(lVar1 + 0x40) = unaff_x19;
    *(undefined4 *)(lVar1 + 0x30) = unaff_s8;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


