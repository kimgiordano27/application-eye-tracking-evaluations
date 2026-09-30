/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawAxis
ENTRY_POINT: 06379958
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawAxis(undefined8 param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  float *pfVar14;
  long lVar15;
  long unaff_x19;
  int unaff_w20;
  ulong uVar16;
  long unaff_x21;
  int iVar17;
  ulong uVar18;
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
  float fVar44;
  float fVar45;
  float fVar46;
  uint uStack0000000000000014;
  int iStack000000000000001c;
  uint uStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float fStack0000000000000054;
  float fStack000000000000005c;
  float fStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float fStack0000000000000084;
  float fStack000000000000008c;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x9c7) = 1;
  iVar7 = *(int *)(*(long *)(unaff_x19 + 0x28) + (long)unaff_w20 * 4);
  if (iVar7 != 0) {
    lVar8 = *(long *)(unaff_x19 + 0x48) + (long)iVar7 * 0xfc;
    uStack0000000000000014 = *(uint *)(lVar8 + 0x30);
    if (((uStack0000000000000014 & 0x101) == 1) &&
       (uVar6 = *(ushort *)(lVar8 + 0xea), -1 < (short)uVar6)) {
      puVar2 = (ushort *)(*(long *)(unaff_x19 + 0x18) + (long)unaff_w20 * 4);
      uVar16 = (ulong)puVar2[1];
      if (1 < uVar16) {
        fVar25 = *(float *)(lVar8 + 0x54);
        fStack000000000000004c = *(float *)(lVar8 + 0x58);
        iVar3 = *(int *)(lVar8 + 4);
        fVar26 = *(float *)(lVar8 + 0x5c);
        fStack0000000000000044 = *(float *)(lVar8 + 0x60);
        uVar18 = 0;
        fVar27 = *(float *)(lVar8 + 100);
                    /* catch() { ... } // from try @ 06379950 with catch @ 063799f0 */
        fStack000000000000003c = *(float *)(lVar8 + 0x68);
                    /* try { // try from 063799f8 to 064799ff has its CatchHandler @ 06379a00 */
        fVar19 = *(float *)(lVar8 + 0x6c);
        iStack000000000000001c = *(int *)(*(long *)(unaff_x19 + 0x38) + (ulong)uVar6 * 0x28 + 0xc);
        iVar4 = *(int *)(*(long *)(unaff_x19 + 0x38) + (ulong)uVar6 * 0x28 + 4);
        iVar7 = iStack000000000000001c + (uint)*puVar2;
        do {
          lVar10 = *(long *)(unaff_x19 + 8);
          piVar13 = (int *)(lVar10 + (long)(iVar7 + (int)uVar18) * 0x28);
          lVar8 = *(long *)(unaff_x19 + 0x58);
          iVar17 = *piVar13 + iVar3;
          uStack0000000000000034 = *(uint *)(lVar8 + (long)iVar17 * 4);
          if (((uStack0000000000000034 & 1) != 0) &&
             (uVar12 = (ulong)(uint)piVar13[1], 0 < piVar13[1])) {
            lVar11 = *(long *)(unaff_x19 + 0x68);
            lVar15 = (long)iVar17;
            pfVar14 = (float *)(lVar11 + lVar15 * 0xc);
            fStack000000000000005c = *pfVar14;
            fVar20 = pfVar14[1];
            fVar39 = 0.0;
            fVar40 = 0.0;
            fVar41 = 0.0;
            fStack0000000000000054 = pfVar14[2];
            fVar42 = 0.0;
            fStack000000000000008c = 0.0;
            pfVar14 = (float *)(*(long *)(unaff_x19 + 0x78) + lVar15 * 0x10);
            fStack000000000000007c = *pfVar14;
            fVar21 = pfVar14[2];
            fStack0000000000000074 = pfVar14[1];
            fVar22 = pfVar14[3];
            iVar17 = iStack000000000000001c + piVar13[2];
            while( true ) {
              uVar12 = uVar12 - 1;
              piVar13 = (int *)(lVar10 + (long)iVar17 * 0x28);
              fVar38 = (float)piVar13[5];
              fStack000000000000006c = (float)piVar13[6];
              fVar23 = (float)piVar13[7];
              fVar44 = (float)piVar13[3];
              fVar37 = (float)piVar13[4];
              fStack0000000000000064 = (float)piVar13[8];
              fVar24 = (float)piVar13[9];
              iVar1 = *piVar13 + iVar3;
              uVar5 = *(uint *)(lVar8 + (long)iVar1 * 4);
              pfVar14 = (float *)(lVar11 + (long)iVar1 * 0xc);
              fVar43 = *pfVar14;
              fVar28 = pfVar14[1];
              fStack0000000000000084 = pfVar14[2];
              if (DAT_086d90cb == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if ((*(int *)(DAT_083ce8b0 + 0xe0) == 0) && (FUN_033b9870(), DAT_086d90cb == '\0')) {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar44 = fVar25 * fVar44;
              fVar37 = fStack000000000000004c * fVar37;
              fVar38 = fVar26 * fVar38;
              fVar43 = fVar43 - fStack000000000000005c;
              fVar31 = fStack0000000000000084 - fStack0000000000000054;
              fVar35 = fStack0000000000000074 * fVar38 - fVar21 * fVar37;
              fVar45 = fVar21 * fVar44 - fStack000000000000007c * fVar38;
              fVar33 = fStack000000000000007c * fVar37 - fStack0000000000000074 * fVar44;
              fVar35 = fVar35 + fVar35;
              fVar45 = fVar45 + fVar45;
              fVar33 = fVar33 + fVar33;
              fVar36 = 1.0 / SQRT(fVar31 * fVar31 +
                                  fVar43 * fVar43 + (fVar28 - fVar20) * (fVar28 - fVar20));
              fVar44 = fVar44 + fVar22 * fVar35 +
                       (fStack0000000000000074 * fVar33 - fVar21 * fVar45);
              fVar28 = fVar37 + fVar22 * fVar45 +
                       (fVar21 * fVar35 - fStack000000000000007c * fVar33);
              fVar37 = fVar38 + fVar22 * fVar33 +
                       (fStack000000000000007c * fVar45 - fStack0000000000000074 * fVar35);
              fVar38 = 1.0 / SQRT(fVar37 * fVar37 + fVar44 * fVar44 + fVar28 * fVar28);
              fVar43 = fVar43 * fVar36;
              if ((uVar5 >> 10 & 1) == 0) {
                fStack0000000000000084 = fVar43;
                fVar33 = fVar28 * fVar38;
                fVar35 = fVar37 * fVar38;
                fVar45 = (float)FUN_0638dfac(fVar44 * fVar38,0);
                fVar29 = fStack0000000000000044 * fStack000000000000006c;
                fVar23 = fVar27 * fVar23;
                fVar34 = fStack000000000000003c * fStack0000000000000064;
                fVar24 = fVar19 * fVar24;
                fVar32 = (fVar22 * fVar29 +
                         fStack0000000000000074 * fVar34 + fStack000000000000007c * fVar24) -
                         fVar21 * fVar23;
                fVar46 = (fVar22 * fVar23 + fVar21 * fVar29 + fStack0000000000000074 * fVar24) -
                         fStack000000000000007c * fVar34;
                fVar30 = (fVar22 * fVar34 + fStack000000000000007c * fVar23 + fVar21 * fVar24) -
                         fStack0000000000000074 * fVar29;
                fVar23 = (fVar22 * fVar24 -
                         (fStack000000000000007c * fVar29 + fStack0000000000000074 * fVar23)) -
                         fVar21 * fVar34;
                pfVar14 = (float *)(*(long *)(unaff_x19 + 0x78) + (long)iVar1 * 0x10);
                *pfVar14 = (fVar32 * fVar43 + fVar23 * fVar45 + fVar30 * fVar33) - fVar46 * fVar35;
                pfVar14[1] = (fVar46 * fVar43 + fVar23 * fVar33 + fVar32 * fVar35) - fVar30 * fVar45
                ;
                pfVar14[2] = (fVar30 * fVar43 + fVar23 * fVar35 + fVar46 * fVar45) - fVar32 * fVar33
                ;
                pfVar14[3] = (fVar23 * fVar43 - (fVar32 * fVar45 + fVar46 * fVar33)) -
                             fVar30 * fVar35;
                fVar43 = fStack0000000000000084;
              }
              fVar42 = fVar42 + fVar44 * fVar38;
              fVar41 = fVar41 + fVar28 * fVar38;
              fVar40 = fVar40 + fVar37 * fVar38;
              fVar39 = fVar39 + fVar43;
              if (uVar12 == 0) break;
              lVar11 = *(long *)(unaff_x19 + 0x68);
              lVar10 = *(long *)(unaff_x19 + 8);
              lVar8 = *(long *)(unaff_x19 + 0x58);
              iVar17 = iVar17 + 1;
              fStack000000000000008c = fStack000000000000008c + fVar31 * fVar36;
            }
            if (((uStack0000000000000034 >> 10 & 1) == 0) &&
               (((uStack0000000000000014 >> 2 & 1) == 0 || ((uStack0000000000000034 >> 1 & 1) == 0))
               )) {
              fVar20 = (float)FUN_0638dfac(fVar42,0);
              if (iVar4 == 1) {
                puVar9 = *(undefined4 **)(DAT_083d4540 + 0xb8);
                fVar41 = (float)puVar9[1];
                fVar40 = (float)puVar9[2];
                fVar39 = (float)puVar9[3];
                fVar20 = (float)FUN_062cd628(*puVar9,0);
              }
              if (DAT_086d90cb == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar42 = (fStack000000000000007c * fVar39 + fVar21 * fVar41 + fVar22 * fVar20) -
                       fStack0000000000000074 * fVar40;
              fVar43 = (fStack0000000000000074 * fVar39 +
                       fStack000000000000007c * fVar40 + fVar22 * fVar41) - fVar21 * fVar20;
              fVar23 = (fVar21 * fVar39 + fVar22 * fVar40 + fStack0000000000000074 * fVar20) -
                       fStack000000000000007c * fVar41;
              fVar20 = (fVar22 * fVar39 -
                       (fStack0000000000000074 * fVar41 + fStack000000000000007c * fVar20)) -
                       fVar21 * fVar40;
              fVar21 = 1.0 / SQRT(fVar20 * fVar20 +
                                  fVar23 * fVar23 + fVar43 * fVar43 + fVar42 * fVar42);
              pfVar14 = (float *)(*(long *)(unaff_x19 + 0x78) + lVar15 * 0x10);
              *pfVar14 = fVar42 * fVar21;
              pfVar14[1] = fVar43 * fVar21;
              pfVar14[2] = fVar23 * fVar21;
              pfVar14[3] = fVar20 * fVar21;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar16);
      }
    }
  }
  return;
}


