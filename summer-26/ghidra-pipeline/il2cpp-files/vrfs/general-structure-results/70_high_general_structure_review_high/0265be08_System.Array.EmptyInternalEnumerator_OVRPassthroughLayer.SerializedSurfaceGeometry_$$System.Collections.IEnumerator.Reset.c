/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0265be08
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
               (void)

{
  long lVar1;
  int unaff_w20;
  
  if (unaff_w20 == 0xb6d8d76) {
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e38c78);
    if (lVar1 == 0) {
LAB_0265c56c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_0266006c();
  }
  else if (unaff_w20 == 0x102fa3de) {
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e13208);
    if (lVar1 == 0) goto LAB_0265c56c;
    FUN_0265b9a4();
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


