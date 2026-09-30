/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 047dfba0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar3;
  size_t unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  size_t unaff_x26;
  long lVar4;
  long unaff_x29;
  
  pcVar2 = *(code **)(param_2 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x10) = *unaff_x21;
  (*pcVar2)();
  lVar4 = *(long *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x29 + -0x20);
  if (lVar3 == 0) {
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x28)) {
      unaff_x25 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x21,unaff_x25,unaff_x26);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x48) + 0x28)) {
      unaff_x24 = (void *)(unaff_x29 + -0x30);
    }
    memcpy(unaff_x20,unaff_x24,unaff_x23);
    lVar3 = *(long *)(lVar4 + 0xc0);
    uVar1 = **(undefined8 **)(lVar3 + 0x50);
    if (-1 < *(int *)(*(long *)(lVar3 + 0x30) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    if (-1 < *(int *)(*(long *)(lVar3 + 0x48) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    pcVar2 = (code *)(*(undefined8 **)(lVar3 + 0x50))[2];
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x20;
    (*pcVar2)(uVar1);
  }
  else {
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x48) + 0x28)) {
      unaff_x24 = (void *)(unaff_x29 + -0x30);
    }
    memcpy(unaff_x20,unaff_x24,unaff_x23);
    FUN_03642988(lVar3,*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x80) + 0x20);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


