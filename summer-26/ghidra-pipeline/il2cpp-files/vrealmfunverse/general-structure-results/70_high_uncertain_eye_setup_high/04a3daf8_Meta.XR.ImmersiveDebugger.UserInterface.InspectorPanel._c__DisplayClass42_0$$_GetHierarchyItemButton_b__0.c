/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass42_0$$<GetHierarchyItemButton>b__0
ENTRY_POINT: 04a3daf8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass42_0__<GetHierarchyItemButton>b__0
               (void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar6;
  long unaff_x24;
  
  if (unaff_x24 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06320988);
    uVar3 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
    FUN_04c82410(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar3);
  }
  lVar2 = thunk_FUN_02b79548();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar6 = 0;
    uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      FUN_04a3f3e0();
      uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar1 = FUN_04c8d044(*unaff_x21,*(undefined8 *)PTR_DAT_06320978,0);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
  thunk_FUN_02bb0e9c();
  return;
}


