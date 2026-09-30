/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 02fc70bc
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__set_gpuLevel(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar14;
  long *plVar15;
  undefined4 unaff_w24;
  char unaff_w25;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  (**(code **)(*(long *)(param_1 + 8) + 8))();
  plVar15 = *(long **)(unaff_x20 + 0x30);
  lVar16 = *(long *)(unaff_x20 + 0x18);
  if (plVar15 == (long *)0x0) {
    uVar4 = FUN_031d7008((long)&stack0x00000008 + 4,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x130));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
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
          goto LAB_02fc7158;
        }
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar15,lVar6,1);
LAB_02fc7158:
    uVar4 = (*(code *)*puVar5)(plVar15,unaff_w24,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_02fc74b8;
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
      if (lVar16 == 0) goto LAB_02fc74b8;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar14 < uVar8) {
        iVar18 = 0;
        do {
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar16 + (long)(int)uVar14 * 0x10 + 0x20) == uVar4) {
            plVar15 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_02fc74b4;
            if (plVar15 == (long *)0x0) goto LAB_02fc74b8;
            uVar12 = (**(code **)(*plVar15 + 0x1b8))
                               (plVar15,*(undefined4 *)(lVar16 + lVar6 * 0x10 + 0x28),
                                uStack000000000000000c,*(undefined8 *)(*plVar15 + 0x1c0));
            if ((uVar12 & 1) != 0) {
              if (unaff_w25 != '\x02') goto LAB_02fc745c;
              uStack0000000000000008 = uStack000000000000000c;
              lVar16 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_015c2790();
              }
              puVar5 = (undefined8 *)&stack0x00000008;
              goto LAB_02fc74a0;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar14) goto LAB_02fc74b4;
          uVar14 = *(uint *)(lVar16 + lVar6 * 0x10 + 0x24);
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
      if (lVar16 == 0) goto LAB_02fc74b8;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar14 < uVar8) {
        iVar18 = 0;
        do {
          uVar3 = uStack000000000000000c;
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar16 + (long)(int)uVar14 * 0x10 + 0x20) == uVar4) {
            lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
            uVar1 = *(undefined4 *)(lVar16 + lVar6 * 0x10 + 0x28);
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
                  goto LAB_02fc7238;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(plVar15,lVar9,0);
LAB_02fc7238:
            uVar12 = (*(code *)*puVar5)(plVar15,uVar1,uVar3,puVar5[1]);
            if ((uVar12 & 1) != 0) {
              if (unaff_w25 == '\x02') {
                in_stack_00000000._4_4_ = uStack000000000000000c;
                lVar16 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
                if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                  lVar16 = FUN_015c2790();
                }
                puVar5 = (undefined8 *)((long)&stack0x00000000 + 4);
LAB_02fc74a0:
                uVar10 = thunk_FUN_015d01b0(lVar16,puVar5);
                FUN_031dbe34(uVar10,0);
                return 0;
              }
LAB_02fc745c:
              if (unaff_w25 != '\x01') {
                return 0;
              }
              if ((uint)lVar6 < *(uint *)(lVar16 + 0x18)) {
                *(undefined4 *)(lVar16 + lVar6 * 0x10 + 0x2c) = unaff_w19;
                return 1;
              }
              goto LAB_02fc74b4;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar14) goto LAB_02fc74b4;
          uVar14 = *(uint *)(lVar16 + lVar6 * 0x10 + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_031dbf48(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar14 < uVar8);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar14 = *(uint *)(unaff_x20 + 0x20);
      if (uVar14 == uVar8) {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
        if (lVar6 == 0) goto LAB_02fc74b8;
        uVar8 = *(uint *)(lVar6 + 0x18);
        iVar18 = 0;
        if (uVar8 != 0) {
          iVar18 = (int)uVar4 / (int)uVar8;
        }
        uVar2 = uVar4 - iVar18 * uVar8;
        if (uVar8 <= uVar2) goto LAB_02fc74b4;
        lVar16 = *(long *)(unaff_x20 + 0x18);
        piVar17 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar16 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
      }
      if (lVar16 == 0) {
LAB_02fc74b8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      bVar7 = false;
    }
    else {
      uVar14 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      bVar7 = true;
    }
    if (uVar14 < *(uint *)(lVar16 + 0x18)) {
      if (bVar7) {
        *(undefined4 *)(unaff_x20 + 0x24) =
             *(undefined4 *)(lVar16 + (long)(int)uVar14 * 0x10 + 0x24);
      }
      lVar16 = lVar16 + (long)(int)uVar14 * 0x10;
      *(uint *)(lVar16 + 0x20) = uVar4;
      *(int *)(lVar16 + 0x24) = *piVar17 + -1;
      *(undefined4 *)(lVar16 + 0x28) = uStack000000000000000c;
      *(undefined4 *)(lVar16 + 0x2c) = unaff_w19;
      *piVar17 = uVar14 + 1;
      return 1;
    }
  }
LAB_02fc74b4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


