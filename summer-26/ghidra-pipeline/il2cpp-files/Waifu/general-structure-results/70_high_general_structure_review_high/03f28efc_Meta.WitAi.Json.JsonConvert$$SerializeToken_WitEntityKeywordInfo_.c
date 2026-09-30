/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken<WitEntityKeywordInfo>
ENTRY_POINT: 03f28efc
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Meta_WitAi_Json_JsonConvert__SerializeToken<WitEntityKeywordInfo>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x20;
  undefined4 unaff_w21;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_03f28f2c:
      (*(code *)*puVar1)();
      if (unaff_x20 == 0) {
        return unaff_w21;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0336c660();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0338f71c();
      goto LAB_03f28f2c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


