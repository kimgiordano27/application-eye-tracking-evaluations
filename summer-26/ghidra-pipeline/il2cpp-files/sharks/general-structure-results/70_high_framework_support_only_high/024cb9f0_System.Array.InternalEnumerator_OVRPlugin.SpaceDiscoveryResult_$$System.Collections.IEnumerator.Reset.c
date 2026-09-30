/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 024cb9f0
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01851c08(PTR_DAT_037f66a8);
  uVar1 = thunk_FUN_01861bbc();
  uVar2 = thunk_FUN_01851c08(PTR_DAT_037fa330);
  FUN_02b3cbec(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar1);
}


