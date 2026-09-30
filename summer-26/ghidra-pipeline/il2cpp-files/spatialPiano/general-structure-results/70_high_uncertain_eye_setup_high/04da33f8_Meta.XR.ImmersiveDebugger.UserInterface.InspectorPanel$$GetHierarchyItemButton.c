/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$GetHierarchyItemButton
ENTRY_POINT: 04da33f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__GetHierarchyItemButton
               (undefined4 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  lVar3 = *(long *)(unaff_x19 + 0x50);
  uStack000000000000000c = param_1;
  if (lVar3 != 0) {
    in_stack_00000008 =
         (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    uVar1 = thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18)
                               ,&stack0x00000008);
    uVar2 = FUN_050f19e8(&stack0x0000000c,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50));
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x58);
      if (lVar3 == 0) goto LAB_04da3494;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),uStack000000000000000c,*(undefined8 *)(lVar3 + 0x28))
      ;
      lVar3 = *(long *)(unaff_x19 + 0x60);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      }
    }
    return;
  }
LAB_04da3494:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


