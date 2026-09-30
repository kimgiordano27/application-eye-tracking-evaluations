/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 01a190bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetControllerHapticsPcm(void)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar6;
  float fVar7;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  fVar6 = unaff_s9;
  fVar7 = unaff_s8;
  fStack0000000000000008 = (float)FUN_02699088(0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  puVar1 = System_Func<Assembly[]>_TypeInfo;
  fVar5 = unaff_s14 * unaff_s14 +
          in_stack_00000010._4_4_ * in_stack_00000010._4_4_ +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar5) {
    fVar4 = unaff_s14 * fVar7 +
            in_stack_00000010._4_4_ * fStack0000000000000008 + fStack0000000000000018 * fVar6;
    fStack0000000000000008 = fStack0000000000000008 - (in_stack_00000010._4_4_ * fVar4) / fVar5;
    fVar6 = fVar6 - (fStack0000000000000018 * fVar4) / fVar5;
    fVar7 = fVar7 - (unaff_s14 * fVar4) / fVar5;
  }
  if (*(char *)(unaff_x21 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar4 = SQRT(fVar7 * fVar7 + fStack0000000000000008 * fStack0000000000000008 + fVar6 * fVar6);
  fStack000000000000000c = unaff_s9;
  if (fVar4 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar3;
    fStack0000000000000004 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar4;
    fStack0000000000000004 = fVar6 / fVar4;
    fVar7 = fVar7 / fVar4;
  }
  if (*(char *)(unaff_x19 + 0x377) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x19 + 0x377) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar6 = (float)FUN_02699088(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar5) {
    fVar4 = unaff_s14 * fStack00000000000000a8 +
            in_stack_00000010._4_4_ * fVar6 + fStack0000000000000018 * fStack00000000000000a4;
    fVar6 = fVar6 - (in_stack_00000010._4_4_ * fVar4) / fVar5;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar4) / fVar5;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar4) / fVar5;
  }
  if (*(char *)(unaff_x21 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar6 * fVar6 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar5 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar6 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar6 = fVar6 / fVar5;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar5;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar5;
  }
  fVar5 = (float)FUN_026987a4(fStack0000000000000008,fStack0000000000000004,fVar7,fVar6,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (unaff_s8 * fStack0000000000000004 + unaff_s11 * fVar6 + unaff_s10 * fVar5) -
         fStack000000000000000c * fVar7;
}


