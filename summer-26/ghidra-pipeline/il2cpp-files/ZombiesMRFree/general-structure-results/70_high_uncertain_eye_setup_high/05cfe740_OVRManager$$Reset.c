/*
FUNCTION_NAME: OVRManager$$Reset
ENTRY_POINT: 05cfe740
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Reset(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000038;
  
                    /* try { // try from 05cfe740 to 05dfe743 has its CatchHandler @ 05cfe844 */
                    /* try { // try from 05cfe744 to 05dfe747 has its CatchHandler @ 05cfe840 */
                    /* try { // try from 05cfe748 to 05dfe74b has its CatchHandler @ 05cfdde4 */
  puVar4 = (undefined8 *)FUN_02feb5b8();
                    /* try { // try from 05cfe74c to 05dfe74f has its CatchHandler @ 05cfe81c */
                    /* try { // try from 05cfe75c to 05dfe75f has its CatchHandler @ 05cfe7dc */
                    /* try { // try from 05cfe760 to 05dfe763 has its CatchHandler @ 05cfe7d4 */
                    /* try { // try from 05cfe764 to 05dfe767 has its CatchHandler @ 05cfe808 */
  uVar5 = (*(code *)*puVar4)();
                    /* try { // try from 05cfe768 to 05dfe76b has its CatchHandler @ 05cfe7c8 */
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 05cfe778 to 05dfe77f has its CatchHandler @ 05cfe790 */
    uVar11 = 0;
  }
  else {
                    /* try { // try from 05cfe76c to 05dfe76f has its CatchHandler @ 05cfe808 */
                    /* try { // try from 05cfe770 to 05dfe773 has its CatchHandler @ 05cfe788 */
    uVar11 = *(byte *)(unaff_x19 + 0x71) ^ 1;
                    /* try { // try from 05cfe774 to 05dfe777 has its CatchHandler @ 05cfe784 */
  }
  plVar9 = *(long **)(unaff_x19 + 0x48);
                    /* catch() { ... } // from try @ 05cfe5b8 with catch @ 05cfe780
                       catch() { ... } // from try @ 05cfe5f4 with catch @ 05cfe780
                       try { // try from 05cfe780 to 05dfe88f has its CatchHandler @ 05cfdde4 */
  if (plVar9 != (long *)0x0) {
                    /* catch() { ... } // from try @ 05cfe774 with catch @ 05cfe784 */
                    /* catch() { ... } // from try @ 05cfe770 with catch @ 05cfe788 */
                    /* catch() { ... } // from try @ 05cfe468 with catch @ 05cfe78c */
    lVar6 = *plVar9;
                    /* catch() { ... } // from try @ 05cfe778 with catch @ 05cfe790 */
                    /* catch() { ... } // from try @ 05cfe4b4 with catch @ 05cfe794 */
                    /* catch() { ... } // from try @ 05cfe514 with catch @ 05cfe798 */
                    /* catch() { ... } // from try @ 05cfe488 with catch @ 05cfe79c */
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05cfe808;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar9,*unaff_x22,0);
LAB_05cfe808:
    bVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    puVar10 = (uint *)(unaff_x19 + 0x74);
    *(byte *)(unaff_x19 + 0x71) = bVar3 & 1;
    if ((uVar11 & 0.5 < (fStack0000000000000014 * in_stack_00000038 +
                        fStack0000000000000010 * fStack0000000000000024 +
                        in_stack_00000008._4_4_ * fStack0000000000000020) * 0.5 + 0.5 &
        *puVar10 >> 0x1f) == 0) {
      if ((int)*puVar10 < 0) {
        return;
      }
      plVar9 = *(long **)(unaff_x19 + 0x58);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05cfe8cc;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02feb5b8(plVar9,*unaff_x22,0);
LAB_05cfe8cc:
        uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if ((uVar5 & 1) != 0) {
          FUN_05cfd9c4();
          *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
          *(undefined1 *)(unaff_x19 + 0xb0) = 0;
          return;
        }
        uVar11 = *puVar10;
        if ((int)uVar11 < 0) {
          return;
        }
        if (*(char *)(unaff_x19 + 0xb0) != '\0') {
          return;
        }
        lVar6 = *(long *)(unaff_x19 + 0x38);
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 <= uVar11) goto LAB_05cfe9c0;
          lVar8 = *(long *)(lVar6 + (ulong)uVar11 * 8 + 0x20);
          if (lVar8 != 0) {
            if (*(float *)(lVar8 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
              if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar8 + 0x14)) {
                return;
              }
              uVar2 = uVar1 - 1;
              if ((int)(uVar11 + 1) <= (int)uVar2) {
                uVar2 = uVar11 + 1;
              }
              *puVar10 = uVar2;
              if (uVar1 <= uVar2) goto LAB_05cfe9c0;
              uVar5 = (ulong)(int)uVar2;
            }
            else {
              if ((int)uVar11 < 2) {
                uVar11 = 1;
              }
              uVar11 = uVar11 - 1;
              *puVar10 = uVar11;
              if (uVar1 <= uVar11) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              uVar5 = (ulong)uVar11;
            }
            if (*(long *)(lVar6 + uVar5 * 8 + 0x20) != 0) goto LAB_05cfe85c;
          }
        }
      }
    }
    else {
      lVar6 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x18) == '\0') {
          *puVar10 = 0xffffffff;
          return;
        }
LAB_05cfe85c:
        FUN_05cfd9c4();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


