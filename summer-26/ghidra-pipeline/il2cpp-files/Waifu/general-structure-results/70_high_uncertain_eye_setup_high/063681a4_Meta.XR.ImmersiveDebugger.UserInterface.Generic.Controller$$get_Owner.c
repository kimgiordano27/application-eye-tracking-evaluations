/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$get_Owner
ENTRY_POINT: 063681a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__get_Owner(void)

{
  int unaff_w19;
  long unaff_x20;
  long lVar1;
  long unaff_x25;
  undefined1 unaff_w26;
  uint in_stack_00000088;
  undefined8 in_stack_00000090;
  
  FUN_0335b6c8(&DAT_083ebb90,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebba0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x25 + 0x924) = unaff_w26;
  memset(&stack0x00000088,0,0x88);
  if (*(long *)(unaff_x20 + 0x110) != 0) {
    memmove(&stack0x00000088,
            (void *)(*(long *)(*(long *)(unaff_x20 + 0x110) + 0x10) + (long)unaff_w19 * 0x88),0x88);
    FUN_063682dc(&stack0x00000088);
    in_stack_00000088 = in_stack_00000088 | 0x3000000;
    lVar1 = *(long *)(unaff_x20 + 0x110);
    memcpy(&stack0x00000000,&stack0x00000088,0x88);
    if (lVar1 != 0) {
      memcpy((void *)(*(long *)(lVar1 + 0x10) + (long)unaff_w19 * 0x88),&stack0x00000000,0x88);
      if ((*(long *)(unaff_x20 + 0x118) != 0) &&
         (lVar1 = FUN_05cb5ba0(*(long *)(unaff_x20 + 0x118),unaff_w19,DAT_083e2140), lVar1 != 0)) {
        *(uint *)(lVar1 + 0x10) =
             *(uint *)(lVar1 + 0x10) & 0xfffffffe | in_stack_00000088 & 0 < in_stack_00000090._4_4_;
        if ((*(long *)(unaff_x20 + 0x118) != 0) &&
           (lVar1 = FUN_05cb5ba0(*(long *)(unaff_x20 + 0x118),unaff_w19,DAT_083e2140), lVar1 != 0))
        {
          *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) & 0xfffffeff;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


