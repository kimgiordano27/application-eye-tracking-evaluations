/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 02fc714c
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_isPowerSavingActive(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int in_w9;
  ulong uVar11;
  int *piVar12;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar13;
  long *unaff_x23;
  char unaff_w25;
  long unaff_x26;
  int *piVar14;
  int iVar15;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uVar2 = (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (lVar8 == 0) goto LAB_02fc74b8;
  uVar13 = *(uint *)(lVar8 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar15 = 0;
  if (uVar13 != 0) {
    iVar15 = (int)uVar2 / (int)uVar13;
  }
  uVar7 = uVar2 - iVar15 * uVar13;
  if (uVar7 < uVar13) {
    piVar14 = (int *)(lVar8 + (ulong)uVar7 * 4 + 0x20);
    uVar13 = *piVar14 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_02fc74b8;
      uVar9 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar13 < uVar7) {
        iVar15 = 0;
        do {
          uVar7 = (uint)uVar9;
          lVar8 = (long)(int)uVar13;
          if (*(uint *)(unaff_x26 + (long)(int)uVar13 * 0x10 + 0x20) == uVar2) {
            plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) +
                                                   0x10) + 8))();
            if (*(uint *)(unaff_x26 + 0x18) <= uVar13) goto LAB_02fc74b4;
            if (plVar4 == (long *)0x0) goto LAB_02fc74b8;
            uVar11 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined4 *)(unaff_x26 + lVar8 * 0x10 + 0x28),
                                uStack000000000000000c,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar11 & 1) != 0) {
              if (unaff_w25 != '\x02') goto LAB_02fc745c;
              uStack0000000000000008 = uStack000000000000000c;
              lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
              if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                lVar8 = FUN_015c2790();
              }
              puVar3 = (undefined8 *)&stack0x00000008;
              goto LAB_02fc74a0;
            }
            uVar7 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar7 <= uVar13) goto LAB_02fc74b4;
          uVar13 = *(uint *)(unaff_x26 + lVar8 * 0x10 + 0x24);
          if ((int)uVar7 <= iVar15) {
            FUN_031dbf48(0);
          }
          uVar9 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar15 = iVar15 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar13 < uVar7);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_02fc74b8;
      uVar9 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar13 < uVar7) {
        iVar15 = 0;
        do {
          uVar7 = (uint)uVar9;
          lVar8 = (long)(int)uVar13;
          if (*(uint *)(unaff_x26 + (long)(int)uVar13 * 0x10 + 0x20) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_015c2790(lVar5);
            }
            lVar10 = *unaff_x23;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02fc7238;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar3 = (undefined8 *)FUN_015c2a80();
LAB_02fc7238:
            uVar11 = (*(code *)*puVar3)();
            if ((uVar11 & 1) != 0) {
              if (unaff_w25 == '\x02') {
                in_stack_00000000._4_4_ = uStack000000000000000c;
                lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
                if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                  lVar8 = FUN_015c2790();
                }
                puVar3 = (undefined8 *)((long)&stack0x00000000 + 4);
LAB_02fc74a0:
                uVar9 = thunk_FUN_015d01b0(lVar8,puVar3);
                FUN_031dbe34(uVar9,0);
                return 0;
              }
LAB_02fc745c:
              if (unaff_w25 != '\x01') {
                return 0;
              }
              if ((uint)lVar8 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined4 *)(unaff_x26 + lVar8 * 0x10 + 0x2c) = unaff_w19;
                return 1;
              }
              goto LAB_02fc74b4;
            }
            uVar7 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar7 <= uVar13) goto LAB_02fc74b4;
          uVar13 = *(uint *)(unaff_x26 + lVar8 * 0x10 + 0x24);
          if ((int)uVar7 <= iVar15) {
            FUN_031dbf48(0);
          }
          uVar9 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar15 = iVar15 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar13 < uVar7);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar13 = *(uint *)(unaff_x20 + 0x20);
      if (uVar13 == uVar7) {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
        lVar8 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar13 + 1;
        if (lVar8 == 0) goto LAB_02fc74b8;
        uVar7 = *(uint *)(lVar8 + 0x18);
        iVar15 = 0;
        if (uVar7 != 0) {
          iVar15 = (int)uVar2 / (int)uVar7;
        }
        uVar1 = uVar2 - iVar15 * uVar7;
        if (uVar7 <= uVar1) goto LAB_02fc74b4;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar14 = (int *)(lVar8 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar13 + 1;
      }
      if (unaff_x26 == 0) {
LAB_02fc74b8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      bVar6 = false;
    }
    else {
      uVar13 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      bVar6 = true;
    }
    if (uVar13 < *(uint *)(unaff_x26 + 0x18)) {
      if (bVar6) {
        *(undefined4 *)(unaff_x20 + 0x24) =
             *(undefined4 *)(unaff_x26 + (long)(int)uVar13 * 0x10 + 0x24);
      }
      lVar8 = unaff_x26 + (long)(int)uVar13 * 0x10;
      *(uint *)(lVar8 + 0x20) = uVar2;
      *(int *)(lVar8 + 0x24) = *piVar14 + -1;
      *(undefined4 *)(lVar8 + 0x28) = uStack000000000000000c;
      *(undefined4 *)(lVar8 + 0x2c) = unaff_w19;
      *piVar14 = uVar13 + 1;
      return 1;
    }
  }
LAB_02fc74b4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


