/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$OnReady
ENTRY_POINT: 0634eb4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__OnReady(void)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  uint unaff_w21;
  undefined4 unaff_w24;
  int unaff_w25;
  ulong unaff_x27;
  undefined4 unaff_s8;
  undefined4 uStack0000000000000010;
  uint uStack0000000000000014;
  undefined4 in_stack_00000018;
  ulong in_stack_00000068;
  
  uVar2 = FUN_0429eef4();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_042a5368(*(long *)(unaff_x19 + 0x38),unaff_w24,DAT_083eb138);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 != 0) {
      FUN_0405dc8c(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),unaff_x27 >> 0x20);
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 != 0) {
        FUN_0405d584(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),uVar2 >> 0x20);
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          uStack0000000000000014 = unaff_w21 & 1;
          uStack0000000000000010 = unaff_w20;
          in_stack_00000018 = unaff_s8;
          uVar1 = System_Collections_Generic_HashSet<OVRTask<OVRSceneManager_Metrics>>__get_Comparer
                            (*(long *)(unaff_x19 + 0x40),&stack0x00000010,DAT_083ebaa0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            if (0 < unaff_w25) {
              lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x10);
              in_stack_00000068 = in_stack_00000068 >> 0x20;
              do {
                *(undefined2 *)(lVar3 + (long)(int)in_stack_00000068 * 2) = uVar1;
                unaff_w25 = unaff_w25 + -1;
                in_stack_00000068 = (ulong)((int)in_stack_00000068 + 1);
              } while (unaff_w25 != 0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


