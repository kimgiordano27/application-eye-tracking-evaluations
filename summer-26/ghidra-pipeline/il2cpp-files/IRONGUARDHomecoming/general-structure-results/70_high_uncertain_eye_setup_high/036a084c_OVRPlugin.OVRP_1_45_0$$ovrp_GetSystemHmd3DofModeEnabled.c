/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 036a084c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_9;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled
               (ulong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  uint *unaff_x24;
  undefined4 *unaff_x25;
  undefined4 *unaff_x26;
  uint *puVar10;
  uint *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  float fVar18;
  undefined4 uVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s12;
  undefined4 uStack0000000000000000;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
code_r0x036a084c:
  puVar10 = unaff_x27 + 3;
  uVar21 = *puVar10;
  uStack0000000000000000 = uStack000000000000003c;
  while (uVar12 = FUN_04067050(param_1,0), (uint)unaff_x29 < *(uint *)(unaff_x23 + 0x18)) {
    *unaff_x24 = uVar12;
    *unaff_x25 = param_2;
    *unaff_x26 = param_3;
    *puVar10 = uVar21;
    do {
      while( true ) {
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
        uVar13 = FUN_03668360(lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0x148);
        if (lVar5 == 0) goto LAB_036a0bfc;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
        if (unaff_x23 == 0) goto LAB_036a0bfc;
        uVar21 = (uint)unaff_x29;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_036a0bf8;
        lVar5 = lVar5 + unaff_x28 * 0x10;
        lVar6 = unaff_x23 + unaff_x29 * 0x10;
        uVar16 = *(undefined4 *)(lVar5 + 0x24);
        uVar19 = *(undefined4 *)(lVar5 + 0x28);
        fVar22 = *(float *)(lVar5 + 0x2c);
        uStack0000000000000000 = uVar13;
        uVar13 = FUN_04067050(*(undefined4 *)(lVar5 + 0x20),0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_036a0bf8;
        *(undefined4 *)(lVar6 + 0x20) = uVar13;
        *(undefined4 *)(lVar6 + 0x24) = uVar16;
        *(undefined4 *)(lVar6 + 0x28) = uVar19;
        *(float *)(lVar6 + 0x2c) = fVar22;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_036a0bf8;
        lVar5 = *(long *)(unaff_x19 + 0x150);
        if (lVar5 == 0) goto LAB_036a0bfc;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
        lVar5 = lVar5 + unaff_x28 * 0x10;
        unaff_w21 = unaff_w21 + 1;
        *(undefined4 *)(lVar5 + 0x20) = uVar13;
        *(undefined4 *)(lVar5 + 0x24) = uVar16;
        *(undefined4 *)(lVar5 + 0x28) = uVar19;
        *(float *)(lVar5 + 0x2c) = fVar22;
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
        lVar9 = *(long *)(unaff_x19 + 0xd0);
        if (lVar9 == 0) goto LAB_036a0bfc;
        if (*(uint *)(lVar9 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
        unaff_x28 = (long)(int)unaff_w21;
        lVar8 = lVar8 + unaff_x28 * 0x10;
        iVar1 = *(int *)(lVar7 + unaff_x28 * 4 + 0x20);
        fVar27 = *(float *)(lVar8 + 0x20);
        fVar26 = *(float *)(lVar8 + 0x24);
        fVar23 = *(float *)(lVar8 + 0x28);
        fVar25 = *(float *)(lVar8 + 0x2c);
        uStack000000000000003c = *(undefined4 *)(lVar9 + unaff_x28 * 4 + 0x20);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *unaff_x22;
          plVar4 = *(long **)(lVar5 + 0xb8);
          lVar6 = *plVar4;
          if (lVar6 == 0) goto LAB_036a0bfc;
        }
        if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
        uVar21 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
        unaff_x29 = (long)(int)uVar21;
        if (iVar1 != 1) break;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          plVar4 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar5 = plVar4[3];
        if (lVar5 == 0) goto LAB_036a0bfc;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
        cVar2 = *(char *)(lVar5 + unaff_x28 + 0x20);
        if (cVar2 != '\0') {
          unaff_s12 = 0.0;
        }
        fVar18 = unaff_s12 * -90.0 * fStack0000000000000038;
        fVar14 = 0.0;
        fVar11 = (float)FUN_040672cc(0,0);
        fVar24 = (fVar26 * fVar18 + fVar25 * fVar11 + fVar27 * fVar22) - fVar23 * fVar14;
        fStack0000000000000044 =
             (fVar23 * fVar11 + fVar25 * fVar14 + fVar26 * fVar22) - fVar27 * fVar18;
        uVar17 = (ulong)(uint)fStack0000000000000044;
        fStack0000000000000048 =
             (fVar27 * fVar14 + fVar25 * fVar18 + fVar23 * fVar22) - fVar26 * fVar11;
        uVar20 = (ulong)(uint)fStack0000000000000048;
        fVar22 = ((fVar25 * fVar22 - fVar27 * fVar11) - fVar26 * fVar14) - fVar23 * fVar18;
        fStack0000000000000040 = fVar24;
        fStack000000000000004c = fVar22;
        if (unaff_x23 == 0) goto LAB_036a0bfc;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_036a0bf8;
        fVar23 = (float)FUN_036a0d58(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
        if (unaff_s12 <= fVar23) {
          unaff_s12 = fVar23;
        }
        if (fVar23 < 0.0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_036a0bf8;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          unaff_x24 = (uint *)(lVar5 + 0x20);
          param_1 = (ulong)*unaff_x24;
          unaff_x25 = (undefined4 *)(lVar5 + 0x24);
          param_2 = *unaff_x25;
          unaff_x26 = (undefined4 *)(lVar5 + 0x28);
          param_3 = *unaff_x26;
          unaff_x27 = unaff_x24;
          goto code_r0x036a084c;
        }
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_036a0bf8;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          fVar11 = *(float *)(lVar5 + 0x20);
          fVar26 = *(float *)(lVar5 + 0x24);
          fVar25 = *(float *)(lVar5 + 0x28);
          fVar27 = *(float *)(lVar5 + 0x2c);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          puVar3 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
          lVar6 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                           + 0xb8);
          fVar14 = fVar26;
          fVar18 = fVar25;
          uVar13 = FUN_040677e4(fVar11,fVar26,fVar25,fVar27,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
            thunk_FUN_01efb3a4(puVar3);
            *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar15 = FUN_040677e4(fVar24,uVar17,uVar20,fVar22,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (DAT_0482ee19 == '\0') {
            thunk_FUN_01efb3a4(puVar3);
            DAT_0482ee19 = '\x01';
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uStack0000000000000000 =
               FUN_040677e4(fVar11,fVar26,fVar25,fVar27,*(undefined4 *)(lVar6 + 0x18),
                            *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
          fVar14 = (float)FUN_01fdd7a4(uVar13,fVar14,fVar18,uVar15,uVar17,uVar20,0);
          fVar18 = 1.0;
          fVar23 = fVar23 * *(float *)(unaff_x19 + 0xb0);
          fVar22 = fVar23;
          if (1.0 < fVar23) {
            fVar22 = 1.0;
          }
          fVar22 = 1.0 - fVar22;
          if (fVar23 < 0.0) {
            fVar22 = 1.0;
          }
          fVar24 = 0.0;
          fVar23 = fVar14 * fVar22 * fStack0000000000000038;
          fVar22 = (float)FUN_040672cc(0,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_036a0bf8;
          *(float *)(lVar5 + 0x20) =
               (fVar26 * fVar24 + fVar27 * fVar22 + fVar11 * fVar18) - fVar25 * fVar23;
          *(float *)(lVar5 + 0x24) =
               (fVar25 * fVar22 + fVar27 * fVar23 + fVar26 * fVar18) - fVar11 * fVar24;
          *(float *)(lVar5 + 0x28) =
               (fVar11 * fVar23 + fVar27 * fVar24 + fVar25 * fVar18) - fVar26 * fVar22;
          *(float *)(lVar5 + 0x2c) =
               ((fVar27 * fVar18 - fVar11 * fVar22) - fVar26 * fVar23) - fVar25 * fVar24;
        }
      }
    } while (iVar1 != 2);
    if (unaff_x23 == 0) {
LAB_036a0bfc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar21) break;
    lVar5 = unaff_x23 + unaff_x29 * 0x10;
    unaff_x24 = (uint *)(lVar5 + 0x20);
    param_1 = (ulong)*unaff_x24;
    unaff_x25 = (undefined4 *)(lVar5 + 0x24);
    param_2 = *unaff_x25;
    unaff_x26 = (undefined4 *)(lVar5 + 0x28);
    param_3 = *unaff_x26;
    puVar10 = (uint *)(lVar5 + 0x2c);
    uVar21 = *puVar10;
    uStack0000000000000000 = uStack000000000000003c;
  }
LAB_036a0bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


