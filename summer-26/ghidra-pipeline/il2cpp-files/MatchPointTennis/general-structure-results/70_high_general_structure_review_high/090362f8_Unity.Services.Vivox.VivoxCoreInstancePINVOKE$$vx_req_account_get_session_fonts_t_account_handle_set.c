/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_get_session_fonts_t_account_handle_set
ENTRY_POINT: 090362f8
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar14;
  long lVar15;
  long in_x9;
  ulong uVar16;
  int *in_x10;
  int *piVar17;
  long lVar18;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 auVar19 [16];
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
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar10 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0903631c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* try { // try from 090362fc to 0913631f has its CatchHandler @ 09036688 */
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_0903631c:
                    /* try { // try from 09036324 to 09136347 has its CatchHandler @ 09036684 */
  (*(code *)*puVar10)();
  if ((extraout_x1 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
                    /* try { // try from 0903634c to 0913636f has its CatchHandler @ 09036680 */
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
                    /* try { // try from 09036374 to 091363a7 has its CatchHandler @ 090366a8 */
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_09036380;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036380:
    uVar11 = (*(code *)*puVar10)();
    *(undefined8 *)(unaff_x24 + 0x30) = uVar11;
    thunk_FUN_044bb4b4();
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_090363ec;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_090363ec:
  uVar8 = (*(code *)*puVar10)();
  if ((uVar8 >> 8 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_09036450;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036450:
    cVar7 = (*(code *)*puVar10)();
    *(bool *)(unaff_x24 + 0x40) = cVar7 != '\0';
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
        goto LAB_090364b8;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_090364b8:
  uVar8 = (*(code *)*puVar10)();
  if ((uVar8 >> 8 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto FUN_0903651c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
FUN_0903651c:
    cVar7 = (*(code *)*puVar10)();
    *(bool *)(unaff_x24 + 0x41) = cVar7 != '\0';
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 4) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_template_fonts_t_base__set
        ;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_template_fonts_t_base__set:
  uVar8 = (*(code *)*puVar10)();
  if ((uVar8 >> 8 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 4) * 0x10 + 0x138);
          goto LAB_090365e8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_090365e8:
    cVar7 = (*(code *)*puVar10)();
    *(bool *)(unaff_x24 + 0x42) = cVar7 != '\0';
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
        goto LAB_09036650;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036650:
  uVar16 = (*(code *)*puVar10)();
  if ((uVar16 >> 0x20 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_090366b4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_090366b4:
    uVar9 = (*(code *)*puVar10)();
    *(undefined4 *)(unaff_x24 + 0x3c) = uVar9;
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
        goto LAB_09036714;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036714:
  uVar16 = (*(code *)*puVar10)();
  if ((uVar16 >> 0x20 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
          goto LAB_09036778;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036778:
    uVar9 = (*(code *)*puVar10)();
    *(undefined4 *)(unaff_x24 + 0x38) = uVar9;
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 7) * 0x10 + 0x138);
        goto LAB_090367d8;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_090367d8:
  _in_stack_00000150 = (*(code *)*puVar10)();
  puVar1 = PTR_DAT_09fc0a98;
  if (*(int *)(*(long *)PTR_DAT_09fc0a98 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar16 = FUN_06ffe3ec(&stack0x00000150,*(undefined8 *)PTR_DAT_09fc0a58);
  if ((uVar16 & 1) == 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 7) * 0x10 + 0x138);
          goto LAB_09036888;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036888:
    auVar19 = (*(code *)*puVar10)();
    _in_stack_00000150 = auVar19;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar16 = FUN_06ffe45c(&stack0x00000150,*(undefined8 *)PTR_DAT_09fc0a38);
    if ((uVar16 & 1) != 0) {
      plVar12 = (long *)(unaff_x24 + 0x50);
      if (*plVar12 == 0) {
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f6c1c8);
        FUN_07441bc0(lVar14,*(undefined8 *)PTR_DAT_09f6c1d0);
        *plVar12 = lVar14;
        thunk_FUN_044bb4b4(plVar12,lVar14);
      }
      lVar14 = *unaff_x25;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x26) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 7) * 0x10 + 0x138);
            goto LAB_09036954;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036954:
      auVar19 = (*(code *)*puVar10)();
      lVar14 = *(long *)puVar1;
      _in_stack_00000150 = auVar19;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar14);
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
      while (uVar13 = FUN_0525101c(&stack0x00000120,*(undefined8 *)puVar5),
            uVar11 = in_stack_00000140, lVar14 = in_stack_00000138, uVar16 = in_stack_00000130,
            (uVar13 & 1) != 0) {
        in_stack_00000110 = in_stack_00000138;
        in_stack_00000118 = in_stack_00000140;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar13 = FUN_06ffe3ec(&stack0x00000110,*(undefined8 *)puVar1);
        lVar15 = *plVar12;
        if ((uVar13 & 1) == 0) {
          in_stack_00000110 = lVar14;
          in_stack_00000118 = uVar11;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_07442978(lVar15,uVar16,in_stack_00000110,*(undefined8 *)puVar4);
        }
        else {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_07443e70(lVar15,uVar16,*(undefined8 *)puVar3);
        }
      }
      FUN_05251150(&stack0x00000120,*(undefined8 *)PTR_DAT_09fc0b00);
      unaff_x26 = (long *)PTR_DAT_09fc0b48;
    }
  }
  else if (*(long *)(unaff_x24 + 0x50) != 0) {
    FUN_07442b14(*(long *)(unaff_x24 + 0x50),*(undefined8 *)PTR_DAT_09fc0ab0);
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 8) * 0x10 + 0x138);
        goto LAB_09036ad0;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,8);
LAB_09036ad0:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_00 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 8) * 0x10 + 0x138);
          goto LAB_09036b34;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,8);
LAB_09036b34:
    lVar14 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    puVar1 = PTR_DAT_09fc0bb0;
    lVar15 = *(long *)PTR_DAT_09fc0bb0;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar15);
      lVar15 = *(long *)puVar1;
    }
    lVar18 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
    if (lVar18 == 0) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar15);
        lVar15 = *(long *)puVar1;
      }
      uVar11 = **(undefined8 **)(lVar15 + 0xb8);
      lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc0aa0);
      FUN_071046fc(lVar18,uVar11,*(undefined8 *)PTR_DAT_09fc0ba8,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar12 = lVar18;
      thunk_FUN_044bb4b4(plVar12,lVar18);
    }
    if (lVar14 == 0) goto LAB_090374dc;
    System_Collections_Generic_List<Quaternion>__Clear
              (lVar14,lVar18,*(undefined8 *)PTR_DAT_09fc0b90);
    FUN_05b05310(&stack0x00000020,lVar14,*(undefined8 *)PTR_DAT_09f26de8);
    puVar2 = PTR_DAT_09fc0b88;
    puVar1 = PTR_DAT_09f26dd8;
    in_stack_000000f8 = in_stack_00000028;
    in_stack_000000f0 = in_stack_00000020;
    in_stack_00000100 = in_stack_00000030;
    while (uVar16 = FUN_076779fc(&stack0x000000f0,*(undefined8 *)puVar1), (uVar16 & 1) != 0) {
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_05baf638(*(long *)(unaff_x24 + 0x48),in_stack_00000100 & 0xffffffff,*(undefined8 *)puVar2)
      ;
    }
    FUN_076779f8(&stack0x000000f0,*(undefined8 *)PTR_DAT_09f26dd0);
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 9) * 0x10 + 0x138);
        goto LAB_09036cac;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036cac:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_01 & 0xff) != 0) {
    plVar12 = (long *)(unaff_x24 + 0x48);
    if (*plVar12 == 0) {
      lVar14 = *unaff_x25;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x26) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 9) * 0x10 + 0x138);
            goto LAB_09036d1c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036d1c:
      lVar14 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
      if (lVar14 == 0) goto LAB_090374dc;
      uVar9 = *(undefined4 *)(lVar14 + 0x18);
      lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f60cc0);
      FUN_05bad680(lVar14,uVar9,*(undefined8 *)PTR_DAT_09fc0b98);
      *plVar12 = lVar14;
      thunk_FUN_044bb4b4(plVar12,lVar14);
    }
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 9) * 0x10 + 0x138);
          goto LAB_09036db8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036db8:
    lVar14 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    if (lVar14 == 0) goto LAB_090374dc;
    FUN_05b2aa48(&stack0x00000020,lVar14,*(undefined8 *)PTR_DAT_09fc0b78);
    puVar2 = PTR_DAT_09fc0b80;
    puVar1 = PTR_DAT_09fc0b20;
    in_stack_000000d8 = in_stack_00000028;
    in_stack_000000d0 = in_stack_00000020;
    in_stack_000000e8 = in_stack_00000038;
    in_stack_000000e0 = in_stack_00000030;
    while (uVar16 = FUN_07681ba0(&stack0x000000d0,*(undefined8 *)puVar1), (uVar16 & 1) != 0) {
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_05baec14(*plVar12,in_stack_000000e0 & 0xffffffff,in_stack_000000e8,*(undefined8 *)puVar2);
    }
    FUN_07681b9c(&stack0x000000d0,*(undefined8 *)PTR_DAT_09fc0af0);
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
        goto LAB_09036e84;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,10);
LAB_09036e84:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_02 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
          goto LAB_09036ee8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,10);
LAB_09036ee8:
    lVar14 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    if (lVar14 == 0) {
LAB_090374dc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0731b40c(&stack0x00000020,lVar14,*(undefined8 *)PTR_DAT_09fc0ac0);
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
    puVar10 = (undefined8 *)PTR_DAT_09f59f60;
    while (uVar16 = FUN_0520e3ac(&stack0x000000a0,*(undefined8 *)puVar5), lVar14 = in_stack_000000b8
          , (uVar16 & 1) != 0) {
      if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = FUN_05badb74(*(long *)(unaff_x24 + 0x48),*(undefined4 *)(in_stack_000000b8 + 0x10),
                            *puVar10);
      if (*(char *)(lVar14 + 0x20) != '\0') {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar14 + 0x18);
        thunk_FUN_044bb4b4();
      }
      if (*(char *)(lVar14 + 0x30) != '\0') {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(lVar14 + 0x28);
      }
      in_stack_00000098 = *(undefined8 *)(lVar14 + 0x40);
      in_stack_00000090 = *(long *)(lVar14 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_09fc0a90 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar16 = FUN_06ffe3ec(&stack0x00000090,*(undefined8 *)PTR_DAT_09fc0a48);
      if ((uVar16 & 1) == 0) {
        in_stack_00000098 = *(undefined8 *)(lVar14 + 0x40);
        in_stack_00000090 = *(long *)(lVar14 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_09fc0a90 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar16 = FUN_06ffe45c(&stack0x00000090,*(undefined8 *)PTR_DAT_09fc0a30);
        if ((uVar16 & 1) != 0) {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar12 = (long *)(lVar15 + 0x28);
          if (*plVar12 == 0) {
            lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f6bec0);
            FUN_07441bc0(lVar15,*(undefined8 *)PTR_DAT_09f6beb8);
            *plVar12 = lVar15;
            thunk_FUN_044bb4b4(plVar12,lVar15);
          }
          in_stack_00000098 = *(undefined8 *)(lVar14 + 0x40);
          in_stack_00000090 = *(long *)(lVar14 + 0x38);
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
          while (uVar13 = FUN_0525101c(&stack0x00000060,*(undefined8 *)puVar6),
                uVar11 = in_stack_00000080, lVar14 = in_stack_00000078, uVar16 = in_stack_00000070,
                (uVar13 & 1) != 0) {
            in_stack_00000050 = in_stack_00000078;
            in_stack_00000058 = in_stack_00000080;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar13 = FUN_06ffe3ec(&stack0x00000050,*(undefined8 *)puVar2);
            lVar15 = *plVar12;
            if ((uVar13 & 1) == 0) {
              in_stack_00000050 = lVar14;
              in_stack_00000058 = uVar11;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_07442978(lVar15,uVar16,in_stack_00000050,*(undefined8 *)puVar1);
            }
            else {
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_07443e70(lVar15,uVar16,*(undefined8 *)puVar4);
            }
          }
          FUN_05251150(&stack0x00000060,*(undefined8 *)PTR_DAT_09fc0af8);
          puVar10 = (undefined8 *)PTR_DAT_09f59f60;
        }
      }
      else {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(lVar15 + 0x28) != 0) {
          FUN_07442b14(*(long *)(lVar15 + 0x28),*(undefined8 *)PTR_DAT_09fc0aa8);
        }
      }
    }
    FUN_0520e4d0(&stack0x000000a0,*(undefined8 *)PTR_DAT_09fc0ae8);
    unaff_x26 = (long *)PTR_DAT_09fc0b48;
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xc) * 0x10 + 0x138);
        goto LAB_0903725c;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xc);
LAB_0903725c:
  uVar16 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((uVar16 >> 0x20 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xc) * 0x10 + 0x138);
          goto LAB_090372c0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xc);
LAB_090372c0:
    uVar9 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    *(undefined4 *)(unaff_x24 + 0x70) = uVar9;
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
        goto LAB_09037320;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xb);
LAB_09037320:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_03 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
          goto LAB_09037384;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xb);
LAB_09037384:
    uVar11 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    *(undefined8 *)(unaff_x24 + 0x58) = uVar11;
    thunk_FUN_044bb4b4();
  }
  lVar14 = *unaff_x25;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
        goto LAB_090373f0;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xd);
LAB_090373f0:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_04 & 0xff) != 0) {
    lVar14 = *unaff_x25;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
          goto LAB_09037454;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xd);
LAB_09037454:
    uVar11 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    *(undefined8 *)(unaff_x24 + 0x68) = uVar11;
  }
  return;
}


