/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 03459d98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_VirtualKeyboardModelAnimationState>(ulong param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  long lVar5;
  long unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *__dest;
  long lVar6;
  long unaff_x26;
  long lVar7;
  long unaff_x27;
  long unaff_x29;
  
  lVar6 = in_x9 - (param_1 & 0x1fffffff0);
  __dest = (void *)(lVar6 - (unaff_x23 + 0xf & 0x1fffffff0));
  memcpy(__dest,unaff_x21,unaff_x23);
  uVar2 = FUN_02f08978(*(undefined8 *)(unaff_x26 + 8),__dest);
  if ((uVar2 & 1) == 0) {
    lVar7 = *(long *)(unaff_x20 + 0x38);
    pvVar1 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,pvVar1,unaff_x23);
    uVar2 = FUN_02f08978(*(undefined8 *)(lVar7 + 8),__dest);
    if ((uVar2 & 1) == 0) goto LAB_03459f0c;
  }
  memcpy(__dest,unaff_x21,unaff_x23);
  uVar2 = FUN_02f08978(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),__dest);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x38);
    pvVar1 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,pvVar1,unaff_x23);
    uVar3 = thunk_FUN_02f44ec4(*(undefined8 *)(lVar7 + 8),__dest);
    lVar5 = *(long *)(unaff_x20 + 0x38);
    lVar7 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c(lVar7);
      lVar5 = *(long *)(unaff_x20 + 0x38);
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    FUN_02f0939c(lVar7,uVar4,lVar6);
    if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03459f0c;
  }
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest,unaff_x22,unaff_x23);
  memmove(unaff_x21,unaff_x22,unaff_x23);
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  FUN_063c3774();
LAB_03459f0c:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


