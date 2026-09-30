/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04e7a1bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char in_NG;
  char in_OV;
  uint in_w8;
  uint in_w9;
  int *in_x10;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x22;
  long unaff_x23;
  
  while( true ) {
    if (in_NG == in_OV) {
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x22;
      thunk_FUN_03d233cc();
      *(long *)(unaff_x19 + 0x10) = unaff_x23;
      thunk_FUN_03d233cc((long *)(unaff_x19 + 0x10));
      return;
    }
    if (in_w9 <= in_w8) break;
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar3 = 0;
    if (unaff_w20 != 0) {
      iVar3 = in_x10[-1] / unaff_w20;
    }
    uVar2 = in_x10[-1] - iVar3 * unaff_w20;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar2) break;
    lVar1 = unaff_x23 + (long)(int)uVar2 * 4;
    in_w8 = in_w8 + 1;
    *in_x10 = *(int *)(lVar1 + 0x20) + -1;
    *(uint *)(lVar1 + 0x20) = in_w8;
    in_OV = SBORROW4(in_w8,*(int *)(unaff_x19 + 0x24));
    in_NG = (int)(in_w8 - *(int *)(unaff_x19 + 0x24)) < 0;
    in_x10 = in_x10 + 6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


