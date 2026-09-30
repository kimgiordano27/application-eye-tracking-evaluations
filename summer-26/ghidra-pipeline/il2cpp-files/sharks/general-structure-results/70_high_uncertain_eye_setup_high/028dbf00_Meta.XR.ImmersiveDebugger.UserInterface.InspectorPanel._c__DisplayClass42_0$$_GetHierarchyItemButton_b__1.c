/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass42_0$$<GetHierarchyItemButton>b__1
ENTRY_POINT: 028dbf00
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass42_0__<GetHierarchyItemButton>b__1
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000000;
  long in_stack_00000008;
  
  uVar3 = FUN_02171fa4();
  if ((uVar3 & 1) != 0) {
    if (in_stack_00000008 == 0) goto LAB_028dbff4;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    (**(code **)(in_stack_00000008 + 0x18))
              (*(undefined8 *)(in_stack_00000008 + 0x40),uVar1,uVar2,
               *(undefined8 *)(in_stack_00000008 + 0x28));
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
  if (lVar4 != 0) {
    uVar3 = FUN_02171fa4(lVar4,*unaff_x19,unaff_x19[1]);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000000 == 0) goto LAB_028dbff4;
      (**(code **)(in_stack_00000000 + 0x18))
                (*(undefined8 *)(in_stack_00000000 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000000 + 0x28));
    }
    return 1;
  }
LAB_028dbff4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


