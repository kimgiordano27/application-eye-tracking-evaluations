/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 09fe26fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup
          (uint param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 < *(uint *)(unaff_x20 + 0x18)) {
    lVar1 = unaff_x20 + (long)(int)param_1 * 0x40;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 0x38);
    uVar5 = *(undefined8 *)(lVar1 + 0x30);
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    unaff_x19[1] = *(undefined8 *)(lVar1 + 0x28);
    *unaff_x19 = uVar2;
    unaff_x19[3] = uVar6;
    unaff_x19[2] = uVar5;
    unaff_x19[5] = uVar4;
    unaff_x19[4] = uVar3;
    unaff_x19[7] = uVar8;
    unaff_x19[6] = uVar7;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


