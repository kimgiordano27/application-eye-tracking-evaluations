/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 06ca50c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_ToDisplayStringsDelegate(long param_1)

{
  void *__src;
  long lVar1;
  long unaff_x21;
  size_t unaff_x23;
  void *unaff_x24;
  long unaff_x29;
  
  lVar1 = *(long *)(unaff_x21 + 0x20);
  __src = *(void **)(unaff_x29 + -0x30);
  if (-1 < *(int *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x18) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x24,__src,unaff_x23);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    FUN_04481fb8(lVar1);
  }
  FUN_04447bd0();
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


