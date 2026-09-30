/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 032221f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetDeveloperMode(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong unaff_x19;
  ulong uVar8;
  int unaff_w20;
  short *psVar9;
  
                    /* catch() { ... } // from try @ 032220d8 with catch @ 032221f0 */
                    /* catch() { ... } // from try @ 0322213c with catch @ 032221f4 */
                    /* catch() { ... } // from try @ 03221ff8 with catch @ 032221f8 */
                    /* catch() { ... } // from try @ 03222038 with catch @ 032221fc */
  uVar5 = (uint)(unaff_x19 >> 5) & 0x7ffffff;
  uVar7 = (uint)unaff_x19 / 100000;
  if (uVar5 < 0xc35) {
    uVar7 = (uint)unaff_x19;
  }
                    /* try { // try from 03222218 to 0332221b has its CatchHandler @ 03222294 */
  iVar6 = 6;
  if (uVar5 < 0xc35) {
    iVar6 = 1;
  }
  if (9 < uVar7) {
    if (uVar7 < 100) {
      iVar6 = iVar6 + 1;
    }
    else if (uVar7 < 1000) {
      iVar6 = iVar6 + 2;
    }
    else if (uVar7 >> 4 < 0x271) {
      iVar6 = iVar6 + 3;
    }
    else {
                    /* try { // try from 03222258 to 0332227f has its CatchHandler @ 032222a0 */
      iVar6 = iVar6 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (iVar6 <= unaff_w20) {
    iVar6 = unaff_w20;
  }
  lVar3 = thunk_FUN_015c3580(iVar6,0);
                    /* try { // try from 03222280 to 0332228b has its CatchHandler @ 03221ec8 */
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
                    /* try { // try from 0322228c to 03322293 has its CatchHandler @ 032222a0 */
    iVar2 = thunk_FUN_01644b08(0);
    lVar4 = lVar3 + iVar2;
                    /* catch() { ... } // from try @ 03222218 with catch @ 03222294 */
  }
                    /* catch() { ... } // from try @ 03222258 with catch @ 032222a0
                       catch() { ... } // from try @ 0322228c with catch @ 032222a0 */
  psVar9 = (short *)(lVar4 + (long)iVar6 * 2);
  if (unaff_w20 < 2) {
    do {
      uVar8 = (unaff_x19 & 0xffffffff) / 10;
      uVar7 = (uint)unaff_x19;
      psVar9 = psVar9 + -1;
      *psVar9 = (short)unaff_x19 + (short)uVar8 * -10 + 0x30;
      unaff_x19 = uVar8;
    } while (9 < uVar7);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    iVar6 = unaff_w20 + -2;
    do {
      do {
        uVar7 = (uint)unaff_x19;
        uVar8 = (unaff_x19 & 0xffffffff) / 10;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        unaff_x19 = uVar8;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar7);
  }
  return lVar3;
}


