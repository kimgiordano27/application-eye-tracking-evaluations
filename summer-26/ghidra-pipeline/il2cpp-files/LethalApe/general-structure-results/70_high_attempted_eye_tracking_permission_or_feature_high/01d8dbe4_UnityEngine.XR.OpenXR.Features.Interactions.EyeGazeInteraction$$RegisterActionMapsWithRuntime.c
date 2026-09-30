/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 01d8dbe4
PROGRAM: LethalApe-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
          (long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x22;
  long *plVar5;
  
  plVar5 = (long *)*unaff_x22;
  if ((*(byte *)(unaff_x19 + 0x9f3) & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bcd000);
    *(undefined1 *)(unaff_x19 + 0x9f3) = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0xd0);
  uVar4 = *puVar3;
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
  }
  uVar1 = FUN_01ed7068(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0xd8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f8();
    }
    *puVar3 = *(undefined8 *)(lVar2 + 0x20);
    thunk_FUN_00a502ec(puVar3);
  }
  return *puVar3;
}


