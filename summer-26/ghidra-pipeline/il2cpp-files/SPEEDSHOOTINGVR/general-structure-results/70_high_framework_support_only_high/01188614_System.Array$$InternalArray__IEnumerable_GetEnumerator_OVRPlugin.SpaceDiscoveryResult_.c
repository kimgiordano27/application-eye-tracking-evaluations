/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01188614
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* try { // try from 01188618 to 01288627 has its CatchHandler @ 01188754 */
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_0103c2a0(param_3);
    }
  }
  FUN_01cbf284(0);
                    /* try { // try from 0118865c to 0128867b has its CatchHandler @ 01188748 */
  if (*(int *)(*(long *)PTR_DAT_0234bbd8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01dae6e0();
  FUN_01c07994(param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
  FUN_01dad9b4();
  return;
}


