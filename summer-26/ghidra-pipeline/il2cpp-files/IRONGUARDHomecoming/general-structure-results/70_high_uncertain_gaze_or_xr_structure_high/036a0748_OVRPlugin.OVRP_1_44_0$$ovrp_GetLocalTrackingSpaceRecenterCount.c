/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 036a0748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount
               (float param_1,float param_2,undefined1 param_3 [16],ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long unaff_x28;
  uint uVar12;
  long unaff_x29;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  ulong uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  undefined4 uVar23;
  float unaff_s8;
  float fVar24;
  float unaff_s9;
  float unaff_s10;
  float fVar25;
  float unaff_s11;
  float fVar26;
  float unaff_s12;
  float fVar27;
  float fVar28;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
code_r0x036a0748:
  fVar28 = (float)param_4;
  if (unaff_w24 != 0) {
    unaff_s12 = param_1;
  }
  param_2 = unaff_s12 * -90.0 * param_2;
  fVar20 = 0.0;
  fVar13 = (float)FUN_040672cc(0,0);
  fVar24 = (unaff_s10 * param_2 + unaff_s9 * fVar13 + unaff_s11 * fVar28) - unaff_s8 * fVar20;
  fStack0000000000000044 =
       (unaff_s8 * fVar13 + unaff_s9 * fVar20 + unaff_s10 * fVar28) - unaff_s11 * param_2;
  uVar18 = (ulong)(uint)fStack0000000000000044;
  fStack0000000000000048 =
       (unaff_s11 * fVar20 + unaff_s9 * param_2 + unaff_s8 * fVar28) - unaff_s10 * fVar13;
  uVar22 = (ulong)(uint)fStack0000000000000048;
  fVar28 = ((unaff_s9 * fVar28 - unaff_s11 * fVar13) - unaff_s10 * fVar20) - unaff_s8 * param_2;
  fStack0000000000000040 = fVar24;
  fStack000000000000004c = fVar28;
  if (unaff_x23 != 0) {
    uVar12 = (uint)unaff_x29;
    if (uVar12 < *(uint *)(unaff_x23 + 0x18)) {
      fVar13 = (float)FUN_036a0d58(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar13) {
        unaff_s12 = fVar13;
      }
      if (0.0 <= fVar13) {
        if (unaff_w24 == 0) goto LAB_036a0880;
        if (uVar12 < *(uint *)(unaff_x23 + 0x18)) {
          lVar4 = unaff_x23 + unaff_x29 * 0x10;
          fVar27 = *(float *)(lVar4 + 0x20);
          fVar25 = *(float *)(lVar4 + 0x24);
          fVar20 = *(float *)(lVar4 + 0x28);
          fVar26 = *(float *)(lVar4 + 0x2c);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          puVar2 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
          lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                           + 0xb8);
          fVar17 = fVar25;
          fVar21 = fVar20;
          uVar14 = FUN_040677e4(fVar27,fVar25,fVar20,fVar26,*(undefined4 *)(lVar5 + 0x48),
                                *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(puVar2);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
          uVar15 = FUN_040677e4(fVar24,uVar18,uVar22,fVar28,*(undefined4 *)(lVar5 + 0x48),
                                *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
          if (DAT_0482ee19 == '\0') {
            thunk_FUN_01efb3a4(puVar2);
            DAT_0482ee19 = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
          FUN_040677e4(fVar27,fVar25,fVar20,fVar26,*(undefined4 *)(lVar5 + 0x18),
                       *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
          fVar24 = (float)FUN_01fdd7a4(uVar14,fVar17,fVar21,uVar15,uVar18,uVar22,0);
          fVar17 = 1.0;
          fVar13 = fVar13 * *(float *)(unaff_x19 + 0xb0);
          fVar28 = fVar13;
          if (1.0 < fVar13) {
            fVar28 = 1.0;
          }
          fVar28 = 1.0 - fVar28;
          if (fVar13 < 0.0) {
            fVar28 = 1.0;
          }
          fVar21 = 0.0;
          fVar13 = fVar24 * fVar28 * in_stack_00000038;
          fVar28 = (float)FUN_040672cc(0,0);
          if (uVar12 < *(uint *)(unaff_x23 + 0x18)) {
            *(float *)(lVar4 + 0x20) =
                 (fVar25 * fVar21 + fVar26 * fVar28 + fVar27 * fVar17) - fVar20 * fVar13;
            *(float *)(lVar4 + 0x24) =
                 (fVar20 * fVar28 + fVar26 * fVar13 + fVar25 * fVar17) - fVar27 * fVar21;
            *(float *)(lVar4 + 0x28) =
                 (fVar27 * fVar13 + fVar26 * fVar21 + fVar20 * fVar17) - fVar25 * fVar28;
            *(float *)(lVar4 + 0x2c) =
                 ((fVar26 * fVar17 - fVar27 * fVar28) - fVar25 * fVar13) - fVar20 * fVar21;
            goto LAB_036a0880;
          }
        }
      }
      else if (uVar12 < *(uint *)(unaff_x23 + 0x18)) {
        lVar4 = unaff_x23 + unaff_x29 * 0x10;
        puVar8 = (undefined4 *)(lVar4 + 0x20);
        uVar14 = *puVar8;
        puVar9 = (undefined4 *)(lVar4 + 0x24);
        uVar16 = *puVar9;
        puVar10 = (undefined4 *)(lVar4 + 0x28);
        uVar19 = *puVar10;
        puVar11 = (undefined4 *)(lVar4 + 0x2c);
        uVar23 = *puVar11;
        while (uVar14 = FUN_04067050(uVar14,0), (uint)unaff_x29 < *(uint *)(unaff_x23 + 0x18)) {
          *puVar8 = uVar14;
          *puVar9 = uVar16;
          *puVar10 = uVar19;
          *puVar11 = uVar23;
LAB_036a0880:
          do {
            lVar4 = *(long *)(unaff_x19 + 0x158);
            if (lVar4 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            if (*(int *)(lVar4 + unaff_x28 * 4 + 0x20) == 0) {
              lVar4 = *(long *)(unaff_x19 + 0xe0);
            }
            else {
              lVar4 = *(long *)(unaff_x19 + 0xd8);
            }
            if (lVar4 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            lVar4 = *(long *)(lVar4 + unaff_x28 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_036a0bfc;
            FUN_03668360(lVar4,0);
            lVar4 = *(long *)(unaff_x19 + 0x148);
            if (lVar4 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            if (unaff_x23 == 0) goto LAB_036a0bfc;
            uVar12 = (uint)unaff_x29;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar12) goto LAB_036a0bf8;
            lVar4 = lVar4 + unaff_x28 * 0x10;
            lVar5 = unaff_x23 + unaff_x29 * 0x10;
            uVar16 = *(undefined4 *)(lVar4 + 0x24);
            uVar19 = *(undefined4 *)(lVar4 + 0x28);
            param_4 = (ulong)*(uint *)(lVar4 + 0x2c);
            uVar14 = FUN_04067050(*(undefined4 *)(lVar4 + 0x20),0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar12) goto LAB_036a0bf8;
            *(undefined4 *)(lVar5 + 0x20) = uVar14;
            *(undefined4 *)(lVar5 + 0x24) = uVar16;
            *(undefined4 *)(lVar5 + 0x28) = uVar19;
            *(int *)(lVar5 + 0x2c) = (int)param_4;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar12) goto LAB_036a0bf8;
            lVar4 = *(long *)(unaff_x19 + 0x150);
            if (lVar4 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            lVar4 = lVar4 + unaff_x28 * 0x10;
            unaff_w21 = unaff_w21 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar14;
            *(undefined4 *)(lVar4 + 0x24) = uVar16;
            *(undefined4 *)(lVar4 + 0x28) = uVar19;
            *(int *)(lVar4 + 0x2c) = (int)param_4;
            lVar4 = *unaff_x22;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar4 = *unaff_x22;
            }
            plVar3 = *(long **)(lVar4 + 0xb8);
            lVar5 = *plVar3;
            if (lVar5 == 0) goto LAB_036a0bfc;
            if (*(int *)(lVar5 + 0x18) <= (int)unaff_w21) {
              return;
            }
            lVar6 = *(long *)(unaff_x19 + 0x158);
            if (lVar6 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            lVar7 = *(long *)(unaff_x19 + 0x140);
            if (lVar7 == 0) goto LAB_036a0bfc;
            if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_036a0bfc;
            if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            unaff_x28 = (long)(int)unaff_w21;
            lVar7 = lVar7 + unaff_x28 * 0x10;
            iVar1 = *(int *)(lVar6 + unaff_x28 * 4 + 0x20);
            unaff_s11 = *(float *)(lVar7 + 0x20);
            unaff_s10 = *(float *)(lVar7 + 0x24);
            unaff_s8 = *(float *)(lVar7 + 0x28);
            unaff_s9 = *(float *)(lVar7 + 0x2c);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar4 = *unaff_x22;
              plVar3 = *(long **)(lVar4 + 0xb8);
              lVar5 = *plVar3;
              if (lVar5 == 0) goto LAB_036a0bfc;
            }
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
            uVar12 = *(uint *)(lVar5 + unaff_x28 * 4 + 0x20);
            unaff_x29 = (long)(int)uVar12;
            if (iVar1 == 1) {
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                plVar3 = *(long **)(*unaff_x22 + 0xb8);
              }
              lVar4 = plVar3[3];
              if (lVar4 == 0) goto LAB_036a0bfc;
              if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
              unaff_w24 = (uint)*(byte *)(lVar4 + unaff_x28 + 0x20);
              param_1 = 0.0;
              param_2 = in_stack_00000038;
              goto code_r0x036a0748;
            }
          } while (iVar1 != 2);
          if (unaff_x23 == 0) goto LAB_036a0bfc;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar12) break;
          lVar4 = unaff_x23 + unaff_x29 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar14 = *puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x24);
          uVar16 = *puVar9;
          puVar10 = (undefined4 *)(lVar4 + 0x28);
          uVar19 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x2c);
          uVar23 = *puVar11;
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


