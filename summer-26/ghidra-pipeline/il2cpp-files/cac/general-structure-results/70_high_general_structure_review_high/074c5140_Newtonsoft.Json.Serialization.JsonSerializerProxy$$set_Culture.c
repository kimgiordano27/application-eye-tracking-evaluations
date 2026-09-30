/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Culture
ENTRY_POINT: 074c5140
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Culture
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  
  *unaff_x20 = param_2;
  thunk_FUN_03f86000();
  if (unaff_w21 == 1) {
    unaff_x20[1] = 0;
    thunk_FUN_03f86000(unaff_x20 + 1,0);
  }
  else {
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) == 0) {
LAB_074c51d4:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x28);
    thunk_FUN_03f86000();
    if (2 < unaff_w21) {
      if (*(uint *)(unaff_x19 + 0x18) < 3) goto LAB_074c51d4;
      uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
      goto LAB_074c51ac;
    }
  }
  uVar1 = 0;
LAB_074c51ac:
  unaff_x20[2] = uVar1;
  thunk_FUN_03f86000();
  unaff_x20[3] = unaff_x19;
  thunk_FUN_03f86000(unaff_x20 + 3);
  return;
}


