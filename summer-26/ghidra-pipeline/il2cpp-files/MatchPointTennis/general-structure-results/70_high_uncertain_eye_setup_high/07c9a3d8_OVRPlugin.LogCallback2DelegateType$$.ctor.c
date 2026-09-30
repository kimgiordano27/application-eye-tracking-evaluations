/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$.ctor
ENTRY_POINT: 07c9a3d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType___ctor(float param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  undefined4 *puVar5;
  long unaff_x25;
  uint uVar6;
  long unaff_x26;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  ulong unaff_d8;
  float fVar26;
  ulong unaff_d9;
  float fVar27;
  ulong unaff_d10;
  float unaff_s11;
  float fVar28;
  undefined4 unaff_s12;
  float fVar29;
  float fVar30;
  float unaff_s15;
  float in_stack_00000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
code_r0x07c9a3d8:
  if (unaff_w24 != 0) {
    unaff_s15 = param_1;
  }
  uStack0000000000000054 = unaff_s12;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    param_2 = *unaff_x23;
  }
  lVar4 = *(long *)(param_2 + 0xb8);
  fVar18 = *(float *)(lVar4 + 0x3c);
  fVar13 = *(float *)(lVar4 + 0x40);
  fVar30 = *(float *)(lVar4 + 0x24);
  fVar29 = *(float *)(lVar4 + 0x28);
  fVar22 = *(float *)(lVar4 + 0x2c);
  fVar14 = *(float *)(lVar4 + 0x44);
  fVar23 = unaff_s15 * fVar22 * -90.0;
  fVar15 = unaff_s15 * fVar29 * -90.0 * in_stack_00000050;
  fVar19 = fVar23 * in_stack_00000050;
  fVar10 = (float)FUN_09516910(unaff_s15 * fVar30 * -90.0 * in_stack_00000050,0);
  fVar21 = (float)unaff_d10;
  fVar17 = (float)unaff_d9;
  fVar12 = (float)unaff_d8;
  fVar28 = (fVar17 * fVar19 + fVar21 * fVar10 + unaff_s11 * fVar23) - fVar12 * fVar15;
  fVar27 = (fVar12 * fVar10 + fVar21 * fVar15 + fVar17 * fVar23) - unaff_s11 * fVar19;
  fVar26 = (unaff_s11 * fVar15 + fVar21 * fVar19 + fVar12 * fVar23) - fVar17 * fVar10;
  fVar10 = ((fVar21 * fVar23 - unaff_s11 * fVar10) - fVar17 * fVar15) - fVar12 * fVar19;
  fStack0000000000000058 = fVar28;
  fStack000000000000005c = fVar27;
  fStack0000000000000060 = fVar26;
  fStack0000000000000064 = fVar10;
  if (unaff_x21 != 0) {
    uVar6 = (uint)unaff_x26;
    if (uVar6 < *(uint *)(unaff_x21 + 0x18)) {
      fVar15 = (float)FUN_07c9ad28(unaff_x21 + unaff_x26 * 0x10 + 0x20,&stack0x00000058);
      if (unaff_s15 <= fVar15) {
        unaff_s15 = fVar15;
      }
      if (0.0 <= fVar15) {
        if (unaff_w24 == 0) goto LAB_07c9a560;
        if (uVar6 < *(uint *)(unaff_x21 + 0x18)) {
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          fVar12 = *(float *)(lVar4 + 0x20);
          fVar17 = *(float *)(lVar4 + 0x24);
          fVar21 = *(float *)(lVar4 + 0x28);
          fVar25 = *(float *)(lVar4 + 0x2c);
          fVar19 = fVar17;
          fVar23 = fVar21;
          uStack0000000000000054 = FUN_09516eb8(0);
          uVar11 = FUN_09516eb8(fVar28,fVar27,fVar26,fVar10,fVar30,fVar29,fVar22,0);
          FUN_09516eb8(0);
          fVar27 = (float)FUN_0770668c(uStack0000000000000054,fVar19,fVar23,uVar11,fVar27,fVar26,0);
          fVar15 = fVar15 * *(float *)(unaff_x19 + 0xb0);
          fVar10 = fVar15;
          if (1.0 < fVar15) {
            fVar10 = 1.0;
          }
          fVar10 = 1.0 - fVar10;
          if (fVar15 < 0.0) {
            fVar10 = 1.0;
          }
          fVar15 = fVar13 * fVar27 * fVar10;
          fVar13 = fVar15 * in_stack_00000050;
          fVar14 = fVar14 * fVar27 * fVar10 * in_stack_00000050;
          fVar10 = (float)FUN_09516910(fVar18 * fVar27 * fVar10 * in_stack_00000050,0);
          if (uVar6 < *(uint *)(unaff_x21 + 0x18)) {
            *(float *)(lVar4 + 0x20) =
                 (fVar17 * fVar14 + fVar25 * fVar10 + fVar12 * fVar15) - fVar21 * fVar13;
            *(float *)(lVar4 + 0x24) =
                 (fVar21 * fVar10 + fVar25 * fVar13 + fVar17 * fVar15) - fVar12 * fVar14;
            *(float *)(lVar4 + 0x28) =
                 (fVar12 * fVar13 + fVar25 * fVar14 + fVar21 * fVar15) - fVar17 * fVar10;
            *(float *)(lVar4 + 0x2c) =
                 ((fVar25 * fVar15 - fVar12 * fVar10) - fVar17 * fVar13) - fVar21 * fVar14;
            goto LAB_07c9a560;
          }
        }
      }
      else if (uVar6 < *(uint *)(unaff_x21 + 0x18)) {
        lVar4 = unaff_x21 + unaff_x26 * 0x10;
        puVar5 = (undefined4 *)(lVar4 + 0x20);
        uVar11 = *puVar5;
        puVar7 = (undefined4 *)(lVar4 + 0x24);
        uVar16 = *puVar7;
        puVar8 = (undefined4 *)(lVar4 + 0x28);
        uVar20 = *puVar8;
        puVar9 = (undefined4 *)(lVar4 + 0x2c);
        uVar24 = *puVar9;
        while (uVar11 = FUN_09516694(uVar11,0), (uint)unaff_x26 < *(uint *)(unaff_x21 + 0x18)) {
          *puVar5 = uVar11;
          *puVar7 = uVar16;
          *puVar8 = uVar20;
          *puVar9 = uVar24;
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
            uVar6 = (uint)unaff_x26;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
            lVar4 = lVar4 + unaff_x25 * 0x10;
            lVar2 = unaff_x21 + unaff_x26 * 0x10;
            unaff_d9 = (ulong)*(uint *)(lVar4 + 0x24);
            unaff_d8 = (ulong)*(uint *)(lVar4 + 0x28);
            unaff_d10 = (ulong)*(uint *)(lVar4 + 0x2c);
            uVar11 = FUN_09516694(*(undefined4 *)(lVar4 + 0x20),0);
            if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
            *(undefined4 *)(lVar2 + 0x20) = uVar11;
            *(int *)(lVar2 + 0x24) = (int)unaff_d9;
            *(int *)(lVar2 + 0x28) = (int)unaff_d8;
            *(int *)(lVar2 + 0x2c) = (int)unaff_d10;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
            lVar4 = *(long *)(unaff_x19 + 0x150);
            if (lVar4 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            lVar4 = lVar4 + unaff_x25 * 0x10;
            unaff_w20 = unaff_w20 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar11;
            *(int *)(lVar4 + 0x24) = (int)unaff_d9;
            *(int *)(lVar4 + 0x28) = (int)unaff_d8;
            *(int *)(lVar4 + 0x2c) = (int)unaff_d10;
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
            lVar4 = *(long *)(unaff_x19 + 0xd0);
            if (lVar4 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            lVar2 = *unaff_x22;
            unaff_s12 = *(undefined4 *)(lVar4 + unaff_x25 * 4 + 0x20);
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar2 = *unaff_x22;
            }
            plVar3 = *(long **)(lVar2 + 0xb8);
            lVar4 = *plVar3;
            if (lVar4 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            uVar6 = *(uint *)(lVar4 + unaff_x25 * 4 + 0x20);
            unaff_x26 = (long)(int)uVar6;
            if (iVar1 == 1) {
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                plVar3 = *(long **)(*unaff_x22 + 0xb8);
              }
              lVar4 = plVar3[3];
              if (lVar4 == 0) goto LAB_07c9a864;
              if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
              param_2 = *unaff_x23;
              unaff_w24 = (uint)*(byte *)(lVar4 + unaff_x25 + 0x20);
              param_1 = 0.0;
              goto code_r0x07c9a3d8;
            }
          } while (iVar1 != 2);
          if (unaff_x21 == 0) goto LAB_07c9a864;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar6) break;
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          puVar5 = (undefined4 *)(lVar4 + 0x20);
          uVar11 = *puVar5;
          puVar7 = (undefined4 *)(lVar4 + 0x24);
          uVar16 = *puVar7;
          puVar8 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x2c);
          uVar24 = *puVar9;
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


