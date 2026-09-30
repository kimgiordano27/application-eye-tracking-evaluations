/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithColorInputSocket_WhenConvert_ColorInputSocketIsConverted
ENTRY_POINT: 045eee18
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithColorInputSocket_WhenConvert_ColorInputSocketIsConverted
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  thunk_FUN_040d65a8();
  uVar1 = FUN_089ca704();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (unaff_x20 != 0) {
    uVar2 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>();
    uVar3 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    uVar1 = FUN_089ca704(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar1 = FUN_089ca704(uVar3,0,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    if (((*(long *)(unaff_x19 + 0x28) != 0) &&
        (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x50), lVar4 != 0)) {
      FUN_0442a9c8(lVar4,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_042e9c68(*(long *)(unaff_x19 + 0x28),0);
        FUN_045eef08();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


