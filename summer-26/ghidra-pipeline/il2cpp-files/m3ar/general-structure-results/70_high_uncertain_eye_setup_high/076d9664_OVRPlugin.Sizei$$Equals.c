/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 076d9664
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


bool OVRPlugin_Sizei__Equals(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  float *unaff_x20;
  int unaff_w22;
  float fVar3;
  float fVar4;
  float unaff_s8;
  undefined8 uVar5;
  float fVar6;
  float unaff_s12;
  float fVar7;
  undefined8 in_stack_00000000;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  uVar2 = FUN_0853ca8c(param_1,0);
  fVar6 = (float)((ulong)in_stack_00000000 >> 0x20);
  if ((uVar2 & 1) == 0) {
    *(float *)(unaff_x19 + 1) = unaff_s12;
    cVar1 = DAT_09539e17;
    *unaff_x19 = in_stack_00000000;
    fVar3 = *unaff_x20;
    fVar4 = unaff_x20[1];
    fVar7 = unaff_x20[2];
    if (cVar1 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    fVar3 = fVar3 - (float)in_stack_00000000;
    fVar4 = fVar4 - fVar6;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar6 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + (fVar7 - unaff_s12) * (fVar7 - unaff_s12));
    *(float *)(unaff_x19 + 3) = fVar6;
    if (0.0 < unaff_s8) {
      return fVar6 <= unaff_s8;
    }
    return true;
  }
  if (unaff_w22 < 3) {
    if (unaff_w22 == 0) {
      FUN_076d94b4(&stack0x00000018);
      fStack0000000000000024 = fStack0000000000000018 - fStack0000000000000024;
LAB_076d97b0:
      in_stack_00000000 = CONCAT44(fVar6,fStack0000000000000024);
      goto LAB_076d97fc;
    }
                    /* catch() { ... } // from try @ 076d95d0 with catch @ 076d9680 */
                    /* try { // try from 076d9684 to 077d968b has its CatchHandler @ 076d9694 */
    if (unaff_w22 != 1) {
      if (unaff_w22 == 2) {
        FUN_076d94b4(&stack0x00000018);
        unaff_s12 = fStack0000000000000020 - fStack000000000000002c;
      }
      goto LAB_076d97fc;
    }
    FUN_076d94b4(&stack0x00000018);
    fStack000000000000001c = fStack000000000000001c - fStack0000000000000028;
  }
  else {
    if (unaff_w22 == 3) {
      FUN_076d94b4(&stack0x00000018);
      fStack0000000000000024 = fStack0000000000000018 + fStack0000000000000024;
      goto LAB_076d97b0;
    }
    if (unaff_w22 != 4) {
      if (unaff_w22 == 5) {
        FUN_076d94b4(&stack0x00000018);
        unaff_s12 = fStack0000000000000020 + fStack000000000000002c;
      }
      goto LAB_076d97fc;
    }
    FUN_076d94b4(&stack0x00000018);
    fStack000000000000001c = fStack000000000000001c + fStack0000000000000028;
  }
  in_stack_00000000 = CONCAT44(fStack000000000000001c,(float)in_stack_00000000);
LAB_076d97fc:
  *unaff_x19 = in_stack_00000000;
  *(float *)(unaff_x19 + 1) = unaff_s12;
  uVar5 = *(undefined8 *)unaff_x20;
  fVar6 = unaff_x20[2];
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = (float)in_stack_00000000 - (float)uVar5;
  fVar4 = (float)((ulong)in_stack_00000000 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
  fVar6 = SQRT((unaff_s12 - fVar6) * (unaff_s12 - fVar6) + fVar3 * fVar3 + fVar4 * fVar4);
  *(float *)(unaff_x19 + 3) = fVar6;
  return fVar6 <= unaff_s8 || unaff_s8 <= 0.0;
}


