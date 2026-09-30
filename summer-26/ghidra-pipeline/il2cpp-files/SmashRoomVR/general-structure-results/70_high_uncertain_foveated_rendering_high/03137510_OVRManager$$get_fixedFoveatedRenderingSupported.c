/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 03137510
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  undefined4 *unaff_x19;
  undefined4 uVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  
  fVar2 = unaff_s12;
  uVar1 = FUN_03914a7c();
  *unaff_x19 = uVar1;
  unaff_x19[1] = fVar2;
  unaff_x19[2] = param_3;
  unaff_x19[3] = (unaff_s15 * unaff_s12 + unaff_s10 * unaff_s14 + unaff_s8 * unaff_s11) -
                 unaff_s9 * unaff_s13;
  unaff_x19[4] = (unaff_s10 * unaff_s13 + unaff_s9 * unaff_s14 + unaff_s8 * unaff_s12) -
                 unaff_s15 * unaff_s11;
  unaff_x19[5] = (unaff_s9 * unaff_s11 + unaff_s15 * unaff_s14 + unaff_s8 * unaff_s13) -
                 unaff_s10 * unaff_s12;
  unaff_x19[6] = ((unaff_s8 * unaff_s14 - unaff_s10 * unaff_s11) - unaff_s9 * unaff_s12) -
                 unaff_s15 * unaff_s13;
  return;
}


