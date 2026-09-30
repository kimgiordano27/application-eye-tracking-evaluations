/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetMultimodalHandsControllersSupported
ENTRY_POINT: 069799bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_86_0__ovrp_SetMultimodalHandsControllersSupported
               (undefined8 param_1,undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x22;
  long *unaff_x23;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  thunk_FUN_03ae8be4(param_1);
  FUN_07c4fb40();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_07c43018(0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06979fcc;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_07c9c218(uVar9,0,0);
    if ((uVar3 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x30) == 0) ||
          (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x20), lVar4 == 0)) ||
         (lVar4 = FUN_0447b578(lVar4,*(undefined8 *)PTR_DAT_08487a08), lVar4 == 0))
      goto LAB_06979fcc;
      if (*(long *)(lVar4 + 0x18) != 0) {
        uVar9 = thunk_FUN_07ca227c();
        uVar9 = FUN_065c0764(uVar9,*(undefined8 *)PTR_DAT_084b7540,0);
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4adbc(uVar9,0);
      }
    }
  }
  plVar10 = (long *)(unaff_x19 + 0xa0);
  lVar4 = *plVar10;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_07c9e200(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar9 = FUN_0447b05c();
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar9;
    thunk_FUN_03afed3c(plVar10,uVar9);
  }
  lVar4 = *plVar10;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_07c9c218(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    uVar9 = thunk_FUN_07ca227c();
    uVar9 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b7548,uVar9,*(undefined8 *)PTR_DAT_084b7538,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4adbc(uVar9,0);
    return;
  }
  if (*plVar10 == 0) goto LAB_06979fcc;
  uVar9 = thunk_FUN_07ca227c(*plVar10,0);
  uVar5 = thunk_FUN_07ca227c();
  lVar4 = FUN_065ce354(uVar9,*(undefined8 *)PTR_DAT_0848edf8,uVar5,*(undefined8 *)PTR_DAT_084890b8,0
                      );
  if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_06979fcc;
  fVar11 = (float)FUN_07d306c8(*(long *)(unaff_x19 + 0xa0),0);
  puVar2 = PTR_DAT_08486c50;
  if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d27e2c(0);
  if (*plVar10 == 0) goto LAB_06979fcc;
  fVar14 = fVar11 * param_3 * DAT_015c5aec;
  fVar11 = DAT_015c5aec;
  fVar12 = (float)FUN_07d306c8(*plVar10,0);
  FUN_07d27e2c(0);
  puVar1 = PTR_DAT_08486760;
  fVar13 = *(float *)(unaff_x19 + 0x88);
  if (fVar14 <= fVar13) {
    fVar11 = fVar12 * fVar11;
    fVar12 = fVar11 * -4.0;
    if (fVar12 < fVar13) {
      fStack000000000000002c = fVar13;
      uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),(long)&stack0x00000028 + 4
                                );
      fStack0000000000000028 = fVar12;
      uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
      puVar8 = (undefined8 *)PTR_DAT_084b7570;
      goto LAB_06979cc0;
    }
  }
  else {
    fStack000000000000002c = fVar13;
    uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),(long)&stack0x00000028 + 4);
    fStack0000000000000028 = fVar14;
    uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
    puVar8 = (undefined8 *)PTR_DAT_084b7558;
LAB_06979cc0:
    uVar9 = FUN_065ce798(*puVar8,lVar4,uVar9,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4adbc(uVar9,0);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    if (*(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) <= 0.0) {
      return;
    }
    if (*plVar10 != 0) {
      fVar12 = (float)FUN_07d306c8(*plVar10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07d27e2c(0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar11 = fVar12 * fVar11 * -0.25;
        if (*(float *)(*(long *)(unaff_x19 + 0x20) + 0x24) < fVar11) {
          plVar10 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,4);
          if (plVar10 == (long *)0x0) goto LAB_06979fcc;
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_03ac73c0(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
          goto LAB_06979fd4;
          if ((int)plVar10[3] == 0) goto OVRPlugin_OVRP_1_89_0___cctor;
          plVar10[4] = lVar4;
          thunk_FUN_03afed3c(plVar10 + 4,lVar4);
          puVar2 = PTR_DAT_08486760;
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06979fcc;
          fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x24);
          lVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),
                                     (long)&stack0x00000028 + 4);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
LAB_06979fd4:
            uVar9 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar9,0);
          }
          if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
OVRPlugin_OVRP_1_89_0___cctor:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar10[5] = lVar6;
          thunk_FUN_03afed3c(plVar10 + 5,lVar6);
          fStack0000000000000028 = fVar11;
          lVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x78),&stack0x00000028);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0))
          goto LAB_06979fd4;
          if (*(uint *)(plVar10 + 3) < 3) goto OVRPlugin_OVRP_1_89_0___cctor;
          plVar10[6] = lVar6;
          thunk_FUN_03afed3c(plVar10 + 6,lVar6);
          in_stack_00000008._4_4_ = fVar11 * 3.0;
          lVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x78),(long)&stack0x00000008 + 4);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0))
          goto LAB_06979fd4;
          if ((*(uint *)(plVar10 + 3) & 0xfffffffc) == 0) goto OVRPlugin_OVRP_1_89_0___cctor;
          plVar10[7] = lVar6;
          thunk_FUN_03afed3c(plVar10 + 7,lVar6);
          uVar9 = FUN_065ce7dc(*(undefined8 *)PTR_DAT_084b7568,plVar10,0);
          uVar9 = FUN_065c0764(uVar9,*(undefined8 *)PTR_DAT_084b7530,0);
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
          }
          FUN_07c4adbc(uVar9,0);
        }
        fVar11 = (float)FUN_07ca88b8(0);
        puVar2 = PTR_DAT_08486760;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
          if (fVar11 <= fStack000000000000002c) {
            return;
          }
          uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),
                                     (long)&stack0x00000028 + 4);
          fStack0000000000000028 = fVar11;
          uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x78),&stack0x00000028);
          uVar9 = FUN_065ce798(*(undefined8 *)PTR_DAT_084b7578,lVar4,uVar9,uVar5,0);
          uVar9 = FUN_065c0764(uVar9,*(undefined8 *)PTR_DAT_084b7560,0);
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
          }
          FUN_07c4adbc(uVar9,0);
          return;
        }
      }
    }
  }
LAB_06979fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


