/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$Invoke
ENTRY_POINT: 05d3fac8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton2Delegate__Invoke
               (float param_1,float param_2,float param_3,float param_4,float param_5)

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
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    *unaff_x27 = param_1 - param_2;
    *unaff_x28 = param_3;
    *unaff_x29 = param_5;
    *unaff_x24 = param_4;
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
      uVar18 = *(undefined4 *)(lVar4 + 0x24);
      uVar21 = *(undefined4 *)(lVar4 + 0x28);
      uVar24 = *(undefined4 *)(lVar4 + 0x2c);
      uVar14 = FUN_068eca84(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      *(undefined4 *)(lVar5 + 0x20) = uVar14;
      *(undefined4 *)(lVar5 + 0x24) = uVar18;
      *(undefined4 *)(lVar5 + 0x28) = uVar21;
      *(undefined4 *)(lVar5 + 0x2c) = uVar24;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar14;
      *(undefined4 *)(lVar4 + 0x24) = uVar18;
      *(undefined4 *)(lVar4 + 0x28) = uVar21;
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
      fVar30 = *(float *)(lVar7 + 0x20);
      fVar28 = *(float *)(lVar7 + 0x24);
      fVar25 = *(float *)(lVar7 + 0x28);
      fVar26 = *(float *)(lVar7 + 0x2c);
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
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar24 = *puVar12;
FUN_05d3f7ec:
          uVar14 = FUN_068eca84(uVar14,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
          *puVar8 = uVar14;
          *puVar10 = uVar18;
          *puVar11 = uVar21;
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
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *unaff_x23;
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      fVar19 = *(float *)(lVar4 + 0x3c);
      fVar15 = *(float *)(lVar4 + 0x40);
      fVar33 = *(float *)(lVar4 + 0x24);
      fVar32 = *(float *)(lVar4 + 0x28);
      fVar22 = *(float *)(lVar4 + 0x2c);
      fVar16 = *(float *)(lVar4 + 0x44);
      fVar23 = unaff_s15 * fVar22 * -90.0;
      fVar17 = unaff_s15 * fVar32 * -90.0 * in_stack_00000058;
      fVar20 = fVar23 * in_stack_00000058;
      fVar13 = (float)FUN_068ecdd4(unaff_s15 * fVar33 * -90.0 * in_stack_00000058,0);
      fVar31 = (fVar28 * fVar20 + fVar26 * fVar13 + fVar30 * fVar23) - fVar25 * fVar17;
      fVar29 = (fVar25 * fVar13 + fVar26 * fVar17 + fVar28 * fVar23) - fVar30 * fVar20;
      fVar27 = (fVar30 * fVar17 + fVar26 * fVar20 + fVar25 * fVar23) - fVar28 * fVar13;
      fVar25 = ((fVar26 * fVar23 - fVar30 * fVar13) - fVar28 * fVar17) - fVar25 * fVar20;
      fStack0000000000000060 = fVar31;
      fStack0000000000000064 = fVar29;
      fStack0000000000000068 = fVar27;
      fStack000000000000006c = fVar25;
      if (unaff_x20 == 0) goto LAB_05d3fb14;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      fVar26 = (float)FUN_05d3fe18(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar26) {
        unaff_s15 = fVar26;
      }
      if (fVar26 < 0.0) {
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar14 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar24 = *puVar12;
          goto FUN_05d3f7ec;
        }
        goto LAB_05d3fb10;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) {
LAB_05d3fb10:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    unaff_x27 = (float *)(lVar4 + 0x20);
    fVar13 = *unaff_x27;
    unaff_x28 = (float *)(lVar4 + 0x24);
    fVar17 = *unaff_x28;
    unaff_x29 = (float *)(lVar4 + 0x28);
    fVar20 = *unaff_x29;
    unaff_x24 = (float *)(lVar4 + 0x2c);
    fVar23 = *unaff_x24;
    fVar28 = fVar17;
    fVar30 = fVar20;
    uVar14 = FUN_068ed2ec(0);
    uVar18 = FUN_068ed2ec(fVar31,fVar29,fVar27,fVar25,fVar33,fVar32,fVar22,0);
    FUN_068ed2ec(0);
    fVar28 = (float)FUN_031e4528(uVar14,fVar28,fVar30,uVar18,fVar29,fVar27,0);
    fVar26 = fVar26 * *(float *)(unaff_x19 + 0xb0);
    fVar25 = fVar26;
    if (1.0 < fVar26) {
      fVar25 = 1.0;
    }
    fVar25 = 1.0 - fVar25;
    if (fVar26 < 0.0) {
      fVar25 = 1.0;
    }
    fVar15 = fVar15 * fVar28 * fVar25;
    fVar26 = fVar15 * in_stack_00000058;
    fVar30 = fVar16 * fVar28 * fVar25 * in_stack_00000058;
    fVar25 = (float)FUN_068ecdd4(fVar19 * fVar28 * fVar25 * in_stack_00000058,0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
    param_2 = fVar20 * fVar26;
    param_1 = fVar17 * fVar30 + fVar23 * fVar25 + fVar13 * fVar15;
    param_4 = ((fVar23 * fVar15 - fVar13 * fVar25) - fVar17 * fVar26) - fVar20 * fVar30;
    param_5 = (fVar13 * fVar26 + fVar23 * fVar30 + fVar20 * fVar15) - fVar17 * fVar25;
    param_3 = (fVar20 * fVar25 + fVar23 * fVar26 + fVar17 * fVar15) - fVar13 * fVar30;
  } while( true );
}


