/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$set_Cursor
ENTRY_POINT: 051a38fc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__set_Cursor(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x19;
  
  FUN_055095dc();
  lVar4 = *unaff_x19;
  if (lVar4 == 0) {
LAB_051a3998:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar2 = *(uint *)(unaff_x19 + 1);
  uVar3 = *(uint *)(lVar4 + 0x20);
  uVar1 = uVar2;
  if (uVar2 <= uVar3) {
    uVar1 = uVar3;
  }
  do {
    uVar5 = uVar2;
    if (uVar1 == uVar5) {
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      *(uint *)(unaff_x19 + 1) = uVar3 + 1;
      goto LAB_051a3984;
    }
    lVar6 = *(long *)(lVar4 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar5 + 1;
    if (lVar6 == 0) goto LAB_051a3998;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar2 = uVar5 + 1;
  } while (*(int *)(lVar6 + 0x20 + (long)(int)uVar5 * 0x58) < 0);
  lVar4 = lVar6 + 0x20 + (long)(int)uVar5 * 0x58;
  lVar6 = *(long *)(lVar4 + 8);
  unaff_x19[3] = *(long *)(lVar4 + 0x10);
  unaff_x19[2] = lVar6;
  LeanTween__value(unaff_x19 + 3,0);
LAB_051a3984:
  return uVar5 < uVar3;
}


