/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResLevel
ENTRY_POINT: 02fc7de4
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_tiledMultiResLevel(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  uint *puVar15;
  long unaff_x21;
  long *unaff_x23;
  uint uVar16;
  uint uVar17;
  undefined4 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_x23 == (long *)0x0) {
    uVar6 = FUN_031d7008((long)&stack0x00000018 + 4,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x130));
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    lVar10 = *unaff_x23;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02fc7e70;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80();
LAB_02fc7e70:
    uVar6 = (*(code *)*puVar7)();
  }
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar4 = 0;
    if (uVar1 != 0) {
      iVar4 = (int)uVar6 / (int)uVar1;
    }
    uVar3 = uVar6 - iVar4 * uVar1;
    if (uVar1 <= uVar3) {
LAB_02fc80a4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar17 = 0xffffffff;
      do {
        uVar16 = uVar1;
        uVar5 = in_stack_00000018._4_4_;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_02fc80a0;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_02fc80a4;
        puVar15 = (uint *)(lVar8 + (long)(int)uVar16 * 0x10 + 0x20);
        lVar10 = (long)(int)uVar16;
        if (*puVar15 == uVar6) {
          plVar11 = *(long **)(unaff_x19 + 0x30);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (plVar11 == (long *)0x0) goto LAB_02fc80a0;
            uVar13 = (**(code **)(*plVar11 + 0x1b8))
                               (plVar11,*(undefined4 *)(lVar8 + lVar10 * 0x10 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
          }
          else {
            if (plVar11 == (long *)0x0) goto LAB_02fc80a0;
            lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined4 *)(lVar8 + lVar10 * 0x10 + 0x28);
            if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
              lVar9 = FUN_015c2790(lVar9);
            }
            lVar12 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_02fc7fb0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar11,lVar9,0);
LAB_02fc7fb0:
            uVar13 = (*(code *)*puVar7)(plVar11,uVar2,uVar5,puVar7[1]);
          }
          if ((uVar13 & 1) != 0) {
            if ((int)uVar17 < 0) {
              lVar9 = *(long *)(unaff_x19 + 0x10);
              if (lVar9 == 0) goto LAB_02fc80a0;
              if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_02fc80a4;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + lVar10 * 0x10 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(unaff_x19 + 0x18);
              if (lVar9 == 0) goto LAB_02fc80a0;
              if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_02fc80a4;
              *(undefined4 *)(lVar9 + (long)(int)uVar17 * 0x10 + 0x24) =
                   *(undefined4 *)(lVar8 + lVar10 * 0x10 + 0x24);
            }
            lVar8 = lVar8 + lVar10 * 0x10;
            *in_stack_00000010 = *(undefined4 *)(lVar8 + 0x2c);
            *puVar15 = 0xffffffff;
            *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar16;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + lVar10 * 0x10 + 0x24);
        uVar17 = uVar16;
      } while (-1 < (int)uVar1);
    }
    *in_stack_00000010 = 0;
    return 0;
  }
LAB_02fc80a0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


