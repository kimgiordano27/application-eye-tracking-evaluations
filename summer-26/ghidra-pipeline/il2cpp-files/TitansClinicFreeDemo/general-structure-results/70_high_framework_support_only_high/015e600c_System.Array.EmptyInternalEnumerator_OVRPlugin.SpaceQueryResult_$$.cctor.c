/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 015e600c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  long *unaff_x22;
  
  if (unaff_x22 != (long *)0x0) {
    uVar1 = (**(code **)(*unaff_x22 + 0x1f8))();
    if (param_1 != 0) {
      FUN_01c61184(param_1,uVar1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


