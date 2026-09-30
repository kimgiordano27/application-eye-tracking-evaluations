/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0492972c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined4 param_2,long param_3)

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
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined4 uStack000000000000001c;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(param_1 + 0x30);
    uStack000000000000001c = param_2;
    if (plVar14 == (long *)0x0) {
      uVar6 = FUN_05023540(&stack0x0000001c,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188));
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d9a2e0(lVar8);
      }
      lVar9 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_049297d0;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar14,lVar8,1);
LAB_049297d0:
      uVar6 = (*(code *)*puVar7)(plVar14,param_2,puVar7[1]);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_04929a08:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
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
      uVar11 = 0xffffffff;
      do {
        uVar5 = uStack000000000000001c;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) goto LAB_04929a08;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_04929a0c;
        puVar16 = (uint *)(lVar8 + (ulong)uVar15 * 0x24 + 0x20);
        uVar17 = (ulong)uVar15;
        if (*puVar16 == uVar6) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_03642a0c(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_04929a08;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x28),
                                uStack000000000000001c,*(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_04929a08;
            lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02d9a2e0(lVar9);
            }
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04929918;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_02d9a5d4(plVar14,lVar9,0);
LAB_04929918:
            uVar12 = (*(code *)*puVar7)(plVar14,uVar1,uVar5,puVar7[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) goto LAB_04929a08;
              if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_04929a0c;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar17 * 0x24 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) goto LAB_04929a08;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar11) goto LAB_04929a0c;
              *(undefined4 *)(lVar9 + uVar11 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x24);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar15;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar17 * 0x24 + 0x24);
        uVar11 = (ulong)uVar15;
        uVar15 = uVar2;
      } while (-1 < (int)uVar2);
    }
  }
  return 0;
}


