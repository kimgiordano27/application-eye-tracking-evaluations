/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$Invoke
ENTRY_POINT: 05694b14
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton2Delegate__Invoke(void)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_052199b8(in_stack_00000008,*(undefined8 *)UnityEngine_Pool_ObjectPool<StringBuilder>_TypeInfo)
  ;
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar2);
  }
  return;
}


