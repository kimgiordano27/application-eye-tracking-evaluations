/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07c7a230
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               float param_6,float param_7,float param_8)

{
  long unaff_x19;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  
  fVar3 = (in_s18 + in_s16 + in_s17) - in_s19;
  fVar4 = (in_s20 + in_s22 + in_s23) - in_s21;
  fVar1 = (float)FUN_095169a8((param_7 + param_5 + param_6) - param_8,fVar3,fVar4,
                              ((param_4 - param_1) - param_2) - in_s24,0);
  fVar3 = fVar3 * DAT_01c768e0;
  fVar4 = fVar4 * DAT_01c768e0;
  uVar2 = FUN_095170f0(fVar1 * DAT_01c768e0,0);
  if (unaff_x19 != 0) {
    *(undefined4 *)(unaff_x19 + 0x30) = uVar2;
    *(float *)(unaff_x19 + 0x34) = fVar3;
    *(float *)(unaff_x19 + 0x38) = fVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


