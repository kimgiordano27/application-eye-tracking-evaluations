/*
FUNCTION_NAME: OVRPlugin.OVRP_1_90_0$$.cctor
ENTRY_POINT: 07cb02e0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_90_0___cctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_094ad620();
  fVar4 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) != 0) {
    fVar3 = (float)FUN_09536010(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x28) = fVar4;
    if (fVar4 < 0.0) {
      *(undefined4 *)(unaff_x19 + 0x28) = 0;
      goto LAB_07cb0314;
    }
  }
  if (0.0 < fVar4) {
    return;
  }
LAB_07cb0314:
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_094ad620(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c6b48(*(undefined8 *)PTR_DAT_09f51328,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_09f21ad0 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      in_stack_00000008 = FUN_07a1e8c0(0);
      uVar2 = FUN_07a1f97c(&stack0x00000008,0);
      uVar2 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f51320,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar2,0);
      FUN_07cb01d4();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


