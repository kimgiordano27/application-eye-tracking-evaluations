/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05ff2a94
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(float param_1,float param_2,undefined8 param_3)

{
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long lVar1;
  float unaff_s8;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s12;
  
  FUN_06dd9bf4(SQRT(param_1 + param_2 + unaff_s12 * unaff_s12) / unaff_s8,param_3,0);
  FUN_05ff2b70();
  if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    fVar4 = *unaff_x20;
    fVar3 = unaff_x20[1];
    fVar2 = unaff_x20[2];
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_06dd9bf4(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2),lVar1,0);
    FUN_05ff2b70();
  }
  return;
}


