/*
FUNCTION_NAME: UnityEngine.CubemapArray$$Apply
ENTRY_POINT: 068b8244
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_CubemapArray__Apply(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint in_w9;
  long unaff_x19;
  undefined8 unaff_x21;
  
  bVar1 = *(byte *)(*(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo + 0x130)
  ;
  if ((bVar1 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo)) {
    FUN_06a573b4(param_2,0);
  }
  if (*(long *)(unaff_x19 + 0x4c8) != 0) {
    FUN_068e4fc4();
    if (*(long *)(unaff_x19 + 0x4c8) != 0) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0x4c8) + 0x40) = unaff_x21;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


