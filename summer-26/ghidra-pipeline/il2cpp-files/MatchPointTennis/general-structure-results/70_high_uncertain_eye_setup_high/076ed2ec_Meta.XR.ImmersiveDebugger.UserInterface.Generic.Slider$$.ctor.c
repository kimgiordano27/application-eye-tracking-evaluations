/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$.ctor
ENTRY_POINT: 076ed2ec
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider___ctor(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  int unaff_w19;
  int unaff_w20;
  long unaff_x22;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2f3d8);
    FUN_04447ba8(PTR_DAT_09f2f3e0);
    FUN_04447ba8(PTR_DAT_09f2f3e8);
    FUN_04447ba8(PTR_DAT_09f2f3f0);
    FUN_04447ba8(PTR_DAT_09f2f1e8);
    *(undefined1 *)(unaff_x22 + 0xeba) = 1;
  }
  puVar5 = PTR_DAT_09f2f3f0;
  puVar4 = PTR_DAT_09f2f3e8;
  puVar3 = PTR_DAT_09f2f3e0;
  puVar2 = PTR_DAT_09f2f3d8;
  puVar1 = PTR_DAT_09f2f1e8;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  while( true ) {
    if (unaff_w19 < unaff_w20) {
      return;
    }
    if (*(long *)(param_2 + 0xa8) == 0) break;
    lVar7 = FUN_0731af34(*(long *)(param_2 + 0xa8),unaff_w20,*(undefined8 *)puVar4);
    if (*(long *)(param_2 + 0x88) == 0) break;
    lVar9 = *(long *)(param_2 + 0x80);
    uVar6 = FUN_071c07b4(*(long *)(param_2 + 0x88),unaff_w20,*(undefined8 *)puVar3);
    if (lVar9 == 0) break;
    uVar8 = FUN_05badb74(lVar9,uVar6,*(undefined8 *)puVar5);
    if (*(long *)(param_2 + 0x90) == 0) {
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
    }
    else {
      auVar10 = FUN_071c0648(*(long *)(param_2 + 0x90),unaff_w20,*(undefined8 *)puVar2);
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_06138b2c(&stack0x00000018,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar1);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000028;
    }
    if (lVar7 == 0) break;
    FUN_076e65d8(lVar7,uVar8);
    if (*(char *)(param_2 + 0xb0) == '\0') {
      FUN_076e6a5c(lVar7);
    }
    else {
      FUN_076e69dc(lVar7);
    }
    unaff_w20 = unaff_w20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


