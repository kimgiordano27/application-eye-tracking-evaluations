/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$.cctor
ENTRY_POINT: 036a08c8
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


void OVRPlugin_OVRP_1_45_0___cctor(long param_1)

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
  long *unaff_x22;
  long unaff_x23;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long unaff_x28;
  uint uVar13;
  long unaff_x29;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  ulong uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s12;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while (param_1 != 0) {
    FUN_03668360(param_1,0);
    lVar5 = *(long *)(unaff_x19 + 0x148);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
    if (unaff_x23 == 0) break;
    uVar13 = (uint)unaff_x29;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
    lVar5 = lVar5 + unaff_x28 * 0x10;
    lVar6 = unaff_x23 + unaff_x29 * 0x10;
    uVar18 = *(undefined4 *)(lVar5 + 0x24);
    uVar21 = *(undefined4 *)(lVar5 + 0x28);
    fVar24 = *(float *)(lVar5 + 0x2c);
    uVar15 = FUN_04067050(*(undefined4 *)(lVar5 + 0x20),0);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
    *(undefined4 *)(lVar6 + 0x20) = uVar15;
    *(undefined4 *)(lVar6 + 0x24) = uVar18;
    *(undefined4 *)(lVar6 + 0x28) = uVar21;
    *(float *)(lVar6 + 0x2c) = fVar24;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
    lVar5 = *(long *)(unaff_x19 + 0x150);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
    lVar5 = lVar5 + unaff_x28 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar5 + 0x20) = uVar15;
    *(undefined4 *)(lVar5 + 0x24) = uVar18;
    *(undefined4 *)(lVar5 + 0x28) = uVar21;
    *(float *)(lVar5 + 0x2c) = fVar24;
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *unaff_x22;
    }
    plVar4 = *(long **)(lVar5 + 0xb8);
    lVar6 = *plVar4;
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) <= (int)unaff_w21) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x158);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
    lVar8 = *(long *)(unaff_x19 + 0x140);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
    if (*(long *)(unaff_x19 + 0xd0) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_036a0bf8;
    unaff_x28 = (long)(int)unaff_w21;
    lVar8 = lVar8 + unaff_x28 * 0x10;
    iVar1 = *(int *)(lVar7 + unaff_x28 * 4 + 0x20);
    fVar29 = *(float *)(lVar8 + 0x20);
    fVar28 = *(float *)(lVar8 + 0x24);
    fVar25 = *(float *)(lVar8 + 0x28);
    fVar27 = *(float *)(lVar8 + 0x2c);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *unaff_x22;
      plVar4 = *(long **)(lVar5 + 0xb8);
      lVar6 = *plVar4;
      if (lVar6 == 0) break;
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
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
      cVar2 = *(char *)(lVar5 + unaff_x28 + 0x20);
      if (cVar2 != '\0') {
        unaff_s12 = 0.0;
      }
      fVar20 = unaff_s12 * -90.0 * in_stack_00000038;
      fVar16 = 0.0;
      fVar14 = (float)FUN_040672cc(0,0);
      fVar26 = (fVar28 * fVar20 + fVar27 * fVar14 + fVar29 * fVar24) - fVar25 * fVar16;
      fStack0000000000000044 =
           (fVar25 * fVar14 + fVar27 * fVar16 + fVar28 * fVar24) - fVar29 * fVar20;
      uVar19 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar29 * fVar16 + fVar27 * fVar20 + fVar25 * fVar24) - fVar28 * fVar14;
      uVar22 = (ulong)(uint)fStack0000000000000048;
      fVar24 = ((fVar27 * fVar24 - fVar29 * fVar14) - fVar28 * fVar16) - fVar25 * fVar20;
      fStack0000000000000040 = fVar26;
      fStack000000000000004c = fVar24;
      if (unaff_x23 == 0) break;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
      fVar25 = (float)FUN_036a0d58(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar25) {
        unaff_s12 = fVar25;
      }
      if (fVar25 < 0.0) {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
        lVar5 = unaff_x23 + unaff_x29 * 0x10;
        puVar9 = (undefined4 *)(lVar5 + 0x20);
        uVar15 = *puVar9;
        puVar10 = (undefined4 *)(lVar5 + 0x24);
        uVar18 = *puVar10;
        puVar11 = (undefined4 *)(lVar5 + 0x28);
        uVar21 = *puVar11;
        puVar12 = (undefined4 *)(lVar5 + 0x2c);
        uVar23 = *puVar12;
        goto LAB_036a085c;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
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
        lVar6 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
        fVar16 = fVar28;
        fVar20 = fVar27;
        uVar15 = FUN_040677e4(fVar14,fVar28,fVar27,fVar29,*(undefined4 *)(lVar6 + 0x48),
                              *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        if (*(char *)(unaff_x20 + 0xe1d) == '\0') {
          thunk_FUN_01efb3a4(puVar3);
          *(undefined1 *)(unaff_x20 + 0xe1d) = 1;
        }
        lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
        uVar17 = FUN_040677e4(fVar26,uVar19,uVar22,fVar24,*(undefined4 *)(lVar6 + 0x48),
                              *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4(puVar3);
          DAT_0482ee19 = '\x01';
        }
        lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
        FUN_040677e4(fVar14,fVar28,fVar27,fVar29,*(undefined4 *)(lVar6 + 0x18),
                     *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
        fVar16 = (float)FUN_01fdd7a4(uVar15,fVar16,fVar20,uVar17,uVar19,uVar22,0);
        fVar20 = 1.0;
        fVar25 = fVar25 * *(float *)(unaff_x19 + 0xb0);
        fVar24 = fVar25;
        if (1.0 < fVar25) {
          fVar24 = 1.0;
        }
        fVar24 = 1.0 - fVar24;
        if (fVar25 < 0.0) {
          fVar24 = 1.0;
        }
        fVar26 = 0.0;
        fVar25 = fVar16 * fVar24 * in_stack_00000038;
        fVar24 = (float)FUN_040672cc(0,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
        *(float *)(lVar5 + 0x20) =
             (fVar28 * fVar26 + fVar29 * fVar24 + fVar14 * fVar20) - fVar27 * fVar25;
        *(float *)(lVar5 + 0x24) =
             (fVar27 * fVar24 + fVar29 * fVar25 + fVar28 * fVar20) - fVar14 * fVar26;
        *(float *)(lVar5 + 0x28) =
             (fVar14 * fVar25 + fVar29 * fVar26 + fVar27 * fVar20) - fVar28 * fVar24;
        *(float *)(lVar5 + 0x2c) =
             ((fVar29 * fVar20 - fVar14 * fVar24) - fVar28 * fVar25) - fVar27 * fVar26;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x23 == 0) break;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
      lVar5 = unaff_x23 + unaff_x29 * 0x10;
      puVar9 = (undefined4 *)(lVar5 + 0x20);
      uVar15 = *puVar9;
      puVar10 = (undefined4 *)(lVar5 + 0x24);
      uVar18 = *puVar10;
      puVar11 = (undefined4 *)(lVar5 + 0x28);
      uVar21 = *puVar11;
      puVar12 = (undefined4 *)(lVar5 + 0x2c);
      uVar23 = *puVar12;
LAB_036a085c:
      uVar15 = FUN_04067050(uVar15,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_036a0bf8;
      *puVar9 = uVar15;
      *puVar10 = uVar18;
      *puVar11 = uVar21;
      *puVar12 = uVar23;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) {
LAB_036a0bf8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_036a0bf8;
    param_1 = *(long *)(lVar5 + unaff_x28 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


