/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$Init
ENTRY_POINT: 06d91bcc
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__Init(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  FUN_05212cf4();
  puVar2 = PTR_DAT_08e68f00;
  iVar1 = *(int *)(unaff_x19 + 0x18);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return;
    }
    lVar3 = FUN_05212a24();
    if (lVar3 == 0) {
LAB_06d91cb8:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *(long *)puVar2;
    uVar6 = *(undefined8 *)(lVar3 + 0x10);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar5);
    }
    uVar4 = FUN_085dfaac(uVar6,0,0);
    if ((uVar4 & 1) != 0) goto LAB_06d91c84;
    lVar3 = FUN_05212a24();
    if (lVar3 == 0) goto LAB_06d91cb8;
    lVar5 = *(long *)puVar2;
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar5);
    }
    uVar4 = FUN_085dfaac(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
LAB_06d91c84:
      FUN_052143ec();
    }
  } while( true );
}


