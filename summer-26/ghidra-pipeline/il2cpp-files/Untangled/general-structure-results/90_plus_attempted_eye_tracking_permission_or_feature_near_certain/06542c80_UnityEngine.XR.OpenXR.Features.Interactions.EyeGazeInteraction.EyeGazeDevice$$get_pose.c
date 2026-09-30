/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 06542c80
PROGRAM: Untangled-libil2cpp.so
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
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x593) = 1;
  puVar1 = PTR_DAT_06d045c0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar3 = FUN_0648b664(*(undefined8 *)puVar1,0);
  puVar2 = PTR_DAT_06d02a58;
  puVar1 = PTR_DAT_06d01eb0;
  if (lVar3 != 0) {
    FUN_03a02c24();
    uVar6 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar4 = (long *)FUN_056109c0(uVar6,0);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x298))();
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar6 = *(undefined8 *)PTR_DAT_06d01ea8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar4 = (long *)FUN_056109c0(uVar6,0);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06542d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar4 + 0x298))();
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


