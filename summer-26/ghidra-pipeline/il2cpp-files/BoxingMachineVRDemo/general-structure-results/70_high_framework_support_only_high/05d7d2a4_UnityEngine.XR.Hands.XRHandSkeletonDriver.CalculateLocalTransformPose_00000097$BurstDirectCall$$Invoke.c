/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSkeletonDriver.CalculateLocalTransformPose_00000097$BurstDirectCall$$Invoke
ENTRY_POINT: 05d7d2a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall__Invoke
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  int iVar8;
  
  thunk_FUN_02dbd7b4();
                    /* try { // try from 05d7d2b4 to 05e7d2b7 has its CatchHandler @ 05d7daf4 */
                    /* try { // try from 05d7d2b8 to 05e7d2c3 has its CatchHandler @ 05d7db4c */
  lVar2 = FUN_0360959c();
  if (lVar2 == 0) {
    if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_05d7d3b8;
    uVar4 = FUN_0489720c();
    if ((uVar4 & 1) != 0) {
LAB_05d7d414:
      uVar6 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                                );
      if (unaff_x19 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*unaff_x19 + 0x168))();
      }
      uVar6 = FUN_04e83184(uVar6,uVar7,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar7 = thunk_FUN_02d9d534();
      FUN_05007004(uVar7,uVar6,0);
      uVar6 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar6);
    }
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05d7d3b8;
                    /* try { // try from 05d7d33c to 05e7d34b has its CatchHandler @ 05d7db9c */
    uVar4 = FUN_048958e4();
    puVar1 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
    ;
    if ((uVar4 & 1) == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 != 0) {
                    /* try { // try from 05d7d370 to 05e7d41b has its CatchHandler @ 05d7dba0 */
        iVar8 = 0;
        do {
          if (*(int *)(lVar2 + 0x18) <= iVar8) goto LAB_05d7d414;
          plVar5 = (long *)FUN_03aac1c4(lVar2,iVar8,*(undefined8 *)puVar1);
          if (plVar5 == (long *)0x0) break;
          uVar4 = (**(code **)(*plVar5 + 0x1c8))();
          if ((uVar4 & 1) != 0) {
            if (*(long *)(unaff_x20 + 0x10) != 0) {
              lVar3 = FUN_03aac1c4(*(long *)(unaff_x20 + 0x10),iVar8,*(undefined8 *)puVar1);
              goto LAB_05d7d3d0;
            }
            break;
          }
          lVar2 = *(long *)(unaff_x20 + 0x10);
          iVar8 = iVar8 + 1;
        } while (lVar2 != 0);
      }
      goto LAB_05d7d3b8;
    }
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05d7d3b8;
    lVar3 = FUN_04895670();
LAB_05d7d3d0:
    lVar2 = *(long *)(unaff_x20 + 0x48);
  }
  else {
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                              );
                    /* try { // try from 05d7d2d4 to 05e7d2ef has its CatchHandler @ 05d7db58 */
    FUN_05d6bb84(lVar3,lVar2,0);
    if (lVar3 == 0) goto LAB_05d7d3b8;
    *(long *)(lVar3 + 0x10) = unaff_x20;
    thunk_FUN_02dd37b4((long *)(lVar3 + 0x10));
    lVar2 = *(long *)(unaff_x20 + 0x48);
  }
  if (lVar2 != 0) {
    FUN_048956dc();
    return lVar3;
  }
LAB_05d7d3b8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


