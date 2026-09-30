/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 06943f4c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose
               (float param_1,float param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  
  pcVar3 = *(code **)(*unaff_x19 + 600);
  uVar1 = *(undefined8 *)(*unaff_x19 + 0x260);
  *(float *)(unaff_x19 + 7) = unaff_s12 - unaff_s9;
  *(float *)(unaff_x19 + 0x12) = param_1 / param_2;
  fVar4 = (float)(*pcVar3)(unaff_s12 - unaff_s9,0,param_3,uVar1);
  lVar2 = unaff_x19[0x11];
  fVar5 = *(float *)(unaff_x19 + 8) + ((unaff_s9 + unaff_s12 + fVar4) / unaff_s13) * unaff_s8;
  fVar4 = *(float *)(unaff_x19 + 0x20) * DAT_015c5d4c;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  fVar6 = 1.0;
  fVar7 = unaff_s10;
  if (0.0 <= fVar5) {
    fVar7 = fVar4;
  }
  fVar5 = fVar7 / *(float *)(unaff_x19 + 0x20);
  *(float *)(unaff_x19 + 8) = fVar7;
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  if (0.0 <= fVar5) {
    unaff_s10 = fVar4;
  }
  *(float *)(unaff_x19 + 0x26) = unaff_s10;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x10) != '\0') {
      fVar6 = *(float *)(lVar2 + 0x20);
    }
    fVar5 = *(float *)(unaff_x19 + 0x12) / (*(float *)((long)unaff_x19 + 0x9c) * fVar6);
    fVar4 = 1.0;
    if (fVar5 <= 1.0) {
      fVar4 = fVar5;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar5) {
      fVar7 = fVar4;
    }
    *(float *)((long)unaff_x19 + 0x13c) = fVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


