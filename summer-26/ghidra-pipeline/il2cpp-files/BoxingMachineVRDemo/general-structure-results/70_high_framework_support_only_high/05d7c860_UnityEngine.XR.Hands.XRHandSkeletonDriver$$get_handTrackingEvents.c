/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSkeletonDriver$$get_handTrackingEvents
ENTRY_POINT: 05d7c860
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_XR_Hands_XRHandSkeletonDriver__get_handTrackingEvents(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 in_w8;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar8;
  long lVar9;
  
  *(undefined1 *)(unaff_x21 + 0xcd8) = in_w8;
  if (unaff_x20 == (long *)0x0) {
LAB_05d7c978:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar8 = unaff_x20 + 2;
  if (*plVar8 == 0) {
    lVar7 = *unaff_x20;
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
        uVar5 = (**(code **)(*unaff_x20 + 0x168))();
        uVar6 = thunk_FUN_02dc61f4(
                                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                                  );
        uVar4 = FUN_04e8db00(uVar4,uVar5,uVar6,0);
        goto LAB_05d7c9f4;
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05d7c978;
      FUN_03aad168(*(long *)(unaff_x19 + 0x10),0);
    }
    else {
      lVar9 = *(long *)(unaff_x19 + 0x18);
      uVar4 = (**(code **)(lVar7 + 0x1c8))();
      if (lVar9 == 0) goto LAB_05d7c978;
      FUN_048956dc(lVar9,uVar4);
    }
    puVar3 = Method_OVRResult<OVRAnchor_EraseResult>_get_Success__;
    puVar2 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__;
    *plVar8 = unaff_x19;
    thunk_FUN_02dd37b4(plVar8);
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_04894d4c(uVar4,*(undefined8 *)puVar3);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x48),uVar4);
    return;
  }
  uVar4 = thunk_FUN_02dc61f4(
                            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                            );
  uVar5 = (**(code **)(*unaff_x20 + 0x168))();
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


