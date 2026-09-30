/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 0280fb28
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


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  long lVar14;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  long unaff_x24;
  double dVar15;
  undefined1 auVar16 [16];
  double in_stack_00000010;
  long in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined *puVar12;
  
  uVar9 = FUN_026b1a64(param_1,0);
  puVar12 = PTR_DAT_03cfdb48;
  if ((uVar9 & 1) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(unaff_x19 + 0xbc) == 1;
  }
  iVar8 = ((uint)unaff_x21 & 0xffff) - 0x30;
  if ((iVar8 == 0) && (1 < *(int *)(unaff_x19 + 0xbc))) {
    lVar14 = *unaff_x20;
    if (lVar14 == 0) goto LAB_028103d0;
    uVar1 = *(int *)(unaff_x19 + 0xb8) + 1;
    if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    sVar3 = *(short *)(lVar14 + (long)(int)uVar1 * 2 + 0x20);
    bVar6 = false;
    if ((sVar3 != 0x2e) && (bVar6 = false, sVar3 != 0x65)) {
      bVar6 = sVar3 != 0x45;
    }
  }
  else {
    bVar6 = false;
  }
  switch(unaff_w22) {
  case 0:
  case 2:
    if (bVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar14 = (unaff_x21 & 0xffff) - 0x30;
    }
    else {
      if (bVar6) {
        lVar14 = FUN_0282f680();
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = FUN_025bd5ec(lVar14,*(undefined8 *)PTR_DAT_03cda078,5,0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_02740034(lVar14,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_02740034(lVar14,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02818cd4(uVar10,0);
        goto LAB_0281038c;
      }
      uVar10 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar7 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar2 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar8 = FUN_0281c914(uVar10,uVar7,uVar2,&stack0x00000018,0);
      lVar14 = in_stack_00000018;
      if (iVar8 == 2) {
        lVar14 = FUN_0282f680();
        if (lVar14 == 0) {
LAB_028103d0:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(lVar14 + 0x10) < 0x17d) {
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_0271c480(0);
          FUN_028109fc(lVar14,uVar10);
          goto LAB_0281038c;
        }
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar10 = FUN_0271c480(0);
        uVar13 = FUN_0282f680();
        puVar12 = PTR_DAT_03cfe2c0;
        goto LAB_02810524;
      }
      if (iVar8 != 1) {
        if (*(int *)(unaff_x19 + 0x5c) == 1) {
          uVar10 = *(undefined8 *)(unaff_x19 + 0xb0);
          uVar7 = *(undefined4 *)(unaff_x19 + 0xb8);
          uVar2 = *(undefined4 *)(unaff_x19 + 0xbc);
          if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar8 = FUN_0281ca84(uVar10,uVar7,uVar2,&stack0x00000048,0);
          uVar10 = in_stack_00000048;
          uVar13 = in_stack_00000050;
          goto joined_r0x02810068;
        }
        uVar10 = FUN_0282f680();
        if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
        }
        uVar13 = FUN_0271c480(0);
        uVar9 = FUN_0275097c(uVar10,0xa7,uVar13,&stack0x00000010,0);
        dVar15 = in_stack_00000010;
        if ((uVar9 & 1) != 0) goto LAB_02810368;
        goto LAB_0280ff24;
      }
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    FUN_02818cd4(lVar14,0);
    goto LAB_0281038c;
  case 1:
    if (bVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      if (bVar6) {
        lVar14 = FUN_0282f680();
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = FUN_025bd5ec(lVar14,*(undefined8 *)PTR_DAT_03cda078,5,0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_0273fe84(lVar14,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_0273fe84(lVar14,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02818ac4(uVar7,0);
        goto LAB_0281038c;
      }
      uVar10 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar7 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar2 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar8 = FUN_0281c798(uVar10,uVar7,uVar2,(long)&stack0x00000028 + 4,0);
      if (iVar8 != 1) {
        if (iVar8 == 2) {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar10 = FUN_0271c480(0);
          uVar13 = FUN_0282f680();
          puVar12 = PTR_DAT_03cfe2a0;
        }
        else {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar10 = FUN_0271c480(0);
          uVar13 = FUN_0282f680();
          puVar12 = PTR_DAT_03cfe2b8;
        }
        goto LAB_02810524;
      }
      iVar8 = in_stack_00000028._4_4_;
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    FUN_02818ac4(iVar8,0);
    goto LAB_0281038c;
  default:
    thunk_FUN_01a6ca08(PTR_DAT_03cfe298);
    uVar10 = FUN_02803d2c();
    goto LAB_02810548;
  case 4:
    lVar14 = FUN_0282f680();
    if (bVar6) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = FUN_025bd5ec(lVar14,*(undefined8 *)PTR_DAT_03cda078,5,0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar14,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar14,0x10,0);
      }
      goto LAB_0281038c;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_0271c480(0);
    uVar9 = FUN_0275097c(lVar14,0xa7,uVar10,&stack0x00000030,0);
    if ((uVar9 & 1) != 0) goto LAB_0281038c;
LAB_0280ff24:
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar10 = FUN_0271c480(0);
    uVar13 = FUN_0282f680();
    puVar12 = PTR_DAT_03cfe290;
LAB_02810524:
    uVar11 = thunk_FUN_01a6ca08(puVar12);
    FUN_0282f8b0(uVar11,uVar10,uVar13,0);
    uVar10 = FUN_028109c0();
LAB_02810548:
    uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfe2c8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,uVar13);
  case 5:
    break;
  case 8:
    if (bVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      dVar15 = (double)((uint)unaff_x21 & 0xffff) + -48.0;
    }
    else {
      lVar14 = FUN_0282f680();
      if (bVar6) {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = FUN_025bd5ec(lVar14,*(undefined8 *)PTR_DAT_03cda078,5,0);
        puVar12 = PTR_DAT_03cc03b8;
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_02740034(lVar14,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_02740034(lVar14,0x10,0);
        }
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_0273ec9c(uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin_OVRP_1_64_0___cctor(uVar10,0);
        goto LAB_0281038c;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_0271c480(0);
      uVar9 = FUN_0275097c(lVar14,0xa7,uVar10,&stack0x00000020,0);
      dVar15 = in_stack_00000020;
      if ((uVar9 & 1) == 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar10 = FUN_0271c480(0);
        uVar13 = FUN_0282f680();
        puVar12 = PTR_DAT_03cfe2b0;
        goto LAB_02810524;
      }
LAB_02810368:
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    OVRPlugin_OVRP_1_64_0___cctor(dVar15,0);
    goto LAB_0281038c;
  }
  if (bVar5) {
    if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar16 = FUN_027d35d8(unaff_x21 & 0xffffffff,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_027cee20(&stack0x00000038,0x30,0);
    auVar16 = FUN_027d3cec(auVar16._0_8_,auVar16._8_8_,in_stack_00000038,in_stack_00000040,0);
    if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
  }
  else {
    if (bVar6) {
      lVar14 = FUN_0282f680();
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = FUN_025bd5ec(lVar14,*(undefined8 *)PTR_DAT_03cda078,5,0);
      puVar12 = PTR_DAT_03cc03b8;
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_02740034(lVar14,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_02740034(lVar14,0x10,0);
      }
      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar16 = FUN_0273f2ac(uVar10,0);
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02818ef0(auVar16._0_8_,auVar16._8_8_,0);
      goto LAB_0281038c;
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar7 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar2 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar8 = FUN_0281ca84(uVar10,uVar7,uVar2,&stack0x00000058,0);
    uVar10 = in_stack_00000058;
    uVar13 = in_stack_00000060;
joined_r0x02810068:
    if (iVar8 != 1) {
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar10 = FUN_0271c480(0);
      uVar13 = FUN_0282f680();
      puVar12 = PTR_DAT_03cfe2a8;
      goto LAB_02810524;
    }
    auVar4._8_8_ = uVar13;
    auVar4._0_8_ = uVar10;
    auVar16._8_8_ = uVar13;
    auVar16._0_8_ = uVar10;
    if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      auVar16 = auVar4;
    }
  }
  FUN_02818ef0(auVar16._0_8_,auVar16._8_8_,0);
LAB_0281038c:
  *(undefined4 *)(unaff_x19 + 0xa8) = 0;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  FUN_02804374();
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000068) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


