/*
FUNCTION_NAME: FUN_0280f9e8
ENTRY_POINT: 0280f9e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0280f9e8(long param_1,undefined4 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  long lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar16;
  long lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double local_b0;
  long local_a8;
  double local_a0;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined *puVar15;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if ((DAT_04125333 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfe1b0);
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cfdb48);
    FUN_01ab69ac(PTR_DAT_03cc03b8);
    FUN_01ab69ac(PTR_DAT_03cc41f8);
    FUN_01ab69ac(PTR_DAT_03cc5358);
    FUN_01ab69ac(PTR_DAT_03cda078);
    DAT_04125333 = 1;
  }
  puVar15 = PTR_DAT_03cc02b0;
  local_90 = 0;
  local_94 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_a8 = 0;
  local_a0 = 0.0;
  local_78 = 0;
  uStack_70 = 0;
  local_b0 = 0.0;
  uVar9 = 8;
  if ((*(int *)(param_1 + 0x28) == 0) && (uVar9 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
    uVar9 = 8;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_0282f654(&local_88,*(undefined8 *)(param_1 + 0x80),param_4,*(int *)(param_1 + 0x8c) - param_4,
               0);
  plVar2 = (long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uStack_80;
  *(undefined8 *)(param_1 + 0xb0) = local_88;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,0);
  if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = FUN_026b1a64(param_3 & 0xffffffff,0);
  puVar15 = PTR_DAT_03cfdb48;
  if ((uVar12 & 1) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(param_1 + 0xbc) == 1;
  }
  iVar10 = ((uint)param_3 & 0xffff) - 0x30;
  if ((iVar10 == 0) && (1 < *(int *)(param_1 + 0xbc))) {
    lVar17 = *plVar2;
    if (lVar17 == 0) goto LAB_028103d0;
    uVar1 = *(int *)(param_1 + 0xb8) + 1;
    if (*(uint *)(lVar17 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    sVar4 = *(short *)(lVar17 + (long)(int)uVar1 * 2 + 0x20);
    bVar8 = false;
    if ((sVar4 != 0x2e) && (bVar8 = false, sVar4 != 0x65)) {
      bVar8 = sVar4 != 0x45;
    }
  }
  else {
    bVar8 = false;
  }
  switch(param_2) {
  case 0:
  case 2:
    if (bVar7) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar17 = (param_3 & 0xffff) - 0x30;
LAB_0280fbac:
      lVar17 = FUN_02818cd4(lVar17,0);
    }
    else if (bVar8) {
      lVar17 = FUN_0282f680(plVar2,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar12 = FUN_025bd5ec(lVar17,*(undefined8 *)PTR_DAT_03cda078,5,0);
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_02740034(lVar17,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_02740034(lVar17,0x10,0);
      }
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar17 = FUN_02818cd4(uVar13,0);
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0xb0);
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar10 = FUN_0281c914(uVar13,uVar9,uVar3,&local_a8,0);
      lVar17 = local_a8;
      if (iVar10 != 2) {
        if (iVar10 != 1) {
          if (*(int *)(param_1 + 0x5c) == 1) {
            uVar13 = *(undefined8 *)(param_1 + 0xb0);
            uVar9 = *(undefined4 *)(param_1 + 0xb8);
            uVar3 = *(undefined4 *)(param_1 + 0xbc);
            if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar10 = FUN_0281ca84(uVar13,uVar9,uVar3,&local_78,0);
            uVar13 = local_78;
            uVar16 = uStack_70;
            goto joined_r0x02810068;
          }
          uVar13 = FUN_0282f680(plVar2,0);
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
          }
          uVar16 = FUN_0271c480(0);
          uVar12 = FUN_0275097c(uVar13,0xa7,uVar16,&local_b0,0);
          dVar18 = local_b0;
          if ((uVar12 & 1) != 0) goto LAB_02810368;
          goto LAB_0280ff24;
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_0280fbac;
      }
      lVar17 = FUN_0282f680(plVar2,0);
      if (lVar17 == 0) {
LAB_028103d0:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0x17c < *(int *)(lVar17 + 0x10)) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar13 = FUN_0271c480(0);
        uVar16 = FUN_0282f680(plVar2,0);
        puVar15 = PTR_DAT_03cfe2c0;
        goto LAB_02810524;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_0271c480(0);
      lVar17 = FUN_028109fc(lVar17,uVar13);
    }
    break;
  case 1:
    if (bVar7) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      if (bVar8) {
        lVar17 = FUN_0282f680(plVar2,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar12 = FUN_025bd5ec(lVar17,*(undefined8 *)PTR_DAT_03cda078,5,0);
        if ((uVar12 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_0273fe84(lVar17,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_0273fe84(lVar17,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar17 = FUN_02818ac4(uVar9,0);
        break;
      }
      uVar13 = *(undefined8 *)(param_1 + 0xb0);
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar11 = FUN_0281c798(uVar13,uVar9,uVar3,&local_94,0);
      iVar10 = local_94;
      if (iVar11 != 1) {
        if (iVar11 == 2) {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar13 = FUN_0271c480(0);
          uVar16 = FUN_0282f680(plVar2,0);
          puVar15 = PTR_DAT_03cfe2a0;
        }
        else {
          thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
          FUN_01876390();
          uVar13 = FUN_0271c480(0);
          uVar16 = FUN_0282f680(plVar2,0);
          puVar15 = PTR_DAT_03cfe2b8;
        }
        goto LAB_02810524;
      }
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    lVar17 = FUN_02818ac4(iVar10,0);
    break;
  default:
    uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfe298);
    uVar13 = FUN_02803d2c(param_1,uVar13);
    goto LAB_02810548;
  case 4:
    lVar17 = FUN_0282f680(plVar2,0);
    if (bVar8) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar12 = FUN_025bd5ec(lVar17,*(undefined8 *)PTR_DAT_03cda078,5,0);
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar17,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02740034(lVar17,0x10,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_0271c480(0);
      uVar12 = FUN_0275097c(lVar17,0xa7,uVar13,&local_90,0);
      if ((uVar12 & 1) == 0) {
LAB_0280ff24:
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar13 = FUN_0271c480(0);
        uVar16 = FUN_0282f680(plVar2,0);
        puVar15 = PTR_DAT_03cfe290;
LAB_02810524:
        uVar14 = thunk_FUN_01a6ca08(puVar15);
        uVar13 = FUN_0282f8b0(uVar14,uVar13,uVar16,0);
        uVar13 = FUN_028109c0(param_1,uVar13,0);
LAB_02810548:
        uVar16 = thunk_FUN_01a6ca08(PTR_DAT_03cfe2c8);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar13,uVar16);
      }
    }
    uVar13 = 9;
    goto LAB_0281038c;
  case 5:
    if (bVar7) {
      if (*(int *)(*(long *)PTR_DAT_03cc5358 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar19 = FUN_027d35d8(param_3 & 0xffffffff,0);
      local_88 = 0;
      uStack_80 = 0;
      FUN_027cee20(&local_88,0x30,0);
      auVar19 = FUN_027d3cec(auVar19._0_8_,auVar19._8_8_,local_88,uStack_80,0);
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      if (bVar8) {
        lVar17 = FUN_0282f680(plVar2,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar12 = FUN_025bd5ec(lVar17,*(undefined8 *)PTR_DAT_03cda078,5,0);
        puVar15 = PTR_DAT_03cc03b8;
        if ((uVar12 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_02740034(lVar17,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_02740034(lVar17,0x10,0);
        }
        if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar19 = FUN_0273f2ac(uVar13,0);
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar17 = FUN_02818ef0(auVar19._0_8_,auVar19._8_8_,0);
        goto LAB_02810384;
      }
      uVar13 = *(undefined8 *)(param_1 + 0xb0);
      uVar9 = *(undefined4 *)(param_1 + 0xb8);
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar10 = FUN_0281ca84(uVar13,uVar9,uVar3,&local_68,0);
      uVar13 = local_68;
      uVar16 = uStack_60;
joined_r0x02810068:
      if (iVar10 != 1) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar13 = FUN_0271c480(0);
        uVar16 = FUN_0282f680(plVar2,0);
        puVar15 = PTR_DAT_03cfe2a8;
        goto LAB_02810524;
      }
      auVar6._8_8_ = uVar16;
      auVar6._0_8_ = uVar13;
      auVar19._8_8_ = uVar16;
      auVar19._0_8_ = uVar13;
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        auVar19 = auVar6;
      }
    }
    lVar17 = FUN_02818ef0(auVar19._0_8_,auVar19._8_8_,0);
    goto LAB_02810384;
  case 8:
    if (bVar7) {
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      dVar18 = (double)((uint)param_3 & 0xffff) + -48.0;
    }
    else {
      lVar17 = FUN_0282f680(plVar2,0);
      if (bVar8) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar12 = FUN_025bd5ec(lVar17,*(undefined8 *)PTR_DAT_03cda078,5,0);
        puVar15 = PTR_DAT_03cc03b8;
        if ((uVar12 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_02740034(lVar17,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_02740034(lVar17,0x10,0);
        }
        if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_0273ec9c(uVar13,0);
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar17 = OVRPlugin_OVRP_1_64_0___cctor(uVar13,0);
        goto LAB_02810384;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_0271c480(0);
      uVar12 = FUN_0275097c(lVar17,0xa7,uVar13,&local_a0,0);
      dVar18 = local_a0;
      if ((uVar12 & 1) == 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar13 = FUN_0271c480(0);
        uVar16 = FUN_0282f680(plVar2,0);
        puVar15 = PTR_DAT_03cfe2b0;
        goto LAB_02810524;
      }
LAB_02810368:
      if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    lVar17 = OVRPlugin_OVRP_1_64_0___cctor(dVar18,0);
LAB_02810384:
    uVar13 = 8;
    goto LAB_0281038c;
  }
  uVar13 = 7;
LAB_0281038c:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_02804374(param_1,uVar13,lVar17,0);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


