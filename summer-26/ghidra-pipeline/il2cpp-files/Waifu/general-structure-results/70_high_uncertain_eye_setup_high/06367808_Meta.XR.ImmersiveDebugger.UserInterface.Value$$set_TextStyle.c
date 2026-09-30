/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Value$$set_TextStyle
ENTRY_POINT: 06367808
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Value__set_TextStyle(long param_1)

{
  int iVar1;
  int iVar2;
  bool in_ZR;
  undefined8 *in_x9;
  undefined8 uVar3;
  undefined4 *in_x10;
  undefined4 in_w11;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  ulong uVar4;
  undefined4 unaff_w27;
  int unaff_w28;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (in_ZR) {
    if (*(long *)(unaff_x20 + 0xe0) == 0) goto LAB_06367a00;
    uVar4 = *(ulong *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x24);
    uVar3 = *(undefined8 *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x34);
    FUN_042a5698(*(long *)(unaff_x20 + 0xe0),unaff_w27,*(undefined8 *)(unaff_x25 + 0x150));
    if (*(long *)(unaff_x20 + 0xe8) == 0) goto LAB_06367a00;
    FUN_042a5698(*(long *)(unaff_x20 + 0xe8),unaff_w27,*(undefined8 *)(unaff_x25 + 0x150));
    if (*(long *)(unaff_x20 + 0xf0) == 0) goto LAB_06367a00;
    FUN_042a64a4(*(long *)(unaff_x20 + 0xf0),unaff_w27,DAT_083eb198);
    if (0 < iVar1) {
      if (*(long *)(unaff_x20 + 0xf8) == 0) goto LAB_06367a00;
      FUN_0429c8a4(*(long *)(unaff_x20 + 0xf8),uVar4 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf70 + 0x20) + 0xc0) + 0x60));
      if (*(long *)(unaff_x20 + 0x100) == 0) goto LAB_06367a00;
      FUN_0429e43c(*(long *)(unaff_x20 + 0x100),uVar4 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eaff8 + 0x20) + 0xc0) + 0x60));
    }
    unaff_x26 = &DAT_083eb000;
    if (0 < iVar2) {
      if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_06367a00;
      FUN_0429bad8(*(long *)(unaff_x20 + 0x108),uVar3,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf38 + 0x20) + 0xc0) + 0x60));
    }
    if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06367a00;
    FUN_0438f394(*(long *)(unaff_x20 + 0xd0),unaff_w23,DAT_083ebbf8);
    if (*(long *)(unaff_x20 + 0xd8) == 0) goto LAB_06367a00;
    FUN_05cad404(*(long *)(unaff_x20 + 0xd8),unaff_w24,DAT_083e1ae8);
  }
  else {
    *in_x10 = in_w11;
    *(undefined4 *)(in_x9 + 1) = in_stack_00000018;
    *in_x9 = in_stack_00000010;
  }
  if (*(long *)(unaff_x20 + 0x120) != 0) {
    FUN_042a1b6c(*(long *)(unaff_x20 + 0x120),unaff_w22,DAT_083eb0e8);
    if (*(long *)(unaff_x20 + 0x128) != 0) {
      FUN_042a5698(*(long *)(unaff_x20 + 0x128),unaff_w22,*(undefined8 *)(unaff_x25 + 0x150));
      if (*(long *)(unaff_x20 + 0x130) != 0) {
        FUN_042a5698(*(long *)(unaff_x20 + 0x130),unaff_w22,*(undefined8 *)(unaff_x25 + 0x150));
        if (*(long *)(unaff_x20 + 0x138) != 0) {
          FUN_042a64a4(*(long *)(unaff_x20 + 0x138),unaff_w22,unaff_x26[0x33]);
          if (0 < unaff_w28) {
            if (*(long *)(unaff_x20 + 0x140) == 0) goto LAB_06367a00;
            FUN_0429bad8(*(long *)(unaff_x20 + 0x140),unaff_w21,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf38 + 0x20) + 0xc0) + 0x60));
          }
          if (*(long *)(unaff_x20 + 0x118) != 0) {
            FUN_05cb7290(*(long *)(unaff_x20 + 0x118),unaff_w19,DAT_083e2138);
            if (*(long *)(unaff_x20 + 0x110) != 0) {
              FUN_0438e430(*(long *)(unaff_x20 + 0x110),unaff_w19,DAT_083ebb78);
              return;
            }
          }
        }
      }
    }
  }
LAB_06367a00:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


