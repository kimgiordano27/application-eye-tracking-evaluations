/*
FUNCTION_NAME: FUN_05d7e2dc
ENTRY_POINT: 05d7e2dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d7e2dc(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_06b82d12 & 1) == 0) {
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02d6084c(PTR_DAT_06768e20);
    DAT_06b82d12 = 1;
  }
  uVar1 = UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall__GetFunctionPointerDiscard
                    (param_1,param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_047caff8(*(long *)(param_1 + 0x20),uVar1,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                        );
    if ((uVar2 & 1) != 0) {
      uVar3 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                );
      uVar4 = 0;
      if (param_2 != (long *)0x0) {
        uVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      }
      uVar5 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                                );
      uVar4 = FUN_04e8db00(uVar3,uVar4,uVar5,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar3 = thunk_FUN_02d9d534();
      FUN_05007004(uVar3,uVar4,0);
      uVar4 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3,uVar4);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_047cadf0(*(long *)(param_1 + 0x20),uVar1,param_2,*(undefined8 *)PTR_DAT_06768e20);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


