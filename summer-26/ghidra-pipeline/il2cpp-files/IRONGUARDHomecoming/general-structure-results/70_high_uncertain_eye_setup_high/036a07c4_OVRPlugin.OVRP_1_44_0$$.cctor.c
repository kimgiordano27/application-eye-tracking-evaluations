/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$.cctor
ENTRY_POINT: 036a07c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0___cctor
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],float param_8)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long unaff_x28;
  uint uVar13;
  long unaff_x29;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s12;
  float in_s16;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
code_r0x036a07c4:
  param_5 = param_5 - param_8;
  fStack0000000000000044 = (in_s18 + param_6) - in_s19;
  uVar19 = (ulong)(uint)fStack0000000000000044;
  fStack0000000000000048 = (in_s20 + param_4) - param_1;
  uVar24 = (ulong)(uint)fStack0000000000000048;
  param_3 = (in_s16 - param_2) - param_3;
  fStack0000000000000040 = param_5;
  fStack000000000000004c = param_3;
  if (unaff_x23 != 0) {
    uVar13 = (uint)unaff_x29;
    if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
      fVar15 = (float)FUN_036a0d58(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar15) {
        unaff_s12 = fVar15;
      }
      if (0.0 <= fVar15) {
        if (unaff_w24 == 0) goto LAB_036a0880;
        if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          fVar14 = *(float *)(lVar5 + 0x20);
          fVar28 = *(float *)(lVar5 + 0x24);
          fVar27 = *(float *)(lVar5 + 0x28);
          fVar29 = *(float *)(lVar5 + 0x2c);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          puVar3 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
          lVar6 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                           + 0xb8);
          fVar22 = fVar28;
          fVar20 = fVar27;
          uVar16 = FUN_040677e4(fVar14,fVar28,fVar27,fVar29,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(puVar3);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar17 = FUN_040677e4(param_5,uVar19,uVar24,param_3,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (DAT_0482ee19 == '\0') {
            thunk_FUN_01efb3a4(puVar3);
            DAT_0482ee19 = '\x01';
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          FUN_040677e4(fVar14,fVar28,fVar27,fVar29,*(undefined4 *)(lVar6 + 0x18),
                       *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
          fVar20 = (float)FUN_01fdd7a4(uVar16,fVar22,fVar20,uVar17,uVar19,uVar24,0);
          fVar26 = 1.0;
          fVar15 = fVar15 * *(float *)(unaff_x19 + 0xb0);
          fVar22 = fVar15;
          if (1.0 < fVar15) {
            fVar22 = 1.0;
          }
          fVar22 = 1.0 - fVar22;
          if (fVar15 < 0.0) {
            fVar22 = 1.0;
          }
          fVar23 = 0.0;
          fVar22 = fVar20 * fVar22 * in_stack_00000038;
          fVar15 = (float)FUN_040672cc(0,0);
          if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
            *(float *)(lVar5 + 0x20) =
                 (fVar28 * fVar23 + fVar29 * fVar15 + fVar14 * fVar26) - fVar27 * fVar22;
            *(float *)(lVar5 + 0x24) =
                 (fVar27 * fVar15 + fVar29 * fVar22 + fVar28 * fVar26) - fVar14 * fVar23;
            *(float *)(lVar5 + 0x28) =
                 (fVar14 * fVar22 + fVar29 * fVar23 + fVar27 * fVar26) - fVar28 * fVar15;
            *(float *)(lVar5 + 0x2c) =
                 ((fVar29 * fVar26 - fVar14 * fVar15) - fVar28 * fVar22) - fVar27 * fVar23;
            goto LAB_036a0880;
          }
        }
      }
      else if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
        lVar5 = unaff_x23 + unaff_x29 * 0x10;
        puVar9 = (undefined4 *)(lVar5 + 0x20);
        uVar16 = *puVar9;
        puVar10 = (undefined4 *)(lVar5 + 0x24);
        uVar18 = *puVar10;
        puVar11 = (undefined4 *)(lVar5 + 0x28);
        uVar21 = *puVar11;
        puVar12 = (undefined4 *)(lVar5 + 0x2c);
        uVar25 = *puVar12;
        while (uVar16 = FUN_04067050(uVar16,0), (uint)unaff_x29 < *(uint *)(unaff_x23 + 0x18)) {
          *puVar9 = uVar16;
          *puVar10 = uVar18;
          *puVar11 = uVar21;
          *puVar12 = uVar25;
LAB_036a0880:
          do {
            lVar5 = *(long *)(unaff_x19 + 0x158);
            if (lVar5 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            if (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0) {
              lVar5 = *(long *)(unaff_x19 + 0xe0);
            }
            else {
              lVar5 = *(long *)(unaff_x19 + 0xd8);
            }
            if (lVar5 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            lVar5 = *(long *)(lVar5 + unaff_x28 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_036a0bfc;
            FUN_03668360(lVar5,0);
            lVar5 = *(long *)(unaff_x19 + 0x148);
            if (lVar5 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            if (unaff_x23 == 0) goto LAB_036a0bfc;
            uVar13 = (uint)unaff_x29;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
            lVar5 = lVar5 + unaff_x28 * 0x10;
            lVar6 = unaff_x23 + unaff_x29 * 0x10;
            uVar18 = *(undefined4 *)(lVar5 + 0x24);
            uVar21 = *(undefined4 *)(lVar5 + 0x28);
            fVar15 = *(float *)(lVar5 + 0x2c);
            uVar16 = FUN_04067050(*(undefined4 *)(lVar5 + 0x20),0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
            *(undefined4 *)(lVar6 + 0x20) = uVar16;
            *(undefined4 *)(lVar6 + 0x24) = uVar18;
            *(undefined4 *)(lVar6 + 0x28) = uVar21;
            *(float *)(lVar6 + 0x2c) = fVar15;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
            lVar5 = *(long *)(unaff_x19 + 0x150);
            if (lVar5 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            lVar5 = lVar5 + unaff_x28 * 0x10;
            unaff_w21 = unaff_w21 + 1;
            *(undefined4 *)(lVar5 + 0x20) = uVar16;
            *(undefined4 *)(lVar5 + 0x24) = uVar18;
            *(undefined4 *)(lVar5 + 0x28) = uVar21;
            *(float *)(lVar5 + 0x2c) = fVar15;
            lVar5 = *unaff_x22;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar5 = *unaff_x22;
            }
            plVar4 = *(long **)(lVar5 + 0xb8);
            lVar6 = *plVar4;
            if (lVar6 == 0) goto LAB_036a0bfc;
            if (*(int *)(lVar6 + 0x18) <= (int)unaff_w21) {
              return;
            }
            lVar7 = *(long *)(unaff_x19 + 0x158);
            if (lVar7 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            lVar8 = *(long *)(unaff_x19 + 0x140);
            if (lVar8 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_036a0bfc;
            if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            unaff_x28 = (long)(int)unaff_w21;
            lVar8 = lVar8 + unaff_x28 * 0x10;
            iVar1 = *(int *)(lVar7 + unaff_x28 * 4 + 0x20);
            fVar29 = *(float *)(lVar8 + 0x20);
            fVar28 = *(float *)(lVar8 + 0x24);
            param_3 = *(float *)(lVar8 + 0x28);
            fVar27 = *(float *)(lVar8 + 0x2c);
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar5 = *unaff_x22;
              plVar4 = *(long **)(lVar5 + 0xb8);
              lVar6 = *plVar4;
              if (lVar6 == 0) goto LAB_036a0bfc;
            }
            if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            uVar13 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
            unaff_x29 = (long)(int)uVar13;
            if (iVar1 == 1) {
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                plVar4 = *(long **)(*unaff_x22 + 0xb8);
              }
              lVar5 = plVar4[3];
              if (lVar5 == 0) goto LAB_036a0bfc;
              if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
              bVar2 = *(byte *)(lVar5 + unaff_x28 + 0x20);
              unaff_w24 = (uint)bVar2;
              if (bVar2 != 0) {
                unaff_s12 = 0.0;
              }
              fVar20 = unaff_s12 * -90.0 * in_stack_00000038;
              fVar22 = 0.0;
              fVar14 = (float)FUN_040672cc(0,0);
              param_8 = param_3 * fVar22;
              in_s18 = param_3 * fVar14;
              in_s20 = fVar29 * fVar22;
              param_2 = fVar28 * fVar22;
              param_6 = fVar27 * fVar22 + fVar28 * fVar15;
              param_4 = fVar27 * fVar20 + param_3 * fVar15;
              in_s16 = fVar27 * fVar15 - fVar29 * fVar14;
              in_s19 = fVar29 * fVar20;
              param_1 = fVar28 * fVar14;
              param_3 = param_3 * fVar20;
              param_5 = fVar28 * fVar20 + fVar27 * fVar14 + fVar29 * fVar15;
              goto code_r0x036a07c4;
            }
          } while (iVar1 != 2);
          if (unaff_x23 == 0) goto LAB_036a0bfc;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar16 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar25 = *puVar12;
        }
      }
    }
LAB_036a0bf8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_036a0bfc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


