/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSkeletonDriver$$OnRootPoseUpdated
ENTRY_POINT: 05d7d048
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


long * UnityEngine_XR_Hands_XRHandSkeletonDriver__OnRootPoseUpdated
                 (long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
                    /* try { // try from 05d7d058 to 05e7d063 has its CatchHandler @ 05d7db24 */
  if ((DAT_06b82cd9 & 1) == 0) {
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
                );
                    /* try { // try from 05d7d080 to 05e7d08b has its CatchHandler @ 05d7dae8 */
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02d6084c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
                    /* try { // try from 05d7d0c0 to 05e7d0cb has its CatchHandler @ 05d7dad4 */
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                );
    FUN_02d6084c(PTR_DAT_067693f0);
    DAT_06b82cd9 = 1;
  }
  puVar2 = PTR_DAT_0675e258;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_0501fa14(param_3,0,0);
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
  ;
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar5 = FUN_0489720c(*(long *)(param_1 + 0x40),param_3,&stack0x00000008,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
                          );
      if ((uVar5 & 1) != 0) {
        return in_stack_00000008;
      }
      plVar6 = (long *)FUN_05031494(param_3,0);
      if (plVar6 == (long *)0x0) {
        in_stack_00000008 = plVar6;
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      bVar1 = *(byte *)(*(long *)
                         Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                       + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
         )) {
LAB_05d7d430:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      plVar6[2] = param_1;
      in_stack_00000008 = plVar6;
      thunk_FUN_02dd37b4(plVar6 + 2,param_1);
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_048956dc(*(long *)(param_1 + 0x40),param_3,in_stack_00000008,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                    );
        return in_stack_00000008;
      }
    }
    goto LAB_05d7d3b8;
  }
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_05d7d3b8;
  uVar5 = FUN_0489720c(*(long *)(param_1 + 0x48),param_2,&stack0x00000018,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
  puVar3 = PTR_DAT_067693f0;
  if ((uVar5 & 1) != 0) {
    return in_stack_00000018;
  }
  if (*(int *)(*(long *)PTR_DAT_067693f0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = FUN_0360959c(param_2,*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                      );
  if (lVar7 == 0) {
LAB_05d7d298:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar7 = FUN_0360959c(param_2,*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                        );
    if (lVar7 != 0) {
      plVar6 = (long *)thunk_FUN_02d9d534(*(undefined8 *)
                                           Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                         );
      FUN_05d6bb84(plVar6,lVar7,0);
      in_stack_00000018 = plVar6;
      if (plVar6 == (long *)0x0) goto LAB_05d7d3b8;
      plVar6 = plVar6 + 2;
      *plVar6 = param_1;
      goto LAB_05d7d2f4;
    }
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_05d7d3b8;
    uVar5 = FUN_0489720c(*(long *)(param_1 + 0x48),param_2,&stack0x00000018,*(undefined8 *)puVar4);
    if ((uVar5 & 1) != 0) {
LAB_05d7d414:
      uVar11 = thunk_FUN_02dc61f4(
                                 Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                                 );
      if (param_2 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      }
      uVar11 = FUN_04e83184(uVar11,uVar9,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar9 = thunk_FUN_02d9d534();
      FUN_05007004(uVar9,uVar11,0);
      uVar11 = thunk_FUN_02dc61f4(
                                 Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar9,uVar11);
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_05d7d3b8;
    uVar5 = FUN_048958e4(*(long *)(param_1 + 0x18),param_2,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                        );
    puVar2 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
    ;
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 != 0) {
        iVar10 = 0;
        do {
          if (*(int *)(lVar7 + 0x18) <= iVar10) goto LAB_05d7d414;
          plVar6 = (long *)FUN_03aac1c4(lVar7,iVar10,*(undefined8 *)puVar2);
          if (plVar6 == (long *)0x0) break;
          uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x1d0));
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x10) != 0) {
              plVar6 = (long *)FUN_03aac1c4(*(long *)(param_1 + 0x10),iVar10,*(undefined8 *)puVar2);
              goto LAB_05d7d3d0;
            }
            break;
          }
          lVar7 = *(long *)(param_1 + 0x10);
          iVar10 = iVar10 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_05d7d3b8;
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_05d7d3b8;
    plVar6 = (long *)FUN_04895670(*(long *)(param_1 + 0x18),param_2,
                                  *(undefined8 *)
                                   Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
                                 );
LAB_05d7d3d0:
    lVar7 = *(long *)(param_1 + 0x48);
  }
  else {
    uVar11 = *(undefined8 *)(lVar7 + 0x28);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0501fa14(uVar11,0,0);
    if ((uVar5 & 1) == 0) goto LAB_05d7d298;
    plVar8 = (long *)FUN_05031494(*(undefined8 *)(lVar7 + 0x28),0);
    if (plVar8 == (long *)0x0) {
      in_stack_00000018 = plVar8;
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    bVar1 = *(byte *)(*(long *)
                       Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                     + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__)
       ) goto LAB_05d7d430;
    plVar6 = plVar8 + 2;
    *plVar6 = param_1;
    in_stack_00000018 = plVar8;
LAB_05d7d2f4:
    thunk_FUN_02dd37b4(plVar6,param_1);
    lVar7 = *(long *)(param_1 + 0x48);
    plVar6 = in_stack_00000018;
  }
  in_stack_00000018 = plVar6;
  if (lVar7 != 0) {
    FUN_048956dc(lVar7,param_2,plVar6,
                 *(undefined8 *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                );
    return plVar6;
  }
LAB_05d7d3b8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


