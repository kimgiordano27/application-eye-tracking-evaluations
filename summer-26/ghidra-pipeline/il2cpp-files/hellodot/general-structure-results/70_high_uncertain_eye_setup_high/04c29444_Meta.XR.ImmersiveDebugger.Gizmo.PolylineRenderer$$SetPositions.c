/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetPositions
ENTRY_POINT: 04c29444
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetPositions(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0x2d0)) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04c29498;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04c29498:
  lVar4 = (*(code *)*puVar2)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000010 = FUN_04fa5130(lVar4,0,0);
  uVar5 = FUN_04e5bb90(&stack0x00000010,0);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000010;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
                    /* try { // try from 04c295e0 to 04d2964f has its CatchHandler @ 04c295e0
                       catch() { ... } // from try @ 04c295e0 with catch @ 04c295e0
                       catch() { ... } // from try @ 04c296c8 with catch @ 04c295e0
                       catch() { ... } // from try @ 04c2974c with catch @ 04c295e0 */
    FUN_030c2fd4(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    FUN_04e5bbac(&stack0x00000010,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = FUN_054dabfc();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar7 = FUN_0404bcb8(lVar4,0,*(undefined8 *)PTR_DAT_065e1788);
    uVar5 = FUN_044a8fc8();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = auVar7;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b44e8(unaff_x19 + 2);
    }
    else {
      uVar3 = FUN_044a9014();
      *unaff_x19 = 0xfffffffe;
      puVar1 = PTR_DAT_065e1790;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04266690(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
    }
  }
  return;
}


