/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$HandleMessageClientRPC
ENTRY_POINT: 052f9838
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__HandleMessageClientRPC
               (undefined1 param_1 [16],undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x19;
  int unaff_w20;
  ulong uVar13;
  long *plVar14;
  undefined4 unaff_w22;
  ulong uVar15;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long *plVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plVar17;
  uint unaff_w27;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float unaff_s9;
  uint uStack0000000000000014;
  
  uStack0000000000000014 = unaff_w27;
  if ((int)unaff_w27 < 2) {
    uStack0000000000000014 = 1;
  }
  fVar19 = (float)FUN_066beda4(param_2,0);
                    /* try { // try from 052f9854 to 053f98b3 has its CatchHandler @ 052f9a8c */
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_052f9de4;
  FUN_066a4a54(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_06d3dfc8,0);
  puVar4 = PTR_DAT_06d3dfe8;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_052f9de4;
  fVar20 = fVar19 * *(float *)(unaff_x19 + 0x24) + DAT_013f6c1c;
  FUN_066a4b7c(fVar19 - fVar20,fVar20 + fVar20,0.25 / fVar20,0,*(long *)(unaff_x19 + 0x40),
               *(undefined8 *)PTR_DAT_06d3dfd8,0);
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    lVar8 = *(long *)(unaff_x19 + 0x40);
    uVar12 = *(undefined8 *)puVar4;
    uVar21 = 0xbf000000;
    if (*(char *)(unaff_x19 + 0x31) == '\0') goto LAB_052f98d0;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x40);
                    /* try { // try from 052f98cc to 053f98df has its CatchHandler @ 052f9a84 */
    uVar12 = *(undefined8 *)puVar4;
LAB_052f98d0:
    uVar21 = 0;
  }
                    /* try { // try from 052f98ec to 053f98fb has its CatchHandler @ 052f9a80 */
  if (lVar8 != 0) {
    FUN_066a4a54(uVar21,lVar8,uVar12,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* try { // try from 052f990c to 053f991b has its CatchHandler @ 052f9a74 */
      FUN_066a4a54((unaff_s9 + 0.5) - (float)unaff_w20,*(long *)(unaff_x19 + 0x40),
                   *(undefined8 *)PTR_DAT_06d3dfd0,0);
      puVar4 = PTR_DAT_06d38bc0;
                    /* try { // try from 052f9924 to 053f9933 has its CatchHandler @ 052f9a70 */
      if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* try { // try from 052f9934 to 053f9a43 has its CatchHandler @ 052f95a8 */
        fVar19 = *(float *)(unaff_x19 + 0x2c);
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        FUN_066a4a54(fVar19,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_06d0b2f8,0);
        plVar9 = (long *)FUN_066b5a9c(unaff_w22,unaff_w24,0,unaff_w23,0);
        uVar1 = *(undefined1 *)(unaff_x19 + 0x31);
        uVar12 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar4);
        }
        puVar3 = PTR_DAT_06d01e20;
        FUN_0669dd20(unaff_x26,plVar9,uVar12,uVar1,0);
        plVar17 = *(long **)(unaff_x19 + 0x48);
        uVar15 = 0;
        uVar13 = (ulong)uStack0000000000000014;
        lVar8 = 0x20;
        plVar16 = plVar9;
        do {
          if (plVar16 == (long *)0x0) goto LAB_052f9de4;
          iVar5 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
          iVar6 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          lVar10 = FUN_066b5a9c(iVar5 >> 1,iVar6 >> 1,0,unaff_w23,0);
          if (plVar17 == (long *)0x0) goto LAB_052f9de4;
                    /* try { // try from 052f9a44 to 053f9a47 has its CatchHandler @ 052f9a7c */
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_052f9dec;
                    /* try { // try from 052f9a48 to 053f9a4b has its CatchHandler @ 052f95a8 */
                    /* try { // try from 052f9a4c to 053f9a4f has its CatchHandler @ 052f9a78 */
                    /* try { // try from 052f9a50 to 053f9a53 has its CatchHandler @ 052f95a8 */
          if (*(uint *)(plVar17 + 3) <= uVar15) goto LAB_052f9de8;
                    /* try { // try from 052f9a54 to 053f9a57 has its CatchHandler @ 052f9a6c */
                    /* try { // try from 052f9a58 to 053f9a5b has its CatchHandler @ 052f9a68 */
                    /* try { // try from 052f9a5c to 053f9a9b has its CatchHandler @ 052f95a8 */
          *(long *)((long)plVar17 + lVar8) = lVar10;
          thunk_FUN_02f411dc((long *)((long)plVar17 + lVar8),lVar10);
                    /* catch() { ... } // from try @ 052f9a58 with catch @ 052f9a68 */
          if (lVar8 == 0x20) {
                    /* catch() { ... } // from try @ 052f9a54 with catch @ 052f9a6c */
                    /* catch() { ... } // from try @ 052f9924 with catch @ 052f9a70 */
            uVar21 = 2;
                    /* catch() { ... } // from try @ 052f990c with catch @ 052f9a74 */
                    /* catch() { ... } // from try @ 052f9a4c with catch @ 052f9a78 */
            if (*(char *)(unaff_x19 + 0x31) != '\0') {
              uVar21 = 3;
            }
          }
          else {
                    /* catch() { ... } // from try @ 052f98ec with catch @ 052f9a80 */
            uVar21 = 4;
          }
                    /* catch() { ... } // from try @ 052f98cc with catch @ 052f9a84 */
          lVar10 = *(long *)(unaff_x19 + 0x48);
                    /* catch() { ... } // from try @ 052f9814 with catch @ 052f9a88 */
          if (lVar10 == 0) goto LAB_052f9de4;
                    /* catch() { ... } // from try @ 052f9854 with catch @ 052f9a8c */
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_052f9de8;
                    /* try { // try from 052f9a9c to 053f9a9f has its CatchHandler @ 052f9ab8 */
          uVar12 = *(undefined8 *)(lVar10 + lVar8);
          uVar18 = *(undefined8 *)(unaff_x19 + 0x40);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
                    /* catch() { ... } // from try @ 052f9a9c with catch @ 052f9ab8 */
          FUN_0669dd20(plVar16,uVar12,uVar18,uVar21,0);
          plVar17 = *(long **)(unaff_x19 + 0x48);
          if (plVar17 == (long *)0x0) goto LAB_052f9de4;
          if (*(uint *)(plVar17 + 3) <= uVar15) goto LAB_052f9de8;
          plVar16 = *(long **)((long)plVar17 + lVar8);
          uVar15 = uVar15 + 1;
          lVar8 = lVar8 + 8;
        } while (uVar13 != uVar15);
                    /* try { // try from 052f9af0 to 053f9b17 has its CatchHandler @ 052f9b2c */
        if ((int)unaff_w27 < 2) {
LAB_052f9c44:
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_066a3538(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_06d3dfe0,unaff_x26,0);
            uVar12 = *(undefined8 *)(unaff_x19 + 0x40);
            uVar21 = 7;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar21 = 8;
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58(7);
            }
            FUN_0669dd20(plVar16,unaff_x25,uVar12,uVar21,0);
            uVar15 = 0;
            lVar8 = 0x20;
            while (lVar10 = *(long *)(unaff_x19 + 0x48), lVar10 != 0) {
              if (*(uint *)(lVar10 + 0x18) <= uVar15) {
LAB_052f9de8:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              uVar12 = *(undefined8 *)(lVar10 + lVar8);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar13 = FUN_066c971c(uVar12,0,0);
              if ((uVar13 & 1) != 0) {
                lVar10 = *(long *)(unaff_x19 + 0x48);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_052f9de8;
                FUN_066b42b8(*(undefined8 *)(lVar10 + lVar8),0);
              }
              lVar10 = *(long *)(unaff_x19 + 0x50);
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_052f9de8;
              uVar12 = *(undefined8 *)(lVar10 + lVar8);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar13 = FUN_066c971c(uVar12,0,0);
              if ((uVar13 & 1) != 0) {
                lVar10 = *(long *)(unaff_x19 + 0x50);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_052f9de8;
                FUN_066b42b8(*(undefined8 *)(lVar10 + lVar8),0);
              }
              lVar10 = *(long *)(unaff_x19 + 0x48);
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_052f9de8;
              *(undefined8 *)(lVar10 + lVar8) = 0;
              thunk_FUN_02f411dc((undefined8 *)(lVar10 + lVar8),0);
              lVar10 = *(long *)(unaff_x19 + 0x50);
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_052f9de8;
              *(undefined8 *)(lVar10 + lVar8) = 0;
              thunk_FUN_02f411dc((undefined8 *)(lVar10 + lVar8),0);
              lVar8 = lVar8 + 8;
              uVar15 = uVar15 + 1;
              if (lVar8 == 0xa0) {
                FUN_066b42b8(plVar9,0);
                return;
              }
            }
          }
        }
        else {
          uVar2 = uStack0000000000000014 - 2;
          do {
            if (*(uint *)(plVar17 + 3) <= uVar2) goto LAB_052f9de8;
                    /* try { // try from 052f9b18 to 053f9b23 has its CatchHandler @ 052f95a8 */
            if (*(long *)(unaff_x19 + 0x40) == 0) break;
            uVar15 = (ulong)uVar2;
                    /* try { // try from 052f9b24 to 053f9b2b has its CatchHandler @ 052f9b2c */
            plVar17 = (long *)plVar17[uVar15 + 4];
                    /* catch() { ... } // from try @ 052f9af0 with catch @ 052f9b2c
                       catch() { ... } // from try @ 052f9b24 with catch @ 052f9b2c */
            FUN_066a3538(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_06d3dfe0,plVar17,0);
            if (plVar17 == (long *)0x0) break;
            plVar14 = *(long **)(unaff_x19 + 0x50);
            uVar21 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
            uVar7 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
            lVar8 = FUN_066b5a9c(uVar21,uVar7,0,unaff_w23,0);
            if (plVar14 == (long *)0x0) break;
            if ((lVar8 != 0) &&
               (lVar10 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)) {
LAB_052f9dec:
              uVar12 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar12,0);
            }
            if (*(uint *)(plVar14 + 3) <= uVar2) goto LAB_052f9de8;
            plVar14[uVar15 + 4] = lVar8;
            thunk_FUN_02f411dc(plVar14 + uVar15 + 4,lVar8);
            lVar8 = *(long *)(unaff_x19 + 0x50);
            uVar21 = 5;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar21 = 6;
            }
            if (lVar8 == 0) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_052f9de8;
            uVar12 = *(undefined8 *)(lVar8 + uVar15 * 8 + 0x20);
            uVar18 = *(undefined8 *)(unaff_x19 + 0x40);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_0669dd20(plVar16,uVar12,uVar18,uVar21,0);
            lVar8 = *(long *)(unaff_x19 + 0x50);
            if (lVar8 == 0) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_052f9de8;
            plVar16 = *(long **)(lVar8 + uVar15 * 8 + 0x20);
            if ((int)uVar2 < 1) goto LAB_052f9c44;
            plVar17 = *(long **)(unaff_x19 + 0x48);
            uVar2 = uVar2 - 1;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
  }
LAB_052f9de4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


