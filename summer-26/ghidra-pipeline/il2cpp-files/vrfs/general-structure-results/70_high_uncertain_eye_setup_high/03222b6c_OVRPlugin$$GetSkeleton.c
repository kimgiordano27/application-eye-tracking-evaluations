/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 03222b6c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetSkeleton(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong unaff_x19;
  ulong uVar9;
  int unaff_w20;
  int iVar10;
  long unaff_x21;
  short *psVar11;
  
  thunk_FUN_0159f088(PTR_DAT_06e1a840);
                    /* try { // try from 03222b7c to 03322bdf has its CatchHandler @ 03222a94 */
  thunk_FUN_0159f088(PTR_DAT_06e3f9a0);
  *(undefined1 *)(unaff_x21 + 0xe84) = 1;
  if (unaff_w20 < 2) {
    unaff_w20 = 1;
  }
  if (unaff_x19 < 10000000) {
    iVar10 = 1;
    uVar7 = (uint)unaff_x19;
  }
  else if (unaff_x19 < 100000000000000) {
    uVar7 = (uint)(unaff_x19 / 10000000);
    iVar10 = 8;
  }
  else {
    uVar7 = (uint)(unaff_x19 / 100000000000000);
    iVar10 = 0xf;
  }
                    /* try { // try from 03222be0 to 03322bef has its CatchHandler @ 03222bf0 */
  if (9 < uVar7) {
                    /* catch() { ... } // from try @ 03222b64 with catch @ 03222bf0
                       catch() { ... } // from try @ 03222be0 with catch @ 03222bf0 */
                    /* try { // try from 03222bf4 to 03322bf7 has its CatchHandler @ 03222c00 */
    if (uVar7 < 100) {
                    /* try { // try from 03222bf8 to 03322c03 has its CatchHandler @ 03222a94 */
      iVar10 = iVar10 + 1;
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03222bf4 with catch @ 03222c00
                        */
      if (uVar7 < 1000) {
        iVar10 = iVar10 + 2;
      }
      else if (uVar7 >> 4 < 0x271) {
        iVar10 = iVar10 + 3;
      }
      else if (uVar7 >> 5 < 0xc35) {
        iVar10 = iVar10 + 4;
      }
      else if (uVar7 < 1000000) {
        iVar10 = iVar10 + 5;
      }
      else {
        iVar10 = iVar10 + 6;
      }
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (iVar10 <= unaff_w20) {
    iVar10 = unaff_w20;
  }
  lVar4 = thunk_FUN_015c3580(iVar10,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = thunk_FUN_01644b08(0);
    lVar5 = lVar4 + iVar3;
  }
  puVar2 = PTR_DAT_06e3f9a0;
  iVar3 = unaff_w20 + -2;
  psVar11 = (short *)(lVar5 + (ulong)(uint)(iVar10 << 1));
  while( true ) {
    iVar10 = *(int *)(*(long *)puVar2 + 0xe0);
    if (iVar10 == 0) {
      thunk_FUN_016466fc();
      iVar10 = *(int *)(*(long *)puVar2 + 0xe0);
    }
    iVar8 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (iVar10 == 0) {
      thunk_FUN_016466fc();
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar9 = (ulong)(uint)(iVar8 + (int)unaff_x19 * -1000000000);
    iVar10 = 7;
    do {
      do {
        uVar6 = uVar9 / 10;
        uVar7 = (uint)uVar9;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar9 + (short)(uVar9 / 10) * -10 + 0x30;
        iVar8 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        uVar9 = uVar6;
        iVar10 = iVar8;
      } while (bVar1);
    } while (9 < uVar7);
    unaff_w20 = unaff_w20 + -9;
    iVar3 = iVar3 + -9;
  }
  if (iVar10 == 0) {
    thunk_FUN_016466fc();
  }
  if ((iVar8 != 0) || (-1 < unaff_w20 + -1)) {
    do {
      do {
        uVar7 = (uint)unaff_x19;
        uVar9 = (unaff_x19 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar10 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        unaff_x19 = uVar9;
        iVar3 = iVar10;
      } while (bVar1);
    } while (9 < uVar7);
  }
  return lVar4;
}


