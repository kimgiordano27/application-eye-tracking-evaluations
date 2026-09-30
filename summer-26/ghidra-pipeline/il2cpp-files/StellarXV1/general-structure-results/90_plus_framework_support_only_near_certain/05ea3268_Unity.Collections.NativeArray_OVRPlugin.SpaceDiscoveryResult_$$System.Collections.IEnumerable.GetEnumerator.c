/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05ea3268
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea3204 with catch @ 05ea3274
                        */
                    /* WARNING: Could not recover jumptable at 0x05ea3288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(unaff_x19 + 8),
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


