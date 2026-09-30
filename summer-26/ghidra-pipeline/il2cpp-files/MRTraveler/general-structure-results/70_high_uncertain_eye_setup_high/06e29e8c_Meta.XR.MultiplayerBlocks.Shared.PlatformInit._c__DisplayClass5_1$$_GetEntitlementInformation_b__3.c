/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_1$$<GetEntitlementInformation>b__3
ENTRY_POINT: 06e29e8c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  int in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x24;
  long *plVar10;
  long unaff_x25;
  
                    /* try { // try from 06e29e8c to 06f29e8f has its CatchHandler @ 06e29eec */
  plVar10 = *(long **)(unaff_x24 + 0xe8);
                    /* try { // try from 06e29e90 to 06f29e93 has its CatchHandler @ 06e29ee4 */
  if (in_w8 == 0) {
                    /* catch() { ... } // from try @ 06e29e80 with catch @ 06e29f08 */
                    /* catch() { ... } // from try @ 06e29db0 with catch @ 06e29f0c */
                    /* catch() { ... } // from try @ 06e29e7c with catch @ 06e29f10 */
                    /* catch() { ... } // from try @ 06e29d08 with catch @ 06e29f14 */
    *(undefined8 *)(unaff_x19 + 10) = 0;
                    /* catch() { ... } // from try @ 06e29e78 with catch @ 06e29f18 */
    *unaff_x19 = 0xffffffff;
  }
  else {
                    /* try { // try from 06e29e94 to 06f29e97 has its CatchHandler @ 06e29ecc */
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* try { // try from 06e29e98 to 06f29e9b has its CatchHandler @ 06e29ec4 */
                    /* try { // try from 06e29e9c to 06f29e9f has its CatchHandler @ 06e29eb8 */
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* try { // try from 06e29ea0 to 06f29ea3 has its CatchHandler @ 06e29eb4 */
                    /* try { // try from 06e29ea4 to 06f29ea7 has its CatchHandler @ 06e29eb0 */
                    /* try { // try from 06e29ea8 to 06f29eab has its CatchHandler @ 06e29eac */
    lVar7 = *(long *)(unaff_x25 + 0x10);
                    /* catch() { ... } // from try @ 06e29ea8 with catch @ 06e29eac
                       try { // try from 06e29eac to 06f29f27 has its CatchHandler @ 06e29b74 */
    plVar8 = *(long **)(*(long *)(unaff_x25 + 0x18) + 0x50);
                    /* catch() { ... } // from try @ 06e29ea4 with catch @ 06e29eb0 */
                    /* catch() { ... } // from try @ 06e29ea0 with catch @ 06e29eb4 */
    uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93878);
                    /* catch() { ... } // from try @ 06e29e9c with catch @ 06e29eb8 */
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* catch() { ... } // from try @ 06e29c50 with catch @ 06e29ebc */
                    /* catch() { ... } // from try @ 06e29e04 with catch @ 06e29ec0 */
    lVar4 = *plVar8;
                    /* catch() { ... } // from try @ 06e29e98 with catch @ 06e29ec4 */
                    /* catch() { ... } // from try @ 06e29df0 with catch @ 06e29ec8 */
                    /* catch() { ... } // from try @ 06e29e94 with catch @ 06e29ecc */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 06e29d5c with catch @ 06e29ed0 */
                    /* catch() { ... } // from try @ 06e29d48 with catch @ 06e29ed4 */
    if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 06e29cb4 with catch @ 06e29ed8 */
                    /* catch() { ... } // from try @ 06e29dac with catch @ 06e29edc */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 06e29d04 with catch @ 06e29ee0 */
                    /* catch() { ... } // from try @ 06e29e90 with catch @ 06e29ee4 */
                    /* catch() { ... } // from try @ 06e29dd8 with catch @ 06e29ee8 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e86a58) {
                    /* try { // try from 06e29f28 to 06f29f2b has its CatchHandler @ 06e29f50 */
                    /* try { // try from 06e29f2c to 06f29f57 has its CatchHandler @ 06e29b74 */
          lVar4 = lVar4 + (long)(*piVar6 + 0x13) * 0x10 + 0x138;
          goto LAB_06e29f30;
        }
                    /* catch() { ... } // from try @ 06e29e8c with catch @ 06e29eec */
        uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 06e29dc8 with catch @ 06e29ef0 */
        piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 06e29d20 with catch @ 06e29ef4 */
      } while (uVar5 != 0);
    }
                    /* catch() { ... } // from try @ 06e29e88 with catch @ 06e29ef8 */
                    /* catch() { ... } // from try @ 06e29e84 with catch @ 06e29efc */
                    /* catch() { ... } // from try @ 06e29d30 with catch @ 06e29f00 */
    lVar4 = FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e86a58,0x13);
                    /* catch() { ... } // from try @ 06e29c94 with catch @ 06e29f04 */
LAB_06e29f30:
    FUN_06dfc8c8(uVar2,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* catch() { ... } // from try @ 06e29f28 with catch @ 06e29f50 */
    uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x18) + 0x78);
                    /* try { // try from 06e29f58 to 06f29f5f has its CatchHandler @ 06e29f74 */
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93870);
                    /* try { // try from 06e29f60 to 06f29f6b has its CatchHandler @ 06e29b74 */
                    /* try { // try from 06e29f6c to 06f29f73 has its CatchHandler @ 06e29f74 */
                    /* catch() { ... } // from try @ 06e29f58 with catch @ 06e29f74
                       catch() { ... } // from try @ 06e29f6c with catch @ 06e29f74 */
    FUN_06df980c(uVar3,uVar9,*(undefined8 *)PTR_DAT_08e93888,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = FUN_06e0bbc8(lVar7,uVar2,uVar3,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = FUN_05b9625c(lVar7,*(undefined8 *)PTR_DAT_08e929e0);
    uVar5 = FUN_05ac29c8();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = uVar2;
      thunk_FUN_03d233cc(unaff_x19 + 10,0);
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0416e36c(unaff_x19 + 2);
      return;
    }
  }
  FUN_05ac2a0c();
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(unaff_x25 + 0x20) != 0) {
    lVar7 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0x88);
    if (lVar7 != 0) {
      FUN_0675af18(lVar7,*(undefined8 *)(unaff_x25 + 0x28),&stack0x00000008,
                   *(undefined8 *)PTR_DAT_08e93960);
      *unaff_x19 = 0xfffffffe;
      puVar1 = PTR_DAT_08e78268;
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_063c7630(unaff_x19 + 2,extraout_x1,*(undefined8 *)puVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


