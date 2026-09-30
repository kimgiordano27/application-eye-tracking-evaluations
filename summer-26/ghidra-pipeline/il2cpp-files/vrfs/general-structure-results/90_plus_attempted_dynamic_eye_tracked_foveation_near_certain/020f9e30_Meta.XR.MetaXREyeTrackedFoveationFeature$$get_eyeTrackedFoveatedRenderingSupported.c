/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 020f9e30
PROGRAM: vrfs-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported
               (long param_1,float param_2,float param_3,float param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xbb0);
  param_3 = param_3 * fVar2;
  param_4 = param_4 * fVar2;
  uVar1 = FUN_04f139a8(param_2 * fVar2,0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined4 *)(unaff_x19 + 0x20) = uVar1;
    *(float *)(unaff_x19 + 0x24) = param_3;
    *(float *)(unaff_x19 + 0x28) = param_4;
    *(float *)(unaff_x19 + 0x2c) = fVar2;
    *(long *)(unaff_x20 + 0x30) = unaff_x19;
    thunk_FUN_01656ef8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


