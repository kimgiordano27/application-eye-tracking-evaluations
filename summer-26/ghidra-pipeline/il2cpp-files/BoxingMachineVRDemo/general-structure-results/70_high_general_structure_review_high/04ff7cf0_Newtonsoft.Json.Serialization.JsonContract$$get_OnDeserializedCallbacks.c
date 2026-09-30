/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 04ff7cf0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    }
    lVar1 = FUN_04f571c4();
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x10) == 0) {
        lVar1 = FUN_04f56acc();
        if (lVar1 == 0) goto LAB_04ff7d3c;
        if (*(int *)(lVar1 + 0x10) != 0) {
          *(undefined4 *)(unaff_x19 + 0x1c) = 1;
        }
      }
      return;
    }
  }
LAB_04ff7d3c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


