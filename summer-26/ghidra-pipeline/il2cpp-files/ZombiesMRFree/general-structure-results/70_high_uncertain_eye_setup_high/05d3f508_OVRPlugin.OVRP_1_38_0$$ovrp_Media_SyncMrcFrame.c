/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 05d3f508
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  uint uVar13;
  long unaff_x21;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
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
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  FUN_02fe925c();
  *(undefined1 *)(unaff_x21 + 0xae3) = 1;
  puVar6 = PTR_DAT_06fb5bf8;
  puVar5 = PTR_DAT_06fb4a78;
  fVar4 = DAT_01369e28;
  if (unaff_x20 == 0) {
LAB_05d3fb14:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar12 = *(long *)(unaff_x20 + 0x48);
  uVar13 = 0;
  fVar40 = 0.0;
  while( true ) {
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *(long *)puVar6;
    }
    plVar8 = *(long **)(lVar7 + 0xb8);
    lVar9 = *plVar8;
    if (lVar9 == 0) goto LAB_05d3fb14;
    if (*(int *)(lVar9 + 0x18) <= (int)uVar13) {
      return;
    }
    lVar10 = *(long *)(unaff_x19 + 0x158);
    if (lVar10 == 0) goto LAB_05d3fb14;
    if (*(uint *)(lVar10 + 0x18) <= uVar13) break;
    lVar11 = *(long *)(unaff_x19 + 0x140);
    if (lVar11 == 0) goto LAB_05d3fb14;
    if (*(uint *)(lVar11 + 0x18) <= uVar13) break;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d3fb14;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= uVar13) break;
    lVar15 = (long)(int)uVar13;
    lVar11 = lVar11 + lVar15 * 0x10;
    iVar1 = *(int *)(lVar10 + lVar15 * 4 + 0x20);
    fVar36 = *(float *)(lVar11 + 0x20);
    fVar34 = *(float *)(lVar11 + 0x24);
    fVar31 = *(float *)(lVar11 + 0x28);
    fVar32 = *(float *)(lVar11 + 0x2c);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *(long *)puVar6;
      plVar8 = *(long **)(lVar7 + 0xb8);
      lVar9 = *plVar8;
      if (lVar9 == 0) goto LAB_05d3fb14;
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar13) break;
    uVar3 = *(uint *)(lVar9 + lVar15 * 4 + 0x20);
    lVar9 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        plVar8 = *(long **)(*(long *)puVar6 + 0xb8);
      }
      lVar7 = plVar8[3];
      if (lVar7 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar7 + 0x18) <= uVar13) break;
      lVar10 = *(long *)puVar5;
      cVar2 = *(char *)(lVar7 + lVar15 + 0x20);
      if (cVar2 != '\0') {
        fVar40 = 0.0;
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar10 = *(long *)puVar5;
      }
      lVar7 = *(long *)(lVar10 + 0xb8);
      fVar26 = *(float *)(lVar7 + 0x3c);
      fVar22 = *(float *)(lVar7 + 0x40);
      fVar39 = *(float *)(lVar7 + 0x24);
      fVar38 = *(float *)(lVar7 + 0x28);
      fVar29 = *(float *)(lVar7 + 0x2c);
      fVar23 = *(float *)(lVar7 + 0x44);
      fVar30 = fVar40 * fVar29 * -90.0;
      fVar24 = fVar40 * fVar38 * -90.0 * fVar4;
      fVar27 = fVar30 * fVar4;
      fVar20 = (float)FUN_068ecdd4(fVar40 * fVar39 * -90.0 * fVar4,0);
      fVar37 = (fVar34 * fVar27 + fVar32 * fVar20 + fVar36 * fVar30) - fVar31 * fVar24;
      fVar35 = (fVar31 * fVar20 + fVar32 * fVar24 + fVar34 * fVar30) - fVar36 * fVar27;
      fVar33 = (fVar36 * fVar24 + fVar32 * fVar27 + fVar31 * fVar30) - fVar34 * fVar20;
      fVar31 = ((fVar32 * fVar30 - fVar36 * fVar20) - fVar34 * fVar24) - fVar31 * fVar27;
      fStack0000000000000060 = fVar37;
      fStack0000000000000064 = fVar35;
      fStack0000000000000068 = fVar33;
      fStack000000000000006c = fVar31;
      if (lVar12 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
      fVar32 = (float)FUN_05d3fe18(lVar12 + lVar9 * 0x10 + 0x20,&stack0x00000060);
      if (fVar40 <= fVar32) {
        fVar40 = fVar32;
      }
      if (fVar32 < 0.0) {
        if (uVar3 < *(uint *)(lVar12 + 0x18)) {
          lVar7 = lVar12 + lVar9 * 0x10;
          puVar14 = (undefined4 *)(lVar7 + 0x20);
          uVar19 = *puVar14;
          puVar16 = (undefined4 *)(lVar7 + 0x24);
          uVar21 = *puVar16;
          puVar17 = (undefined4 *)(lVar7 + 0x28);
          uVar25 = *puVar17;
          puVar18 = (undefined4 *)(lVar7 + 0x2c);
          uVar28 = *puVar18;
          goto FUN_05d3f7ec;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
        lVar7 = lVar12 + lVar9 * 0x10;
        fVar20 = *(float *)(lVar7 + 0x20);
        fVar24 = *(float *)(lVar7 + 0x24);
        fVar27 = *(float *)(lVar7 + 0x28);
        fVar30 = *(float *)(lVar7 + 0x2c);
        fVar34 = fVar24;
        fVar36 = fVar27;
        uVar19 = FUN_068ed2ec(0);
        uVar21 = FUN_068ed2ec(fVar37,fVar35,fVar33,fVar31,fVar39,fVar38,fVar29,0);
        FUN_068ed2ec(0);
        fVar34 = (float)FUN_031e4528(uVar19,fVar34,fVar36,uVar21,fVar35,fVar33,0);
        fVar32 = fVar32 * *(float *)(unaff_x19 + 0xb0);
        fVar31 = fVar32;
        if (1.0 < fVar32) {
          fVar31 = 1.0;
        }
        fVar31 = 1.0 - fVar31;
        if (fVar32 < 0.0) {
          fVar31 = 1.0;
        }
        fVar22 = fVar22 * fVar34 * fVar31;
        fVar32 = fVar22 * fVar4;
        fVar36 = fVar23 * fVar34 * fVar31 * fVar4;
        fVar31 = (float)FUN_068ecdd4(fVar26 * fVar34 * fVar31 * fVar4,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
        *(float *)(lVar7 + 0x20) =
             (fVar24 * fVar36 + fVar30 * fVar31 + fVar20 * fVar22) - fVar27 * fVar32;
        *(float *)(lVar7 + 0x24) =
             (fVar27 * fVar31 + fVar30 * fVar32 + fVar24 * fVar22) - fVar20 * fVar36;
        *(float *)(lVar7 + 0x28) =
             (fVar20 * fVar32 + fVar30 * fVar36 + fVar27 * fVar22) - fVar24 * fVar31;
        *(float *)(lVar7 + 0x2c) =
             ((fVar30 * fVar22 - fVar20 * fVar31) - fVar24 * fVar32) - fVar27 * fVar36;
      }
    }
    else if (iVar1 == 2) {
      if (lVar12 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
      lVar7 = lVar12 + lVar9 * 0x10;
      puVar14 = (undefined4 *)(lVar7 + 0x20);
      uVar19 = *puVar14;
      puVar16 = (undefined4 *)(lVar7 + 0x24);
      uVar21 = *puVar16;
      puVar17 = (undefined4 *)(lVar7 + 0x28);
      uVar25 = *puVar17;
      puVar18 = (undefined4 *)(lVar7 + 0x2c);
      uVar28 = *puVar18;
FUN_05d3f7ec:
      uVar19 = FUN_068eca84(uVar19,0);
      if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
      *puVar14 = uVar19;
      *puVar16 = uVar21;
      *puVar17 = uVar25;
      *puVar18 = uVar28;
    }
    lVar7 = *(long *)(unaff_x19 + 0x158);
    if (lVar7 == 0) goto LAB_05d3fb14;
    if (*(uint *)(lVar7 + 0x18) <= uVar13) break;
    if (*(int *)(lVar7 + lVar15 * 4 + 0x20) == 0) {
      lVar7 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar7 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar7 == 0) goto LAB_05d3fb14;
    if (*(uint *)(lVar7 + 0x18) <= uVar13) break;
    lVar7 = *(long *)(lVar7 + lVar15 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_05d3fb14;
    FUN_05cc45d8(lVar7,0);
    lVar7 = *(long *)(unaff_x19 + 0x148);
    if (lVar7 == 0) goto LAB_05d3fb14;
    if (*(uint *)(lVar7 + 0x18) <= uVar13) break;
    if (lVar12 == 0) goto LAB_05d3fb14;
    if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
    lVar7 = lVar7 + lVar15 * 0x10;
    lVar9 = lVar12 + lVar9 * 0x10;
    uVar21 = *(undefined4 *)(lVar7 + 0x24);
    uVar25 = *(undefined4 *)(lVar7 + 0x28);
    uVar28 = *(undefined4 *)(lVar7 + 0x2c);
    uVar19 = FUN_068eca84(*(undefined4 *)(lVar7 + 0x20),0);
    if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar19;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar25;
    *(undefined4 *)(lVar9 + 0x2c) = uVar28;
    if (*(uint *)(lVar12 + 0x18) <= uVar3) break;
    lVar7 = *(long *)(unaff_x19 + 0x150);
    if (lVar7 == 0) goto LAB_05d3fb14;
    if (*(uint *)(lVar7 + 0x18) <= uVar13) break;
    lVar7 = lVar7 + lVar15 * 0x10;
    uVar13 = uVar13 + 1;
    *(undefined4 *)(lVar7 + 0x20) = uVar19;
    *(undefined4 *)(lVar7 + 0x24) = uVar21;
    *(undefined4 *)(lVar7 + 0x28) = uVar25;
    *(undefined4 *)(lVar7 + 0x2c) = uVar28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


