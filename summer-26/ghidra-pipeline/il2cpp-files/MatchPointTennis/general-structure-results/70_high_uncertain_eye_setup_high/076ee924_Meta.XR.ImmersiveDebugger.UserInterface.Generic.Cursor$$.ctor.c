/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$.ctor
ENTRY_POINT: 076ee924
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor___ctor
               (undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  
  FUN_094e9b40(param_2,*param_1,in_stack_00000018,0);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_044a54b4(7);
  }
  FUN_094d4178();
  uVar4 = 0;
  lVar5 = 0x20;
  while (lVar2 = *(long *)(unaff_x19 + 0x48), lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar3 = *(undefined8 *)(lVar2 + lVar5);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x48);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_076eeab8;
      FUN_0950a138(*(undefined8 *)(lVar2 + lVar5),0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x50);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_076eeab8;
    uVar3 = *(undefined8 *)(lVar2 + lVar5);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x50);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_076eeab8;
      FUN_0950a138(*(undefined8 *)(lVar2 + lVar5),0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_076eeab8;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + lVar5),0);
    lVar2 = *(long *)(unaff_x19 + 0x50);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_076eeab8;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar2 + lVar5),0);
    lVar5 = lVar5 + 8;
    uVar4 = uVar4 + 1;
    if (lVar5 == 0xa0) {
      FUN_0950a138(in_stack_00000000,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


