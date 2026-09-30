/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Culture
ENTRY_POINT: 074c5120
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture
               (undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    thunk_FUN_03f86000(param_1,0);
LAB_074c5198:
    param_1[1] = 0;
    thunk_FUN_03f86000(param_1 + 1,0);
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x20);
    thunk_FUN_03f86000(param_1);
    if (uVar1 == 1) goto LAB_074c5198;
    if ((*(uint *)(param_2 + 0x18) & 0xfffffffe) == 0) {
LAB_074c51d4:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    thunk_FUN_03f86000();
    if (2 < uVar1) {
      if (*(uint *)(param_2 + 0x18) < 3) goto LAB_074c51d4;
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      goto LAB_074c51ac;
    }
  }
  uVar2 = 0;
LAB_074c51ac:
  param_1[2] = uVar2;
  thunk_FUN_03f86000();
  param_1[3] = param_2;
  thunk_FUN_03f86000(param_1 + 3,param_2);
  return;
}


