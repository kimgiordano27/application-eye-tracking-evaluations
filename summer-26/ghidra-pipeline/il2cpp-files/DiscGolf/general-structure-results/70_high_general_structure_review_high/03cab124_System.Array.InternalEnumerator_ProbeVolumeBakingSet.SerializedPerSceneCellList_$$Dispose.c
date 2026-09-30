/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 03cab124
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (ulong param_1)

{
  long unaff_x19;
  int *unaff_x20;
  int unaff_w23;
  
  while( true ) {
    if ((param_1 & 1) == 0) {
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      memcpy(&stack0x00000220,&stack0x00000000,0x220);
      FUN_03caa11c();
    }
    unaff_w23 = unaff_w23 + 1;
    if (*unaff_x20 <= unaff_w23) break;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_03ca9b50();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    memcpy(&stack0x00000220,&stack0x00000000,0x220);
    param_1 = FUN_03caaee4();
  }
  return;
}


