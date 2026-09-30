/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 07c59500
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SceneCaptureComplete(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long unaff_x19;
  uint *puVar10;
  uint unaff_w21;
  long *plVar11;
  long *unaff_x22;
  double unaff_d8;
  
  puVar5 = (undefined8 *)FUN_044822ac();
                    /* try { // try from 07c59528 to 07d5952f has its CatchHandler @ 07c59674 */
  bVar4 = (*(code *)*puVar5)();
  puVar10 = (uint *)(unaff_x19 + 0x74);
                    /* try { // try from 07c59534 to 07d59547 has its CatchHandler @ 07c59670 */
  *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
  if ((unaff_w21 & 0.5 < unaff_d8 & *puVar10 >> 0x1f) == 0) {
    if ((int)*puVar10 < 0) {
      return;
    }
    plVar11 = *(long **)(unaff_x19 + 0x58);
    if (plVar11 != (long *)0x0) {
      lVar6 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 07c59598 to 07d5959b has its CatchHandler @ 07c59690 */
                    /* try { // try from 07c5959c to 07d59657 has its CatchHandler @ 07c5917c */
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07c595d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar11,*unaff_x22,0);
LAB_07c595d8:
      uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((uVar7 & 1) != 0) {
        FUN_07c586d0();
        *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
        *(undefined1 *)(unaff_x19 + 0xb0) = 0;
        return;
      }
      uVar1 = *puVar10;
      if ((int)uVar1 < 0) {
        return;
      }
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x38);
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 <= uVar1) goto LAB_07c596cc;
        lVar9 = *(long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
                    /* try { // try from 07c59658 to 07d5965b has its CatchHandler @ 07c5966c */
        if (lVar9 != 0) {
                    /* try { // try from 07c5965c to 07d596b3 has its CatchHandler @ 07c5917c */
                    /* catch() { ... } // from try @ 07c5956c with catch @ 07c59664 */
                    /* catch() { ... } // from try @ 07c5954c with catch @ 07c59668 */
          if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    /* catch() { ... } // from try @ 07c59404 with catch @ 07c5968c */
                    /* catch() { ... } // from try @ 07c59598 with catch @ 07c59690 */
                    /* catch() { ... } // from try @ 07c59410 with catch @ 07c59694 */
            if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
              return;
            }
                    /* catch() { ... } // from try @ 07c593a4 with catch @ 07c59698 */
            uVar3 = uVar2 - 1;
                    /* catch() { ... } // from try @ 07c59348 with catch @ 07c5969c */
            if ((int)(uVar1 + 1) <= (int)uVar3) {
              uVar3 = uVar1 + 1;
            }
            *puVar10 = uVar3;
            if (uVar2 <= uVar3) goto LAB_07c596cc;
                    /* try { // try from 07c596b4 to 07d596b7 has its CatchHandler @ 07c596cc */
            uVar7 = (ulong)(int)uVar3;
          }
          else {
                    /* catch() { ... } // from try @ 07c59658 with catch @ 07c5966c */
                    /* catch() { ... } // from try @ 07c59534 with catch @ 07c59670 */
            if ((int)uVar1 < 2) {
              uVar1 = 1;
            }
                    /* catch() { ... } // from try @ 07c59528 with catch @ 07c59674 */
            uVar1 = uVar1 - 1;
                    /* catch() { ... } // from try @ 07c59510 with catch @ 07c59678 */
                    /* catch() { ... } // from try @ 07c59400 with catch @ 07c5967c */
            *puVar10 = uVar1;
                    /* catch() { ... } // from try @ 07c59428 with catch @ 07c59680 */
            if (uVar2 <= uVar1) {
LAB_07c596cc:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 07c596b4 with catch @ 07c596cc */
              FUN_04447e4c();
            }
                    /* catch() { ... } // from try @ 07c594e8 with catch @ 07c59684 */
            uVar7 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 07c593e0 with catch @ 07c59688 */
          }
          if (*(long *)(lVar6 + uVar7 * 8 + 0x20) != 0) goto LAB_07c59568;
        }
      }
    }
  }
  else {
                    /* try { // try from 07c5954c to 07d59567 has its CatchHandler @ 07c59668 */
    lVar6 = FUN_07c596d0(*(undefined4 *)(unaff_x19 + 0x7c));
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x18) == '\0') {
        *puVar10 = 0xffffffff;
        return;
      }
LAB_07c59568:
                    /* try { // try from 07c5956c to 07d59597 has its CatchHandler @ 07c59664 */
      FUN_07c586d0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


