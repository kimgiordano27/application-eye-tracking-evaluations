/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05ba62bc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar1 = *(long *)(*unaff_x20 + 0xb8);
    fVar4 = *(float *)(lVar1 + 0x28);
    fVar3 = *(float *)(lVar1 + 0x2c);
    fVar5 = *(float *)(lVar1 + 0x24);
    fVar2 = (float)FUN_06a577c0(*(long *)(unaff_x19 + 0x20),0);
    fVar2 = fVar2 * 0.5 + *(float *)(unaff_x19 + 0x28);
    FUN_06a63558(unaff_s8 + fVar5 * fVar2,unaff_s9 + fVar4 * fVar2,unaff_s10 + fVar3 * fVar2,
                 unaff_x19 + 0x50,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


