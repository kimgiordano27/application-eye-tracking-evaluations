/*
FUNCTION_NAME: OVRManager$$remove_HMDUnmounted
ENTRY_POINT: 02fc37c0
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


undefined8 OVRManager__remove_HMDUnmounted(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  int *piVar15;
  uint unaff_w29;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  
  if (in_x9 != 0) {
    piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 02fc37cc to 030c37e3 has its CatchHandler @ 02fc3c64 */
      if (*(long *)(piVar15 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_02fc381c;
      }
      in_x9 = in_x9 + -1;
      piVar15 = piVar15 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02fc381c:
  uVar3 = (*(code *)*puVar4)();
  lVar9 = *(long *)(unaff_x20 + 0x10);
                    /* try { // try from 02fc3830 to 030c3853 has its CatchHandler @ 02fc3c48 */
  if (lVar9 == 0) goto LAB_02fc3bd0;
  uVar14 = *(uint *)(lVar9 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar16 = 0;
  if (uVar14 != 0) {
    iVar16 = (int)uVar3 / (int)uVar14;
  }
  uVar8 = uVar3 - iVar16 * uVar14;
  if (uVar8 < uVar14) {
    piVar15 = (int *)(lVar9 + (ulong)uVar8 * 4 + 0x20);
    uVar14 = *piVar15 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_02fc3bd0;
      uVar10 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar14 < uVar8) {
        iVar16 = 0;
        do {
          uVar8 = (uint)uVar10;
          lVar9 = (long)(int)uVar14;
          if (*(uint *)(unaff_x26 + (long)(int)uVar14 * 0x38 + 0x20) == uVar3) {
            plVar5 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) +
                                                   0x10) + 8))();
            if (*(uint *)(unaff_x26 + 0x18) <= uVar14) goto LAB_02fc3bcc;
            if (plVar5 == (long *)0x0) goto LAB_02fc3bd0;
            uVar12 = (**(code **)(*plVar5 + 0x1b8))
                               (plVar5,*(undefined4 *)(unaff_x26 + lVar9 * 0x38 + 0x28),
                                uStack000000000000003c,*(undefined8 *)(*plVar5 + 0x1c0));
            if ((uVar12 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) goto LAB_02fc3b94;
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              uStack0000000000000034 = *(undefined8 *)((long)unaff_x25 + 0x24);
              uStack0000000000000030 =
                   (undefined4)((ulong)*(undefined8 *)((long)unaff_x25 + 0x1c) >> 0x20);
              in_stack_00000018 = unaff_x25[1];
              in_stack_00000010 = *unaff_x25;
              uVar10 = unaff_x25[3];
              in_stack_00000020 = unaff_x25[2];
              goto LAB_02fc3b60;
            }
            uVar8 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar8 <= uVar14) goto LAB_02fc3bcc;
          uVar14 = *(uint *)(unaff_x26 + lVar9 * 0x38 + 0x24);
          if ((int)uVar8 <= iVar16) {
            FUN_031dbf48(0);
          }
          uVar10 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar16 = iVar16 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar14 < uVar8);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_02fc3bd0;
      uVar10 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar14 < uVar8) {
        iVar16 = 0;
        uStack0000000000000004 = unaff_w29;
        do {
          uVar8 = (uint)uVar10;
          lVar9 = (long)(int)uVar14;
          if (*(uint *)(unaff_x26 + (long)(int)uVar14 * 0x38 + 0x20) == uVar3) {
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_015c2790(lVar6);
            }
            lVar11 = *unaff_x23;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar6) {
                  puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02fc390c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02fc390c:
            uVar12 = (*(code *)*puVar4)();
            if ((uVar12 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
LAB_02fc3b94:
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uStack000000000000003c);
                lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
                if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                  lVar9 = FUN_015c2790();
                }
                uVar10 = thunk_FUN_015d01b0(lVar9,&stack0x00000010);
                FUN_031dbe34(uVar10,0);
              }
              else if ((uStack0000000000000004 & 0xff) == 1) {
                uStack0000000000000034 = *(undefined8 *)((long)unaff_x25 + 0x24);
                uStack0000000000000030 =
                     (undefined4)((ulong)*(undefined8 *)((long)unaff_x25 + 0x1c) >> 0x20);
                in_stack_00000018 = unaff_x25[1];
                in_stack_00000010 = *unaff_x25;
                uVar10 = unaff_x25[3];
                in_stack_00000020 = unaff_x25[2];
LAB_02fc3b60:
                uStack0000000000000028 = (undefined4)uVar10;
                uStack000000000000002c = (undefined4)((ulong)uVar10 >> 0x20);
                if ((uint)lVar9 < *(uint *)(unaff_x26 + 0x18)) {
                  lVar9 = unaff_x26 + lVar9 * 0x38;
                  *(undefined8 *)(lVar9 + 0x50) = uStack0000000000000034;
                  *(ulong *)(lVar9 + 0x48) = CONCAT44(uStack0000000000000030,uStack000000000000002c)
                  ;
                  *(undefined8 *)(lVar9 + 0x44) = uVar10;
                  *(undefined8 *)(lVar9 + 0x3c) = in_stack_00000020;
                  *(undefined8 *)(lVar9 + 0x34) = in_stack_00000018;
                  *(undefined8 *)(lVar9 + 0x2c) = in_stack_00000010;
                  return 1;
                }
                goto LAB_02fc3bcc;
              }
              return 0;
            }
            uVar8 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar8 <= uVar14) goto LAB_02fc3bcc;
          uVar14 = *(uint *)(unaff_x26 + lVar9 * 0x38 + 0x24);
          if ((int)uVar8 <= iVar16) {
            FUN_031dbf48(0);
          }
          uVar10 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar16 = iVar16 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar14 < uVar8);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar14 = *(uint *)(unaff_x20 + 0x20);
      if (uVar14 == uVar8) {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
        lVar9 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
        if (lVar9 == 0) goto LAB_02fc3bd0;
        uVar8 = *(uint *)(lVar9 + 0x18);
        iVar16 = 0;
        if (uVar8 != 0) {
          iVar16 = (int)uVar3 / (int)uVar8;
        }
        uVar2 = uVar3 - iVar16 * uVar8;
        if (uVar8 <= uVar2) goto LAB_02fc3bcc;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar15 = (int *)(lVar9 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
      }
      if (unaff_x26 == 0) {
LAB_02fc3bd0:
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
    if (uVar14 < *(uint *)(unaff_x26 + 0x18)) {
      if (bVar7) {
        *(undefined4 *)(unaff_x20 + 0x24) =
             *(undefined4 *)(unaff_x26 + (long)(int)uVar14 * 0x38 + 0x24);
      }
      lVar9 = unaff_x26 + (long)(int)uVar14 * 0x38;
      *(uint *)(lVar9 + 0x20) = uVar3;
      *(int *)(lVar9 + 0x24) = *piVar15 + -1;
      *(undefined4 *)(lVar9 + 0x28) = uStack000000000000003c;
      uVar1 = *(undefined4 *)(unaff_x25 + 5);
      uVar17 = unaff_x25[1];
      uVar10 = *unaff_x25;
      uVar19 = unaff_x25[3];
      uVar18 = unaff_x25[2];
      *(undefined8 *)(lVar9 + 0x4c) = unaff_x25[4];
      *(undefined4 *)(lVar9 + 0x54) = uVar1;
      *(undefined8 *)(lVar9 + 0x44) = uVar19;
      *(undefined8 *)(lVar9 + 0x3c) = uVar18;
      *(undefined8 *)(lVar9 + 0x34) = uVar17;
      *(undefined8 *)(lVar9 + 0x2c) = uVar10;
      *piVar15 = uVar14 + 1;
      return 1;
    }
  }
LAB_02fc3bcc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


