/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 09fe26e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 114
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose
          (undefined1 param_1 [16])

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 in_w3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  if ((unaff_x20 == 0) || (*(int *)(unaff_x20 + 0x18) == 0)) {
    uVar3 = 0;
    uStack0000000000000010 = uStack0000000000000000;
    uStack0000000000000018 = uStack0000000000000008;
    uStack0000000000000020 = uStack0000000000000000;
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000030 = uStack0000000000000000;
    uStack0000000000000038 = uStack0000000000000008;
  }
  else {
    uVar2 = FUN_09fc9d18(in_w3,0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    uVar3 = 1;
    lVar1 = unaff_x20 + (long)(int)uVar2 * 0x40;
    uStack0000000000000008 = *(undefined8 *)(lVar1 + 0x28);
    uStack0000000000000000 = *(undefined8 *)(lVar1 + 0x20);
    uStack0000000000000018 = *(undefined8 *)(lVar1 + 0x38);
    uStack0000000000000010 = *(undefined8 *)(lVar1 + 0x30);
    uStack0000000000000028 = *(undefined8 *)(lVar1 + 0x48);
    uStack0000000000000020 = *(undefined8 *)(lVar1 + 0x40);
    uStack0000000000000038 = *(undefined8 *)(lVar1 + 0x58);
    uStack0000000000000030 = *(undefined8 *)(lVar1 + 0x50);
  }
  unaff_x19[1] = uStack0000000000000008;
  *unaff_x19 = uStack0000000000000000;
  unaff_x19[3] = uStack0000000000000018;
  unaff_x19[2] = uStack0000000000000010;
  unaff_x19[5] = uStack0000000000000028;
  unaff_x19[4] = uStack0000000000000020;
  unaff_x19[7] = uStack0000000000000038;
  unaff_x19[6] = uStack0000000000000030;
  return uVar3;
}


