/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSkeletonDriver$$OnJointsUpdated
ENTRY_POINT: 05d7d104
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * UnityEngine_XR_Hands_XRHandSkeletonDriver__OnJointsUpdated(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  long unaff_x22;
  undefined8 uVar8;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
  }
                    /* try { // try from 05d7d118 to 05e7d123 has its CatchHandler @ 05d7dad0 */
  uVar3 = FUN_0501fa14();
  if ((uVar3 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      uVar3 = FUN_0489720c();
      if ((uVar3 & 1) != 0) {
        return in_stack_00000008;
      }
      plVar4 = (long *)FUN_05031494();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      bVar1 = *(byte *)(*(long *)
                         Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                       + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
         )) {
LAB_05d7d430:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      plVar4[2] = unaff_x20;
      thunk_FUN_02dd37b4();
      if (*(long *)(unaff_x20 + 0x40) != 0) {
        FUN_048956dc();
        return plVar4;
      }
    }
    goto LAB_05d7d3b8;
  }
  if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_05d7d3b8;
  uVar3 = FUN_0489720c();
  puVar2 = PTR_DAT_067693f0;
  if ((uVar3 & 1) != 0) {
    return in_stack_00000018;
  }
  if (*(int *)(*(long *)PTR_DAT_067693f0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar5 = FUN_0360959c();
  if (lVar5 == 0) {
LAB_05d7d298:
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar5 = FUN_0360959c();
    if (lVar5 != 0) {
      in_stack_00000018 =
           (long *)thunk_FUN_02d9d534(*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                     );
      FUN_05d6bb84(in_stack_00000018,lVar5,0);
      if (in_stack_00000018 == (long *)0x0) goto LAB_05d7d3b8;
      plVar4 = in_stack_00000018 + 2;
      *plVar4 = unaff_x20;
      goto LAB_05d7d2f4;
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_05d7d3b8;
    uVar3 = FUN_0489720c();
    if ((uVar3 & 1) != 0) {
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
    uVar3 = FUN_048958e4();
    puVar2 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
    ;
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x10);
      if (lVar5 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar5 + 0x18) <= iVar7) goto LAB_05d7d414;
          plVar4 = (long *)FUN_03aac1c4(lVar5,iVar7,*(undefined8 *)puVar2);
          if (plVar4 == (long *)0x0) break;
          uVar3 = (**(code **)(*plVar4 + 0x1c8))();
          if ((uVar3 & 1) != 0) {
            if (*(long *)(unaff_x20 + 0x10) != 0) {
              in_stack_00000018 =
                   (long *)FUN_03aac1c4(*(long *)(unaff_x20 + 0x10),iVar7,*(undefined8 *)puVar2);
              goto LAB_05d7d3d0;
            }
            break;
          }
          lVar5 = *(long *)(unaff_x20 + 0x10);
          iVar7 = iVar7 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_05d7d3b8;
    }
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05d7d3b8;
    in_stack_00000018 = (long *)FUN_04895670();
LAB_05d7d3d0:
    lVar5 = *(long *)(unaff_x20 + 0x48);
  }
  else {
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_0501fa14(uVar8,0,0);
    if ((uVar3 & 1) == 0) goto LAB_05d7d298;
    in_stack_00000018 = (long *)FUN_05031494(*(undefined8 *)(lVar5 + 0x28),0);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    bVar1 = *(byte *)(*(long *)
                       Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                     + 0x130);
    if ((*(byte *)(*in_stack_00000018 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000018 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__)
       ) goto LAB_05d7d430;
    plVar4 = in_stack_00000018 + 2;
    *plVar4 = unaff_x20;
LAB_05d7d2f4:
    thunk_FUN_02dd37b4(plVar4);
    lVar5 = *(long *)(unaff_x20 + 0x48);
  }
  if (lVar5 != 0) {
    FUN_048956dc();
    return in_stack_00000018;
  }
LAB_05d7d3b8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


