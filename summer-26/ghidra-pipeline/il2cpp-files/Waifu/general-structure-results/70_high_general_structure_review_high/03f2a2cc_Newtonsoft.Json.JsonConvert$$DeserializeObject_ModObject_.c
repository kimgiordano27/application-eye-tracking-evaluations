/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<ModObject>
ENTRY_POINT: 03f2a2cc
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


undefined4
Newtonsoft_Json_JsonConvert__DeserializeObject<ModObject>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  undefined4 unaff_w21;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a2f0:
      (*(code *)*puVar1)();
      if (unaff_x20 == 0) {
        return unaff_w21;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0336c660();
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_03f2a2f0;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


