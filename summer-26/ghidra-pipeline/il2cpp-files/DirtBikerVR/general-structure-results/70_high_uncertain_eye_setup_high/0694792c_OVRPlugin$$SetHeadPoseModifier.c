/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 0694792c
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


long * OVRPlugin__SetHeadPoseModifier
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 unaff_x19;
  int unaff_w24;
  long unaff_x26;
  long *unaff_x29;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  
  FUN_07d3222c(param_5,0);
  FUN_07d322e0();
  if (unaff_x26 != 0) {
    FUN_04de90b8(&stack0x00000038);
    puVar4 = PTR_DAT_084b6640;
    puVar3 = PTR_DAT_0848e8a0;
    puVar2 = PTR_DAT_08488a98;
    puVar1 = PTR_DAT_08486760;
    fVar17 = DAT_015c5bc8;
    fVar19 = DAT_015c5b88;
    uVar16 = DAT_015c5b5c;
    fVar18 = DAT_015c5990;
    in_stack_00000058 = CONCAT44(fStack0000000000000044,uStack0000000000000040);
    in_stack_00000050 = CONCAT44(uStack000000000000003c,fStack0000000000000038);
    in_stack_00000060 = CONCAT44(uStack000000000000004c,fStack0000000000000048);
    while (uVar6 = FUN_061c1964(&stack0x00000050,*(undefined8 *)puVar2), lVar13 = in_stack_00000060,
          (uVar6 & 1) != 0) {
      if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar7 = thunk_FUN_07ca227c(in_stack_00000060,0);
      uVar7 = FUN_065c0764(uVar7,*(undefined8 *)PTR_DAT_084b6628,0);
      uVar8 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b6670,uVar7,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4f4f4(uVar8,0);
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
      FUN_07c9d2fc(lVar9,uVar7,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07c998ec(lVar9,*(undefined8 *)PTR_DAT_084b6448,0);
      lVar10 = FUN_07c9c69c(lVar9,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07cacdbc();
      lVar10 = FUN_07c9c69c(lVar9,0);
      lVar11 = FUN_07c9c69c(lVar13,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar15 = FUN_07cac280(lVar11,0);
      param_4 = FUN_07cac4e0();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07cad038(uVar15,lVar10,0);
      uVar7 = thunk_FUN_07ca227c(lVar9,0);
      uVar7 = FUN_065c0764(*(undefined8 *)puVar4,uVar7,0);
      FUN_07c4f4f4(uVar7,0);
      if (unaff_w24 == 1) {
        plVar12 = (long *)FUN_045614d0(lVar9,*(undefined8 *)PTR_DAT_084b65e0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        (**(code **)(*plVar12 + 0x5b8))(plVar12,lVar13,*(undefined8 *)(*plVar12 + 0x5c0));
        lVar10 = FUN_04561560(lVar9,*(undefined8 *)PTR_DAT_084b65f0);
        if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar6 = FUN_07c9c218(lVar10,0,0);
        if ((uVar6 & 1) != 0) {
          lVar9 = FUN_04561560(lVar9,*(undefined8 *)PTR_DAT_084b65f0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_07fc86d4(lVar9,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          param_3 = fVar19;
          FUN_07fc87b0(lVar10,0);
          FUN_07fc8b94(uVar16,lVar10,0);
        }
      }
      else {
        plVar12 = (long *)FUN_045614d0(lVar9,*(undefined8 *)PTR_DAT_084b65e8);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_069771d0(plVar12,0);
        lVar9 = FUN_07c9c69c(lVar13,0);
        lVar10 = (**(code **)(*plVar12 + 0x5a8))(plVar12,*(undefined8 *)(*plVar12 + 0x5b0));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar7 = FUN_07c9c69c(lVar10,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0(uVar7,uVar7);
        }
        FUN_07cacdbc(lVar9,uVar7,0);
        lVar9 = FUN_07c9c69c(lVar13,0);
        if (DAT_08974d8f == '\0') {
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d8f = '\x01';
        }
        puVar14 = *(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
        uVar15 = *puVar14;
        param_2 = (float)puVar14[1];
        param_3 = (float)puVar14[2];
        if (DAT_08974d8a == '\0') {
          FUN_03a8a718(PTR_DAT_08486860);
          DAT_08974d8a = '\x01';
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        param_4 = **(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
        FUN_07cad124(uVar15,lVar9,0);
      }
      lVar9 = FUN_04561560(lVar13,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_07c9c218(lVar9,0,0);
      if ((uVar6 & 1) == 0) {
        uVar7 = thunk_FUN_07ca227c(lVar13,0);
        uVar7 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6690,uVar7,*(undefined8 *)PTR_DAT_084b6668,0
                            );
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(uVar7,0);
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_07c61260(&stack0x00000038,lVar9,0);
        fVar5 = fStack0000000000000048;
        FUN_07c61260(&stack0x00000038,lVar9,0);
        fVar20 = fStack0000000000000044;
        if ((fVar5 < fVar18) || (1.0 < fVar5)) {
          fStack0000000000000038 = fVar5;
          uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
          uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6618,uVar7,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(uVar7,0);
        }
        else {
          fStack0000000000000038 = fVar5;
          uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
          uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6698,uVar7,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4f4f4(uVar7,0);
          (**(code **)(*plVar12 + 0x238))(fVar5,plVar12,*(undefined8 *)(*plVar12 + 0x240));
        }
        fVar20 = fVar20 + fVar20;
        fStack0000000000000038 = fVar20;
        if (((fVar20 < fVar17) || (1.0 < fVar20)) || (fVar5 < fVar20)) {
          uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
          uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b6600,uVar7,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(uVar7,0);
        }
        else {
          uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000038);
          uVar7 = FUN_065c412c(*(undefined8 *)PTR_DAT_084b66a0,uVar7,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4f4f4(uVar7,0);
          (**(code **)(*plVar12 + 600))(fVar20,plVar12,*(undefined8 *)(*plVar12 + 0x260));
        }
      }
    }
    FUN_061c1960(&stack0x00000050,*(undefined8 *)PTR_DAT_08488a70);
    plVar12 = (long *)FUN_04561560(in_stack_00000020,*(undefined8 *)PTR_DAT_084b60b8);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
    }
    uVar6 = FUN_07c9e200(plVar12,0,0);
    if ((uVar6 & 1) == 0) {
      if (plVar12 == (long *)0x0) goto LAB_069484b8;
    }
    else {
      uVar7 = thunk_FUN_07ca227c(in_stack_00000020,0);
      uVar7 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b6658,uVar7,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x29);
      }
      FUN_07c4f4f4(uVar7,0);
      plVar12 = (long *)FUN_045614d0(in_stack_00000020,*(undefined8 *)PTR_DAT_084b65d8);
      if (plVar12 == (long *)0x0) goto LAB_069484b8;
      (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    }
    lVar13 = FUN_07c98f88(plVar12,0);
    FUN_0694a0b0(plVar12);
    if (lVar13 != 0) {
      FUN_07cadf5c(lVar13,0);
      FUN_07d31014(unaff_x19,0);
      if ((in_stack_00000018 & 1) != 0) {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6620,0);
        lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
        FUN_07c9d2fc(lVar13,*(undefined8 *)PTR_DAT_084b6650,0);
        if ((lVar13 == 0) || (lVar9 = FUN_07c9c69c(lVar13,0), lVar9 == 0)) goto LAB_069484b8;
        FUN_07cacdbc();
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6608,0);
        lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
        FUN_07c9d2fc(lVar9,*(undefined8 *)PTR_DAT_084b66b8,0);
        if (lVar9 == 0) goto LAB_069484b8;
        lVar10 = FUN_07c9c69c(lVar9,0);
        uVar7 = FUN_07c9c69c(lVar13,0);
        if (lVar10 == 0) goto LAB_069484b8;
        FUN_07cacdbc(lVar10,uVar7,0);
        lVar10 = FUN_07c98f88(plVar12,0);
        lVar11 = FUN_07c9c69c(lVar9,0);
        if (lVar10 == 0) goto LAB_069484b8;
        uVar16 = FUN_07cac280(lVar10,0);
        fVar18 = param_2;
        fVar19 = param_3;
        uVar15 = FUN_07cac4e0(lVar10,0);
        if (lVar11 == 0) goto LAB_069484b8;
        FUN_07cad038(uVar16,param_2,param_3,uVar15,fVar18,fVar19,param_4,lVar11,0);
        lVar10 = FUN_045614d0(lVar9,*(undefined8 *)PTR_DAT_08494af8);
        if (lVar10 == 0) goto LAB_069484b8;
        FUN_07c46614(0x42a00000,lVar10,0);
        FUN_045614d0(lVar9,*(undefined8 *)PTR_DAT_084b65c0);
        lVar9 = FUN_045614d0(lVar9,*(undefined8 *)PTR_DAT_084b65d0);
        uVar7 = FUN_07c98f88(plVar12,0);
        if (lVar9 == 0) goto LAB_069484b8;
        *(undefined8 *)(lVar9 + 0x20) = uVar7;
        thunk_FUN_03afed3c();
        FUN_07c998cc(lVar9,*(undefined8 *)PTR_DAT_08489ea0,0);
        FUN_045614d0(lVar13,*(undefined8 *)PTR_DAT_084b65c8);
      }
      if ((in_stack_00000018 & 0x100000000) == 0) {
LAB_06948418:
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b65f8,0);
        FUN_06939cec(plVar12,0);
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b66c0,0);
        FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6680,0);
        return plVar12;
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6660,0);
      puVar1 = PTR_DAT_08487320;
      lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
      FUN_07c9d2fc(lVar13,*(undefined8 *)PTR_DAT_084b6638,0);
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07c9d2fc(lVar9,*(undefined8 *)PTR_DAT_084b6688,0);
      if ((((lVar13 != 0) && (lVar10 = FUN_07c9c69c(lVar13,0), lVar10 != 0)) &&
          (FUN_07cacdbc(), lVar9 != 0)) && (lVar10 = FUN_07c9c69c(lVar9,0), lVar10 != 0)) {
        FUN_07cacdbc();
        lVar10 = FUN_07c9c69c(lVar13,0);
        fVar17 = (float)FUN_07cac280();
        fVar18 = param_2;
        fVar19 = param_3;
        fVar20 = (float)FUN_07cac7a8();
        if (lVar10 != 0) {
          param_3 = param_3 - fVar19;
          param_2 = param_2 - fVar18;
          FUN_07cac358(fVar17 - fVar20,param_2,param_3,lVar10,0);
          lVar10 = FUN_07c9c69c(lVar9,0);
          fVar17 = (float)FUN_07cac280();
          fVar18 = param_2;
          fVar19 = param_3;
          fVar20 = (float)FUN_07cac7a8();
          if (lVar10 != 0) {
            FUN_07cac358(fVar17 + fVar20,param_2 + fVar18,param_3 + fVar19,lVar10,0);
            puVar1 = PTR_DAT_084b5a40;
            FUN_07c998ec(lVar13,*(undefined8 *)PTR_DAT_084b5a40,0);
            FUN_07c998ec(lVar9,*(undefined8 *)puVar1,0);
            goto LAB_06948418;
          }
        }
      }
    }
  }
LAB_069484b8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


