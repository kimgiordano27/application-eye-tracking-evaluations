/*
FUNCTION_NAME: Unity.XR.OpenVR.ViveWand$$get_trackpad
ENTRY_POINT: 09b6b684
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x09b6bf9c) */
/* WARNING: Removing unreachable block (ram,0x09b6bd78) */
/* WARNING: Removing unreachable block (ram,0x09b6b868) */
/* WARNING: Removing unreachable block (ram,0x09b6c300) */
/* WARNING: Removing unreachable block (ram,0x09b6b90c) */
/* WARNING: Removing unreachable block (ram,0x09b6bedc) */

uint Unity_XR_OpenVR_ViveWand__get_trackpad(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  uint extraout_w8;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  int unaff_w26;
  long *unaff_x27;
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
  
  do {
    uVar19 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == param_3) {
          puVar12 = (undefined8 *)(param_1 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto Unity_XR_OpenVR_ViveWand__get_deviceVelocity;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(unaff_x23,param_3,1);
Unity_XR_OpenVR_ViveWand__get_deviceVelocity:
    plVar13 = (long *)(*(code *)*puVar12)(unaff_x23,puVar12[1]);
    if (plVar13 != (long *)0x0) {
      bVar3 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar13);
      }
    }
    iVar7 = FUN_09b6c510(plVar13,plVar13);
    unaff_w29 = iVar7 + unaff_w29;
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - iVar7;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    iVar8 = FUN_09b699f8(plVar13,0);
    unaff_w26 = iVar8 + unaff_w26;
    iVar8 = FUN_09b699f8(plVar13,0);
    plVar6 = in_stack_00000020;
    uVar14 = in_stack_00000028;
    if (0 < iVar8) {
      uVar14 = FUN_09b69a44(plVar13,0,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar19 = FUN_08d560b0(uVar14,in_stack_00000028,0);
      plVar6 = plVar13;
      if ((uVar19 & 1) == 0) {
        plVar6 = in_stack_00000020;
        uVar14 = in_stack_00000028;
      }
    }
LAB_09b6b610:
    in_stack_00000028 = uVar14;
    in_stack_00000020 = plVar6;
    plVar13 = in_stack_000000a8;
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar17 = *in_stack_000000a8;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x20) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto FUN_09b6b664;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,0);
FUN_09b6b664:
    uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    if ((uVar19 & 1) == 0) {
      plVar13 = (long *)thunk_FUN_04983e64(in_stack_000000a8,*(undefined8 *)PTR_DAT_0ac09b90);
      *in_stack_00000048 = (long)plVar13;
      if (plVar13 != (long *)0x0) {
        lVar17 = *plVar13;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac09b90) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_09b6b82c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6b82c:
        (*(code *)*puVar12)(plVar13,puVar12[1]);
      }
      if (*in_stack_00000058 != '\0') {
        thunk_FUN_0495413c(*in_stack_00000060,0);
      }
      if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948184();
      }
      uVar10 = *(undefined4 *)(unaff_x19 + 0x1c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      unaff_x21 = (long *)PTR_DAT_0ac09b88;
      iVar9 = FUN_08d7af4c(uVar2,uVar10,0);
      iVar8 = -0x80000000;
      if (unaff_s8 * (float)unaff_w26 != INFINITY) {
        iVar8 = (int)(unaff_s8 * (float)unaff_w26);
      }
      iVar8 = FUN_08d7af4c(iVar8,iVar9 + -1,0);
      if (iVar8 < unaff_w26) {
        plVar13 = (long *)unaff_x27[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        in_stack_000000b8 =
             (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
        in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
        in_stack_00000050 = 0;
        in_stack_00000060 = &stack0x000000b8;
        in_stack_000000b0._4_1_ = '\0';
        FUN_08de98fc(in_stack_000000b8,(long)&stack0x000000b0 + 4,0);
        uVar14 = *(undefined8 *)PTR_DAT_0acbe618;
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        plVar13 = (long *)unaff_x27[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        uVar10 = (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
        lVar17 = FUN_08da22c4(uVar14,uVar10,0);
        uVar14 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac1d270,0);
        plVar13 = (long *)unaff_x27[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        uVar10 = (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
        lVar15 = FUN_08da22c4(uVar14,uVar10,0);
        plVar13 = (long *)unaff_x27[2];
        if ((plVar13 == (long *)0x0) ||
           (plVar13 = (long *)(**(code **)(*plVar13 + 0x2c8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x2d0)),
           plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar18 = *plVar13;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac15130) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_09b6bb2c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6bb2c:
        plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
        in_stack_00000040 = &stack0x000000a8;
        in_stack_00000038 = 0;
        in_stack_00000048 = (long *)&stack0x000000a0;
        do {
          in_stack_000000a8 = plVar13;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar18 = *plVar13;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x20) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_09b6bba0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_04980e68(plVar13,*unaff_x20,0);
LAB_09b6bba0:
          uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          plVar13 = in_stack_000000a8;
          if ((uVar19 & 1) == 0) goto LAB_09b6bcb0;
          if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar18 = *in_stack_000000a8;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x20) {
                puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_09b6bc08;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,1);
LAB_09b6bc08:
          plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          bVar3 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(plVar13);
          }
          in_stack_00000030 = FUN_09b69a44(plVar13,0,0);
          uVar14 = thunk_FUN_04983b98(*unaff_x21,&stack0x00000030);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c(uVar14,uVar14);
          }
          FUN_08d9ecb4(lVar15,uVar14,iVar7,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          FUN_08d9ecb4(lVar17,plVar13,iVar7,0);
          iVar7 = iVar7 + 1;
          plVar13 = in_stack_000000a8;
        } while( true );
      }
      goto LAB_09b6b3ac;
    }
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_1 = *in_stack_000000a8;
    param_3 = *unaff_x20;
    unaff_x23 = in_stack_000000a8;
  } while( true );
LAB_09b6bcb0:
  plVar13 = (long *)thunk_FUN_04983e64(in_stack_000000a8,*(undefined8 *)PTR_DAT_0ac09b90);
  *in_stack_00000048 = (long)plVar13;
  if (plVar13 != (long *)0x0) {
    lVar18 = *plVar13;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac09b90,0);
Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (*in_stack_00000058 != '\0') {
    thunk_FUN_0495413c(*in_stack_00000060,0);
  }
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  FUN_08da1af0(lVar15,lVar17,0);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar7 = 0;
  do {
    unaff_x21 = (long *)PTR_DAT_0ac09b88;
    iVar9 = FUN_08d948e8(lVar17,0);
    if (iVar9 <= iVar7) break;
    plVar13 = (long *)FUN_08d94948(lVar17,iVar7,0);
    if (plVar13 != (long *)0x0) {
      bVar3 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar13);
      }
    }
    in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
    in_stack_00000050 = 0;
    in_stack_00000060 = &stack0x00000098;
    in_stack_000000b0._4_1_ = '\0';
    in_stack_00000098 = plVar13;
    FUN_08de98fc(plVar13,(long)&stack0x000000b0 + 4,0);
    if (unaff_w26 - iVar8 != 0 && iVar8 <= unaff_w26) {
      iVar1 = (unaff_w26 - iVar8) + unaff_w29;
      iVar9 = unaff_w29;
      iVar4 = unaff_w26;
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar11 = FUN_09b699f8(plVar13,0);
        unaff_w26 = iVar4;
        unaff_w29 = iVar9;
        if (iVar11 < 1) break;
        FUN_09b69fa0(plVar13,0,0);
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w26 = iVar8;
        unaff_w29 = iVar1;
      } while (iVar8 < iVar4);
    }
    if (in_stack_000000b0._4_1_ != '\0') {
      thunk_FUN_0495413c(*in_stack_00000060,0);
    }
    iVar7 = iVar7 + 1;
    unaff_x21 = (long *)PTR_DAT_0ac09b88;
  } while (iVar8 < unaff_w26);
  if ((iVar8 < unaff_w26) && (in_stack_00000018 != 0)) {
    in_stack_000000b0._4_1_ = '\0';
    iVar7 = 0x16;
  }
  else {
    iVar7 = 0;
LAB_09b6b3ac:
    plVar13 = in_stack_000000c0;
    if (in_stack_000000c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar17 = *in_stack_000000c0;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x20) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_09b6b400;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(in_stack_000000c0,*unaff_x20,0);
LAB_09b6b400:
    uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    plVar13 = in_stack_000000c0;
    if ((uVar19 & 1) != 0) {
      if (in_stack_000000c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar17 = *in_stack_000000c0;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x20) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_09b6b468;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_04980e68(in_stack_000000c0,*unaff_x20,1);
LAB_09b6b468:
      plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)PTR_DAT_0ac2ae98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c();
      }
      lVar17 = thunk_FUN_049840a8();
      if (in_stack_00000018 == 0) {
        unaff_x27 = *(long **)(lVar17 + 8);
        if (unaff_x27 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_0acbe5f0 + 0x130);
          if ((*(byte *)(*unaff_x27 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_0acbe5f0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(unaff_x27);
          }
          goto LAB_09b6b53c;
        }
      }
      else {
        plVar13 = *(long **)(unaff_x19 + 0x10);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        unaff_x27 = (long *)(**(code **)(*plVar13 + 0x308))
                                      (plVar13,in_stack_00000018,*(undefined8 *)(*plVar13 + 0x310));
        if (unaff_x27 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_0acbe5f0 + 0x130);
          if ((*(byte *)(*unaff_x27 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_0acbe5f0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(unaff_x27);
          }
LAB_09b6b53c:
          plVar13 = (long *)unaff_x27[2];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          in_stack_000000b8 =
               (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
          in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x000000b8;
          in_stack_000000b0._4_1_ = '\0';
          FUN_08de98fc(in_stack_000000b8,(long)&stack0x000000b0 + 4,0);
          plVar13 = (long *)unaff_x27[2];
          if ((plVar13 == (long *)0x0) ||
             (plVar13 = (long *)(**(code **)(*plVar13 + 0x2c8))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x2d0)),
             plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar17 = *plVar13;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac15130) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_09b6b5ec;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6b5ec:
          in_stack_000000a8 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          in_stack_00000040 = &stack0x000000a8;
          unaff_w26 = 0;
          in_stack_00000038 = 0;
          in_stack_00000048 = (long *)&stack0x000000a0;
          plVar6 = in_stack_00000020;
          uVar14 = in_stack_00000028;
          goto LAB_09b6b610;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    iVar7 = 0x17;
  }
  plVar13 = (long *)thunk_FUN_04983e64(*in_stack_00000070,*(undefined8 *)PTR_DAT_0ac09b90);
  *in_stack_00000078 = (long)plVar13;
  if (plVar13 == (long *)0x0) goto Unity_XR_Oculus_Input_OculusHMD__get_centerEyeAngularVelocity;
  lVar17 = *plVar13;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 == 0) goto Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAcceleration;
  piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
  goto Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularVelocity;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularVelocity:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_09b6c170;
    }
  }
Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAcceleration:
  puVar12 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6c170:
  (*(code *)*puVar12)(plVar13,puVar12[1]);
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
  puVar5 = PTR_DAT_0ac09b88;
  if (in_stack_00000080 == 0) {
    if (iVar7 != 0x17) {
      if (iVar7 == 0x16) {
        uVar16 = (uint)(in_stack_000000b0._4_1_ != '\0');
        goto LAB_09b6c0c8;
      }
      if (iVar7 != 0) goto LAB_09b6c0c8;
    }
    uVar16 = 1;
    if ((in_stack_00000018 == 0) && (unaff_w29 == 0)) {
      lVar17 = *(long *)PTR_DAT_0ac09b88;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar17 = *(long *)puVar5;
      }
      uVar19 = FUN_08d5b56c(in_stack_00000028,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18),0);
      if ((uVar19 & 1) == 0) {
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
            iVar7 = FUN_09b699f8(in_stack_00000020,0);
            if (iVar7 < 1) break;
            FUN_09b69fa0(in_stack_00000020,0,0);
            iVar7 = *(int *)(unaff_x19 + 0x24) + -1;
            *(int *)(unaff_x19 + 0x24) = iVar7;
          } while (*(int *)(unaff_x19 + 0x1c) <= iVar7);
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


