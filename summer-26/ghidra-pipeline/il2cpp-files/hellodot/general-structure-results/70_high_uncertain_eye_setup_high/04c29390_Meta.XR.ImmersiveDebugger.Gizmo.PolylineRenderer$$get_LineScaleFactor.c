/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$get_LineScaleFactor
ENTRY_POINT: 04c29390
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__get_LineScaleFactor(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1428);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1770);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1778);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1780);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de2d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1788);
  *(undefined1 *)(unaff_x20 + 0x6b9) = 1;
  puVar2 = PTR_DAT_065e1428;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar9 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      unaff_x19[0x14] = 0;
      unaff_x19[0x15] = 0;
      *unaff_x19 = -1;
      _in_stack_00000010 = ZEXT816(0);
      goto LAB_04c29528;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar10 = *(long **)(lVar9 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar10;
    uVar5 = *(undefined8 *)(unaff_x19 + 10);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065de2d0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04c29498;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065de2d0,0);
LAB_04c29498:
    lVar6 = (*(code *)*puVar4)(plVar10,uVar5,uVar1,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000010 = FUN_04fa5130(lVar6,0,0);
    uVar7 = FUN_04e5bb90(&stack0x00000010,0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000010;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030c2fd4(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  FUN_04e5bbac(&stack0x00000010,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar9 = FUN_054dabfc(lVar9,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xc),0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar11 = FUN_0404bcb8(lVar9,0,*(undefined8 *)PTR_DAT_065e1788);
  uVar7 = FUN_044a8fc8();
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = auVar11;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030b44e8(unaff_x19 + 2);
    return;
  }
LAB_04c29528:
  uVar5 = FUN_044a9014();
  *unaff_x19 = -2;
  puVar3 = PTR_DAT_065e1790;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


