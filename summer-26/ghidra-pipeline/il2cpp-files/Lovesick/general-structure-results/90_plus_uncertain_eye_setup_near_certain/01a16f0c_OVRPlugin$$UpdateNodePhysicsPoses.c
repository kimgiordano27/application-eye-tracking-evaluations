/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 01a16f0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 120
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__UpdateNodePhysicsPoses(float param_1,float param_2)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  param_2 = param_2 - unaff_s10;
  fStack0000000000000010 = fStack0000000000000010 - unaff_s8;
  fStack0000000000000014 = fStack0000000000000014 - unaff_s9;
  if (param_1 <= unaff_s12) {
    fVar2 = fStack0000000000000028 * fStack0000000000000014 +
            in_stack_00000020._4_4_ * param_2 + fStack000000000000002c * fStack0000000000000010;
    param_2 = param_2 - (in_stack_00000020._4_4_ * fVar2) / unaff_s12;
    fStack0000000000000010 = fStack0000000000000010 - (fStack000000000000002c * fVar2) / unaff_s12;
    fStack0000000000000014 = fStack0000000000000014 - (fStack0000000000000028 * fVar2) / unaff_s12;
  }
  if (*(char *)(unaff_x26 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x26 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar7 = *(float *)(unaff_x25 + 0x38);
  fVar4 = fStack0000000000000014 * fStack0000000000000014;
  fVar2 = SQRT(fVar4 + param_2 * param_2 + fStack0000000000000010 * fStack0000000000000010);
  if (fVar2 <= fVar7) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    param_2 = *pfVar1;
    fStack0000000000000010 = pfVar1[1];
    fStack0000000000000014 = pfVar1[2];
  }
  else {
    param_2 = param_2 / fVar2;
    fStack0000000000000010 = fStack0000000000000010 / fVar2;
    fStack0000000000000014 = fStack0000000000000014 / fVar2;
  }
  fVar2 = (float)FUN_01a15ea0();
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT((fStack0000000000000014 * fStack0000000000000014 +
               param_2 * param_2 + fStack0000000000000010 * fStack0000000000000010) *
               (fVar7 * fVar7 + fVar2 * fVar2 + fVar4 * fVar4));
  fVar6 = 0.0;
  if (DAT_028aa5c8 <= fVar5) {
    fVar5 = (fStack0000000000000014 * fVar7 + param_2 * fVar2 + fStack0000000000000010 * fVar4) /
            fVar5;
    fVar6 = fVar5;
    if (1.0 < fVar5) {
      fVar6 = 1.0;
    }
    if (fVar5 < -1.0) {
      fVar6 = -1.0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar3 = acos((double)fVar6);
    fVar6 = (float)dVar3 * DAT_028aa158;
  }
  fVar5 = 1.0;
  if (fStack0000000000000028 * (fStack0000000000000010 * fVar2 - param_2 * fVar4) +
      in_stack_00000020._4_4_ * (fStack0000000000000014 * fVar4 - fStack0000000000000010 * fVar7) +
      fStack000000000000002c * (param_2 * fVar7 - fStack0000000000000014 * fVar2) < 0.0) {
    fVar5 = -1.0;
  }
  fVar7 = fVar5 * fVar6 - (float)(int)((fVar5 * fVar6) / 360.0) * 360.0;
  fVar4 = fVar7;
  if (360.0 < fVar7) {
    fVar4 = 360.0;
  }
  if (fVar7 < 0.0) {
    fVar4 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    fVar7 = *(float *)(*(long *)(unaff_x20 + 0x18) + 0x2c);
    if ((fVar7 < fVar4) && (param_2 = fVar2, ABS(fVar4 - fVar7) < ABS(360.0 - fVar4))) {
      param_2 = (float)FUN_01a15f4c();
    }
    fVar2 = (float)FUN_01a16160();
    return in_stack_00000018 + param_2 * fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


