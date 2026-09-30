/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 07c9a48c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__BeginInvoke
               (float param_1,float param_2,ulong param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  undefined4 *puVar6;
  long unaff_x25;
  uint uVar7;
  long unaff_x26;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  ulong unaff_d8;
  float fVar22;
  ulong unaff_d9;
  float fVar23;
  float unaff_s11;
  ulong unaff_d12;
  ulong unaff_d13;
  float fVar24;
  float unaff_s15;
  float in_s18;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
code_r0x07c9a48c:
  param_8 = (param_7 + param_5) - param_8;
  fVar23 = (in_s18 + param_6) - unaff_s11 * (float)param_3;
  fVar22 = (in_s20 + in_s22 + param_4) - (float)unaff_d9 * param_1;
  fVar24 = ((in_s23 - in_s21) - param_2) - (float)unaff_d8 * (float)param_3;
  fStack0000000000000058 = param_8;
  fStack000000000000005c = fVar23;
  fStack0000000000000060 = fVar22;
  fStack0000000000000064 = fVar24;
  if (unaff_x21 != 0) {
    uVar7 = (uint)unaff_x26;
    if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
      fVar11 = (float)FUN_07c9ad28(unaff_x21 + unaff_x26 * 0x10 + 0x20,&stack0x00000058);
      if (unaff_s15 <= fVar11) {
        unaff_s15 = fVar11;
      }
      if (0.0 <= fVar11) {
        if (unaff_w24 == 0) goto LAB_07c9a560;
        if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          fVar13 = *(float *)(lVar4 + 0x20);
          fVar15 = *(float *)(lVar4 + 0x24);
          fVar17 = *(float *)(lVar4 + 0x28);
          fVar20 = *(float *)(lVar4 + 0x2c);
          fVar21 = fVar15;
          fVar18 = fVar17;
          uVar12 = FUN_09516eb8(0);
          uVar14 = FUN_09516eb8(param_8,fVar23,fVar22,fVar24,unaff_d13,unaff_d12,
                                fStack0000000000000040,0);
          FUN_09516eb8(0);
          fVar22 = (float)FUN_0770668c(uVar12,fVar21,fVar18,uVar14,fVar23,fVar22,0);
          fVar11 = fVar11 * *(float *)(unaff_x19 + 0xb0);
          fVar23 = fVar11;
          if (1.0 < fVar11) {
            fVar23 = 1.0;
          }
          fVar23 = 1.0 - fVar23;
          if (fVar11 < 0.0) {
            fVar23 = 1.0;
          }
          fVar21 = fStack0000000000000048 * fVar22 * fVar23;
          fVar24 = fVar21 * in_stack_00000050;
          fVar11 = fStack000000000000004c * fVar22 * fVar23 * in_stack_00000050;
          fVar23 = (float)FUN_09516910(fStack0000000000000044 * fVar22 * fVar23 * in_stack_00000050,
                                       0);
          if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
            *(float *)(lVar4 + 0x20) =
                 (fVar15 * fVar11 + fVar20 * fVar23 + fVar13 * fVar21) - fVar17 * fVar24;
            *(float *)(lVar4 + 0x24) =
                 (fVar17 * fVar23 + fVar20 * fVar24 + fVar15 * fVar21) - fVar13 * fVar11;
            *(float *)(lVar4 + 0x28) =
                 (fVar13 * fVar24 + fVar20 * fVar11 + fVar17 * fVar21) - fVar15 * fVar23;
            *(float *)(lVar4 + 0x2c) =
                 ((fVar20 * fVar21 - fVar13 * fVar23) - fVar15 * fVar24) - fVar17 * fVar11;
            goto LAB_07c9a560;
          }
        }
      }
      else if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
        lVar4 = unaff_x21 + unaff_x26 * 0x10;
        puVar6 = (undefined4 *)(lVar4 + 0x20);
        uVar12 = *puVar6;
        puVar8 = (undefined4 *)(lVar4 + 0x24);
        uVar14 = *puVar8;
        puVar9 = (undefined4 *)(lVar4 + 0x28);
        uVar16 = *puVar9;
        puVar10 = (undefined4 *)(lVar4 + 0x2c);
        uVar19 = *puVar10;
        while (uVar12 = FUN_09516694(uVar12,0), (uint)unaff_x26 < *(uint *)(unaff_x21 + 0x18)) {
          *puVar6 = uVar12;
          *puVar8 = uVar14;
          *puVar9 = uVar16;
          *puVar10 = uVar19;
LAB_07c9a560:
          do {
            lVar4 = *(long *)(unaff_x19 + 0x158);
            if (lVar4 == 0) goto LAB_07c9a864;
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
            unaff_d9 = (ulong)*(uint *)(lVar4 + 0x24);
            unaff_d8 = (ulong)*(uint *)(lVar4 + 0x28);
            fVar23 = *(float *)(lVar4 + 0x2c);
            uVar12 = FUN_09516694(*(undefined4 *)(lVar4 + 0x20),0);
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
            *(undefined4 *)(lVar5 + 0x20) = uVar12;
            *(int *)(lVar5 + 0x24) = (int)unaff_d9;
            *(int *)(lVar5 + 0x28) = (int)unaff_d8;
            *(float *)(lVar5 + 0x2c) = fVar23;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
            lVar4 = *(long *)(unaff_x19 + 0x150);
            if (lVar4 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            lVar4 = lVar4 + unaff_x25 * 0x10;
            unaff_w20 = unaff_w20 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar12;
            *(int *)(lVar4 + 0x24) = (int)unaff_d9;
            *(int *)(lVar4 + 0x28) = (int)unaff_d8;
            *(float *)(lVar4 + 0x2c) = fVar23;
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
            unaff_s11 = (float)FUN_07c9ab68();
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
            if (iVar1 == 1) {
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                plVar3 = *(long **)(*unaff_x22 + 0xb8);
              }
              lVar4 = plVar3[3];
              if (lVar4 == 0) goto LAB_07c9a864;
              if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
              lVar5 = *unaff_x23;
              bVar2 = *(byte *)(lVar4 + unaff_x25 + 0x20);
              unaff_w24 = (uint)bVar2;
              if (bVar2 != 0) {
                unaff_s15 = 0.0;
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
              fVar24 = unaff_s15 * fStack0000000000000040 * -90.0;
              fVar22 = unaff_s15 * *(float *)(lVar4 + 0x28) * -90.0 * in_stack_00000050;
              param_3 = (ulong)(uint)(fVar24 * in_stack_00000050);
              param_1 = (float)FUN_09516910(unaff_s15 * *(float *)(lVar4 + 0x24) * -90.0 *
                                            in_stack_00000050,0);
              fVar21 = (float)unaff_d9;
              in_s21 = unaff_s11 * param_1;
              in_s22 = fVar23 * (float)param_3;
              in_s23 = fVar23 * fVar24;
              fVar11 = (float)unaff_d8;
              param_4 = fVar11 * fVar24;
              param_7 = fVar21 * (float)param_3;
              param_8 = fVar11 * fVar22;
              in_s18 = fVar11 * param_1;
              in_s20 = unaff_s11 * fVar22;
              param_2 = fVar21 * fVar22;
              param_5 = fVar23 * param_1 + unaff_s11 * fVar24;
              param_6 = fVar23 * fVar22 + fVar21 * fVar24;
              goto code_r0x07c9a48c;
            }
          } while (iVar1 != 2);
          if (unaff_x21 == 0) goto LAB_07c9a864;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          puVar6 = (undefined4 *)(lVar4 + 0x20);
          uVar12 = *puVar6;
          puVar8 = (undefined4 *)(lVar4 + 0x24);
          uVar14 = *puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x28);
          uVar16 = *puVar9;
          puVar10 = (undefined4 *)(lVar4 + 0x2c);
          uVar19 = *puVar10;
        }
      }
    }
LAB_07c9a860:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_07c9a864:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


