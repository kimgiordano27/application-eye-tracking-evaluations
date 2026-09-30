/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 015e5c08
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  int in_w8;
  void *unaff_x19;
  long unaff_x20;
  long lVar4;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  void *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (-1 < in_w8) {
    unaff_x25 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x19,unaff_x25,unaff_x21);
  plVar2 = (long *)thunk_FUN_0124b7d8(**(undefined8 **)(unaff_x27 + 0xc0));
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (-1 < *(int *)(**(long **)(lVar4 + 0xc0) + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x23,unaff_x22,unaff_x21);
  uVar3 = thunk_FUN_0124b7d8(**(undefined8 **)(lVar4 + 0xc0));
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x140));
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar1 & 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


