/*
FUNCTION_NAME: FUN_070d239c
ENTRY_POINT: 070d239c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_070d239c(long param_1,int *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_90 [9];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_07a5a9bf & 1) == 0) {
    FUN_031f20f4(OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
    FUN_031f20f4(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    FUN_031f20f4(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    FUN_031f20f4(OVRRaycaster_<>c_TypeInfo);
    FUN_031f20f4(OVRResources_<>c__DisplayClass2_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_031f20f4(OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo);
    DAT_07a5a9bf = 1;
  }
  puVar2 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_070d25f8;
  if (*(char *)(lVar7 + 0x3b) != '\0') {
    memcpy(local_90,param_2,0x48);
    uVar4 = thunk_FUN_0322ed78(*(undefined8 *)puVar2,local_90);
    FUN_070d128c(lVar7,uVar4);
  }
  puVar2 = OVRPlugin_TrackingConfidence_TypeInfo;
  if (*param_2 - 1U < 2) {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                  OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo
                                );
      FUN_042d09c8(lVar8,uVar4,*(undefined8 *)OVRRaycaster_<>c_TypeInfo,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
      *plVar5 = lVar8;
LAB_070d2580:
      lVar7 = thunk_FUN_0329bf60(plVar5,lVar8);
    }
  }
  else {
    if (*param_2 != 3) goto LAB_070d25d0;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                  OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo
                                );
      FUN_042d09c8(lVar8,uVar4,*(undefined8 *)OVRResources_<>c__DisplayClass2_0_TypeInfo,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
      *plVar5 = lVar8;
      goto LAB_070d2580;
    }
  }
  uVar3 = FUN_070d2df0(lVar7,param_2[0x10]);
  local_90[0] = 0;
  FUN_052e80a4(local_90,uVar3,param_2[1],
               *(undefined8 *)OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo);
  if (lVar6 != 0) {
    FUN_03d9dae8(lVar6,lVar8,local_90[0],
                 *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
LAB_070d25d0:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_070d25f8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


