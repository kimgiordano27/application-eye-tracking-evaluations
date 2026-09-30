/*
FUNCTION_NAME: OVRPlugin.OVRP_1_47_0$$.cctor
ENTRY_POINT: 03170c04
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


void OVRPlugin_OVRP_1_47_0___cctor(long *param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x23;
  undefined4 *puVar8;
  float *unaff_x24;
  undefined4 *puVar9;
  long *unaff_x25;
  undefined4 *puVar10;
  float *unaff_x26;
  undefined4 *puVar11;
  long *unaff_x27;
  long unaff_x28;
  uint uVar12;
  long unaff_x29;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  ulong uVar23;
  undefined4 uVar24;
  ulong unaff_d8;
  float unaff_s9;
  float fVar25;
  float fVar26;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  float *in_stack_00000010;
  float *in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  do {
    thunk_FUN_01ad9084(param_1);
    *(undefined1 *)(unaff_x20 + 0x260) = 1;
    param_1 = unaff_x25;
    do {
      lVar4 = *(long *)(*param_1 + 0xb8);
      uVar16 = FUN_03914a7c(unaff_d8,unaff_d15,unaff_d14,unaff_d13,*(undefined4 *)(lVar4 + 0x48),
                            *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
      if (DAT_03fed25b == '\0') {
        thunk_FUN_01ad9084(param_1);
        DAT_03fed25b = '\x01';
      }
      lVar4 = *(long *)(*param_1 + 0xb8);
      FUN_03914a7c(fStack0000000000000034,fStack000000000000002c,unaff_d12,fStack0000000000000030,
                   *(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                   *(undefined4 *)(lVar4 + 0x20),0);
      fVar15 = (float)FUN_01bf693c(uStack0000000000000028,fStack0000000000000024,
                                   uStack0000000000000020,uVar16,unaff_d15,unaff_d14,0);
      fVar25 = 1.0;
      fVar19 = unaff_s9 * *(float *)(unaff_x19 + 0xb0);
      fVar22 = fVar19;
      if (1.0 < fVar19) {
        fVar22 = 1.0;
      }
      fVar22 = 1.0 - fVar22;
      if (fVar19 < 0.0) {
        fVar22 = 1.0;
      }
      fVar19 = 0.0;
      fVar15 = fVar15 * fVar22 * fStack0000000000000038;
      fVar22 = (float)FUN_03914564(0,0);
      if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x29) {
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      fVar26 = (float)unaff_d12;
      *unaff_x26 = (fStack000000000000002c * fVar19 +
                   fStack0000000000000030 * fVar22 + fStack0000000000000034 * fVar25) -
                   fVar26 * fVar15;
      *in_stack_00000018 =
           (fVar26 * fVar22 + fStack0000000000000030 * fVar15 + fStack000000000000002c * fVar25) -
           fStack0000000000000034 * fVar19;
      *in_stack_00000010 =
           (fStack0000000000000034 * fVar15 + fStack0000000000000030 * fVar19 + fVar26 * fVar25) -
           fStack000000000000002c * fVar22;
      *unaff_x24 = ((fStack0000000000000030 * fVar25 - fStack0000000000000034 * fVar22) -
                   fStack000000000000002c * fVar15) - fVar26 * fVar19;
LAB_03170a48:
      do {
        lVar4 = *(long *)(unaff_x19 + 0x158);
        if (lVar4 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        if (*(int *)(lVar4 + unaff_x28 * 4 + 0x20) == 0) {
          lVar4 = *(long *)(unaff_x19 + 0xe0);
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0xd8);
        }
        if (lVar4 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar4 = *(long *)(lVar4 + unaff_x28 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_03170dc4;
        FUN_0313815c(lVar4,0);
        lVar4 = *(long *)(unaff_x19 + 0x148);
        if (lVar4 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        if (unaff_x23 == 0) goto LAB_03170dc4;
        uVar12 = (uint)unaff_x29;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar4 = lVar4 + unaff_x28 * 0x10;
        lVar5 = unaff_x23 + unaff_x29 * 0x10;
        uVar18 = *(undefined4 *)(lVar4 + 0x24);
        uVar21 = *(undefined4 *)(lVar4 + 0x28);
        fVar22 = *(float *)(lVar4 + 0x2c);
        uVar14 = FUN_039142e8(*(undefined4 *)(lVar4 + 0x20),0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        *(undefined4 *)(lVar5 + 0x20) = uVar14;
        *(undefined4 *)(lVar5 + 0x24) = uVar18;
        *(undefined4 *)(lVar5 + 0x28) = uVar21;
        *(float *)(lVar5 + 0x2c) = fVar22;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar4 = *(long *)(unaff_x19 + 0x150);
        if (lVar4 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar4 = lVar4 + unaff_x28 * 0x10;
        unaff_w21 = unaff_w21 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar14;
        *(undefined4 *)(lVar4 + 0x24) = uVar18;
        *(undefined4 *)(lVar4 + 0x28) = uVar21;
        *(float *)(lVar4 + 0x2c) = fVar22;
        lVar4 = *unaff_x27;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *unaff_x27;
        }
        plVar3 = *(long **)(lVar4 + 0xb8);
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_03170dc4;
        if (*(int *)(lVar5 + 0x18) <= (int)unaff_w21) {
          return;
        }
        lVar6 = *(long *)(unaff_x19 + 0x158);
        if (lVar6 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        lVar7 = *(long *)(unaff_x19 + 0x140);
        if (lVar7 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_03170dc4;
        if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        unaff_x28 = (long)(int)unaff_w21;
        lVar7 = lVar7 + unaff_x28 * 0x10;
        iVar1 = *(int *)(lVar6 + unaff_x28 * 4 + 0x20);
        fVar26 = *(float *)(lVar7 + 0x20);
        fVar25 = *(float *)(lVar7 + 0x24);
        fVar15 = *(float *)(lVar7 + 0x28);
        fVar19 = *(float *)(lVar7 + 0x2c);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *unaff_x27;
          plVar3 = *(long **)(lVar4 + 0xb8);
          lVar5 = *plVar3;
          if (lVar5 == 0) goto LAB_03170dc4;
        }
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        uVar12 = *(uint *)(lVar5 + unaff_x28 * 4 + 0x20);
        unaff_x29 = (long)(int)uVar12;
        if (iVar1 != 1) {
          if (iVar1 == 2) {
            if (unaff_x23 == 0) goto LAB_03170dc4;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            lVar4 = unaff_x23 + unaff_x29 * 0x10;
            puVar8 = (undefined4 *)(lVar4 + 0x20);
            uVar14 = *puVar8;
            puVar9 = (undefined4 *)(lVar4 + 0x24);
            uVar18 = *puVar9;
            puVar10 = (undefined4 *)(lVar4 + 0x28);
            uVar21 = *puVar10;
            puVar11 = (undefined4 *)(lVar4 + 0x2c);
            uVar24 = *puVar11;
LAB_03170a24:
            uVar14 = FUN_039142e8(uVar14,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            *puVar8 = uVar14;
            *puVar9 = uVar18;
            *puVar10 = uVar21;
            *puVar11 = uVar24;
          }
          goto LAB_03170a48;
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          plVar3 = *(long **)(*unaff_x27 + 0xb8);
        }
        lVar4 = plVar3[3];
        if (lVar4 == 0) goto LAB_03170dc4;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        cVar2 = *(char *)(lVar4 + unaff_x28 + 0x20);
        if (cVar2 != '\0') {
          fStack000000000000003c = 0.0;
        }
        fVar20 = fStack000000000000003c * -90.0 * fStack0000000000000038;
        fVar17 = 0.0;
        fVar13 = (float)FUN_03914564(0,0);
        fStack0000000000000040 =
             (fVar25 * fVar20 + fVar19 * fVar13 + fVar26 * fVar22) - fVar15 * fVar17;
        unaff_d8 = (ulong)(uint)fStack0000000000000040;
        fStack0000000000000044 =
             (fVar15 * fVar13 + fVar19 * fVar17 + fVar25 * fVar22) - fVar26 * fVar20;
        unaff_d15 = (ulong)(uint)fStack0000000000000044;
        fStack0000000000000048 =
             (fVar26 * fVar17 + fVar19 * fVar20 + fVar15 * fVar22) - fVar25 * fVar13;
        unaff_d14 = (ulong)(uint)fStack0000000000000048;
        fStack000000000000004c =
             ((fVar19 * fVar22 - fVar26 * fVar13) - fVar25 * fVar17) - fVar15 * fVar20;
        unaff_d13 = (ulong)(uint)fStack000000000000004c;
        if (unaff_x23 == 0) goto LAB_03170dc4;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        unaff_s9 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
        if (fStack000000000000003c <= unaff_s9) {
          fStack000000000000003c = unaff_s9;
        }
        if (unaff_s9 < 0.0) {
          if (uVar12 < *(uint *)(unaff_x23 + 0x18)) {
            lVar4 = unaff_x23 + unaff_x29 * 0x10;
            puVar8 = (undefined4 *)(lVar4 + 0x20);
            uVar14 = *puVar8;
            puVar9 = (undefined4 *)(lVar4 + 0x24);
            uVar18 = *puVar9;
            puVar10 = (undefined4 *)(lVar4 + 0x28);
            uVar21 = *puVar10;
            puVar11 = (undefined4 *)(lVar4 + 0x2c);
            uVar24 = *puVar11;
            goto LAB_03170a24;
          }
          goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        }
      } while (cVar2 == '\0');
      if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar4 = unaff_x23 + unaff_x29 * 0x10;
      unaff_x26 = (float *)(lVar4 + 0x20);
      fStack0000000000000034 = *unaff_x26;
      in_stack_00000018 = (float *)(lVar4 + 0x24);
      fStack000000000000002c = *in_stack_00000018;
      in_stack_00000010 = (float *)(lVar4 + 0x28);
      fVar22 = *in_stack_00000010;
      unaff_x24 = (float *)(lVar4 + 0x2c);
      fStack0000000000000030 = *unaff_x24;
      if (*(char *)(unaff_x20 + 0x260) == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        *(undefined1 *)(unaff_x20 + 0x260) = 1;
      }
      param_1 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      unaff_d12 = (ulong)(uint)fVar22;
      lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      uVar23 = unaff_d12;
      fStack0000000000000024 = fStack000000000000002c;
      uStack0000000000000028 =
           FUN_03914a7c(fStack0000000000000034,fStack000000000000002c,unaff_d12,
                        fStack0000000000000030,*(undefined4 *)(lVar4 + 0x48),
                        *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
      uStack0000000000000020 = (undefined4)uVar23;
      unaff_x25 = param_1;
    } while (*(char *)(unaff_x20 + 0x260) != '\0');
  } while( true );
}


