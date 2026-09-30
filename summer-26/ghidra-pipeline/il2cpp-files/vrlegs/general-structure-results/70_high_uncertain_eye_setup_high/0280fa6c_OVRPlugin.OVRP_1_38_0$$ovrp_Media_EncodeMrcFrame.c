/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrame
ENTRY_POINT: 0280fa6c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrame(void)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  long lVar16;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  double dVar17;
  undefined1 auVar18 [16];
  double in_stack_00000010;
  long in_stack_00000018;
  double in_stack_00000020;
  int iStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined *puVar14;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cda078);
  *(undefined1 *)(unaff_x23 + 0x333) = 1;
  puVar14 = PTR_DAT_03cc02b0;
  in_stack_00000030 = 0;
  iStack000000000000002c = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0.0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000010 = 0.0;
  uVar8 = 8;
  if ((*(int *)(unaff_x19 + 0x28) == 0) && (uVar8 = 0xc, *(char *)(unaff_x19 + 0x71) != '\0')) {
    uVar8 = 8;
  }
  *(undefined4 *)(unaff_x19 + 0x24) = uVar8;
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
  }
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_0282f654(&stack0x00000038,*(undefined8 *)(unaff_x19 + 0x80),unaff_w20,
               *(int *)(unaff_x19 + 0x8c) - unaff_w20,0);
  plVar2 = (long *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000038;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,0);
  if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_026b1a64(unaff_x21 & 0xffffffff,0);
  puVar14 = PTR_DAT_03cfdb48;
  if ((uVar11 & 1) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(unaff_x19 + 0xbc) == 1;
  }
  iVar9 = ((uint)unaff_x21 & 0xffff) - 0x30;
  if ((iVar9 == 0) && (1 < *(int *)(unaff_x19 + 0xbc))) {
    lVar16 = *plVar2;
    if (lVar16 == 0) goto LAB_028103d0;
    uVar1 = *(int *)(unaff_x19 + 0xb8) + 1;
    if (*(uint *)(lVar16 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    sVar4 = *(short *)(lVar16 + (long)(int)uVar1 * 2 + 0x20);
    bVar7 = false;
    if ((sVar4 != 0x2e) && (bVar7 = false, sVar4 != 0x65)) {
      bVar7 = sVar4 != 0x45;
    }
  }
  else {
    bVar7 = false;
  }
  switch(unaff_w22) {
  case 0:
  case 2:
    if (bVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar16 = (unaff_x21 & 0xffff) - 0x30;
    }
    else {
      if (bVar7) {
        lVar16 = FUN_0282f680(plVar2,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = FUN_025bd5ec(lVar16,*(undefined8 *)PTR_DAT_03cda078,5,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_02740034(lVar16,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_02740034(lVar16,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02818cd4(uVar12,0);
        goto LAB_0281038c;
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar9 = FUN_0281c914(uVar12,uVar8,uVar3,&stack0x00000018,0);
      lVar16 = in_stack_00000018;
      if (iVar9 == 2) {
        lVar16 = FUN_0282f680(plVar2,0);
        if (lVar16 == 0) {
LAB_028103d0:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(lVar16 + 0x10) < 0x17d) {
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_0271c480(0);
          FUN_028109fc(lVar16,uVar12);
          goto LAB_0281038c;
        }
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar12 = FUN_0271c480(0);
        uVar15 = FUN_0282f680(plVar2,0);
        puVar14 = PTR_DAT_03cfe2c0;
        goto LAB_02810524;
      }
      if (iVar9 != 1) {
        if (*(int *)(unaff_x19 + 0x5c) == 1) {
          uVar12 = *(undefined8 *)(unaff_x19 + 0xb0);
          uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
          uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar9 = FUN_0281ca84(uVar12,uVar8,uVar3,&stack0x00000048,0);
          uVar12 = in_stack_00000048;
          uVar15 = in_stack_00000050;
          goto joined_r0x02810068;
        }
        uVar12 = FUN_0282f680(plVar2,0);
        if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
        }
        uVar15 = FUN_0271c480(0);
        uVar11 = FUN_0275097c(uVar12,0xa7,uVar15,&stack0x00000010,0);
        dVar17 = in_stack_00000010;
        if ((uVar11 & 1) != 0) goto LAB_02810368;
        goto LAB_0280ff24;
      }
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    FUN_02818cd4(lVar16,0);
    goto LAB_0281038c;
  case 1:
    if (bVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      if (bVar7) {
        lVar16 = FUN_0282f680(plVar2,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = FUN_025bd5ec(lVar16,*(undefined8 *)PTR_DAT_03cda078,5,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_0273fe84(lVar16,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_0273fe84(lVar16,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02818ac4(uVar8,0);
        goto LAB_0281038c;
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar10 = FUN_0281c798(uVar12,uVar8,uVar3,&stack0x0000002c,0);
      iVar9 = iStack000000000000002c;
      if (iVar10 != 1) {
        if (iVar10 == 2) {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar12 = FUN_0271c480(0);
          uVar15 = FUN_0282f680(plVar2,0);
          puVar14 = PTR_DAT_03cfe2a0;
        }
        else {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar12 = FUN_0271c480(0);
          uVar15 = FUN_0282f680(plVar2,0);
          puVar14 = PTR_DAT_03cfe2b8;
        }
        goto LAB_02810524;
      }
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    FUN_02818ac4(iVar9,0);
    goto LAB_0281038c;
  default:
    thunk_FUN_01a6ca08(PTR_DAT_03cfe298);
    uVar12 = FUN_02803d2c();
    goto LAB_02810548;
  case 4:
    lVar16 = FUN_0282f680(plVar2,0);
    if (bVar7) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar11 = FUN_025bd5ec(lVar16,*(undefined8 *)PTR_DAT_03cda078,5,0);
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar16,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar16,0x10,0);
      }
      goto LAB_0281038c;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_0271c480(0);
    uVar11 = FUN_0275097c(lVar16,0xa7,uVar12,&stack0x00000030,0);
    if ((uVar11 & 1) != 0) goto LAB_0281038c;
LAB_0280ff24:
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar12 = FUN_0271c480(0);
    uVar15 = FUN_0282f680(plVar2,0);
    puVar14 = PTR_DAT_03cfe290;
LAB_02810524:
    uVar13 = thunk_FUN_01a6ca08(puVar14);
    FUN_0282f8b0(uVar13,uVar12,uVar15,0);
    uVar12 = FUN_028109c0();
LAB_02810548:
    uVar15 = thunk_FUN_01a6ca08(PTR_DAT_03cfe2c8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar12,uVar15);
  case 5:
    break;
  case 8:
    if (bVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      dVar17 = (double)((uint)unaff_x21 & 0xffff) + -48.0;
    }
    else {
      lVar16 = FUN_0282f680(plVar2,0);
      if (bVar7) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = FUN_025bd5ec(lVar16,*(undefined8 *)PTR_DAT_03cda078,5,0);
        puVar14 = PTR_DAT_03cc03b8;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_02740034(lVar16,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_02740034(lVar16,0x10,0);
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_0273ec9c(uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin_OVRP_1_64_0___cctor(uVar12,0);
        goto LAB_0281038c;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_0271c480(0);
      uVar11 = FUN_0275097c(lVar16,0xa7,uVar12,&stack0x00000020,0);
      dVar17 = in_stack_00000020;
      if ((uVar11 & 1) == 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar12 = FUN_0271c480(0);
        uVar15 = FUN_0282f680(plVar2,0);
        puVar14 = PTR_DAT_03cfe2b0;
        goto LAB_02810524;
      }
LAB_02810368:
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    OVRPlugin_OVRP_1_64_0___cctor(dVar17,0);
    goto LAB_0281038c;
  }
  if (bVar6) {
    if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar18 = FUN_027d35d8(unaff_x21 & 0xffffffff,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_027cee20(&stack0x00000038,0x30,0);
    auVar18 = FUN_027d3cec(auVar18._0_8_,auVar18._8_8_,in_stack_00000038,in_stack_00000040,0);
    if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
  }
  else {
    if (bVar7) {
      lVar16 = FUN_0282f680(plVar2,0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar11 = FUN_025bd5ec(lVar16,*(undefined8 *)PTR_DAT_03cda078,5,0);
      puVar14 = PTR_DAT_03cc03b8;
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_02740034(lVar16,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_02740034(lVar16,0x10,0);
      }
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar18 = FUN_0273f2ac(uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02818ef0(auVar18._0_8_,auVar18._8_8_,0);
      goto LAB_0281038c;
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar9 = FUN_0281ca84(uVar12,uVar8,uVar3,&stack0x00000058,0);
    uVar12 = in_stack_00000058;
    uVar15 = in_stack_00000060;
joined_r0x02810068:
    if (iVar9 != 1) {
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar12 = FUN_0271c480(0);
      uVar15 = FUN_0282f680(plVar2,0);
      puVar14 = PTR_DAT_03cfe2a8;
      goto LAB_02810524;
    }
    auVar5._8_8_ = uVar15;
    auVar5._0_8_ = uVar12;
    auVar18._8_8_ = uVar15;
    auVar18._0_8_ = uVar12;
    if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      auVar18 = auVar5;
    }
  }
  FUN_02818ef0(auVar18._0_8_,auVar18._8_8_,0);
LAB_0281038c:
  *(undefined4 *)(unaff_x19 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  FUN_02804374();
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000068) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


