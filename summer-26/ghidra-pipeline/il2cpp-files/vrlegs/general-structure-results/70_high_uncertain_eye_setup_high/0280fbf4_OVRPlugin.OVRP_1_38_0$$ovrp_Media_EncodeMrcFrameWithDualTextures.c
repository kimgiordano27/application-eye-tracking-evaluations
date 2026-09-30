/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 0280fbf4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures(void)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  bool in_ZR;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  int in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long unaff_x24;
  double dVar11;
  undefined1 auVar12 [16];
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
  undefined *puVar9;
  
  puVar9 = PTR_DAT_03cfdb48;
  switch(unaff_w22) {
  case 0:
  case 2:
    if (in_w8 == 0) {
      if (!in_ZR) {
        lVar5 = FUN_0282f680();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = FUN_025bd5ec(lVar5,*(undefined8 *)PTR_DAT_03cda078,5,0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_02740034(lVar5,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_02740034(lVar5,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02818cd4(uVar7,0);
        goto LAB_0281038c;
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar1 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar4 = FUN_0281c914(uVar7,uVar3,uVar1,&stack0x00000018,0);
      lVar5 = in_stack_00000018;
      if (iVar4 == 2) {
        lVar5 = FUN_0282f680();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(lVar5 + 0x10) < 0x17d) {
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_0271c480(0);
          FUN_028109fc(lVar5,uVar7);
          goto LAB_0281038c;
        }
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar7 = FUN_0271c480(0);
        uVar10 = FUN_0282f680();
        puVar9 = PTR_DAT_03cfe2c0;
        goto LAB_02810524;
      }
      if (iVar4 != 1) {
        if (*(int *)(unaff_x19 + 0x5c) == 1) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0xb0);
          uVar3 = *(undefined4 *)(unaff_x19 + 0xb8);
          uVar1 = *(undefined4 *)(unaff_x19 + 0xbc);
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar4 = FUN_0281ca84(uVar7,uVar3,uVar1,&stack0x00000048,0);
          uVar7 = in_stack_00000048;
          uVar10 = in_stack_00000050;
          goto joined_r0x02810068;
        }
        uVar7 = FUN_0282f680();
        if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
        }
        uVar10 = FUN_0271c480(0);
        uVar6 = FUN_0275097c(uVar7,0xa7,uVar10,&stack0x00000010,0);
        dVar11 = in_stack_00000010;
        if ((uVar6 & 1) != 0) goto LAB_02810368;
        goto LAB_0280ff24;
      }
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = (unaff_x21 & 0xffff) - 0x30;
    }
    FUN_02818cd4(lVar5,0);
    goto LAB_0281038c;
  case 1:
    if (in_w8 == 0) {
      if (!in_ZR) {
        lVar5 = FUN_0282f680();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = FUN_025bd5ec(lVar5,*(undefined8 *)PTR_DAT_03cda078,5,0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar3 = FUN_0273fe84(lVar5,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar3 = FUN_0273fe84(lVar5,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02818ac4(uVar3,0);
        goto LAB_0281038c;
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar1 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar4 = FUN_0281c798(uVar7,uVar3,uVar1,(long)&stack0x00000028 + 4,0);
      if (iVar4 != 1) {
        if (iVar4 == 2) {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar7 = FUN_0271c480(0);
          uVar10 = FUN_0282f680();
          puVar9 = PTR_DAT_03cfe2a0;
        }
        else {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar7 = FUN_0271c480(0);
          uVar10 = FUN_0282f680();
          puVar9 = PTR_DAT_03cfe2b8;
        }
        goto LAB_02810524;
      }
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      in_stack_00000028._4_4_ = unaff_w23;
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    FUN_02818ac4(in_stack_00000028._4_4_,0);
    goto LAB_0281038c;
  default:
    thunk_FUN_01a6ca08(PTR_DAT_03cfe298);
    uVar7 = FUN_02803d2c();
    goto LAB_02810548;
  case 4:
    lVar5 = FUN_0282f680();
    if (!in_ZR) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = FUN_025bd5ec(lVar5,*(undefined8 *)PTR_DAT_03cda078,5,0);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar5,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar5,0x10,0);
      }
      goto LAB_0281038c;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_0271c480(0);
    uVar6 = FUN_0275097c(lVar5,0xa7,uVar7,&stack0x00000030,0);
    if ((uVar6 & 1) != 0) goto LAB_0281038c;
LAB_0280ff24:
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar7 = FUN_0271c480(0);
    uVar10 = FUN_0282f680();
    puVar9 = PTR_DAT_03cfe290;
LAB_02810524:
    uVar8 = thunk_FUN_01a6ca08(puVar9);
    FUN_0282f8b0(uVar8,uVar7,uVar10,0);
    uVar7 = FUN_028109c0();
LAB_02810548:
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfe2c8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,uVar10);
  case 5:
    break;
  case 8:
    if (in_w8 == 0) {
      lVar5 = FUN_0282f680();
      if (!in_ZR) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = FUN_025bd5ec(lVar5,*(undefined8 *)PTR_DAT_03cda078,5,0);
        puVar9 = PTR_DAT_03cc03b8;
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_02740034(lVar5,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_02740034(lVar5,0x10,0);
        }
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_0273ec9c(uVar7,0);
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin_OVRP_1_64_0___cctor(uVar7,0);
        goto LAB_0281038c;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0271c480(0);
      uVar6 = FUN_0275097c(lVar5,0xa7,uVar7,&stack0x00000020,0);
      dVar11 = in_stack_00000020;
      if ((uVar6 & 1) == 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar7 = FUN_0271c480(0);
        uVar10 = FUN_0282f680();
        puVar9 = PTR_DAT_03cfe2b0;
        goto LAB_02810524;
      }
LAB_02810368:
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      dVar11 = (double)((uint)unaff_x21 & 0xffff) + -48.0;
    }
    OVRPlugin_OVRP_1_64_0___cctor(dVar11,0);
    goto LAB_0281038c;
  }
  if (in_w8 == 0) {
    if (!in_ZR) {
      lVar5 = FUN_0282f680();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = FUN_025bd5ec(lVar5,*(undefined8 *)PTR_DAT_03cda078,5,0);
      puVar9 = PTR_DAT_03cc03b8;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_02740034(lVar5,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_02740034(lVar5,0x10,0);
      }
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar12 = FUN_0273f2ac(uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02818ef0(auVar12._0_8_,auVar12._8_8_,0);
      goto LAB_0281038c;
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar3 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar4 = FUN_0281ca84(uVar7,uVar3,uVar1,&stack0x00000058,0);
    uVar7 = in_stack_00000058;
    uVar10 = in_stack_00000060;
joined_r0x02810068:
    if (iVar4 != 1) {
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar7 = FUN_0271c480(0);
      uVar10 = FUN_0282f680();
      puVar9 = PTR_DAT_03cfe2a8;
      goto LAB_02810524;
    }
    auVar2._8_8_ = uVar10;
    auVar2._0_8_ = uVar7;
    auVar12._8_8_ = uVar10;
    auVar12._0_8_ = uVar7;
    if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      auVar12 = auVar2;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar12 = FUN_027d35d8(unaff_x21 & 0xffffffff,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_027cee20(&stack0x00000038,0x30,0);
    auVar12 = FUN_027d3cec(auVar12._0_8_,auVar12._8_8_,in_stack_00000038,in_stack_00000040,0);
    if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
  }
  FUN_02818ef0(auVar12._0_8_,auVar12._8_8_,0);
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


