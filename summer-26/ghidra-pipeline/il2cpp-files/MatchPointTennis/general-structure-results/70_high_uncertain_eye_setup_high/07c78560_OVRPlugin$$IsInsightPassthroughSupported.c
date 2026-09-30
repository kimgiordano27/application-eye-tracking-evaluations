/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 07c78560
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c786d8) */

float OVRPlugin__IsInsightPassthroughSupported(void)

{
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float in_s3;
  float in_s4;
  undefined4 uVar5;
  float unaff_s13;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  FUN_04447ba8(PTR_DAT_09f1e740);
  *(undefined1 *)(unaff_x21 + 0xf43) = 1;
  uVar5 = *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 4);
  uStack0000000000000004 = uVar5;
  fVar1 = (float)FUN_0770668c(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              0);
  uStack0000000000000004 = uVar5;
  fVar2 = (float)FUN_0770668c(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fStack0000000000000028,in_stack_00000020._4_4_,0);
  if (((0.0 <= fVar1) || (fVar4 = 1.0, 0.0 <= fVar2)) &&
     ((fVar1 <= 0.0 || (fVar4 = 0.0, fVar2 <= 0.0)))) {
    if (DAT_0a51bf3f == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf3f = '\x01';
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar2 = SQRT((fStack000000000000002c * fStack000000000000002c + in_s3 * in_s3 + in_s4 * in_s4) *
                 (unaff_s13 * unaff_s13 +
                 fStack0000000000000028 * fStack0000000000000028 +
                 in_stack_00000020._4_4_ * in_stack_00000020._4_4_));
    fVar4 = 0.0;
    if (DAT_01c75bcc <= fVar2) {
      fVar2 = (fStack000000000000002c * unaff_s13 +
              in_s3 * fStack0000000000000028 + in_s4 * in_stack_00000020._4_4_) / fVar2;
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      dVar3 = acos((double)fVar2);
      fVar4 = (float)dVar3 * DAT_01c768e0;
    }
    fVar4 = ABS(fVar1) / fVar4;
  }
  return fVar4;
}


