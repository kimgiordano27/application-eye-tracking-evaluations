/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$.ctor
ENTRY_POINT: 06368064
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel___ctor
               (ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  int unaff_w19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083e2140,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebb70,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebb90,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebba0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x923) = 1;
  }
  if (*(long *)(param_2 + 0x110) != 0) {
    uVar3 = FUN_0438e518(*(long *)(param_2 + 0x110),unaff_w19,DAT_083ebb70);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x110) != 0) {
      puVar5 = (uint *)(*(long *)(*(long *)(param_2 + 0x110) + 0x10) + (long)unaff_w19 * 0x88);
      uVar1 = puVar5[3];
      puVar5[3] = uVar1 - 1;
      uVar2 = *puVar5;
      if ((*(long *)(param_2 + 0x118) != 0) &&
         (lVar4 = FUN_05cb5ba0(*(long *)(param_2 + 0x118),unaff_w19,DAT_083e2140), lVar4 != 0)) {
        *(uint *)(lVar4 + 0x10) =
             *(uint *)(lVar4 + 0x10) & 0xfffffffe | uVar2 & 0 < (int)(uVar1 - 1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


