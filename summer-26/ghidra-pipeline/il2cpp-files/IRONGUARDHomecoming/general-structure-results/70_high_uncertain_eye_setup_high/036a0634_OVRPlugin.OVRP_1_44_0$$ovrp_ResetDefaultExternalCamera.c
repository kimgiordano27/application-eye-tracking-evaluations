/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_ResetDefaultExternalCamera
ENTRY_POINT: 036a0634
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_ResetDefaultExternalCamera(long *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  long in_x10;
  uint in_w11;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined4 uVar19;
  float fVar20;
  ulong uVar21;
  undefined4 uVar22;
  ulong in_d3;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s12;
  float fVar28;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while (fVar28 = (float)in_d3, unaff_w21 < in_w11) {
    lVar7 = *(long *)(unaff_x19 + 0x140);
    if (lVar7 == 0) goto LAB_036a0bfc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) break;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_036a0bfc;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) break;
    lVar12 = (long)(int)unaff_w21;
    lVar7 = lVar7 + lVar12 * 0x10;
    iVar1 = *(int *)(in_x10 + lVar12 * 4 + 0x20);
    fVar27 = *(float *)(lVar7 + 0x20);
    fVar26 = *(float *)(lVar7 + 0x24);
    fVar23 = *(float *)(lVar7 + 0x28);
    fVar25 = *(float *)(lVar7 + 0x2c);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x22;
      param_1 = *(long **)(param_2 + 0xb8);
      in_x9 = *param_1;
      if (in_x9 == 0) goto LAB_036a0bfc;
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_w21) break;
    uVar3 = *(uint *)(in_x9 + lVar12 * 4 + 0x20);
    lVar7 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        param_1 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = param_1[3];
      if (lVar5 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
      cVar2 = *(char *)(lVar5 + lVar12 + 0x20);
      if (cVar2 != '\0') {
        unaff_s12 = 0.0;
      }
      fVar20 = unaff_s12 * -90.0 * in_stack_00000038;
      fVar15 = 0.0;
      fVar14 = (float)FUN_040672cc(0,0);
      fVar24 = (fVar26 * fVar20 + fVar25 * fVar14 + fVar27 * fVar28) - fVar23 * fVar15;
      fStack0000000000000044 =
           (fVar23 * fVar14 + fVar25 * fVar15 + fVar26 * fVar28) - fVar27 * fVar20;
      uVar18 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar27 * fVar15 + fVar25 * fVar20 + fVar23 * fVar28) - fVar26 * fVar14;
      uVar21 = (ulong)(uint)fStack0000000000000048;
      fVar28 = ((fVar25 * fVar28 - fVar27 * fVar14) - fVar26 * fVar15) - fVar23 * fVar20;
      fStack0000000000000040 = fVar24;
      fStack000000000000004c = fVar28;
      if (unaff_x23 == 0) goto LAB_036a0bfc;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
      fVar23 = (float)FUN_036a0d58(unaff_x23 + lVar7 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar23) {
        unaff_s12 = fVar23;
      }
      if (fVar23 < 0.0) {
        if (uVar3 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + lVar7 * 0x10;
          puVar8 = (undefined4 *)(lVar5 + 0x20);
          uVar13 = *puVar8;
          puVar9 = (undefined4 *)(lVar5 + 0x24);
          uVar17 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x28);
          uVar19 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x2c);
          uVar22 = *puVar11;
          goto LAB_036a085c;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
        lVar5 = unaff_x23 + lVar7 * 0x10;
        fVar14 = *(float *)(lVar5 + 0x20);
        fVar26 = *(float *)(lVar5 + 0x24);
        fVar25 = *(float *)(lVar5 + 0x28);
        fVar27 = *(float *)(lVar5 + 0x2c);
        if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
        }
        puVar4 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
        lVar6 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
        fVar15 = fVar26;
        fVar20 = fVar25;
        uVar13 = FUN_040677e4(fVar14,fVar26,fVar25,fVar27,*(undefined4 *)(lVar6 + 0x48),
                              *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
          thunk_FUN_01efb3a4(puVar4);
          *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
        }
        lVar6 = *(long *)(*(long *)puVar4 + 0xb8);
        uVar16 = FUN_040677e4(fVar24,uVar18,uVar21,fVar28,*(undefined4 *)(lVar6 + 0x48),
                              *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4(puVar4);
          DAT_0482ee19 = '\x01';
        }
        lVar6 = *(long *)(*(long *)puVar4 + 0xb8);
        FUN_040677e4(fVar14,fVar26,fVar25,fVar27,*(undefined4 *)(lVar6 + 0x18),
                     *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
        fVar15 = (float)FUN_01fdd7a4(uVar13,fVar15,fVar20,uVar16,uVar18,uVar21,0);
        fVar20 = 1.0;
        fVar23 = fVar23 * *(float *)(unaff_x19 + 0xb0);
        fVar28 = fVar23;
        if (1.0 < fVar23) {
          fVar28 = 1.0;
        }
        fVar28 = 1.0 - fVar28;
        if (fVar23 < 0.0) {
          fVar28 = 1.0;
        }
        fVar24 = 0.0;
        fVar23 = fVar15 * fVar28 * in_stack_00000038;
        fVar28 = (float)FUN_040672cc(0,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
        *(float *)(lVar5 + 0x20) =
             (fVar26 * fVar24 + fVar27 * fVar28 + fVar14 * fVar20) - fVar25 * fVar23;
        *(float *)(lVar5 + 0x24) =
             (fVar25 * fVar28 + fVar27 * fVar23 + fVar26 * fVar20) - fVar14 * fVar24;
        *(float *)(lVar5 + 0x28) =
             (fVar14 * fVar23 + fVar27 * fVar24 + fVar25 * fVar20) - fVar26 * fVar28;
        *(float *)(lVar5 + 0x2c) =
             ((fVar27 * fVar20 - fVar14 * fVar28) - fVar26 * fVar23) - fVar25 * fVar24;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x23 == 0) goto LAB_036a0bfc;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
      lVar5 = unaff_x23 + lVar7 * 0x10;
      puVar8 = (undefined4 *)(lVar5 + 0x20);
      uVar13 = *puVar8;
      puVar9 = (undefined4 *)(lVar5 + 0x24);
      uVar17 = *puVar9;
      puVar10 = (undefined4 *)(lVar5 + 0x28);
      uVar19 = *puVar10;
      puVar11 = (undefined4 *)(lVar5 + 0x2c);
      uVar22 = *puVar11;
LAB_036a085c:
      uVar13 = FUN_04067050(uVar13,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
      *puVar8 = uVar13;
      *puVar9 = uVar17;
      *puVar10 = uVar19;
      *puVar11 = uVar22;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) {
LAB_036a0bfc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    if (*(int *)(lVar5 + lVar12 * 4 + 0x20) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar5 == 0) goto LAB_036a0bfc;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    lVar5 = *(long *)(lVar5 + lVar12 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_036a0bfc;
    FUN_03668360(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x148);
    if (lVar5 == 0) goto LAB_036a0bfc;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    if (unaff_x23 == 0) goto LAB_036a0bfc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
    lVar5 = lVar5 + lVar12 * 0x10;
    lVar7 = unaff_x23 + lVar7 * 0x10;
    uVar17 = *(undefined4 *)(lVar5 + 0x24);
    uVar19 = *(undefined4 *)(lVar5 + 0x28);
    in_d3 = (ulong)*(uint *)(lVar5 + 0x2c);
    uVar13 = FUN_04067050(*(undefined4 *)(lVar5 + 0x20),0);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
    *(undefined4 *)(lVar7 + 0x20) = uVar13;
    *(undefined4 *)(lVar7 + 0x24) = uVar17;
    *(undefined4 *)(lVar7 + 0x28) = uVar19;
    *(int *)(lVar7 + 0x2c) = (int)in_d3;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
    lVar7 = *(long *)(unaff_x19 + 0x150);
    if (lVar7 == 0) goto LAB_036a0bfc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) break;
    lVar7 = lVar7 + lVar12 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar7 + 0x20) = uVar13;
    *(undefined4 *)(lVar7 + 0x24) = uVar17;
    *(undefined4 *)(lVar7 + 0x28) = uVar19;
    *(int *)(lVar7 + 0x2c) = (int)in_d3;
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
    in_x10 = *(long *)(unaff_x19 + 0x158);
    if (in_x10 == 0) goto LAB_036a0bfc;
    in_w11 = *(uint *)(in_x10 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


