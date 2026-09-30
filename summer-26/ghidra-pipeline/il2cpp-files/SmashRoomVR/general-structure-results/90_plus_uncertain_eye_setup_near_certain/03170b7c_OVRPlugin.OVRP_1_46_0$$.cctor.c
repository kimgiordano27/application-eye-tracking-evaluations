/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$.cctor
ENTRY_POINT: 03170b7c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_19
*/


void OVRPlugin_OVRP_1_46_0___cctor(float *param_1)

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
  undefined4 uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  ulong unaff_d8;
  float unaff_s9;
  float fVar25;
  ulong unaff_d10;
  float fVar26;
  float fVar27;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  float *pfStack0000000000000010;
  float *pfStack0000000000000018;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while( true ) {
    pfStack0000000000000010 = unaff_x26 + 2;
    fStack0000000000000034 = *pfStack0000000000000010;
    fVar27 = unaff_x26[3];
    pfStack0000000000000018 = param_1;
    fVar24 = fStack0000000000000034;
    if (*(char *)(unaff_x20 + 0x260) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x22 + 0x260) = 1;
      fVar24 = fStack0000000000000034;
    }
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    fStack0000000000000034 = (float)unaff_d12;
    fVar25 = (float)unaff_d10;
    lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    uVar19 = unaff_d10;
    fVar22 = fVar24;
    uVar14 = FUN_03914a7c(unaff_d12,unaff_d10,fVar24,fVar27,*(undefined4 *)(lVar5 + 0x48),
                          *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (*(char *)(unaff_x22 + 0x260) == '\0') {
      thunk_FUN_01ad9084(puVar3);
      *(undefined1 *)(unaff_x20 + 0x260) = 1;
    }
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar16 = FUN_03914a7c(unaff_d8,unaff_d15,unaff_d14,unaff_d13,*(undefined4 *)(lVar5 + 0x48),
                          *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(puVar3);
      DAT_03fed25b = '\x01';
    }
    fVar26 = fStack0000000000000034;
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    FUN_03914a7c(fStack0000000000000034,unaff_d10 & 0xffffffff,fVar24,fVar27,
                 *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                 *(undefined4 *)(lVar5 + 0x20),0);
    fVar15 = (float)FUN_01bf693c(uVar14,uVar19 & 0xffffffff,fVar22,uVar16,unaff_d15,unaff_d14,0);
    fVar20 = 1.0;
    fVar18 = unaff_s9 * *(float *)(unaff_x19 + 0xb0);
    fVar22 = fVar18;
    if (1.0 < fVar18) {
      fVar22 = 1.0;
    }
    fVar22 = 1.0 - fVar22;
    if (fVar18 < 0.0) {
      fVar22 = 1.0;
    }
    fVar18 = 0.0;
    fVar15 = fVar15 * fVar22 * fStack0000000000000038;
    fVar22 = (float)FUN_03914564(0,0);
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x29) break;
    *unaff_x26 = (fVar25 * fVar18 + fVar27 * fVar22 + fVar26 * fVar20) - fVar24 * fVar15;
    *pfStack0000000000000018 =
         (fVar24 * fVar22 + fVar27 * fVar15 + fVar25 * fVar20) - fVar26 * fVar18;
    *pfStack0000000000000010 =
         (fVar26 * fVar15 + fVar27 * fVar18 + fVar24 * fVar20) - fVar25 * fVar22;
    unaff_x26[3] = ((fVar27 * fVar20 - fVar26 * fVar22) - fVar25 * fVar15) - fVar24 * fVar18;
LAB_03170a48:
    do {
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      if (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = *(long *)(lVar5 + unaff_x28 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_03170dc4;
      FUN_0313815c(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x148);
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      if (unaff_x23 == 0) goto LAB_03170dc4;
      uVar13 = (uint)unaff_x29;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = lVar5 + unaff_x28 * 0x10;
      lVar6 = unaff_x23 + unaff_x29 * 0x10;
      uVar17 = *(undefined4 *)(lVar5 + 0x24);
      uVar21 = *(undefined4 *)(lVar5 + 0x28);
      fVar24 = *(float *)(lVar5 + 0x2c);
      uVar14 = FUN_039142e8(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      *(undefined4 *)(lVar6 + 0x20) = uVar14;
      *(undefined4 *)(lVar6 + 0x24) = uVar17;
      *(undefined4 *)(lVar6 + 0x28) = uVar21;
      *(float *)(lVar6 + 0x2c) = fVar24;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = lVar5 + unaff_x28 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar14;
      *(undefined4 *)(lVar5 + 0x24) = uVar17;
      *(undefined4 *)(lVar5 + 0x28) = uVar21;
      *(float *)(lVar5 + 0x2c) = fVar24;
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *unaff_x27;
      }
      plVar4 = *(long **)(lVar5 + 0xb8);
      lVar6 = *plVar4;
      if (lVar6 == 0) goto LAB_03170dc4;
      if (*(int *)(lVar6 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar7 = *(long *)(unaff_x19 + 0x158);
      if (lVar7 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar8 = *(long *)(unaff_x19 + 0x140);
      if (lVar8 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_03170dc4;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      unaff_x28 = (long)(int)unaff_w21;
      lVar8 = lVar8 + unaff_x28 * 0x10;
      iVar1 = *(int *)(lVar7 + unaff_x28 * 4 + 0x20);
      fVar26 = *(float *)(lVar8 + 0x20);
      fVar25 = *(float *)(lVar8 + 0x24);
      fVar27 = *(float *)(lVar8 + 0x28);
      fVar22 = *(float *)(lVar8 + 0x2c);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *unaff_x27;
        plVar4 = *(long **)(lVar5 + 0xb8);
        lVar6 = *plVar4;
        if (lVar6 == 0) goto LAB_03170dc4;
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      uVar13 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
      unaff_x29 = (long)(int)uVar13;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x23 == 0) goto LAB_03170dc4;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar14 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar23 = *puVar12;
LAB_03170a24:
          uVar14 = FUN_039142e8(uVar14,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          *puVar9 = uVar14;
          *puVar10 = uVar17;
          *puVar11 = uVar21;
          *puVar12 = uVar23;
        }
        goto LAB_03170a48;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        plVar4 = *(long **)(*unaff_x27 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      cVar2 = *(char *)(lVar5 + unaff_x28 + 0x20);
      if (cVar2 != '\0') {
        fStack000000000000003c = 0.0;
      }
      fVar20 = fStack000000000000003c * -90.0 * fStack0000000000000038;
      fVar18 = 0.0;
      fVar15 = (float)FUN_03914564(0,0);
      fStack0000000000000040 =
           (fVar25 * fVar20 + fVar22 * fVar15 + fVar26 * fVar24) - fVar27 * fVar18;
      unaff_d8 = (ulong)(uint)fStack0000000000000040;
      fStack0000000000000044 =
           (fVar27 * fVar15 + fVar22 * fVar18 + fVar25 * fVar24) - fVar26 * fVar20;
      unaff_d15 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar26 * fVar18 + fVar22 * fVar20 + fVar27 * fVar24) - fVar25 * fVar15;
      unaff_d14 = (ulong)(uint)fStack0000000000000048;
      fStack000000000000004c =
           ((fVar22 * fVar24 - fVar26 * fVar15) - fVar25 * fVar18) - fVar27 * fVar20;
      unaff_d13 = (ulong)(uint)fStack000000000000004c;
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      unaff_s9 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (fStack000000000000003c <= unaff_s9) {
        fStack000000000000003c = unaff_s9;
      }
      if (unaff_s9 < 0.0) {
        if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar14 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar23 = *puVar12;
          goto LAB_03170a24;
        }
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
    lVar5 = unaff_x23 + unaff_x29 * 0x10;
    unaff_x26 = (float *)(lVar5 + 0x20);
    unaff_d12 = (ulong)(uint)*unaff_x26;
    param_1 = (float *)(lVar5 + 0x24);
    unaff_d10 = (ulong)(uint)*param_1;
    unaff_x22 = unaff_x20;
  }
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


