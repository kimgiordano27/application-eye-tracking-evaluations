/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$ovrp_SetTiledMultiResDynamic
ENTRY_POINT: 03170b00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_46_0__ovrp_SetTiledMultiResDynamic
               (undefined4 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  uint in_w8;
  long *plVar5;
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
  undefined4 *unaff_x24;
  undefined4 *puVar11;
  undefined4 *unaff_x25;
  undefined4 *puVar12;
  undefined4 *unaff_x26;
  undefined4 *puVar13;
  float *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined4 uVar20;
  float fVar21;
  ulong uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_s12;
  float fVar29;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while( true ) {
    fVar29 = (float)param_4;
    if (in_w8 <= (uint)unaff_x29) break;
    *unaff_x24 = param_1;
    *unaff_x25 = (int)param_2;
    *unaff_x26 = (int)param_3;
    *unaff_x27 = fVar29;
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x29) break;
    lVar6 = *(long *)(unaff_x19 + 0x150);
    if (lVar6 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
    lVar6 = lVar6 + unaff_x28 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar6 + 0x20) = param_1;
    *(int *)(lVar6 + 0x24) = (int)param_2;
    *(int *)(lVar6 + 0x28) = (int)param_3;
    *(float *)(lVar6 + 0x2c) = fVar29;
    lVar6 = *unaff_x22;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *unaff_x22;
    }
    plVar5 = *(long **)(lVar6 + 0xb8);
    lVar7 = *plVar5;
    if (lVar7 == 0) goto LAB_03170dc4;
    if (*(int *)(lVar7 + 0x18) <= (int)unaff_w21) {
      return;
    }
    lVar8 = *(long *)(unaff_x19 + 0x158);
    if (lVar8 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w21) break;
    lVar9 = *(long *)(unaff_x19 + 0x140);
    if (lVar9 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar9 + 0x18) <= unaff_w21) break;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_03170dc4;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) break;
    unaff_x28 = (long)(int)unaff_w21;
    lVar9 = lVar9 + unaff_x28 * 0x10;
    iVar1 = *(int *)(lVar8 + unaff_x28 * 4 + 0x20);
    fVar28 = *(float *)(lVar9 + 0x20);
    fVar27 = *(float *)(lVar9 + 0x24);
    fVar24 = *(float *)(lVar9 + 0x28);
    fVar26 = *(float *)(lVar9 + 0x2c);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *unaff_x22;
      plVar5 = *(long **)(lVar6 + 0xb8);
      lVar7 = *plVar5;
      if (lVar7 == 0) goto LAB_03170dc4;
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) break;
    uVar3 = *(uint *)(lVar7 + unaff_x28 * 4 + 0x20);
    unaff_x29 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        plVar5 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar6 = plVar5[3];
      if (lVar6 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
      cVar2 = *(char *)(lVar6 + unaff_x28 + 0x20);
      if (cVar2 != '\0') {
        unaff_s12 = 0.0;
      }
      fVar21 = unaff_s12 * -90.0 * in_stack_00000038;
      fVar16 = 0.0;
      fVar15 = (float)FUN_03914564(0,0);
      fVar25 = (fVar27 * fVar21 + fVar26 * fVar15 + fVar28 * fVar29) - fVar24 * fVar16;
      fStack0000000000000044 =
           (fVar24 * fVar15 + fVar26 * fVar16 + fVar27 * fVar29) - fVar28 * fVar21;
      uVar19 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar28 * fVar16 + fVar26 * fVar21 + fVar24 * fVar29) - fVar27 * fVar15;
      uVar22 = (ulong)(uint)fStack0000000000000048;
      fVar29 = ((fVar26 * fVar29 - fVar28 * fVar15) - fVar27 * fVar16) - fVar24 * fVar21;
      fStack0000000000000040 = fVar25;
      fStack000000000000004c = fVar29;
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
      fVar24 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar24) {
        unaff_s12 = fVar24;
      }
      if (fVar24 < 0.0) {
        if (uVar3 < *(uint *)(unaff_x23 + 0x18)) {
          lVar6 = unaff_x23 + unaff_x29 * 0x10;
          puVar10 = (undefined4 *)(lVar6 + 0x20);
          uVar14 = *puVar10;
          puVar11 = (undefined4 *)(lVar6 + 0x24);
          uVar18 = *puVar11;
          puVar12 = (undefined4 *)(lVar6 + 0x28);
          uVar20 = *puVar12;
          puVar13 = (undefined4 *)(lVar6 + 0x2c);
          uVar23 = *puVar13;
          goto LAB_03170a24;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
        lVar6 = unaff_x23 + unaff_x29 * 0x10;
        fVar15 = *(float *)(lVar6 + 0x20);
        fVar27 = *(float *)(lVar6 + 0x24);
        fVar26 = *(float *)(lVar6 + 0x28);
        fVar28 = *(float *)(lVar6 + 0x2c);
        if (*(char *)(unaff_x20 + 0x260) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x20 + 0x260) = 1;
        }
        puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar16 = fVar27;
        fVar21 = fVar26;
        uVar14 = FUN_03914a7c(fVar15,fVar27,fVar26,fVar28,*(undefined4 *)(lVar7 + 0x48),
                              *(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50),0);
        if (*(char *)(unaff_x20 + 0x260) == '\0') {
          thunk_FUN_01ad9084(puVar4);
          *(undefined1 *)(unaff_x20 + 0x260) = 1;
        }
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
        uVar17 = FUN_03914a7c(fVar25,uVar19,uVar22,fVar29,*(undefined4 *)(lVar7 + 0x48),
                              *(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50),0);
        if (DAT_03fed25b == '\0') {
          thunk_FUN_01ad9084(puVar4);
          DAT_03fed25b = '\x01';
        }
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
        FUN_03914a7c(fVar15,fVar27,fVar26,fVar28,*(undefined4 *)(lVar7 + 0x18),
                     *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),0);
        fVar16 = (float)FUN_01bf693c(uVar14,fVar16,fVar21,uVar17,uVar19,uVar22,0);
        fVar21 = 1.0;
        fVar24 = fVar24 * *(float *)(unaff_x19 + 0xb0);
        fVar29 = fVar24;
        if (1.0 < fVar24) {
          fVar29 = 1.0;
        }
        fVar29 = 1.0 - fVar29;
        if (fVar24 < 0.0) {
          fVar29 = 1.0;
        }
        fVar25 = 0.0;
        fVar24 = fVar16 * fVar29 * in_stack_00000038;
        fVar29 = (float)FUN_03914564(0,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
        *(float *)(lVar6 + 0x20) =
             (fVar27 * fVar25 + fVar28 * fVar29 + fVar15 * fVar21) - fVar26 * fVar24;
        *(float *)(lVar6 + 0x24) =
             (fVar26 * fVar29 + fVar28 * fVar24 + fVar27 * fVar21) - fVar15 * fVar25;
        *(float *)(lVar6 + 0x28) =
             (fVar15 * fVar24 + fVar28 * fVar25 + fVar26 * fVar21) - fVar27 * fVar29;
        *(float *)(lVar6 + 0x2c) =
             ((fVar28 * fVar21 - fVar15 * fVar29) - fVar27 * fVar24) - fVar26 * fVar25;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
      lVar6 = unaff_x23 + unaff_x29 * 0x10;
      puVar10 = (undefined4 *)(lVar6 + 0x20);
      uVar14 = *puVar10;
      puVar11 = (undefined4 *)(lVar6 + 0x24);
      uVar18 = *puVar11;
      puVar12 = (undefined4 *)(lVar6 + 0x28);
      uVar20 = *puVar12;
      puVar13 = (undefined4 *)(lVar6 + 0x2c);
      uVar23 = *puVar13;
LAB_03170a24:
      uVar14 = FUN_039142e8(uVar14,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
      *puVar10 = uVar14;
      *puVar11 = uVar18;
      *puVar12 = uVar20;
      *puVar13 = uVar23;
    }
    lVar6 = *(long *)(unaff_x19 + 0x158);
    if (lVar6 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
    if (*(int *)(lVar6 + unaff_x28 * 4 + 0x20) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar6 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
    lVar6 = *(long *)(lVar6 + unaff_x28 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_03170dc4;
    FUN_0313815c(lVar6,0);
    lVar6 = *(long *)(unaff_x19 + 0x148);
    if (lVar6 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
    if (unaff_x23 == 0) goto LAB_03170dc4;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar3) break;
    lVar6 = lVar6 + unaff_x28 * 0x10;
    lVar7 = unaff_x23 + unaff_x29 * 0x10;
    param_2 = (ulong)*(uint *)(lVar6 + 0x24);
    param_3 = (ulong)*(uint *)(lVar6 + 0x28);
    param_4 = (ulong)*(uint *)(lVar6 + 0x2c);
    unaff_x24 = (undefined4 *)(lVar7 + 0x20);
    unaff_x25 = (undefined4 *)(lVar7 + 0x24);
    unaff_x26 = (undefined4 *)(lVar7 + 0x28);
    unaff_x27 = (float *)(lVar7 + 0x2c);
    param_1 = FUN_039142e8(*(undefined4 *)(lVar6 + 0x20),0);
    in_w8 = *(uint *)(unaff_x23 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


