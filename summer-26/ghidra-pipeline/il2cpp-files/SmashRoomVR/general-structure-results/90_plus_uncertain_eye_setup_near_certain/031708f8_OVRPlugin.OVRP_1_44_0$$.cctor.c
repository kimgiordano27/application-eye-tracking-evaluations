/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$.cctor
ENTRY_POINT: 031708f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_14
*/


void OVRPlugin_OVRP_1_44_0___cctor(long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  uint in_w9;
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
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  undefined4 uVar25;
  ulong in_d3;
  float unaff_s8;
  float fVar26;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar27;
  float unaff_s12;
  float fVar28;
  float fVar29;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
code_r0x031708f8:
  fVar29 = (float)in_d3;
  if (unaff_w21 < in_w9) {
    cVar2 = *(char *)(param_1 + unaff_x28 + 0x20);
    if (cVar2 != '\0') {
      unaff_s12 = 0.0;
    }
    fVar20 = unaff_s12 * -90.0 * in_stack_00000038;
    fVar22 = 0.0;
    fVar14 = (float)FUN_03914564(0,0);
    fVar26 = (unaff_s10 * fVar20 + unaff_s9 * fVar14 + unaff_s11 * fVar29) - unaff_s8 * fVar22;
    fStack0000000000000044 =
         (unaff_s8 * fVar14 + unaff_s9 * fVar22 + unaff_s10 * fVar29) - unaff_s11 * fVar20;
    uVar19 = (ulong)(uint)fStack0000000000000044;
    fStack0000000000000048 =
         (unaff_s11 * fVar22 + unaff_s9 * fVar20 + unaff_s8 * fVar29) - unaff_s10 * fVar14;
    uVar24 = (ulong)(uint)fStack0000000000000048;
    fVar29 = ((unaff_s9 * fVar29 - unaff_s11 * fVar14) - unaff_s10 * fVar22) - unaff_s8 * fVar20;
    fStack0000000000000040 = fVar26;
    fStack000000000000004c = fVar29;
    if (unaff_x23 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar13 = (uint)unaff_x29;
    if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
      fVar14 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar14) {
        unaff_s12 = fVar14;
      }
      if (0.0 <= fVar14) {
        if (cVar2 == '\0') goto LAB_03170a48;
        if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          fVar28 = *(float *)(lVar5 + 0x20);
          fVar20 = *(float *)(lVar5 + 0x24);
          fVar22 = *(float *)(lVar5 + 0x28);
          fVar27 = *(float *)(lVar5 + 0x2c);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar18 = fVar20;
          fVar23 = fVar22;
          uVar15 = FUN_03914a7c(fVar28,fVar20,fVar22,fVar27,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(puVar3);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar16 = FUN_03914a7c(fVar26,uVar19,uVar24,fVar29,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(puVar3);
            DAT_03fed25b = '\x01';
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          FUN_03914a7c(fVar28,fVar20,fVar22,fVar27,*(undefined4 *)(lVar6 + 0x18),
                       *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
          fVar26 = (float)FUN_01bf693c(uVar15,fVar18,fVar23,uVar16,uVar19,uVar24,0);
          fVar18 = 1.0;
          fVar14 = fVar14 * *(float *)(unaff_x19 + 0xb0);
          fVar29 = fVar14;
          if (1.0 < fVar14) {
            fVar29 = 1.0;
          }
          fVar29 = 1.0 - fVar29;
          if (fVar14 < 0.0) {
            fVar29 = 1.0;
          }
          fVar23 = 0.0;
          fVar14 = fVar26 * fVar29 * in_stack_00000038;
          fVar29 = (float)FUN_03914564(0,0);
          if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
            *(float *)(lVar5 + 0x20) =
                 (fVar20 * fVar23 + fVar27 * fVar29 + fVar28 * fVar18) - fVar22 * fVar14;
            *(float *)(lVar5 + 0x24) =
                 (fVar22 * fVar29 + fVar27 * fVar14 + fVar20 * fVar18) - fVar28 * fVar23;
            *(float *)(lVar5 + 0x28) =
                 (fVar28 * fVar14 + fVar27 * fVar23 + fVar22 * fVar18) - fVar20 * fVar29;
            *(float *)(lVar5 + 0x2c) =
                 ((fVar27 * fVar18 - fVar28 * fVar29) - fVar20 * fVar14) - fVar22 * fVar23;
            goto LAB_03170a48;
          }
        }
      }
      else if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
        lVar5 = unaff_x23 + unaff_x29 * 0x10;
        puVar9 = (undefined4 *)(lVar5 + 0x20);
        uVar15 = *puVar9;
        puVar10 = (undefined4 *)(lVar5 + 0x24);
        uVar17 = *puVar10;
        puVar11 = (undefined4 *)(lVar5 + 0x28);
        uVar21 = *puVar11;
        puVar12 = (undefined4 *)(lVar5 + 0x2c);
        uVar25 = *puVar12;
        while (uVar15 = FUN_039142e8(uVar15,0), (uint)unaff_x29 < *(uint *)(unaff_x23 + 0x18)) {
          *puVar9 = uVar15;
          *puVar10 = uVar17;
          *puVar11 = uVar21;
          *puVar12 = uVar25;
LAB_03170a48:
          do {
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
            FUN_0313815c(lVar5,0);
            lVar5 = *(long *)(unaff_x19 + 0x148);
            if (lVar5 == 0) goto LAB_03170dc4;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            if (unaff_x23 == 0) goto LAB_03170dc4;
            uVar13 = (uint)unaff_x29;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            lVar5 = lVar5 + unaff_x28 * 0x10;
            lVar6 = unaff_x23 + unaff_x29 * 0x10;
            uVar17 = *(undefined4 *)(lVar5 + 0x24);
            uVar21 = *(undefined4 *)(lVar5 + 0x28);
            in_d3 = (ulong)*(uint *)(lVar5 + 0x2c);
            uVar15 = FUN_039142e8(*(undefined4 *)(lVar5 + 0x20),0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            *(undefined4 *)(lVar6 + 0x20) = uVar15;
            *(undefined4 *)(lVar6 + 0x24) = uVar17;
            *(undefined4 *)(lVar6 + 0x28) = uVar21;
            *(int *)(lVar6 + 0x2c) = (int)in_d3;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            lVar5 = *(long *)(unaff_x19 + 0x150);
            if (lVar5 == 0) goto LAB_03170dc4;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            lVar5 = lVar5 + unaff_x28 * 0x10;
            unaff_w21 = unaff_w21 + 1;
            *(undefined4 *)(lVar5 + 0x20) = uVar15;
            *(undefined4 *)(lVar5 + 0x24) = uVar17;
            *(undefined4 *)(lVar5 + 0x28) = uVar21;
            *(int *)(lVar5 + 0x2c) = (int)in_d3;
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
            if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_03170dc4;
            if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            unaff_x28 = (long)(int)unaff_w21;
            lVar8 = lVar8 + unaff_x28 * 0x10;
            iVar1 = *(int *)(lVar7 + unaff_x28 * 4 + 0x20);
            unaff_s11 = *(float *)(lVar8 + 0x20);
            unaff_s10 = *(float *)(lVar8 + 0x24);
            unaff_s8 = *(float *)(lVar8 + 0x28);
            unaff_s9 = *(float *)(lVar8 + 0x2c);
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar5 = *unaff_x22;
              plVar4 = *(long **)(lVar5 + 0xb8);
              lVar6 = *plVar4;
              if (lVar6 == 0) goto LAB_03170dc4;
            }
            if (*(uint *)(lVar6 + 0x18) <= unaff_w21)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            uVar13 = *(uint *)(lVar6 + unaff_x28 * 4 + 0x20);
            unaff_x29 = (long)(int)uVar13;
            if (iVar1 == 1) {
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                plVar4 = *(long **)(*unaff_x22 + 0xb8);
              }
              param_1 = plVar4[3];
              if (param_1 == 0) goto LAB_03170dc4;
              in_w9 = *(uint *)(param_1 + 0x18);
              goto code_r0x031708f8;
            }
          } while (iVar1 != 2);
          if (unaff_x23 == 0) goto LAB_03170dc4;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar15 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar25 = *puVar12;
        }
      }
    }
  }
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


