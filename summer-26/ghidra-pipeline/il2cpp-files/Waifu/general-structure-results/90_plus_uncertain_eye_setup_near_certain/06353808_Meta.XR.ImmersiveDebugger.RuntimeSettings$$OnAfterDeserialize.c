/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 06353808
PROGRAM: Waifu-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  ulong uVar4;
  undefined1 unaff_w22;
  undefined8 uVar5;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x8b2) = unaff_w22;
  lVar2 = FUN_05b961dc(DAT_083dfcb0);
  if (((lVar2 != 0) && (lVar2 = FUN_0631798c(lVar2,0), lVar2 != 0)) &&
     (*(long *)(lVar2 + 0x18) != 0)) {
    uVar1 = *(ushort *)(*(long *)(*(long *)(lVar2 + 0x18) + 0x10) + (long)unaff_w20 * 0xfc + 0xe0);
    if ((short)uVar1 < 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x30) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10);
      lVar2 = lVar3 + (ulong)uVar1 * 0x3c;
      uVar4 = *(ulong *)(lVar2 + 0x2c);
      uVar5 = *(undefined8 *)(lVar2 + 0x34);
      if (0 < *(int *)(lVar3 + (ulong)uVar1 * 0x3c + 0x24)) {
        FUN_042b71b0(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(lVar2 + 0x1c),
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083eb508 + 0x20) + 0xc0) + 0x60));
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        if (0 < (int)uVar5) {
          FUN_0429f208(*(long *)(unaff_x19 + 0x28),uVar4 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eb040 + 0x20) + 0xc0) + 0x60));
        }
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_04393c54(*(long *)(unaff_x19 + 0x30),(int)(short)uVar1,DAT_083ebdf0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


