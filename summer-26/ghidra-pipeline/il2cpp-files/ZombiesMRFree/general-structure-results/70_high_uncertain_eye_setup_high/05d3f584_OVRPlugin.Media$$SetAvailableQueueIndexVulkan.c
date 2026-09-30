/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 05d3f584
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetAvailableQueueIndexVulkan(long *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  while (in_x11 != 0) {
    if (*(uint *)(in_x11 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
    if (*(long *)(unaff_x19 + 0xd0) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05d3fb10;
    lVar7 = (long)(int)unaff_w21;
    lVar8 = in_x11 + lVar7 * 0x10;
    iVar1 = *(int *)(in_x10 + lVar7 * 4 + 0x20);
    fVar29 = *(float *)(lVar8 + 0x20);
    fVar27 = *(float *)(lVar8 + 0x24);
    fVar24 = *(float *)(lVar8 + 0x28);
    fVar25 = *(float *)(lVar8 + 0x2c);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_2 = *unaff_x22;
      param_1 = *(long **)(param_2 + 0xb8);
      in_x9 = *param_1;
      if (in_x9 == 0) break;
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
    uVar3 = *(uint *)(in_x9 + lVar7 * 4 + 0x20);
    lVar8 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        param_1 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = param_1[3];
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      lVar4 = *unaff_x23;
      cVar2 = *(char *)(lVar5 + lVar7 + 0x20);
      if (cVar2 != '\0') {
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *unaff_x23;
      }
      lVar5 = *(long *)(lVar4 + 0xb8);
      fVar19 = *(float *)(lVar5 + 0x3c);
      fVar15 = *(float *)(lVar5 + 0x40);
      fVar32 = *(float *)(lVar5 + 0x24);
      fVar31 = *(float *)(lVar5 + 0x28);
      fVar22 = *(float *)(lVar5 + 0x2c);
      fVar16 = *(float *)(lVar5 + 0x44);
      fVar23 = unaff_s15 * fVar22 * -90.0;
      fVar17 = unaff_s15 * fVar31 * -90.0 * in_stack_00000058;
      fVar20 = fVar23 * in_stack_00000058;
      fVar13 = (float)FUN_068ecdd4(unaff_s15 * fVar32 * -90.0 * in_stack_00000058,0);
      fVar30 = (fVar27 * fVar20 + fVar25 * fVar13 + fVar29 * fVar23) - fVar24 * fVar17;
      fVar28 = (fVar24 * fVar13 + fVar25 * fVar17 + fVar27 * fVar23) - fVar29 * fVar20;
      fVar26 = (fVar29 * fVar17 + fVar25 * fVar20 + fVar24 * fVar23) - fVar27 * fVar13;
      fVar24 = ((fVar25 * fVar23 - fVar29 * fVar13) - fVar27 * fVar17) - fVar24 * fVar20;
      fStack0000000000000060 = fVar30;
      fStack0000000000000064 = fVar28;
      fStack0000000000000068 = fVar26;
      fStack000000000000006c = fVar24;
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
      fVar25 = (float)FUN_05d3fe18(unaff_x20 + lVar8 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar25) {
        unaff_s15 = fVar25;
      }
      if (fVar25 < 0.0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
        lVar5 = unaff_x20 + lVar8 * 0x10;
        puVar6 = (undefined4 *)(lVar5 + 0x20);
        uVar12 = *puVar6;
        puVar9 = (undefined4 *)(lVar5 + 0x24);
        uVar14 = *puVar9;
        puVar10 = (undefined4 *)(lVar5 + 0x28);
        uVar18 = *puVar10;
        puVar11 = (undefined4 *)(lVar5 + 0x2c);
        uVar21 = *puVar11;
        goto FUN_05d3f7ec;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
        lVar5 = unaff_x20 + lVar8 * 0x10;
        fVar13 = *(float *)(lVar5 + 0x20);
        fVar17 = *(float *)(lVar5 + 0x24);
        fVar20 = *(float *)(lVar5 + 0x28);
        fVar23 = *(float *)(lVar5 + 0x2c);
        fVar27 = fVar17;
        fVar29 = fVar20;
        uVar12 = FUN_068ed2ec(0);
        uVar14 = FUN_068ed2ec(fVar30,fVar28,fVar26,fVar24,fVar32,fVar31,fVar22,0);
        FUN_068ed2ec(0);
        fVar27 = (float)FUN_031e4528(uVar12,fVar27,fVar29,uVar14,fVar28,fVar26,0);
        fVar25 = fVar25 * *(float *)(unaff_x19 + 0xb0);
        fVar24 = fVar25;
        if (1.0 < fVar25) {
          fVar24 = 1.0;
        }
        fVar24 = 1.0 - fVar24;
        if (fVar25 < 0.0) {
          fVar24 = 1.0;
        }
        fVar15 = fVar15 * fVar27 * fVar24;
        fVar25 = fVar15 * in_stack_00000058;
        fVar29 = fVar16 * fVar27 * fVar24 * in_stack_00000058;
        fVar24 = (float)FUN_068ecdd4(fVar19 * fVar27 * fVar24 * in_stack_00000058,0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
        *(float *)(lVar5 + 0x20) =
             (fVar17 * fVar29 + fVar23 * fVar24 + fVar13 * fVar15) - fVar20 * fVar25;
        *(float *)(lVar5 + 0x24) =
             (fVar20 * fVar24 + fVar23 * fVar25 + fVar17 * fVar15) - fVar13 * fVar29;
        *(float *)(lVar5 + 0x28) =
             (fVar13 * fVar25 + fVar23 * fVar29 + fVar20 * fVar15) - fVar17 * fVar24;
        *(float *)(lVar5 + 0x2c) =
             ((fVar23 * fVar15 - fVar13 * fVar24) - fVar17 * fVar25) - fVar20 * fVar29;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
      lVar5 = unaff_x20 + lVar8 * 0x10;
      puVar6 = (undefined4 *)(lVar5 + 0x20);
      uVar12 = *puVar6;
      puVar9 = (undefined4 *)(lVar5 + 0x24);
      uVar14 = *puVar9;
      puVar10 = (undefined4 *)(lVar5 + 0x28);
      uVar18 = *puVar10;
      puVar11 = (undefined4 *)(lVar5 + 0x2c);
      uVar21 = *puVar11;
FUN_05d3f7ec:
      uVar12 = FUN_068eca84(uVar12,0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
      *puVar6 = uVar12;
      *puVar9 = uVar14;
      *puVar10 = uVar18;
      *puVar11 = uVar21;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) {
LAB_05d3fb10:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (*(int *)(lVar5 + lVar7 * 4 + 0x20) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
    lVar5 = *(long *)(lVar5 + lVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    FUN_05cc45d8(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x148);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
    lVar5 = lVar5 + lVar7 * 0x10;
    lVar8 = unaff_x20 + lVar8 * 0x10;
    uVar14 = *(undefined4 *)(lVar5 + 0x24);
    uVar18 = *(undefined4 *)(lVar5 + 0x28);
    uVar21 = *(undefined4 *)(lVar5 + 0x2c);
    uVar12 = FUN_068eca84(*(undefined4 *)(lVar5 + 0x20),0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
    *(undefined4 *)(lVar8 + 0x20) = uVar12;
    *(undefined4 *)(lVar8 + 0x24) = uVar14;
    *(undefined4 *)(lVar8 + 0x28) = uVar18;
    *(undefined4 *)(lVar8 + 0x2c) = uVar21;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d3fb10;
    lVar8 = *(long *)(unaff_x19 + 0x150);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
    lVar8 = lVar8 + lVar7 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar8 + 0x20) = uVar12;
    *(undefined4 *)(lVar8 + 0x24) = uVar14;
    *(undefined4 *)(lVar8 + 0x28) = uVar18;
    *(undefined4 *)(lVar8 + 0x2c) = uVar21;
    param_2 = *unaff_x22;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_2 = *unaff_x22;
    }
    param_1 = *(long **)(param_2 + 0xb8);
    in_x9 = *param_1;
    if (in_x9 == 0) break;
    if (*(int *)(in_x9 + 0x18) <= (int)unaff_w21) {
      return;
    }
    in_x10 = *(long *)(unaff_x19 + 0x158);
    if (in_x10 == 0) break;
    if (*(uint *)(in_x10 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
    in_x11 = *(long *)(unaff_x19 + 0x140);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


