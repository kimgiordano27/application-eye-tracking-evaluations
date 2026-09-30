/*
FUNCTION_NAME: OVRPlugin$$AreHandPosesGeneratedByControllerData
ENTRY_POINT: 0531a714
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__AreHandPosesGeneratedByControllerData(void)

{
  undefined4 *puVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float unaff_s8;
  undefined4 uVar6;
  float fVar7;
  float unaff_s9;
  undefined4 uVar8;
  float unaff_s13;
  undefined4 uVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
  puVar1 = *(undefined4 **)(*unaff_x20 + 0xb8);
  uVar9 = *puVar1;
  uVar6 = puVar1[1];
  uVar8 = puVar1[2];
  uStack0000000000000000 = uVar9;
  uStack0000000000000004 = uVar6;
  uStack0000000000000008 = uVar8;
  fVar2 = (float)FUN_0526fc7c(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              0);
  uStack0000000000000000 = uVar9;
  uStack0000000000000004 = uVar6;
  uStack0000000000000008 = uVar8;
  fVar3 = (float)FUN_0526fc7c(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fStack0000000000000028,in_stack_00000020._4_4_,0);
  if (((0.0 <= fVar2) || (fVar5 = 1.0, 0.0 <= fVar3)) &&
     ((fVar2 <= 0.0 || (fVar5 = 0.0, fVar3 <= 0.0)))) {
    if (DAT_06bb8ba2 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb8ba2 = '\x01';
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar5 = 0.0;
    fVar3 = SQRT((fStack000000000000002c * fStack000000000000002c +
                 unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8) *
                 (unaff_s13 * unaff_s13 +
                 fStack0000000000000028 * fStack0000000000000028 +
                 in_stack_00000020._4_4_ * in_stack_00000020._4_4_));
    if (DAT_011afb1c <= fVar3) {
      fVar3 = (fStack000000000000002c * unaff_s13 +
              unaff_s9 * fStack0000000000000028 + unaff_s8 * in_stack_00000020._4_4_) / fVar3;
      fVar5 = 1.0;
      if (fVar3 <= 1.0) {
        fVar5 = fVar3;
      }
      fVar7 = -1.0;
      if (-1.0 <= fVar3) {
        fVar7 = fVar5;
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      dVar4 = acos((double)fVar7);
      fVar5 = (float)dVar4 * DAT_011b0124;
    }
    fVar5 = ABS(fVar2) / fVar5;
  }
  return fVar5;
}


