/*
FUNCTION_NAME: FUN_05d7c7f4
ENTRY_POINT: 05d7c7f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_05d7c7f4(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_06b82cd8 & 1) == 0) {
    FUN_02d6084c(Method_OVRResult<OVRAnchor_EraseResult>_get_Success__);
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_02d6084c(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__);
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    DAT_06b82cd8 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_05d7c978:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar8 = param_2 + 2;
  if (*plVar8 == 0) {
    lVar7 = *param_2;
    bVar1 = *(byte *)(*(long *)
                       Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                     + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
       )) {
      bVar1 = *(byte *)(*(long *)
                         Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                       + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
         )) {
        uVar4 = thunk_FUN_02dc61f4(
                                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                                  );
        uVar5 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar6 = thunk_FUN_02dc61f4(
                                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                                  );
        uVar4 = FUN_04e8db00(uVar4,uVar5,uVar6,0);
        goto LAB_05d7c9f4;
      }
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_05d7c978;
      FUN_03aad168(*(long *)(param_1 + 0x10),0,param_2,
                   *(undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                  );
    }
    else {
      lVar9 = *(long *)(param_1 + 0x18);
      uVar4 = (**(code **)(lVar7 + 0x1c8))(param_2,*(undefined8 *)(lVar7 + 0x1d0));
      if (lVar9 == 0) goto LAB_05d7c978;
      FUN_048956dc(lVar9,uVar4,param_2,
                   *(undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                  );
    }
    puVar3 = Method_OVRResult<OVRAnchor_EraseResult>_get_Success__;
    puVar2 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__;
    *plVar8 = param_1;
    thunk_FUN_02dd37b4(plVar8,param_1);
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_04894d4c(uVar4,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x48),uVar4);
    return;
  }
  uVar4 = thunk_FUN_02dc61f4(
                            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                            );
  uVar5 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
  uVar4 = FUN_04e83184(uVar4,uVar5,0);
LAB_05d7c9f4:
  thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
  uVar5 = thunk_FUN_02d9d534();
  FUN_05007004(uVar5,uVar4,0);
  uVar4 = thunk_FUN_02dc61f4(
                            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar5,uVar4);
}


