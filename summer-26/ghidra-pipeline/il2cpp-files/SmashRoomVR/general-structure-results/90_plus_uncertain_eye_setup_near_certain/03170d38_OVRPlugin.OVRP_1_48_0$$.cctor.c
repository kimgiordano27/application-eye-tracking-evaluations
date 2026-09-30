/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$.cctor
ENTRY_POINT: 03170d38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_20
*/


void OVRPlugin_OVRP_1_48_0___cctor
               (float *param_1,float param_2,ulong param_3,undefined8 param_4,float param_5,
               float param_6,float param_7,float param_8)

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
  float *unaff_x24;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *unaff_x26;
  undefined4 *puVar12;
  long unaff_x28;
  uint uVar13;
  long unaff_x29;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
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
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float *in_stack_00000010;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  do {
    *unaff_x26 = (in_s21 + param_2 + param_5) - unaff_s12 * (float)param_3;
    *param_1 = (in_s22 + in_s23 + in_s20) - unaff_s15 * (float)param_4;
    *in_stack_00000010 = (in_s16 + in_s17 + in_s18) - in_s19;
    *unaff_x24 = ((param_6 - param_7) - param_8) - unaff_s12 * (float)param_4;
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
      uVar18 = *(undefined4 *)(lVar5 + 0x24);
      uVar21 = *(undefined4 *)(lVar5 + 0x28);
      fVar24 = *(float *)(lVar5 + 0x2c);
      uVar15 = FUN_039142e8(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      *(undefined4 *)(lVar6 + 0x20) = uVar15;
      *(undefined4 *)(lVar6 + 0x24) = uVar18;
      *(undefined4 *)(lVar6 + 0x28) = uVar21;
      *(float *)(lVar6 + 0x2c) = fVar24;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = lVar5 + unaff_x28 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar15;
      *(undefined4 *)(lVar5 + 0x24) = uVar18;
      *(undefined4 *)(lVar5 + 0x28) = uVar21;
      *(float *)(lVar5 + 0x2c) = fVar24;
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *unaff_x22;
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
      fVar29 = *(float *)(lVar8 + 0x20);
      fVar28 = *(float *)(lVar8 + 0x24);
      fVar25 = *(float *)(lVar8 + 0x28);
      fVar27 = *(float *)(lVar8 + 0x2c);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *unaff_x22;
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
          uVar15 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar23 = *puVar12;
LAB_03170a24:
          uVar15 = FUN_039142e8(uVar15,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          *puVar9 = uVar15;
          *puVar10 = uVar18;
          *puVar11 = uVar21;
          *puVar12 = uVar23;
        }
        goto LAB_03170a48;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        plVar4 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      cVar2 = *(char *)(lVar5 + unaff_x28 + 0x20);
      if (cVar2 != '\0') {
        fStack000000000000003c = 0.0;
      }
      fVar20 = fStack000000000000003c * -90.0 * fStack0000000000000038;
      fVar17 = 0.0;
      fVar14 = (float)FUN_03914564(0,0);
      fVar26 = (fVar28 * fVar20 + fVar27 * fVar14 + fVar29 * fVar24) - fVar25 * fVar17;
      fStack0000000000000044 =
           (fVar25 * fVar14 + fVar27 * fVar17 + fVar28 * fVar24) - fVar29 * fVar20;
      uVar19 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar29 * fVar17 + fVar27 * fVar20 + fVar25 * fVar24) - fVar28 * fVar14;
      uVar22 = (ulong)(uint)fStack0000000000000048;
      fVar24 = ((fVar27 * fVar24 - fVar29 * fVar14) - fVar28 * fVar17) - fVar25 * fVar20;
      fStack0000000000000040 = fVar26;
      fStack000000000000004c = fVar24;
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      fVar25 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (fStack000000000000003c <= fVar25) {
        fStack000000000000003c = fVar25;
      }
      if (fVar25 < 0.0) {
        if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar15 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar23 = *puVar12;
          goto LAB_03170a24;
        }
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) {
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar5 = unaff_x23 + unaff_x29 * 0x10;
    unaff_x26 = (float *)(lVar5 + 0x20);
    unaff_s15 = *unaff_x26;
    param_1 = (float *)(lVar5 + 0x24);
    fVar27 = *param_1;
    in_stack_00000010 = (float *)(lVar5 + 0x28);
    unaff_s12 = *in_stack_00000010;
    unaff_x24 = (float *)(lVar5 + 0x2c);
    fVar28 = *unaff_x24;
    if (*(char *)(unaff_x20 + 0x260) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x20 + 0x260) = 1;
    }
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar29 = fVar27;
    fVar14 = unaff_s12;
    uVar15 = FUN_03914a7c(unaff_s15,fVar27,unaff_s12,fVar28,*(undefined4 *)(lVar5 + 0x48),
                          *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (*(char *)(unaff_x20 + 0x260) == '\0') {
      thunk_FUN_01ad9084(puVar3);
      *(undefined1 *)(unaff_x20 + 0x260) = 1;
    }
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar16 = FUN_03914a7c(fVar26,uVar19,uVar22,fVar24,*(undefined4 *)(lVar5 + 0x48),
                          *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(puVar3);
      DAT_03fed25b = '\x01';
    }
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    FUN_03914a7c(unaff_s15,fVar27,unaff_s12,fVar28,*(undefined4 *)(lVar5 + 0x18),
                 *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
    fVar29 = (float)FUN_01bf693c(uVar15,fVar29,fVar14,uVar16,uVar19,uVar22,0);
    param_5 = 1.0;
    fVar25 = fVar25 * *(float *)(unaff_x19 + 0xb0);
    fVar24 = fVar25;
    if (1.0 < fVar25) {
      fVar24 = 1.0;
    }
    fVar24 = 1.0 - fVar24;
    if (fVar25 < 0.0) {
      fVar24 = 1.0;
    }
    param_4 = 0;
    param_3 = (ulong)(uint)(fVar29 * fVar24 * fStack0000000000000038);
    param_2 = (float)FUN_03914564(0,0);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    param_6 = fVar28 * param_5;
    param_7 = unaff_s15 * param_2;
    in_s17 = fVar28 * (float)param_4;
    in_s18 = unaff_s12 * param_5;
    in_s19 = fVar27 * param_2;
    in_s20 = fVar27 * param_5;
    param_5 = unaff_s15 * param_5;
    in_s22 = unaff_s12 * param_2;
    param_2 = fVar28 * param_2;
    fVar24 = (float)param_3;
    in_s23 = fVar28 * fVar24;
    param_8 = fVar27 * fVar24;
    in_s16 = unaff_s15 * fVar24;
    in_s21 = fVar27 * (float)param_4;
  } while( true );
}


