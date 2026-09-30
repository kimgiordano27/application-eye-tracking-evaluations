/*
FUNCTION_NAME: FUN_06862ff8
ENTRY_POINT: 06862ff8
PROGRAM: Untangled-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_06862ff8(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo;
  puVar2 = OVRPlugin_Vector4s_TypeInfo;
  puVar1 = OVRPlugin_TrackingConfidence_TypeInfo;
  if ((DAT_071d6b93 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    FUN_02f07e70(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    FUN_02f07e70(OVRRaycaster_<>c_TypeInfo);
    FUN_02f07e70(OVRPlugin_Vector4s_TypeInfo);
    FUN_02f07e70(OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
    FUN_02f07e70(OVRPlugin_TrackingConfidence_TypeInfo);
    DAT_071d6b93 = 1;
  }
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_06863148();
  FUN_046e0018(param_1,param_2,param_3,uVar4,*(undefined8 *)puVar2);
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar5 = *(long *)puVar3;
  }
  FUN_068cbd7c(param_1,**(undefined8 **)(lVar5 + 0xb8),0);
  puVar1 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  if (*(long *)(param_1 + 0x408) != 0) {
    FUN_068cbd7c(*(long *)(param_1 + 0x408),*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),0
                );
    lVar5 = FUN_045f52f8(param_1,*(undefined8 *)puVar1);
    puVar1 = OVRRaycaster_<>c_TypeInfo;
    if (lVar5 != 0) {
      FUN_068cbd7c(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
      FUN_03658718(param_1,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


