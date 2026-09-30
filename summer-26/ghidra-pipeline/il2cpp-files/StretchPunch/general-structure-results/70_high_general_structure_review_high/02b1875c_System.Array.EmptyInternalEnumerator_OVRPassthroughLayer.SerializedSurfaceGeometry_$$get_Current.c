/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 02b1875c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
          (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    uVar9 = (uint)param_1;
    if ((bool)in_ZR) {
                    /* try { // try from 02b18764 to 02c18787 has its CatchHandler @ 02b183bc */
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8(lVar5);
                    /* try { // try from 02b18788 to 02c18797 has its CatchHandler @ 02b18798 */
      }
      lVar6 = *unaff_x24;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 02b1874c with catch @ 02b18798
                       catch() { ... } // from try @ 02b18788 with catch @ 02b18798 */
                    /* try { // try from 02b1879c to 02c1879f has its CatchHandler @ 02b187a8 */
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 02b187a0 to 02c187ab has its CatchHandler @ 02b183bc */
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02b187d4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc();
LAB_02b187d4:
      uVar7 = (*(code *)*puVar4)();
      if ((uVar7 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_033b36f4();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30) = in_stack_00000000;
            return 1;
          }
          goto LAB_02b18a50;
        }
        return 0;
      }
      uVar9 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar9 <= (uint)unaff_x19) goto LAB_02b18a50;
    uVar1 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
    if ((int)uVar9 <= unaff_w29) {
      FUN_033b37f8(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w29 = unaff_w29 + 1;
    if ((uint)param_1 <= uVar1) break;
    unaff_x19 = (long)(int)uVar1;
    in_ZR = *(int *)(unaff_x26 + (long)(int)uVar1 * (long)(int)unaff_x23 + 0x20) == unaff_w27;
  } while( true );
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar9 = *(uint *)(unaff_x21 + 0x20);
    if (uVar9 == (uint)param_1) {
      FUN_02b18e14();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
      if (lVar5 == 0) goto LAB_02b18a54;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = unaff_w27 / (int)uVar1;
      }
      uVar3 = unaff_w27 - iVar2 * uVar1;
      if (uVar1 <= uVar3) goto LAB_02b18a50;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02b18a54:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_02b18a50;
    lVar5 = (long)(int)uVar9;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar9 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) {
LAB_02b18a50:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar5 = (long)(int)uVar9;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x18 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x18;
  *(int *)(lVar5 + 0x20) = unaff_w27;
  iVar2 = *unaff_x28;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(int *)(lVar5 + 0x24) = iVar2 + -1;
  thunk_FUN_01e10808((undefined8 *)(lVar5 + 0x28));
  *(undefined4 *)(lVar5 + 0x30) = in_stack_00000000;
  *unaff_x28 = uVar9 + 1;
  return 1;
}


