/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 035e802c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *unaff_x24;
  
  FUN_021c9960();
  lVar2 = FUN_030b3264();
  if (lVar2 == 0) {
    *unaff_x21 = 0;
  }
  else {
    uVar5 = *unaff_x24;
    lVar3 = thunk_FUN_01c8fb4c(lVar2,uVar5);
    if (lVar3 == 0) goto FUN_035e8114;
    uVar5 = *unaff_x24;
    *unaff_x21 = lVar3;
    lVar3 = thunk_FUN_01c8fb4c(lVar2,uVar5);
    if (lVar3 == 0) goto FUN_035e8114;
  }
  thunk_FUN_01cc8040();
  puVar1 = PTR_DAT_03ce0cd0;
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  plVar4 = (long *)(*unaff_x20 + 0xb8);
  lVar2 = *plVar4;
  uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03ce0cd0);
  FUN_021cf464();
  lVar2 = FUN_030b3264(lVar2,uVar5,0);
  if (lVar2 == 0) {
    lVar3 = 0;
    *plVar4 = 0;
LAB_035e8128:
    thunk_FUN_01cc8040(plVar4,lVar3);
    *unaff_x20 = 0;
    thunk_FUN_01cc8040();
    FUN_035e7eb8();
    FUN_035e7eb8();
    return;
  }
  uVar5 = *(undefined8 *)puVar1;
  lVar3 = thunk_FUN_01c8fb4c(lVar2,uVar5);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)puVar1;
    *plVar4 = lVar3;
    lVar3 = thunk_FUN_01c8fb4c(lVar2,uVar5);
    if (lVar3 != 0) goto LAB_035e8128;
  }
FUN_035e8114:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cf54(lVar2,uVar5);
}


