/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 07477e5c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if (in_w8 == 0) {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    *(undefined1 *)(unaff_x20 + 0x324) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar1 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
    fVar2 = SQRT((unaff_s10 - param_3) * (unaff_s10 - param_3) +
                 (unaff_s8 - unaff_s11) * (unaff_s8 - unaff_s11) +
                 (unaff_s9 - param_2) * (unaff_s9 - param_2));
    FUN_08a5debc(fVar2 * *(float *)(unaff_x19 + 100),fVar2 * *(float *)(unaff_x19 + 0x68),
                 fVar2 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


