/*
FUNCTION_NAME: OVRPlugin.OVRP_1_47_0$$.cctor
ENTRY_POINT: 036a0ad0
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


void OVRPlugin_OVRP_1_47_0___cctor(undefined4 param_1,ulong param_2,ulong param_3)

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
  undefined4 *puVar10;
  float *unaff_x24;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float *unaff_x26;
  undefined4 *puVar13;
  long unaff_x28;
  uint uVar14;
  long unaff_x29;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 unaff_d8;
  float unaff_s9;
  float fVar27;
  float unaff_s10;
  float fVar28;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float unaff_s15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  float *in_stack_00000010;
  float *in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  uStack0000000000000000 = param_1;
  while( true ) {
    uStack0000000000000004 = (undefined4)param_2;
    uStack0000000000000008 = (undefined4)param_3;
    fVar17 = (float)FUN_01fdd7a4(in_stack_00000028,fStack0000000000000024,fStack0000000000000020,
                                 unaff_d8,unaff_d13,unaff_d14,0);
    fVar27 = 1.0;
    fVar20 = unaff_s9 * *(float *)(unaff_x19 + 0xb0);
    fVar24 = fVar20;
    if (1.0 < fVar20) {
      fVar24 = 1.0;
    }
    fVar24 = 1.0 - fVar24;
    if (fVar20 < 0.0) {
      fVar24 = 1.0;
    }
    fVar20 = 0.0;
    fVar17 = fVar17 * fVar24 * fStack0000000000000038;
    fVar24 = (float)FUN_040672cc(0,0);
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x29) break;
    fVar15 = (float)unaff_d12;
    fVar28 = (float)unaff_d11;
    *unaff_x26 = (fVar28 * fVar20 + unaff_s10 * fVar24 + unaff_s15 * fVar27) - fVar15 * fVar17;
    *in_stack_00000018 =
         (fVar15 * fVar24 + unaff_s10 * fVar17 + fVar28 * fVar27) - unaff_s15 * fVar20;
    *in_stack_00000010 =
         (unaff_s15 * fVar17 + unaff_s10 * fVar20 + fVar15 * fVar27) - fVar28 * fVar24;
    *unaff_x24 = ((unaff_s10 * fVar27 - unaff_s15 * fVar24) - fVar28 * fVar17) - fVar15 * fVar20;
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
      uVar16 = FUN_03668360(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x148);
      if (lVar5 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      if (unaff_x23 == 0) goto LAB_036a0bfc;
      uVar14 = (uint)unaff_x29;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_036a0bf8;
      lVar5 = lVar5 + unaff_x28 * 0x10;
      lVar6 = unaff_x23 + unaff_x29 * 0x10;
      uVar19 = *(undefined4 *)(lVar5 + 0x24);
      uVar23 = *(undefined4 *)(lVar5 + 0x28);
      fVar24 = *(float *)(lVar5 + 0x2c);
      uStack0000000000000000 = uVar16;
      uVar16 = FUN_04067050(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_036a0bf8;
      *(undefined4 *)(lVar6 + 0x20) = uVar16;
      *(undefined4 *)(lVar6 + 0x24) = uVar19;
      *(undefined4 *)(lVar6 + 0x28) = uVar23;
      *(float *)(lVar6 + 0x2c) = fVar24;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_036a0bf8;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      lVar5 = lVar5 + unaff_x28 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar16;
      *(undefined4 *)(lVar5 + 0x24) = uVar19;
      *(undefined4 *)(lVar5 + 0x28) = uVar23;
      *(float *)(lVar5 + 0x2c) = fVar24;
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
      fVar28 = *(float *)(lVar8 + 0x20);
      fVar27 = *(float *)(lVar8 + 0x24);
      fVar17 = *(float *)(lVar8 + 0x28);
      fVar20 = *(float *)(lVar8 + 0x2c);
      uVar16 = *(undefined4 *)(lVar9 + unaff_x28 * 4 + 0x20);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *unaff_x22;
        plVar4 = *(long **)(lVar5 + 0xb8);
        lVar6 = *plVar4;
        if (lVar6 == 0) goto LAB_036a0bfc;
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      uVar14 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
      unaff_x29 = (long)(int)uVar14;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x23 == 0) goto LAB_036a0bfc;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_036a0bf8;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar10 = (undefined4 *)(lVar5 + 0x20);
          uVar19 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x24);
          uVar23 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar12;
          puVar13 = (undefined4 *)(lVar5 + 0x2c);
          uVar25 = *puVar13;
LAB_036a085c:
          uStack0000000000000000 = uVar16;
          uVar16 = FUN_04067050(uVar19,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_036a0bf8;
          *puVar10 = uVar16;
          *puVar11 = uVar23;
          *puVar12 = uVar21;
          *puVar13 = uVar25;
        }
        goto LAB_036a0880;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        plVar4 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_036a0bfc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      cVar2 = *(char *)(lVar5 + unaff_x28 + 0x20);
      if (cVar2 != '\0') {
        fStack000000000000003c = 0.0;
      }
      fVar22 = fStack000000000000003c * -90.0 * fStack0000000000000038;
      fVar18 = 0.0;
      fVar15 = (float)FUN_040672cc(0,0);
      fVar26 = (fVar27 * fVar22 + fVar20 * fVar15 + fVar28 * fVar24) - fVar17 * fVar18;
      fStack0000000000000044 =
           (fVar17 * fVar15 + fVar20 * fVar18 + fVar27 * fVar24) - fVar28 * fVar22;
      unaff_d13 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar28 * fVar18 + fVar20 * fVar22 + fVar17 * fVar24) - fVar27 * fVar15;
      unaff_d14 = (ulong)(uint)fStack0000000000000048;
      fVar24 = ((fVar20 * fVar24 - fVar28 * fVar15) - fVar27 * fVar18) - fVar17 * fVar22;
      fStack0000000000000040 = fVar26;
      fStack000000000000004c = fVar24;
      if (unaff_x23 == 0) goto LAB_036a0bfc;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_036a0bf8;
      unaff_s9 = (float)FUN_036a0d58(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (fStack000000000000003c <= unaff_s9) {
        fStack000000000000003c = unaff_s9;
      }
      if (unaff_s9 < 0.0) {
        if (uVar14 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar10 = (undefined4 *)(lVar5 + 0x20);
          uVar19 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x24);
          uVar23 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar12;
          puVar13 = (undefined4 *)(lVar5 + 0x2c);
          uVar25 = *puVar13;
          goto LAB_036a085c;
        }
        goto LAB_036a0bf8;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x23 + 0x18) <= uVar14) break;
    lVar5 = unaff_x23 + unaff_x29 * 0x10;
    unaff_x26 = (float *)(lVar5 + 0x20);
    unaff_s15 = *unaff_x26;
    in_stack_00000018 = (float *)(lVar5 + 0x24);
    fVar17 = *in_stack_00000018;
    in_stack_00000010 = (float *)(lVar5 + 0x28);
    fStack0000000000000020 = *in_stack_00000010;
    unaff_x24 = (float *)(lVar5 + 0x2c);
    unaff_s10 = *unaff_x24;
    if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
    }
    puVar3 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    unaff_d12 = (ulong)(uint)fStack0000000000000020;
    lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    fStack0000000000000024 = fVar17;
    in_stack_00000028 =
         FUN_040677e4(unaff_s15,fVar17,unaff_d12,unaff_s10,*(undefined4 *)(lVar5 + 0x48),
                      *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
      thunk_FUN_01efb3a4(puVar3);
      *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
    }
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    unaff_d8 = FUN_040677e4(fVar26,unaff_d13,unaff_d14,fVar24,*(undefined4 *)(lVar5 + 0x48),
                            *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(puVar3);
      DAT_0482ee19 = '\x01';
    }
    unaff_d11 = (ulong)(uint)fVar17;
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    param_2 = unaff_d11;
    param_3 = unaff_d12;
    uStack0000000000000000 =
         FUN_040677e4(unaff_s15,unaff_d11,unaff_d12,unaff_s10,*(undefined4 *)(lVar5 + 0x18),
                      *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
  }
LAB_036a0bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


