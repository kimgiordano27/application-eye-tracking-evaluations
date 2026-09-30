/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$ovrp_GetTiledMultiResDynamic
ENTRY_POINT: 03170a84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_46_0__ovrp_GetTiledMultiResDynamic(long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 in_CY;
  long lVar4;
  long *plVar5;
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
  
  while (!(bool)in_CY) {
    lVar4 = *(long *)(param_1 + unaff_x28 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_03170dc4;
    FUN_0313815c(lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0x148);
    if (lVar4 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
    if (unaff_x23 == 0) goto LAB_03170dc4;
    uVar13 = (uint)unaff_x29;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
    lVar4 = lVar4 + unaff_x28 * 0x10;
    lVar6 = unaff_x23 + unaff_x29 * 0x10;
    uVar18 = *(undefined4 *)(lVar4 + 0x24);
    uVar21 = *(undefined4 *)(lVar4 + 0x28);
    fVar24 = *(float *)(lVar4 + 0x2c);
    uVar15 = FUN_039142e8(*(undefined4 *)(lVar4 + 0x20),0);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
    *(undefined4 *)(lVar6 + 0x20) = uVar15;
    *(undefined4 *)(lVar6 + 0x24) = uVar18;
    *(undefined4 *)(lVar6 + 0x28) = uVar21;
    *(float *)(lVar6 + 0x2c) = fVar24;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
    lVar4 = *(long *)(unaff_x19 + 0x150);
    if (lVar4 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
    lVar4 = lVar4 + unaff_x28 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar4 + 0x20) = uVar15;
    *(undefined4 *)(lVar4 + 0x24) = uVar18;
    *(undefined4 *)(lVar4 + 0x28) = uVar21;
    *(float *)(lVar4 + 0x2c) = fVar24;
    lVar4 = *unaff_x22;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *unaff_x22;
    }
    plVar5 = *(long **)(lVar4 + 0xb8);
    lVar6 = *plVar5;
    if (lVar6 == 0) goto LAB_03170dc4;
    if (*(int *)(lVar6 + 0x18) <= (int)unaff_w21) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x158);
    if (lVar7 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) break;
    lVar8 = *(long *)(unaff_x19 + 0x140);
    if (lVar8 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w21) break;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_03170dc4;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) break;
    unaff_x28 = (long)(int)unaff_w21;
    lVar8 = lVar8 + unaff_x28 * 0x10;
    iVar1 = *(int *)(lVar7 + unaff_x28 * 4 + 0x20);
    fVar29 = *(float *)(lVar8 + 0x20);
    fVar28 = *(float *)(lVar8 + 0x24);
    fVar25 = *(float *)(lVar8 + 0x28);
    fVar27 = *(float *)(lVar8 + 0x2c);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *unaff_x22;
      plVar5 = *(long **)(lVar4 + 0xb8);
      lVar6 = *plVar5;
      if (lVar6 == 0) goto LAB_03170dc4;
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
    uVar13 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
    unaff_x29 = (long)(int)uVar13;
    if (iVar1 == 1) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        plVar5 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar5[3];
      if (lVar4 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
      cVar2 = *(char *)(lVar4 + unaff_x28 + 0x20);
      if (cVar2 != '\0') {
        unaff_s12 = 0.0;
      }
      fVar20 = unaff_s12 * -90.0 * in_stack_00000038;
      fVar16 = 0.0;
      fVar14 = (float)FUN_03914564(0,0);
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
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
      fVar25 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar25) {
        unaff_s12 = fVar25;
      }
      if (fVar25 < 0.0) {
        if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
          lVar4 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar4 + 0x20);
          uVar15 = *puVar9;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar23 = *puVar12;
          goto LAB_03170a24;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
        lVar4 = unaff_x23 + unaff_x29 * 0x10;
        fVar14 = *(float *)(lVar4 + 0x20);
        fVar28 = *(float *)(lVar4 + 0x24);
        fVar27 = *(float *)(lVar4 + 0x28);
        fVar29 = *(float *)(lVar4 + 0x2c);
        if (*(char *)(unaff_x20 + 0x260) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x20 + 0x260) = 1;
        }
        puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar16 = fVar28;
        fVar20 = fVar27;
        uVar15 = FUN_03914a7c(fVar14,fVar28,fVar27,fVar29,*(undefined4 *)(lVar6 + 0x48),
                              *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        if (*(char *)(unaff_x20 + 0x260) == '\0') {
          thunk_FUN_01ad9084(puVar3);
          *(undefined1 *)(unaff_x20 + 0x260) = 1;
        }
        lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
        uVar17 = FUN_03914a7c(fVar26,uVar19,uVar22,fVar24,*(undefined4 *)(lVar6 + 0x48),
                              *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        if (DAT_03fed25b == '\0') {
          thunk_FUN_01ad9084(puVar3);
          DAT_03fed25b = '\x01';
        }
        lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
        FUN_03914a7c(fVar14,fVar28,fVar27,fVar29,*(undefined4 *)(lVar6 + 0x18),
                     *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
        fVar16 = (float)FUN_01bf693c(uVar15,fVar16,fVar20,uVar17,uVar19,uVar22,0);
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
        fVar24 = (float)FUN_03914564(0,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
        *(float *)(lVar4 + 0x20) =
             (fVar28 * fVar26 + fVar29 * fVar24 + fVar14 * fVar20) - fVar27 * fVar25;
        *(float *)(lVar4 + 0x24) =
             (fVar27 * fVar24 + fVar29 * fVar25 + fVar28 * fVar20) - fVar14 * fVar26;
        *(float *)(lVar4 + 0x28) =
             (fVar14 * fVar25 + fVar29 * fVar26 + fVar27 * fVar20) - fVar28 * fVar24;
        *(float *)(lVar4 + 0x2c) =
             ((fVar29 * fVar20 - fVar14 * fVar24) - fVar28 * fVar25) - fVar27 * fVar26;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
      lVar4 = unaff_x23 + unaff_x29 * 0x10;
      puVar9 = (undefined4 *)(lVar4 + 0x20);
      uVar15 = *puVar9;
      puVar10 = (undefined4 *)(lVar4 + 0x24);
      uVar18 = *puVar10;
      puVar11 = (undefined4 *)(lVar4 + 0x28);
      uVar21 = *puVar11;
      puVar12 = (undefined4 *)(lVar4 + 0x2c);
      uVar23 = *puVar12;
LAB_03170a24:
      uVar15 = FUN_039142e8(uVar15,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
      *puVar9 = uVar15;
      *puVar10 = uVar18;
      *puVar11 = uVar21;
      *puVar12 = uVar23;
    }
    lVar4 = *(long *)(unaff_x19 + 0x158);
    if (lVar4 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_w21) break;
    if (*(int *)(lVar4 + unaff_x28 * 4 + 0x20) == 0) {
      param_1 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      param_1 = *(long *)(unaff_x19 + 0xd8);
    }
    if (param_1 == 0) goto LAB_03170dc4;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


