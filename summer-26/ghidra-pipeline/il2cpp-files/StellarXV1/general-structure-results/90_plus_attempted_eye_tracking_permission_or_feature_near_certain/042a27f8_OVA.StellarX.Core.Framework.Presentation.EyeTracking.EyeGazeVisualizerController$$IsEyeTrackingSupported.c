/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizerController$$IsEyeTrackingSupported
ENTRY_POINT: 042a27f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 110
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizerController__IsEyeTrackingSupported
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,float param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = _UNK_01aef438;
  uVar1 = _DAT_01aef430;
  auVar3 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_7 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_7 + 0x40) = uVar2;
  *(undefined8 *)(param_7 + 0x38) = uVar1;
  *(long *)(param_7 + 0x74) = auVar3._8_8_;
  *(long *)(param_7 + 0x6c) = auVar3._0_8_;
  *(undefined4 *)(param_7 + 0x88) = 0xffffffff;
  FUN_076bca34(param_7,0);
  *(undefined4 *)(param_7 + 0x10) = param_1;
  *(undefined4 *)(param_7 + 0x14) = param_2;
  *(undefined4 *)(param_7 + 0x18) = param_3;
  *(undefined4 *)(param_7 + 0x1c) = param_4;
  *(undefined4 *)(param_7 + 0x20) = param_5;
  *(float *)(param_7 + 0x24) = param_6;
  *(undefined1 *)(param_7 + 0x4a) = 0;
  *(undefined1 *)(param_7 + 0x48) = 0;
  if (param_6 != 0.0) {
    *(undefined1 *)(param_7 + 0x48) = 1;
    FUN_042a2898(param_7);
    return;
  }
  return;
}


