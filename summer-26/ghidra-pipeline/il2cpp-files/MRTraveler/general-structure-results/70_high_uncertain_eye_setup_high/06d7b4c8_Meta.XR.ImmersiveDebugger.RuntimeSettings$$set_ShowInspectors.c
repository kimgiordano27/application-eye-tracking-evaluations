/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ShowInspectors
ENTRY_POINT: 06d7b4c8
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


undefined8 Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowInspectors(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  long unaff_x25;
  long *plVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  plVar5 = *(long **)(unaff_x25 + 0xf00);
  lVar2 = FUN_06d755c4();
  *unaff_x20 = lVar2;
  thunk_FUN_03d233cc();
  lVar2 = unaff_x23[0x28];
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_085decd4(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (unaff_x23[0x28] == 0) goto LAB_06d7b590;
    uVar3 = UnityEngine_UI_Button_<OnFinishSubmit>d__9__MoveNext(unaff_x23[0x28],uVar1,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar3 = (**(code **)(*unaff_x23 + 600))();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (unaff_w21 == 0) {
    if (*unaff_x20 == 0) {
LAB_06d7b590:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085eb198(*unaff_x20,0);
    uVar3 = FUN_06d75adc();
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MaximumNumberOfLogEntries;
    }
  }
  uVar4 = 1;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MaximumNumberOfLogEntries:
  *unaff_x19 = 0;
  return uVar4;
}


