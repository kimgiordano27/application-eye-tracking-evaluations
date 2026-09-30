/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 03170c8c
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


void OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties
               (long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
               ulong param_7)

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
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  ulong uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 unaff_d8;
  float unaff_s9;
  float fVar25;
  ulong unaff_d10;
  float fVar26;
  ulong unaff_d11;
  float fVar27;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  float *in_stack_00000010;
  float *in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while( true ) {
    FUN_03914a7c(param_2,param_3,param_4,param_5,param_6,param_7,*(undefined4 *)(param_1 + 0x20),0);
    fVar16 = (float)FUN_01bf693c(in_stack_00000028,fStack0000000000000024,uStack0000000000000020,
                                 unaff_d8,unaff_d13,unaff_d14,0);
    fVar25 = 1.0;
    fVar18 = unaff_s9 * *(float *)(unaff_x19 + 0xb0);
    fVar21 = fVar18;
    if (1.0 < fVar18) {
      fVar21 = 1.0;
    }
    fVar21 = 1.0 - fVar21;
    if (fVar18 < 0.0) {
      fVar21 = 1.0;
    }
    fVar18 = 0.0;
    fVar16 = fVar16 * fVar21 * fStack0000000000000038;
    fVar21 = (float)FUN_03914564(0,0);
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x29) break;
    fVar26 = (float)unaff_d10;
    fVar19 = (float)unaff_d15;
    fVar27 = (float)unaff_d12;
    fVar14 = (float)unaff_d11;
    *unaff_x26 = (fVar14 * fVar18 + fVar26 * fVar21 + fVar19 * fVar25) - fVar27 * fVar16;
    *in_stack_00000018 = (fVar27 * fVar21 + fVar26 * fVar16 + fVar14 * fVar25) - fVar19 * fVar18;
    *in_stack_00000010 = (fVar19 * fVar16 + fVar26 * fVar18 + fVar27 * fVar25) - fVar14 * fVar21;
    *unaff_x24 = ((fVar26 * fVar25 - fVar19 * fVar21) - fVar14 * fVar16) - fVar27 * fVar18;
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
      uVar20 = *(undefined4 *)(lVar5 + 0x28);
      fVar21 = *(float *)(lVar5 + 0x2c);
      uVar15 = FUN_039142e8(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      *(undefined4 *)(lVar6 + 0x20) = uVar15;
      *(undefined4 *)(lVar6 + 0x24) = uVar17;
      *(undefined4 *)(lVar6 + 0x28) = uVar20;
      *(float *)(lVar6 + 0x2c) = fVar21;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = lVar5 + unaff_x28 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar15;
      *(undefined4 *)(lVar5 + 0x24) = uVar17;
      *(undefined4 *)(lVar5 + 0x28) = uVar20;
      *(float *)(lVar5 + 0x2c) = fVar21;
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
      fVar26 = *(float *)(lVar8 + 0x20);
      fVar25 = *(float *)(lVar8 + 0x24);
      fVar16 = *(float *)(lVar8 + 0x28);
      fVar18 = *(float *)(lVar8 + 0x2c);
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
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar20 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar23 = *puVar12;
LAB_03170a24:
          uVar15 = FUN_039142e8(uVar15,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          *puVar9 = uVar15;
          *puVar10 = uVar17;
          *puVar11 = uVar20;
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
      fVar19 = fStack000000000000003c * -90.0 * fStack0000000000000038;
      fVar27 = 0.0;
      fVar14 = (float)FUN_03914564(0,0);
      fVar24 = (fVar25 * fVar19 + fVar18 * fVar14 + fVar26 * fVar21) - fVar16 * fVar27;
      fStack0000000000000044 =
           (fVar16 * fVar14 + fVar18 * fVar27 + fVar25 * fVar21) - fVar26 * fVar19;
      unaff_d13 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar26 * fVar27 + fVar18 * fVar19 + fVar16 * fVar21) - fVar25 * fVar14;
      unaff_d14 = (ulong)(uint)fStack0000000000000048;
      fVar21 = ((fVar18 * fVar21 - fVar26 * fVar14) - fVar25 * fVar27) - fVar16 * fVar19;
      fStack0000000000000040 = fVar24;
      fStack000000000000004c = fVar21;
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
          uVar15 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar20 = *puVar11;
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
    fVar26 = *unaff_x26;
    in_stack_00000018 = (float *)(lVar5 + 0x24);
    fVar18 = *in_stack_00000018;
    in_stack_00000010 = (float *)(lVar5 + 0x28);
    fVar16 = *in_stack_00000010;
    unaff_x24 = (float *)(lVar5 + 0x2c);
    fVar25 = *unaff_x24;
    if (*(char *)(unaff_x20 + 0x260) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x20 + 0x260) = 1;
    }
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    param_4 = (ulong)(uint)fVar16;
    lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    uVar22 = param_4;
    fStack0000000000000024 = fVar18;
    in_stack_00000028 =
         FUN_03914a7c(fVar26,fVar18,param_4,fVar25,*(undefined4 *)(lVar5 + 0x48),
                      *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    uStack0000000000000020 = (undefined4)uVar22;
    if (*(char *)(unaff_x20 + 0x260) == '\0') {
      thunk_FUN_01ad9084(puVar3);
      *(undefined1 *)(unaff_x20 + 0x260) = 1;
    }
    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
    unaff_d8 = FUN_03914a7c(fVar24,unaff_d13,unaff_d14,fVar21,*(undefined4 *)(lVar5 + 0x48),
                            *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(puVar3);
      DAT_03fed25b = '\x01';
    }
    param_5 = (ulong)(uint)fVar25;
    param_2 = (ulong)(uint)fVar26;
    param_3 = (ulong)(uint)fVar18;
    param_1 = *(long *)(*(long *)puVar3 + 0xb8);
    param_6 = (ulong)*(uint *)(param_1 + 0x18);
    param_7 = (ulong)*(uint *)(param_1 + 0x1c);
    unaff_d10 = param_5;
    unaff_d11 = param_3;
    unaff_d12 = param_4;
    unaff_d15 = param_2;
  }
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


