/*
FUNCTION_NAME: OVRPlugin.Vector4f$$ToString
ENTRY_POINT: 07c9a694
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f__ToString(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar6;
  long unaff_x25;
  uint uVar7;
  long unaff_x26;
  undefined4 *puVar8;
  float *unaff_x27;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  while( true ) {
    fStack000000000000002c = unaff_x27[1];
    fStack0000000000000020 = unaff_x27[2];
    fVar21 = unaff_x27[3];
    fVar16 = fStack000000000000002c;
    fVar13 = fStack0000000000000020;
    uVar11 = FUN_09516eb8(param_1);
    fVar14 = fStack0000000000000020;
    uVar12 = FUN_09516eb8(unaff_d11,unaff_d10,unaff_d9,unaff_d14,unaff_d13,unaff_d12,
                          fStack0000000000000040,0);
    fVar18 = fStack000000000000002c;
    FUN_09516eb8(0);
    fVar13 = (float)FUN_0770668c(uVar11,fVar16,fVar13,uVar12,unaff_d10 & 0xffffffff,
                                 unaff_d9 & 0xffffffff,0);
    fVar15 = unaff_s8 * *(float *)(unaff_x19 + 0xb0);
    fVar16 = fVar15;
    if (1.0 < fVar15) {
      fVar16 = 1.0;
    }
    fVar16 = 1.0 - fVar16;
    if (fVar15 < 0.0) {
      fVar16 = 1.0;
    }
    fVar22 = fStack0000000000000048 * fVar13 * fVar16;
    fVar15 = fVar22 * in_stack_00000050;
    fVar19 = fStack000000000000004c * fVar13 * fVar16 * in_stack_00000050;
    fVar16 = (float)FUN_09516910(fStack0000000000000044 * fVar13 * fVar16 * in_stack_00000050,0);
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26) break;
    *unaff_x27 = (fVar18 * fVar19 + fVar21 * fVar16 + in_stack_00000030._4_4_ * fVar22) -
                 fVar14 * fVar15;
    unaff_x27[1] = (fVar14 * fVar16 + fVar21 * fVar15 + fVar18 * fVar22) -
                   in_stack_00000030._4_4_ * fVar19;
    unaff_x27[2] = (in_stack_00000030._4_4_ * fVar15 + fVar21 * fVar19 + fVar14 * fVar22) -
                   fVar18 * fVar16;
    unaff_x27[3] = ((fVar21 * fVar22 - in_stack_00000030._4_4_ * fVar16) - fVar18 * fVar15) -
                   fVar14 * fVar19;
LAB_07c9a560:
    do {
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) {
LAB_07c9a864:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
      if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar4 == 0) goto LAB_07c9a864;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
      lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_07c9a864;
      FUN_07c1e698(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0x148);
      if (lVar4 == 0) goto LAB_07c9a864;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
      if (unaff_x21 == 0) goto LAB_07c9a864;
      uVar7 = (uint)unaff_x26;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      lVar5 = unaff_x21 + unaff_x26 * 0x10;
      fVar14 = *(float *)(lVar4 + 0x24);
      fVar18 = *(float *)(lVar4 + 0x28);
      fVar16 = *(float *)(lVar4 + 0x2c);
      uVar11 = FUN_09516694(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
      *(undefined4 *)(lVar5 + 0x20) = uVar11;
      *(float *)(lVar5 + 0x24) = fVar14;
      *(float *)(lVar5 + 0x28) = fVar18;
      *(float *)(lVar5 + 0x2c) = fVar16;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_07c9a864;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
      lVar4 = lVar4 + unaff_x25 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar11;
      *(float *)(lVar4 + 0x24) = fVar14;
      *(float *)(lVar4 + 0x28) = fVar18;
      *(float *)(lVar4 + 0x2c) = fVar16;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar4 = *unaff_x22;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_07c9a864;
      if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (int)unaff_w20) {
        return;
      }
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) goto LAB_07c9a864;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
      unaff_x25 = (long)(int)unaff_w20;
      iVar1 = *(int *)(lVar4 + unaff_x25 * 4 + 0x20);
      fVar13 = (float)FUN_07c9ab68();
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_07c9a864;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) goto LAB_07c9a860;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar4 = *unaff_x22;
      }
      plVar3 = *(long **)(lVar4 + 0xb8);
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_07c9a864;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
      uVar7 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
      unaff_x26 = (long)(int)uVar7;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x21 == 0) goto LAB_07c9a864;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          puVar6 = (undefined4 *)(lVar4 + 0x20);
          uVar11 = *puVar6;
          puVar8 = (undefined4 *)(lVar4 + 0x24);
          uVar12 = *puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x28);
          uVar17 = *puVar9;
          puVar10 = (undefined4 *)(lVar4 + 0x2c);
          uVar20 = *puVar10;
LAB_07c9a53c:
          uVar11 = FUN_09516694(uVar11,0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
          *puVar6 = uVar11;
          *puVar8 = uVar12;
          *puVar9 = uVar17;
          *puVar10 = uVar20;
        }
        goto LAB_07c9a560;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        plVar3 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar3[3];
      if (lVar4 == 0) goto LAB_07c9a864;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
      lVar5 = *unaff_x23;
      cVar2 = *(char *)(lVar4 + unaff_x25 + 0x20);
      if (cVar2 != '\0') {
        in_stack_00000018._4_4_ = 0.0;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *unaff_x23;
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      fStack0000000000000044 = *(float *)(lVar4 + 0x3c);
      fStack0000000000000048 = *(float *)(lVar4 + 0x40);
      unaff_d13 = (ulong)(uint)*(float *)(lVar4 + 0x24);
      unaff_d12 = (ulong)(uint)*(float *)(lVar4 + 0x28);
      fStack0000000000000040 = *(float *)(lVar4 + 0x2c);
      fStack000000000000004c = *(float *)(lVar4 + 0x44);
      fVar22 = in_stack_00000018._4_4_ * fStack0000000000000040 * -90.0;
      fVar21 = in_stack_00000018._4_4_ * *(float *)(lVar4 + 0x28) * -90.0 * in_stack_00000050;
      fVar19 = fVar22 * in_stack_00000050;
      fVar15 = (float)FUN_09516910(in_stack_00000018._4_4_ * *(float *)(lVar4 + 0x24) * -90.0 *
                                   in_stack_00000050,0);
      fStack0000000000000058 =
           (fVar14 * fVar19 + fVar16 * fVar15 + fVar13 * fVar22) - fVar18 * fVar21;
      unaff_d11 = (ulong)(uint)fStack0000000000000058;
      fStack000000000000005c =
           (fVar18 * fVar15 + fVar16 * fVar21 + fVar14 * fVar22) - fVar13 * fVar19;
      unaff_d10 = (ulong)(uint)fStack000000000000005c;
      fStack0000000000000060 =
           (fVar13 * fVar21 + fVar16 * fVar19 + fVar18 * fVar22) - fVar14 * fVar15;
      unaff_d9 = (ulong)(uint)fStack0000000000000060;
      fStack0000000000000064 =
           ((fVar16 * fVar22 - fVar13 * fVar15) - fVar14 * fVar21) - fVar18 * fVar19;
      unaff_d14 = (ulong)(uint)fStack0000000000000064;
      if (unaff_x21 == 0) goto LAB_07c9a864;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
      unaff_s8 = (float)FUN_07c9ad28(unaff_x21 + unaff_x26 * 0x10 + 0x20,&stack0x00000058);
      if (in_stack_00000018._4_4_ <= unaff_s8) {
        in_stack_00000018._4_4_ = unaff_s8;
      }
      if (unaff_s8 < 0.0) {
        if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          puVar6 = (undefined4 *)(lVar4 + 0x20);
          uVar11 = *puVar6;
          puVar8 = (undefined4 *)(lVar4 + 0x24);
          uVar12 = *puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x28);
          uVar17 = *puVar9;
          puVar10 = (undefined4 *)(lVar4 + 0x2c);
          uVar20 = *puVar10;
          goto LAB_07c9a53c;
        }
        goto LAB_07c9a860;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
    unaff_x27 = (float *)(unaff_x21 + unaff_x26 * 0x10 + 0x20);
    in_stack_00000030._4_4_ = *unaff_x27;
    param_1 = 0;
  }
LAB_07c9a860:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


