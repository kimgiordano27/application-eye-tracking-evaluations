/*
FUNCTION_NAME: Oculus.Interaction.BecomeChildOfTargetOnStart$$InjectOptionalKeepWorldPosition
ENTRY_POINT: 05a58088
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;frame_behavior;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose
*/


undefined8 Oculus_Interaction_BecomeChildOfTargetOnStart__InjectOptionalKeepWorldPosition(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  undefined4 uStack000000000000000c;
  
  iVar1 = FUN_05aaf884();
  if ((iVar1 == 0) || (*(char *)(unaff_x20 + 0x24) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x34) = 1;
    *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
Oculus_Interaction_HandConfidenceVisual__set_Hand:
    if ((*(char *)(unaff_x19 + 0x28) != '\0') && (*(char *)(unaff_x19 + 0x34) == '\0')) {
      uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x2c);
      uVar3 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&stack0x0000000c);
      uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_0710ced0,uVar3,0);
      FUN_05ac4554(uVar3,*(undefined8 *)PTR_DAT_0710ce38);
      FUN_05a57368();
    }
    uVar3 = 0;
  }
  else {
    fVar4 = *(float *)(unaff_x19 + 0x38) * DAT_012e3cbc;
    *(float *)(unaff_x19 + 0x38) = fVar4;
    if (iVar1 != 0x11) {
      iVar1 = *(int *)(unaff_x19 + 0x30) + -1;
      *(int *)(unaff_x19 + 0x30) = iVar1;
      if (iVar1 < 1) goto Oculus_Interaction_HandConfidenceVisual__set_Hand;
      FUN_05ab9c3c();
      fVar4 = *(float *)(unaff_x19 + 0x38);
    }
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070d1200);
    FUN_069deb70(fVar4,uVar2,0);
    uVar3 = 1;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  return uVar3;
}


