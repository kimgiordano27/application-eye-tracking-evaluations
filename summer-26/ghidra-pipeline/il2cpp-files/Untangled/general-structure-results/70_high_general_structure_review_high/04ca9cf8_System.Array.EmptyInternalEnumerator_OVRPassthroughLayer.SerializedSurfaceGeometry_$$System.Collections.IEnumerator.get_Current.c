/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04ca9cf8
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined8 uVar10;
  uint uVar11;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  undefined8 uVar12;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
code_r0x04ca9cf8:
  uVar11 = (uint)unaff_x25;
  uVar9 = (uint)unaff_x20;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 8);
  uVar10 = *(undefined8 *)(unaff_x27 + unaff_x26 * unaff_x21 + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  lVar6 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04ca9db4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c(unaff_x23,lVar5,0);
LAB_04ca9db4:
  uVar4 = (*(code *)*puVar2)(unaff_x23,uVar10);
  uVar7 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_04ca9ec4;
        if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x28 + 0x24) + 1;
          goto LAB_04ca9e78;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_04ca9ec4;
        if (uVar9 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar9 * 0x28 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x28 + 0x24);
LAB_04ca9e78:
          lVar5 = unaff_x27 + unaff_x25 * 0x28;
          uVar12 = *(undefined8 *)(lVar5 + 0x38);
          uVar10 = *(undefined8 *)(lVar5 + 0x30);
          in_stack_00000010[2] = *(undefined8 *)(lVar5 + 0x40);
          in_stack_00000010[1] = uVar12;
          *in_stack_00000010 = uVar10;
          *unaff_x29 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined4 *)(lVar5 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar11;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_04ca9ec8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    do {
      uVar11 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar11;
      unaff_x20 = uVar7 & 0xffffffff;
      uVar9 = (uint)uVar7;
      if ((int)uVar11 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_04ca9ec4;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar11) goto LAB_04ca9ec8;
      unaff_x29 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar7 = unaff_x25;
    } while (*unaff_x29 != unaff_w28);
    unaff_x23 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x23 != (long *)0x0) break;
    plVar3 = (long *)FUN_03378db8(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_04ca9ec4;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined8 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28));
  } while( true );
  param_1 = in_stack_00000018;
  unaff_x26 = unaff_x25;
  if (unaff_x23 == (long *)0x0) {
LAB_04ca9ec4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  goto code_r0x04ca9cf8;
}


