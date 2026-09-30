/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetControllerIsInHand
ENTRY_POINT: 06979b38
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_86_0__ovrp_GetControllerIsInHand(undefined1 param_1 [16],float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x21;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000008;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  lVar3 = FUN_065ce354();
  if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_06979fcc;
  fVar10 = (float)FUN_07d306c8(*(long *)(unaff_x19 + 0xa0),0);
  puVar2 = PTR_DAT_08486c50;
  if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d27e2c(0);
  if (*unaff_x21 == 0) goto LAB_06979fcc;
  fVar13 = fVar10 * param_2 * DAT_015c5aec;
  fVar10 = DAT_015c5aec;
  fVar11 = (float)FUN_07d306c8(*unaff_x21,0);
  FUN_07d27e2c(0);
  puVar1 = PTR_DAT_08486760;
  fVar12 = *(float *)(unaff_x19 + 0x88);
  if (fVar13 <= fVar12) {
    fVar10 = fVar11 * fVar10;
    fVar11 = fVar10 * -4.0;
    if (fVar11 < fVar12) {
      fStack000000000000002c = fVar12;
      uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),(long)&stack0x00000028 + 4
                                );
      fStack0000000000000028 = fVar11;
      uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
      puVar9 = (undefined8 *)PTR_DAT_084b7570;
      goto LAB_06979cc0;
    }
  }
  else {
    fStack000000000000002c = fVar12;
    uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),(long)&stack0x00000028 + 4);
    fStack0000000000000028 = fVar13;
    uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
    puVar9 = (undefined8 *)PTR_DAT_084b7558;
LAB_06979cc0:
    uVar4 = FUN_065ce798(*puVar9,lVar3,uVar4,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4adbc(uVar4,0);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    if (*(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) <= 0.0) {
      return;
    }
    if (*unaff_x21 != 0) {
      fVar11 = (float)FUN_07d306c8(*unaff_x21,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07d27e2c(0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar10 = fVar11 * fVar10 * -0.25;
        if (*(float *)(*(long *)(unaff_x19 + 0x20) + 0x24) < fVar10) {
          plVar6 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,4);
          if (plVar6 == (long *)0x0) goto LAB_06979fcc;
          if ((lVar3 != 0) &&
             (lVar7 = thunk_FUN_03ac73c0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_06979fd4;
          if ((int)plVar6[3] == 0) goto OVRPlugin_OVRP_1_89_0___cctor;
          plVar6[4] = lVar3;
          thunk_FUN_03afed3c(plVar6 + 4,lVar3);
          puVar2 = PTR_DAT_08486760;
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06979fcc;
          fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x24);
          lVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),
                                     (long)&stack0x00000028 + 4);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_03ac73c0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_06979fd4:
            uVar4 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar4,0);
          }
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
OVRPlugin_OVRP_1_89_0___cctor:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar6[5] = lVar7;
          thunk_FUN_03afed3c(plVar6 + 5,lVar7);
          fStack0000000000000028 = fVar10;
          lVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x78),&stack0x00000028);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_03ac73c0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_06979fd4;
          if (*(uint *)(plVar6 + 3) < 3) goto OVRPlugin_OVRP_1_89_0___cctor;
          plVar6[6] = lVar7;
          thunk_FUN_03afed3c(plVar6 + 6,lVar7);
          in_stack_00000008._4_4_ = fVar10 * 3.0;
          lVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x78),(long)&stack0x00000008 + 4);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_03ac73c0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_06979fd4;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffc) == 0) goto OVRPlugin_OVRP_1_89_0___cctor;
          plVar6[7] = lVar7;
          thunk_FUN_03afed3c(plVar6 + 7,lVar7);
          uVar4 = FUN_065ce7dc(*(undefined8 *)PTR_DAT_084b7568,plVar6,0);
          uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b7530,0);
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
          }
          FUN_07c4adbc(uVar4,0);
        }
        fVar10 = (float)FUN_07ca88b8(0);
        puVar2 = PTR_DAT_08486760;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
          if (fVar10 <= fStack000000000000002c) {
            return;
          }
          uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),
                                     (long)&stack0x00000028 + 4);
          fStack0000000000000028 = fVar10;
          uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x78),&stack0x00000028);
          uVar4 = FUN_065ce798(*(undefined8 *)PTR_DAT_084b7578,lVar3,uVar4,uVar5,0);
          uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b7560,0);
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
          }
          FUN_07c4adbc(uVar4,0);
          return;
        }
      }
    }
  }
LAB_06979fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


