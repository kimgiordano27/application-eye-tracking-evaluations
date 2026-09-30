/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$.cctor
ENTRY_POINT: 031709fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_19
*/


void OVRPlugin_OVRP_1_45_0___cctor(ulong param_1)

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
  uint *unaff_x24;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  long unaff_x28;
  long unaff_x29;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  ulong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s12;
  undefined4 uStack0000000000000000;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
code_r0x031709fc:
  puVar10 = unaff_x24 + 1;
  uVar18 = *puVar10;
  puVar11 = unaff_x24 + 2;
  uVar22 = *puVar11;
  puVar12 = unaff_x24 + 3;
  uVar25 = *puVar12;
  uStack0000000000000000 = uStack000000000000003c;
  while (uVar14 = FUN_039142e8(param_1,0), (uint)unaff_x29 < *(uint *)(unaff_x23 + 0x18)) {
    *unaff_x24 = uVar14;
    *puVar10 = uVar18;
    *puVar11 = uVar22;
    *puVar12 = uVar25;
    do {
      while( true ) {
        lVar5 = *(long *)(unaff_x19 + 0x158);
        if (lVar5 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        if (*(int *)(lVar5 + unaff_x28 * 4 + 0x20) == 0) {
          lVar5 = *(long *)(unaff_x19 + 0xe0);
        }
        else {
          lVar5 = *(long *)(unaff_x19 + 0xd8);
        }
        if (lVar5 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar5 = *(long *)(lVar5 + unaff_x28 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_03170dc4;
        uVar15 = FUN_0313815c(lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0x148);
        if (lVar5 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        if (unaff_x23 == 0) goto LAB_03170dc4;
        uVar18 = (uint)unaff_x29;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar18)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar5 = lVar5 + unaff_x28 * 0x10;
        lVar6 = unaff_x23 + unaff_x29 * 0x10;
        uVar19 = *(undefined4 *)(lVar5 + 0x24);
        uVar23 = *(undefined4 *)(lVar5 + 0x28);
        fVar26 = *(float *)(lVar5 + 0x2c);
        uStack0000000000000000 = uVar15;
        uVar15 = FUN_039142e8(*(undefined4 *)(lVar5 + 0x20),0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar18)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        *(undefined4 *)(lVar6 + 0x20) = uVar15;
        *(undefined4 *)(lVar6 + 0x24) = uVar19;
        *(undefined4 *)(lVar6 + 0x28) = uVar23;
        *(float *)(lVar6 + 0x2c) = fVar26;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar18)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar5 = *(long *)(unaff_x19 + 0x150);
        if (lVar5 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar5 = lVar5 + unaff_x28 * 0x10;
        unaff_w21 = unaff_w21 + 1;
        *(undefined4 *)(lVar5 + 0x20) = uVar15;
        *(undefined4 *)(lVar5 + 0x24) = uVar19;
        *(undefined4 *)(lVar5 + 0x28) = uVar23;
        *(float *)(lVar5 + 0x2c) = fVar26;
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
        if (*(uint *)(lVar7 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar8 = *(long *)(unaff_x19 + 0x140);
        if (lVar8 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar9 = *(long *)(unaff_x19 + 0xd0);
        if (lVar9 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar9 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        unaff_x28 = (long)(int)unaff_w21;
        lVar8 = lVar8 + unaff_x28 * 0x10;
        iVar1 = *(int *)(lVar7 + unaff_x28 * 4 + 0x20);
        fVar31 = *(float *)(lVar8 + 0x20);
        fVar30 = *(float *)(lVar8 + 0x24);
        fVar27 = *(float *)(lVar8 + 0x28);
        fVar29 = *(float *)(lVar8 + 0x2c);
        uStack000000000000003c = *(undefined4 *)(lVar9 + unaff_x28 * 4 + 0x20);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *unaff_x22;
          plVar4 = *(long **)(lVar5 + 0xb8);
          lVar6 = *plVar4;
          if (lVar6 == 0) goto LAB_03170dc4;
        }
        if (*(uint *)(lVar6 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        uVar18 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
        unaff_x29 = (long)(int)uVar18;
        if (iVar1 != 1) break;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          plVar4 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar5 = plVar4[3];
        if (lVar5 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        cVar2 = *(char *)(lVar5 + unaff_x28 + 0x20);
        if (cVar2 != '\0') {
          unaff_s12 = 0.0;
        }
        fVar21 = unaff_s12 * -90.0 * fStack0000000000000038;
        fVar16 = 0.0;
        fVar13 = (float)FUN_03914564(0,0);
        fVar28 = (fVar30 * fVar21 + fVar29 * fVar13 + fVar31 * fVar26) - fVar27 * fVar16;
        fStack0000000000000044 =
             (fVar27 * fVar13 + fVar29 * fVar16 + fVar30 * fVar26) - fVar31 * fVar21;
        uVar20 = (ulong)(uint)fStack0000000000000044;
        fStack0000000000000048 =
             (fVar31 * fVar16 + fVar29 * fVar21 + fVar27 * fVar26) - fVar30 * fVar13;
        uVar24 = (ulong)(uint)fStack0000000000000048;
        fVar26 = ((fVar29 * fVar26 - fVar31 * fVar13) - fVar30 * fVar16) - fVar27 * fVar21;
        fStack0000000000000040 = fVar28;
        fStack000000000000004c = fVar26;
        if (unaff_x23 == 0) goto LAB_03170dc4;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar18)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        fVar27 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
        if (unaff_s12 <= fVar27) {
          unaff_s12 = fVar27;
        }
        if (fVar27 < 0.0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar18)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          unaff_x24 = (uint *)(unaff_x23 + unaff_x29 * 0x10 + 0x20);
          param_1 = (ulong)*unaff_x24;
          goto code_r0x031709fc;
        }
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar18)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          fVar13 = *(float *)(lVar5 + 0x20);
          fVar30 = *(float *)(lVar5 + 0x24);
          fVar29 = *(float *)(lVar5 + 0x28);
          fVar31 = *(float *)(lVar5 + 0x2c);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar16 = fVar30;
          fVar21 = fVar29;
          uVar15 = FUN_03914a7c(fVar13,fVar30,fVar29,fVar31,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(puVar3);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar17 = FUN_03914a7c(fVar28,uVar20,uVar24,fVar26,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(puVar3);
            DAT_03fed25b = '\x01';
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uStack0000000000000000 =
               FUN_03914a7c(fVar13,fVar30,fVar29,fVar31,*(undefined4 *)(lVar6 + 0x18),
                            *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
          fVar16 = (float)FUN_01bf693c(uVar15,fVar16,fVar21,uVar17,uVar20,uVar24,0);
          fVar21 = 1.0;
          fVar27 = fVar27 * *(float *)(unaff_x19 + 0xb0);
          fVar26 = fVar27;
          if (1.0 < fVar27) {
            fVar26 = 1.0;
          }
          fVar26 = 1.0 - fVar26;
          if (fVar27 < 0.0) {
            fVar26 = 1.0;
          }
          fVar28 = 0.0;
          fVar27 = fVar16 * fVar26 * fStack0000000000000038;
          fVar26 = (float)FUN_03914564(0,0);
          if (*(uint *)(unaff_x23 + 0x18) <= uVar18)
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
          *(float *)(lVar5 + 0x20) =
               (fVar30 * fVar28 + fVar31 * fVar26 + fVar13 * fVar21) - fVar29 * fVar27;
          *(float *)(lVar5 + 0x24) =
               (fVar29 * fVar26 + fVar31 * fVar27 + fVar30 * fVar21) - fVar13 * fVar28;
          *(float *)(lVar5 + 0x28) =
               (fVar13 * fVar27 + fVar31 * fVar28 + fVar29 * fVar21) - fVar30 * fVar26;
          *(float *)(lVar5 + 0x2c) =
               ((fVar31 * fVar21 - fVar13 * fVar26) - fVar30 * fVar27) - fVar29 * fVar28;
        }
      }
    } while (iVar1 != 2);
    if (unaff_x23 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar18) break;
    lVar5 = unaff_x23 + unaff_x29 * 0x10;
    unaff_x24 = (uint *)(lVar5 + 0x20);
    param_1 = (ulong)*unaff_x24;
    puVar10 = (uint *)(lVar5 + 0x24);
    uVar18 = *puVar10;
    puVar11 = (uint *)(lVar5 + 0x28);
    uVar22 = *puVar11;
    puVar12 = (uint *)(lVar5 + 0x2c);
    uVar25 = *puVar12;
    uStack0000000000000000 = uStack000000000000003c;
  }
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


