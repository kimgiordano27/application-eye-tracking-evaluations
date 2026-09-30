/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0600fcb0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
               (float param_1,float param_2,undefined1 param_3 [16],undefined8 param_4)

{
  float *pfVar1;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  
  param_1 = SQRT(param_1);
  if (param_1 <= param_2) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar8 = *pfVar1;
    fVar9 = pfVar1[1];
    param_1 = pfVar1[2];
  }
  else {
    fVar8 = unaff_s8 / param_1;
    fVar9 = unaff_s9 / param_1;
    param_1 = unaff_s10 / param_1;
  }
  uVar7 = (ulong)(uint)param_1;
  uVar5 = (ulong)(uint)fVar9;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar3 = FUN_06030ebc(fVar8,uVar5,uVar7,unaff_x20 + 3,0);
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  FUN_06e67e1c(uVar2,uVar4,uVar6,uVar3,uVar5,uVar7,param_4);
  return;
}


