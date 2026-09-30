/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 03640eec
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x10);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03640f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c8))
              (plVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_3,
               *(undefined8 *)(*plVar1 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


