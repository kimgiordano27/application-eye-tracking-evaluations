/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06ac0d20
PROGRAM: Waifu-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
                (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
                undefined1 param_6 [16],float param_7,float param_8)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  
  fVar5 = (param_8 + param_4 + param_7) * -2.0;
  param_2 = param_2 + unaff_s9 * fVar5;
  param_3 = param_3 + unaff_s8 * fVar5;
  fVar2 = (float)FUN_07a00c3c(0);
  fVar6 = (unaff_s8 * in_stack_00000008 + unaff_s10 * fVar2 + unaff_s9 * in_stack_00000000._4_4_) *
          -2.0;
  fVar2 = fVar2 + unaff_s10 * fVar6;
  fVar5 = (float)FUN_07a009b0(param_1 + unaff_s10 * fVar5,param_2,param_3,fVar2,
                              in_stack_00000000._4_4_ + unaff_s9 * fVar6,
                              in_stack_00000008 + unaff_s8 * fVar6,0);
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0xfd8) + 0xb8);
  fVar4 = *(float *)(lVar1 + 0x2c);
  fVar7 = *(float *)(lVar1 + 0x30);
  fVar3 = *(float *)(lVar1 + 0x28);
  fVar6 = (float)FUN_07a00400(*(undefined4 *)(lVar1 + 0x24),fVar3,fVar4,fVar7,0);
  return (param_2 * fVar4 + fVar2 * fVar6 + fVar5 * fVar7) - param_3 * fVar3;
}


