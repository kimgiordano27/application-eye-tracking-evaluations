/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 09fe277c
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


int UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  code *in_x9;
  long unaff_x19;
  
  iVar1 = (*in_x9)();
  plVar8 = *(long **)(unaff_x19 + 8);
  if (plVar8 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
    iVar3 = FUN_08d8d634(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x28) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(PTR_DAT_0ac09758 + 0x28));
    }
    iVar4 = FUN_08cc7150(unaff_x19 + 0x14,0);
    iVar5 = FUN_08cc7150(unaff_x19 + 0x15,0);
    iVar6 = FUN_08cc7150(unaff_x19 + 0x16,0);
    iVar7 = FUN_08cc7150(unaff_x19 + 0x17,0);
    return iVar7 + (iVar6 + (iVar5 + (iVar4 + (iVar3 + (iVar2 + iVar1 * 0x1cfaa2db) * 0x1cfaa2db) *
                                              0x1cfaa2db) * 0x1cfaa2db) * 0x1cfaa2db) * 0x1cfaa2db;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


