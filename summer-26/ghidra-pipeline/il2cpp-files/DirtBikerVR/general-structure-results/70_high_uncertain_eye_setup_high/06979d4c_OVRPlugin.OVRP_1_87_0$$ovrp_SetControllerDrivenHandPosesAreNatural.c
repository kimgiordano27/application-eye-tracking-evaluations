/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_SetControllerDrivenHandPosesAreNatural
ENTRY_POINT: 06979d4c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_87_0__ovrp_SetControllerDrivenHandPosesAreNatural
               (long param_1,undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  float unaff_s8;
  float fVar6;
  undefined8 in_stack_00000008;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (param_1 != 0) {
    fVar6 = unaff_s8 * param_3 * -0.25;
    if (*(float *)(param_1 + 0x24) < fVar6) {
      plVar2 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,4);
      if (plVar2 == (long *)0x0) goto LAB_06979fcc;
      if ((unaff_x20 != 0) && (lVar3 = thunk_FUN_03ac73c0(), lVar3 == 0)) goto LAB_06979fd4;
      if ((int)plVar2[3] == 0) goto OVRPlugin_OVRP_1_89_0___cctor;
      plVar2[4] = unaff_x20;
      thunk_FUN_03afed3c();
      puVar1 = PTR_DAT_08486760;
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06979fcc;
      fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x24);
      lVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),(long)&stack0x00000028 + 4
                                );
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03ac73c0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_06979fd4:
        uVar5 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5,0);
      }
      if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) {
OVRPlugin_OVRP_1_89_0___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      plVar2[5] = lVar3;
      thunk_FUN_03afed3c(plVar2 + 5,lVar3);
      fStack0000000000000028 = fVar6;
      lVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03ac73c0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_06979fd4;
      if (*(uint *)(plVar2 + 3) < 3) goto OVRPlugin_OVRP_1_89_0___cctor;
      plVar2[6] = lVar3;
      thunk_FUN_03afed3c(plVar2 + 6,lVar3);
      in_stack_00000008._4_4_ = fVar6 * 3.0;
      lVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),(long)&stack0x00000008 + 4);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03ac73c0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_06979fd4;
      if ((*(uint *)(plVar2 + 3) & 0xfffffffc) == 0) goto OVRPlugin_OVRP_1_89_0___cctor;
      plVar2[7] = lVar3;
      thunk_FUN_03afed3c(plVar2 + 7,lVar3);
      uVar5 = FUN_065ce7dc(*(undefined8 *)PTR_DAT_084b7568,plVar2,0);
      uVar5 = FUN_065c0764(uVar5,*(undefined8 *)PTR_DAT_084b7530,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4adbc(uVar5,0);
    }
    fVar6 = (float)FUN_07ca88b8(0);
    puVar1 = PTR_DAT_08486760;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
      if (fStack000000000000002c < fVar6) {
        thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),(long)&stack0x00000028 + 4);
        fStack0000000000000028 = fVar6;
        thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
        uVar5 = FUN_065ce798(*(undefined8 *)PTR_DAT_084b7578);
        uVar5 = FUN_065c0764(uVar5,*(undefined8 *)PTR_DAT_084b7560,0);
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4adbc(uVar5,0);
      }
      return;
    }
  }
LAB_06979fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


