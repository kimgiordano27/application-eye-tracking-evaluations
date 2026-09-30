/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 0531b07c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState5(float param_1,float param_2)

{
  undefined *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  long unaff_x21;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float fVar9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float fVar10;
  float unaff_s15;
  float fStack000000000000000c;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000007c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  
  puVar1 = PTR_DAT_067c8f78;
  fStack000000000000007c = DAT_011b06e4;
  fVar4 = SQRT(unaff_s12 * unaff_s12 + param_1 + param_2);
  fStack000000000000000c = unaff_s14;
  if (fVar4 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  else {
    fVar8 = unaff_s15 / fVar4;
    fVar10 = unaff_s14 / fVar4;
    fVar4 = unaff_s12 / fVar4;
  }
  fStack000000000000001c = fStack00000000000000a4;
  fStack0000000000000024 = unaff_s12;
  if (*(char *)(unaff_x21 + 0x2bf) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x21 + 0x2bf) = 1;
  }
  fStack00000000000000a0 = fStack00000000000000a0 - unaff_s8;
  fVar9 = fStack000000000000001c - unaff_s9;
  in_stack_000000a8 = in_stack_000000a8 - unaff_s11;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar7 = SQRT(in_stack_000000a8 * in_stack_000000a8 +
               fStack00000000000000a0 * fStack00000000000000a0 + fVar9 * fVar9);
  if (fVar7 <= fStack000000000000007c) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar7 = pfVar2[2];
  }
  else {
    fVar5 = fStack00000000000000a0 / fVar7;
    fVar6 = fVar9 / fVar7;
    fVar7 = in_stack_000000a8 / fVar7;
  }
  if (ABS(fVar4 * fVar7 + fVar8 * fVar5 + fVar10 * fVar6) <= DAT_011b00d8) {
    if (*(char *)(unaff_x21 + 0x2bf) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x21 + 0x2bf) = 1;
    }
    fVar4 = fStack000000000000000c * in_stack_000000a8 - fStack0000000000000024 * fVar9;
    fVar8 = fStack0000000000000024 * fStack00000000000000a0 - unaff_s15 * in_stack_000000a8;
    fVar10 = unaff_s15 * fVar9 - fStack000000000000000c * fStack00000000000000a0;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (SQRT(fVar10 * fVar10 + fVar4 * fVar4 + fVar8 * fVar8) <= fStack000000000000007c) {
      if (DAT_06bb42c1 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c1 = '\x01';
      }
      uVar3 = *(undefined8 *)puVar1;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x2bf) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x21 + 0x2bf) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (SQRT(in_stack_000000b8 * in_stack_000000b8 +
             fStack00000000000000b0 * fStack00000000000000b0 +
             fStack00000000000000b4 * fStack00000000000000b4) <= fStack000000000000007c) {
      if (DAT_06bb42c1 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c1 = '\x01';
      }
      uVar3 = *(undefined8 *)puVar1;
    }
  }
  return;
}


