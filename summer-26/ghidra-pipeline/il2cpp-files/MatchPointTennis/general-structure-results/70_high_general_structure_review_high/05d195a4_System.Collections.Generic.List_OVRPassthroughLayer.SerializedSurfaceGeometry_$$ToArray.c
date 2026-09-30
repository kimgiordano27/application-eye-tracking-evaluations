/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 05d195a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray
               (double param_1,undefined1 param_2 [16],double param_3,undefined8 param_4,
               long param_5)

{
  int iVar1;
  int in_w8;
  double in_x10;
  
  iVar1 = -0x80000000;
  if (param_3 * param_1 != in_x10) {
    iVar1 = (int)(param_3 * param_1);
  }
  if (in_w8 < iVar1) {
    FUN_05d174e8(param_4,in_w8,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xf0));
    return;
  }
  return;
}


