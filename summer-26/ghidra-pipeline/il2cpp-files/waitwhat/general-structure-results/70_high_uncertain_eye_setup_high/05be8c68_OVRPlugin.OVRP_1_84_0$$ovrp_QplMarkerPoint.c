/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 05be8c68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined4 in_w8;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  float unaff_w23;
  long unaff_x24;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_s11;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack0000000000000038;
  float fStack0000000000000044;
  undefined8 uStack0000000000000048;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05be8c50 with catch @ 05be8c6c
                        */
  uStack0000000000000048 = CONCAT44(in_w8,in_w8);
  plVar10 = *(long **)(unaff_x24 + 400);
  fStack0000000000000044 = DAT_012e3d14;
  uStack0000000000000038 = param_1;
  do {
                    /* try { // try from 05be8c88 to 05ce8c8b has its CatchHandler @ 05be8ca8 */
    lVar5 = *unaff_x22;
                    /* try { // try from 05be8c8c to 05ce8cab has its CatchHandler @ 05be8c3c */
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *unaff_x22;
    }
    plVar6 = *(long **)(lVar5 + 0xb8);
    lVar7 = *plVar6;
    if (lVar7 == 0) {
LAB_05be9220:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
                    /* catch() { ... } // from try @ 05be8c88 with catch @ 05be8ca8 */
                    /* try { // try from 05be8cac to 05ce8cb3 has its CatchHandler @ 05be8cbc */
    if (*(int *)(lVar7 + 0x18) <= (int)unaff_w21) {
      return;
    }
                    /* try { // try from 05be8cb4 to 05ce8cbf has its CatchHandler @ 05be8c3c */
    lVar8 = *(long *)(unaff_x19 + 0x158);
    if (lVar8 == 0) goto LAB_05be9220;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05be8cac with catch @ 05be8cbc
                        */
                    /* try { // try from 05be8cc0 to 05ce8f3b has its CatchHandler @ 05be8cc0
                       catch() { ... } // from try @ 05be8cc0 with catch @ 05be8cc0
                       catch() { ... } // from try @ 05be8f54 with catch @ 05be8cc0
                       catch() { ... } // from try @ 05be8f90 with catch @ 05be8cc0
                       catch() { ... } // from try @ 05be8fbc with catch @ 05be8cc0
                       catch() { ... } // from try @ 05be8fe0 with catch @ 05be8cc0 */
    if (*(uint *)(lVar8 + 0x18) <= unaff_w21) {
LAB_05be921c:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar9 = *(long *)(unaff_x19 + 0x140);
    if (lVar9 == 0) goto LAB_05be9220;
    if (*(uint *)(lVar9 + 0x18) <= unaff_w21) goto LAB_05be921c;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05be9220;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05be921c;
    lVar11 = (long)(int)unaff_w21;
    lVar9 = lVar9 + lVar11 * 0x10;
    fVar27 = *(float *)(lVar9 + 0x20);
    fVar25 = *(float *)(lVar9 + 0x24);
    iVar1 = *(int *)(lVar8 + lVar11 * 4 + 0x20);
    fVar23 = *(float *)(lVar9 + 0x28);
    fVar30 = *(float *)(lVar9 + 0x2c);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *unaff_x22;
      plVar6 = *(long **)(lVar5 + 0xb8);
      lVar7 = *plVar6;
      if (lVar7 == 0) goto LAB_05be9220;
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05be921c;
    uVar4 = *(uint *)(lVar7 + lVar11 * 4 + 0x20);
    lVar7 = unaff_x20 + (long)(int)uVar4 * 0x10;
    if (iVar1 == 1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        plVar6 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar6[3];
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar8 = *plVar10;
      cVar3 = *(char *)(lVar5 + lVar11 + 0x20);
      if (cVar3 != '\0') {
        unaff_s11 = 0.0;
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar8 = *plVar10;
      }
      lVar5 = *(long *)(lVar8 + 0xb8);
      uVar16 = *(undefined8 *)(lVar5 + 0x24);
      fVar32 = *(float *)(lVar5 + 0x2c);
      uVar21 = *(undefined8 *)(lVar5 + 0x3c);
      fVar29 = *(float *)(lVar5 + 0x44);
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar14 = fVar17 * (float)((ulong)uStack0000000000000038 >> 0x20) * unaff_s11 *
               (float)((ulong)uStack0000000000000048 >> 0x20);
      fVar19 = unaff_s11 * fVar32 * unaff_w23 * fStack0000000000000044;
      uVar22 = uVar21;
      fVar13 = (float)FUN_069c5208(0);
      fVar31 = (float)uVar22;
      fVar28 = (fVar25 * fVar19 + fVar30 * fVar13 + fVar27 * fVar31) - fVar23 * fVar14;
      fVar26 = (fVar23 * fVar13 + fVar30 * fVar14 + fVar25 * fVar31) - fVar27 * fVar19;
      fVar24 = (fVar27 * fVar14 + fVar30 * fVar19 + fVar23 * fVar31) - fVar25 * fVar13;
      fVar23 = ((fVar30 * fVar31 - fVar27 * fVar13) - fVar25 * fVar14) - fVar23 * fVar19;
      fStack0000000000000080 = fVar28;
      fStack0000000000000084 = fVar26;
      fStack0000000000000088 = fVar24;
      fStack000000000000008c = fVar23;
      if (unaff_x20 == 0) goto LAB_05be9220;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
      fVar25 = (float)FUN_05be9384(unaff_x20 + 0x20 + (long)(int)uVar4 * 0x10,&stack0x00000080);
      if (unaff_s11 <= fVar25) {
        unaff_s11 = fVar25;
      }
      if (0.0 <= fVar25) {
        if (cVar3 != '\0') {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
          fVar13 = *(float *)(lVar7 + 0x20);
          fVar31 = *(float *)(lVar7 + 0x24);
          fVar14 = *(float *)(lVar7 + 0x28);
          fVar19 = *(float *)(lVar7 + 0x2c);
          fVar27 = fVar31;
          fVar30 = fVar14;
          uVar12 = FUN_069c57a8(0);
          uVar15 = FUN_069c57a8(fVar28,fVar26,fVar24,fVar23,uVar16,fVar17,fVar32,0);
          fVar17 = (float)((ulong)uVar21 >> 0x20);
          FUN_069c57a8(fVar13,fVar31,fVar14,fVar19,uVar21,fVar17,fVar29,0);
          fVar27 = (float)FUN_05a73c9c(uVar12,fVar27,fVar30,uVar15,fVar26,fVar24,0);
          fVar25 = fVar25 * *(float *)(unaff_x19 + 0xb0);
          fVar23 = 1.0;
          if (fVar25 <= 1.0) {
            fVar23 = fVar25;
          }
          fVar23 = 1.0 - fVar23;
          fVar30 = 1.0;
          if (0.0 <= fVar25) {
            fVar30 = fVar23;
          }
          fVar26 = fVar17 * fVar27 * fVar30 * (float)((ulong)uStack0000000000000048 >> 0x20);
          fVar27 = fVar29 * fVar27 * fVar30 * fStack0000000000000044;
          fVar25 = (float)FUN_069c5208(0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
          *(float *)(lVar7 + 0x20) =
               (fVar31 * fVar27 + fVar19 * fVar25 + fVar13 * fVar23) - fVar14 * fVar26;
          *(float *)(lVar7 + 0x24) =
               (fVar14 * fVar25 + fVar19 * fVar26 + fVar31 * fVar23) - fVar13 * fVar27;
          *(float *)(lVar7 + 0x28) =
               (fVar13 * fVar26 + fVar19 * fVar27 + fVar14 * fVar23) - fVar31 * fVar25;
          *(float *)(lVar7 + 0x2c) =
               ((fVar19 * fVar23 - fVar13 * fVar25) - fVar31 * fVar26) - fVar14 * fVar27;
        }
      }
      else {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
        uVar15 = *(undefined4 *)(lVar7 + 0x24);
        uVar18 = *(undefined4 *)(lVar7 + 0x28);
        uVar20 = *(undefined4 *)(lVar7 + 0x2c);
        uVar12 = FUN_069c4f80(*(undefined4 *)(lVar7 + 0x20),0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
        *(undefined4 *)(lVar7 + 0x20) = uVar12;
        *(undefined4 *)(lVar7 + 0x24) = uVar15;
        *(undefined4 *)(lVar7 + 0x28) = uVar18;
        *(undefined4 *)(lVar7 + 0x2c) = uVar20;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20 == 0) goto LAB_05be9220;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
      uVar15 = *(undefined4 *)(lVar7 + 0x24);
      uVar18 = *(undefined4 *)(lVar7 + 0x28);
      uVar20 = *(undefined4 *)(lVar7 + 0x2c);
      uVar12 = FUN_069c4f80(*(undefined4 *)(lVar7 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
      *(undefined4 *)(lVar7 + 0x20) = uVar12;
      *(undefined4 *)(lVar7 + 0x24) = uVar15;
      *(undefined4 *)(lVar7 + 0x28) = uVar18;
      *(undefined4 *)(lVar7 + 0x2c) = uVar20;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) goto LAB_05be9220;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
    if (*(int *)(lVar5 + lVar11 * 4 + 0x20) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar5 == 0) goto LAB_05be9220;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
    lVar5 = *(long *)(lVar5 + lVar11 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_05be9220;
    FUN_05b75e5c(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x148);
    if (lVar5 == 0) goto LAB_05be9220;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
    if (unaff_x20 == 0) goto LAB_05be9220;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
    lVar5 = lVar5 + lVar11 * 0x10;
    uVar15 = *(undefined4 *)(lVar5 + 0x24);
    uVar18 = *(undefined4 *)(lVar5 + 0x28);
    uVar20 = *(undefined4 *)(lVar5 + 0x2c);
    uVar12 = FUN_069c4f80(*(undefined4 *)(lVar5 + 0x20),0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_05be921c;
    *(undefined4 *)(lVar7 + 0x24) = uVar15;
    *(undefined4 *)(lVar7 + 0x28) = uVar18;
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    *(undefined4 *)(lVar7 + 0x20) = uVar12;
    *(undefined4 *)(lVar7 + 0x2c) = uVar20;
    if (uVar2 <= uVar4) goto LAB_05be921c;
    lVar5 = *(long *)(unaff_x19 + 0x150);
    if (lVar5 == 0) goto LAB_05be9220;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
    lVar5 = lVar5 + lVar11 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar5 + 0x20) = uVar12;
    *(undefined4 *)(lVar5 + 0x24) = uVar15;
    *(undefined4 *)(lVar5 + 0x28) = uVar18;
    *(undefined4 *)(lVar5 + 0x2c) = uVar20;
  } while( true );
}


