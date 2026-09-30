/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$get_Cursor
ENTRY_POINT: 05619fa0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__get_Cursor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x4d0));
  thunk_FUN_032e1da0(PTR_DAT_072833d8);
  *(undefined1 *)(unaff_x20 + 0x89e) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_x19 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_032a55a4();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
  }
  puVar1 = PTR_DAT_07283398;
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if (lVar8 != 0) {
    if (*(int *)(*(long *)PTR_DAT_07283398 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar8 = FUN_068aca60(lVar8,0);
    puVar4 = PTR_DAT_072833d8;
    puVar3 = PTR_DAT_072833c0;
    puVar2 = PTR_DAT_072833b8;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_03d0aee8(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_072833d0);
    while (uVar6 = System_Collections_Generic_ArraySortHelper<KeyValuePair<Rect,_object>>__Swap
                             (&stack0x00000008,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar7 = FUN_068b177c(in_stack_00000018,lVar5,1,0,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_068aba94(uVar7,0);
    }
    FUN_052d3d34(&stack0x00000008,*(undefined8 *)puVar2);
    FUN_03b965a4(lVar8,*(undefined8 *)puVar4);
  }
  return;
}


