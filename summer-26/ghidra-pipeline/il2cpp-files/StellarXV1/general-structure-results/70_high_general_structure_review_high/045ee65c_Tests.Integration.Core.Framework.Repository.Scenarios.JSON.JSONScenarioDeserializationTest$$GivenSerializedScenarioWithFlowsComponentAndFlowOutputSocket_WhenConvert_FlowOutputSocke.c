/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithFlowsComponentAndFlowOutputSocket_WhenConvert_FlowOutputSocketIdIsConverted
ENTRY_POINT: 045ee65c
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithFlowsComponentAndFlowOutputSocket_WhenConvert_FlowOutputSocketIdIsConverted
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xbb0));
  *(undefined1 *)(unaff_x23 + 0x42e) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089ca704();
  if ((uVar1 & 1) != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar2 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar1 = FUN_089ca704(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      FUN_045ee704();
      return;
    }
  }
  return;
}


