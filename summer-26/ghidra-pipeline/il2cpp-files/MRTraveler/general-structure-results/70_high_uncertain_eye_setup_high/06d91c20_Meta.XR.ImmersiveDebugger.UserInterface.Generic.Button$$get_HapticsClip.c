/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$get_HapticsClip
ENTRY_POINT: 06d91c20
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__get_HapticsClip(long param_1)

{
  ulong uVar1;
  long lVar2;
  int unaff_w20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  long *unaff_x23;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(param_1);
    }
    uVar1 = FUN_085dfaac(unaff_x21,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_05212a24();
      if (lVar2 == 0) {
LAB_06d91cb8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x23);
      }
      uVar1 = FUN_085dfaac(uVar3,0,0);
      if ((uVar1 & 1) != 0) goto LAB_06d91c84;
    }
    else {
LAB_06d91c84:
      FUN_052143ec();
    }
    unaff_w20 = unaff_w20 + -1;
    if (unaff_w20 < 0) {
      return;
    }
    lVar2 = FUN_05212a24();
    if (lVar2 == 0) goto LAB_06d91cb8;
    param_1 = *unaff_x23;
    unaff_x21 = *(undefined8 *)(lVar2 + 0x10);
  } while( true );
}


