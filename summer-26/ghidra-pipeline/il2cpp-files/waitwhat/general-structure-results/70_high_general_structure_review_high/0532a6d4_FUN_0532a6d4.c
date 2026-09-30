/*
FUNCTION_NAME: FUN_0532a6d4
ENTRY_POINT: 0532a6d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_0532a6d4(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(param_1 + 0x30);
    if (plVar14 == (long *)0x0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0532a5d4 with catch @ 0532a780
                        */
      uVar4 = UnityEngine_InputSystem_InputSystem__RemoveLayout
                        (param_2,*(undefined8 *)
                                  (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x188));
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
      uVar19 = param_2[1];
      uVar9 = *param_2;
      uVar7 = param_2[2];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
                    /* try { // try from 0532a744 to 0542a747 has its CatchHandler @ 0532a77c */
      lVar8 = *plVar14;
                    /* try { // try from 0532a748 to 0542a74b has its CatchHandler @ 0532a778 */
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 0532a74c to 0542a79f has its CatchHandler @ 0532a300 */
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto System_Collections_Generic_List_Enumerator<AsyncGPUReadbackRequest>__Dispose;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0532a6a4 with catch @ 0532a774
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0532a748 with catch @ 0532a778
                        */
      puVar5 = (undefined8 *)FUN_031c0d08(plVar14,lVar6,1);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0532a744 with catch @ 0532a77c
                        */
System_Collections_Generic_List_Enumerator<AsyncGPUReadbackRequest>__Dispose:
      local_80 = uVar9;
      uStack_78 = uVar19;
      local_70 = uVar7;
      uVar4 = (*(code *)*puVar5)(plVar14,&local_80,puVar5[1]);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
LAB_0532aaa0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar15 = *(uint *)(lVar6 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar15 != 0) {
      iVar3 = (int)uVar4 / (int)uVar15;
    }
    uVar2 = uVar4 - iVar3 * uVar15;
    if (uVar15 <= uVar2) {
LAB_0532aaa4:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar15 = *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar11 = 0xffffffff;
      do {
        lVar6 = *(long *)(param_1 + 0x18);
        if (lVar6 == 0) goto LAB_0532aaa0;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_0532aaa4;
        lVar6 = lVar6 + 0x20;
        puVar16 = (uint *)(lVar6 + (ulong)uVar15 * 0x28);
        uVar17 = (ulong)uVar15;
        if (*puVar16 == uVar4) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_05332310(*(undefined8 *)
                                            (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_0532aaa0;
            lVar8 = lVar6 + uVar17 * 0x28;
            uStack_98 = param_2[1];
            local_a0 = *param_2;
            local_90 = param_2[2];
            uStack_78 = *(undefined8 *)(lVar8 + 0x10);
            local_80 = *(undefined8 *)(lVar8 + 8);
            local_70 = *(undefined8 *)(lVar8 + 0x18);
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,&local_80,&local_a0,*(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            lVar8 = lVar6 + uVar17 * 0x28;
            uVar20 = *(undefined8 *)(lVar8 + 0x10);
            uVar19 = *(undefined8 *)(lVar8 + 8);
            uVar7 = *(undefined8 *)(lVar8 + 0x18);
            lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
            uVar21 = param_2[1];
            uVar18 = *param_2;
            uVar9 = param_2[2];
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_031c09d4(lVar8);
            }
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0532a974;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_031c0d08(plVar14,lVar8,0);
LAB_0532a974:
            local_a0 = uVar18;
            uStack_98 = uVar21;
            local_90 = uVar9;
            local_80 = uVar19;
            uStack_78 = uVar20;
            local_70 = uVar7;
            uVar12 = (*(code *)*puVar5)(plVar14,&local_80,&local_a0,puVar5[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_0532aaa0;
              if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0532aaa4;
              *(int *)(lVar8 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar17 * 0x28 + 4) + 1;
            }
            else {
              lVar8 = *(long *)(param_1 + 0x18);
              if (lVar8 == 0) goto LAB_0532aaa0;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar11) goto LAB_0532aaa4;
              *(undefined4 *)(lVar8 + uVar11 * 0x28 + 0x24) =
                   *(undefined4 *)(lVar6 + uVar17 * 0x28 + 4);
            }
            lVar6 = lVar6 + uVar17 * 0x28;
            *param_3 = *(undefined8 *)(lVar6 + 0x20);
            *puVar16 = 0xffffffff;
            uVar1 = *(undefined4 *)(param_1 + 0x24);
            *(undefined8 *)(lVar6 + 0x10) = 0;
            *(undefined8 *)(lVar6 + 8) = 0;
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined8 *)(lVar6 + 0x18) = 0;
            *(undefined4 *)(lVar6 + 4) = uVar1;
            *(uint *)(param_1 + 0x24) = uVar15;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar11 = (ulong)uVar15;
        uVar15 = *(uint *)(lVar6 + uVar17 * 0x28 + 4);
      } while (-1 < (int)uVar15);
    }
  }
  *param_3 = 0;
  return 0;
}


