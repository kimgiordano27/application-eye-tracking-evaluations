/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$Destroy
ENTRY_POINT: 0634ed14
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__Destroy(undefined8 param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  ulong uVar4;
  undefined1 unaff_w22;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x8a0) = unaff_w22;
  lVar2 = FUN_05b961dc(DAT_083dfcb0);
  if (((lVar2 != 0) && (lVar2 = FUN_0631798c(lVar2,0), lVar2 != 0)) &&
     (*(long *)(lVar2 + 0x18) != 0)) {
    uVar1 = *(ushort *)(*(long *)(*(long *)(lVar2 + 0x18) + 0x10) + (long)unaff_w20 * 0xfc + 0xf0);
    if ((short)uVar1 < 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x40) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
      lVar2 = lVar3 + (ulong)uVar1 * 0x4c;
      uVar4 = *(ulong *)(lVar2 + 0x1c);
      uVar7 = *(undefined8 *)(lVar2 + 0x24);
      uVar6 = *(ulong *)(lVar2 + 0x2c);
      uVar9 = *(undefined8 *)(lVar2 + 0x34);
                    /* try { // try from 0634ed98 to 0644ef57 has its CatchHandler @ 0634ed98
                       catch() { ... } // from try @ 0634ed98 with catch @ 0634ed98
                       catch() { ... } // from try @ 0634f228 with catch @ 0634ed98
                       catch() { ... } // from try @ 0634f3ac with catch @ 0634ed98
                       catch() { ... } // from try @ 0634f46c with catch @ 0634ed98
                       catch() { ... } // from try @ 0634f4e8 with catch @ 0634ed98 */
      uVar5 = *(ulong *)(lVar2 + 0x3c);
      uVar8 = *(undefined8 *)(lVar2 + 0x44);
      if (0 < *(int *)(lVar3 + (ulong)uVar1 * 0x4c + 0x14)) {
        FUN_042b0ee0(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(lVar2 + 0xc),
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083eb3b8 + 0x20) + 0xc0) + 0x60));
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        if (0 < (int)uVar9) {
          FUN_0429f208(*(long *)(unaff_x19 + 0x30),uVar6 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eb040 + 0x20) + 0xc0) + 0x60));
        }
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          if (0 < (int)uVar8) {
            FUN_042a5698(*(long *)(unaff_x19 + 0x38),uVar5 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eb148 + 0x20) + 0xc0) + 0x60));
          }
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            if (0 < (int)uVar7) {
              FUN_0429d670(*(long *)(unaff_x19 + 0x28),uVar4 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(DAT_083eafb8 + 0x20) + 0xc0) + 0x60))
              ;
            }
            if (*(long *)(unaff_x19 + 0x40) != 0) {
              FUN_0438cd54(*(long *)(unaff_x19 + 0x40),(int)(short)uVar1,DAT_083ebab0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


