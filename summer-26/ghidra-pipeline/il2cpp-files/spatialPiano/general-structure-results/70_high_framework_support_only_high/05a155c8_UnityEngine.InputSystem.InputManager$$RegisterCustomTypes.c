/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$RegisterCustomTypes
ENTRY_POINT: 05a155c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_InputSystem_InputManager__RegisterCustomTypes(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar10;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  iVar8 = 2;
  if ((unaff_x22 & 1) == 0) {
    iVar8 = 0;
  }
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x10) != 0) {
      iVar8 = *(int *)(unaff_x19 + 0x10);
    }
    if (*(int *)(unaff_x19 + 0x14) != 0) {
      in_stack_00000008._4_4_ = *(int *)(unaff_x19 + 0x14);
      uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                                 ,(long)&stack0x00000008 + 4);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x25);
      }
      FUN_05a159ec(*(undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                   ,uVar5);
      FUN_05a15ac4();
    }
    uVar6 = FUN_05a11f14();
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a159ec(*(undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                   ,0);
      FUN_05a15ac4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x28);
    if ((lVar10 != 0) && (0 < (int)*(ulong *)(lVar10 + 0x18))) {
      uVar6 = 0;
      uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar9 = FUN_04f6ebb4(*(undefined8 *)(lVar10 + 0x20 + uVar6 * 8),0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05a15ac4();
        }
        uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    iVar1 = *(int *)(unaff_x19 + 0x20);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
LAB_05a1571c:
        in_stack_00000008._4_4_ = 2;
      }
      else {
        if (iVar1 != 1) goto LAB_05a157e0;
        in_stack_00000008._4_4_ = 3;
      }
LAB_05a15794:
      uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&stack0x00000008 + 4
                                );
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x25);
      }
      uVar7 = *(undefined8 *)
               Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
      ;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          in_stack_00000008._4_4_ = 1;
          goto LAB_05a15794;
        }
        if (iVar1 == 4) goto LAB_05a1571c;
        goto LAB_05a157e0;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a159ec(*(undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                   ,0);
      FUN_05a15ac4();
      in_stack_00000008._4_4_ = 3;
      uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&stack0x00000008 + 4
                                );
      uVar7 = *(undefined8 *)
               Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
      ;
    }
    FUN_05a159ec(uVar7,uVar5);
    FUN_05a15ac4();
  }
LAB_05a157e0:
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
  ;
  if (iVar8 != 0) {
    in_stack_00000008._4_4_ = iVar8;
    uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_get_Task__,
                               (long)&stack0x00000008 + 4);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x25);
    }
    FUN_05a159ec(*(undefined8 *)puVar2,uVar5);
    FUN_05a15ac4();
  }
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
  ;
  if (*(char *)(unaff_x20 + 0x15) == '\0') {
    if (*(char *)(unaff_x20 + 0x12) == '\0') {
      uVar5 = *(undefined8 *)
               Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
      ;
      in_stack_00000008._4_4_ = 0;
      goto LAB_05a15868;
    }
    in_stack_00000008._4_4_ = 1;
  }
  else {
    in_stack_00000008._4_4_ = 2;
  }
  uVar5 = *(undefined8 *)
           Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
  ;
LAB_05a15868:
  uVar5 = thunk_FUN_02f44ec4(uVar5,(long)&stack0x00000008 + 4);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x25);
  }
  FUN_05a159ec(*(undefined8 *)puVar2,uVar5);
  FUN_05a15ac4();
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
  ;
  if (*(char *)(unaff_x20 + 0x13) != '\0') {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a159ec(*(undefined8 *)puVar2,0);
    FUN_05a15ac4();
  }
  puVar2 = PTR_DAT_067ce588;
  if ((*(char *)(unaff_x20 + 0x14) != '\0') ||
     ((unaff_x19 != 0 && (uVar6 = FUN_05a11e40(), (uVar6 & 1) != 0)))) {
    puVar3 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
    ;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05a159ec(*(undefined8 *)puVar3,0);
    FUN_05a15ac4();
  }
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
  ;
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
  ;
  uVar5 = FUN_0511a4dc(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar2);
  }
  puVar2 = Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__;
  uVar5 = Newtonsoft_Json_Utilities_ImmutableCollectionsUtils___cctor
                    (uVar5,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x25);
  }
  FUN_05a159ec(*(undefined8 *)puVar2,uVar5);
  FUN_05a15ac4();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*unaff_x21 + 0x168))();
  return;
}


