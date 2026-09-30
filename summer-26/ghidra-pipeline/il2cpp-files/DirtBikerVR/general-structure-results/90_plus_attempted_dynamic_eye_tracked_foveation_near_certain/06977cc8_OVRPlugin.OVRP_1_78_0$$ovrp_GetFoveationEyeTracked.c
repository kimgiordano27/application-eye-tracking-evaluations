/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 06977cc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 142
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,float param_6,float param_7,float param_8,float param_9,long param_10)

{
  undefined8 *in_x9;
  long in_x10;
  long unaff_x19;
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float in_s16;
  float fVar4;
  undefined8 in_d17;
  undefined8 uVar5;
  float in_s18;
  float in_register_00005244;
  undefined8 in_d19;
  undefined8 in_register_00005268;
  float in_s20;
  undefined8 in_d22;
  undefined8 in_register_000052c8;
  float in_s23;
  
  uVar5 = CONCAT44((float)((ulong)in_d17 >> 0x20) - in_register_00005244,(float)in_d17 - in_s18);
  in_x9[1] = in_register_000052c8;
  *in_x9 = in_d22;
  in_x9[3] = in_register_00005268;
  in_x9[2] = in_d19;
  *(float *)(param_10 + 0x304) = in_s23 - in_s16;
  uVar3 = *(undefined8 *)(param_10 + 0x1f0);
  *(float *)(param_10 + 0x314) = in_s23 - in_s16;
  fVar4 = *(float *)(in_x10 + 0x61c);
  param_1[0x24] = uVar5;
  *(undefined8 *)(param_10 + 0x30c) = uVar5;
  fVar2 = *(float *)(param_10 + 0x1ec);
  *(undefined8 *)(param_10 + 0x340) = *param_1;
  *(float *)(param_10 + 0x328) = fVar2;
  *(undefined8 *)(param_10 + 0x334) = param_2;
  *(undefined8 *)(param_10 + 0x32c) = uVar3;
  *(undefined4 *)(param_10 + 0x348) = *(undefined4 *)(param_10 + 0x1e4);
  if ((in_s20 * in_s20 + param_5 + param_6 * param_6 < fVar4) ||
     (param_7 = (float)uVar3 - param_7, param_9 = (float)((ulong)uVar3 >> 0x20) - param_9,
     param_9 * param_9 + (fVar2 - param_8) * (fVar2 - param_8) + param_7 * param_7 < fVar4)) {
    *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x27c);
    *(undefined8 *)(unaff_x19 + 0x318) = *(undefined8 *)(unaff_x19 + 0x274);
  }
  else {
    uVar1 = FUN_07c8b244(0);
    *(undefined4 *)(unaff_x19 + 0x318) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x31c) = param_3;
    *(undefined4 *)(unaff_x19 + 800) = param_4;
    *(float *)(unaff_x19 + 0x324) = fVar2;
  }
  return;
}


