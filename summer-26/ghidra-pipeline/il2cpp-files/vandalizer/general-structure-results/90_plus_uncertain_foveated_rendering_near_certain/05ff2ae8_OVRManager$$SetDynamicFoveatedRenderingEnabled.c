/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05ff2ae8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled(void)

{
  float *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x22 + 0x7a9) = 1;
  fVar3 = *unaff_x20;
  fVar2 = unaff_x20[1];
  fVar1 = unaff_x20[2];
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (unaff_x21 != 0) {
    FUN_06dd9bf4(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1));
    FUN_05ff2b70();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


