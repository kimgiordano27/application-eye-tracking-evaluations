/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$add_OnCacheChangedForTypeEvent
ENTRY_POINT: 063579d8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_InstanceCache__add_OnCacheChangedForTypeEvent
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  int unaff_w23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  
  lVar3 = *(long *)(unaff_x19 + 0x20);
  uStack00000000000000c8 = param_1;
  uStack00000000000000d0 = param_2;
  if (lVar3 != 0) {
    FUN_0405e09c(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),unaff_x25 >> 0x20);
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 != 0) {
                    /* try { // try from 06357a08 to 06457a0b has its CatchHandler @ 06357a10 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 063578e8 with catch @ 06357a0c
                       try { // try from 06357a0c to 06457a2f has its CatchHandler @ 063577dc */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06357910 with catch @ 06357a10
                       catch(type#1 @ 07e8c608) { ... } // from try @ 06357a08 with catch @ 06357a10
                        */
      FUN_0405d584(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),unaff_x26 >> 0x20);
      lVar3 = *(long *)(unaff_x19 + 0x40);
      memcpy(&stack0x00000008,&stack0x00000070,0x68);
      uVar1 = DAT_083ebf18;
                    /* try { // try from 06357a30 to 06457a33 has its CatchHandler @ 06357ac4 */
      if (lVar3 != 0) {
        memcpy(&stack0x000000d8,&stack0x00000008,0x68);
        uVar2 = FUN_0439606c(lVar3,&stack0x000000d8,uVar1);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (0 < unaff_w23) {
            lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x10);
            uVar4 = unaff_x24 >> 0x20;
            do {
              *(undefined2 *)(lVar3 + (long)(int)uVar4 * 2) = uVar2;
              unaff_w23 = unaff_w23 + -1;
                    /* try { // try from 06357a7c to 06457a87 has its CatchHandler @ 06357b7c */
              uVar4 = (ulong)((int)uVar4 + 1);
            } while (unaff_w23 != 0);
          }
                    /* try { // try from 06357a94 to 06457a9b has its CatchHandler @ 06357ad8 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


