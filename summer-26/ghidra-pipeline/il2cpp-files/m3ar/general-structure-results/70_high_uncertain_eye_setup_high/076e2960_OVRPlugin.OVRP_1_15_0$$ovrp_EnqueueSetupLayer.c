/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSetupLayer
ENTRY_POINT: 076e2960
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSetupLayer(void)

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000004;
  undefined4 in_stack_00000010;
  
  fVar1 = SQRT(unaff_s13 * unaff_s13 + unaff_s10 * unaff_s10 + unaff_s12 * unaff_s12);
  if (fVar1 <= unaff_s9) {
    if (*(char *)(unaff_x23 + 0xc10) == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      *(undefined1 *)(unaff_x23 + 0xc10) = 1;
    }
    fVar5 = **(float **)(*unaff_x22 + 0xb8);
    fVar1 = (*(float **)(*unaff_x22 + 0xb8))[1];
  }
  else {
    fVar5 = unaff_s10 / fVar1;
    fVar1 = unaff_s12 / fVar1;
  }
  fStack0000000000000004 = fVar1;
  FUN_0419f7f0(in_stack_00000010,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_0852b5fc(*(long *)(unaff_x20 + 0x40),0);
    FUN_08575c64(0);
    fVar2 = (float)FUN_08575f94(0);
    if (fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar3 = FUN_08596b90();
      uVar4 = FUN_08575d1c(fVar2,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar4;
      *(float *)(unaff_x19 + 0x10) = fVar5;
      *(float *)(unaff_x19 + 0x14) = fVar1;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


