/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 024cac08
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined4 uVar1;
  uint in_w8;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong uVar2;
  
  if (0 < (int)in_w8) {
    uVar2 = 0;
    do {
      if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      FUN_024ccb1c();
      in_w8 = *(uint *)(unaff_x22 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)in_w8);
  }
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar1 = FUN_02ae1ed4(*unaff_x21,*(undefined8 *)PTR_DAT_037fae08,0);
  *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  thunk_FUN_0188fd20();
  return;
}


