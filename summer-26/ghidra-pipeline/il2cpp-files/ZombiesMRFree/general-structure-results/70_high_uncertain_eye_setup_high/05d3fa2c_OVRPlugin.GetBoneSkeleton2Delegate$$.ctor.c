/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$.ctor
ENTRY_POINT: 05d3fa2c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton2Delegate___ctor
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar8;
  float *unaff_x24;
  long unaff_x25;
  uint uVar9;
  long unaff_x26;
  undefined4 *puVar10;
  float *unaff_x27;
  undefined4 *puVar11;
  float *unaff_x28;
  undefined4 *puVar12;
  float *unaff_x29;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float unaff_s9;
  float fVar26;
  float unaff_s10;
  float fVar27;
  float fVar28;
  float unaff_s11;
  float fVar29;
  float fVar30;
  float unaff_s15;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  while( true ) {
    param_4 = param_4 * param_2;
    fVar18 = param_4 * param_6;
    fVar21 = param_1 * param_2 * param_6;
    fVar15 = (float)FUN_068ecdd4(param_3 * param_2 * param_6,0);
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) break;
    *unaff_x27 = (unaff_s11 * fVar21 + unaff_s10 * fVar15 + unaff_s9 * param_4) - unaff_s15 * fVar18
    ;
    *unaff_x28 = (unaff_s15 * fVar15 + unaff_s10 * fVar18 + unaff_s11 * param_4) - unaff_s9 * fVar21
    ;
    *unaff_x29 = (unaff_s9 * fVar18 + unaff_s10 * fVar21 + unaff_s15 * param_4) - unaff_s11 * fVar15
    ;
    *unaff_x24 = ((unaff_s10 * param_4 - unaff_s9 * fVar15) - unaff_s11 * fVar18) -
                 unaff_s15 * fVar21;
LAB_05d3f810:
    do {
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) {
LAB_05d3fb14:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar4 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_05d3fb14;
      FUN_05cc45d8(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0x148);
      if (lVar4 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      if (unaff_x20 == 0) goto LAB_05d3fb14;
      uVar9 = (uint)unaff_x26;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      lVar5 = unaff_x20 + unaff_x26 * 0x10;
      uVar17 = *(undefined4 *)(lVar4 + 0x24);
      uVar20 = *(undefined4 *)(lVar4 + 0x28);
      uVar24 = *(undefined4 *)(lVar4 + 0x2c);
      uVar14 = FUN_068eca84(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      *(undefined4 *)(lVar5 + 0x20) = uVar14;
      *(undefined4 *)(lVar5 + 0x24) = uVar17;
      *(undefined4 *)(lVar5 + 0x28) = uVar20;
      *(undefined4 *)(lVar5 + 0x2c) = uVar24;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar14;
      *(undefined4 *)(lVar4 + 0x24) = uVar17;
      *(undefined4 *)(lVar4 + 0x28) = uVar20;
      *(undefined4 *)(lVar4 + 0x2c) = uVar24;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *unaff_x22;
      }
      plVar3 = *(long **)(lVar4 + 0xb8);
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_05d3fb14;
      if (*(int *)(lVar5 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x158);
      if (lVar6 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      lVar7 = *(long *)(unaff_x19 + 0x140);
      if (lVar7 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d3fb14;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      unaff_x25 = (long)(int)unaff_w21;
      lVar7 = lVar7 + unaff_x25 * 0x10;
      iVar1 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
      fVar27 = *(float *)(lVar7 + 0x20);
      fVar21 = *(float *)(lVar7 + 0x24);
      fVar15 = *(float *)(lVar7 + 0x28);
      fVar18 = *(float *)(lVar7 + 0x2c);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *unaff_x22;
        plVar3 = *(long **)(lVar4 + 0xb8);
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_05d3fb14;
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      uVar9 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
      unaff_x26 = (long)(int)uVar9;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x20 == 0) goto LAB_05d3fb14;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar14 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar24 = *puVar12;
FUN_05d3f7ec:
          uVar14 = FUN_068eca84(uVar14,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
          *puVar8 = uVar14;
          *puVar10 = uVar17;
          *puVar11 = uVar20;
          *puVar12 = uVar24;
        }
        goto LAB_05d3f810;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        plVar3 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar3[3];
      if (lVar4 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      lVar5 = *unaff_x23;
      cVar2 = *(char *)(lVar4 + unaff_x25 + 0x20);
      if (cVar2 != '\0') {
        fStack000000000000005c = 0.0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *unaff_x23;
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      param_3 = *(float *)(lVar4 + 0x3c);
      param_4 = *(float *)(lVar4 + 0x40);
      fVar30 = *(float *)(lVar4 + 0x24);
      fVar29 = *(float *)(lVar4 + 0x28);
      fVar22 = *(float *)(lVar4 + 0x2c);
      param_1 = *(float *)(lVar4 + 0x44);
      fVar23 = fStack000000000000005c * fVar22 * -90.0;
      fVar16 = fStack000000000000005c * fVar29 * -90.0 * fStack0000000000000058;
      fVar19 = fVar23 * fStack0000000000000058;
      fVar13 = (float)FUN_068ecdd4(fStack000000000000005c * fVar30 * -90.0 * fStack0000000000000058,
                                   0);
      fVar28 = (fVar21 * fVar19 + fVar18 * fVar13 + fVar27 * fVar23) - fVar15 * fVar16;
      fVar26 = (fVar15 * fVar13 + fVar18 * fVar16 + fVar21 * fVar23) - fVar27 * fVar19;
      fVar25 = (fVar27 * fVar16 + fVar18 * fVar19 + fVar15 * fVar23) - fVar21 * fVar13;
      fVar15 = ((fVar18 * fVar23 - fVar27 * fVar13) - fVar21 * fVar16) - fVar15 * fVar19;
      fStack0000000000000060 = fVar28;
      fStack0000000000000064 = fVar26;
      fStack0000000000000068 = fVar25;
      fStack000000000000006c = fVar15;
      if (unaff_x20 == 0) goto LAB_05d3fb14;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      fVar18 = (float)FUN_05d3fe18(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (fStack000000000000005c <= fVar18) {
        fStack000000000000005c = fVar18;
      }
      if (fVar18 < 0.0) {
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar14 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar24 = *puVar12;
          goto FUN_05d3f7ec;
        }
        goto LAB_05d3fb10;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    unaff_x27 = (float *)(lVar4 + 0x20);
    unaff_s9 = *unaff_x27;
    unaff_x28 = (float *)(lVar4 + 0x24);
    unaff_s11 = *unaff_x28;
    unaff_x29 = (float *)(lVar4 + 0x28);
    unaff_s15 = *unaff_x29;
    unaff_x24 = (float *)(lVar4 + 0x2c);
    unaff_s10 = *unaff_x24;
    fVar21 = unaff_s11;
    fVar27 = unaff_s15;
    uVar14 = FUN_068ed2ec(0);
    uVar17 = FUN_068ed2ec(fVar28,fVar26,fVar25,fVar15,fVar30,fVar29,fVar22,0);
    FUN_068ed2ec(0);
    fVar21 = (float)FUN_031e4528(uVar14,fVar21,fVar27,uVar17,fVar26,fVar25,0);
    param_3 = param_3 * fVar21;
    param_4 = param_4 * fVar21;
    fVar18 = fVar18 * *(float *)(unaff_x19 + 0xb0);
    fVar15 = fVar18;
    if (1.0 < fVar18) {
      fVar15 = 1.0;
    }
    param_2 = 1.0 - fVar15;
    if (fVar18 < 0.0) {
      param_2 = 1.0;
    }
    param_1 = param_1 * fVar21;
    param_6 = fStack0000000000000058;
  }
LAB_05d3fb10:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


