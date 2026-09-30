/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04929740
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x22;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  
  if (unaff_x22 == (long *)0x0) {
    uVar6 = FUN_05023540((long)&stack0x00000018 + 4,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188));
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d9a2e0(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_049297d0;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_049297d0:
    uVar6 = (*(code *)*puVar7)();
  }
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar15 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)uVar6 / (int)uVar15;
    }
    uVar3 = uVar6 - iVar4 * uVar15;
    if (uVar15 <= uVar3) {
LAB_04929a0c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar15 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar12 = 0xffffffff;
      do {
        uVar5 = in_stack_00000018._4_4_;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_04929a08;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_04929a0c;
        puVar16 = (uint *)(lVar8 + (ulong)uVar15 * 0x24 + 0x20);
        uVar17 = (ulong)uVar15;
        if (*puVar16 == uVar6) {
          plVar10 = *(long **)(unaff_x19 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)FUN_03642a0c(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (plVar10 == (long *)0x0) goto LAB_04929a08;
            uVar13 = (**(code **)(*plVar10 + 0x1b8))
                               (plVar10,*(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_04929a08;
            lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02d9a2e0(lVar9);
            }
            lVar11 = *plVar10;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_04929918;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02d9a5d4(plVar10,lVar9,0);
LAB_04929918:
            uVar13 = (*(code *)*puVar7)(plVar10,uVar1,uVar5,puVar7[1]);
          }
          if ((uVar13 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar9 = *(long *)(unaff_x19 + 0x10);
              if (lVar9 == 0) goto LAB_04929a08;
              if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_04929a0c;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar17 * 0x24 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(unaff_x19 + 0x18);
              if (lVar9 == 0) goto LAB_04929a08;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar12) goto LAB_04929a0c;
              *(undefined4 *)(lVar9 + uVar12 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x24);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar17 * 0x24 + 0x24);
        uVar12 = (ulong)uVar15;
        uVar15 = uVar2;
      } while (-1 < (int)uVar2);
    }
    return 0;
  }
LAB_04929a08:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


