/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 01a19288
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


float OVRPlugin__GetControllerHapticsDesc
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int in_w8;
  float *pfVar1;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x18b) = 1;
  }
  if (**(float **)(*unaff_x25 + 0xb8) <= unaff_s8) {
    fVar2 = unaff_s9 * param_3 +
            fStack0000000000000014 * unaff_s12 + fStack0000000000000018 * unaff_s13;
    unaff_s12 = unaff_s12 - (fStack0000000000000014 * fVar2) / unaff_s8;
    unaff_s13 = unaff_s13 - (fStack0000000000000018 * fVar2) / unaff_s8;
    param_3 = param_3 - (unaff_s9 * fVar2) / unaff_s8;
  }
  if (*(char *)(unaff_x21 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar2 = SQRT(param_3 * param_3 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13);
  if (fVar2 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar3 = unaff_s12 / fVar2;
    fVar4 = unaff_s13 / fVar2;
    param_3 = param_3 / fVar2;
  }
  fVar2 = (float)FUN_026987a4(uStack0000000000000008,fStack0000000000000004,fStack0000000000000000,
                              fVar3,fVar4,param_3,0);
  return (fStack0000000000000010 * fStack0000000000000004 + unaff_s11 * fVar3 + unaff_s10 * fVar2) -
         fStack000000000000000c * fStack0000000000000000;
}


