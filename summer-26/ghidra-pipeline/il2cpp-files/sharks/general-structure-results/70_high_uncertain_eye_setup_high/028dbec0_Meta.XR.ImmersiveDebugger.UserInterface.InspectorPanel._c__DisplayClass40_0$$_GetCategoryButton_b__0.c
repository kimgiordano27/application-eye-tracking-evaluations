/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass40_0$$<GetCategoryButton>b__0
ENTRY_POINT: 028dbec0
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass40_0__<GetCategoryButton>b__0
          (ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  long in_stack_00000000;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0xb8) + 0x48);
  if (lVar5 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    uVar4 = FUN_02171fa4(lVar5,uVar1,uVar2,&stack0x00000008,
                         *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x120));
    lVar5 = in_stack_00000008;
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000008 == 0) goto LAB_028dbff4;
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar5 != 0) {
      uVar4 = FUN_02171fa4(lVar5,*unaff_x19,unaff_x19[1]);
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000000 == 0) goto LAB_028dbff4;
        (**(code **)(in_stack_00000000 + 0x18))
                  (*(undefined8 *)(in_stack_00000000 + 0x40),*unaff_x19,unaff_x19[1],
                   *(undefined8 *)(in_stack_00000000 + 0x28));
      }
      return 1;
    }
  }
LAB_028dbff4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


