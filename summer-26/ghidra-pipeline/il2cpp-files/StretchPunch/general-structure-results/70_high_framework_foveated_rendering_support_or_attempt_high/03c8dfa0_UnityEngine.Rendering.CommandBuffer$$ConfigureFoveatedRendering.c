/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 03c8dfa0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_3;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar3;
  undefined4 uVar4;
  ulong uVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float unaff_s12;
  float fVar10;
  float fVar11;
  float unaff_s14;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000058;
  
  uVar7 = in_stack_00000008 >> 0x20;
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 03c8dfac to 03d8dfaf has its CatchHandler @ 03c8dfd0 */
    thunk_FUN_01dc4f30();
  }
                    /* try { // try from 03c8dfb0 to 03d8dfd3 has its CatchHandler @ 03c8dec4 */
  fVar9 = SQRT(unaff_s10 / unaff_s12);
  if (*(char *)(unaff_x21 + 0xe52) == '\0') {
                    /* try { // try from 03c8dfe0 to 03d8dfeb has its CatchHandler @ 03c8dec4 */
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x21 + 0xe52) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    fVar11 = SQRT(unaff_s9 * unaff_s9 + unaff_s9 * unaff_s9);
    if (*(char *)(unaff_x21 + 0xe52) == '\0') {
      FUN_01d7d918(
                  Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                  );
      *(undefined1 *)(unaff_x21 + 0xe52) = 1;
    }
  }
  else {
    fVar11 = SQRT(unaff_s9 * unaff_s9 + unaff_s9 * unaff_s9);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    bVar2 = *(char *)(unaff_x21 + 0xe52) == '\0';
  }
  else {
    bVar2 = false;
  }
  fVar3 = ABS(SQRT(fVar9 * fVar9 + 0.0) - unaff_s11);
  if (*(float *)(unaff_x20 + 4) <= 0.0) {
    fVar3 = fVar3 * 0.25;
  }
  fVar6 = unaff_s9;
  if (fVar3 <= ABS(fVar11 - unaff_s11)) {
    unaff_s9 = 0.0;
    fVar6 = fVar9;
  }
  if (bVar2) {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x21 + 0xe52) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    bVar2 = *(char *)(unaff_x21 + 0xe52) == '\0';
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x21 + 0xe52) = 1;
  }
  fVar9 = SQRT(fVar6 * fVar6 + unaff_s9 * unaff_s9);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    bVar2 = *(char *)(unaff_x21 + 0xe52) == '\0';
  }
  else {
    bVar2 = false;
  }
  fStack0000000000000010 = unaff_s11 * fStack0000000000000010;
  fVar11 = fVar9;
  if (fStack0000000000000010 <= fVar9 && (uint)ABS(fStack0000000000000010) < 0x7f800001) {
    fVar11 = fStack0000000000000010;
  }
  if (bVar2) {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x21 + 0xe52) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  in_stack_00000008 = in_stack_00000008 & 0xffffffff;
  fVar3 = fVar6 * (1.0 / fVar9) * fVar11;
  uVar4 = FUN_0380067c(in_stack_00000000._4_4_,0);
  if (*(char *)(unaff_x21 + 0xe52) == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x21 + 0xe52) = 1;
  }
  fVar11 = unaff_s9 * (1.0 / fVar9) * fVar11;
  fVar9 = unaff_s14 * (1.0 / unaff_s8) * fVar3;
  fVar3 = in_stack_00000058._4_4_ * (1.0 / unaff_s8) * fVar3;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar10 = SQRT(fVar3 * fVar3 + fVar11 * fVar11 + fVar9 * fVar9);
  fVar6 = 1.0 / fVar10;
  uVar5 = (ulong)(uint)(fVar11 * fVar6);
  uVar8 = (ulong)(uint)(fVar3 * fVar6);
  uVar1 = FUN_0380067c(fVar9 * fVar6,uVar5,uVar8,0);
  fVar9 = (float)FUN_03d67be4(uVar4,in_stack_00000008,uVar7,uVar1,uVar5,uVar8,fStack0000000000000014
                              ,0);
  if (*(char *)(unaff_x21 + 0xe52) == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    *(undefined1 *)(unaff_x21 + 0xe52) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar11 = unaff_s11 + (fVar10 - unaff_s11) * fStack0000000000000014;
  *unaff_x19 = fVar11 * fVar9;
  unaff_x19[1] = fVar11 * (float)in_stack_00000008;
  unaff_x19[2] = fVar11 * (float)uVar7;
  return;
}


