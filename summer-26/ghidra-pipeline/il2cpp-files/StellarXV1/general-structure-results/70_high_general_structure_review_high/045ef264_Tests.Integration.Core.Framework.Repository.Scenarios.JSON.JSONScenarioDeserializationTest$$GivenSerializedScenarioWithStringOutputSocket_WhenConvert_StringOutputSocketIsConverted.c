/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithStringOutputSocket_WhenConvert_StringOutputSocketIsConverted
ENTRY_POINT: 045ef264
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithStringOutputSocket_WhenConvert_StringOutputSocketIsConverted
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  
  if (param_1 != 0) {
    FUN_042f72d4(param_1,0);
    if (((*(long *)(unaff_x19 + 0x28) != 0) &&
        (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar1 != 0)) &&
       (lVar1 = FUN_042fb8d0(lVar1,0), lVar1 != 0)) {
      FUN_042f72d4(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


