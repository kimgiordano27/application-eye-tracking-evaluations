/*
FUNCTION_NAME: OVRPlugin$$GetConnectedControllers
ENTRY_POINT: 0531fc2c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetConnectedControllers(float param_1,float param_2)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar5;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  if (param_2 + param_1 < 0.0) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    unaff_s13 = *pfVar1;
    unaff_s14 = pfVar1[1];
    unaff_s11 = pfVar1[2];
  }
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fVar5 = unaff_s12 - (fStack0000000000000024 + unaff_s14);
  in_stack_00000018 = in_stack_00000018 - (in_stack_00000028 + unaff_s13);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + unaff_s11);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar2 = unaff_s10 * fStack0000000000000020 + unaff_s15 * in_stack_00000018 + unaff_s9 * fVar5;
    in_stack_00000018 = in_stack_00000018 - (unaff_s15 * fVar2) / unaff_s8;
    fVar5 = fVar5 - (unaff_s9 * fVar2) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar2) / unaff_s8;
  }
  if (*(char *)(unaff_x26 + 0x2bf) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x26 + 0x2bf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar5 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               in_stack_00000018 * in_stack_00000018 + fVar5 * fVar5);
  if (fVar5 <= *(float *)(unaff_x25 + 0x6e4)) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    in_stack_00000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    in_stack_00000018 = in_stack_00000018 / fVar5;
  }
  fVar2 = (float)FUN_0531ec70();
  fVar3 = (float)FUN_0526fc7c(0);
  fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
  fVar5 = 360.0;
  if (fVar3 <= 360.0) {
    fVar5 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar5 < fVar4) && (in_stack_00000018 = fVar2, ABS(fVar4 - fVar5) < ABS(360.0 - fVar4))) {
      in_stack_00000018 = (float)FUN_0531ed1c();
    }
    fVar5 = (float)FUN_0531ef30();
    return in_stack_00000028 + unaff_s13 + in_stack_00000018 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


