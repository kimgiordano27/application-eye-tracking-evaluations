/*
FUNCTION_NAME: Unity.XR.OpenVR.OpenVROculusTouchController$$get_trigger
ENTRY_POINT: 09b6bcb4
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x09b6b90c) */
/* WARNING: Removing unreachable block (ram,0x09b6bd78) */
/* WARNING: Removing unreachable block (ram,0x09b6bedc) */
/* WARNING: Removing unreachable block (ram,0x09b6c300) */
/* WARNING: Removing unreachable block (ram,0x09b6b868) */

uint Unity_XR_OpenVR_OpenVROculusTouchController__get_trigger(void)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint extraout_w8;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  long *unaff_x28;
  int unaff_w29;
  float unaff_s8;
  long in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  char *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_00000080;
  byte *in_stack_00000088;
  undefined8 *in_stack_00000090;
  long *in_stack_00000098;
  long *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long *in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
code_r0x09b6bcb4:
  plVar14 = (long *)thunk_FUN_04983e64(in_stack_000000a8,*(undefined8 *)PTR_DAT_0ac09b90);
  *in_stack_00000048 = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    lVar17 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar15 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac09b90,0);
Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed:
    (*(code *)*puVar15)(plVar14,puVar15[1]);
  }
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184(unaff_x25);
  }
  if (*in_stack_00000058 != '\0') {
    thunk_FUN_0495413c(*in_stack_00000060,0);
  }
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  FUN_08da1af0(unaff_x23,unaff_x24,0);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar9 = 0;
  do {
    plVar14 = (long *)PTR_DAT_0ac09b88;
    iVar7 = FUN_08d948e8(unaff_x24,0);
    if (iVar7 <= iVar9) break;
    plVar14 = (long *)FUN_08d94948(unaff_x24,iVar9,0);
    if (plVar14 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar14);
      }
    }
    in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
    in_stack_00000050 = 0;
    in_stack_00000060 = &stack0x00000098;
    in_stack_000000b0._4_1_ = '\0';
    in_stack_00000098 = plVar14;
    FUN_08de98fc(plVar14,(long)&stack0x000000b0 + 4,0);
    if (unaff_w26 - unaff_w22 != 0 && unaff_w22 <= unaff_w26) {
      iVar5 = (unaff_w26 - unaff_w22) + unaff_w29;
      iVar7 = unaff_w29;
      iVar3 = unaff_w26;
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar8 = FUN_09b699f8(plVar14,0);
        unaff_w26 = iVar3;
        unaff_w29 = iVar7;
        if (iVar8 < 1) break;
        FUN_09b69fa0(plVar14,0,0);
        iVar3 = iVar3 + -1;
        iVar7 = iVar7 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w26 = unaff_w22;
        unaff_w29 = iVar5;
      } while (unaff_w22 < iVar3);
    }
    if (in_stack_000000b0._4_1_ != '\0') {
      thunk_FUN_0495413c(*in_stack_00000060,0);
    }
    iVar9 = iVar9 + 1;
    plVar14 = (long *)PTR_DAT_0ac09b88;
  } while (unaff_w22 < unaff_w26);
  if ((unaff_w26 <= unaff_w22) || (in_stack_00000018 == 0)) {
    iVar9 = 0;
    do {
      plVar10 = in_stack_000000c0;
      if (in_stack_000000c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = *in_stack_000000c0;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_09b6b400;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(in_stack_000000c0,*unaff_x20,0);
LAB_09b6b400:
      uVar18 = (*(code *)*puVar15)(plVar10,puVar15[1]);
      plVar10 = in_stack_000000c0;
      if ((uVar18 & 1) == 0) {
        iVar9 = 0x17;
        goto Unity_XR_Oculus_Input_OculusHMD__set_leftEyeAngularVelocity;
      }
      if (in_stack_000000c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = *in_stack_000000c0;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_09b6b468;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(in_stack_000000c0,*unaff_x20,1);
LAB_09b6b468:
      plVar10 = (long *)(*(code *)*puVar15)(plVar10,puVar15[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)PTR_DAT_0ac2ae98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c();
      }
      lVar17 = thunk_FUN_049840a8();
      if (in_stack_00000018 == 0) {
        plVar10 = *(long **)(lVar17 + 8);
        if (plVar10 == (long *)0x0) goto LAB_09b6c2dc;
        bVar2 = *(byte *)(*(long *)PTR_DAT_0acbe5f0 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)PTR_DAT_0acbe5f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar10);
        }
      }
      else {
        plVar10 = *(long **)(unaff_x19 + 0x10);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,in_stack_00000018,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar10 == (long *)0x0) {
LAB_09b6c2dc:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        bVar2 = *(byte *)(*(long *)PTR_DAT_0acbe5f0 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)PTR_DAT_0acbe5f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar10);
        }
      }
      plVar11 = (long *)plVar10[2];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_000000b8 = (**(code **)(*plVar11 + 0x308))(plVar11,*(undefined8 *)(*plVar11 + 0x310))
      ;
      in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
      in_stack_00000050 = 0;
      in_stack_00000060 = &stack0x000000b8;
      in_stack_000000b0._4_1_ = '\0';
      FUN_08de98fc(in_stack_000000b8,(long)&stack0x000000b0 + 4,0);
      plVar11 = (long *)plVar10[2];
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x2c8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x2d0)),
         plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = *plVar11;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0ac15130) {
            puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_09b6b5ec;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6b5ec:
      in_stack_000000a8 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      in_stack_00000040 = &stack0x000000a8;
      unaff_w26 = 0;
      in_stack_00000038 = 0;
      in_stack_00000048 = (long *)&stack0x000000a0;
      plVar11 = in_stack_00000020;
      uVar13 = in_stack_00000028;
LAB_09b6b610:
      in_stack_00000028 = uVar13;
      in_stack_00000020 = plVar11;
      plVar11 = in_stack_000000a8;
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = *in_stack_000000a8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto FUN_09b6b664;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,0);
FUN_09b6b664:
      uVar18 = (*(code *)*puVar15)(plVar11,puVar15[1]);
      plVar11 = in_stack_000000a8;
      if ((uVar18 & 1) != 0) {
        if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar17 = *in_stack_000000a8;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x20) {
              puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto Unity_XR_OpenVR_ViveWand__get_deviceVelocity;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,1);
Unity_XR_OpenVR_ViveWand__get_deviceVelocity:
        plVar12 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(plVar12);
          }
        }
        iVar9 = FUN_09b6c510(plVar12,plVar12);
        unaff_w29 = iVar9 + unaff_w29;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - iVar9;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar7 = FUN_09b699f8(plVar12,0);
        unaff_w26 = iVar7 + unaff_w26;
        iVar7 = FUN_09b699f8(plVar12,0);
        plVar11 = in_stack_00000020;
        uVar13 = in_stack_00000028;
        if (0 < iVar7) {
          uVar13 = FUN_09b69a44(plVar12,0,0);
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar18 = FUN_08d560b0(uVar13,in_stack_00000028,0);
          plVar11 = plVar12;
          if ((uVar18 & 1) == 0) {
            plVar11 = in_stack_00000020;
            uVar13 = in_stack_00000028;
          }
        }
        goto LAB_09b6b610;
      }
      plVar14 = (long *)thunk_FUN_04983e64(in_stack_000000a8,*(undefined8 *)PTR_DAT_0ac09b90);
      *in_stack_00000048 = (long)plVar14;
      if (plVar14 != (long *)0x0) {
        lVar17 = *plVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0ac09b90) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_09b6b82c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6b82c:
        (*(code *)*puVar15)(plVar14,puVar15[1]);
      }
      if (*in_stack_00000058 != '\0') {
        thunk_FUN_0495413c(*in_stack_00000060,0);
      }
      if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948184();
      }
      uVar6 = *(undefined4 *)(unaff_x19 + 0x1c);
      uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      plVar14 = (long *)PTR_DAT_0ac09b88;
      iVar5 = FUN_08d7af4c(uVar1,uVar6,0);
      iVar7 = -0x80000000;
      if (unaff_s8 * (float)unaff_w26 != INFINITY) {
        iVar7 = (int)(unaff_s8 * (float)unaff_w26);
      }
      unaff_w22 = FUN_08d7af4c(iVar7,iVar5 + -1,0);
    } while (unaff_w26 <= unaff_w22);
    plVar11 = (long *)plVar10[2];
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_000000b8 = (**(code **)(*plVar11 + 0x308))(plVar11,*(undefined8 *)(*plVar11 + 0x310));
    in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
    in_stack_00000050 = 0;
    in_stack_00000060 = &stack0x000000b8;
    in_stack_000000b0._4_1_ = '\0';
    FUN_08de98fc(in_stack_000000b8,(long)&stack0x000000b0 + 4,0);
    uVar13 = *(undefined8 *)PTR_DAT_0acbe618;
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    plVar11 = (long *)plVar10[2];
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
    unaff_x24 = FUN_08da22c4(uVar13,uVar6,0);
    uVar13 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac1d270,0);
    plVar11 = (long *)plVar10[2];
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
    unaff_x23 = FUN_08da22c4(uVar13,uVar6,0);
    plVar10 = (long *)plVar10[2];
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0))
       , plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar17 = *plVar10;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0ac15130) {
          puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_09b6bb2c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar15 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6bb2c:
    plVar10 = (long *)(*(code *)*puVar15)(plVar10,puVar15[1]);
    in_stack_00000040 = &stack0x000000a8;
    in_stack_00000038 = 0;
    in_stack_00000048 = (long *)&stack0x000000a0;
    do {
      in_stack_000000a8 = plVar10;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = *plVar10;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_09b6bba0;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(plVar10,*unaff_x20,0);
LAB_09b6bba0:
      uVar18 = (*(code *)*puVar15)(plVar10,puVar15[1]);
      plVar10 = in_stack_000000a8;
      if ((uVar18 & 1) == 0) goto LAB_09b6bcb0;
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = *in_stack_000000a8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_09b6bc08;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,1);
LAB_09b6bc08:
      plVar10 = (long *)(*(code *)*puVar15)(plVar10,puVar15[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      bVar2 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar10);
      }
      in_stack_00000030 = FUN_09b69a44(plVar10,0,0);
      uVar13 = thunk_FUN_04983b98(*plVar14,&stack0x00000030);
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c(uVar13,uVar13);
      }
      FUN_08d9ecb4(unaff_x23,uVar13,iVar9,0);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_08d9ecb4(unaff_x24,plVar10,iVar9,0);
      iVar9 = iVar9 + 1;
      plVar10 = in_stack_000000a8;
    } while( true );
  }
  in_stack_000000b0._4_1_ = '\0';
  iVar9 = 0x16;
Unity_XR_Oculus_Input_OculusHMD__set_leftEyeAngularVelocity:
  plVar14 = (long *)thunk_FUN_04983e64(*in_stack_00000070,*(undefined8 *)PTR_DAT_0ac09b90);
  *in_stack_00000078 = (long)plVar14;
  if (plVar14 == (long *)0x0) goto Unity_XR_Oculus_Input_OculusHMD__get_centerEyeAngularVelocity;
  lVar17 = *plVar14;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 == 0) goto Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAcceleration;
  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
  goto Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularVelocity;
LAB_09b6bcb0:
  unaff_x25 = 0;
  goto code_r0x09b6bcb4;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularVelocity:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_09b6c170;
    }
  }
Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAcceleration:
  puVar15 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6c170:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
Unity_XR_Oculus_Input_OculusHMD__get_centerEyeAngularVelocity:
  if (in_stack_00000068 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  uVar16 = (uint)*in_stack_00000088;
  if (*in_stack_00000088 != 0) {
    thunk_FUN_0495413c(*in_stack_00000090,0);
    uVar16 = extraout_w8;
  }
  puVar4 = PTR_DAT_0ac09b88;
  if (in_stack_00000080 == 0) {
    if (iVar9 != 0x17) {
      if (iVar9 == 0x16) {
        uVar16 = (uint)(in_stack_000000b0._4_1_ != '\0');
        goto LAB_09b6c0c8;
      }
      if (iVar9 != 0) goto LAB_09b6c0c8;
    }
    uVar16 = 1;
    if ((in_stack_00000018 == 0) && (unaff_w29 == 0)) {
      lVar17 = *(long *)PTR_DAT_0ac09b88;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar17 = *(long *)puVar4;
      }
      uVar18 = FUN_08d5b56c(in_stack_00000028,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18),0);
      if ((uVar18 & 1) == 0) {
        in_stack_00000088 = (byte *)((long)&stack0x000000c8 + 4);
        in_stack_000000c8._4_1_ = 0;
        in_stack_00000080 = 0;
        in_stack_00000090 = &stack0x00000098;
        in_stack_00000098 = in_stack_00000020;
        FUN_08de98fc(in_stack_00000020,(long)&stack0x000000c8 + 4,0);
        if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
          if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          do {
            iVar9 = FUN_09b699f8(in_stack_00000020,0);
            if (iVar9 < 1) break;
            FUN_09b69fa0(in_stack_00000020,0,0);
            iVar9 = *(int *)(unaff_x19 + 0x24) + -1;
            *(int *)(unaff_x19 + 0x24) = iVar9;
          } while (*(int *)(unaff_x19 + 0x1c) <= iVar9);
        }
        if (*in_stack_00000088 != 0) {
          thunk_FUN_0495413c(*in_stack_00000090,0);
        }
        if (in_stack_00000080 != 0) goto LAB_09b6c318;
        uVar16 = 1;
      }
      else {
        uVar16 = 0;
      }
    }
LAB_09b6c0c8:
    return uVar16 & 1;
  }
LAB_09b6c318:
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


