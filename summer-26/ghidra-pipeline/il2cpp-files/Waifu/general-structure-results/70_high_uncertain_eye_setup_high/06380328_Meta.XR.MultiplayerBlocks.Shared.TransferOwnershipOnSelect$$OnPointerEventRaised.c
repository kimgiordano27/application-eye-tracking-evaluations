/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnPointerEventRaised
ENTRY_POINT: 06380328
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnPointerEventRaised
               (long *param_1,float param_2,uint *param_3,long *param_4,long *param_5,int param_6,
               undefined8 param_7,float *param_8,undefined8 param_9,float *param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *in_x9;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint in_w16;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  long *in_stack_00000030;
  long *in_stack_00000038;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  float *in_stack_00000160;
  float *in_stack_00000168;
  byte in_stack_00000170;
  byte in_stack_00000178;
  int in_stack_00000180;
  long *in_stack_00000198;
  
                    /* try { // try from 06380330 to 06480333 has its CatchHandler @ 06380338 */
                    /* catch() { ... } // from try @ 06380330 with catch @ 06380338 */
                    /* try { // try from 0638033c to 06480343 has its CatchHandler @ 0638034c */
                    /* try { // try from 06380344 to 0648034f has its CatchHandler @ 0637f48c */
                    /* catch() { ... } // from try @ 063800f8 with catch @ 0638034c
                       catch() { ... } // from try @ 063802e8 with catch @ 0638034c
                       catch() { ... } // from try @ 0638033c with catch @ 0638034c */
                    /* try { // try from 06380350 to 06480517 has its CatchHandler @ 06380350
                       catch() { ... } // from try @ 06380350 with catch @ 06380350
                       catch() { ... } // from try @ 06380944 with catch @ 06380350
                       catch() { ... } // from try @ 063809f4 with catch @ 06380350
                       catch() { ... } // from try @ 06380a44 with catch @ 06380350
                       catch() { ... } // from try @ 06380aa4 with catch @ 06380350
                       catch() { ... } // from try @ 06380ae8 with catch @ 06380350
                       catch() { ... } // from try @ 06380b14 with catch @ 06380350
                       catch() { ... } // from try @ 06380b7c with catch @ 06380350 */
  fStack0000000000000044 = 0.0;
  lVar8 = 0;
  iVar6 = 0;
  uVar9 = 0x10000;
  fVar30 = 0.0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar29 = 0.0;
  fVar27 = 0.0;
  fVar25 = 0.0;
  fStack000000000000004c = 0.0;
  fStack0000000000000048 = 0.0;
  do {
    if (((*param_3 >> (ulong)((uint)lVar8 & 0x1f)) >> 0x1c & 1) != 0) {
      uStack00000000000000b8 = *(undefined8 *)(param_3 + 6);
      uStack00000000000000b0 = *(undefined8 *)(param_3 + 4);
      uStack00000000000000b8 = *(undefined8 *)(param_3 + 10);
      uStack00000000000000b0 = *(undefined8 *)(param_3 + 8);
      iVar7 = *(int *)((long)&stack0x000000b0 + lVar8 * 4);
      uStack00000000000000b8 = *(undefined8 *)(param_3 + 0xe);
      uStack00000000000000b0 = *(undefined8 *)(param_3 + 0xc);
      iVar1 = *(int *)((long)&stack0x000000b0 + lVar8 * 4);
      if ((uVar9 & in_w16) != 0) {
        uVar2 = *(uint *)(*param_4 +
                         (long)(*(int *)((long)&stack0x000000b0 + lVar8 * 4) + param_6) * 4);
        uVar3 = uVar2 >> 0x1c;
        uVar10 = (ulong)uVar3;
        uVar2 = uVar2 & 0xfffffff;
        if ((in_stack_00000178 & 1) == 0) {
          if ((in_stack_00000170 & 1) == 0) {
            if (uVar3 == 0) {
              fVar15 = 0.0;
              fVar13 = 0.0;
              fVar12 = 0.0;
            }
            else {
              iVar7 = iVar7 + uVar2;
              fVar12 = 0.0;
              fVar13 = 0.0;
              fVar15 = 0.0;
              do {
                pfVar11 = (float *)(*param_5 + (long)iVar7 * 0x2c);
                fVar18 = pfVar11[10];
                pfVar5 = (float *)(*in_stack_00000030 + (long)((int)pfVar11[9] + iVar1) * 0xc);
                pfVar4 = (float *)(*in_stack_00000038 + (long)((int)pfVar11[9] + iVar1) * 0x10);
                fVar19 = *pfVar4;
                fVar20 = pfVar4[1];
                fVar21 = pfVar4[2];
                fVar22 = pfVar4[3];
                fVar14 = *pfVar11 * *in_stack_00000168 * param_2;
                fVar16 = pfVar11[1] * in_stack_00000168[1] * param_2;
                fVar17 = pfVar11[2] * in_stack_00000168[2] * param_2;
                fVar23 = fVar19 * fVar16 - fVar20 * fVar14;
                fVar24 = fVar20 * fVar17 - fVar21 * fVar16;
                fVar26 = fVar21 * fVar14 - fVar19 * fVar17;
                fVar24 = fVar24 + fVar24;
                fVar26 = fVar26 + fVar26;
                fVar23 = fVar23 + fVar23;
                uVar10 = uVar10 - 1;
                fVar12 = fVar12 + fVar18 * (*pfVar5 +
                                           fVar14 + fVar22 * fVar24 +
                                           (fVar20 * fVar23 - fVar21 * fVar26));
                fVar13 = fVar13 + fVar18 * (pfVar5[1] +
                                           fVar16 + fVar22 * fVar26 +
                                           (fVar21 * fVar24 - fVar19 * fVar23));
                fVar15 = fVar15 + fVar18 * (pfVar5[2] +
                                           fVar17 + fVar22 * fVar23 +
                                           (fVar19 * fVar26 - fVar20 * fVar24));
                iVar7 = iVar7 + 1;
              } while (uVar10 != 0);
            }
            fVar14 = *in_stack_00000160;
            fVar16 = in_stack_00000160[1];
            fVar17 = in_stack_00000160[2];
            fVar18 = in_stack_00000160[3];
            fVar12 = fVar12 - *param_8;
            fVar13 = fVar13 - param_8[1];
            fVar15 = fVar15 - param_8[2];
            fVar20 = fVar16 * fVar15 - fVar17 * fVar13;
            fVar21 = fVar17 * fVar12 - fVar14 * fVar15;
            fVar19 = fVar14 * fVar13 - fVar16 * fVar12;
            fVar20 = fVar20 + fVar20;
            fVar21 = fVar21 + fVar21;
            fVar19 = fVar19 + fVar19;
            fVar12 = (fVar12 + fVar18 * fVar20 + (fVar16 * fVar19 - fVar17 * fVar21)) / *param_10;
            fVar13 = (fVar13 + fVar18 * fVar21 + (fVar17 * fVar20 - fVar14 * fVar19)) / param_10[1];
            fVar15 = (fVar15 + fVar18 * fVar19 + (fVar14 * fVar21 - fVar16 * fVar20)) / param_10[2];
          }
          else {
            if (uVar3 == 0) {
              fVar14 = *in_stack_00000168;
              fStack00000000000000ac = in_stack_00000168[1];
              fStack00000000000000a8 = in_stack_00000168[2];
              fVar16 = 0.0;
              fVar17 = 0.0;
              fVar18 = 0.0;
              fVar15 = 0.0;
              fVar13 = 0.0;
              fVar12 = 0.0;
            }
            else {
              fStack00000000000000ac = in_stack_00000168[1];
              fVar14 = *in_stack_00000168;
              fStack00000000000000a8 = in_stack_00000168[2];
              iVar7 = iVar7 + uVar2;
              fVar12 = 0.0;
              fVar13 = 0.0;
              fVar15 = 0.0;
              fVar18 = 0.0;
              fVar17 = 0.0;
              fVar16 = 0.0;
              do {
                pfVar5 = (float *)(*param_5 + (long)iVar7 * 0x2c);
                pfVar4 = (float *)(*in_stack_00000038 + (long)((int)pfVar5[9] + iVar1) * 0x10);
                fVar20 = *pfVar4;
                fVar22 = pfVar4[1];
                fVar24 = pfVar4[2];
                fVar36 = pfVar4[3];
                fVar26 = pfVar5[3] * fVar14;
                fVar28 = pfVar5[4] * fStack00000000000000ac;
                fVar34 = pfVar5[5] * fStack00000000000000a8;
                fVar19 = *pfVar5 * fVar14 * param_2;
                fVar21 = pfVar5[1] * fStack00000000000000ac * param_2;
                fVar23 = pfVar5[2] * fStack00000000000000a8 * param_2;
                fVar35 = fVar20 * fVar21 - fVar22 * fVar19;
                fVar37 = fVar22 * fVar23 - fVar24 * fVar21;
                fVar38 = fVar24 * fVar19 - fVar20 * fVar23;
                fVar39 = fVar20 * fVar28 - fVar22 * fVar26;
                fVar41 = fVar22 * fVar34 - fVar24 * fVar28;
                fVar33 = fVar24 * fVar26 - fVar20 * fVar34;
                fVar37 = fVar37 + fVar37;
                fVar38 = fVar38 + fVar38;
                fVar35 = fVar35 + fVar35;
                fVar41 = fVar41 + fVar41;
                fVar33 = fVar33 + fVar33;
                fVar39 = fVar39 + fVar39;
                fVar40 = pfVar5[10];
                pfVar4 = (float *)(*in_stack_00000030 + (long)((int)pfVar5[9] + iVar1) * 0xc);
                uVar10 = uVar10 - 1;
                fVar18 = fVar18 + fVar40 * (fVar26 + fVar36 * fVar41 +
                                           (fVar22 * fVar39 - fVar24 * fVar33));
                fVar17 = fVar17 + fVar40 * (fVar28 + fVar36 * fVar33 +
                                           (fVar24 * fVar41 - fVar20 * fVar39));
                fVar16 = fVar16 + fVar40 * (fVar34 + fVar36 * fVar39 +
                                           (fVar20 * fVar33 - fVar22 * fVar41));
                fVar12 = fVar12 + fVar40 * (*pfVar4 +
                                           fVar19 + fVar36 * fVar37 +
                                           (fVar22 * fVar35 - fVar24 * fVar38));
                fVar13 = fVar13 + fVar40 * (pfVar4[1] +
                                           fVar21 + fVar36 * fVar38 +
                                           (fVar24 * fVar37 - fVar20 * fVar35));
                fVar15 = fVar15 + fVar40 * (pfVar4[2] +
                                           fVar23 + fVar36 * fVar35 +
                                           (fVar20 * fVar38 - fVar22 * fVar37));
                iVar7 = iVar7 + 1;
              } while (uVar10 != 0);
            }
            fVar20 = *in_stack_00000160;
            fVar22 = in_stack_00000160[1];
            fVar34 = in_stack_00000160[2];
            fVar24 = in_stack_00000160[3];
            fVar12 = fVar12 - *param_8;
            fVar13 = fVar13 - param_8[1];
            fVar15 = fVar15 - param_8[2];
            fVar19 = fVar17 * fVar20 - fVar18 * fVar22;
            fVar21 = fVar16 * fVar22 - fVar17 * fVar34;
            fVar23 = fVar18 * fVar34 - fVar16 * fVar20;
            fVar26 = fVar20 * fVar13 - fVar22 * fVar12;
            fVar28 = fVar22 * fVar15 - fVar34 * fVar13;
            fVar33 = fVar34 * fVar12 - fVar20 * fVar15;
            fVar21 = fVar21 + fVar21;
            fVar23 = fVar23 + fVar23;
            fVar19 = fVar19 + fVar19;
            fVar28 = fVar28 + fVar28;
            fVar33 = fVar33 + fVar33;
            fVar26 = fVar26 + fVar26;
            fVar12 = (fVar12 + fVar24 * fVar28 + (fVar22 * fVar26 - fVar34 * fVar33)) / *param_10;
            fVar13 = (fVar13 + fVar24 * fVar33 + (fVar34 * fVar28 - fVar20 * fVar26)) / param_10[1];
            fVar15 = (fVar15 + fVar24 * fVar26 + (fVar20 * fVar33 - fVar22 * fVar28)) / param_10[2];
            fVar29 = fVar29 + fVar14 * (fVar18 + fVar24 * fVar21 +
                                       (fVar22 * fVar19 - fVar34 * fVar23));
            fVar27 = fVar27 + fStack00000000000000ac *
                              (fVar17 + fVar24 * fVar23 + (fVar34 * fVar21 - fVar20 * fVar19));
            fVar25 = fVar25 + fStack00000000000000a8 *
                              (fVar16 + fVar24 * fVar19 + (fVar20 * fVar23 - fVar22 * fVar21));
          }
        }
        else {
          if (uVar3 == 0) {
            fStack00000000000000ac = 0.0;
            fStack00000000000000a8 = 0.0;
            fStack00000000000000a4 = 0.0;
            fStack0000000000000094 = 0.0;
            fStack0000000000000090 = 0.0;
            fStack000000000000008c = 0.0;
            fStack0000000000000098 = 0.0;
            fStack000000000000009c = 0.0;
            fStack00000000000000a0 = 0.0;
          }
          else {
            fVar15 = *in_stack_00000168;
            fVar12 = in_stack_00000168[1];
            iVar7 = iVar7 + uVar2;
            fVar13 = in_stack_00000168[2];
            fStack00000000000000a0 = 0.0;
            fStack000000000000009c = 0.0;
            fStack0000000000000098 = 0.0;
            fStack000000000000008c = 0.0;
            fStack0000000000000090 = 0.0;
            fStack0000000000000094 = 0.0;
            fStack00000000000000a4 = 0.0;
            fStack00000000000000a8 = 0.0;
            fStack00000000000000ac = 0.0;
            do {
              pfVar5 = (float *)(*param_5 + (long)iVar7 * 0x2c);
              pfVar4 = (float *)(*in_stack_00000038 + (long)((int)pfVar5[9] + iVar1) * 0x10);
              fVar42 = *pfVar4;
              fVar43 = pfVar4[1];
              fVar22 = pfVar4[2];
              fVar23 = pfVar4[3];
              fVar19 = pfVar5[3] * fVar15;
              fVar16 = pfVar5[6] * fVar15;
              fVar38 = pfVar5[5] * fVar13;
              fVar20 = pfVar5[8] * fVar13;
              fVar35 = pfVar5[4] * fVar12;
              fVar24 = *pfVar5 * fVar15 * param_2;
              fVar26 = pfVar5[1] * fVar12 * param_2;
              fVar28 = pfVar5[2] * fVar13 * param_2;
              fVar17 = pfVar5[7] * fVar12;
              fVar33 = fVar43 * fVar28 - fVar22 * fVar26;
              fVar34 = fVar22 * fVar24 - fVar42 * fVar28;
              fVar33 = fVar33 + fVar33;
              fVar34 = fVar34 + fVar34;
              fVar21 = fVar42 * fVar26 - fVar43 * fVar24;
              fVar41 = fVar42 * fVar35 - fVar43 * fVar19;
              fVar14 = fVar43 * fVar38 - fVar22 * fVar35;
              fVar36 = fVar22 * fVar19 - fVar42 * fVar38;
              fVar37 = fVar42 * fVar17 - fVar43 * fVar16;
              fVar39 = fVar43 * fVar20 - fVar22 * fVar17;
              fVar40 = fVar22 * fVar16 - fVar42 * fVar20;
              fVar21 = fVar21 + fVar21;
              fVar14 = fVar14 + fVar14;
              fVar36 = fVar36 + fVar36;
              fVar41 = fVar41 + fVar41;
              fVar39 = fVar39 + fVar39;
              fVar40 = fVar40 + fVar40;
              fVar37 = fVar37 + fVar37;
              pfVar4 = (float *)(*in_stack_00000030 + (long)((int)pfVar5[9] + iVar1) * 0xc);
              fVar18 = pfVar5[10];
              uVar10 = uVar10 - 1;
              iVar7 = iVar7 + 1;
              fStack00000000000000a4 =
                   fStack00000000000000a4 +
                   fVar18 * (fVar19 + fVar23 * fVar14 + (fVar43 * fVar41 - fVar22 * fVar36));
              fStack00000000000000a8 =
                   fStack00000000000000a8 +
                   fVar18 * (fVar35 + fVar23 * fVar36 + (fVar22 * fVar14 - fVar42 * fVar41));
              fStack00000000000000ac =
                   fStack00000000000000ac +
                   fVar18 * (fVar38 + fVar23 * fVar41 + (fVar42 * fVar36 - fVar43 * fVar14));
              fStack0000000000000098 =
                   fStack0000000000000098 +
                   fVar18 * (fVar16 + fVar23 * fVar39 + (fVar43 * fVar37 - fVar22 * fVar40));
              fStack000000000000009c =
                   fStack000000000000009c +
                   fVar18 * (fVar17 + fVar23 * fVar40 + (fVar22 * fVar39 - fVar42 * fVar37));
              fStack00000000000000a0 =
                   fStack00000000000000a0 +
                   fVar18 * (fVar20 + fVar23 * fVar37 + (fVar42 * fVar40 - fVar43 * fVar39));
              fStack000000000000008c =
                   fStack000000000000008c +
                   fVar18 * (*pfVar4 +
                            fVar24 + fVar23 * fVar33 + (fVar43 * fVar21 - fVar22 * fVar34));
              fStack0000000000000090 =
                   fStack0000000000000090 +
                   fVar18 * (pfVar4[1] +
                            fVar26 + fVar23 * fVar34 + (fVar22 * fVar33 - fVar42 * fVar21));
              fStack0000000000000094 =
                   fStack0000000000000094 +
                   fVar18 * (pfVar4[2] +
                            fVar28 + fVar23 * fVar21 + (fVar42 * fVar34 - fVar43 * fVar33));
            } while (uVar10 != 0);
          }
          fVar21 = *in_stack_00000160;
          fVar22 = in_stack_00000160[1];
          fVar23 = in_stack_00000160[2];
          fVar24 = in_stack_00000160[3];
          fStack000000000000008c = fStack000000000000008c - *param_8;
          fStack0000000000000090 = fStack0000000000000090 - param_8[1];
          fStack0000000000000094 = fStack0000000000000094 - param_8[2];
          fVar16 = fStack00000000000000ac * fVar22 - fStack00000000000000a8 * fVar23;
          fVar13 = fStack00000000000000a0 * fVar22 - fStack000000000000009c * fVar23;
          fVar13 = fVar13 + fVar13;
          fVar14 = fStack00000000000000a8 * fVar21 - fStack00000000000000a4 * fVar22;
          fVar12 = fStack000000000000009c * fVar21 - fStack0000000000000098 * fVar22;
          fVar18 = fVar21 * fStack0000000000000090 - fVar22 * fStack000000000000008c;
          fVar17 = fStack00000000000000a4 * fVar23 - fStack00000000000000ac * fVar21;
          fVar15 = fStack0000000000000098 * fVar23 - fStack00000000000000a0 * fVar21;
          fVar19 = fVar22 * fStack0000000000000094 - fVar23 * fStack0000000000000090;
          fVar20 = fVar23 * fStack000000000000008c - fVar21 * fStack0000000000000094;
          fVar16 = fVar16 + fVar16;
          fVar17 = fVar17 + fVar17;
          fVar14 = fVar14 + fVar14;
          fVar15 = fVar15 + fVar15;
          fVar12 = fVar12 + fVar12;
          fVar19 = fVar19 + fVar19;
          fVar20 = fVar20 + fVar20;
          fVar18 = fVar18 + fVar18;
          fVar27 = fVar27 + (fStack00000000000000a8 + fVar24 * fVar17 +
                            (fVar23 * fVar16 - fVar21 * fVar14)) * in_stack_00000168[1];
          fVar29 = fVar29 + (fStack00000000000000a4 + fVar24 * fVar16 +
                            (fVar22 * fVar14 - fVar23 * fVar17)) * *in_stack_00000168;
          fStack0000000000000044 =
               fStack0000000000000044 +
               (fStack0000000000000098 + fVar24 * fVar13 + (fVar22 * fVar12 - fVar23 * fVar15)) *
               *in_stack_00000168;
          fStack000000000000004c =
               fStack000000000000004c +
               (fStack000000000000009c + fVar24 * fVar15 + (fVar23 * fVar13 - fVar21 * fVar12)) *
               in_stack_00000168[1];
          fStack0000000000000048 =
               fStack0000000000000048 +
               (fStack00000000000000a0 + fVar24 * fVar12 + (fVar21 * fVar15 - fVar22 * fVar13)) *
               in_stack_00000168[2];
          fVar12 = (fStack000000000000008c + fVar24 * fVar19 + (fVar22 * fVar18 - fVar23 * fVar20))
                   / *param_10;
          fVar13 = (fStack0000000000000090 + fVar24 * fVar20 + (fVar23 * fVar19 - fVar21 * fVar18))
                   / param_10[1];
          fVar15 = (fStack0000000000000094 + fVar24 * fVar18 + (fVar21 * fVar20 - fVar22 * fVar19))
                   / param_10[2];
          fVar25 = fVar25 + (fStack00000000000000ac + fVar24 * fVar14 +
                            (fVar21 * fVar17 - fVar22 * fVar16)) * in_stack_00000168[2];
        }
        fVar32 = fVar32 + fVar15;
        fVar31 = fVar31 + fVar13;
        fVar30 = fVar30 + fVar12;
        iVar6 = iVar6 + 1;
      }
    }
    lVar8 = lVar8 + 1;
    uVar9 = uVar9 << 1;
  } while (lVar8 != 4);
  if (0 < iVar6) {
    fVar12 = (float)iVar6;
    lVar8 = (long)in_stack_00000180;
    pfVar4 = (float *)(*in_stack_00000198 + (long)in_stack_00000180 * 0xc);
    *pfVar4 = fVar30 / fVar12;
    pfVar4[1] = fVar31 / fVar12;
    pfVar4[2] = fVar32 / fVar12;
    if ((in_stack_00000178 & 1) == 0) {
      if ((in_stack_00000170 & 1) != 0) {
        pfVar4 = (float *)(*param_1 + lVar8 * 0xc);
        *pfVar4 = fVar29 / fVar12;
        pfVar4[1] = fVar27 / fVar12;
        pfVar4[2] = fVar25 / fVar12;
      }
    }
    else {
      pfVar4 = (float *)(*param_1 + lVar8 * 0xc);
      *pfVar4 = fVar29 / fVar12;
      pfVar4[1] = fVar27 / fVar12;
      pfVar4[2] = fVar25 / fVar12;
      pfVar4 = (float *)(*in_x9 + lVar8 * 0x10);
      *pfVar4 = fStack0000000000000044 / fVar12;
      pfVar4[1] = fStack000000000000004c / fVar12;
      pfVar4[2] = fStack0000000000000048 / fVar12;
      pfVar4[3] = -1.0;
    }
  }
  return;
}


