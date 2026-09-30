/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_get_session_fonts_t_account_handle_get
ENTRY_POINT: 09036390
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
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
  
  *(undefined8 *)(unaff_x24 + 0x30) = param_2;
  thunk_FUN_044bb4b4();
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
                    /* try { // try from 090363b0 to 091363bb has its CatchHandler @ 09036670 */
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
                    /* try { // try from 090363bc to 091363c3 has its CatchHandler @ 0903666c */
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
                    /* try { // try from 090363e0 to 091363e7 has its CatchHandler @ 09036660 */
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
        goto LAB_090363ec;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_090363ec:
  uVar8 = (*(code *)*puVar10)();
                    /* try { // try from 090363fc to 091363ff has its CatchHandler @ 09036644 */
  if ((uVar8 >> 8 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 0903640c to 0913640f has its CatchHandler @ 09036640 */
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_09036450;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036450:
    cVar7 = (*(code *)*puVar10)();
    *(bool *)(unaff_x24 + 0x40) = cVar7 != '\0';
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
        goto LAB_090364b8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_090364b8:
  uVar8 = (*(code *)*puVar10)();
  if ((uVar8 >> 8 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
          goto FUN_0903651c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
FUN_0903651c:
    cVar7 = (*(code *)*puVar10)();
    *(bool *)(unaff_x24 + 0x41) = cVar7 != '\0';
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_template_fonts_t_base__set
        ;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_template_fonts_t_base__set:
  uVar8 = (*(code *)*puVar10)();
  if ((uVar8 >> 8 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_090365e8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_090365e8:
    cVar7 = (*(code *)*puVar10)();
    *(bool *)(unaff_x24 + 0x42) = cVar7 != '\0';
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 5) * 0x10 + 0x138);
        goto LAB_09036650;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036650:
  uVar15 = (*(code *)*puVar10)();
  if ((uVar15 >> 0x20 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 5) * 0x10 + 0x138);
          goto LAB_090366b4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_090366b4:
    uVar9 = (*(code *)*puVar10)();
    *(undefined4 *)(unaff_x24 + 0x3c) = uVar9;
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
        goto LAB_09036714;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036714:
  uVar15 = (*(code *)*puVar10)();
  if ((uVar15 >> 0x20 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto LAB_09036778;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036778:
    uVar9 = (*(code *)*puVar10)();
    *(undefined4 *)(unaff_x24 + 0x38) = uVar9;
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 7) * 0x10 + 0x138);
        goto LAB_090367d8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac();
LAB_090367d8:
  _in_stack_00000150 = (*(code *)*puVar10)();
  puVar1 = PTR_DAT_09fc0a98;
  if (*(int *)(*(long *)PTR_DAT_09fc0a98 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar15 = FUN_06ffe3ec(&stack0x00000150,*(undefined8 *)PTR_DAT_09fc0a58);
  if ((uVar15 & 1) == 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 7) * 0x10 + 0x138);
          goto LAB_09036888;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036888:
    auVar19 = (*(code *)*puVar10)();
    _in_stack_00000150 = auVar19;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar15 = FUN_06ffe45c(&stack0x00000150,*(undefined8 *)PTR_DAT_09fc0a38);
    if ((uVar15 & 1) != 0) {
      plVar11 = (long *)(unaff_x24 + 0x50);
      if (*plVar11 == 0) {
        lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f6c1c8);
        FUN_07441bc0(lVar13,*(undefined8 *)PTR_DAT_09f6c1d0);
        *plVar11 = lVar13;
        thunk_FUN_044bb4b4(plVar11,lVar13);
      }
      lVar13 = *unaff_x25;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x26) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 7) * 0x10 + 0x138);
            goto LAB_09036954;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac();
LAB_09036954:
      auVar19 = (*(code *)*puVar10)();
      lVar13 = *(long *)puVar1;
      _in_stack_00000150 = auVar19;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar13);
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
      while (uVar12 = FUN_0525101c(&stack0x00000120,*(undefined8 *)puVar5),
            uVar18 = in_stack_00000140, lVar13 = in_stack_00000138, uVar15 = in_stack_00000130,
            (uVar12 & 1) != 0) {
        in_stack_00000110 = in_stack_00000138;
        in_stack_00000118 = in_stack_00000140;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar12 = FUN_06ffe3ec(&stack0x00000110,*(undefined8 *)puVar1);
        lVar14 = *plVar11;
        if ((uVar12 & 1) == 0) {
          in_stack_00000110 = lVar13;
          in_stack_00000118 = uVar18;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_07442978(lVar14,uVar15,in_stack_00000110,*(undefined8 *)puVar4);
        }
        else {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_07443e70(lVar14,uVar15,*(undefined8 *)puVar3);
        }
      }
      FUN_05251150(&stack0x00000120,*(undefined8 *)PTR_DAT_09fc0b00);
      unaff_x26 = (long *)PTR_DAT_09fc0b48;
    }
  }
  else if (*(long *)(unaff_x24 + 0x50) != 0) {
    FUN_07442b14(*(long *)(unaff_x24 + 0x50),*(undefined8 *)PTR_DAT_09fc0ab0);
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 8) * 0x10 + 0x138);
        goto LAB_09036ad0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,8);
LAB_09036ad0:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 8) * 0x10 + 0x138);
          goto LAB_09036b34;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,8);
LAB_09036b34:
    lVar13 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    puVar1 = PTR_DAT_09fc0bb0;
    lVar14 = *(long *)PTR_DAT_09fc0bb0;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar14);
      lVar14 = *(long *)puVar1;
    }
    lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
    if (lVar17 == 0) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar14);
        lVar14 = *(long *)puVar1;
      }
      uVar18 = **(undefined8 **)(lVar14 + 0xb8);
      lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc0aa0);
      FUN_071046fc(lVar17,uVar18,*(undefined8 *)PTR_DAT_09fc0ba8,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar11 = lVar17;
      thunk_FUN_044bb4b4(plVar11,lVar17);
    }
    if (lVar13 == 0) goto LAB_090374dc;
    System_Collections_Generic_List<Quaternion>__Clear
              (lVar13,lVar17,*(undefined8 *)PTR_DAT_09fc0b90);
    FUN_05b05310(&stack0x00000020,lVar13,*(undefined8 *)PTR_DAT_09f26de8);
    puVar2 = PTR_DAT_09fc0b88;
    puVar1 = PTR_DAT_09f26dd8;
    in_stack_000000f8 = in_stack_00000028;
    in_stack_000000f0 = in_stack_00000020;
    in_stack_00000100 = in_stack_00000030;
    while (uVar15 = FUN_076779fc(&stack0x000000f0,*(undefined8 *)puVar1), (uVar15 & 1) != 0) {
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_05baf638(*(long *)(unaff_x24 + 0x48),in_stack_00000100 & 0xffffffff,*(undefined8 *)puVar2)
      ;
    }
    FUN_076779f8(&stack0x000000f0,*(undefined8 *)PTR_DAT_09f26dd0);
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
        goto LAB_09036cac;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036cac:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_00 & 0xff) != 0) {
    plVar11 = (long *)(unaff_x24 + 0x48);
    if (*plVar11 == 0) {
      lVar13 = *unaff_x25;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x26) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
            goto LAB_09036d1c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036d1c:
      lVar13 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
      if (lVar13 == 0) goto LAB_090374dc;
      uVar9 = *(undefined4 *)(lVar13 + 0x18);
      lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f60cc0);
      FUN_05bad680(lVar13,uVar9,*(undefined8 *)PTR_DAT_09fc0b98);
      *plVar11 = lVar13;
      thunk_FUN_044bb4b4(plVar11,lVar13);
    }
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
          goto LAB_09036db8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,9);
LAB_09036db8:
    lVar13 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    if (lVar13 == 0) goto LAB_090374dc;
    FUN_05b2aa48(&stack0x00000020,lVar13,*(undefined8 *)PTR_DAT_09fc0b78);
    puVar2 = PTR_DAT_09fc0b80;
    puVar1 = PTR_DAT_09fc0b20;
    in_stack_000000d8 = in_stack_00000028;
    in_stack_000000d0 = in_stack_00000020;
    in_stack_000000e8 = in_stack_00000038;
    in_stack_000000e0 = in_stack_00000030;
    while (uVar15 = FUN_07681ba0(&stack0x000000d0,*(undefined8 *)puVar1), (uVar15 & 1) != 0) {
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_05baec14(*plVar11,in_stack_000000e0 & 0xffffffff,in_stack_000000e8,*(undefined8 *)puVar2);
    }
    FUN_07681b9c(&stack0x000000d0,*(undefined8 *)PTR_DAT_09fc0af0);
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 10) * 0x10 + 0x138);
        goto LAB_09036e84;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,10);
LAB_09036e84:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_01 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 10) * 0x10 + 0x138);
          goto LAB_09036ee8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,10);
LAB_09036ee8:
    lVar13 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    if (lVar13 == 0) {
LAB_090374dc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0731b40c(&stack0x00000020,lVar13,*(undefined8 *)PTR_DAT_09fc0ac0);
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
    while (uVar15 = FUN_0520e3ac(&stack0x000000a0,*(undefined8 *)puVar5), lVar13 = in_stack_000000b8
          , (uVar15 & 1) != 0) {
      if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar14 = FUN_05badb74(*(long *)(unaff_x24 + 0x48),*(undefined4 *)(in_stack_000000b8 + 0x10),
                            *puVar10);
      if (*(char *)(lVar13 + 0x20) != '\0') {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar13 + 0x18);
        thunk_FUN_044bb4b4();
      }
      if (*(char *)(lVar13 + 0x30) != '\0') {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(lVar13 + 0x28);
      }
      in_stack_00000098 = *(undefined8 *)(lVar13 + 0x40);
      in_stack_00000090 = *(long *)(lVar13 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_09fc0a90 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar15 = FUN_06ffe3ec(&stack0x00000090,*(undefined8 *)PTR_DAT_09fc0a48);
      if ((uVar15 & 1) == 0) {
        in_stack_00000098 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_00000090 = *(long *)(lVar13 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_09fc0a90 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar15 = FUN_06ffe45c(&stack0x00000090,*(undefined8 *)PTR_DAT_09fc0a30);
        if ((uVar15 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar11 = (long *)(lVar14 + 0x28);
          if (*plVar11 == 0) {
            lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f6bec0);
            FUN_07441bc0(lVar14,*(undefined8 *)PTR_DAT_09f6beb8);
            *plVar11 = lVar14;
            thunk_FUN_044bb4b4(plVar11,lVar14);
          }
          in_stack_00000098 = *(undefined8 *)(lVar13 + 0x40);
          in_stack_00000090 = *(long *)(lVar13 + 0x38);
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
          while (uVar12 = FUN_0525101c(&stack0x00000060,*(undefined8 *)puVar6),
                uVar18 = in_stack_00000080, lVar13 = in_stack_00000078, uVar15 = in_stack_00000070,
                (uVar12 & 1) != 0) {
            in_stack_00000050 = in_stack_00000078;
            in_stack_00000058 = in_stack_00000080;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar12 = FUN_06ffe3ec(&stack0x00000050,*(undefined8 *)puVar2);
            lVar14 = *plVar11;
            if ((uVar12 & 1) == 0) {
              in_stack_00000050 = lVar13;
              in_stack_00000058 = uVar18;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_07442978(lVar14,uVar15,in_stack_00000050,*(undefined8 *)puVar1);
            }
            else {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_07443e70(lVar14,uVar15,*(undefined8 *)puVar4);
            }
          }
          FUN_05251150(&stack0x00000060,*(undefined8 *)PTR_DAT_09fc0af8);
          puVar10 = (undefined8 *)PTR_DAT_09f59f60;
        }
      }
      else {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(lVar14 + 0x28) != 0) {
          FUN_07442b14(*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_09fc0aa8);
        }
      }
    }
    FUN_0520e4d0(&stack0x000000a0,*(undefined8 *)PTR_DAT_09fc0ae8);
    unaff_x26 = (long *)PTR_DAT_09fc0b48;
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
        goto LAB_0903725c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xc);
LAB_0903725c:
  uVar15 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((uVar15 >> 0x20 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
          goto LAB_090372c0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xc);
LAB_090372c0:
    uVar9 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    *(undefined4 *)(unaff_x24 + 0x70) = uVar9;
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
        goto LAB_09037320;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xb);
LAB_09037320:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_02 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
          goto LAB_09037384;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xb);
LAB_09037384:
    uVar18 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    *(undefined8 *)(unaff_x24 + 0x58) = uVar18;
    thunk_FUN_044bb4b4();
  }
  lVar13 = *unaff_x25;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
        goto LAB_090373f0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xd);
LAB_090373f0:
  (*(code *)*puVar10)(unaff_x25,puVar10[1]);
  if ((extraout_x1_03 & 0xff) != 0) {
    lVar13 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
          goto LAB_09037454;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(unaff_x25,*unaff_x26,0xd);
LAB_09037454:
    uVar18 = (*(code *)*puVar10)(unaff_x25,puVar10[1]);
    *(undefined8 *)(unaff_x24 + 0x68) = uVar18;
  }
  return;
}


