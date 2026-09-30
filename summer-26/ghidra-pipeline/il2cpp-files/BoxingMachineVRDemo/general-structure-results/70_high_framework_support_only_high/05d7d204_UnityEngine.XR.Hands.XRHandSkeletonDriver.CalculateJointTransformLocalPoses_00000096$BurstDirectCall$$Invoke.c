/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSkeletonDriver.CalculateJointTransformLocalPoses_00000096$BurstDirectCall$$Invoke
ENTRY_POINT: 05d7d204
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


long * UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall__Invoke
                 (void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  long unaff_x22;
  undefined8 uVar8;
  long *unaff_x24;
  long *plStack0000000000000018;
  
  lVar3 = FUN_0360959c();
  if (lVar3 == 0) {
LAB_05d7d298:
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = FUN_0360959c();
    if (lVar3 != 0) {
      plStack0000000000000018 =
           (long *)thunk_FUN_02d9d534(*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                     );
      FUN_05d6bb84(plStack0000000000000018,lVar3,0);
      if (plStack0000000000000018 == (long *)0x0) goto LAB_05d7d3b8;
      plVar5 = plStack0000000000000018 + 2;
      *plVar5 = unaff_x20;
      goto LAB_05d7d2f4;
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_05d7d3b8;
    uVar4 = FUN_0489720c();
    if ((uVar4 & 1) != 0) {
LAB_05d7d414:
      uVar8 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                                );
      if (unaff_x19 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*unaff_x19 + 0x168))();
      }
      uVar8 = FUN_04e83184(uVar8,uVar6,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar6 = thunk_FUN_02d9d534();
      FUN_05007004(uVar6,uVar8,0);
      uVar8 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar8);
    }
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05d7d3b8;
    uVar4 = FUN_048958e4();
    puVar2 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
    ;
    if ((uVar4 & 1) == 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar3 + 0x18) <= iVar7) goto LAB_05d7d414;
          plVar5 = (long *)FUN_03aac1c4(lVar3,iVar7,*(undefined8 *)puVar2);
          if (plVar5 == (long *)0x0) break;
          uVar4 = (**(code **)(*plVar5 + 0x1c8))();
          if ((uVar4 & 1) != 0) {
            if (*(long *)(unaff_x20 + 0x10) != 0) {
              plStack0000000000000018 =
                   (long *)FUN_03aac1c4(*(long *)(unaff_x20 + 0x10),iVar7,*(undefined8 *)puVar2);
              goto LAB_05d7d3d0;
            }
            break;
          }
          lVar3 = *(long *)(unaff_x20 + 0x10);
          iVar7 = iVar7 + 1;
        } while (lVar3 != 0);
      }
      goto LAB_05d7d3b8;
    }
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05d7d3b8;
    plStack0000000000000018 = (long *)FUN_04895670();
LAB_05d7d3d0:
    lVar3 = *(long *)(unaff_x20 + 0x48);
  }
  else {
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
                    /* try { // try from 05d7d228 to 05e7d243 has its CatchHandler @ 05d7ca50 */
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0501fa14(uVar8,0,0);
                    /* try { // try from 05d7d244 to 05e7d253 has its CatchHandler @ 05d7db2c */
    if ((uVar4 & 1) == 0) goto LAB_05d7d298;
    plStack0000000000000018 = (long *)FUN_05031494(*(undefined8 *)(lVar3 + 0x28),0);
    if (plStack0000000000000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 05d7d258 to 05e7d263 has its CatchHandler @ 05d7db40 */
    bVar1 = *(byte *)(*(long *)
                       Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                     + 0x130);
    if ((*(byte *)(*plStack0000000000000018 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plStack0000000000000018 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    plVar5 = plStack0000000000000018 + 2;
    *plVar5 = unaff_x20;
LAB_05d7d2f4:
    thunk_FUN_02dd37b4(plVar5);
    lVar3 = *(long *)(unaff_x20 + 0x48);
  }
  if (lVar3 != 0) {
    FUN_048956dc();
    return plStack0000000000000018;
  }
LAB_05d7d3b8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


