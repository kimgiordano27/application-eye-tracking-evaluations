/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 04ca9ca4
PROGRAM: Untangled-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int in_w8;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int unaff_w28;
  int *piVar14;
  undefined8 uVar15;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  if (-1 < (int)(in_w8 - 1U)) {
    uVar9 = 0xffffffff;
    uVar11 = in_w8 - 1U;
    do {
      lVar13 = *(long *)(unaff_x19 + 0x18);
      if (lVar13 == 0) goto LAB_04ca9ec4;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_04ca9ec8;
      piVar14 = (int *)(lVar13 + (ulong)uVar11 * 0x28 + 0x20);
      uVar12 = (ulong)uVar11;
      if (*piVar14 == unaff_w28) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)FUN_03378db8(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar5 == (long *)0x0) goto LAB_04ca9ec4;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined8 *)(lVar13 + uVar12 * 0x28 + 0x28));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_04ca9ec4;
          lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
          uVar10 = *(undefined8 *)(lVar13 + uVar12 * 0x28 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02eea768(lVar4);
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_04ca9db4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02eea86c(plVar5,lVar4,0);
LAB_04ca9db4:
          uVar7 = (*(code *)*puVar3)(plVar5,uVar10);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar9 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_04ca9ec4;
            if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000008) goto LAB_04ca9ec8;
            *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(lVar13 + uVar12 * 0x28 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_04ca9ec4:
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar9) {
LAB_04ca9ec8:
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined4 *)(lVar4 + uVar9 * 0x28 + 0x24) =
                 *(undefined4 *)(lVar13 + uVar12 * 0x28 + 0x24);
          }
          lVar13 = lVar13 + uVar12 * 0x28;
          uVar15 = *(undefined8 *)(lVar13 + 0x38);
          uVar10 = *(undefined8 *)(lVar13 + 0x30);
          in_stack_00000010[2] = *(undefined8 *)(lVar13 + 0x40);
          in_stack_00000010[1] = uVar15;
          *in_stack_00000010 = uVar10;
          *piVar14 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined4 *)(lVar13 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = uVar11;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar13 + uVar12 * 0x28 + 0x24);
      uVar9 = (ulong)uVar11;
      uVar11 = uVar1;
    } while (-1 < (int)uVar1);
  }
  *in_stack_00000010 = 0;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  return 0;
}


