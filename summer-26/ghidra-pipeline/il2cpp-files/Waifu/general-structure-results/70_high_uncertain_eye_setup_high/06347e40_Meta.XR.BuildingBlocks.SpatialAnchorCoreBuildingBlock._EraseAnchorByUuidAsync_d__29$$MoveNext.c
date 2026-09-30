/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<EraseAnchorByUuidAsync>d__29$$MoveNext
ENTRY_POINT: 06347e40
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29__MoveNext
          (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_stack_00000008;
  uint uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 uStack000000000000001c;
  undefined8 uStack0000000000000024;
  undefined8 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  
  FUN_0335b6c8(param_1 + 0x2e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb030,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb048,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb2f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb9a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce0,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06347ec0 to 06447ec3 has its CatchHandler @ 06347fc0 */
  FUN_0335b6c8(&DAT_08412d88,1);
                    /* try { // try from 06347ec4 to 06447ecb has its CatchHandler @ 06347fd0 */
  DataMemoryBarrier(2,3);
                    /* try { // try from 06347ecc to 06447ecf has its CatchHandler @ 06347fb0 */
                    /* try { // try from 06347ed0 to 06447ed3 has its CatchHandler @ 06347fac */
                    /* try { // try from 06347ed4 to 06447ed7 has its CatchHandler @ 06347fa8 */
  FUN_0335b6c8(&DAT_08412d30,1);
                    /* try { // try from 06347ed8 to 06447edb has its CatchHandler @ 06347fa4 */
  DataMemoryBarrier(2,3);
                    /* try { // try from 06347edc to 06447edf has its CatchHandler @ 06347fa0 */
  *(undefined1 *)(unaff_x24 + 0x885) = unaff_w25;
                    /* try { // try from 06347ee0 to 06447ee7 has its CatchHandler @ 06347fd8 */
  if (unaff_x23 != 0) {
                    /* try { // try from 06347ee8 to 06447eeb has its CatchHandler @ 06347f94 */
    if (unaff_x21 == 0) {
      return 0xffffffff;
    }
                    /* try { // try from 06347eec to 06447ef3 has its CatchHandler @ 06347fbc */
    if (*(long *)(unaff_x23 + 0x18) == 0) {
      return 0xffffffff;
    }
                    /* try { // try from 06347ef4 to 06447ef7 has its CatchHandler @ 06347f88 */
                    /* try { // try from 06347ef8 to 06447efb has its CatchHandler @ 06347fe4 */
    if (*(long *)(unaff_x21 + 0x18) != 0) {
                    /* try { // try from 06347efc to 06447eff has its CatchHandler @ 06347f80 */
                    /* try { // try from 06347f00 to 06447f03 has its CatchHandler @ 06347fe8 */
                    /* try { // try from 06347f04 to 06447f07 has its CatchHandler @ 06347fc8 */
      lVar1 = FUN_05b961dc(DAT_083dfcb0);
                    /* try { // try from 06347f08 to 06447f0b has its CatchHandler @ 06347f7c */
                    /* try { // try from 06347f0c to 06447f0f has its CatchHandler @ 06347f5c */
                    /* try { // try from 06347f10 to 06447f13 has its CatchHandler @ 06347f58 */
                    /* try { // try from 06347f14 to 06447f17 has its CatchHandler @ 06347f54 */
                    /* try { // try from 06347f18 to 06447f1b has its CatchHandler @ 06347f3c */
                    /* try { // try from 06347f1c to 06447f1f has its CatchHandler @ 06347f40 */
                    /* try { // try from 06347f20 to 06447f23 has its CatchHandler @ 06347f34 */
                    /* try { // try from 06347f24 to 06447f27 has its CatchHandler @ 06347f30 */
      if ((((lVar1 != 0) && (lVar1 = FUN_0631798c(lVar1,0), lVar1 != 0)) &&
          (*(long *)(lVar1 + 0x18) != 0)) && (*(long *)(unaff_x22 + 0x20) != 0)) {
                    /* try { // try from 06347f28 to 06447f2f has its CatchHandler @ 06347f60 */
                    /* catch() { ... } // from try @ 06347f24 with catch @ 06347f30
                       try { // try from 06347f30 to 06448003 has its CatchHandler @ 06347220 */
                    /* catch() { ... } // from try @ 06347f20 with catch @ 06347f34 */
        auVar3 = FUN_042ac53c(*(long *)(unaff_x22 + 0x20),*(undefined4 *)(unaff_x23 + 0x18),
                              DAT_083eb2e0);
                    /* catch() { ... } // from try @ 06347b28 with catch @ 06347f38 */
                    /* catch() { ... } // from try @ 06347f18 with catch @ 06347f3c */
                    /* catch() { ... } // from try @ 06347a30 with catch @ 06347f40
                       catch() { ... } // from try @ 06347f1c with catch @ 06347f40 */
        if (*(long *)(unaff_x22 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 06347678 with catch @ 06347f44
                       catch() { ... } // from try @ 06347b0c with catch @ 06347f44 */
                    /* catch() { ... } // from try @ 063479fc with catch @ 06347f48 */
                    /* catch() { ... } // from try @ 06347b9c with catch @ 06347f4c */
                    /* catch() { ... } // from try @ 063479f0 with catch @ 06347f50 */
                    /* catch() { ... } // from try @ 06347f14 with catch @ 06347f54 */
          auVar4 = FUN_0429eef4(*(long *)(unaff_x22 + 0x28),*(undefined4 *)(unaff_x21 + 0x18),
                                DAT_083eb030);
                    /* catch() { ... } // from try @ 06347f10 with catch @ 06347f58 */
          lVar1 = *(long *)(unaff_x22 + 0x20);
                    /* catch() { ... } // from try @ 06347f0c with catch @ 06347f5c */
          if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 06347a5c with catch @ 06347f60
                       catch() { ... } // from try @ 06347c80 with catch @ 06347f60
                       catch() { ... } // from try @ 06347f28 with catch @ 06347f60 */
                    /* catch() { ... } // from try @ 06347b74 with catch @ 06347f64 */
                    /* catch() { ... } // from try @ 06347b48 with catch @ 06347f68 */
                    /* catch() { ... } // from try @ 06347964 with catch @ 06347f78 */
                    /* catch() { ... } // from try @ 06347f08 with catch @ 06347f7c */
            FUN_0405da84(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                         auVar3._0_8_ >> 0x20);
                    /* catch() { ... } // from try @ 06347efc with catch @ 06347f80 */
            lVar1 = *(long *)(unaff_x22 + 0x28);
                    /* catch() { ... } // from try @ 063478a8 with catch @ 06347f84 */
            if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 06347ef4 with catch @ 06347f88 */
                    /* catch() { ... } // from try @ 06347890 with catch @ 06347f8c */
                    /* catch() { ... } // from try @ 06347884 with catch @ 06347f90 */
                    /* catch() { ... } // from try @ 06347ee8 with catch @ 06347f94 */
                    /* catch() { ... } // from try @ 063477ec with catch @ 06347f98 */
                    /* catch() { ... } // from try @ 063476b8 with catch @ 06347f9c */
              FUN_0405d584(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                           auVar4._0_8_ >> 0x20);
                    /* catch() { ... } // from try @ 06347edc with catch @ 06347fa0 */
                    /* catch() { ... } // from try @ 06347ed8 with catch @ 06347fa4 */
              if (*(long *)(unaff_x22 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 06347ed4 with catch @ 06347fa8 */
                    /* catch() { ... } // from try @ 06347ed0 with catch @ 06347fac */
                    /* catch() { ... } // from try @ 06347ecc with catch @ 06347fb0 */
                uStack000000000000000c = unaff_w20 & 1;
                    /* catch() { ... } // from try @ 063474b4 with catch @ 06347fb4 */
                _uStack000000000000001c = auVar3;
                _uStack000000000000002c = auVar4;
                    /* catch() { ... } // from try @ 063479b4 with catch @ 06347fb8 */
                    /* catch() { ... } // from try @ 06347d34 with catch @ 06347fbc
                       catch() { ... } // from try @ 06347eec with catch @ 06347fbc */
                    /* catch() { ... } // from try @ 06347ec0 with catch @ 06347fc0 */
                    /* catch() { ... } // from try @ 06347bbc with catch @ 06347fc4 */
                    /* catch() { ... } // from try @ 06347954 with catch @ 06347fc8
                       catch() { ... } // from try @ 06347f04 with catch @ 06347fc8 */
                    /* catch() { ... } // from try @ 06347788 with catch @ 06347fcc */
                    /* catch() { ... } // from try @ 06347ec4 with catch @ 06347fd0 */
                    /* catch() { ... } // from try @ 06347980 with catch @ 06347fd4 */
                uVar2 = FUN_0438acdc(*(long *)(unaff_x22 + 0x30),&stack0x00000008,DAT_083eb9a0);
                return uVar2;
                    /* catch() { ... } // from try @ 063476d4 with catch @ 06347fd8
                       catch() { ... } // from try @ 06347ee0 with catch @ 06347fd8 */
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06348004 to 06448007 has its CatchHandler @ 06348104 */
      FUN_033d1d3c();
    }
  }
                    /* catch() { ... } // from try @ 063478c0 with catch @ 06347fe4
                       catch() { ... } // from try @ 06347ef8 with catch @ 06347fe4 */
                    /* catch() { ... } // from try @ 063478f4 with catch @ 06347fe8
                       catch() { ... } // from try @ 06347f00 with catch @ 06347fe8 */
  return 0xffffffff;
}


