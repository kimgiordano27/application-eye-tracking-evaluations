/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$remove_OnInstanceAdded
ENTRY_POINT: 06357d20
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


void Meta_XR_ImmersiveDebugger_Utils_InstanceCache__remove_OnInstanceAdded(void)

{
  ushort uVar1;
  long lVar2;
  long unaff_x20;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x24;
  undefined1 unaff_w25;
  undefined8 in_stack_00000068;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebf40,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebf48,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x24 + 0x8cb) = unaff_w25;
  lVar2 = FUN_05b961dc(DAT_083dfcb0);
  if (((lVar2 != 0) && (lVar2 = FUN_0631798c(lVar2,0), lVar2 != 0)) &&
     (*(long *)(lVar2 + 0x18) != 0)) {
    uVar1 = *(ushort *)(*(long *)(*(long *)(lVar2 + 0x18) + 0x10) + (long)unaff_w23 * 0xfc + 0xe6);
    if ((short)uVar1 < 0) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      memcpy(&stack0x00000068,
             (void *)(*(long *)(*(long *)(unaff_x20 + 0x40) + 0x10) + (ulong)uVar1 * 0x68),0x68);
      in_stack_00000068._4_4_ = unaff_w22 & 1;
      FUN_06358b08(&stack0x00000070);
      FUN_06358b08(&stack0x00000080);
      lVar2 = *(long *)(unaff_x20 + 0x40);
      memcpy(&stack0x00000000,&stack0x00000068,0x68);
      if (lVar2 != 0) {
        memcpy((void *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1 * 0x68),&stack0x00000000,0x68);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


