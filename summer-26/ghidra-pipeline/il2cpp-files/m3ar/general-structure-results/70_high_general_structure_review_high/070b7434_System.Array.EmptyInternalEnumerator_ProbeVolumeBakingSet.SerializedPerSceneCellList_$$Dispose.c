/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 070b7434
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  FUN_075273c0();
  if (unaff_w22 < 0) {
    FUN_07505b74(0xc,0);
  }
  else if (unaff_w22 != 0) {
    FUN_070b8d24();
  }
  lVar1 = FUN_04ec3220(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
  if (lVar1 != unaff_x19) {
    *(long *)(unaff_x20 + 0x30) = unaff_x19;
  }
  return;
}


