/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$LoadAndInstantiateAnchors
ENTRY_POINT: 039c8970
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
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__LoadAndInstantiateAnchors
          (long param_1,undefined4 param_2,undefined2 param_3,char param_4,long param_5)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;
  int in_w8;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined8 in_stack_00000010;
  undefined2 uStack0000000000000018;
  undefined2 uStack000000000000001c;
  
  *(int *)(param_1 + 0x2c) = in_w8 + 1;
  if (in_x9 == 0) {
    (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8) + 8))(param_1,0);
  }
  plVar15 = *(long **)(param_1 + 0x30);
  lVar16 = *(long *)(param_1 + 0x18);
  if (plVar15 == (long *)0x0) {
    uVar4 = FUN_028ff1f4((long)&stack0x00000018 + 4,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x130));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
    }
    lVar9 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_039c8a3c;
        }
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar15,lVar6,1);
LAB_039c8a3c:
    uVar4 = (*(code *)*puVar5)(plVar15,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_039c8de8;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar18 = 0;
  if (uVar14 != 0) {
    iVar18 = (int)uVar4 / (int)uVar14;
  }
  uVar8 = uVar4 - iVar18 * uVar14;
  if (uVar8 < uVar14) {
    piVar17 = (int *)(lVar6 + (ulong)uVar8 * 4 + 0x20);
    uVar14 = *piVar17 - 1;
    if (plVar15 == (long *)0x0) {
      if (lVar16 == 0) goto LAB_039c8de8;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar14 < uVar8) {
        iVar18 = 0;
        do {
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar16 + (long)(int)uVar14 * 0xc + 0x20) == uVar4) {
            plVar15 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_039c8de4;
            if (plVar15 == (long *)0x0) goto LAB_039c8de8;
            uVar12 = (**(code **)(*plVar15 + 0x1b8))
                               (plVar15,*(undefined2 *)(lVar16 + lVar6 * 0xc + 0x28),
                                uStack000000000000001c,*(undefined8 *)(*plVar15 + 0x1c0));
            if ((uVar12 & 1) != 0) {
              if (param_4 != '\x02') {
                if (param_4 != '\x01') {
                  return 0;
                }
                if (uVar14 < *(uint *)(lVar16 + 0x18)) {
                  *(undefined2 *)(lVar16 + lVar6 * 0xc + 0x2a) = param_3;
                  return 1;
                }
                goto LAB_039c8de4;
              }
              uStack0000000000000018 = uStack000000000000001c;
              lVar16 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_015c2790();
              }
              puVar5 = (undefined8 *)&stack0x00000018;
              goto LAB_039c8dd0;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar14) goto LAB_039c8de4;
          uVar14 = *(uint *)(lVar16 + lVar6 * 0xc + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_031dbf48(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar14 < uVar8);
      }
    }
    else {
      if (lVar16 == 0) goto LAB_039c8de8;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar14 < uVar8) {
        iVar18 = 0;
        do {
          uVar3 = uStack000000000000001c;
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar16 + (long)(int)uVar14 * 0xc + 0x20) == uVar4) {
            lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x148);
            uVar1 = *(undefined2 *)(lVar16 + lVar6 * 0xc + 0x28);
            if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
              lVar9 = FUN_015c2790(lVar9);
            }
            lVar11 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_039c8b24;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(plVar15,lVar9,0);
LAB_039c8b24:
            uVar12 = (*(code *)*puVar5)(plVar15,uVar1,uVar3,puVar5[1]);
            if ((uVar12 & 1) != 0) {
              if (param_4 == '\x02') {
                in_stack_00000010._4_2_ = uStack000000000000001c;
                lVar16 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8);
                if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                  lVar16 = FUN_015c2790();
                }
                puVar5 = (undefined8 *)((long)&stack0x00000010 + 4);
LAB_039c8dd0:
                uVar10 = thunk_FUN_015d01b0(lVar16,puVar5);
                FUN_031dbe34(uVar10,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar14 < *(uint *)(lVar16 + 0x18)) {
                *(undefined2 *)(lVar16 + lVar6 * 0xc + 0x2a) = param_3;
                return 1;
              }
              goto LAB_039c8de4;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar14) goto LAB_039c8de4;
          uVar14 = *(uint *)(lVar16 + lVar6 * 0xc + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_031dbf48(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar14 < uVar8);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar14 = *(uint *)(param_1 + 0x20);
      if (uVar14 == uVar8) {
        (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x168) + 8))(param_1);
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar14 + 1;
        if (lVar6 == 0) goto LAB_039c8de8;
        uVar8 = *(uint *)(lVar6 + 0x18);
        iVar18 = 0;
        if (uVar8 != 0) {
          iVar18 = (int)uVar4 / (int)uVar8;
        }
        uVar2 = uVar4 - iVar18 * uVar8;
        if (uVar8 <= uVar2) goto LAB_039c8de4;
        lVar16 = *(long *)(param_1 + 0x18);
        piVar17 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar16 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar14 + 1;
      }
      if (lVar16 == 0) {
LAB_039c8de8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      bVar7 = false;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      bVar7 = true;
    }
    if (uVar14 < *(uint *)(lVar16 + 0x18)) {
      if (bVar7) {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar16 + (long)(int)uVar14 * 0xc + 0x24);
      }
      lVar16 = lVar16 + (long)(int)uVar14 * 0xc;
      *(uint *)(lVar16 + 0x20) = uVar4;
      *(int *)(lVar16 + 0x24) = *piVar17 + -1;
      *(undefined2 *)(lVar16 + 0x2a) = param_3;
      *(undefined2 *)(lVar16 + 0x28) = uStack000000000000001c;
      *piVar17 = uVar14 + 1;
      return 1;
    }
  }
LAB_039c8de4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


