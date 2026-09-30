/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$ovrp_SetTiledMultiResDynamic
ENTRY_POINT: 036a09cc
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


void OVRPlugin_OVRP_1_46_0__ovrp_SetTiledMultiResDynamic
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined4 *puVar9;
  float *unaff_x24;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *unaff_x26;
  undefined4 *puVar12;
  long *unaff_x27;
  long unaff_x28;
  uint uVar13;
  long unaff_x29;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  ulong uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  ulong unaff_d8;
  float fVar28;
  float unaff_s9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  float *in_stack_00000010;
  float *in_stack_00000018;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while( true ) {
    if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
      fStack0000000000000034 = (float)param_3;
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      param_3 = (ulong)(uint)fStack0000000000000034;
      *(undefined1 *)(unaff_x22 + 0xe1d) = 1;
    }
    puVar3 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    fVar27 = (float)unaff_d11;
    fStack0000000000000034 = (float)unaff_d12;
    fVar26 = (float)unaff_d10;
    lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    uVar20 = unaff_d10;
    uVar24 = param_3;
    uVar14 = FUN_040677e4(unaff_d12,unaff_d10,param_3,unaff_d11,*(undefined4 *)(lVar5 + 0x48),
                          *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (*(char *)(unaff_x22 + 0xe1d) == '\0') {
      thunk_FUN_01efb3a4(puVar3);
      *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
    }
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar16 = FUN_040677e4(unaff_d8,unaff_d15,unaff_d14,unaff_d13,*(undefined4 *)(lVar5 + 0x48),
                          *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(puVar3);
      DAT_0482ee19 = '\x01';
    }
    fVar28 = fStack0000000000000034;
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    FUN_040677e4(fStack0000000000000034,unaff_d10 & 0xffffffff,param_3,unaff_d11 & 0xffffffff,
                 *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                 *(undefined4 *)(lVar5 + 0x20),0);
    fVar15 = (float)FUN_01fdd7a4(uVar14,uVar20 & 0xffffffff,uVar24 & 0xffffffff,uVar16,unaff_d15,
                                 unaff_d14,0);
    fVar17 = 1.0;
    fVar19 = unaff_s9 * *(float *)(unaff_x19 + 0xb0);
    fVar23 = fVar19;
    if (1.0 < fVar19) {
      fVar23 = 1.0;
    }
    fVar23 = 1.0 - fVar23;
    if (fVar19 < 0.0) {
      fVar23 = 1.0;
    }
    fVar19 = 0.0;
    fVar15 = fVar15 * fVar23 * fStack0000000000000038;
    fVar23 = (float)FUN_040672cc(0,0);
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x29) break;
    fVar21 = (float)param_3;
    *unaff_x26 = (fVar26 * fVar19 + fVar27 * fVar23 + fVar28 * fVar17) - fVar21 * fVar15;
    *in_stack_00000018 = (fVar21 * fVar23 + fVar27 * fVar15 + fVar26 * fVar17) - fVar28 * fVar19;
    *in_stack_00000010 = (fVar28 * fVar15 + fVar27 * fVar19 + fVar21 * fVar17) - fVar26 * fVar23;
    *unaff_x24 = ((fVar27 * fVar17 - fVar28 * fVar23) - fVar26 * fVar15) - fVar21 * fVar19;
LAB_036a0880:
    do {
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) {
LAB_036a0bfc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
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
      uVar22 = *(undefined4 *)(lVar5 + 0x28);
      fVar26 = *(float *)(lVar5 + 0x2c);
      uVar14 = FUN_04067050(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
      *(undefined4 *)(lVar6 + 0x20) = uVar14;
      *(undefined4 *)(lVar6 + 0x24) = uVar18;
      *(undefined4 *)(lVar6 + 0x28) = uVar22;
      *(float *)(lVar6 + 0x2c) = fVar26;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      lVar5 = lVar5 + unaff_x28 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar14;
      *(undefined4 *)(lVar5 + 0x24) = uVar18;
      *(undefined4 *)(lVar5 + 0x28) = uVar22;
      *(float *)(lVar5 + 0x2c) = fVar26;
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *unaff_x27;
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
      fVar15 = *(float *)(lVar8 + 0x20);
      fVar23 = *(float *)(lVar8 + 0x24);
      fVar27 = *(float *)(lVar8 + 0x28);
      fVar28 = *(float *)(lVar8 + 0x2c);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *unaff_x27;
        plVar4 = *(long **)(lVar5 + 0xb8);
        lVar6 = *plVar4;
        if (lVar6 == 0) goto LAB_036a0bfc;
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      uVar13 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
      unaff_x29 = (long)(int)uVar13;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x23 == 0) goto LAB_036a0bfc;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar14 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar22 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar25 = *puVar12;
LAB_036a085c:
          uVar14 = FUN_04067050(uVar14,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
          *puVar9 = uVar14;
          *puVar10 = uVar18;
          *puVar11 = uVar22;
          *puVar12 = uVar25;
        }
        goto LAB_036a0880;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        plVar4 = *(long **)(*unaff_x27 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      cVar2 = *(char *)(lVar5 + unaff_x28 + 0x20);
      if (cVar2 != '\0') {
        fStack000000000000003c = 0.0;
      }
      fVar21 = fStack000000000000003c * -90.0 * fStack0000000000000038;
      fVar17 = 0.0;
      fVar19 = (float)FUN_040672cc(0,0);
      fStack0000000000000040 =
           (fVar23 * fVar21 + fVar28 * fVar19 + fVar15 * fVar26) - fVar27 * fVar17;
      unaff_d8 = (ulong)(uint)fStack0000000000000040;
      fStack0000000000000044 =
           (fVar27 * fVar19 + fVar28 * fVar17 + fVar23 * fVar26) - fVar15 * fVar21;
      unaff_d15 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar15 * fVar17 + fVar28 * fVar21 + fVar27 * fVar26) - fVar23 * fVar19;
      unaff_d14 = (ulong)(uint)fStack0000000000000048;
      fStack000000000000004c =
           ((fVar28 * fVar26 - fVar15 * fVar19) - fVar23 * fVar17) - fVar27 * fVar21;
      unaff_d13 = (ulong)(uint)fStack000000000000004c;
      if (unaff_x23 == 0) goto LAB_036a0bfc;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
      unaff_s9 = (float)FUN_036a0d58(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (fStack000000000000003c <= unaff_s9) {
        fStack000000000000003c = unaff_s9;
      }
      if (unaff_s9 < 0.0) {
        if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar14 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar22 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar25 = *puVar12;
          goto LAB_036a085c;
        }
        goto LAB_036a0bf8;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
    lVar5 = unaff_x23 + unaff_x29 * 0x10;
    unaff_x26 = (float *)(lVar5 + 0x20);
    unaff_d12 = (ulong)(uint)*unaff_x26;
    in_stack_00000018 = (float *)(lVar5 + 0x24);
    unaff_d10 = (ulong)(uint)*in_stack_00000018;
    in_stack_00000010 = (float *)(lVar5 + 0x28);
    param_3 = (ulong)(uint)*in_stack_00000010;
    unaff_x24 = (float *)(lVar5 + 0x2c);
    unaff_d11 = (ulong)(uint)*unaff_x24;
    unaff_x22 = unaff_x20;
  }
LAB_036a0bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


