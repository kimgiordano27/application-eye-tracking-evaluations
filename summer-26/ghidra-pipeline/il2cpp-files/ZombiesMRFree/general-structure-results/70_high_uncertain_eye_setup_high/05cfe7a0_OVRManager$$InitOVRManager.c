/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 05cfe7a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__InitOVRManager
               (long param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long unaff_x19;
  uint *puVar10;
  uint unaff_w21;
  long *plVar11;
  long *unaff_x22;
  undefined8 in_stack_00000010;
  float in_stack_00000038;
  
                    /* catch() { ... } // from try @ 05cfe54c with catch @ 05cfe7a0 */
                    /* catch() { ... } // from try @ 05cfe4f0 with catch @ 05cfe7a4 */
                    /* catch() { ... } // from try @ 05cfe474 with catch @ 05cfe7a8 */
                    /* catch() { ... } // from try @ 05cfe4bc with catch @ 05cfe7ac */
                    /* catch() { ... } // from try @ 05cfe530 with catch @ 05cfe7b0 */
                    /* catch() { ... } // from try @ 05cfe39c with catch @ 05cfe7b4 */
                    /* catch() { ... } // from try @ 05cfe454 with catch @ 05cfe7b8 */
                    /* catch() { ... } // from try @ 05cfe360 with catch @ 05cfe7bc */
                    /* catch() { ... } // from try @ 05cfe29c with catch @ 05cfe7c0
                       catch() { ... } // from try @ 05cfe5d4 with catch @ 05cfe7c0 */
                    /* catch() { ... } // from try @ 05cfe33c with catch @ 05cfe7c4 */
                    /* catch() { ... } // from try @ 05cfe768 with catch @ 05cfe7c8 */
  if (in_x9 != 0) {
                    /* catch() { ... } // from try @ 05cfe354 with catch @ 05cfe7cc */
                    /* catch() { ... } // from try @ 05cfe374 with catch @ 05cfe7d0 */
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 05cfe760 with catch @ 05cfe7d4 */
                    /* catch() { ... } // from try @ 05cfe380 with catch @ 05cfe7d8 */
                    /* catch() { ... } // from try @ 05cfe75c with catch @ 05cfe7dc */
      if (*(long *)(piVar8 + -2) == param_6) {
                    /* catch() { ... } // from try @ 05cfe158 with catch @ 05cfe7fc */
                    /* catch() { ... } // from try @ 05cfe1f8 with catch @ 05cfe800 */
                    /* catch() { ... } // from try @ 05cfe314 with catch @ 05cfe804 */
        puVar5 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05cfe808;
      }
                    /* catch() { ... } // from try @ 05cfe2e0 with catch @ 05cfe7e0 */
      in_x9 = in_x9 + -1;
                    /* catch() { ... } // from try @ 05cfe2b4 with catch @ 05cfe7e4 */
      piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 05cfe2c4 with catch @ 05cfe7e8 */
    } while (in_x9 != 0);
  }
                    /* catch() { ... } // from try @ 05cfe198 with catch @ 05cfe7ec */
                    /* catch() { ... } // from try @ 05cfe758 with catch @ 05cfe7f0 */
                    /* catch() { ... } // from try @ 05cfe230 with catch @ 05cfe7f4 */
  puVar5 = (undefined8 *)FUN_02feb5b8();
                    /* catch() { ... } // from try @ 05cfe754 with catch @ 05cfe7f8 */
LAB_05cfe808:
                    /* catch() { ... } // from try @ 05cfe764 with catch @ 05cfe808
                       catch() { ... } // from try @ 05cfe76c with catch @ 05cfe808 */
                    /* catch() { ... } // from try @ 05cfe1d4 with catch @ 05cfe814 */
                    /* catch() { ... } // from try @ 05cfe750 with catch @ 05cfe818 */
                    /* catch() { ... } // from try @ 05cfe74c with catch @ 05cfe81c */
  bVar4 = (*(code *)*puVar5)();
                    /* catch() { ... } // from try @ 05cfe16c with catch @ 05cfe820 */
                    /* catch() { ... } // from try @ 05cfe14c with catch @ 05cfe824 */
  puVar10 = (uint *)(unaff_x19 + 0x74);
                    /* catch() { ... } // from try @ 05cfe2a8 with catch @ 05cfe828 */
                    /* catch() { ... } // from try @ 05cfe1a0 with catch @ 05cfe82c */
                    /* catch() { ... } // from try @ 05cfe214 with catch @ 05cfe830 */
                    /* catch() { ... } // from try @ 05cfe0f0 with catch @ 05cfe834 */
  *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
                    /* catch() { ... } // from try @ 05cfe0d4 with catch @ 05cfe838 */
  if ((unaff_w21 &
       0.5 < (in_stack_00000010._4_4_ * in_stack_00000038 + param_2 + param_3 * param_4) * 0.5 + 0.5
      & *puVar10 >> 0x1f) == 0) {
                    /* catch() { ... } // from try @ 05cfe730 with catch @ 05cfe868 */
    if ((int)*puVar10 < 0) {
      return;
    }
                    /* catch() { ... } // from try @ 05cfe03c with catch @ 05cfe86c */
    plVar11 = *(long **)(unaff_x19 + 0x58);
                    /* catch() { ... } // from try @ 05cfe064 with catch @ 05cfe870 */
    if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 05cfe028 with catch @ 05cfe874 */
      lVar6 = *plVar11;
                    /* catch() { ... } // from try @ 05cfe048 with catch @ 05cfe878 */
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 05cfe890 to 05dfe893 has its CatchHandler @ 05cfe8bc */
                    /* try { // try from 05cfe894 to 05dfe8cb has its CatchHandler @ 05cfdde4 */
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05cfe8cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8(plVar11,*unaff_x22,0);
LAB_05cfe8cc:
                    /* try { // try from 05cfe8cc to 05dfe8d3 has its CatchHandler @ 05cfe8e8 */
                    /* try { // try from 05cfe8d4 to 05dfe8df has its CatchHandler @ 05cfdde4 */
      uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((uVar7 & 1) != 0) {
                    /* try { // try from 05cfe8e0 to 05dfe8e7 has its CatchHandler @ 05cfe8e8 */
        FUN_05cfd9c4();
                    /* catch() { ... } // from try @ 05cfe8cc with catch @ 05cfe8e8
                       catch() { ... } // from try @ 05cfe8e0 with catch @ 05cfe8e8 */
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
        if (uVar2 <= uVar1) goto LAB_05cfe9c0;
        lVar9 = *(long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
        if (lVar9 != 0) {
          if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
            if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
              return;
            }
            uVar3 = uVar2 - 1;
            if ((int)(uVar1 + 1) <= (int)uVar3) {
              uVar3 = uVar1 + 1;
            }
            *puVar10 = uVar3;
            if (uVar2 <= uVar3) goto LAB_05cfe9c0;
            uVar7 = (ulong)(int)uVar3;
          }
          else {
            if ((int)uVar1 < 2) {
              uVar1 = 1;
            }
            uVar1 = uVar1 - 1;
            *puVar10 = uVar1;
            if (uVar2 <= uVar1) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            uVar7 = (ulong)uVar1;
          }
          if (*(long *)(lVar6 + uVar7 * 8 + 0x20) != 0) goto LAB_05cfe85c;
        }
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 05cfe0c4 with catch @ 05cfe83c */
                    /* catch() { ... } // from try @ 05cfe744 with catch @ 05cfe840 */
                    /* catch() { ... } // from try @ 05cfe740 with catch @ 05cfe844 */
                    /* catch() { ... } // from try @ 05cfe0b8 with catch @ 05cfe848 */
    lVar6 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
                    /* catch() { ... } // from try @ 05cfe124 with catch @ 05cfe84c */
    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 05cfe080 with catch @ 05cfe850 */
                    /* catch() { ... } // from try @ 05cfe73c with catch @ 05cfe854 */
      if (*(char *)(lVar6 + 0x18) == '\0') {
        *puVar10 = 0xffffffff;
        return;
                    /* catch() { ... } // from try @ 05cfe890 with catch @ 05cfe8bc */
      }
LAB_05cfe85c:
                    /* catch() { ... } // from try @ 05cfe734 with catch @ 05cfe85c */
                    /* catch() { ... } // from try @ 05cfe0a4 with catch @ 05cfe860 */
      FUN_05cfd9c4();
      return;
                    /* catch() { ... } // from try @ 05cfe094 with catch @ 05cfe864 */
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


