/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas$$set_Panel
ENTRY_POINT: 076ee9c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas__set_Panel(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  while( true ) {
    FUN_0950a138(*(undefined8 *)(param_1 + unaff_x22),0);
    do {
      lVar2 = *(long *)(unaff_x19 + 0x50);
      if (lVar2 == 0) goto LAB_076eeab4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_076eeab8;
      uVar3 = *(undefined8 *)(lVar2 + unaff_x22);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar1 = FUN_09531730(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x50);
        if (lVar2 == 0) goto LAB_076eeab4;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_076eeab8;
        FUN_0950a138(*(undefined8 *)(lVar2 + unaff_x22),0);
      }
      lVar2 = *(long *)(unaff_x19 + 0x48);
      if (lVar2 == 0) goto LAB_076eeab4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_076eeab8;
      *(undefined8 *)(lVar2 + unaff_x22) = 0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + unaff_x22),0);
      lVar2 = *(long *)(unaff_x19 + 0x50);
      if (lVar2 == 0) goto LAB_076eeab4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_076eeab8;
      *(undefined8 *)(lVar2 + unaff_x22) = 0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + unaff_x22),0);
      unaff_x22 = unaff_x22 + 8;
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x22 == 0xa0) {
        FUN_0950a138(in_stack_00000000,0);
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x48);
      if (lVar2 == 0) goto LAB_076eeab4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_076eeab8;
      uVar3 = *(undefined8 *)(lVar2 + unaff_x22);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar1 = FUN_09531730(uVar3,0,0);
    } while ((uVar1 & 1) == 0);
    param_1 = *(long *)(unaff_x19 + 0x48);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  }
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


