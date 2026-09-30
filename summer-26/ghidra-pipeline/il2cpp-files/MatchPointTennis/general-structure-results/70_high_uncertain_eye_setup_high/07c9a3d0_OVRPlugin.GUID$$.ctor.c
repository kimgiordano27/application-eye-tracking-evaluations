/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 07c9a3d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GUID___ctor(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
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
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  ulong unaff_d8;
  float fVar27;
  ulong unaff_d9;
  float fVar28;
  ulong unaff_d10;
  float unaff_s11;
  float fVar29;
  undefined4 unaff_s12;
  float fVar30;
  float fVar31;
  float unaff_s15;
  float in_stack_00000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
code_r0x07c9a3d0:
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 != '\0') {
    unaff_s15 = 0.0;
  }
  uStack0000000000000054 = unaff_s12;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    param_2 = *unaff_x23;
  }
  lVar5 = *(long *)(param_2 + 0xb8);
  fVar19 = *(float *)(lVar5 + 0x3c);
  fVar14 = *(float *)(lVar5 + 0x40);
  fVar31 = *(float *)(lVar5 + 0x24);
  fVar30 = *(float *)(lVar5 + 0x28);
  fVar23 = *(float *)(lVar5 + 0x2c);
  fVar15 = *(float *)(lVar5 + 0x44);
  fVar24 = unaff_s15 * fVar23 * -90.0;
  fVar16 = unaff_s15 * fVar30 * -90.0 * in_stack_00000050;
  fVar20 = fVar24 * in_stack_00000050;
  fVar11 = (float)FUN_09516910(unaff_s15 * fVar31 * -90.0 * in_stack_00000050,0);
  fVar22 = (float)unaff_d10;
  fVar18 = (float)unaff_d9;
  fVar13 = (float)unaff_d8;
  fVar29 = (fVar18 * fVar20 + fVar22 * fVar11 + unaff_s11 * fVar24) - fVar13 * fVar16;
  fVar28 = (fVar13 * fVar11 + fVar22 * fVar16 + fVar18 * fVar24) - unaff_s11 * fVar20;
  fVar27 = (unaff_s11 * fVar16 + fVar22 * fVar20 + fVar13 * fVar24) - fVar18 * fVar11;
  fVar11 = ((fVar22 * fVar24 - unaff_s11 * fVar11) - fVar18 * fVar16) - fVar13 * fVar20;
  fStack0000000000000058 = fVar29;
  fStack000000000000005c = fVar28;
  fStack0000000000000060 = fVar27;
  fStack0000000000000064 = fVar11;
  if (unaff_x21 != 0) {
    uVar7 = (uint)unaff_x26;
    if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
      fVar16 = (float)FUN_07c9ad28(unaff_x21 + unaff_x26 * 0x10 + 0x20,&stack0x00000058);
      if (unaff_s15 <= fVar16) {
        unaff_s15 = fVar16;
      }
      if (0.0 <= fVar16) {
        if (cVar2 == '\0') goto LAB_07c9a560;
        if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
          lVar5 = unaff_x21 + unaff_x26 * 0x10;
          fVar13 = *(float *)(lVar5 + 0x20);
          fVar18 = *(float *)(lVar5 + 0x24);
          fVar22 = *(float *)(lVar5 + 0x28);
          fVar26 = *(float *)(lVar5 + 0x2c);
          fVar20 = fVar18;
          fVar24 = fVar22;
          uStack0000000000000054 = FUN_09516eb8(0);
          uVar12 = FUN_09516eb8(fVar29,fVar28,fVar27,fVar11,fVar31,fVar30,fVar23,0);
          FUN_09516eb8(0);
          fVar28 = (float)FUN_0770668c(uStack0000000000000054,fVar20,fVar24,uVar12,fVar28,fVar27,0);
          fVar16 = fVar16 * *(float *)(unaff_x19 + 0xb0);
          fVar11 = fVar16;
          if (1.0 < fVar16) {
            fVar11 = 1.0;
          }
          fVar11 = 1.0 - fVar11;
          if (fVar16 < 0.0) {
            fVar11 = 1.0;
          }
          fVar16 = fVar14 * fVar28 * fVar11;
          fVar14 = fVar16 * in_stack_00000050;
          fVar15 = fVar15 * fVar28 * fVar11 * in_stack_00000050;
          fVar11 = (float)FUN_09516910(fVar19 * fVar28 * fVar11 * in_stack_00000050,0);
          if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
            *(float *)(lVar5 + 0x20) =
                 (fVar18 * fVar15 + fVar26 * fVar11 + fVar13 * fVar16) - fVar22 * fVar14;
            *(float *)(lVar5 + 0x24) =
                 (fVar22 * fVar11 + fVar26 * fVar14 + fVar18 * fVar16) - fVar13 * fVar15;
            *(float *)(lVar5 + 0x28) =
                 (fVar13 * fVar14 + fVar26 * fVar15 + fVar22 * fVar16) - fVar18 * fVar11;
            *(float *)(lVar5 + 0x2c) =
                 ((fVar26 * fVar16 - fVar13 * fVar11) - fVar18 * fVar14) - fVar22 * fVar15;
            goto LAB_07c9a560;
          }
        }
      }
      else if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
        lVar5 = unaff_x21 + unaff_x26 * 0x10;
        puVar6 = (undefined4 *)(lVar5 + 0x20);
        uVar12 = *puVar6;
        puVar8 = (undefined4 *)(lVar5 + 0x24);
        uVar17 = *puVar8;
        puVar9 = (undefined4 *)(lVar5 + 0x28);
        uVar21 = *puVar9;
        puVar10 = (undefined4 *)(lVar5 + 0x2c);
        uVar25 = *puVar10;
        while (uVar12 = FUN_09516694(uVar12,0), (uint)unaff_x26 < *(uint *)(unaff_x21 + 0x18)) {
          *puVar6 = uVar12;
          *puVar8 = uVar17;
          *puVar9 = uVar21;
          *puVar10 = uVar25;
LAB_07c9a560:
          do {
            lVar5 = *(long *)(unaff_x19 + 0x158);
            if (lVar5 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            if (*(int *)(lVar5 + unaff_x25 * 4 + 0x20) == 0) {
              lVar5 = *(long *)(unaff_x19 + 0xe0);
            }
            else {
              lVar5 = *(long *)(unaff_x19 + 0xd8);
            }
            if (lVar5 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            lVar5 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_07c9a864;
            FUN_07c1e698(lVar5,0);
            lVar5 = *(long *)(unaff_x19 + 0x148);
            if (lVar5 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            if (unaff_x21 == 0) goto LAB_07c9a864;
            uVar7 = (uint)unaff_x26;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
            lVar5 = lVar5 + unaff_x25 * 0x10;
            lVar3 = unaff_x21 + unaff_x26 * 0x10;
            unaff_d9 = (ulong)*(uint *)(lVar5 + 0x24);
            unaff_d8 = (ulong)*(uint *)(lVar5 + 0x28);
            unaff_d10 = (ulong)*(uint *)(lVar5 + 0x2c);
            uVar12 = FUN_09516694(*(undefined4 *)(lVar5 + 0x20),0);
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
            *(undefined4 *)(lVar3 + 0x20) = uVar12;
            *(int *)(lVar3 + 0x24) = (int)unaff_d9;
            *(int *)(lVar3 + 0x28) = (int)unaff_d8;
            *(int *)(lVar3 + 0x2c) = (int)unaff_d10;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
            lVar5 = *(long *)(unaff_x19 + 0x150);
            if (lVar5 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            lVar5 = lVar5 + unaff_x25 * 0x10;
            unaff_w20 = unaff_w20 + 1;
            *(undefined4 *)(lVar5 + 0x20) = uVar12;
            *(int *)(lVar5 + 0x24) = (int)unaff_d9;
            *(int *)(lVar5 + 0x28) = (int)unaff_d8;
            *(int *)(lVar5 + 0x2c) = (int)unaff_d10;
            lVar5 = *unaff_x22;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar5 = *unaff_x22;
            }
            if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_07c9a864;
            if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (int)unaff_w20) {
              return;
            }
            lVar5 = *(long *)(unaff_x19 + 0x158);
            if (lVar5 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            unaff_x25 = (long)(int)unaff_w20;
            iVar1 = *(int *)(lVar5 + unaff_x25 * 4 + 0x20);
            unaff_s11 = (float)FUN_07c9ab68();
            lVar5 = *(long *)(unaff_x19 + 0xd0);
            if (lVar5 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            lVar3 = *unaff_x22;
            unaff_s12 = *(undefined4 *)(lVar5 + unaff_x25 * 4 + 0x20);
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar3 = *unaff_x22;
            }
            plVar4 = *(long **)(lVar3 + 0xb8);
            lVar5 = *plVar4;
            if (lVar5 == 0) goto LAB_07c9a864;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
            uVar7 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
            unaff_x26 = (long)(int)uVar7;
            if (iVar1 == 1) {
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                plVar4 = *(long **)(*unaff_x22 + 0xb8);
              }
              param_1 = plVar4[3];
              if (param_1 == 0) goto LAB_07c9a864;
              if (*(uint *)(param_1 + 0x18) <= unaff_w20) goto LAB_07c9a860;
              param_2 = *unaff_x23;
              param_1 = param_1 + unaff_x25;
              goto code_r0x07c9a3d0;
            }
          } while (iVar1 != 2);
          if (unaff_x21 == 0) goto LAB_07c9a864;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
          lVar5 = unaff_x21 + unaff_x26 * 0x10;
          puVar6 = (undefined4 *)(lVar5 + 0x20);
          uVar12 = *puVar6;
          puVar8 = (undefined4 *)(lVar5 + 0x24);
          uVar17 = *puVar8;
          puVar9 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x2c);
          uVar25 = *puVar10;
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


