/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 05f5720c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(unaff_x21 + 0xb9e) & 1) == 0) {
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_f64__);
    *(undefined1 *)(unaff_x21 + 0xb9e) = 1;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_f64__;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  do {
    lVar3 = FUN_05119db8(lVar5);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02f45174(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar3,uVar6);
      }
    }
    lVar3 = FUN_02f418d8((long *)(unaff_x20 + 0x10),lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


