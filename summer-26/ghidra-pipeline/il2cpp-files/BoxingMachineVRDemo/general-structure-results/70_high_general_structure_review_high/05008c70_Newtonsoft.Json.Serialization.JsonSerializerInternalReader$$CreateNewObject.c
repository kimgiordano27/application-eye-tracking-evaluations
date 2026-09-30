/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 05008c70
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(long *param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  int unaff_w23;
  
  if (param_1 != (long *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    if (lVar1 != 0) {
      if (unaff_w23 == 0) {
        FUN_04f70334();
      }
      else {
        FUN_04f702ac();
      }
      return unaff_w19;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


