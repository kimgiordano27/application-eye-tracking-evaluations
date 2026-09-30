/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 05ac95d4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling
               (long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05ac93fc with catch @ 05ac95e0
                        */
  FUN_05b32c00(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_03048534((long *)(param_1 + 0x10),param_2);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    *(int *)(param_1 + 0x18) = (int)*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x18);
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    thunk_FUN_02fc2c1c();
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


