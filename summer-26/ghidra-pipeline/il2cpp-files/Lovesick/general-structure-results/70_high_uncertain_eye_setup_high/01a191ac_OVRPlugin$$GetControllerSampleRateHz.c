/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 01a191ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetControllerSampleRateHz(void)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  fVar3 = SQRT(unaff_s13 * unaff_s13 + unaff_s15 * unaff_s15 + unaff_s12 * unaff_s12);
  fStack000000000000000c = unaff_s9;
  if (fVar3 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar2;
    fStack0000000000000004 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    fStack0000000000000008 = unaff_s15 / fVar3;
    fStack0000000000000004 = unaff_s12 / fVar3;
    fVar3 = unaff_s13 / fVar3;
  }
  if (*(char *)(unaff_x19 + 0x377) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x19 + 0x377) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = (float)FUN_02699088(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar1 + 0x48),
                              *(undefined4 *)(lVar1 + 0x4c),*(undefined4 *)(lVar1 + 0x50),0);
  if (*(char *)(unaff_x20 + 0x18b) == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x18b) = 1;
  }
  if (**(float **)(*unaff_x25 + 0xb8) <= unaff_s8) {
    fVar5 = unaff_s14 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar4 + fStack0000000000000018 * fStack00000000000000a4;
    fVar4 = fVar4 - (fStack0000000000000014 * fVar5) / unaff_s8;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar5) / unaff_s8;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar5) / unaff_s8;
  }
  if (*(char *)(unaff_x21 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar4 * fVar4 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar5 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar4 = *pfVar2;
    fStack00000000000000a4 = pfVar2[1];
    fStack00000000000000a8 = pfVar2[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar5;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar5;
  }
  fVar5 = (float)FUN_026987a4(fStack0000000000000008,fStack0000000000000004,fVar3,fVar4,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fStack0000000000000010 * fStack0000000000000004 + unaff_s11 * fVar4 + unaff_s10 * fVar5) -
         fStack000000000000000c * fVar3;
}


