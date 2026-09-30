/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 060cf814
PROGRAM: beastcraft-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  
  FUN_060cf5cc();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x200);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar1 = FUN_062696b0(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_06264e10();
    uVar2 = FUN_0548df04(*(undefined8 *)
                          UnityEngine_InputSystem_Utilities_SavedStructState<InputUser_GlobalState>_TypeInfo
                         ,*(undefined8 *)
                           UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
                         ,uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*(long *)PTR_DAT_06a2ed98);
    }
    FUN_06225060(uVar2);
  }
  if (*(int *)(unaff_x19 + 0x148) == 2) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x60);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar1 = FUN_06267b6c(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x218) = 1;
    }
  }
  if ((((*(char *)(unaff_x19 + 0x154) == '\0') && (*(char *)(unaff_x19 + 0x160) == '\0')) &&
      (*(char *)(unaff_x19 + 0x170) == '\0')) &&
     (((*(char *)(unaff_x19 + 0x180) == '\0' && (*(char *)(unaff_x19 + 400) == '\0')) &&
      (*(char *)(unaff_x19 + 0x1a0) == '\0')))) {
    return;
  }
  FUN_060cf940();
  return;
}


