/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_FollowOverride
ENTRY_POINT: 06d7b4f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_RuntimeSettings__set_FollowOverride(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  undefined4 unaff_w24;
  long lVar3;
  
  lVar3 = unaff_x23[0x28];
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_085decd4(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (unaff_x23[0x28] == 0) goto LAB_06d7b590;
    uVar1 = UnityEngine_UI_Button_<OnFinishSubmit>d__9__MoveNext(unaff_x23[0x28],unaff_w24,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = (**(code **)(*unaff_x23 + 600))();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (unaff_w21 == 0) {
    if (*unaff_x20 == 0) {
LAB_06d7b590:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085eb198(*unaff_x20,0);
    uVar1 = FUN_06d75adc();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MaximumNumberOfLogEntries;
    }
  }
  uVar2 = 1;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MaximumNumberOfLogEntries:
  *unaff_x19 = 0;
  return uVar2;
}


