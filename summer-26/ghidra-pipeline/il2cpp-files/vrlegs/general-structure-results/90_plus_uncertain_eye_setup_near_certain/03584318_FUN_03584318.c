/*
FUNCTION_NAME: FUN_03584318
ENTRY_POINT: 03584318
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_21
*/


float FUN_03584318(float param_1,long param_2,float *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  ulong *puVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  uint local_c90;
  float local_c88;
  float local_c7c;
  float local_c78;
  float local_c64;
  float local_c60;
  float local_c5c;
  float local_c58;
  float local_c54;
  float local_c4c;
  ulong local_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  ulong local_c00;
  undefined8 uStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 local_bd0;
  long local_bc8;
  ulong local_bc0;
  undefined8 uStack_bb8;
  undefined4 local_bb0;
  uint local_ba4;
  ulong local_ba0;
  undefined8 uStack_b98;
  undefined4 local_b90;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined4 local_b1c;
  undefined4 local_b18 [222];
  undefined1 auStack_7a0 [888];
  undefined1 auStack_428 [888];
  undefined8 local_b0;
  undefined4 local_a4;
  
  puVar13 = PTR_DAT_03cbdf88;
  if ((DAT_0412e06c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    FUN_01ab69ac(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Hand_TypeInfo);
    FUN_01ab69ac(OVRPlugin_HandStatus_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(Crosstales_BWF_Manager_PunctuationManager_<>c__DisplayClass28_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_2_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_29_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_34_0_TypeInfo);
    DAT_0412e06c = 1;
  }
  local_b0 = 0;
  memset(auStack_428,0,0x378);
  memset(auStack_7a0,0,0x378);
  memset(local_b18,0,0x378);
  local_b1c = 0;
  local_ba0 = 0;
  uStack_b98 = 0;
  local_b90 = 0;
  local_ba4 = 0;
  uStack_b38 = 0;
  local_b40 = 0;
  uStack_b28 = 0;
  uStack_b30 = 0;
  uStack_b58 = 0;
  local_b60 = 0;
  uStack_b48 = 0;
  uStack_b50 = 0;
  uStack_b78 = 0;
  local_b80 = 0;
  uStack_b68 = 0;
  uStack_b70 = 0;
  local_bc0 = 0;
  uStack_bb8 = 0;
  local_bb0 = 0;
  local_bc8 = 0;
  uVar29 = *(undefined8 *)(param_2 + 0xf8);
  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar24 = FUN_036d35a8(uVar29,0,0);
  if ((uVar24 & 1) == 0) {
    if (*(long *)(param_2 + 0xf8) == 0) goto LAB_03586310;
    lVar25 = FUN_03568ac0(*(long *)(param_2 + 0xf8),0);
    if (lVar25 != 0) {
      lVar25 = *(long *)(param_2 + 0x478);
      if ((lVar25 != 0) && (*(long *)(lVar25 + 0x18) != 0)) {
        if ((int)*(long *)(lVar25 + 0x18) == 0) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(int *)(lVar25 + 0x20) == 0) goto LAB_0358461c;
        plVar1 = (long *)(param_2 + 0x100);
        *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_2 + 0xf8);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
        *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x110);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x118);
        *(undefined4 *)(param_2 + 0x120) = 0;
        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        local_bd0 = 0;
        uStack_be8 = 0;
        local_bf0 = 0;
        uStack_bd8 = 0;
        local_be0 = 0;
        uStack_bf8 = 0;
        local_c00 = 0;
        FUN_03557f30(*(undefined4 *)(param_2 + 0x618),&local_c00,0,*(undefined8 *)(param_2 + 0x100),
                     0,*(undefined8 *)(param_2 + 0x118),0);
        uStack_c38 = uStack_bf8;
        local_c40 = local_c00;
        uStack_c28 = uStack_be8;
        uStack_c30 = local_bf0;
        uStack_c18 = uStack_bd8;
        local_c20 = local_be0;
        local_c10 = local_bd0;
        FUN_0209aa94(*(long *)(*(long *)puVar13 + 0xb8) + 0x10,&local_c40,
                     *(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
        iVar20 = *(int *)(param_2 + 0x490);
        plVar2 = (long *)(param_2 + 0x488);
        if ((*(long *)(param_2 + 0x488) == 0) ||
           (*(int *)(*(long *)(param_2 + 0x488) + 0x18) < iVar20)) {
          if (iVar20 < 0x401) {
            iVar19 = FUN_036c1d60(iVar20,0);
          }
          else {
            iVar19 = iVar20 + 0x100;
          }
          lVar25 = FUN_01ab6a94(*(undefined8 *)
                                 Crosstales_BWF_Manager_PunctuationManager_<>c__DisplayClass28_0_TypeInfo
                                ,iVar19);
          *plVar2 = lVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        }
        if (*(long *)(param_2 + 0xf8) == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar44 = *param_3;
        memmove(&local_b80,(void *)(*(long *)(param_2 + 0xf8) + 0x50),0x60);
        iVar19 = FUN_03776950(&local_b80,0);
        if (*(long *)(param_2 + 0xf8) == 0) goto LAB_03586310;
        memmove(&local_b80,(void *)(*(long *)(param_2 + 0xf8) + 0x50),0x60);
        fVar31 = (float)FUN_03776960(&local_b80,0);
        fVar46 = *param_3;
        *(undefined4 *)(param_2 + 0x404) = 0x3f800000;
        fVar32 = *param_3;
        *(float *)(param_2 + 0x1e8) = fVar32;
        puVar14 = OVRPlugin_OVRP_1_29_0_TypeInfo;
        fVar40 = DAT_00d389a8;
        fVar35 = DAT_00d389a8;
        if (*(char *)(param_2 + 0x305) != '\0') {
          fVar35 = 1.0;
        }
        local_c00._0_4_ = fVar32;
        FUN_0209aa94(param_2 + 0x1f0,&local_c00,*(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
        *(undefined4 *)(param_2 + 0x25c) = *(undefined4 *)(param_2 + 600);
        *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_2 + 0x26c);
        local_c00 = CONCAT44(local_c00._4_4_,*(undefined4 *)(param_2 + 0x26c));
        FUN_0209aa94(param_2 + 0x280,&local_c00,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
        *(undefined4 *)(param_2 + 0x61c) = 0;
        FUN_0209aa1c(param_2 + 0x620,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
        *(undefined4 *)(param_2 + 0x4d8) = 0;
        *(undefined4 *)(param_2 + 0x2c0) = 0xc6fffe00;
        if (*(long *)(param_2 + 0x100) == 0) goto LAB_03586310;
        memmove(&local_b80,(void *)(*(long *)(param_2 + 0x100) + 0x50),0x60);
        fVar32 = (float)FUN_03776970(&local_b80,0);
        if (*plVar1 == 0) goto LAB_03586310;
        memmove(&local_b80,(void *)(*plVar1 + 0x50),0x60);
        fVar33 = (float)FUN_03776980(&local_b80,0);
        if (*plVar1 == 0) goto LAB_03586310;
        memmove(&local_b80,(void *)(*plVar1 + 0x50),0x60);
        fVar34 = (float)FUN_037769c0(&local_b80,0);
        *(undefined8 *)(param_2 + 0x2ac) = 0;
        *(undefined4 *)(param_2 + 0x640) = 0;
        *(undefined8 *)(param_2 + 0x408) = 0;
        local_c00 = local_c00 & 0xffffffff00000000;
        FUN_0209aa94(param_2 + 0x410,&local_c00,*(undefined8 *)puVar14);
        *(undefined1 *)(param_2 + 0x430) = 0;
        *(undefined8 *)(param_2 + 0x494) = 0;
        lVar25 = *(long *)puVar13;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar13;
        }
        uVar29 = NEON_rev64(*(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8),4);
        *(undefined4 *)(param_2 + 0x4a8) = 0;
        *(undefined4 *)(param_2 + 0x4d0) = 0;
        *(undefined1 *)(param_2 + 0x2c4) = 0;
        *(undefined8 *)(param_2 + 0x350) = 0;
        *(undefined4 *)(param_2 + 0x360) = 0xbf800000;
        *(undefined1 *)(param_2 + 0x3f5) = 1;
        *(undefined8 *)(param_2 + 0x4b8) = 0;
        *(undefined4 *)(param_2 + 0x4c4) = 0;
        *(undefined8 *)(param_2 + 0x4c8) = uVar29;
        *(undefined1 *)(param_2 + 0x2da) = 0;
        FUN_0359f73c(&local_b0,0xffffffff,0,0);
        memset(auStack_428,0,0x378);
        memset(auStack_7a0,0,0x378);
        memset(local_b18,0,0x378);
        lVar25 = *(long *)(param_2 + 0x478);
        *(int *)(param_2 + 0x244) = *(int *)(param_2 + 0x244) + 1;
        fVar12 = DAT_00d38d28;
        fVar11 = DAT_00d38938;
        if (lVar25 == 0) goto LAB_03586310;
        plVar3 = (long *)(param_2 + 0x698);
        uVar8 = iVar20 - 1;
        local_c5c = 0.0;
        local_c78 = 0.0;
        local_c7c = 0.0;
        fVar32 = fVar32 - (fVar33 - fVar34);
        local_c54 = 0.0;
        local_c88 = 0.0;
        param_1 = param_1 + DAT_00d3879c;
        local_c64 = 0.0;
        fVar31 = (fVar44 / (float)iVar19) * fVar31 * fVar35;
        bVar10 = false;
        bVar16 = false;
        fVar35 = fVar35 * fVar46 * DAT_00d38d28;
        uVar22 = 0;
        puVar4 = (uint *)(param_2 + 0x494);
        puVar5 = (ulong *)(param_2 + 0x648);
        local_c90 = 1;
        fVar44 = fVar31;
LAB_035849d0:
        if ((int)*(uint *)(lVar25 + 0x18) <= (int)uVar22) {
LAB_03586314:
          if ((((*(float *)(param_2 + 0x23c) - *(float *)(param_2 + 0x240) <= DAT_00d389f8) ||
               ((param_4 & 1) == 0)) || (fVar44 = *param_3, *(float *)(param_2 + 0x254) <= fVar44))
             || (*(int *)(param_2 + 0x248) <= *(int *)(param_2 + 0x244))) {
            fVar44 = *(float *)(param_2 + 0x340);
            fVar40 = *(float *)(param_2 + 0x348);
            if (fVar44 <= 0.0) {
              fVar44 = 0.0;
            }
            if (fVar40 <= 0.0) {
              fVar40 = 0.0;
            }
            *(undefined1 *)(param_2 + 0x24c) = 1;
            fVar40 = (local_c54 + fVar44 + fVar40) * 100.0 + 1.0;
            fVar44 = DAT_00d387f8;
            if (fVar40 != INFINITY) {
              fVar44 = (float)(int)fVar40 / 100.0;
            }
            *(undefined1 *)(param_2 + 0x3f5) = 0;
            return fVar44;
          }
          if (*(float *)(param_2 + 0x2d4) < *(float *)(param_2 + 0x2d0) / 100.0) {
            *(undefined4 *)(param_2 + 0x2d4) = 0;
            fVar44 = *param_3;
          }
          *(float *)(param_2 + 0x240) = fVar44;
          fVar44 = (*(float *)(param_2 + 0x23c) - *param_3) * 0.5;
          if (fVar44 <= DAT_00d38b84) {
            fVar44 = DAT_00d38b84;
          }
          fVar44 = *param_3 + fVar44;
          *param_3 = fVar44;
          fVar40 = fVar44 * 20.0 + 0.5;
          fVar44 = DAT_00d38e60;
          if (fVar40 != INFINITY) {
            fVar44 = (float)(int)fVar40 / 20.0;
          }
          if (*(float *)(param_2 + 0x254) <= fVar44) {
            fVar44 = *(float *)(param_2 + 0x254);
          }
          *param_3 = fVar44;
LAB_035863e8:
          if (DAT_0411f1e3 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbeb70);
            DAT_0411f1e3 = '\x01';
          }
          goto LAB_03584640;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar22) goto UnityEngine_LightProbesQuery__get_IsCreated;
        uVar23 = *(uint *)(lVar25 + (long)(int)uVar22 * 0xc + 0x20);
        if (uVar23 == 0) goto LAB_03586314;
        if ((uVar23 == 0x3c) && (*(char *)(param_2 + 0x302) != '\0')) {
          *(undefined1 *)(param_2 + 0x431) = 1;
          *(undefined4 *)(param_2 + 0x644) = 0;
          uVar24 = FUN_03586568(param_2,lVar25,uVar22 + 1,&local_ba4);
          if (((uVar24 & 1) == 0) || (uVar22 = local_ba4, *(int *)(param_2 + 0x644) != 0))
          goto LAB_03584a74;
          goto LAB_03586300;
        }
        if ((*(long *)(param_2 + 0x368) == 0) ||
           (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0)) goto LAB_03586310;
        if (*(uint *)(lVar25 + 0x18) <= *puVar4) goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
        *(undefined4 *)(param_2 + 0x644) = *(undefined4 *)(lVar25 + 0x2c);
        *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(lVar25 + 0x58);
        *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(lVar25 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
LAB_03584a74:
        if ((*(long *)(param_2 + 0x368) == 0) ||
           (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0)) goto LAB_03586310;
        uVar21 = *puVar4;
        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar30 = (long)(int)uVar21;
        cVar7 = *(char *)(lVar25 + lVar30 * 0x178 + 0x5c);
        *(undefined1 *)(param_2 + 0x431) = 0;
        uVar45 = *(undefined4 *)(param_2 + 0x120);
        if ((uint)local_b0 == uVar21) {
          *(undefined4 *)(param_2 + 0x644) = 0;
          if (local_b0._4_4_ == 0x2026) {
            lVar25 = *plVar2;
            if (lVar25 != 0) {
              if (*(uint *)(lVar25 + 0x18) <= uVar21)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              *(undefined8 *)(lVar25 + lVar30 * 0x178 + 0x30) = *(undefined8 *)(param_2 + 0x650);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar25 = *plVar2;
              if (lVar25 != 0) {
                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                *(undefined4 *)(lVar25 + 0x2c) = 0;
                *(undefined8 *)(lVar25 + 0x38) = *(undefined8 *)(param_2 + 0x658);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar25 = *(long *)(param_2 + 0x488);
                if (lVar25 != 0) {
                  if (*(uint *)(lVar25 + 0x18) <= *(uint *)(param_2 + 0x494))
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  *(undefined8 *)(lVar25 + (long)(int)*(uint *)(param_2 + 0x494) * 0x178 + 0x50) =
                       *(undefined8 *)(param_2 + 0x660);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar25 = *plVar2;
                  if (lVar25 != 0) {
                    uVar21 = *puVar4;
                    if (uVar21 < *(uint *)(lVar25 + 0x18)) {
                      bVar17 = true;
                      *(undefined4 *)(lVar25 + (long)(int)uVar21 * 0x178 + 0x58) =
                           *(undefined4 *)(param_2 + 0x668);
                      uVar23 = 0x2026;
                      *(undefined1 *)(param_2 + 0x2f8) = 1;
                      local_b0 = CONCAT44(3,uVar21 + 1);
                      goto LAB_03584c20;
                    }
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                  }
                }
              }
            }
            goto LAB_03586310;
          }
          if (local_b0._4_4_ != 3) {
            bVar17 = true;
            uVar23 = local_b0._4_4_;
            goto LAB_03584c20;
          }
          lVar25 = *plVar2;
          if (((lVar25 == 0) || (*plVar1 == 0)) || (lVar26 = FUN_03568ac0(*plVar1,0), lVar26 == 0))
          goto LAB_03586310;
          local_a4 = 3;
          FUN_0219b634(lVar26,&local_a4,&local_c00,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
          if (*(uint *)(lVar25 + 0x18) <= uVar21) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *(ulong *)(lVar25 + lVar30 * 0x178 + 0x30) = local_c00;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          bVar17 = true;
          uVar23 = 3;
          *(undefined1 *)(param_2 + 0x2f8) = 1;
        }
        else {
          bVar17 = false;
LAB_03584c20:
          if ((uVar23 != 3) && ((int)uVar21 < *(int *)(param_2 + 0x324))) {
            lVar25 = *plVar2;
            if (lVar25 != 0) {
              if (uVar21 < *(uint *)(lVar25 + 0x18)) {
                lVar25 = lVar25 + (long)(int)uVar21 * 0x178;
                *(undefined1 *)(lVar25 + 0x194) = 0;
                *(undefined2 *)(lVar25 + 0x20) = 0x200b;
                *(undefined4 *)(lVar25 + 100) = 0;
                *puVar4 = uVar21 + 1;
                goto LAB_03586300;
              }
              goto UnityEngine_LightProbesQuery__get_IsCreated;
            }
            goto LAB_03586310;
          }
        }
        iVar20 = *(int *)(param_2 + 0x644);
        if (iVar20 == 0) {
          uVar21 = *(uint *)(param_2 + 0x25c);
          if ((uVar21 >> 4 & 1) == 0) {
            if ((uVar21 >> 3 & 1) == 0) {
              local_c58 = 1.0;
              if ((uVar21 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar24 = FUN_026b812c(uVar23,0);
                local_c58 = 1.0;
                if ((uVar24 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar23 = FUN_026b8410(uVar23,0);
                  local_c58 = fVar11;
                  goto LAB_03584f98;
                }
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar24 = FUN_026b8070(uVar23,0);
              local_c58 = 1.0;
              if ((uVar24 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar23 = FUN_026b8594(uVar23,0);
                goto LAB_03584f98;
              }
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_026b812c(uVar23,0);
            local_c58 = 1.0;
            if ((uVar24 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar23 = FUN_026b8410(uVar23,0);
LAB_03584f98:
              uVar23 = uVar23 & 0xffff;
            }
          }
          iVar20 = *(int *)(param_2 + 0x644);
          if (iVar20 != 0) goto LAB_03584c80;
LAB_03584fa4:
          if ((*(long *)(param_2 + 0x368) == 0) ||
             (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0))
          goto LAB_03586310;
          if (*(uint *)(lVar25 + 0x18) <= *puVar4) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *puVar5 = *(ulong *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x30);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5);
          if (*puVar5 == 0) goto LAB_03586300;
          if ((*(long *)(param_2 + 0x368) == 0) ||
             (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0))
          goto LAB_03586310;
          uVar6 = *puVar4;
          uVar21 = *(uint *)(lVar25 + 0x18);
          if (uVar21 <= uVar6) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *(undefined4 *)(param_2 + 0x120) =
               *(undefined4 *)(lVar25 + (long)(int)uVar6 * 0x178 + 0x58);
          if (bVar17) {
            lVar30 = *(long *)(param_2 + 0x478);
            if (lVar30 == 0) goto LAB_03586310;
            if (*(uint *)(lVar30 + 0x18) <= uVar22)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            if ((*(int *)(lVar30 + (long)(int)uVar22 * 0xc + 0x20) != 10) ||
               (uVar6 == *(uint *)(param_2 + 0x498))) goto LAB_03585044;
            if (uVar21 <= uVar6 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
            if (*plVar1 == 0) goto LAB_03586310;
            fVar44 = *(float *)(lVar25 + (long)(int)(uVar6 - 1) * 0x178 + 0x60);
            iVar20 = FUN_03776950(*plVar1 + 0x50,0);
            lVar25 = *plVar1;
          }
          else {
LAB_03585044:
            if (*plVar1 == 0) goto LAB_03586310;
            fVar44 = *(float *)(param_2 + 0x1e8);
            iVar20 = FUN_03776950(*plVar1 + 0x50,0);
            lVar25 = *(long *)(param_2 + 0x100);
          }
          if (lVar25 == 0) goto LAB_03586310;
          fVar34 = (float)FUN_03776960(lVar25 + 0x50,0);
          fVar33 = fVar40;
          if (*(char *)(param_2 + 0x305) != '\0') {
            fVar33 = 1.0;
          }
          fVar46 = 0.0;
          fVar37 = 0.0;
          if (!(bool)(bVar17 & uVar23 == 0x2026)) {
            if (*plVar1 == 0) goto LAB_03586310;
            fVar37 = (float)FUN_03776980(*plVar1 + 0x50,0);
            if (*plVar1 == 0) goto LAB_03586310;
            fVar46 = (float)FUN_037769c0(*plVar1 + 0x50,0);
          }
          if ((*puVar5 == 0) || (lVar25 = *(long *)(param_2 + 0x488), lVar25 == 0))
          goto LAB_03586310;
          uVar21 = *(uint *)(param_2 + 0x494);
          if (*(uint *)(lVar25 + 0x18) <= uVar21) goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar44 = ((local_c58 * fVar44) / (float)iVar20) * fVar34 * fVar33 *
                   *(float *)(param_2 + 0x404) * *(float *)(*puVar5 + 0x2c);
          *(undefined4 *)(lVar25 + (long)(int)uVar21 * 0x178 + 0x2c) = 0;
LAB_035852d0:
          bVar17 = uVar23 == 0xad;
          fVar33 = 0.0;
          if (!bVar17 && uVar23 != 3) {
            fVar33 = fVar44;
          }
        }
        else {
          local_c58 = 1.0;
          if (iVar20 == 0) goto LAB_03584fa4;
LAB_03584c80:
          if (iVar20 == 1) {
            if ((*(long *)(param_2 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= *puVar4)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            *(undefined8 *)(param_2 + 0x698) =
                 *(undefined8 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x40);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3);
            if ((*(long *)(param_2 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= *puVar4)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            *(undefined4 *)(param_2 + 0x6a4) =
                 *(undefined4 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x48);
            if ((*(long *)(param_2 + 0x698) == 0) ||
               (lVar25 = UnityEngine_Material__DisableKeyword(*(long *)(param_2 + 0x698),0),
               lVar25 == 0)) goto LAB_03586310;
            FUN_02215a88(lVar25,*(undefined4 *)(param_2 + 0x6a4),&local_c00,
                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
            uVar24 = local_c00;
            if (local_c00 == 0) goto LAB_03586300;
            if (uVar23 == 0x3c) {
              uVar23 = *(int *)(param_2 + 0x6a4) + 0xe000;
            }
            if (*plVar3 == 0) goto LAB_03586310;
            memmove(&local_b80,(void *)(*plVar3 + 0x48),0x60);
            iVar20 = FUN_03776950(&local_b80,0);
            fVar44 = *(float *)(param_2 + 0x1e8);
            if (iVar20 < 1) {
              if (*plVar1 == 0) goto LAB_03586310;
              memmove(&local_b80,(void *)(*plVar1 + 0x50),0x60);
              iVar20 = FUN_03776950(&local_b80,0);
              if (*plVar1 == 0) goto LAB_03586310;
              memmove(&local_b80,(void *)(*plVar1 + 0x50),0x60);
              fVar33 = (float)FUN_03776960(&local_b80,0);
              fVar46 = fVar40;
              if (*(char *)(param_2 + 0x305) != '\0') {
                fVar46 = 1.0;
              }
              if (*(long *)(param_2 + 0x100) == 0) goto LAB_03586310;
              memmove(&local_b80,(void *)(*(long *)(param_2 + 0x100) + 0x50),0x60);
              fVar34 = (float)FUN_03776980(&local_b80,0);
              if (*(long *)(uVar24 + 0x20) == 0) goto LAB_03586310;
              FUN_03776e6c(&local_c00,*(long *)(uVar24 + 0x20),0);
              uStack_bb8 = uStack_bf8;
              local_bc0 = local_c00;
              local_bb0 = (undefined4)local_bf0;
              fVar36 = (float)FUN_03776c9c(&local_bc0,0);
              if (*(long *)(uVar24 + 0x20) == 0) goto LAB_03586310;
              fVar39 = *(float *)(uVar24 + 0x2c);
              fVar38 = (float)FUN_03776ea8(*(long *)(uVar24 + 0x20),0);
              if (*plVar1 == 0) goto LAB_03586310;
              memmove(&local_b80,(void *)(*plVar1 + 0x50),0x60);
              fVar37 = (float)FUN_03776980(&local_b80,0);
              if (*plVar1 == 0) goto LAB_03586310;
              fVar46 = (fVar44 / (float)iVar20) * fVar33 * fVar46;
              fVar44 = fVar46 * (fVar34 / fVar36) * fVar39 * fVar38;
              fVar46 = fVar46 / fVar44;
              fVar37 = fVar46 * fVar37;
              memmove(&local_b80,(void *)(*plVar1 + 0x50),0x60);
              fVar33 = (float)FUN_037769c0(&local_b80,0);
              fVar46 = fVar46 * fVar33;
            }
            else {
              if (*plVar3 == 0) goto LAB_03586310;
              memmove(&local_b80,(void *)(*plVar3 + 0x48),0x60);
              iVar20 = FUN_03776950(&local_b80,0);
              if (*plVar3 == 0) goto LAB_03586310;
              memmove(&local_b80,(void *)(*plVar3 + 0x48),0x60);
              fVar46 = (float)FUN_03776960(&local_b80,0);
              if (*(long *)(uVar24 + 0x20) == 0) goto LAB_03586310;
              fVar34 = *(float *)(uVar24 + 0x2c);
              fVar33 = fVar40;
              if (*(char *)(param_2 + 0x305) != '\0') {
                fVar33 = 1.0;
              }
              fVar36 = (float)FUN_03776ea8(*(long *)(uVar24 + 0x20),0);
              if (*(long *)(param_2 + 0x698) == 0) goto LAB_03586310;
              memmove(&local_b80,(void *)(*(long *)(param_2 + 0x698) + 0x48),0x60);
              fVar37 = (float)FUN_03776980(&local_b80,0);
              if (*plVar3 == 0) goto LAB_03586310;
              fVar44 = (fVar44 / (float)iVar20) * fVar46 * fVar33 * fVar34 * fVar36;
              memmove(&local_b80,(void *)(*plVar3 + 0x48),0x60);
              fVar46 = (float)FUN_037769c0(&local_b80,0);
            }
            *puVar5 = uVar24;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar24);
            lVar25 = *plVar2;
            if (lVar25 != 0) {
              uVar21 = *puVar4;
              if (uVar21 < *(uint *)(lVar25 + 0x18)) {
                lVar30 = lVar25 + (long)(int)uVar21 * 0x178;
                *(undefined4 *)(lVar30 + 0x2c) = 1;
                *(float *)(lVar30 + 0x160) = fVar44;
                *(undefined4 *)(param_2 + 0x120) = uVar45;
                goto LAB_035852d0;
              }
              goto UnityEngine_LightProbesQuery__get_IsCreated;
            }
            goto LAB_03586310;
          }
          bVar17 = uVar23 == 0xad;
          lVar25 = *plVar2;
          fVar37 = 0.0;
          fVar33 = 0.0;
          if (!bVar17 && uVar23 != 3) {
            fVar33 = fVar44;
          }
          if (lVar25 == 0) goto LAB_03586310;
          uVar21 = *puVar4;
          fVar46 = 0.0;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(short *)(lVar25 + (long)(int)uVar21 * 0x178 + 0x20) = (short)uVar23;
        if ((*puVar5 == 0) || (lVar25 = *(long *)(*puVar5 + 0x20), lVar25 == 0)) goto LAB_03586310;
        FUN_03776e6c(&local_c00,lVar25,0);
        uStack_b98 = uStack_bf8;
        local_ba0 = local_c00;
        local_b90 = (undefined4)local_bf0;
        if ((int)uVar23 < 0x10000) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b63d8(uVar23,0);
          uVar21 = uVar21 & 1;
        }
        else {
          uVar21 = 0;
        }
        local_c4c = *(float *)(param_2 + 0x2a8);
        *(undefined4 *)(param_2 + 0x2fc) = 0;
        if (*(char *)(param_2 + 0x2f9) == '\0') {
          fVar34 = 0.0;
        }
        else {
          if (*puVar5 == 0) goto LAB_03586310;
          uVar27 = *puVar4;
          uVar6 = *(uint *)(*puVar5 + 0x28);
          if ((int)uVar27 < (int)uVar8) {
            if ((*(long *)(param_2 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= uVar27 + 1)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar25 = *(long *)(lVar25 + (long)(int)(uVar27 + 1) * 0x178 + 0x30);
            if ((((lVar25 == 0) || (*plVar1 == 0)) ||
                (lVar30 = *(long *)(*plVar1 + 0x128), lVar30 == 0)) ||
               (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_03586310;
            local_c00 = CONCAT44(local_c00._4_4_,uVar6 | *(int *)(lVar25 + 0x28) << 0x10);
            uVar24 = FUN_0219f8b8(lVar30,&local_c00,&local_bc8,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            uVar45 = 0;
            if ((uVar24 & 1) == 0) {
              uVar47 = 0;
              fVar34 = 0.0;
              uVar48 = 0;
            }
            else {
              if (local_bc8 == 0) goto LAB_03586310;
              uVar45 = *(undefined4 *)(local_bc8 + 0x14);
              uVar47 = *(undefined4 *)(local_bc8 + 0x18);
              fVar34 = *(float *)(local_bc8 + 0x1c);
              uVar48 = *(undefined4 *)(local_bc8 + 0x20);
              if ((*(byte *)(local_bc8 + 0x39) & 1) != 0) {
                local_c4c = 0.0;
              }
            }
            uVar27 = *puVar4;
          }
          else {
            uVar45 = 0;
            uVar47 = 0;
            fVar34 = 0.0;
            uVar48 = 0;
          }
          if (0 < (int)uVar27) {
            if ((*(long *)(param_2 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(param_2 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= uVar27 - 1)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar25 = *(long *)(lVar25 + (ulong)(uVar27 - 1) * 0x178 + 0x30);
            if (((lVar25 == 0) || (*plVar1 == 0)) ||
               ((lVar30 = *(long *)(*plVar1 + 0x128), lVar30 == 0 ||
                (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_03586310;
            local_c00 = CONCAT44(local_c00._4_4_,*(uint *)(lVar25 + 0x28) | uVar6 << 0x10);
            uVar24 = FUN_0219f8b8(lVar30,&local_c00,&local_bc8,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            if ((uVar24 & 1) != 0) {
              if ((local_bc8 == 0) ||
                 (FUN_03571cb4(uVar45,uVar47,fVar34,uVar48,*(undefined4 *)(local_bc8 + 0x28),
                               *(undefined4 *)(local_bc8 + 0x2c),*(undefined4 *)(local_bc8 + 0x30),
                               *(undefined4 *)(local_bc8 + 0x34),0), local_bc8 == 0))
              goto LAB_03586310;
              if ((*(byte *)(local_bc8 + 0x39) & 1) != 0) {
                local_c4c = 0.0;
              }
            }
          }
          *(float *)(param_2 + 0x2fc) = fVar34;
        }
        local_c60 = 0.0;
        fVar36 = *(float *)(param_2 + 0x2b0);
        if (fVar36 != 0.0) {
          if ((*puVar5 == 0) || (lVar25 = *(long *)(*puVar5 + 0x20), lVar25 == 0))
          goto LAB_03586310;
          FUN_03776e6c(&local_c00,lVar25,0);
          uStack_bb8 = uStack_bf8;
          local_bc0 = local_c00;
          local_bb0 = (undefined4)local_bf0;
          fVar38 = (float)FUN_03776c94(&local_bc0,0);
          if ((*puVar5 == 0) || (lVar25 = *(long *)(*puVar5 + 0x20), lVar25 == 0))
          goto LAB_03586310;
          FUN_03776e6c(&local_c00,lVar25,0);
          uStack_bb8 = uStack_bf8;
          local_bc0 = local_c00;
          local_bb0 = (undefined4)local_bf0;
          fVar39 = (float)FUN_03776ca4(&local_bc0,0);
          local_c60 = (1.0 - *(float *)(param_2 + 0x2d4)) *
                      (fVar36 * 0.5 - fVar33 * (fVar38 * 0.5 + fVar39));
          *(float *)(param_2 + 0x640) = *(float *)(param_2 + 0x640) + local_c60;
        }
        iVar20 = *(int *)(param_2 + 0x644);
        fVar36 = 0.0;
        if (((cVar7 == '\0') && (fVar36 = 0.0, iVar20 == 0)) &&
           ((*(byte *)(param_2 + 0x25c) & 1) != 0)) {
          if (*plVar1 == 0) goto LAB_03586310;
          fVar36 = *(float *)(*plVar1 + 0x1b4);
        }
        lVar25 = *plVar2;
        if (lVar25 == 0) goto LAB_03586310;
        uVar6 = *puVar4;
        lVar30 = (long)(int)uVar6;
        if (*(uint *)(lVar25 + 0x18) <= uVar6) goto UnityEngine_LightProbesQuery__get_IsCreated;
        fVar38 = *(float *)(param_2 + 0x4d8);
        fVar39 = *(float *)(param_2 + 0x61c);
        fVar37 = fVar37 * fVar33;
        *(float *)(lVar25 + lVar30 * 0x178 + 0x14c) = (0.0 - fVar38) + fVar39;
        if (iVar20 == 0) {
          fVar37 = fVar37 / local_c58;
          fVar46 = (fVar46 * fVar33) / local_c58;
        }
        else {
          fVar46 = fVar46 * fVar33;
        }
        fVar37 = fVar39 + fVar37;
        if ((uVar21 == 0) || (uVar6 == *(uint *)(param_2 + 0x498))) {
          fVar46 = fVar39 + fVar46;
          fVar42 = fVar37;
          fVar41 = fVar46;
          if (fVar39 != 0.0) {
            fVar42 = (fVar37 - fVar39) / *(float *)(param_2 + 0x404);
            fVar41 = (fVar46 - fVar39) / *(float *)(param_2 + 0x404);
            if (fVar42 <= fVar37) {
              fVar42 = fVar37;
            }
            if (fVar46 <= fVar41) {
              fVar41 = fVar46;
            }
          }
          lVar25 = lVar25 + lVar30 * 0x178;
          fVar39 = fVar42;
          if (fVar42 <= *(float *)(param_2 + 0x4c8)) {
            fVar39 = *(float *)(param_2 + 0x4c8);
          }
          fVar43 = fVar41;
          if (*(float *)(param_2 + 0x4cc) <= fVar41) {
            fVar43 = *(float *)(param_2 + 0x4cc);
          }
          *(float *)(param_2 + 0x4cc) = fVar43;
          *(float *)(param_2 + 0x4c8) = fVar39;
          *(float *)(lVar25 + 0x154) = fVar42;
          *(float *)(lVar25 + 0x158) = fVar41;
          *(float *)(lVar25 + 0x148) = fVar37 - fVar38;
          *(float *)(param_2 + 0x4c0) = fVar37 - fVar38;
          *(float *)(lVar25 + 0x150) = fVar46 - fVar38;
          *(float *)(param_2 + 0x4c4) = fVar46 - fVar38;
          if ((*(int *)(param_2 + 0x4a8) == 0) || (*(char *)(param_2 + 0x33c) != '\0')) {
            *(float *)(param_2 + 0x4b8) = fVar39;
            if (*(long *)(param_2 + 0x100) == 0) goto LAB_03586310;
            fVar46 = *(float *)(param_2 + 0x4bc);
            fVar38 = (float)FUN_03776990(*(long *)(param_2 + 0x100) + 0x50,0);
            local_c58 = (fVar33 * fVar38) / local_c58;
            fVar38 = *(float *)(param_2 + 0x4d8);
            if (fVar46 <= local_c58) {
              fVar46 = local_c58;
            }
            *(float *)(param_2 + 0x4bc) = fVar46;
          }
        }
        else {
          fVar46 = *(float *)(param_2 + 0x4c8);
          lVar25 = lVar25 + lVar30 * 0x178;
          *(float *)(lVar25 + 0x154) = fVar46;
          fVar39 = *(float *)(param_2 + 0x4cc);
          fVar46 = fVar46 - fVar38;
          *(float *)(lVar25 + 0x148) = fVar46;
          *(float *)(lVar25 + 0x158) = fVar39;
          *(float *)(param_2 + 0x4c0) = fVar46;
          fVar39 = fVar39 - fVar38;
          *(float *)(lVar25 + 0x150) = fVar39;
          *(float *)(param_2 + 0x4c4) = fVar39;
        }
        if (fVar38 == 0.0) {
          if ((uVar21 == 0) || (*(int *)(param_2 + 0x494) == *(int *)(param_2 + 0x498))) {
            fVar46 = *(float *)(param_2 + 0x4b4);
            if (*(float *)(param_2 + 0x4b4) <= fVar37) {
              fVar46 = fVar37;
            }
            *(float *)(param_2 + 0x4b4) = fVar46;
            goto LAB_035857b0;
          }
          bVar18 = (*(byte *)(param_2 + 0x278) & 0x18) == 0;
          if (uVar23 != 9) goto LAB_03585804;
LAB_035857c4:
          bVar9 = true;
LAB_03585820:
          fVar38 = *(float *)(param_2 + 0x360);
          fVar39 = *(float *)(param_2 + 0x640);
          fVar46 = (param_1 - *(float *)(param_2 + 0x350)) - *(float *)(param_2 + 0x354);
          bVar15 = true;
          if ((fVar38 <= fVar46) && (bVar15 = false, !NAN(fVar38))) {
            bVar15 = fVar38 == -1.0;
          }
          if (!bVar15) {
            fVar46 = fVar38;
          }
          fVar38 = (float)FUN_03776cb4(&local_ba0,0);
          if (!bVar17) {
            fVar44 = fVar33;
          }
          fVar37 = 1.0;
          if (!bVar18) {
            fVar37 = DAT_00d38acc;
          }
          local_c64 = ABS(fVar39) + fVar44 * fVar38 * (1.0 - *(float *)(param_2 + 0x2d4));
          if ((local_c64 <= fVar37 * fVar46 || ((param_5 ^ 1) & 1) != 0) ||
             (*(int *)(param_2 + 0x494) == *(int *)(param_2 + 0x498))) {
            local_c78 = *(float *)(param_2 + 0x350);
            local_c7c = *(float *)(param_2 + 0x354);
            if (!bVar9) goto LAB_03585998;
            if (*plVar1 != 0) {
              memmove(&local_b80,(void *)(*plVar1 + 0x50),0x60);
              fVar44 = (float)FUN_03776a48(&local_b80,0);
              if (*plVar1 != 0) {
                fVar34 = *(float *)(param_2 + 0x640);
                fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*plVar1 + 0x1b9));
                fVar46 = fVar33 * fVar44 * fVar46;
                fVar44 = fVar46 * (float)(int)(fVar34 / fVar46);
                if (fVar44 <= fVar34) {
                  fVar44 = fVar34 + fVar46;
                }
                goto LAB_03585a9c;
              }
            }
          }
          else {
            uVar22 = FUN_0358c15c(param_2,auStack_428);
            lVar25 = *(long *)(param_2 + 0x488);
            if (lVar25 != 0) {
              uVar23 = *(uint *)(param_2 + 0x494);
              uVar21 = uVar23 - 1;
              if (*(uint *)(lVar25 + 0x18) <= uVar21)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              if ((!bVar16 && *(short *)(lVar25 + (long)(int)uVar21 * 0x178 + 0x20) == 0xad) &&
                 (*(int *)(param_2 + 0x2e0) == 0)) {
                bVar16 = false;
                local_b0 = CONCAT44(0x2d,uVar21);
                *puVar4 = uVar21;
                fVar44 = fVar33;
                uVar22 = uVar22 - 1;
                goto LAB_03586300;
              }
              if (*(uint *)(lVar25 + 0x18) <= uVar23)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              if (*(short *)(lVar25 + (long)(int)uVar23 * 0x178 + 0x20) == 0xad) {
                bVar16 = true;
                fVar44 = fVar33;
                goto LAB_03586300;
              }
              if ((local_c90 & param_4) != 0) {
                fVar44 = *(float *)(param_2 + 0x2d4);
                fVar34 = *(float *)(param_2 + 0x2d0) / 100.0;
                if ((fVar34 <= fVar44) || (*(int *)(param_2 + 0x248) <= *(int *)(param_2 + 0x244)))
                {
                  if ((*param_3 <= *(float *)(param_2 + 0x250)) ||
                     (*(int *)(param_2 + 0x248) <= *(int *)(param_2 + 0x244))) goto LAB_03586060;
                  *(float *)(param_2 + 0x23c) = *param_3;
                  fVar44 = (*param_3 - *(float *)(param_2 + 0x240)) * 0.5;
                  if (fVar44 <= DAT_00d38b84) {
                    fVar44 = DAT_00d38b84;
                  }
                  fVar44 = *param_3 - fVar44;
                  *param_3 = fVar44;
                  fVar40 = fVar44 * 20.0 + 0.5;
                  fVar44 = DAT_00d38e60;
                  if (fVar40 != INFINITY) {
                    fVar44 = (float)(int)fVar40 / 20.0;
                  }
                  if (fVar44 <= *(float *)(param_2 + 0x250)) {
                    fVar44 = *(float *)(param_2 + 0x250);
                  }
                  *param_3 = fVar44;
                }
                else {
                  fVar40 = local_c64;
                  if (0.0 < fVar44) {
                    fVar40 = local_c64 / (1.0 - fVar44);
                  }
                  fVar44 = fVar44 + (local_c64 - fVar37 * (fVar46 + DAT_00d38cc4)) / fVar40;
                  if (fVar34 <= fVar44) {
                    fVar44 = fVar34;
                  }
                  *(float *)(param_2 + 0x2d4) = fVar44;
                }
                goto LAB_035863e8;
              }
LAB_03586060:
              if (0.0 < *(float *)(param_2 + 0x4d8)) {
                fVar44 = *(float *)(param_2 + 0x4c8);
                fVar46 = *(float *)(param_2 + 0x4d0);
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                fVar44 = fVar44 - fVar46;
                if (((fVar12 < ABS(fVar44)) && (*(char *)(param_2 + 0x2c4) == '\0')) &&
                   (*(char *)(param_2 + 0x33c) == '\0')) {
                  *(float *)(param_2 + 0x4c4) = *(float *)(param_2 + 0x4c4) - fVar44;
                  *(float *)(param_2 + 0x4d8) = fVar44 + *(float *)(param_2 + 0x4d8);
                }
              }
              fVar34 = *(float *)(param_2 + 0x640);
              fVar46 = *(float *)(param_2 + 0x4cc) - *(float *)(param_2 + 0x4d8);
              fVar44 = *(float *)(param_2 + 0x4c4);
              if (fVar46 <= *(float *)(param_2 + 0x4c4)) {
                fVar44 = fVar46;
              }
              *(int *)(param_2 + 0x498) = *(int *)(param_2 + 0x494);
              *(float *)(param_2 + 0x4c4) = fVar44;
              *(undefined4 *)(param_2 + 0x4ac) = 0;
              if ((param_5 & 1) == 0) {
                fVar46 = (*(float *)(param_2 + 0x4c8) - *(float *)(param_2 + 0x4d8)) - fVar46;
                if (local_c88 <= fVar46) {
                  local_c88 = fVar46;
                }
              }
              else {
                local_c88 = *(float *)(param_2 + 0x4b8) - fVar44;
              }
              FUN_0358c4f0(param_2,auStack_7a0,uVar22,*(int *)(param_2 + 0x494) + -1);
              lVar25 = *(long *)(param_2 + 0x488);
              *(int *)(param_2 + 0x4a8) = *(int *)(param_2 + 0x4a8) + 1;
              if (lVar25 != 0) {
                if (*(uint *)(param_2 + 0x494) < *(uint *)(lVar25 + 0x18)) {
                  fVar44 = *(float *)(param_2 + 0x2c0);
                  fVar46 = *(float *)(lVar25 + (long)(int)*(uint *)(param_2 + 0x494) * 0x178 + 0x154
                                     );
                  bVar16 = fVar44 != DAT_00d38ba4;
                  if (bVar16) {
                    fVar36 = fVar35 * *(float *)(param_2 + 0x2b8);
                  }
                  else {
                    fVar36 = fVar46 + (0.0 - *(float *)(param_2 + 0x4cc)) +
                             fVar31 * (fVar32 + *(float *)(param_2 + 700));
                    fVar44 = fVar35 * *(float *)(param_2 + 0x2b8);
                  }
                  *(bool *)(param_2 + 0x2c4) = bVar16;
                  *(float *)(param_2 + 0x4d8) = *(float *)(param_2 + 0x4d8) + fVar44 + fVar36;
                  puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar25 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar25 = *(long *)puVar13;
                  }
                  bVar16 = false;
                  local_c54 = local_c54 + fVar34;
                  uVar29 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
                  *(float *)(param_2 + 0x640) = *(float *)(param_2 + 0x40c) + 0.0;
                  uVar29 = NEON_rev64(uVar29,4);
                  *(float *)(param_2 + 0x4d0) = fVar46;
                  *(undefined8 *)(param_2 + 0x4c8) = uVar29;
                  local_c90 = 1;
                  fVar44 = fVar33;
                  goto LAB_03586300;
                }
                goto UnityEngine_LightProbesQuery__get_IsCreated;
              }
            }
          }
          goto LAB_03586310;
        }
LAB_035857b0:
        bVar18 = (*(byte *)(param_2 + 0x278) & 0x18) == 0;
        if (uVar23 == 9) goto LAB_035857c4;
        if ((((uVar21 == 0) && (uVar23 != 3)) && (uVar23 != 0x200b)) && (uVar23 != 0xad)) {
UnityEngine_Display__Activate:
          bVar9 = false;
          goto LAB_03585820;
        }
LAB_03585804:
        if ((!(bool)(bVar16 | bVar17 ^ 1U)) || (*(int *)(param_2 + 0x644) == 1))
        goto UnityEngine_Display__Activate;
LAB_03585998:
        fVar44 = *(float *)(param_2 + 0x640);
        if (*(float *)(param_2 + 0x2b0) == 0.0) {
          fVar46 = (float)FUN_03776cb4(&local_ba0,0);
          if (*plVar1 == 0) goto LAB_03586310;
          fVar46 = (1.0 - *(float *)(param_2 + 0x2d4)) *
                   (*(float *)(param_2 + 0x2ac) +
                   fVar33 * (fVar34 + fVar46) +
                   fVar35 * (fVar36 + local_c4c + *(float *)(*plVar1 + 0x1ac)));
        }
        else {
          if (*plVar1 == 0) goto LAB_03586310;
          fVar46 = (1.0 - *(float *)(param_2 + 0x2d4)) *
                   (*(float *)(param_2 + 0x2ac) +
                   (*(float *)(param_2 + 0x2b0) - local_c60) +
                   fVar35 * (local_c4c + *(float *)(*plVar1 + 0x1ac)));
        }
        fVar44 = fVar44 + fVar46;
        *(float *)(param_2 + 0x640) = fVar44;
        if ((uVar23 == 0x200b) || (uVar21 != 0)) {
          fVar44 = fVar44 + fVar35 * *(float *)(param_2 + 0x2b4);
          *(float *)(param_2 + 0x640) = fVar44;
        }
        if (uVar23 == 0xd) {
          if (local_c5c <= local_c54 + fVar44) {
            local_c5c = local_c54 + fVar44;
          }
          local_c54 = 0.0;
          fVar44 = *(float *)(param_2 + 0x40c) + 0.0;
LAB_03585a9c:
          bVar18 = false;
          *(float *)(param_2 + 0x640) = fVar44;
LAB_03585aa4:
          if (*puVar4 == uVar8) goto LAB_03585b64;
        }
        else {
          bVar18 = uVar23 == 10;
          if (((0xb < uVar23) || ((1 << (ulong)(uVar23 & 0x1f) & 0xc08U) == 0)) &&
             (1 < uVar23 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
          if (0.0 < *(float *)(param_2 + 0x4d8)) {
            fVar44 = *(float *)(param_2 + 0x4c8);
            fVar46 = *(float *)(param_2 + 0x4d0);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar44 = fVar44 - fVar46;
            if (((fVar12 < ABS(fVar44)) && (*(char *)(param_2 + 0x2c4) == '\0')) &&
               (*(char *)(param_2 + 0x33c) == '\0')) {
              *(float *)(param_2 + 0x4c4) = *(float *)(param_2 + 0x4c4) - fVar44;
              *(float *)(param_2 + 0x4d8) = fVar44 + *(float *)(param_2 + 0x4d8);
            }
          }
          fVar44 = *(float *)(param_2 + 0x4cc) - *(float *)(param_2 + 0x4d8);
          local_c88 = *(float *)(param_2 + 0x4c4);
          if (fVar44 <= *(float *)(param_2 + 0x4c4)) {
            local_c88 = fVar44;
          }
          fVar46 = local_c7c + local_c78 + local_c54 + local_c64;
          fVar44 = local_c5c;
          if (local_c5c <= fVar46) {
            fVar44 = fVar46;
          }
          *(float *)(param_2 + 0x4c4) = local_c88;
          local_c54 = fVar44;
          if (*(uint *)(param_2 + 0x494) != uVar8) {
            local_c54 = 0.0;
            local_c5c = fVar44;
          }
          local_c88 = *(float *)(param_2 + 0x4b8) - local_c88;
          *(undefined1 *)(param_2 + 0x33c) = 0;
          if (bVar18) {
LAB_03585e8c:
            FUN_0358c4f0(param_2,auStack_7a0,uVar22);
            FUN_0358c4f0(param_2,auStack_428,uVar22,*(undefined4 *)(param_2 + 0x494));
            uVar21 = *(uint *)(param_2 + 0x494);
            lVar25 = *(long *)(param_2 + 0x488);
            iVar20 = uVar21 + 1;
            *(int *)(param_2 + 0x4a8) = *(int *)(param_2 + 0x4a8) + 1;
            *(int *)(param_2 + 0x498) = iVar20;
            if (lVar25 == 0) goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= uVar21)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            fVar44 = *(float *)(lVar25 + (long)(int)uVar21 * 0x178 + 0x154);
            if (*(float *)(param_2 + 0x2c0) == DAT_00d38ba4) {
              fVar46 = 0.0;
              if (!(bool)(uVar23 != 0x2029 & (bVar18 ^ 1U))) {
                fVar46 = *(float *)(param_2 + 0x2cc);
              }
              uVar28 = 0;
              fVar46 = fVar44 + (0.0 - *(float *)(param_2 + 0x4cc)) +
                       fVar31 * (fVar32 + *(float *)(param_2 + 700)) +
                       fVar35 * (*(float *)(param_2 + 0x2b8) + fVar46) + *(float *)(param_2 + 0x4d8)
              ;
            }
            else {
              fVar46 = 0.0;
              if (!(bool)(uVar23 != 0x2029 & (bVar18 ^ 1U))) {
                fVar46 = *(float *)(param_2 + 0x2cc);
              }
              uVar28 = 1;
              fVar46 = *(float *)(param_2 + 0x4d8) +
                       *(float *)(param_2 + 0x2c0) + fVar35 * (*(float *)(param_2 + 0x2b8) + fVar46)
              ;
            }
            *(float *)(param_2 + 0x4d8) = fVar46;
            *(undefined1 *)(param_2 + 0x2c4) = uVar28;
            puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar25 = *(long *)puVar13;
              iVar20 = *puVar4 + 1;
            }
            uVar29 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
            *(float *)(param_2 + 0x640) =
                 *(float *)(param_2 + 0x408) + 0.0 + *(float *)(param_2 + 0x40c);
            uVar29 = NEON_rev64(uVar29,4);
            *(float *)(param_2 + 0x4d0) = fVar44;
            *(undefined8 *)(param_2 + 0x4c8) = uVar29;
            *(int *)(param_2 + 0x494) = iVar20;
            fVar44 = fVar33;
            goto LAB_03586300;
          }
          if ((int)uVar23 < 0x2028) {
            if (uVar23 == 3) {
              if (*(long *)(param_2 + 0x478) != 0) {
                uVar22 = *(uint *)(*(long *)(param_2 + 0x478) + 0x18);
                uVar23 = 3;
                goto LAB_03585ab4;
              }
              goto LAB_03586310;
            }
            if ((uVar23 == 0xb) || (uVar23 == 0x2d)) goto LAB_03585e8c;
          }
          else if (uVar23 - 0x2028 < 2) goto LAB_03585e8c;
        }
LAB_03585ab4:
        if (((param_5 & 1) != 0) || ((*(uint *)(param_2 + 0x2e0) | 2) == 3)) {
          if ((uVar21 == 0) && (((uVar23 != 0x2d && (uVar23 != 0x200b)) && (uVar23 != 0xad)))) {
            if (*(char *)(param_2 + 0x2da) == '\0') {
LAB_03585d14:
              if (((((0x2bfd < uVar23 - 0xac01) && (0xfd < uVar23 - 0x1101)) &&
                   (0x1d < uVar23 - 0xa961)) || (uVar24 = FUN_03597a54(0), (uVar24 & 1) != 0)) &&
                 ((((0xed < uVar23 - 0xff01 && (0x1d < uVar23 - 0xfe31)) &&
                   (0x717d < uVar23 - 0x2e81)) && (0x1fd < uVar23 - 0xf901)))) goto LAB_03585adc;
              lVar25 = FUN_035978e8(0);
              if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_03586310;
              local_c00 = CONCAT44(local_c00._4_4_,uVar23);
              uVar23 = FUN_0219c130(*(long *)(lVar25 + 0x10),&local_c00,
                                    *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if ((int)uVar8 <= (int)*puVar4) {
                if (local_c90 != 0 || ((uVar23 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
                  FUN_0358c4f0(param_2,auStack_428,uVar22,*(undefined4 *)(param_2 + 0x494));
                }
LAB_035862c4:
                local_c90 = 0;
                bVar10 = true;
                goto LAB_035862f4;
              }
              lVar25 = FUN_035978e8(0);
              if ((lVar25 == 0) || (lVar30 = *plVar2, lVar30 == 0)) goto LAB_03586310;
              if (*(uint *)(lVar30 + 0x18) <= *puVar4 + 1)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              if (*(long *)(lVar25 + 0x18) == 0) goto LAB_03586310;
              local_c00 = CONCAT44(local_c00._4_4_,
                                   (uint)*(ushort *)
                                          (lVar30 + (long)(int)(*puVar4 + 1) * 0x178 + 0x20));
              uVar24 = FUN_0219c130(*(long *)(lVar25 + 0x18),&local_c00,
                                    *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if (local_c90 == 0 && ((uVar23 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
              if ((uVar24 & 1) == 0) goto LAB_035862b0;
              if (local_c90 == 0) goto LAB_035862c4;
              if (uVar21 != 0) {
                FUN_0358c4f0(param_2,local_b18,uVar22,*(undefined4 *)(param_2 + 0x494));
              }
              FUN_0358c4f0(param_2,auStack_428,uVar22,*(undefined4 *)(param_2 + 0x494));
              bVar10 = true;
LAB_03585ccc:
              local_c90 = 1;
            }
            else {
LAB_03585adc:
              if (bVar10) {
                lVar25 = FUN_035978e8(0);
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_03586310;
                local_c00 = CONCAT44(local_c00._4_4_,uVar23);
                uVar24 = FUN_0219c130(*(long *)(lVar25 + 0x10),&local_c00,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                if ((uVar24 & 1) == 0) {
                  FUN_0358c4f0(param_2,auStack_428,uVar22,*(undefined4 *)(param_2 + 0x494));
                }
                bVar10 = false;
              }
              else {
                if (local_c90 != 0) {
                  if ((!bVar16 && bVar17) || (uVar21 != 0)) {
                    FUN_0358c4f0(param_2,local_b18,uVar22,*(undefined4 *)(param_2 + 0x494));
                  }
                  FUN_0358c4f0(param_2,auStack_428,uVar22,*(undefined4 *)(param_2 + 0x494));
                  bVar10 = false;
                  goto LAB_03585ccc;
                }
                bVar10 = false;
                local_c90 = 0;
              }
            }
          }
          else {
            if (*(char *)(param_2 + 0x2da) != '\0') goto LAB_03585adc;
            if (((uVar23 - 0x2007 < 0x29) &&
                ((1L << ((ulong)(uVar23 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
               ((uVar23 == 0xa0 || (uVar23 == 0x2060)))) goto LAB_03585d14;
            FUN_0358c4f0(param_2,auStack_428,uVar22);
            bVar10 = false;
            local_c90 = 0;
            local_b18[0] = 0xffffffff;
          }
        }
LAB_035862f4:
        *puVar4 = *puVar4 + 1;
        fVar44 = fVar33;
LAB_03586300:
        lVar25 = *(long *)(param_2 + 0x478);
        uVar22 = uVar22 + 1;
        if (lVar25 == 0) goto LAB_03586310;
        goto LAB_035849d0;
      }
      goto LAB_0358461c;
    }
  }
  puVar14 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  puVar13 = PTR_DAT_03cbe438;
  local_b1c = FUN_036d3364(param_2,0);
  uVar29 = FUN_0276793c(&local_b1c,0);
  uVar29 = FUN_025b1328(*(undefined8 *)puVar14,uVar29,0);
  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar13);
  }
  FUN_036772fc(uVar29,0);
LAB_0358461c:
  *(undefined1 *)(param_2 + 0x24c) = 1;
  if (DAT_0411f1e3 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbeb70);
    DAT_0411f1e3 = '\x01';
  }
LAB_03584640:
  return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
}


