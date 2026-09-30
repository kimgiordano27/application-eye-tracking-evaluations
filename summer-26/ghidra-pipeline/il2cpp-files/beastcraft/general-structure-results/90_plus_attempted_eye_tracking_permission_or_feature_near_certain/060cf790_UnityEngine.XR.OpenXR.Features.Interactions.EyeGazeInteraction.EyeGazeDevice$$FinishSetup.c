/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 060cf790
PROGRAM: beastcraft-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_02e3ca1c(
              UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
              );
  FUN_02e3ca1c(UnityEngine_InputSystem_Utilities_SavedStructState<InputUser_GlobalState>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x213) = 1;
  uVar2 = thunk_FUN_02e78ab8(*unaff_x22);
  FUN_03f2ada4(uVar2,*unaff_x20);
                    /* try { // try from 060cf7c8 to 061cf7df has its CatchHandler @ 060cfc24 */
  (**(code **)(*unaff_x19 + 0x538))();
  FUN_06133d5c();
  lVar3 = FUN_06264e10();
  puVar1 = PTR_DAT_06a2ed80;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 060cf93c to 061cf96f has its CatchHandler @ 060cfc30 */
    FUN_02e3ccc4();
  }
                    /* try { // try from 060cf800 to 061cf803 has its CatchHandler @ 060cfbcc */
                    /* try { // try from 060cf804 to 061cf837 has its CatchHandler @ 060cfc34 */
  FUN_0391c49c(lVar3,1,*(undefined8 *)Fusion_RingBuffer<TimelinePoint>_TypeInfo);
  FUN_060cf5cc();
  lVar3 = unaff_x19[0x40];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_062696b0(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
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
  if ((int)unaff_x19[0x29] == 2) {
    lVar3 = unaff_x19[0xc];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar4 = FUN_06267b6c(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x43) = 1;
    }
  }
  if ((((*(char *)((long)unaff_x19 + 0x154) == '\0') && ((char)unaff_x19[0x2c] == '\0')) &&
      ((char)unaff_x19[0x2e] == '\0')) &&
     ((((char)unaff_x19[0x30] == '\0' && ((char)unaff_x19[0x32] == '\0')) &&
      ((char)unaff_x19[0x34] == '\0')))) {
    return;
  }
  FUN_060cf940();
  return;
}


