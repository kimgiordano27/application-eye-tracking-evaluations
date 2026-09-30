/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 03c93194
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


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__Dispose
               (long param_1,undefined8 param_2)

{
  void *__src;
  void *unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  long unaff_x29;
  
  __src = (void *)thunk_FUN_02cd0998(param_2,param_1 + 0x20);
  memcpy(unaff_x22,__src,unaff_x21);
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


