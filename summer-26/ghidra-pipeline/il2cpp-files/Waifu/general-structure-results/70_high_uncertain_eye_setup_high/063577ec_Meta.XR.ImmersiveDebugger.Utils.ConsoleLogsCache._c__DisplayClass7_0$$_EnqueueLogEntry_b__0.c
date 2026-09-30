/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache.<>c__DisplayClass7_0$$<EnqueueLogEntry>b__0
ENTRY_POINT: 063577ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_<>c__DisplayClass7_0__<EnqueueLogEntry>b__0
          (long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong uVar9;
  undefined4 unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  undefined1 unaff_w28;
  undefined1 auVar10 [16];
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  FUN_0335b6c8(param_1 + 0x5a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eafa0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb138,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb030,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eafb0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb048,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb5b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebf18,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08412d30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08412e00,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x27 + 0x8c9) = unaff_w28;
                    /* try { // try from 063578d4 to 064578e7 has its CatchHandler @ 06357ad4 */
                    /* try { // try from 063578e8 to 064578fb has its CatchHandler @ 06357a0c */
  if ((((unaff_x21 != 0) && (unaff_x20 != 0)) && (*(long *)(unaff_x21 + 0x18) != 0)) &&
     ((unaff_w22 != 0 && (*(long *)(unaff_x20 + 0x18) != 0)))) {
    lVar5 = FUN_05b961dc(DAT_083dfcb0);
    if (lVar5 != 0) {
      lVar5 = FUN_0631798c(lVar5,0);
      auVar4._8_8_ = in_stack_000000d0;
      auVar4._0_8_ = in_stack_000000c8;
      auVar3._8_8_ = in_stack_000000c0;
      auVar3._0_8_ = in_stack_000000b8;
      auVar2._8_8_ = in_stack_000000b0;
      auVar2._0_8_ = in_stack_000000a8;
      auVar10._8_8_ = in_stack_000000a0;
      auVar10._0_8_ = in_stack_00000098;
      if ((lVar5 != 0) &&
         (_in_stack_00000098 = auVar10, _in_stack_000000a8 = auVar2, _in_stack_000000b8 = auVar3,
         _in_stack_000000c8 = auVar4, *(long *)(lVar5 + 0x18) != 0)) {
                    /* try { // try from 06357910 to 0645791b has its CatchHandler @ 06357a10 */
        uStack0000000000000074 = unaff_w26 & 1;
        in_stack_000000d0 = 0;
        in_stack_000000c8 = 0;
        in_stack_000000c0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000078 = 0;
        uStack0000000000000070 = unaff_w25;
        FUN_06358b08(&stack0x00000078);
                    /* try { // try from 06357954 to 0645797b has its CatchHandler @ 06357ad8 */
        FUN_06358b08(&stack0x00000088);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          _in_stack_00000098 =
               FUN_042ba7ac(*(long *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x21 + 0x18),
                            DAT_083eb5a0);
          uVar8 = in_stack_00000098;
                    /* try { // try from 0635797c to 06457a07 has its CatchHandler @ 063577dc */
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            auVar10 = FUN_0429d35c(*(long *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x21 + 0x18),
                                   DAT_083eafa0);
            uVar9 = auVar10._8_8_;
            _in_stack_000000a8 = auVar10;
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              _in_stack_000000b8 =
                   FUN_0429eef4(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x20 + 0x18),
                                DAT_083eb030);
              uVar6 = in_stack_000000b8;
              if (*(long *)(unaff_x19 + 0x38) != 0) {
                _in_stack_000000c8 =
                     FUN_042a5368(*(long *)(unaff_x19 + 0x38),unaff_w22,DAT_083eb138);
                lVar5 = *(long *)(unaff_x19 + 0x20);
                if (lVar5 != 0) {
                  FUN_0405e09c(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                               uVar8 >> 0x20);
                  lVar5 = *(long *)(unaff_x19 + 0x30);
                  if (lVar5 != 0) {
                    FUN_0405d584(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                                 uVar6 >> 0x20);
                    lVar5 = *(long *)(unaff_x19 + 0x40);
                    memcpy(&stack0x00000008,&stack0x00000070,0x68);
                    uVar7 = DAT_083ebf18;
                    if (lVar5 != 0) {
                      memcpy(&stack0x000000d8,&stack0x00000008,0x68);
                      uVar7 = FUN_0439606c(lVar5,&stack0x000000d8,uVar7);
                      if (*(long *)(unaff_x19 + 0x28) != 0) {
                        if (auVar10._8_4_ < 1) {
                          return uVar7;
                        }
                        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x10);
                        uVar8 = auVar10._0_8_ >> 0x20;
                        do {
                          *(short *)(lVar5 + (long)(int)uVar8 * 2) = (short)uVar7;
                          uVar1 = (int)uVar9 - 1;
                          uVar9 = (ulong)uVar1;
                          uVar8 = (ulong)((int)uVar8 + 1);
                        } while (uVar1 != 0);
                        return uVar7;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  return 0xffffffff;
}


