/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MissingMemberHandling
ENTRY_POINT: 0325e980
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined2 Newtonsoft_Json_JsonSerializerSettings__get_MissingMemberHandling(long *param_1)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x2d8))(param_1,2,*(undefined8 *)(*param_1 + 0x2e0));
  lVar1 = param_1[3];
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((*(int *)(lVar1 + 0x18) != 1) && (*(int *)(lVar1 + 0x18) != 0)) {
    return *(undefined2 *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


