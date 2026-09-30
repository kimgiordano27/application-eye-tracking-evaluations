/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawWireCube
ENTRY_POINT: 06379270
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawWireCube(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined1 auVar6 [16];
  undefined4 uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    auVar6 = FUN_042b2858(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x21 + 0x18),DAT_083eb400
                         );
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 != 0) {
      FUN_0405dcf4(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),param_1 >> 0x20);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if (lVar4 != 0) {
        FUN_0405dd5c(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                     auVar6._0_8_ >> 0x20);
        if (*(long *)(unaff_x20 + 0x28) != 0) {
          uStack000000000000000c = unaff_w22 & 1;
          uStack0000000000000008 = unaff_w19;
          in_stack_00000010 = param_1;
          in_stack_00000018 = param_2;
          _in_stack_00000020 = auVar6;
          uVar2 = FUN_0438d348(*(long *)(unaff_x20 + 0x28),&stack0x00000008,DAT_083ebae0);
          if (*(long *)(unaff_x20 + 0x30) != 0) {
            auVar6 = FUN_0429e128(*(long *)(unaff_x20 + 0x30),*(undefined4 *)(unaff_x21 + 0x18),
                                  DAT_083eafe0);
            uVar3 = auVar6._8_8_;
            if (*(long *)(unaff_x20 + 0x30) != 0) {
              if (0 < auVar6._8_4_) {
                lVar4 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x10);
                uVar5 = auVar6._0_8_ >> 0x20;
                do {
                  *(undefined4 *)(lVar4 + (long)(int)uVar5 * 4) = unaff_w19;
                  uVar1 = (int)uVar3 - 1;
                  uVar3 = (ulong)uVar1;
                  uVar5 = (ulong)((int)uVar5 + 1);
                } while (uVar1 != 0);
              }
              return uVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


