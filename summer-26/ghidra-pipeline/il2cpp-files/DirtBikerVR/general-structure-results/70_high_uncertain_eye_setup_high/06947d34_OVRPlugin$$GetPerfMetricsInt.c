/*
FUNCTION_NAME: OVRPlugin$$GetPerfMetricsInt
ENTRY_POINT: 06947d34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetPerfMetricsInt
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int in_w8;
  undefined4 *puVar10;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  float in_stack_00000038;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  long in_stack_00000060;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_07c9c218(unaff_x19,0,0);
    if ((uVar6 & 1) == 0) {
      uVar7 = thunk_FUN_07ca227c(unaff_x27,0);
      uVar7 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6690,uVar7,*(undefined8 *)PTR_DAT_084b6668,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(uVar7,0);
    }
    else {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07c61260(&stack0x00000038,unaff_x19,0);
      fVar15 = in_stack_00000048;
      FUN_07c61260(&stack0x00000038,unaff_x19,0);
      fVar16 = in_stack_00000040._4_4_;
      if ((fVar15 < unaff_s13) || (unaff_s15 < fVar15)) {
        in_stack_00000038 = fVar15;
        uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x25 + 0x78),&stack0x00000038);
        uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6618,uVar7,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(uVar7,0);
      }
      else {
        in_stack_00000038 = fVar15;
        uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x25 + 0x78),&stack0x00000038);
        uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6698,uVar7,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4f4f4(uVar7,0);
        (**(code **)(*unaff_x28 + 0x238))(fVar15,unaff_x28,*(undefined8 *)(*unaff_x28 + 0x240));
      }
      fVar16 = fVar16 + fVar16;
      in_stack_00000038 = fVar16;
      if (((fVar16 < unaff_s14) || (unaff_s15 < fVar16)) || (fVar15 < fVar16)) {
        uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x25 + 0x78),&stack0x00000038);
        uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6600,uVar7,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(uVar7,0);
      }
      else {
        uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x25 + 0x78),&stack0x00000038);
        uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b66a0,uVar7,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4f4f4(uVar7,0);
        (**(code **)(*unaff_x28 + 600))(fVar16,unaff_x28,*(undefined8 *)(*unaff_x28 + 0x260));
      }
    }
    uVar6 = FUN_061c1964(&stack0x00000050,*unaff_x22);
    unaff_x27 = in_stack_00000060;
    if ((uVar6 & 1) == 0) break;
    if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = thunk_FUN_07ca227c(in_stack_00000060,0);
    uVar7 = FUN_065c0764(uVar7,*(undefined8 *)PTR_DAT_084b6628,0);
    uVar2 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b6670,uVar7,0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4f4f4(uVar2,0);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar3,uVar7,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07c998ec(lVar3,*(undefined8 *)PTR_DAT_084b6448,0);
    lVar4 = FUN_07c9c69c(lVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07cacdbc();
    lVar4 = FUN_07c9c69c(lVar3,0);
    lVar5 = FUN_07c9c69c(unaff_x27,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = FUN_07cac280(lVar5,0);
    param_4 = FUN_07cac4e0();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07cad038(uVar11,lVar4,0);
    uVar7 = thunk_FUN_07ca227c(lVar3,0);
    uVar7 = FUN_065c0764(*unaff_x21,uVar7,0);
    FUN_07c4f4f4(uVar7,0);
    if (unaff_w24 == 1) {
      unaff_x28 = (long *)FUN_045614d0(lVar3,*(undefined8 *)PTR_DAT_084b65e0);
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      (**(code **)(*unaff_x28 + 0x5b8))(unaff_x28,unaff_x27,*(undefined8 *)(*unaff_x28 + 0x5c0));
      lVar4 = FUN_04561560(lVar3,*(undefined8 *)PTR_DAT_084b65f0);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_07c9c218(lVar4,0,0);
      if ((uVar6 & 1) != 0) {
        lVar3 = FUN_04561560(lVar3,*(undefined8 *)PTR_DAT_084b65f0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_07fc86d4(lVar3,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        param_3 = unaff_s8;
        FUN_07fc87b0(lVar4,0);
        FUN_07fc8b94(lVar4,0);
      }
    }
    else {
      unaff_x28 = (long *)FUN_045614d0(lVar3,*(undefined8 *)PTR_DAT_084b65e8);
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_069771d0(unaff_x28,0);
      lVar3 = FUN_07c9c69c(unaff_x27,0);
      lVar4 = (**(code **)(*unaff_x28 + 0x5a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x5b0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar7 = FUN_07c9c69c(lVar4,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0(uVar7,uVar7);
      }
      FUN_07cacdbc(lVar3,uVar7,0);
      lVar3 = FUN_07c9c69c(unaff_x27,0);
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      puVar10 = *(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      uVar11 = *puVar10;
      param_2 = (float)puVar10[1];
      param_3 = (float)puVar10[2];
      if (DAT_08974d8a == '\0') {
        FUN_03a8a718(PTR_DAT_08486860);
        DAT_08974d8a = '\x01';
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      param_4 = **(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
      FUN_07cad124(uVar11,lVar3,0);
    }
    unaff_x19 = FUN_04561560(unaff_x27,*unaff_x26);
    in_w8 = *(int *)(*(long *)PTR_DAT_08486738 + 0xe4);
  }
  FUN_061c1960(&stack0x00000050,*(undefined8 *)PTR_DAT_08488a70);
  plVar8 = (long *)FUN_04561560(in_stack_00000020,*(undefined8 *)PTR_DAT_084b60b8);
  if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
  }
  uVar6 = FUN_07c9e200(plVar8,0,0);
  if ((uVar6 & 1) == 0) {
    if (plVar8 == (long *)0x0) goto LAB_069484b8;
  }
  else {
    uVar7 = thunk_FUN_07ca227c(in_stack_00000020,0);
    uVar7 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b6658,uVar7,0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x29);
    }
    FUN_07c4f4f4(uVar7,0);
    plVar8 = (long *)FUN_045614d0(in_stack_00000020,*(undefined8 *)PTR_DAT_084b65d8);
    if (plVar8 == (long *)0x0) goto LAB_069484b8;
    (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
  }
  lVar3 = FUN_07c98f88(plVar8,0);
  FUN_0694a0b0(plVar8);
  if (lVar3 == 0) goto LAB_069484b8;
  FUN_07cadf5c(lVar3,0);
  FUN_07d31014(in_stack_00000010,0);
  if ((in_stack_00000018 & 1) != 0) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6620,0);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar3,*(undefined8 *)PTR_DAT_084b6650,0);
    if ((lVar3 == 0) || (lVar4 = FUN_07c9c69c(lVar3,0), lVar4 == 0)) goto LAB_069484b8;
    FUN_07cacdbc();
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6608,0);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar4,*(undefined8 *)PTR_DAT_084b66b8,0);
    if (lVar4 == 0) goto LAB_069484b8;
    lVar5 = FUN_07c9c69c(lVar4,0);
    uVar7 = FUN_07c9c69c(lVar3,0);
    if (lVar5 == 0) goto LAB_069484b8;
    FUN_07cacdbc(lVar5,uVar7,0);
    lVar5 = FUN_07c98f88(plVar8,0);
    lVar9 = FUN_07c9c69c(lVar4,0);
    if (lVar5 == 0) goto LAB_069484b8;
    uVar11 = FUN_07cac280(lVar5,0);
    fVar16 = param_2;
    fVar15 = param_3;
    uVar12 = FUN_07cac4e0(lVar5,0);
    if (lVar9 == 0) goto LAB_069484b8;
    FUN_07cad038(uVar11,param_2,param_3,uVar12,fVar16,fVar15,param_4,lVar9,0);
    lVar5 = FUN_045614d0(lVar4,*(undefined8 *)PTR_DAT_08494af8);
    if (lVar5 == 0) goto LAB_069484b8;
    FUN_07c46614(0x42a00000,lVar5,0);
    FUN_045614d0(lVar4,*(undefined8 *)PTR_DAT_084b65c0);
    lVar4 = FUN_045614d0(lVar4,*(undefined8 *)PTR_DAT_084b65d0);
    uVar7 = FUN_07c98f88(plVar8,0);
    if (lVar4 == 0) goto LAB_069484b8;
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    thunk_FUN_03afed3c();
    FUN_07c998cc(lVar4,*(undefined8 *)PTR_DAT_08489ea0,0);
    FUN_045614d0(lVar3,*(undefined8 *)PTR_DAT_084b65c8);
  }
  if ((in_stack_00000018 & 0x100000000) != 0) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6660,0);
    puVar1 = PTR_DAT_08487320;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar3,*(undefined8 *)PTR_DAT_084b6638,0);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_07c9d2fc(lVar4,*(undefined8 *)PTR_DAT_084b6688,0);
    if (((lVar3 != 0) && (lVar5 = FUN_07c9c69c(lVar3,0), lVar5 != 0)) &&
       ((FUN_07cacdbc(), lVar4 != 0 && (lVar5 = FUN_07c9c69c(lVar4,0), lVar5 != 0)))) {
      FUN_07cacdbc();
      lVar5 = FUN_07c9c69c(lVar3,0);
      fVar13 = (float)FUN_07cac280();
      fVar16 = param_2;
      fVar15 = param_3;
      fVar14 = (float)FUN_07cac7a8();
      if (lVar5 != 0) {
        param_3 = param_3 - fVar15;
        param_2 = param_2 - fVar16;
        FUN_07cac358(fVar13 - fVar14,param_2,param_3,lVar5,0);
        lVar5 = FUN_07c9c69c(lVar4,0);
        fVar13 = (float)FUN_07cac280();
        fVar16 = param_2;
        fVar15 = param_3;
        fVar14 = (float)FUN_07cac7a8();
        if (lVar5 != 0) {
          FUN_07cac358(fVar13 + fVar14,param_2 + fVar16,param_3 + fVar15,lVar5,0);
          puVar1 = PTR_DAT_084b5a40;
          FUN_07c998ec(lVar3,*(undefined8 *)PTR_DAT_084b5a40,0);
          FUN_07c998ec(lVar4,*(undefined8 *)puVar1,0);
          goto LAB_06948418;
        }
      }
    }
LAB_069484b8:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_06948418:
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b65f8,0);
  FUN_06939cec(plVar8,0);
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b66c0,0);
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6680,0);
  return plVar8;
}


