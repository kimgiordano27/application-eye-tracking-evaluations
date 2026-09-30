/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 060bc2f8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp(undefined1 param_1 [16])

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined1 in_stack_00000060 [16];
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  
  uStack0000000000000088 = param_1._8_8_;
  uStack0000000000000080 = param_1._0_8_;
  uStack0000000000000110 = *(undefined8 *)(unaff_x20 + 0xc);
                    /* try { // try from 060bc300 to 061bc30b has its CatchHandler @ 060bc574 */
  uStack00000000000000c0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000cc = 0;
  uStack00000000000000d8 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000d4 = 0;
  uStack00000000000000e8 = *(undefined8 *)(unaff_x20 + 2);
  uStack00000000000000e0 = *(undefined8 *)unaff_x20;
                    /* try { // try from 060bc31c to 061bc327 has its CatchHandler @ 060bc484 */
  uStack00000000000000f8 = *(undefined8 *)(unaff_x20 + 6);
  uStack00000000000000f0 = *(undefined8 *)(unaff_x20 + 4);
  uStack00000000000000b0 = 0;
  uStack0000000000000108 = *(undefined8 *)(unaff_x20 + 10);
  uStack0000000000000100 = *(undefined8 *)(unaff_x20 + 8);
  uStack0000000000000090 = uStack0000000000000080;
  uStack0000000000000098 = uStack0000000000000088;
  uStack00000000000000a0 = uStack0000000000000080;
  uStack00000000000000a8 = uStack0000000000000088;
                    /* try { // try from 060bc334 to 061bc353 has its CatchHandler @ 060bc488 */
  FUN_04b0d8dc();
  uVar12 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
                    /* try { // try from 060bc358 to 061bc35b has its CatchHandler @ 060bc578 */
  uVar7 = FUN_071c24dc(uVar12,0,0);
                    /* try { // try from 060bc35c to 061bc35f has its CatchHandler @ 060bc56c */
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 060bc360 to 061bc363 has its CatchHandler @ 060bc55c */
                    /* try { // try from 060bc364 to 061bc367 has its CatchHandler @ 060bc554 */
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
LAB_060bc4f0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 060bc100 with catch @ 060bc4f0 */
      FUN_03642c18();
    }
                    /* try { // try from 060bc368 to 061bc36b has its CatchHandler @ 060bc550 */
                    /* try { // try from 060bc36c to 061bc36f has its CatchHandler @ 060bc54c */
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) != '\0') {
                    /* try { // try from 060bc370 to 061bc373 has its CatchHandler @ 060bc50c */
                    /* try { // try from 060bc374 to 061bc377 has its CatchHandler @ 060bc524 */
                    /* try { // try from 060bc378 to 061bc37b has its CatchHandler @ 060bc544 */
                    /* try { // try from 060bc37c to 061bc37f has its CatchHandler @ 060bc540 */
      iVar1 = *unaff_x20;
                    /* try { // try from 060bc380 to 061bc383 has its CatchHandler @ 060bc53c */
                    /* try { // try from 060bc384 to 061bc387 has its CatchHandler @ 060bc538 */
      iVar5 = FUN_042b53f4();
                    /* try { // try from 060bc388 to 061bc38b has its CatchHandler @ 060bc530 */
                    /* try { // try from 060bc38c to 061bc38f has its CatchHandler @ 060bc4ec */
                    /* try { // try from 060bc390 to 061bc393 has its CatchHandler @ 060bc534 */
                    /* try { // try from 060bc394 to 061bc397 has its CatchHandler @ 060bc52c */
                    /* try { // try from 060bc398 to 061bc39b has its CatchHandler @ 060bc528 */
                    /* try { // try from 060bc39c to 061bc39f has its CatchHandler @ 060bc520 */
      if ((iVar1 != iVar5) && ((unaff_x20[4] & 0xfffffffeU) == 2)) {
                    /* try { // try from 060bc3a0 to 061bc3a3 has its CatchHandler @ 060bc51c */
                    /* try { // try from 060bc3a4 to 061bc3bb has its CatchHandler @ 060bc574 */
        FUN_060bbef8(&stack0x00000060 + 4);
                    /* try { // try from 060bc3bc to 061bc3c3 has its CatchHandler @ 060bc498 */
        *(ulong *)(unaff_x19 + 0x1b4) = CONCAT44(uStack0000000000000070,in_stack_00000060._12_4_);
        *(undefined8 *)(unaff_x19 + 0x1ac) = in_stack_00000060._4_8_;
        *(undefined8 *)(unaff_x19 + 0x1c0) = in_stack_00000078;
        *(ulong *)(unaff_x19 + 0x1b8) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
        FUN_060bc4f4();
                    /* try { // try from 060bc3d0 to 061bc3d3 has its CatchHandler @ 060bc494 */
                    /* try { // try from 060bc3d4 to 061bc3d7 has its CatchHandler @ 060bc4e0 */
                    /* try { // try from 060bc3d8 to 061bc3db has its CatchHandler @ 060bc4d8 */
        uVar12 = FUN_060bbfe8();
                    /* try { // try from 060bc3dc to 061bc3df has its CatchHandler @ 060bc4d0 */
                    /* try { // try from 060bc3e0 to 061bc3e3 has its CatchHandler @ 060bc4a8 */
        *(undefined8 *)(unaff_x19 + 0x180) = uVar12;
                    /* try { // try from 060bc3e4 to 061bc3e7 has its CatchHandler @ 060bc4cc */
                    /* try { // try from 060bc3e8 to 061bc3eb has its CatchHandler @ 060bc4c0 */
        thunk_FUN_036b7ad0(unaff_x19 + 0x180,uVar12);
                    /* try { // try from 060bc3ec to 061bc3ef has its CatchHandler @ 060bc4a4 */
                    /* try { // try from 060bc3f0 to 061bc3f3 has its CatchHandler @ 060bc4b8 */
                    /* try { // try from 060bc3f4 to 061bc3f7 has its CatchHandler @ 060bc4bc */
        FUN_060bc64c(&stack0x000000c0);
        uVar6 = FUN_042b53f4();
                    /* try { // try from 060bc404 to 061bc407 has its CatchHandler @ 060bc490 */
        uStack0000000000000054 = CONCAT44(uStack00000000000000d8,uStack00000000000000d4);
                    /* try { // try from 060bc40c to 061bc41f has its CatchHandler @ 060bc48c */
        uStack0000000000000048 = uStack00000000000000c8;
                    /* try { // try from 060bc420 to 061bc43f has its CatchHandler @ 060bc480 */
        in_stack_00000040 = uStack00000000000000c0;
        uStack000000000000004c = uStack00000000000000cc;
        uStack0000000000000050 = uStack00000000000000d0;
        FUN_06042b88(&stack0x00000080,uVar6,4,&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x108),0)
        ;
        uVar4 = uStack00000000000000b0;
        uVar3 = uStack00000000000000a0;
        uVar2 = uStack0000000000000090;
        uVar12 = uStack0000000000000080;
        if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
           (plVar11 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar11 == (long *)0x0))
        goto LAB_060bc4f0;
                    /* try { // try from 060bc440 to 061bc47b has its CatchHandler @ 060bc47c */
        lVar9 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 060bc440 with catch @ 060bc47c
                       try { // try from 060bc47c to 061bc58f has its CatchHandler @ 060bbc44 */
                    /* catch() { ... } // from try @ 060bc420 with catch @ 060bc480 */
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07a00bb8) {
                    /* catch() { ... } // from try @ 060bc06c with catch @ 060bc4a0 */
                    /* catch() { ... } // from try @ 060bc3ec with catch @ 060bc4a4 */
                    /* catch() { ... } // from try @ 060bc3e0 with catch @ 060bc4a8 */
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_060bc4ac;
            }
                    /* catch() { ... } // from try @ 060bc31c with catch @ 060bc484 */
            uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 060bc334 with catch @ 060bc488 */
            piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 060bc40c with catch @ 060bc48c */
          } while (uVar7 != 0);
        }
                    /* catch() { ... } // from try @ 060bc404 with catch @ 060bc490 */
                    /* catch() { ... } // from try @ 060bc3d0 with catch @ 060bc494 */
                    /* catch() { ... } // from try @ 060bc3bc with catch @ 060bc498 */
        puVar8 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)PTR_DAT_07a00bb8,0);
                    /* catch() { ... } // from try @ 060bc070 with catch @ 060bc49c */
LAB_060bc4ac:
                    /* catch() { ... } // from try @ 060bc2e0 with catch @ 060bc4ac */
                    /* catch() { ... } // from try @ 060bc2f0 with catch @ 060bc4b0 */
                    /* catch() { ... } // from try @ 060bc270 with catch @ 060bc4b4 */
                    /* catch() { ... } // from try @ 060bc05c with catch @ 060bc4b8
                       catch() { ... } // from try @ 060bc3f0 with catch @ 060bc4b8 */
                    /* catch() { ... } // from try @ 060bc088 with catch @ 060bc4bc
                       catch() { ... } // from try @ 060bc3f4 with catch @ 060bc4bc */
                    /* catch() { ... } // from try @ 060bc0a4 with catch @ 060bc4c0
                       catch() { ... } // from try @ 060bc3e8 with catch @ 060bc4c0 */
        uStack00000000000000e8 = uStack0000000000000088;
        uStack00000000000000e0 = uVar12;
        uStack00000000000000f8 = uStack0000000000000098;
        uStack00000000000000f0 = uVar2;
                    /* catch() { ... } // from try @ 060bc214 with catch @ 060bc4c4 */
        uStack0000000000000108 = uStack00000000000000a8;
        uStack0000000000000100 = uVar3;
                    /* catch() { ... } // from try @ 060bc288 with catch @ 060bc4c8 */
        uStack0000000000000110 = uVar4;
                    /* catch() { ... } // from try @ 060bc2d0 with catch @ 060bc4cc
                       catch() { ... } // from try @ 060bc3e4 with catch @ 060bc4cc */
                    /* catch() { ... } // from try @ 060bc3dc with catch @ 060bc4d0 */
                    /* catch() { ... } // from try @ 060bbfe0 with catch @ 060bc4d4 */
        (*(code *)*puVar8)(plVar11,&stack0x000000e0,puVar8[1]);
      }
    }
  }
                    /* catch() { ... } // from try @ 060bc3d8 with catch @ 060bc4d8 */
                    /* catch() { ... } // from try @ 060bc004 with catch @ 060bc4dc */
                    /* catch() { ... } // from try @ 060bc3d4 with catch @ 060bc4e0 */
                    /* catch() { ... } // from try @ 060bc028 with catch @ 060bc4e4 */
                    /* catch() { ... } // from try @ 060bc190 with catch @ 060bc4e8 */
                    /* catch() { ... } // from try @ 060bc38c with catch @ 060bc4ec */
  return;
}


