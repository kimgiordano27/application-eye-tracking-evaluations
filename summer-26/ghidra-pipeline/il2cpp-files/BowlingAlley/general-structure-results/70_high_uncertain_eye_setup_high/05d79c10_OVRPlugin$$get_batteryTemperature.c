/*
FUNCTION_NAME: OVRPlugin$$get_batteryTemperature
ENTRY_POINT: 05d79c10
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_batteryTemperature(undefined1 param_1 [16],float param_2,undefined8 param_3)

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
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  float fVar23;
  ulong unaff_d9;
  float fVar24;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fStack0000000000000024;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  fStack0000000000000030 = param_2;
  while( true ) {
    fStack0000000000000024 = unaff_x29[2];
    fStack0000000000000034 = unaff_x27[3];
    fVar17 = fStack0000000000000030;
    fVar15 = fStack0000000000000024;
    uVar13 = FUN_06bde1c4(param_3);
    fVar22 = fStack0000000000000024;
    uVar14 = FUN_06bde1c4(unaff_d11,unaff_d10,unaff_d9,unaff_d14,unaff_d13,unaff_d12,
                          fStack0000000000000048,0);
    fVar24 = fStack0000000000000034;
    fVar23 = fStack0000000000000030;
    FUN_06bde1c4(0);
    fVar15 = (float)FUN_05bfefc8(uVar13,fVar17,fVar15,uVar14,unaff_d10 & 0xffffffff,
                                 unaff_d9 & 0xffffffff,0);
    fVar16 = unaff_s8 * *(float *)(unaff_x19 + 0xb0);
    fVar17 = fVar16;
    if (1.0 < fVar16) {
      fVar17 = 1.0;
    }
    fVar17 = 1.0 - fVar17;
    if (fVar16 < 0.0) {
      fVar17 = 1.0;
    }
    fVar21 = fStack0000000000000050 * fVar15 * fVar17;
    fVar16 = fVar21 * fStack0000000000000058;
    fVar19 = fStack0000000000000054 * fVar15 * fVar17 * fStack0000000000000058;
    fVar17 = (float)FUN_06bddcac(fStack000000000000004c * fVar15 * fVar17 * fStack0000000000000058,0
                                );
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) break;
    *unaff_x27 = (fVar23 * fVar19 + fVar24 * fVar17 + in_stack_00000038 * fVar21) - fVar22 * fVar16;
    *unaff_x28 = (fVar22 * fVar17 + fVar24 * fVar16 + fVar23 * fVar21) - in_stack_00000038 * fVar19;
    unaff_x29[2] = (in_stack_00000038 * fVar16 + fVar24 * fVar19 + fVar22 * fVar21) -
                   fVar23 * fVar17;
    unaff_x27[3] = ((fVar24 * fVar21 - in_stack_00000038 * fVar17) - fVar23 * fVar16) -
                   fVar22 * fVar19;
LAB_05d79ad0:
    do {
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) {
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_05d79dd4;
      FUN_05d06448(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0x148);
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      uVar9 = (uint)unaff_x26;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      lVar5 = unaff_x20 + unaff_x26 * 0x10;
      uVar14 = *(undefined4 *)(lVar4 + 0x24);
      uVar18 = *(undefined4 *)(lVar4 + 0x28);
      uVar20 = *(undefined4 *)(lVar4 + 0x2c);
      uVar13 = FUN_06bdda30(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
      *(undefined4 *)(lVar5 + 0x20) = uVar13;
      *(undefined4 *)(lVar5 + 0x24) = uVar14;
      *(undefined4 *)(lVar5 + 0x28) = uVar18;
      *(undefined4 *)(lVar5 + 0x2c) = uVar20;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar13;
      *(undefined4 *)(lVar4 + 0x24) = uVar14;
      *(undefined4 *)(lVar4 + 0x28) = uVar18;
      *(undefined4 *)(lVar4 + 0x2c) = uVar20;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *unaff_x22;
      }
      plVar3 = *(long **)(lVar4 + 0xb8);
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_05d79dd4;
      if (*(int *)(lVar5 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x158);
      if (lVar6 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      lVar7 = *(long *)(unaff_x19 + 0x140);
      if (lVar7 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d79dd4;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      unaff_x25 = (long)(int)unaff_w21;
      lVar7 = lVar7 + unaff_x25 * 0x10;
      iVar1 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
      fVar17 = *(float *)(lVar7 + 0x20);
      fVar24 = *(float *)(lVar7 + 0x24);
      fVar22 = *(float *)(lVar7 + 0x28);
      fVar23 = *(float *)(lVar7 + 0x2c);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *unaff_x22;
        plVar3 = *(long **)(lVar4 + 0xb8);
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_05d79dd4;
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      uVar9 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
      unaff_x26 = (long)(int)uVar9;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x20 == 0) goto LAB_05d79dd4;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar13 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar14 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar18 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar20 = *puVar12;
LAB_05d79aac:
          uVar13 = FUN_06bdda30(uVar13,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
          *puVar8 = uVar13;
          *puVar10 = uVar14;
          *puVar11 = uVar18;
          *puVar12 = uVar20;
        }
        goto LAB_05d79ad0;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        plVar3 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar3[3];
      if (lVar4 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
      lVar5 = *unaff_x23;
      cVar2 = *(char *)(lVar4 + unaff_x25 + 0x20);
      if (cVar2 != '\0') {
        fStack000000000000005c = 0.0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *unaff_x23;
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      fStack000000000000004c = *(float *)(lVar4 + 0x3c);
      fStack0000000000000050 = *(float *)(lVar4 + 0x40);
      unaff_d13 = (ulong)(uint)*(float *)(lVar4 + 0x24);
      unaff_d12 = (ulong)(uint)*(float *)(lVar4 + 0x28);
      fStack0000000000000048 = *(float *)(lVar4 + 0x2c);
      fStack0000000000000054 = *(float *)(lVar4 + 0x44);
      fVar21 = fStack000000000000005c * fStack0000000000000048 * -90.0;
      fVar16 = fStack000000000000005c * *(float *)(lVar4 + 0x28) * -90.0 * fStack0000000000000058;
      fVar19 = fVar21 * fStack0000000000000058;
      fVar15 = (float)FUN_06bddcac(fStack000000000000005c * *(float *)(lVar4 + 0x24) * -90.0 *
                                   fStack0000000000000058,0);
      fStack0000000000000060 =
           (fVar24 * fVar19 + fVar23 * fVar15 + fVar17 * fVar21) - fVar22 * fVar16;
      unaff_d11 = (ulong)(uint)fStack0000000000000060;
      fStack0000000000000064 =
           (fVar22 * fVar15 + fVar23 * fVar16 + fVar24 * fVar21) - fVar17 * fVar19;
      unaff_d10 = (ulong)(uint)fStack0000000000000064;
      fStack0000000000000068 =
           (fVar17 * fVar16 + fVar23 * fVar19 + fVar22 * fVar21) - fVar24 * fVar15;
      unaff_d9 = (ulong)(uint)fStack0000000000000068;
      fStack000000000000006c =
           ((fVar23 * fVar21 - fVar17 * fVar15) - fVar24 * fVar16) - fVar22 * fVar19;
      unaff_d14 = (ulong)(uint)fStack000000000000006c;
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
      unaff_s8 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (fStack000000000000005c <= unaff_s8) {
        fStack000000000000005c = unaff_s8;
      }
      if (unaff_s8 < 0.0) {
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar13 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar14 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar18 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar20 = *puVar12;
          goto LAB_05d79aac;
        }
        goto LAB_05d79dd0;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    unaff_x27 = (float *)(lVar4 + 0x20);
    in_stack_00000038 = *unaff_x27;
    param_3 = 0;
    unaff_x28 = (float *)(lVar4 + 0x24);
    fStack0000000000000030 = *unaff_x28;
    unaff_x29 = unaff_x27;
  }
LAB_05d79dd0:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


