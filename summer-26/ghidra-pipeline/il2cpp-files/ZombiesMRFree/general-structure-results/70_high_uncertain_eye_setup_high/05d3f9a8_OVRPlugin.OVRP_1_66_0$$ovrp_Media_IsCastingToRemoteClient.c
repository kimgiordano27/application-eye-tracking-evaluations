/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 05d3f9a8
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


void OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient
               (float param_1,ulong param_2,ulong param_3)

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
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float unaff_s8;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  undefined4 uStack0000000000000044;
  float fStack0000000000000048;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  fStack0000000000000048 = param_1;
  while( true ) {
    uStack0000000000000028 = (undefined4)param_3;
    uStack000000000000002c = (undefined4)param_2;
    FUN_068ed2ec(0);
    fVar14 = (float)FUN_031e4528(uStack0000000000000044,fStack0000000000000040,
                                 fStack000000000000003c,fStack0000000000000048,
                                 uStack000000000000002c,uStack0000000000000028,0);
    fVar17 = unaff_s8 * *(float *)(unaff_x19 + 0xb0);
    fVar18 = fVar17;
    if (1.0 < fVar17) {
      fVar18 = 1.0;
    }
    fVar18 = 1.0 - fVar18;
    if (fVar17 < 0.0) {
      fVar18 = 1.0;
    }
    fVar24 = unaff_s13 * fVar14 * fVar18;
    fVar17 = fVar24 * fStack0000000000000058;
    fVar21 = in_stack_00000050._4_4_ * fVar14 * fVar18 * fStack0000000000000058;
    fVar18 = (float)FUN_068ecdd4(unaff_s14 * fVar14 * fVar18 * fStack0000000000000058,0);
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) break;
    *unaff_x27 = (fStack0000000000000030 * fVar21 +
                 fStack0000000000000034 * fVar18 + fStack0000000000000038 * fVar24) -
                 unaff_s15 * fVar17;
    *unaff_x28 = (unaff_s15 * fVar18 +
                 fStack0000000000000034 * fVar17 + fStack0000000000000030 * fVar24) -
                 fStack0000000000000038 * fVar21;
    *unaff_x29 = (fStack0000000000000038 * fVar17 +
                 fStack0000000000000034 * fVar21 + unaff_s15 * fVar24) -
                 fStack0000000000000030 * fVar18;
    *unaff_x24 = ((fStack0000000000000034 * fVar24 - fStack0000000000000038 * fVar18) -
                 fStack0000000000000030 * fVar17) - unaff_s15 * fVar21;
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
      uVar16 = *(undefined4 *)(lVar4 + 0x24);
      uVar20 = *(undefined4 *)(lVar4 + 0x28);
      uVar23 = *(undefined4 *)(lVar4 + 0x2c);
      uVar13 = FUN_068eca84(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      *(undefined4 *)(lVar5 + 0x20) = uVar13;
      *(undefined4 *)(lVar5 + 0x24) = uVar16;
      *(undefined4 *)(lVar5 + 0x28) = uVar20;
      *(undefined4 *)(lVar5 + 0x2c) = uVar23;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_05d3fb14;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar13;
      *(undefined4 *)(lVar4 + 0x24) = uVar16;
      *(undefined4 *)(lVar4 + 0x28) = uVar20;
      *(undefined4 *)(lVar4 + 0x2c) = uVar23;
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
      fVar21 = *(float *)(lVar7 + 0x20);
      fVar17 = *(float *)(lVar7 + 0x24);
      fVar18 = *(float *)(lVar7 + 0x28);
      fVar14 = *(float *)(lVar7 + 0x2c);
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
          uVar13 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar16 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar23 = *puVar12;
FUN_05d3f7ec:
          uVar13 = FUN_068eca84(uVar13,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
          *puVar8 = uVar13;
          *puVar10 = uVar16;
          *puVar11 = uVar20;
          *puVar12 = uVar23;
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
      unaff_s14 = *(float *)(lVar4 + 0x3c);
      unaff_s13 = *(float *)(lVar4 + 0x40);
      fVar27 = *(float *)(lVar4 + 0x24);
      fVar26 = *(float *)(lVar4 + 0x28);
      fStack0000000000000048 = *(float *)(lVar4 + 0x2c);
      in_stack_00000050._4_4_ = *(float *)(lVar4 + 0x44);
      fVar22 = fStack000000000000005c * fStack0000000000000048 * -90.0;
      fVar15 = fStack000000000000005c * fVar26 * -90.0 * fStack0000000000000058;
      fVar19 = fVar22 * fStack0000000000000058;
      fVar24 = (float)FUN_068ecdd4(fStack000000000000005c * fVar27 * -90.0 * fStack0000000000000058,
                                   0);
      fVar25 = (fVar17 * fVar19 + fVar14 * fVar24 + fVar21 * fVar22) - fVar18 * fVar15;
      fStack0000000000000064 =
           (fVar18 * fVar24 + fVar14 * fVar15 + fVar17 * fVar22) - fVar21 * fVar19;
      param_2 = (ulong)(uint)fStack0000000000000064;
      fStack0000000000000068 =
           (fVar21 * fVar15 + fVar14 * fVar19 + fVar18 * fVar22) - fVar17 * fVar24;
      param_3 = (ulong)(uint)fStack0000000000000068;
      fVar18 = ((fVar14 * fVar22 - fVar21 * fVar24) - fVar17 * fVar15) - fVar18 * fVar19;
      fStack0000000000000060 = fVar25;
      fStack000000000000006c = fVar18;
      if (unaff_x20 == 0) goto LAB_05d3fb14;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
      unaff_s8 = (float)FUN_05d3fe18(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      fVar14 = fStack0000000000000048;
      if (fStack000000000000005c <= unaff_s8) {
        fStack000000000000005c = unaff_s8;
      }
      if (unaff_s8 < 0.0) {
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar13 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar16 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar23 = *puVar12;
          goto FUN_05d3f7ec;
        }
        goto LAB_05d3fb10;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    unaff_x27 = (float *)(lVar4 + 0x20);
    fStack0000000000000038 = *unaff_x27;
    unaff_x28 = (float *)(lVar4 + 0x24);
    fStack0000000000000030 = *unaff_x28;
    unaff_x29 = (float *)(lVar4 + 0x28);
    unaff_s15 = *unaff_x29;
    unaff_x24 = (float *)(lVar4 + 0x2c);
    fStack0000000000000034 = *unaff_x24;
    fStack0000000000000040 = fStack0000000000000030;
    fStack000000000000003c = unaff_s15;
    uStack0000000000000044 = FUN_068ed2ec(0);
    fStack0000000000000048 =
         (float)FUN_068ed2ec(fVar25,param_2,param_3,fVar18,fVar27,fVar26,fVar14,0);
  }
LAB_05d3fb10:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


