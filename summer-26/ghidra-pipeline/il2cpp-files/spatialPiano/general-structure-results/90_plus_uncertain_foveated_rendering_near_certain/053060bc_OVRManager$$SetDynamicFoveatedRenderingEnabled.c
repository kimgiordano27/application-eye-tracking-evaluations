/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 053060bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  int *in_x10;
  long unaff_x19;
  
  (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xac) = 0;
    *(undefined4 *)(lVar1 + 0xb0) = 0;
    *(undefined1 *)(lVar1 + 0xa8) = 0;
    FUN_053060f8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


