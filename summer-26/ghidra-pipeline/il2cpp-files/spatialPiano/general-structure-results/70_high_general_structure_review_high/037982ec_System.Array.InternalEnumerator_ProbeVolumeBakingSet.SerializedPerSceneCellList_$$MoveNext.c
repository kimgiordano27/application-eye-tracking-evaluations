/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$MoveNext
ENTRY_POINT: 037982ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__MoveNext
               (void)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w23;
  
  FUN_03798370();
  FUN_03798370();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* try { // try from 03798330 to 0389839b has its CatchHandler @ 037983e4 */
    FUN_03ac0f78(*(long *)(unaff_x20 + 0x10),unaff_w23,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      FUN_0491dbd4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


