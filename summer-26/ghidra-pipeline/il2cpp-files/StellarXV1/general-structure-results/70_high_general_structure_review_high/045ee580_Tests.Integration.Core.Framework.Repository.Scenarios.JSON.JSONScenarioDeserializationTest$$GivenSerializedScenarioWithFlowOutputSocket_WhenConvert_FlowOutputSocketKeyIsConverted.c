/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithFlowOutputSocket_WhenConvert_FlowOutputSocketKeyIsConverted
ENTRY_POINT: 045ee580
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithFlowOutputSocket_WhenConvert_FlowOutputSocketKeyIsConverted
               (undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_042ec328(param_1,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_042e90c4(*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_042e9a08(*(long *)(unaff_x19 + 0x28),0,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_042eb644(*(long *)(unaff_x19 + 0x28),0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar1 != 0)) {
          FUN_042fc560(lVar1,1,0);
          if ((*(long *)(unaff_x19 + 0x28) != 0) &&
             (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar1 != 0)) {
            FUN_042fc578(lVar1,1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


