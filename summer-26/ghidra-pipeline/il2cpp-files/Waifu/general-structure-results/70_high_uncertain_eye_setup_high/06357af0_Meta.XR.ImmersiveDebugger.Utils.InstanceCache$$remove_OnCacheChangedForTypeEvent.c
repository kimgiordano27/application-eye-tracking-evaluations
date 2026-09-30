/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$remove_OnCacheChangedForTypeEvent
ENTRY_POINT: 06357af0
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


void Meta_XR_ImmersiveDebugger_Utils_InstanceCache__remove_OnCacheChangedForTypeEvent
               (undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined1 unaff_w22;
  
                    /* try { // try from 06357af4 to 06457af7 has its CatchHandler @ 06357b04 */
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06357af4 with catch @ 06357b04 */
  FUN_0335b6c8(&DAT_083eb148,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb040,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eafb8,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06357b40 to 06457b67 has its CatchHandler @ 06357b7c */
  FUN_0335b6c8(&DAT_083ebf28,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce0,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06357b68 to 06457b73 has its CatchHandler @ 063577dc */
  FUN_0335b6c8(&DAT_083ebf40,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06357b74 to 06457b7b has its CatchHandler @ 06357b7c */
  *(undefined1 *)(unaff_x21 + 0x8ca) = unaff_w22;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06357a7c with catch @ 06357b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 06357aac with catch @ 06357b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 06357b40 with catch @ 06357b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 06357b74 with catch @ 06357b7c
                        */
  lVar8 = FUN_05b961dc(DAT_083dfcb0);
  if (((lVar8 != 0) && (lVar8 = FUN_0631798c(lVar8,0), lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x18) != 0)) {
    uVar7 = *(ushort *)(*(long *)(*(long *)(lVar8 + 0x18) + 0x10) + (long)unaff_w20 * 0xfc + 0xe6);
    if ((short)uVar7 < 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x40) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
      lVar8 = lVar9 + (ulong)uVar7 * 0x68;
      uVar1 = *(ulong *)(lVar8 + 0x38);
      uVar4 = *(undefined8 *)(lVar8 + 0x40);
      uVar2 = *(ulong *)(lVar8 + 0x48);
      uVar5 = *(undefined8 *)(lVar8 + 0x50);
      uVar3 = *(ulong *)(lVar8 + 0x58);
      uVar6 = *(undefined8 *)(lVar8 + 0x60);
      if (0 < *(int *)(lVar9 + (ulong)uVar7 * 0x68 + 0x30)) {
        FUN_042bab00(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083eb5b0 + 0x20) + 0xc0) + 0x60));
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        if (0 < (int)uVar5) {
          FUN_0429f208(*(long *)(unaff_x19 + 0x30),uVar2 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eb040 + 0x20) + 0xc0) + 0x60));
        }
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          if (0 < (int)uVar6) {
            FUN_042a5698(*(long *)(unaff_x19 + 0x38),uVar3 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eb148 + 0x20) + 0xc0) + 0x60));
          }
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            if (0 < (int)uVar4) {
              FUN_0429d670(*(long *)(unaff_x19 + 0x28),uVar1 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(DAT_083eafb8 + 0x20) + 0xc0) + 0x60))
              ;
            }
            if (*(long *)(unaff_x19 + 0x40) != 0) {
              FUN_04396220(*(long *)(unaff_x19 + 0x40),(int)(short)uVar7,DAT_083ebf28);
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


