/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithIntInputSocket_WhenConvert_IntInputSocketIsConverted
ENTRY_POINT: 045eec60
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithIntInputSocket_WhenConvert_IntInputSocketIsConverted
               (void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_041f34e8();
  if (((*(long *)(unaff_x19 + 0x28) != 0) &&
      (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
    FUN_041f3a4c(lVar1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


