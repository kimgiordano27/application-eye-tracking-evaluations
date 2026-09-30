/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.FollowAndCreateAnchorAtHandPositionBuildingBlock$$LoadAndInstantiateAnchors
ENTRY_POINT: 039c894c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_FollowAndCreateAnchorAtHandPositionBuildingBlock__LoadAndInstantiateAnchors
          (long param_1,undefined4 param_2,undefined2 param_3,char param_4,long param_5)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined2 *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  undefined8 in_stack_00000010;
  undefined2 in_stack_00000018;
  undefined2 uStack000000000000001c;
  
  uStack000000000000001c = (undefined2)param_2;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8) + 8))(param_1,0);
  }
  plVar16 = *(long **)(param_1 + 0x30);
  lVar17 = *(long *)(param_1 + 0x18);
  if (plVar16 == (long *)0x0) {
    uVar4 = FUN_028ff1f4(&stack0x0000001c,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x130));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
    }
    lVar10 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar13 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_039c8a3c;
        }
        uVar13 = uVar13 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar16,lVar6,1);
LAB_039c8a3c:
    uVar4 = (*(code *)*puVar5)(plVar16,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_039c8de8;
  uVar15 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar19 = 0;
  if (uVar15 != 0) {
    iVar19 = (int)uVar4 / (int)uVar15;
  }
  uVar9 = uVar4 - iVar19 * uVar15;
  if (uVar9 < uVar15) {
    piVar18 = (int *)(lVar6 + (ulong)uVar9 * 4 + 0x20);
    uVar15 = *piVar18 - 1;
    if (plVar16 == (long *)0x0) {
      if (lVar17 == 0) goto LAB_039c8de8;
      uVar11 = *(undefined8 *)(lVar17 + 0x18);
      uVar9 = (uint)uVar11;
      if (uVar15 < uVar9) {
        iVar19 = 0;
        do {
          uVar9 = (uint)uVar11;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar17 + (long)(int)uVar15 * 0xc + 0x20) == uVar4) {
            plVar16 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_039c8de4;
            if (plVar16 == (long *)0x0) goto LAB_039c8de8;
            uVar13 = (**(code **)(*plVar16 + 0x1b8))
                               (plVar16,*(undefined2 *)(lVar17 + lVar6 * 0xc + 0x28),
                                uStack000000000000001c,*(undefined8 *)(*plVar16 + 0x1c0));
            if ((uVar13 & 1) != 0) {
              if (param_4 != '\x02') {
                if (param_4 != '\x01') {
                  return 0;
                }
                if (uVar15 < *(uint *)(lVar17 + 0x18)) {
                  *(undefined2 *)(lVar17 + lVar6 * 0xc + 0x2a) = param_3;
                  return 1;
                }
                goto LAB_039c8de4;
              }
              in_stack_00000018 = uStack000000000000001c;
              lVar17 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8);
              if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                lVar17 = FUN_015c2790();
              }
              puVar7 = &stack0x00000018;
              goto LAB_039c8dd0;
            }
            uVar9 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar9 <= uVar15) goto LAB_039c8de4;
          uVar15 = *(uint *)(lVar17 + lVar6 * 0xc + 0x24);
          if ((int)uVar9 <= iVar19) {
            FUN_031dbf48(0);
          }
          uVar11 = *(undefined8 *)(lVar17 + 0x18);
          iVar19 = iVar19 + 1;
          uVar9 = (uint)uVar11;
        } while (uVar15 < uVar9);
      }
    }
    else {
      if (lVar17 == 0) goto LAB_039c8de8;
      uVar11 = *(undefined8 *)(lVar17 + 0x18);
      uVar9 = (uint)uVar11;
      if (uVar15 < uVar9) {
        iVar19 = 0;
        do {
          uVar3 = uStack000000000000001c;
          uVar9 = (uint)uVar11;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar17 + (long)(int)uVar15 * 0xc + 0x20) == uVar4) {
            lVar10 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x148);
            uVar1 = *(undefined2 *)(lVar17 + lVar6 * 0xc + 0x28);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_015c2790(lVar10);
            }
            lVar12 = *plVar16;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_039c8b24;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(plVar16,lVar10,0);
LAB_039c8b24:
            uVar13 = (*(code *)*puVar5)(plVar16,uVar1,uVar3,puVar5[1]);
            if ((uVar13 & 1) != 0) {
              if (param_4 == '\x02') {
                in_stack_00000010._4_2_ = uStack000000000000001c;
                lVar17 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8);
                if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
                  lVar17 = FUN_015c2790();
                }
                puVar7 = (undefined2 *)((long)&stack0x00000010 + 4);
LAB_039c8dd0:
                uVar11 = thunk_FUN_015d01b0(lVar17,puVar7);
                FUN_031dbe34(uVar11,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar15 < *(uint *)(lVar17 + 0x18)) {
                *(undefined2 *)(lVar17 + lVar6 * 0xc + 0x2a) = param_3;
                return 1;
              }
              goto LAB_039c8de4;
            }
            uVar9 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar9 <= uVar15) goto LAB_039c8de4;
          uVar15 = *(uint *)(lVar17 + lVar6 * 0xc + 0x24);
          if ((int)uVar9 <= iVar19) {
            FUN_031dbf48(0);
          }
          uVar11 = *(undefined8 *)(lVar17 + 0x18);
          iVar19 = iVar19 + 1;
          uVar9 = (uint)uVar11;
        } while (uVar15 < uVar9);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar15 = *(uint *)(param_1 + 0x20);
      if (uVar15 == uVar9) {
        (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x168) + 8))(param_1);
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
        if (lVar6 == 0) goto LAB_039c8de8;
        uVar9 = *(uint *)(lVar6 + 0x18);
        iVar19 = 0;
        if (uVar9 != 0) {
          iVar19 = (int)uVar4 / (int)uVar9;
        }
        uVar2 = uVar4 - iVar19 * uVar9;
        if (uVar9 <= uVar2) goto LAB_039c8de4;
        lVar17 = *(long *)(param_1 + 0x18);
        piVar18 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar17 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
      }
      if (lVar17 == 0) {
LAB_039c8de8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      bVar8 = false;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      bVar8 = true;
    }
    if (uVar15 < *(uint *)(lVar17 + 0x18)) {
      if (bVar8) {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar17 + (long)(int)uVar15 * 0xc + 0x24);
      }
      lVar17 = lVar17 + (long)(int)uVar15 * 0xc;
      *(uint *)(lVar17 + 0x20) = uVar4;
      *(int *)(lVar17 + 0x24) = *piVar18 + -1;
      *(undefined2 *)(lVar17 + 0x2a) = param_3;
      *(undefined2 *)(lVar17 + 0x28) = uStack000000000000001c;
      *piVar18 = uVar15 + 1;
      return 1;
    }
  }
LAB_039c8de4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


