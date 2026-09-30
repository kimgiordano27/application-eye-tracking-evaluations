/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass42_0$$<GetHierarchyItemButton>b__1
ENTRY_POINT: 04a3db14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass42_0__<GetHierarchyItemButton>b__1
               (long param_1)

{
  undefined4 uVar1;
  uint in_w8;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  
  if (0 < (int)in_w8) {
    uVar2 = 0;
    do {
      if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      FUN_04a3f3e0();
      in_w8 = *(uint *)(param_1 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)in_w8);
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


