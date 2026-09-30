/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 073e1428
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRPlugin__get_fixedFoveatedRenderingSupported
                (undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar2 = (float)FUN_085d2bd4();
  if (*(char *)(unaff_x20 + 0xea2) == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    *(undefined1 *)(unaff_x20 + 0xea2) = 1;
  }
  if (**(float **)(*unaff_x25 + 0xb8) <= unaff_s8) {
    fVar3 = unaff_s9 * param_3 + fStack0000000000000014 * fVar2 + fStack0000000000000018 * param_2;
    fVar2 = fVar2 - (fStack0000000000000014 * fVar3) / unaff_s8;
    param_2 = param_2 - (fStack0000000000000018 * fVar3) / unaff_s8;
    param_3 = param_3 - (unaff_s9 * fVar3) / unaff_s8;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar3 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2);
  if (fVar3 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar2 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar2 = fVar2 / fVar3;
    param_2 = param_2 / fVar3;
    param_3 = param_3 / fVar3;
  }
  fVar3 = (float)FUN_085d2264(uStack0000000000000008,fStack0000000000000004,fStack0000000000000000,
                              fVar2,param_2,param_3,0);
  return (fStack0000000000000010 * fStack0000000000000004 + unaff_s11 * fVar2 + unaff_s10 * fVar3) -
         fStack000000000000000c * fStack0000000000000000;
}


