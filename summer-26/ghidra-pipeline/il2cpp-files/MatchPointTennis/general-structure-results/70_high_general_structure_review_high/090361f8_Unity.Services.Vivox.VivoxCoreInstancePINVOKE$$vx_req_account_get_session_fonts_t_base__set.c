/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_get_session_fonts_t_base__set
ENTRY_POINT: 090361f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x09037198) */
/* WARNING: Removing unreachable block (ram,0x0903719c) */
/* WARNING: Removing unreachable block (ram,0x090374ec) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_base__set
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar15;
  long lVar16;
  long in_x9;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  ulong in_stack_00000130;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  
  if (in_x9 != 0) {
    piVar18 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 09036208 to 0913620b has its CatchHandler @ 09036638 */
                    /* try { // try from 0903620c to 0913623f has its CatchHandler @ 090366ac */
      if (*(long *)(piVar18 + -2) == *unaff_x26) {
        puVar11 = (undefined8 *)(param_1 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
        goto LAB_09036240;
      }
      in_x9 = in_x9 + -1;
      piVar18 = piVar18 + 4;
    } while (in_x9 != 0);
  }
  puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036240:
  iVar8 = (*(code *)*puVar11)();
                    /* try { // try from 0903624c to 0913626f has its CatchHandler @ 09036698 */
  if (unaff_x24 == 0) {
LAB_090374dc:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(unaff_x24 + 0x70) < iVar8) {
    lVar15 = *unaff_x25;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x26) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_090362a8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_044822ac();
LAB_090362a8:
    uVar17 = (*(code *)*puVar11)();
    if ((uVar17 & 1) == 0) {
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_0903631c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac();
LAB_0903631c:
      (*(code *)*puVar11)();
      if ((extraout_x1 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_09036380;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036380:
        uVar12 = (*(code *)*puVar11)();
        *(undefined8 *)(unaff_x24 + 0x30) = uVar12;
        thunk_FUN_044bb4b4();
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_090363ec;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac();
LAB_090363ec:
      uVar9 = (*(code *)*puVar11)();
      if ((uVar9 >> 8 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_09036450;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036450:
        cVar7 = (*(code *)*puVar11)();
        *(bool *)(unaff_x24 + 0x40) = cVar7 != '\0';
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto LAB_090364b8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac();
LAB_090364b8:
      uVar9 = (*(code *)*puVar11)();
      if ((uVar9 >> 8 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
              goto FUN_0903651c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac();
FUN_0903651c:
        cVar7 = (*(code *)*puVar11)();
        *(bool *)(unaff_x24 + 0x41) = cVar7 != '\0';
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_template_fonts_t_base__set
            ;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_template_fonts_t_base__set:
      uVar9 = (*(code *)*puVar11)();
      if ((uVar9 >> 8 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
              goto LAB_090365e8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac();
LAB_090365e8:
        cVar7 = (*(code *)*puVar11)();
        *(bool *)(unaff_x24 + 0x42) = cVar7 != '\0';
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
            goto LAB_09036650;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036650:
      uVar17 = (*(code *)*puVar11)();
      if ((uVar17 >> 0x20 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
              goto LAB_090366b4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac();
LAB_090366b4:
        uVar10 = (*(code *)*puVar11)();
        *(undefined4 *)(unaff_x24 + 0x3c) = uVar10;
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_09036714;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036714:
      uVar17 = (*(code *)*puVar11)();
      if ((uVar17 >> 0x20 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
              goto LAB_09036778;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036778:
        uVar10 = (*(code *)*puVar11)();
        *(undefined4 *)(unaff_x24 + 0x38) = uVar10;
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
            goto LAB_090367d8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac();
LAB_090367d8:
      _in_stack_00000150 = (*(code *)*puVar11)();
      puVar1 = PTR_DAT_09fc0a98;
      if (*(int *)(*(long *)PTR_DAT_09fc0a98 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar17 = FUN_06ffe3ec(&stack0x00000150,*(undefined8 *)PTR_DAT_09fc0a58);
      if ((uVar17 & 1) == 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_09036888;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036888:
        auVar20 = (*(code *)*puVar11)();
        _in_stack_00000150 = auVar20;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar17 = FUN_06ffe45c(&stack0x00000150,*(undefined8 *)PTR_DAT_09fc0a38);
        if ((uVar17 & 1) != 0) {
          plVar13 = (long *)(unaff_x24 + 0x50);
          if (*plVar13 == 0) {
            lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f6c1c8);
            FUN_07441bc0(lVar15,*(undefined8 *)PTR_DAT_09f6c1d0);
            *plVar13 = lVar15;
            thunk_FUN_044bb4b4(plVar13,lVar15);
          }
          lVar15 = *unaff_x25;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x26) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_09036954;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_044822ac();
LAB_09036954:
          auVar20 = (*(code *)*puVar11)();
          lVar15 = *(long *)puVar1;
          _in_stack_00000150 = auVar20;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_044a54b4(lVar15);
          }
          if (in_stack_00000150 == 0) goto LAB_090374dc;
          FUN_073da3ac(&stack0x00000020,in_stack_00000150,*(undefined8 *)PTR_DAT_09fc0ab8);
          puVar5 = PTR_DAT_09fc0b10;
          puVar4 = PTR_DAT_09fc0ae0;
          puVar3 = PTR_DAT_09fc0ad8;
          puVar2 = PTR_DAT_09fc0a88;
          puVar1 = PTR_DAT_09fc0a40;
          in_stack_00000128 = in_stack_00000028;
          in_stack_00000120 = in_stack_00000020;
          in_stack_00000138 = in_stack_00000038;
          in_stack_00000130 = in_stack_00000030;
          in_stack_00000148 = in_stack_00000048;
          in_stack_00000140 = in_stack_00000040;
          while (uVar14 = FUN_0525101c(&stack0x00000120,*(undefined8 *)puVar5),
                uVar12 = in_stack_00000140, lVar15 = in_stack_00000138, uVar17 = in_stack_00000130,
                (uVar14 & 1) != 0) {
            in_stack_00000110 = in_stack_00000138;
            in_stack_00000118 = in_stack_00000140;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar14 = FUN_06ffe3ec(&stack0x00000110,*(undefined8 *)puVar1);
            lVar16 = *plVar13;
            if ((uVar14 & 1) == 0) {
              in_stack_00000110 = lVar15;
              in_stack_00000118 = uVar12;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_07442978(lVar16,uVar17,in_stack_00000110,*(undefined8 *)puVar4);
            }
            else {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_07443e70(lVar16,uVar17,*(undefined8 *)puVar3);
            }
          }
          FUN_05251150(&stack0x00000120,*(undefined8 *)PTR_DAT_09fc0b00);
          unaff_x26 = (long *)PTR_DAT_09fc0b48;
        }
      }
      else if (*(long *)(unaff_x24 + 0x50) != 0) {
        FUN_07442b14(*(long *)(unaff_x24 + 0x50),*(undefined8 *)PTR_DAT_09fc0ab0);
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
            goto LAB_09036ad0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,8);
LAB_09036ad0:
      (*(code *)*puVar11)(unaff_x25,puVar11[1]);
      if ((extraout_x1_00 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
              goto LAB_09036b34;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,8);
LAB_09036b34:
        lVar15 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
        puVar1 = PTR_DAT_09fc0bb0;
        lVar16 = *(long *)PTR_DAT_09fc0bb0;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_044a54b4(lVar16);
          lVar16 = *(long *)puVar1;
        }
        lVar19 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
        if (lVar19 == 0) {
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_044a54b4(lVar16);
            lVar16 = *(long *)puVar1;
          }
          uVar12 = **(undefined8 **)(lVar16 + 0xb8);
          lVar19 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc0aa0);
          FUN_071046fc(lVar19,uVar12,*(undefined8 *)PTR_DAT_09fc0ba8,0);
          plVar13 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          *plVar13 = lVar19;
          thunk_FUN_044bb4b4(plVar13,lVar19);
        }
        if (lVar15 == 0) goto LAB_090374dc;
        System_Collections_Generic_List<Quaternion>__Clear
                  (lVar15,lVar19,*(undefined8 *)PTR_DAT_09fc0b90);
        FUN_05b05310(&stack0x00000020,lVar15,*(undefined8 *)PTR_DAT_09f26de8);
        puVar2 = PTR_DAT_09fc0b88;
        puVar1 = PTR_DAT_09f26dd8;
        in_stack_000000f8 = in_stack_00000028;
        in_stack_000000f0 = in_stack_00000020;
        in_stack_00000100 = in_stack_00000030;
        while (uVar17 = FUN_076779fc(&stack0x000000f0,*(undefined8 *)puVar1), (uVar17 & 1) != 0) {
          if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_05baf638(*(long *)(unaff_x24 + 0x48),in_stack_00000100 & 0xffffffff,
                       *(undefined8 *)puVar2);
        }
        FUN_076779f8(&stack0x000000f0,*(undefined8 *)PTR_DAT_09f26dd0);
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
            goto LAB_09036cac;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036cac:
      (*(code *)*puVar11)(unaff_x25,puVar11[1]);
      if ((extraout_x1_01 & 0xff) != 0) {
        plVar13 = (long *)(unaff_x24 + 0x48);
        if (*plVar13 == 0) {
          lVar15 = *unaff_x25;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x26) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                goto LAB_09036d1c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036d1c:
          lVar15 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
          if (lVar15 == 0) goto LAB_090374dc;
          uVar10 = *(undefined4 *)(lVar15 + 0x18);
          lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f60cc0);
          FUN_05bad680(lVar15,uVar10,*(undefined8 *)PTR_DAT_09fc0b98);
          *plVar13 = lVar15;
          thunk_FUN_044bb4b4(plVar13,lVar15);
        }
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
              goto LAB_09036db8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036db8:
        lVar15 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
        if (lVar15 == 0) goto LAB_090374dc;
        FUN_05b2aa48(&stack0x00000020,lVar15,*(undefined8 *)PTR_DAT_09fc0b78);
        puVar2 = PTR_DAT_09fc0b80;
        puVar1 = PTR_DAT_09fc0b20;
        in_stack_000000d8 = in_stack_00000028;
        in_stack_000000d0 = in_stack_00000020;
        in_stack_000000e8 = in_stack_00000038;
        in_stack_000000e0 = in_stack_00000030;
        while (uVar17 = FUN_07681ba0(&stack0x000000d0,*(undefined8 *)puVar1), (uVar17 & 1) != 0) {
          if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_05baec14(*plVar13,in_stack_000000e0 & 0xffffffff,in_stack_000000e8,
                       *(undefined8 *)puVar2);
        }
        FUN_07681b9c(&stack0x000000d0,*(undefined8 *)PTR_DAT_09fc0af0);
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
            goto LAB_09036e84;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,10);
LAB_09036e84:
      (*(code *)*puVar11)(unaff_x25,puVar11[1]);
      if ((extraout_x1_02 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
              goto LAB_09036ee8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,10);
LAB_09036ee8:
        lVar15 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
        if (lVar15 == 0) goto LAB_090374dc;
        FUN_0731b40c(&stack0x00000020,lVar15,*(undefined8 *)PTR_DAT_09fc0ac0);
        puVar6 = PTR_DAT_09fc0b18;
        puVar5 = PTR_DAT_09fc0b08;
        puVar4 = PTR_DAT_09fc0ad0;
        puVar3 = PTR_DAT_09fc0a80;
        puVar2 = PTR_DAT_09fc0a50;
        puVar1 = PTR_DAT_09f6bdd8;
        in_stack_000000a8 = in_stack_00000028;
        in_stack_000000a0 = in_stack_00000020;
        in_stack_000000b8 = in_stack_00000038;
        in_stack_000000b0 = in_stack_00000030;
        in_stack_000000c0 = in_stack_00000040;
        puVar11 = (undefined8 *)PTR_DAT_09f59f60;
        while (uVar17 = FUN_0520e3ac(&stack0x000000a0,*(undefined8 *)puVar5),
              lVar15 = in_stack_000000b8, (uVar17 & 1) != 0) {
          if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar16 = FUN_05badb74(*(long *)(unaff_x24 + 0x48),
                                *(undefined4 *)(in_stack_000000b8 + 0x10),*puVar11);
          if (*(char *)(lVar15 + 0x20) != '\0') {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar15 + 0x18);
            thunk_FUN_044bb4b4();
          }
          if (*(char *)(lVar15 + 0x30) != '\0') {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(lVar15 + 0x28);
          }
          in_stack_00000098 = *(undefined8 *)(lVar15 + 0x40);
          in_stack_00000090 = *(long *)(lVar15 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_09fc0a90 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar17 = FUN_06ffe3ec(&stack0x00000090,*(undefined8 *)PTR_DAT_09fc0a48);
          if ((uVar17 & 1) == 0) {
            in_stack_00000098 = *(undefined8 *)(lVar15 + 0x40);
            in_stack_00000090 = *(long *)(lVar15 + 0x38);
            if (*(int *)(*(long *)PTR_DAT_09fc0a90 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar17 = FUN_06ffe45c(&stack0x00000090,*(undefined8 *)PTR_DAT_09fc0a30);
            if ((uVar17 & 1) != 0) {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              plVar13 = (long *)(lVar16 + 0x28);
              if (*plVar13 == 0) {
                lVar16 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f6bec0);
                FUN_07441bc0(lVar16,*(undefined8 *)PTR_DAT_09f6beb8);
                *plVar13 = lVar16;
                thunk_FUN_044bb4b4(plVar13,lVar16);
              }
              in_stack_00000098 = *(undefined8 *)(lVar15 + 0x40);
              in_stack_00000090 = *(long *)(lVar15 + 0x38);
              if (*(int *)(*(long *)PTR_DAT_09fc0a90 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09fc0a90);
              }
              if (in_stack_00000090 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_073da3ac(&stack0x00000020,in_stack_00000090,*(undefined8 *)PTR_DAT_09fc0ac8);
              in_stack_00000068 = in_stack_00000028;
              in_stack_00000060 = in_stack_00000020;
              in_stack_00000078 = in_stack_00000038;
              in_stack_00000070 = in_stack_00000030;
              in_stack_00000088 = in_stack_00000048;
              in_stack_00000080 = in_stack_00000040;
              while (uVar14 = FUN_0525101c(&stack0x00000060,*(undefined8 *)puVar6),
                    uVar12 = in_stack_00000080, lVar15 = in_stack_00000078,
                    uVar17 = in_stack_00000070, (uVar14 & 1) != 0) {
                in_stack_00000050 = in_stack_00000078;
                in_stack_00000058 = in_stack_00000080;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar14 = FUN_06ffe3ec(&stack0x00000050,*(undefined8 *)puVar2);
                lVar16 = *plVar13;
                if ((uVar14 & 1) == 0) {
                  in_stack_00000050 = lVar15;
                  in_stack_00000058 = uVar12;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  FUN_07442978(lVar16,uVar17,in_stack_00000050,*(undefined8 *)puVar1);
                }
                else {
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  FUN_07443e70(lVar16,uVar17,*(undefined8 *)puVar4);
                }
              }
              FUN_05251150(&stack0x00000060,*(undefined8 *)PTR_DAT_09fc0af8);
              puVar11 = (undefined8 *)PTR_DAT_09f59f60;
            }
          }
          else {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(long *)(lVar16 + 0x28) != 0) {
              FUN_07442b14(*(long *)(lVar16 + 0x28),*(undefined8 *)PTR_DAT_09fc0aa8);
            }
          }
        }
        FUN_0520e4d0(&stack0x000000a0,*(undefined8 *)PTR_DAT_09fc0ae8);
        unaff_x26 = (long *)PTR_DAT_09fc0b48;
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
            goto LAB_0903725c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xc);
LAB_0903725c:
      uVar17 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
      if ((uVar17 >> 0x20 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
              goto LAB_090372c0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xc);
LAB_090372c0:
        uVar10 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
        *(undefined4 *)(unaff_x24 + 0x70) = uVar10;
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xb) * 0x10 + 0x138);
            goto LAB_09037320;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xb);
LAB_09037320:
      (*(code *)*puVar11)(unaff_x25,puVar11[1]);
      if ((extraout_x1_03 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xb) * 0x10 + 0x138);
              goto LAB_09037384;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xb);
LAB_09037384:
        uVar12 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
        *(undefined8 *)(unaff_x24 + 0x58) = uVar12;
        thunk_FUN_044bb4b4();
      }
      lVar15 = *unaff_x25;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xd) * 0x10 + 0x138);
            goto LAB_090373f0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xd);
LAB_090373f0:
      (*(code *)*puVar11)(unaff_x25,puVar11[1]);
      if ((extraout_x1_04 & 0xff) != 0) {
        lVar15 = *unaff_x25;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x26) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xd) * 0x10 + 0x138);
              goto LAB_09037454;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xd);
LAB_09037454:
        uVar12 = (*(code *)*puVar11)(unaff_x25,puVar11[1]);
        *(undefined8 *)(unaff_x24 + 0x68) = uVar12;
      }
    }
    else {
      FUN_09037740(*(undefined8 *)PTR_DAT_09fc0bb8);
    }
  }
  return;
}


