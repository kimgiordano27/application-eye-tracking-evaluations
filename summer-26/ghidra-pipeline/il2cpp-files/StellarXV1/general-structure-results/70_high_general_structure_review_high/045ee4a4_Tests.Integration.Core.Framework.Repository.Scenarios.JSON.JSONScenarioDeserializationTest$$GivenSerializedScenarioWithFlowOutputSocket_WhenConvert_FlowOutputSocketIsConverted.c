/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithFlowOutputSocket_WhenConvert_FlowOutputSocketIsConverted
ENTRY_POINT: 045ee4a4
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithFlowOutputSocket_WhenConvert_FlowOutputSocketIsConverted
               (void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x21;
  long lVar4;
  long unaff_x22;
  
  FUN_0768890c(unaff_x22 + 0x20,0);
  uVar2 = FUN_07691f40();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(unaff_x21 + 0x90);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0768890c(lVar4 + 0x20,0);
    uVar1 = FUN_07691f40();
    if (lVar3 == 0) goto LAB_045ee524;
  }
  else {
    if (lVar3 == 0) {
LAB_045ee524:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = 0;
  }
  FUN_0442bf80(lVar3,uVar1 & 1,0);
  return;
}


