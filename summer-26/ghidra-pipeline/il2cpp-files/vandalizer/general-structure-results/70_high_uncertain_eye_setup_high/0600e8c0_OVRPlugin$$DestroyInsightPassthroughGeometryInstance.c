/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 0600e8c0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0600ea34) */

float OVRPlugin__DestroyInsightPassthroughGeometryInstance(long param_1)

{
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x420));
  *(undefined1 *)(unaff_x25 + 0x545) = 1;
  fStack0000000000000018 = fStack0000000000000018 - unaff_s11;
  fStack000000000000001c = fStack000000000000001c - unaff_s12;
  in_stack_00000020 = in_stack_00000020 - unaff_s14;
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar1 = unaff_s10 * in_stack_00000020 +
            in_stack_00000028._4_4_ * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000028._4_4_ * fVar1) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar1) / unaff_s8;
    in_stack_00000020 = in_stack_00000020 - (unaff_s10 * fVar1) / unaff_s8;
  }
  fStack0000000000000014 = unaff_s11;
  if (*(char *)(unaff_x24 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x24 + 0xa81) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar1 = SQRT(in_stack_00000020 * in_stack_00000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar1 <= *(float *)(unaff_x23 + 0x9b8)) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fStack0000000000000018 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar1;
  }
  uVar2 = FUN_0600d840();
  fVar1 = (float)FUN_05f58000(uVar2,0);
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar3 = (ulong)(uint)fStack0000000000000018;
  if ((fVar4 < fVar1) && (uVar3 = uVar2, ABS(fVar1 - fVar4) < ABS(360.0 - fVar1))) {
    uVar3 = FUN_0600d8ec();
  }
  fVar1 = (float)FUN_0600db00();
  return fStack0000000000000014 + (float)uVar3 * fVar1;
}


