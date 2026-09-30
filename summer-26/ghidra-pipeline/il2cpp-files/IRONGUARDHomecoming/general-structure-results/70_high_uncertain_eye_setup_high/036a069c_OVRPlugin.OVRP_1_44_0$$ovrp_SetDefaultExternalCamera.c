/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_SetDefaultExternalCamera
ENTRY_POINT: 036a069c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_SetDefaultExternalCamera(long *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x28;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  undefined4 uVar22;
  ulong in_d3;
  float unaff_s8;
  float fVar23;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar24;
  float unaff_s12;
  float fVar25;
  float fVar26;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while (in_x9 != 0) {
    do {
      fVar26 = (float)in_d3;
      if (*(uint *)(in_x9 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      uVar2 = *(uint *)(in_x9 + unaff_x28 * 4 + 0x20);
      lVar10 = (long)(int)uVar2;
      if (unaff_w24 == 1) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          param_1 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar4 = param_1[3];
        if (lVar4 == 0) goto LAB_036a0bfc;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
        cVar1 = *(char *)(lVar4 + unaff_x28 + 0x20);
        if (cVar1 != '\0') {
          unaff_s12 = 0.0;
        }
        fVar18 = unaff_s12 * -90.0 * in_stack_00000038;
        fVar19 = 0.0;
        fVar12 = (float)FUN_040672cc(0,0);
        fVar23 = (unaff_s10 * fVar18 + unaff_s9 * fVar12 + unaff_s11 * fVar26) - unaff_s8 * fVar19;
        fStack0000000000000044 =
             (unaff_s8 * fVar12 + unaff_s9 * fVar19 + unaff_s10 * fVar26) - unaff_s11 * fVar18;
        uVar16 = (ulong)(uint)fStack0000000000000044;
        fStack0000000000000048 =
             (unaff_s11 * fVar19 + unaff_s9 * fVar18 + unaff_s8 * fVar26) - unaff_s10 * fVar12;
        uVar21 = (ulong)(uint)fStack0000000000000048;
        fVar26 = ((unaff_s9 * fVar26 - unaff_s11 * fVar12) - unaff_s10 * fVar19) - unaff_s8 * fVar18
        ;
        fStack0000000000000040 = fVar23;
        fStack000000000000004c = fVar26;
        if (unaff_x23 == 0) goto LAB_036a0bfc;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
        fVar12 = (float)FUN_036a0d58(unaff_x23 + lVar10 * 0x10 + 0x20,&stack0x00000040);
        if (unaff_s12 <= fVar12) {
          unaff_s12 = fVar12;
        }
        if (fVar12 < 0.0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
          lVar4 = unaff_x23 + lVar10 * 0x10;
          puVar6 = (undefined4 *)(lVar4 + 0x20);
          uVar11 = *puVar6;
          puVar7 = (undefined4 *)(lVar4 + 0x24);
          uVar14 = *puVar7;
          puVar8 = (undefined4 *)(lVar4 + 0x28);
          uVar17 = *puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x2c);
          uVar22 = *puVar9;
          goto LAB_036a085c;
        }
        if (cVar1 != '\0') {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
          lVar4 = unaff_x23 + lVar10 * 0x10;
          fVar25 = *(float *)(lVar4 + 0x20);
          fVar18 = *(float *)(lVar4 + 0x24);
          fVar19 = *(float *)(lVar4 + 0x28);
          fVar24 = *(float *)(lVar4 + 0x2c);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          puVar3 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
          lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                           + 0xb8);
          fVar15 = fVar18;
          fVar20 = fVar19;
          uVar11 = FUN_040677e4(fVar25,fVar18,fVar19,fVar24,*(undefined4 *)(lVar5 + 0x48),
                                *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(puVar3);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar13 = FUN_040677e4(fVar23,uVar16,uVar21,fVar26,*(undefined4 *)(lVar5 + 0x48),
                                *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
          if (DAT_0482ee19 == '\0') {
            thunk_FUN_01efb3a4(puVar3);
            DAT_0482ee19 = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
          FUN_040677e4(fVar25,fVar18,fVar19,fVar24,*(undefined4 *)(lVar5 + 0x18),
                       *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
          fVar23 = (float)FUN_01fdd7a4(uVar11,fVar15,fVar20,uVar13,uVar16,uVar21,0);
          fVar15 = 1.0;
          fVar12 = fVar12 * *(float *)(unaff_x19 + 0xb0);
          fVar26 = fVar12;
          if (1.0 < fVar12) {
            fVar26 = 1.0;
          }
          fVar26 = 1.0 - fVar26;
          if (fVar12 < 0.0) {
            fVar26 = 1.0;
          }
          fVar20 = 0.0;
          fVar12 = fVar23 * fVar26 * in_stack_00000038;
          fVar26 = (float)FUN_040672cc(0,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
          *(float *)(lVar4 + 0x20) =
               (fVar18 * fVar20 + fVar24 * fVar26 + fVar25 * fVar15) - fVar19 * fVar12;
          *(float *)(lVar4 + 0x24) =
               (fVar19 * fVar26 + fVar24 * fVar12 + fVar18 * fVar15) - fVar25 * fVar20;
          *(float *)(lVar4 + 0x28) =
               (fVar25 * fVar12 + fVar24 * fVar20 + fVar19 * fVar15) - fVar18 * fVar26;
          *(float *)(lVar4 + 0x2c) =
               ((fVar24 * fVar15 - fVar25 * fVar26) - fVar18 * fVar12) - fVar19 * fVar20;
        }
      }
      else if (unaff_w24 == 2) {
        if (unaff_x23 == 0) goto LAB_036a0bfc;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
        lVar4 = unaff_x23 + lVar10 * 0x10;
        puVar6 = (undefined4 *)(lVar4 + 0x20);
        uVar11 = *puVar6;
        puVar7 = (undefined4 *)(lVar4 + 0x24);
        uVar14 = *puVar7;
        puVar8 = (undefined4 *)(lVar4 + 0x28);
        uVar17 = *puVar8;
        puVar9 = (undefined4 *)(lVar4 + 0x2c);
        uVar22 = *puVar9;
LAB_036a085c:
        uVar11 = FUN_04067050(uVar11,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
        *puVar6 = uVar11;
        *puVar7 = uVar14;
        *puVar8 = uVar17;
        *puVar9 = uVar22;
      }
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) {
LAB_036a0bf8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
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
      if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
      lVar4 = lVar4 + unaff_x28 * 0x10;
      lVar10 = unaff_x23 + lVar10 * 0x10;
      uVar14 = *(undefined4 *)(lVar4 + 0x24);
      uVar17 = *(undefined4 *)(lVar4 + 0x28);
      in_d3 = (ulong)*(uint *)(lVar4 + 0x2c);
      uVar11 = FUN_04067050(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
      *(undefined4 *)(lVar10 + 0x20) = uVar11;
      *(undefined4 *)(lVar10 + 0x24) = uVar14;
      *(undefined4 *)(lVar10 + 0x28) = uVar17;
      *(int *)(lVar10 + 0x2c) = (int)in_d3;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_036a0bf8;
      lVar10 = *(long *)(unaff_x19 + 0x150);
      if (lVar10 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      lVar10 = lVar10 + unaff_x28 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar10 + 0x20) = uVar11;
      *(undefined4 *)(lVar10 + 0x24) = uVar14;
      *(undefined4 *)(lVar10 + 0x28) = uVar17;
      *(int *)(lVar10 + 0x2c) = (int)in_d3;
      param_2 = *unaff_x22;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        param_2 = *unaff_x22;
      }
      param_1 = *(long **)(param_2 + 0xb8);
      in_x9 = *param_1;
      if (in_x9 == 0) goto LAB_036a0bfc;
      if (*(int *)(in_x9 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar10 = *(long *)(unaff_x19 + 0x158);
      if (lVar10 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      lVar4 = *(long *)(unaff_x19 + 0x140);
      if (lVar4 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_036a0bfc;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      unaff_x28 = (long)(int)unaff_w21;
      lVar4 = lVar4 + unaff_x28 * 0x10;
      unaff_w24 = *(int *)(lVar10 + unaff_x28 * 4 + 0x20);
      unaff_s11 = *(float *)(lVar4 + 0x20);
      unaff_s10 = *(float *)(lVar4 + 0x24);
      unaff_s8 = *(float *)(lVar4 + 0x28);
      unaff_s9 = *(float *)(lVar4 + 0x2c);
    } while (*(int *)(param_2 + 0xe0) != 0);
    thunk_FUN_01ee6d7c();
    param_2 = *unaff_x22;
    param_1 = *(long **)(param_2 + 0xb8);
    in_x9 = *param_1;
  }
LAB_036a0bfc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


