/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c__DisplayClass8_0<object>$$<DeserializeObjectAsync>b__0
ENTRY_POINT: 04d04dd0
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert_<>c__DisplayClass8_0<object>__<DeserializeObjectAsync>b__0
               (ulong param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_0338f618();
  }
  lVar1 = FUN_03398a84();
  FUN_04d03870(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_068537e0(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,
                 unaff_w19,0);
    *(undefined4 *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


