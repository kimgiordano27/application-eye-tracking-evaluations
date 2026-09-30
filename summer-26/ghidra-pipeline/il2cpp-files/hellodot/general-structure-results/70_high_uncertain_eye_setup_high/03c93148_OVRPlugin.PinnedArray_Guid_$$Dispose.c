/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$Dispose
ENTRY_POINT: 03c93148
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__Dispose(undefined8 param_1,long param_2)

{
  void *__src;
  ushort *in_x9;
  void *unaff_x19;
  ulong __n;
  long unaff_x23;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(**(long **)(param_2 + 0xc0) + 0xfc);
  if ((*in_x9 & 1) == 0) {
    FUN_02ce0978(param_1);
  }
  __src = (void *)thunk_FUN_02cd0998();
  memcpy(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__src,__n);
  memcpy(unaff_x19,&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__n);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


