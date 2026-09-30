/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 05d68c0c
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(undefined8 param_1)

{
  long lVar1;
  long in_x9;
  int in_w10;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x23;
  
  if (in_w10 == 0) {
    thunk_FUN_02cd038c(param_1);
    in_x9 = *(long *)(*unaff_x23 + 0xb8);
  }
  uVar2 = *(undefined8 *)(in_x9 + 8);
  uVar3 = *(undefined8 *)System_Func<FieldInfo,_int>_TypeInfo;
  uVar4 = *(undefined8 *)System_Func<FieldInfo,_Enum>_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_065dca00 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_057c4df0(uVar2,uVar3,uVar4,0);
  lVar1 = *unaff_x23;
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar1);
    lVar1 = *unaff_x23;
  }
  *unaff_x19 = **(undefined8 **)(lVar1 + 0xb8);
  return;
}


