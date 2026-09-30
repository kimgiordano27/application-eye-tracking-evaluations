/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$get_Cursor
ENTRY_POINT: 051a38f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__get_Cursor(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool in_ZR;
  uint uVar4;
  long lVar5;
  long *unaff_x19;
  long lVar6;
  
  if (!in_ZR) {
    FUN_055095dc(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
LAB_051a3998:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  uVar2 = *(uint *)(unaff_x19 + 1);
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar1 = uVar2;
  if (uVar2 <= uVar3) {
    uVar1 = uVar3;
  }
  do {
    uVar4 = uVar2;
    if (uVar1 == uVar4) {
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      *(uint *)(unaff_x19 + 1) = uVar3 + 1;
      goto LAB_051a3984;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar4 + 1;
    if (lVar5 == 0) goto LAB_051a3998;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar5 + 0x20 + (long)(int)uVar4 * 0x58) < 0);
  lVar5 = lVar5 + 0x20 + (long)(int)uVar4 * 0x58;
  lVar6 = *(long *)(lVar5 + 8);
  unaff_x19[3] = *(long *)(lVar5 + 0x10);
  unaff_x19[2] = lVar6;
  LeanTween__value(unaff_x19 + 3,0);
LAB_051a3984:
  return uVar4 < uVar3;
}


