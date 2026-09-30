/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_SetDefaultExternalCamera
ENTRY_POINT: 031707d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_20
*/


void OVRPlugin_OVRP_1_44_0__ovrp_SetDefaultExternalCamera(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined4 uVar21;
  float fVar22;
  ulong uVar23;
  undefined4 uVar24;
  ulong in_d3;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s12;
  float fVar30;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  do {
    thunk_FUN_01ac7298();
    lVar5 = *unaff_x22;
    do {
      fVar30 = (float)in_d3;
      plVar6 = *(long **)(lVar5 + 0xb8);
      lVar7 = *plVar6;
      if (lVar7 == 0) goto LAB_03170dc4;
      if (*(int *)(lVar7 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar8 = *(long *)(unaff_x19 + 0x158);
      if (lVar8 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar9 = *(long *)(unaff_x19 + 0x140);
      if (lVar9 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar9 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_03170dc4;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar14 = (long)(int)unaff_w21;
      lVar9 = lVar9 + lVar14 * 0x10;
      iVar1 = *(int *)(lVar8 + lVar14 * 4 + 0x20);
      fVar29 = *(float *)(lVar9 + 0x20);
      fVar28 = *(float *)(lVar9 + 0x24);
      fVar25 = *(float *)(lVar9 + 0x28);
      fVar27 = *(float *)(lVar9 + 0x2c);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *unaff_x22;
        plVar6 = *(long **)(lVar5 + 0xb8);
        lVar7 = *plVar6;
        if (lVar7 == 0) goto LAB_03170dc4;
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      uVar3 = *(uint *)(lVar7 + lVar14 * 4 + 0x20);
      lVar7 = (long)(int)uVar3;
      if (iVar1 == 1) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          plVar6 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar5 = plVar6[3];
        if (lVar5 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        cVar2 = *(char *)(lVar5 + lVar14 + 0x20);
        if (cVar2 != '\0') {
          unaff_s12 = 0.0;
        }
        fVar22 = unaff_s12 * -90.0 * in_stack_00000038;
        fVar17 = 0.0;
        fVar16 = (float)FUN_03914564(0,0);
        fVar26 = (fVar28 * fVar22 + fVar27 * fVar16 + fVar29 * fVar30) - fVar25 * fVar17;
        fStack0000000000000044 =
             (fVar25 * fVar16 + fVar27 * fVar17 + fVar28 * fVar30) - fVar29 * fVar22;
        uVar20 = (ulong)(uint)fStack0000000000000044;
        fStack0000000000000048 =
             (fVar29 * fVar17 + fVar27 * fVar22 + fVar25 * fVar30) - fVar28 * fVar16;
        uVar23 = (ulong)(uint)fStack0000000000000048;
        fVar30 = ((fVar27 * fVar30 - fVar29 * fVar16) - fVar28 * fVar17) - fVar25 * fVar22;
        fStack0000000000000040 = fVar26;
        fStack000000000000004c = fVar30;
        if (unaff_x23 == 0) goto LAB_03170dc4;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        fVar25 = (float)FUN_03170f20(unaff_x23 + lVar7 * 0x10 + 0x20,&stack0x00000040);
        if (unaff_s12 <= fVar25) {
          unaff_s12 = fVar25;
        }
        if (fVar25 < 0.0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar3)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          lVar5 = unaff_x23 + lVar7 * 0x10;
          puVar10 = (undefined4 *)(lVar5 + 0x20);
          uVar15 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x24);
          uVar19 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar12;
          puVar13 = (undefined4 *)(lVar5 + 0x2c);
          uVar24 = *puVar13;
          goto LAB_03170a24;
        }
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar3)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          lVar5 = unaff_x23 + lVar7 * 0x10;
          fVar16 = *(float *)(lVar5 + 0x20);
          fVar28 = *(float *)(lVar5 + 0x24);
          fVar27 = *(float *)(lVar5 + 0x28);
          fVar29 = *(float *)(lVar5 + 0x2c);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          lVar8 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar17 = fVar28;
          fVar22 = fVar27;
          uVar15 = FUN_03914a7c(fVar16,fVar28,fVar27,fVar29,*(undefined4 *)(lVar8 + 0x48),
                                *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50),0);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(puVar4);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
          uVar18 = FUN_03914a7c(fVar26,uVar20,uVar23,fVar30,*(undefined4 *)(lVar8 + 0x48),
                                *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(puVar4);
            DAT_03fed25b = '\x01';
          }
          lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
          FUN_03914a7c(fVar16,fVar28,fVar27,fVar29,*(undefined4 *)(lVar8 + 0x18),
                       *(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),0);
          fVar17 = (float)FUN_01bf693c(uVar15,fVar17,fVar22,uVar18,uVar20,uVar23,0);
          fVar22 = 1.0;
          fVar25 = fVar25 * *(float *)(unaff_x19 + 0xb0);
          fVar30 = fVar25;
          if (1.0 < fVar25) {
            fVar30 = 1.0;
          }
          fVar30 = 1.0 - fVar30;
          if (fVar25 < 0.0) {
            fVar30 = 1.0;
          }
          fVar26 = 0.0;
          fVar25 = fVar17 * fVar30 * in_stack_00000038;
          fVar30 = (float)FUN_03914564(0,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar3)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          *(float *)(lVar5 + 0x20) =
               (fVar28 * fVar26 + fVar29 * fVar30 + fVar16 * fVar22) - fVar27 * fVar25;
          *(float *)(lVar5 + 0x24) =
               (fVar27 * fVar30 + fVar29 * fVar25 + fVar28 * fVar22) - fVar16 * fVar26;
          *(float *)(lVar5 + 0x28) =
               (fVar16 * fVar25 + fVar29 * fVar26 + fVar27 * fVar22) - fVar28 * fVar30;
          *(float *)(lVar5 + 0x2c) =
               ((fVar29 * fVar22 - fVar16 * fVar30) - fVar28 * fVar25) - fVar27 * fVar26;
        }
      }
      else if (iVar1 == 2) {
        if (unaff_x23 == 0) goto LAB_03170dc4;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar5 = unaff_x23 + lVar7 * 0x10;
        puVar10 = (undefined4 *)(lVar5 + 0x20);
        uVar15 = *puVar10;
        puVar11 = (undefined4 *)(lVar5 + 0x24);
        uVar19 = *puVar11;
        puVar12 = (undefined4 *)(lVar5 + 0x28);
        uVar21 = *puVar12;
        puVar13 = (undefined4 *)(lVar5 + 0x2c);
        uVar24 = *puVar13;
LAB_03170a24:
        uVar15 = FUN_039142e8(uVar15,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar3)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        *puVar10 = uVar15;
        *puVar11 = uVar19;
        *puVar12 = uVar21;
        *puVar13 = uVar24;
      }
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      if (*(int *)(lVar5 + lVar14 * 4 + 0x20) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0313815c(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x148);
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) {
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar5 = lVar5 + lVar14 * 0x10;
      lVar7 = unaff_x23 + lVar7 * 0x10;
      uVar19 = *(undefined4 *)(lVar5 + 0x24);
      uVar21 = *(undefined4 *)(lVar5 + 0x28);
      in_d3 = (ulong)*(uint *)(lVar5 + 0x2c);
      uVar15 = FUN_039142e8(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      *(undefined4 *)(lVar7 + 0x20) = uVar15;
      *(undefined4 *)(lVar7 + 0x24) = uVar19;
      *(undefined4 *)(lVar7 + 0x28) = uVar21;
      *(int *)(lVar7 + 0x2c) = (int)in_d3;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar5 = lVar5 + lVar14 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar15;
      *(undefined4 *)(lVar5 + 0x24) = uVar19;
      *(undefined4 *)(lVar5 + 0x28) = uVar21;
      *(int *)(lVar5 + 0x2c) = (int)in_d3;
      lVar5 = *unaff_x22;
    } while (*(int *)(lVar5 + 0xe0) != 0);
  } while( true );
}


