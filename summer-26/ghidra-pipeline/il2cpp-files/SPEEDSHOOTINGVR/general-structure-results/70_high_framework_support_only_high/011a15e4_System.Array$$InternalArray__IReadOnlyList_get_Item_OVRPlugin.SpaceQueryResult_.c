/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 011a15e4
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


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 011a1610 to 012a1627 has its CatchHandler @ 011a2a94 */
    FUN_00fdc2e4(PTR_DAT_0234bbd8);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_0103c2a0(param_4);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0234bbd8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_011a2de0(param_1,param_2,param_3,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
  return;
}


