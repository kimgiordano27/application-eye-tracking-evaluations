/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 03170980
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_19;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_15
*/


void OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled
               (float param_1,float param_2,ulong param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  int iVar1;
  byte bVar2;
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
  uint unaff_w24;
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
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  undefined4 uVar24;
  float unaff_s8;
  float unaff_s10;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s12;
  float fVar28;
  float fVar29;
  float in_s16;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
code_r0x03170980:
  param_8 = (param_7 + param_5) - param_8;
  fStack0000000000000044 = (in_s18 + param_6) - in_s19;
  uVar19 = (ulong)(uint)fStack0000000000000044;
  fStack0000000000000048 = (in_s20 + param_4) - unaff_s10 * param_1;
  uVar23 = (ulong)(uint)fStack0000000000000048;
  fVar29 = (in_s16 - param_2) - unaff_s8 * (float)param_3;
  fStack0000000000000040 = param_8;
  fStack000000000000004c = fVar29;
  if (unaff_x23 != 0) {
    uVar13 = (uint)unaff_x29;
    if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
      fVar14 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar14) {
        unaff_s12 = fVar14;
      }
      if (0.0 <= fVar14) {
        if (unaff_w24 == 0) goto LAB_03170a48;
        if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          fVar28 = *(float *)(lVar5 + 0x20);
          fVar25 = *(float *)(lVar5 + 0x24);
          fVar26 = *(float *)(lVar5 + 0x28);
          fVar27 = *(float *)(lVar5 + 0x2c);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar16 = fVar25;
          fVar21 = fVar26;
          uVar15 = FUN_03914a7c(fVar28,fVar25,fVar26,fVar27,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (*(char *)(unaff_x20 + 0x260) == '\0') {
            thunk_FUN_01ad9084(puVar3);
            *(undefined1 *)(unaff_x20 + 0x260) = 1;
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar17 = FUN_03914a7c(param_8,uVar19,uVar23,fVar29,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(puVar3);
            DAT_03fed25b = '\x01';
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          FUN_03914a7c(fVar28,fVar25,fVar26,fVar27,*(undefined4 *)(lVar6 + 0x18),
                       *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
          fVar16 = (float)FUN_01bf693c(uVar15,fVar16,fVar21,uVar17,uVar19,uVar23,0);
          fVar21 = 1.0;
          fVar14 = fVar14 * *(float *)(unaff_x19 + 0xb0);
          fVar29 = fVar14;
          if (1.0 < fVar14) {
            fVar29 = 1.0;
          }
          fVar29 = 1.0 - fVar29;
          if (fVar14 < 0.0) {
            fVar29 = 1.0;
          }
          fVar22 = 0.0;
          fVar14 = fVar16 * fVar29 * in_stack_00000038;
          fVar29 = (float)FUN_03914564(0,0);
          if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
            *(float *)(lVar5 + 0x20) =
                 (fVar25 * fVar22 + fVar27 * fVar29 + fVar28 * fVar21) - fVar26 * fVar14;
            *(float *)(lVar5 + 0x24) =
                 (fVar26 * fVar29 + fVar27 * fVar14 + fVar25 * fVar21) - fVar28 * fVar22;
            *(float *)(lVar5 + 0x28) =
                 (fVar28 * fVar14 + fVar27 * fVar22 + fVar26 * fVar21) - fVar25 * fVar29;
            *(float *)(lVar5 + 0x2c) =
                 ((fVar27 * fVar21 - fVar28 * fVar29) - fVar25 * fVar14) - fVar26 * fVar22;
            goto LAB_03170a48;
          }
        }
      }
      else if (uVar13 < *(uint *)(unaff_x23 + 0x18)) {
        lVar5 = unaff_x23 + unaff_x29 * 0x10;
        puVar9 = (undefined4 *)(lVar5 + 0x20);
        uVar15 = *puVar9;
        puVar10 = (undefined4 *)(lVar5 + 0x24);
        uVar18 = *puVar10;
        puVar11 = (undefined4 *)(lVar5 + 0x28);
        uVar20 = *puVar11;
        puVar12 = (undefined4 *)(lVar5 + 0x2c);
        uVar24 = *puVar12;
        while (uVar15 = FUN_039142e8(uVar15,0), (uint)unaff_x29 < *(uint *)(unaff_x23 + 0x18)) {
          *puVar9 = uVar15;
          *puVar10 = uVar18;
          *puVar11 = uVar20;
          *puVar12 = uVar24;
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
            uVar18 = *(undefined4 *)(lVar5 + 0x24);
            uVar20 = *(undefined4 *)(lVar5 + 0x28);
            fVar29 = *(float *)(lVar5 + 0x2c);
            uVar15 = FUN_039142e8(*(undefined4 *)(lVar5 + 0x20),0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            *(undefined4 *)(lVar6 + 0x20) = uVar15;
            *(undefined4 *)(lVar6 + 0x24) = uVar18;
            *(undefined4 *)(lVar6 + 0x28) = uVar20;
            *(float *)(lVar6 + 0x2c) = fVar29;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar13)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            lVar5 = *(long *)(unaff_x19 + 0x150);
            if (lVar5 == 0) goto LAB_03170dc4;
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
            goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
            lVar5 = lVar5 + unaff_x28 * 0x10;
            unaff_w21 = unaff_w21 + 1;
            *(undefined4 *)(lVar5 + 0x20) = uVar15;
            *(undefined4 *)(lVar5 + 0x24) = uVar18;
            *(undefined4 *)(lVar5 + 0x28) = uVar20;
            *(float *)(lVar5 + 0x2c) = fVar29;
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
            fVar26 = *(float *)(lVar8 + 0x20);
            unaff_s10 = *(float *)(lVar8 + 0x24);
            unaff_s8 = *(float *)(lVar8 + 0x28);
            fVar14 = *(float *)(lVar8 + 0x2c);
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
              lVar5 = plVar4[3];
              if (lVar5 == 0) goto LAB_03170dc4;
              if (*(uint *)(lVar5 + 0x18) <= unaff_w21)
              goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
              bVar2 = *(byte *)(lVar5 + unaff_x28 + 0x20);
              unaff_w24 = (uint)bVar2;
              if (bVar2 != 0) {
                unaff_s12 = 0.0;
              }
              param_3 = (ulong)(uint)(unaff_s12 * -90.0 * in_stack_00000038);
              fVar25 = 0.0;
              param_1 = (float)FUN_03914564(0,0);
              fVar27 = (float)param_3;
              param_7 = unaff_s10 * fVar27;
              param_8 = unaff_s8 * fVar25;
              in_s18 = unaff_s8 * param_1;
              in_s20 = fVar26 * fVar25;
              param_2 = unaff_s10 * fVar25;
              param_5 = fVar14 * param_1 + fVar26 * fVar29;
              param_6 = fVar14 * fVar25 + unaff_s10 * fVar29;
              param_4 = fVar14 * fVar27 + unaff_s8 * fVar29;
              in_s16 = fVar14 * fVar29 - fVar26 * param_1;
              in_s19 = fVar26 * fVar27;
              goto code_r0x03170980;
            }
          } while (iVar1 != 2);
          if (unaff_x23 == 0) goto LAB_03170dc4;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar13) break;
          lVar5 = unaff_x23 + unaff_x29 * 0x10;
          puVar9 = (undefined4 *)(lVar5 + 0x20);
          uVar15 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x28);
          uVar20 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x2c);
          uVar24 = *puVar12;
        }
      }
    }
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


