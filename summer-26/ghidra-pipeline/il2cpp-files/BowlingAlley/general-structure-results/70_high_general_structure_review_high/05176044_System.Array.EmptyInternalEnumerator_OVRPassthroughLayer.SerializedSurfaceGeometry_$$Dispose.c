/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 05176044
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x23;
  long unaff_x24;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_032934b8(lVar7);
  }
  lVar8 = *unaff_x23;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_051760cc;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac();
LAB_051760cc:
  uVar5 = (*(code *)*puVar6)();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar14 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {
LAB_0517632c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar14 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar11 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_05176328;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_0517632c;
        puVar16 = (uint *)(lVar7 + (ulong)uVar14 * 0x24 + 0x20);
        uVar15 = (ulong)uVar14;
        if (*puVar16 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_03896198(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_05176328;
            uVar12 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined4 *)(lVar7 + uVar15 * 0x24 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_05176328;
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar15 * 0x24 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_032934b8(lVar8);
            }
            lVar10 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_05176218;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)FUN_032937ac(plVar9,lVar8,0);
LAB_05176218:
            uVar12 = (*(code *)*puVar6)(plVar9,uVar1,in_stack_00000018._4_4_,puVar6[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar8 = *(long *)(unaff_x19 + 0x10);
              if (lVar8 == 0) goto LAB_05176328;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_0517632c;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0x24 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x18);
              if (lVar8 == 0) goto LAB_05176328;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar11) goto LAB_0517632c;
              *(undefined4 *)(lVar8 + uVar11 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0x24 + 0x24);
            }
            lVar7 = lVar7 + uVar15 * 0x24;
            uVar18 = *(undefined8 *)(lVar7 + 0x34);
            uVar17 = *(undefined8 *)(lVar7 + 0x2c);
            in_stack_00000008[2] = *(undefined8 *)(lVar7 + 0x3c);
            in_stack_00000008[1] = uVar18;
            *in_stack_00000008 = uVar17;
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar7 + uVar15 * 0x24 + 0x24);
        uVar11 = (ulong)uVar14;
        uVar14 = uVar2;
      } while (-1 < (int)uVar2);
    }
    *in_stack_00000008 = 0;
    in_stack_00000008[1] = 0;
    in_stack_00000008[2] = 0;
    return 0;
  }
LAB_05176328:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


