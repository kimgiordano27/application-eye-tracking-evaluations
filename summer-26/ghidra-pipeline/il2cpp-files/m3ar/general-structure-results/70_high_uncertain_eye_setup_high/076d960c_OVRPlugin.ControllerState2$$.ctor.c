/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 076d960c
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


bool OVRPlugin_ControllerState2___ctor(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  float *unaff_x20;
  int unaff_w22;
  undefined4 uVar3;
  float unaff_s8;
  undefined4 unaff_s9;
  float fVar4;
  undefined8 uVar5;
  undefined4 unaff_s10;
  float fVar6;
  undefined4 unaff_s11;
  float fVar7;
  float unaff_s12;
  float fVar8;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  uStack0000000000000010 = 0;
  FUN_05b94d7c(&stack0x00000010,unaff_w22);
  uVar3 = FUN_076d9b6c(unaff_s9);
  *(undefined4 *)((long)unaff_x19 + 0xc) = uVar3;
  *(undefined4 *)(unaff_x19 + 2) = unaff_s10;
  *(undefined4 *)((long)unaff_x19 + 0x14) = unaff_s11;
  fVar4 = *unaff_x20;
  fVar6 = unaff_x20[1];
  fVar7 = unaff_x20[2];
  _fStack0000000000000018 = 0;
  _fStack0000000000000020 = 0;
  _fStack0000000000000028 = 0;
  FUN_076d94b4(&stack0x00000018);
  uVar2 = FUN_0853ca8c(fVar4,fVar6,fVar7,&stack0x00000018,0);
  fVar4 = (float)((ulong)in_stack_00000000 >> 0x20);
  if ((uVar2 & 1) == 0) {
    *(float *)(unaff_x19 + 1) = unaff_s12;
    cVar1 = DAT_09539e17;
    *unaff_x19 = in_stack_00000000;
    fVar6 = *unaff_x20;
    fVar7 = unaff_x20[1];
    fVar8 = unaff_x20[2];
    if (cVar1 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    fVar6 = fVar6 - (float)in_stack_00000000;
    fVar7 = fVar7 - fVar4;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar4 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + (fVar8 - unaff_s12) * (fVar8 - unaff_s12));
    *(float *)(unaff_x19 + 3) = fVar4;
    if (0.0 < unaff_s8) {
      return fVar4 <= unaff_s8;
    }
    return true;
  }
  if (unaff_w22 < 3) {
    if (unaff_w22 == 0) {
      FUN_076d94b4(&stack0x00000018);
      fVar6 = fStack0000000000000018 - fStack0000000000000024;
LAB_076d97b0:
      in_stack_00000000 = CONCAT44(fVar4,fVar6);
      goto LAB_076d97fc;
    }
    if (unaff_w22 != 1) {
      if (unaff_w22 == 2) {
        FUN_076d94b4(&stack0x00000018);
        unaff_s12 = fStack0000000000000020 - fStack000000000000002c;
      }
      goto LAB_076d97fc;
    }
    FUN_076d94b4(&stack0x00000018);
    fVar4 = fStack000000000000001c - fStack0000000000000028;
  }
  else {
    if (unaff_w22 == 3) {
      FUN_076d94b4(&stack0x00000018);
      fVar6 = fStack0000000000000018 + fStack0000000000000024;
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
    fVar4 = fStack000000000000001c + fStack0000000000000028;
  }
  in_stack_00000000 = CONCAT44(fVar4,(float)in_stack_00000000);
LAB_076d97fc:
  *unaff_x19 = in_stack_00000000;
  *(float *)(unaff_x19 + 1) = unaff_s12;
  uVar5 = *(undefined8 *)unaff_x20;
  fVar4 = unaff_x20[2];
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar6 = (float)in_stack_00000000 - (float)uVar5;
  fVar7 = (float)((ulong)in_stack_00000000 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
  fVar4 = SQRT((unaff_s12 - fVar4) * (unaff_s12 - fVar4) + fVar6 * fVar6 + fVar7 * fVar7);
  *(float *)(unaff_x19 + 3) = fVar4;
  return fVar4 <= unaff_s8 || unaff_s8 <= 0.0;
}


