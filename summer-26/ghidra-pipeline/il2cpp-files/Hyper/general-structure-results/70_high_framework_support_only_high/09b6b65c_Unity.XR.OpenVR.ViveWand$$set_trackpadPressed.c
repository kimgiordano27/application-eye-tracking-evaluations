/*
FUNCTION_NAME: Unity.XR.OpenVR.ViveWand$$set_trackpadPressed
ENTRY_POINT: 09b6b65c
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
/* WARNING: Removing unreachable block (ram,0x09b6c300) */
/* WARNING: Removing unreachable block (ram,0x09b6b868) */
/* WARNING: Removing unreachable block (ram,0x09b6bd78) */
/* WARNING: Removing unreachable block (ram,0x09b6b90c) */
/* WARNING: Removing unreachable block (ram,0x09b6bedc) */

uint Unity_XR_OpenVR_ViveWand__set_trackpadPressed(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  uint extraout_w8;
  uint uVar17;
  long lVar18;
  long lVar19;
  long in_x9;
  int *piVar20;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined8 uVar21;
  int unaff_w25;
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
  
code_r0x09b6b65c:
  puVar13 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
FUN_09b6b664:
  uVar12 = (*(code *)*puVar13)(unaff_x23,puVar13[1]);
  plVar14 = in_stack_000000a8;
  plVar6 = in_stack_00000020;
  uVar15 = in_stack_00000028;
  if ((uVar12 & 1) == 0) {
    plVar14 = (long *)thunk_FUN_04983e64(in_stack_000000a8,*(undefined8 *)PTR_DAT_0ac09b90);
    *in_stack_00000048 = (long)plVar14;
    if (plVar14 != (long *)0x0) {
      lVar18 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac09b90) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_09b6b82c;
          }
          uVar12 = uVar12 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6b82c:
      (*(code *)*puVar13)(plVar14,puVar13[1]);
    }
    if (*in_stack_00000058 != '\0') {
      thunk_FUN_0495413c(*in_stack_00000060,0);
    }
    if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948184();
    }
    uVar9 = *(undefined4 *)(unaff_x19 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    unaff_x21 = (long *)PTR_DAT_0ac09b88;
    iVar8 = FUN_08d7af4c(uVar2,uVar9,0);
    iVar7 = -0x80000000;
    if (unaff_s8 * (float)unaff_w26 != INFINITY) {
      iVar7 = (int)(unaff_s8 * (float)unaff_w26);
    }
    iVar7 = FUN_08d7af4c(iVar7,iVar8 + -1,0);
    if (iVar7 < unaff_w26) {
      plVar14 = (long *)unaff_x27[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_000000b8 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310))
      ;
      in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
      in_stack_00000050 = 0;
      in_stack_00000060 = &stack0x000000b8;
      in_stack_000000b0._4_1_ = '\0';
      FUN_08de98fc(in_stack_000000b8,(long)&stack0x000000b0 + 4,0);
      uVar21 = *(undefined8 *)PTR_DAT_0acbe618;
      if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar21 = FUN_08d895f0(uVar21,0);
      plVar14 = (long *)unaff_x27[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar9 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      lVar18 = FUN_08da22c4(uVar21,uVar9,0);
      uVar21 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac1d270,0);
      plVar14 = (long *)unaff_x27[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar9 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      lVar16 = FUN_08da22c4(uVar21,uVar9,0);
      plVar14 = (long *)unaff_x27[2];
      if ((plVar14 == (long *)0x0) ||
         (plVar14 = (long *)(**(code **)(*plVar14 + 0x2c8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x2d0)),
         plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar19 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar12 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac15130) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_09b6bb2c;
          }
          uVar12 = uVar12 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6bb2c:
      plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
      in_stack_00000040 = &stack0x000000a8;
      in_stack_00000038 = 0;
      in_stack_00000048 = (long *)&stack0x000000a0;
      do {
        in_stack_000000a8 = plVar14;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar19 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x20) {
              puVar13 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_09b6bba0;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_04980e68(plVar14,*unaff_x20,0);
LAB_09b6bba0:
        uVar12 = (*(code *)*puVar13)(plVar14,puVar13[1]);
        plVar14 = in_stack_000000a8;
        if ((uVar12 & 1) == 0) goto LAB_09b6bcb0;
        if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar19 = *in_stack_000000a8;
        uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x20) {
              puVar13 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_09b6bc08;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,1);
LAB_09b6bc08:
        plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        bVar3 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar14);
        }
        in_stack_00000030 = FUN_09b69a44(plVar14,0,0);
        uVar21 = thunk_FUN_04983b98(*unaff_x21,&stack0x00000030);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c(uVar21,uVar21);
        }
        FUN_08d9ecb4(lVar16,uVar21,unaff_w25,0);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        FUN_08d9ecb4(lVar18,plVar14,unaff_w25,0);
        unaff_w25 = unaff_w25 + 1;
        plVar14 = in_stack_000000a8;
      } while( true );
    }
    goto LAB_09b6b3ac;
  }
  if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar18 = *in_stack_000000a8;
  uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar12 != 0) {
    piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x20) {
        puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto Unity_XR_OpenVR_ViveWand__get_deviceVelocity;
      }
      uVar12 = uVar12 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,1);
Unity_XR_OpenVR_ViveWand__get_deviceVelocity:
  plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
  if (plVar14 != (long *)0x0) {
    bVar3 = *(byte *)(*unaff_x28 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(plVar14);
    }
  }
  unaff_w25 = FUN_09b6c510(plVar14,plVar14);
  unaff_w29 = unaff_w25 + unaff_w29;
  *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w25;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar7 = FUN_09b699f8(plVar14,0);
  unaff_w26 = iVar7 + unaff_w26;
  iVar7 = FUN_09b699f8(plVar14,0);
  if (0 < iVar7) {
    uVar15 = FUN_09b69a44(plVar14,0,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar12 = FUN_08d560b0(uVar15,in_stack_00000028,0);
    plVar6 = plVar14;
    if ((uVar12 & 1) == 0) {
      plVar6 = in_stack_00000020;
      uVar15 = in_stack_00000028;
    }
  }
  goto LAB_09b6b610;
LAB_09b6bcb0:
  plVar14 = (long *)thunk_FUN_04983e64(in_stack_000000a8,*(undefined8 *)PTR_DAT_0ac09b90);
  *in_stack_00000048 = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    lVar19 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar12 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
          goto Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed;
        }
        uVar12 = uVar12 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac09b90,0);
Unity_XR_OpenVR_OpenVROculusTouchController__set_triggerPressed:
    (*(code *)*puVar13)(plVar14,puVar13[1]);
  }
  if (*in_stack_00000058 != '\0') {
    thunk_FUN_0495413c(*in_stack_00000060,0);
  }
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  FUN_08da1af0(lVar16,lVar18,0);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar8 = 0;
  do {
    unaff_x21 = (long *)PTR_DAT_0ac09b88;
    iVar10 = FUN_08d948e8(lVar18,0);
    if (iVar10 <= iVar8) break;
    plVar14 = (long *)FUN_08d94948(lVar18,iVar8,0);
    if (plVar14 != (long *)0x0) {
      bVar3 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x28)) {
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
    if (unaff_w26 - iVar7 != 0 && iVar7 <= unaff_w26) {
      iVar1 = (unaff_w26 - iVar7) + unaff_w29;
      iVar10 = unaff_w29;
      iVar4 = unaff_w26;
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar11 = FUN_09b699f8(plVar14,0);
        unaff_w26 = iVar4;
        unaff_w29 = iVar10;
        if (iVar11 < 1) break;
        FUN_09b69fa0(plVar14,0,0);
        iVar4 = iVar4 + -1;
        iVar10 = iVar10 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w26 = iVar7;
        unaff_w29 = iVar1;
      } while (iVar7 < iVar4);
    }
    if (in_stack_000000b0._4_1_ != '\0') {
      thunk_FUN_0495413c(*in_stack_00000060,0);
    }
    iVar8 = iVar8 + 1;
    unaff_x21 = (long *)PTR_DAT_0ac09b88;
  } while (iVar7 < unaff_w26);
  if ((iVar7 < unaff_w26) && (in_stack_00000018 != 0)) {
    in_stack_000000b0._4_1_ = '\0';
    iVar7 = 0x16;
  }
  else {
    unaff_w25 = 0;
LAB_09b6b3ac:
    plVar14 = in_stack_000000c0;
    if (in_stack_000000c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar18 = *in_stack_000000c0;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x20) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_09b6b400;
        }
        uVar12 = uVar12 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(in_stack_000000c0,*unaff_x20,0);
LAB_09b6b400:
    uVar12 = (*(code *)*puVar13)(plVar14,puVar13[1]);
    plVar14 = in_stack_000000c0;
    if ((uVar12 & 1) != 0) {
      if (in_stack_000000c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar18 = *in_stack_000000c0;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x20) {
            puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_09b6b468;
          }
          uVar12 = uVar12 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_04980e68(in_stack_000000c0,*unaff_x20,1);
LAB_09b6b468:
      plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)PTR_DAT_0ac2ae98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c();
      }
      lVar18 = thunk_FUN_049840a8();
      if (in_stack_00000018 == 0) {
        unaff_x27 = *(long **)(lVar18 + 8);
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
        plVar14 = *(long **)(unaff_x19 + 0x10);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        unaff_x27 = (long *)(**(code **)(*plVar14 + 0x308))
                                      (plVar14,in_stack_00000018,*(undefined8 *)(*plVar14 + 0x310));
        if (unaff_x27 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_0acbe5f0 + 0x130);
          if ((*(byte *)(*unaff_x27 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_0acbe5f0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494850c(unaff_x27);
          }
LAB_09b6b53c:
          plVar14 = (long *)unaff_x27[2];
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          in_stack_000000b8 =
               (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
          in_stack_00000058 = (char *)((long)&stack0x000000b0 + 4);
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x000000b8;
          in_stack_000000b0._4_1_ = '\0';
          FUN_08de98fc(in_stack_000000b8,(long)&stack0x000000b0 + 4,0);
          plVar14 = (long *)unaff_x27[2];
          if ((plVar14 == (long *)0x0) ||
             (plVar14 = (long *)(**(code **)(*plVar14 + 0x2c8))
                                          (plVar14,*(undefined8 *)(*plVar14 + 0x2d0)),
             plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar18 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac15130) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_09b6b5ec;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac15130,0);
LAB_09b6b5ec:
          in_stack_000000a8 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
          in_stack_00000040 = &stack0x000000a8;
          unaff_w26 = 0;
          in_stack_00000038 = 0;
          in_stack_00000048 = (long *)&stack0x000000a0;
LAB_09b6b610:
          in_stack_00000028 = uVar15;
          in_stack_00000020 = plVar6;
          unaff_x23 = in_stack_000000a8;
          if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          param_1 = *in_stack_000000a8;
          uVar12 = (ulong)*(ushort *)(param_1 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(param_1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x20) {
                in_x9 = (long)*piVar20;
                goto code_r0x09b6b65c;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x20,0);
          goto FUN_09b6b664;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    iVar7 = 0x17;
  }
  plVar14 = (long *)thunk_FUN_04983e64(*in_stack_00000070,*(undefined8 *)PTR_DAT_0ac09b90);
  *in_stack_00000078 = (long)plVar14;
  if (plVar14 == (long *)0x0) goto Unity_XR_Oculus_Input_OculusHMD__get_centerEyeAngularVelocity;
  lVar18 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar12 == 0) goto Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAcceleration;
  piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
  goto Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularVelocity;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar20 = piVar20 + 4;
    if (uVar12 == 0) break;
Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularVelocity:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_09b6c170;
    }
  }
Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAcceleration:
  puVar13 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac09b90,0);
LAB_09b6c170:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
Unity_XR_Oculus_Input_OculusHMD__get_centerEyeAngularVelocity:
  if (in_stack_00000068 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  uVar17 = (uint)*in_stack_00000088;
  if (*in_stack_00000088 != 0) {
    thunk_FUN_0495413c(*in_stack_00000090,0);
    uVar17 = extraout_w8;
  }
  puVar5 = PTR_DAT_0ac09b88;
  if (in_stack_00000080 == 0) {
    if (iVar7 != 0x17) {
      if (iVar7 == 0x16) {
        uVar17 = (uint)(in_stack_000000b0._4_1_ != '\0');
        goto LAB_09b6c0c8;
      }
      if (iVar7 != 0) goto LAB_09b6c0c8;
    }
    uVar17 = 1;
    if ((in_stack_00000018 == 0) && (unaff_w29 == 0)) {
      lVar18 = *(long *)PTR_DAT_0ac09b88;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar18 = *(long *)puVar5;
      }
      uVar12 = FUN_08d5b56c(in_stack_00000028,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x18),0);
      if ((uVar12 & 1) == 0) {
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
        uVar17 = 1;
      }
      else {
        uVar17 = 0;
      }
    }
LAB_09b6c0c8:
    return uVar17 & 1;
  }
LAB_09b6c318:
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


