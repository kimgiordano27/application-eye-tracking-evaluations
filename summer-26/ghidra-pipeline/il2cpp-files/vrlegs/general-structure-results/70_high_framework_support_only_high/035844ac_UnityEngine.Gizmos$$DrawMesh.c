/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawMesh
ENTRY_POINT: 035844ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_19
*/


float UnityEngine_Gizmos__DrawMesh(ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  undefined1 uVar29;
  long unaff_x19;
  float *unaff_x22;
  uint unaff_w24;
  uint unaff_w26;
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
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float unaff_s8;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000074;
  ulong in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  float fStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  uint in_stack_00000c10;
  uint in_stack_00000c14;
  
  if ((param_1 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03586310;
    lVar25 = FUN_03568ac0(*(long *)(unaff_x19 + 0xf8),0);
    if (lVar25 != 0) {
      lVar25 = *(long *)(unaff_x19 + 0x478);
      if ((lVar25 != 0) && (*(long *)(lVar25 + 0x18) != 0)) {
        if ((int)*(long *)(lVar25 + 0x18) == 0) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(int *)(lVar25 + 0x20) == 0) goto LAB_0358461c;
        plVar1 = (long *)(unaff_x19 + 0x100);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0xf8);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
        *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x110);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x118);
        *(undefined4 *)(unaff_x19 + 0x120) = 0;
        puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000000f0 = 0;
        in_stack_000000d8 = 0;
        _uStack00000000000000d0 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        in_stack_000000c8 = 0;
        _fStack00000000000000c0 = 0;
        FUN_03557f30(*(undefined4 *)(unaff_x19 + 0x618),&stack0x000000c0,0,
                     *(undefined8 *)(unaff_x19 + 0x100),0,*(undefined8 *)(unaff_x19 + 0x118),0);
        in_stack_00000088 = in_stack_000000c8;
        in_stack_00000080 = _fStack00000000000000c0;
        in_stack_00000098 = in_stack_000000d8;
        in_stack_00000090 = _uStack00000000000000d0;
        in_stack_000000a8 = in_stack_000000e8;
        in_stack_000000a0 = in_stack_000000e0;
        in_stack_000000b0 = in_stack_000000f0;
        FUN_0209aa94(*(long *)(*(long *)puVar14 + 0xb8) + 0x10,&stack0x00000080,
                     *(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
        iVar21 = *(int *)(unaff_x19 + 0x490);
        plVar2 = (long *)(unaff_x19 + 0x488);
        if ((*(long *)(unaff_x19 + 0x488) == 0) ||
           (*(int *)(*(long *)(unaff_x19 + 0x488) + 0x18) < iVar21)) {
          if (iVar21 < 0x401) {
            iVar20 = FUN_036c1d60(iVar21,0);
          }
          else {
            iVar20 = iVar21 + 0x100;
          }
          lVar25 = FUN_01ab6a94(*(undefined8 *)
                                 Crosstales_BWF_Manager_PunctuationManager_<>c__DisplayClass28_0_TypeInfo
                                ,iVar20);
          *plVar2 = lVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        }
        if (*(long *)(unaff_x19 + 0xf8) == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar45 = *unaff_x22;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
        iVar20 = FUN_03776950(&stack0x00000140,0);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
        fVar31 = (float)FUN_03776960(&stack0x00000140,0);
        fVar48 = *unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x404) = 0x3f800000;
        fVar32 = *unaff_x22;
        *(float *)(unaff_x19 + 0x1e8) = fVar32;
        puVar15 = OVRPlugin_OVRP_1_29_0_TypeInfo;
        fVar40 = DAT_00d389a8;
        fVar35 = DAT_00d389a8;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar35 = 1.0;
        }
        fStack00000000000000c0 = fVar32;
        FUN_0209aa94(unaff_x19 + 0x1f0,&stack0x000000c0,
                     *(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
        *(undefined4 *)(unaff_x19 + 0x25c) = *(undefined4 *)(unaff_x19 + 600);
        *(undefined4 *)(unaff_x19 + 0x278) = *(undefined4 *)(unaff_x19 + 0x26c);
        _fStack00000000000000c0 =
             CONCAT44(uStack00000000000000c4,*(undefined4 *)(unaff_x19 + 0x26c));
        FUN_0209aa94(unaff_x19 + 0x280,&stack0x000000c0,
                     *(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
        *(undefined4 *)(unaff_x19 + 0x61c) = 0;
        FUN_0209aa1c(unaff_x19 + 0x620,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
        *(undefined4 *)(unaff_x19 + 0x4d8) = 0;
        *(undefined4 *)(unaff_x19 + 0x2c0) = 0xc6fffe00;
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar32 = (float)FUN_03776970(&stack0x00000140,0);
        if (*plVar1 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*plVar1 + 0x50),0x60);
        fVar33 = (float)FUN_03776980(&stack0x00000140,0);
        if (*plVar1 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*plVar1 + 0x50),0x60);
        fVar34 = (float)FUN_037769c0(&stack0x00000140,0);
        *(undefined8 *)(unaff_x19 + 0x2ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x640) = 0;
        *(undefined8 *)(unaff_x19 + 0x408) = 0;
        _fStack00000000000000c0 = _fStack00000000000000c0 & 0xffffffff00000000;
        FUN_0209aa94(unaff_x19 + 0x410,&stack0x000000c0,*(undefined8 *)puVar15);
        *(undefined1 *)(unaff_x19 + 0x430) = 0;
        *(undefined8 *)(unaff_x19 + 0x494) = 0;
        lVar25 = *(long *)puVar14;
        uStack0000000000000034 = unaff_w26;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar14;
        }
        uVar41 = NEON_rev64(*(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8),4);
        *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
        *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
        *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
        *(undefined8 *)(unaff_x19 + 0x350) = 0;
        *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
        *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
        *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
        *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar41;
        *(undefined1 *)(unaff_x19 + 0x2da) = 0;
        FUN_0359f73c(&stack0x00000c10,0xffffffff,0,0);
        memset(&stack0x00000898,0,0x378);
        memset(&stack0x00000520,0,0x378);
        memset(&stack0x000001a8,0,0x378);
        lVar25 = *(long *)(unaff_x19 + 0x478);
        *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
        fVar13 = DAT_00d38d28;
        fVar12 = DAT_00d38938;
        if (lVar25 == 0) goto LAB_03586310;
        plVar3 = (long *)(unaff_x19 + 0x698);
        uVar9 = iVar21 - 1;
        uVar6 = uStack0000000000000034 ^ 1;
        fStack0000000000000064 = 0.0;
        fStack0000000000000048 = 0.0;
        fStack0000000000000044 = 0.0;
        fVar32 = fVar32 - (fVar33 - fVar34);
        fStack000000000000006c = 0.0;
        fStack0000000000000038 = 0.0;
        fVar33 = unaff_s8 + DAT_00d3879c;
        fStack000000000000005c = 0.0;
        fVar31 = (fVar45 / (float)iVar20) * fVar31 * fVar35;
        bVar11 = false;
        bVar17 = false;
        fVar35 = fVar35 * fVar48 * DAT_00d38d28;
        uVar23 = 0;
        puVar4 = (uint *)(unaff_x19 + 0x494);
        puVar5 = (ulong *)(unaff_x19 + 0x648);
        uStack0000000000000030 = 1;
        fVar45 = fVar31;
LAB_035849d0:
        if ((int)*(uint *)(lVar25 + 0x18) <= (int)uVar23) {
LAB_03586314:
          if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
               ((unaff_w24 & 1) == 0)) ||
              (fVar45 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar45)) ||
             (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
            fVar45 = *(float *)(unaff_x19 + 0x340);
            fVar40 = *(float *)(unaff_x19 + 0x348);
            if (fVar45 <= 0.0) {
              fVar45 = 0.0;
            }
            if (fVar40 <= 0.0) {
              fVar40 = 0.0;
            }
            *(undefined1 *)(unaff_x19 + 0x24c) = 1;
            fVar40 = (fStack000000000000006c + fVar45 + fVar40) * 100.0 + 1.0;
            fVar45 = DAT_00d387f8;
            if (fVar40 != INFINITY) {
              fVar45 = (float)(int)fVar40 / 100.0;
            }
            *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
            return fVar45;
          }
          if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
            fVar45 = *unaff_x22;
          }
          *(float *)(unaff_x19 + 0x240) = fVar45;
          fVar45 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          fVar45 = *unaff_x22 + fVar45;
          *unaff_x22 = fVar45;
          fVar40 = fVar45 * 20.0 + 0.5;
          fVar45 = DAT_00d38e60;
          if (fVar40 != INFINITY) {
            fVar45 = (float)(int)fVar40 / 20.0;
          }
          if (*(float *)(unaff_x19 + 0x254) <= fVar45) {
            fVar45 = *(float *)(unaff_x19 + 0x254);
          }
          *unaff_x22 = fVar45;
LAB_035863e8:
          if (DAT_0411f1e3 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbeb70);
            DAT_0411f1e3 = '\x01';
          }
          goto LAB_03584640;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar23) goto UnityEngine_LightProbesQuery__get_IsCreated;
        uVar24 = *(uint *)(lVar25 + (long)(int)uVar23 * 0xc + 0x20);
        if (uVar24 == 0) goto LAB_03586314;
        if ((uVar24 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
          *(undefined1 *)(unaff_x19 + 0x431) = 1;
          *(undefined4 *)(unaff_x19 + 0x644) = 0;
          uVar26 = FUN_03586568();
          if (((uVar26 & 1) == 0) ||
             (uVar23 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
          goto LAB_03584a74;
          goto LAB_03586300;
        }
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar25 + 0x18) <= *puVar4) goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar25 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar25 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar25 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
LAB_03584a74:
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
        goto LAB_03586310;
        uVar22 = *puVar4;
        if (*(uint *)(lVar25 + 0x18) <= uVar22) goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar30 = (long)(int)uVar22;
        cVar8 = *(char *)(lVar25 + lVar30 * 0x178 + 0x5c);
        *(undefined1 *)(unaff_x19 + 0x431) = 0;
        uVar47 = *(undefined4 *)(unaff_x19 + 0x120);
        if (in_stack_00000c10 == uVar22) {
          *(undefined4 *)(unaff_x19 + 0x644) = 0;
          if (in_stack_00000c14 == 0x2026) {
            lVar25 = *plVar2;
            if (lVar25 != 0) {
              if (*(uint *)(lVar25 + 0x18) <= uVar22)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              *(undefined8 *)(lVar25 + lVar30 * 0x178 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar25 = *plVar2;
              if (lVar25 != 0) {
                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                *(undefined4 *)(lVar25 + 0x2c) = 0;
                *(undefined8 *)(lVar25 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar25 = *(long *)(unaff_x19 + 0x488);
                if (lVar25 != 0) {
                  if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  *(undefined8 *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                       *(undefined8 *)(unaff_x19 + 0x660);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar25 = *plVar2;
                  if (lVar25 != 0) {
                    uVar22 = *puVar4;
                    if (uVar22 < *(uint *)(lVar25 + 0x18)) {
                      bVar18 = true;
                      in_stack_00000c10 = uVar22 + 1;
                      *(undefined4 *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x58) =
                           *(undefined4 *)(unaff_x19 + 0x668);
                      uVar24 = 0x2026;
                      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                      in_stack_00000c14 = 3;
                      goto LAB_03584c20;
                    }
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                  }
                }
              }
            }
            goto LAB_03586310;
          }
          if (in_stack_00000c14 != 3) {
            bVar18 = true;
            uVar24 = in_stack_00000c14;
            goto LAB_03584c20;
          }
          lVar25 = *plVar2;
          if (((lVar25 == 0) || (*plVar1 == 0)) || (lVar27 = FUN_03568ac0(*plVar1,0), lVar27 == 0))
          goto LAB_03586310;
          FUN_0219b634(lVar27,&stack0x00000c1c,&stack0x000000c0,
                       *(undefined8 *)OVRPlugin_Hand_TypeInfo);
          if (*(uint *)(lVar25 + 0x18) <= uVar22) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *(ulong *)(lVar25 + lVar30 * 0x178 + 0x30) = _fStack00000000000000c0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          bVar18 = true;
          uVar24 = 3;
          *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
        }
        else {
          bVar18 = false;
LAB_03584c20:
          if ((uVar24 != 3) && ((int)uVar22 < *(int *)(unaff_x19 + 0x324))) {
            lVar25 = *plVar2;
            if (lVar25 != 0) {
              if (uVar22 < *(uint *)(lVar25 + 0x18)) {
                lVar25 = lVar25 + (long)(int)uVar22 * 0x178;
                *(undefined1 *)(lVar25 + 0x194) = 0;
                *(undefined2 *)(lVar25 + 0x20) = 0x200b;
                *(undefined4 *)(lVar25 + 100) = 0;
                *puVar4 = uVar22 + 1;
                goto LAB_03586300;
              }
              goto UnityEngine_LightProbesQuery__get_IsCreated;
            }
            goto LAB_03586310;
          }
        }
        iVar21 = *(int *)(unaff_x19 + 0x644);
        if (iVar21 == 0) {
          uVar22 = *(uint *)(unaff_x19 + 0x25c);
          if ((uVar22 >> 4 & 1) == 0) {
            if ((uVar22 >> 3 & 1) == 0) {
              fStack0000000000000068 = 1.0;
              if ((uVar22 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar26 = FUN_026b812c(uVar24,0);
                fStack0000000000000068 = 1.0;
                if ((uVar26 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar24 = FUN_026b8410(uVar24,0);
                  fStack0000000000000068 = fVar12;
                  goto LAB_03584f98;
                }
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar26 = FUN_026b8070(uVar24,0);
              fStack0000000000000068 = 1.0;
              if ((uVar26 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar24 = FUN_026b8594(uVar24,0);
                goto LAB_03584f98;
              }
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_026b812c(uVar24,0);
            fStack0000000000000068 = 1.0;
            if ((uVar26 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar24 = FUN_026b8410(uVar24,0);
LAB_03584f98:
              uVar24 = uVar24 & 0xffff;
            }
          }
          iVar21 = *(int *)(unaff_x19 + 0x644);
          if (iVar21 != 0) goto LAB_03584c80;
LAB_03584fa4:
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
          goto LAB_03586310;
          if (*(uint *)(lVar25 + 0x18) <= *puVar4) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *puVar5 = *(ulong *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x30);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5);
          if (*puVar5 == 0) goto LAB_03586300;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
          goto LAB_03586310;
          uVar7 = *puVar4;
          uVar22 = *(uint *)(lVar25 + 0x18);
          if (uVar22 <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *(undefined4 *)(unaff_x19 + 0x120) =
               *(undefined4 *)(lVar25 + (long)(int)uVar7 * 0x178 + 0x58);
          if (bVar18) {
            lVar30 = *(long *)(unaff_x19 + 0x478);
            if (lVar30 == 0) goto LAB_03586310;
            if (*(uint *)(lVar30 + 0x18) <= uVar23)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            if ((*(int *)(lVar30 + (long)(int)uVar23 * 0xc + 0x20) != 10) ||
               (uVar7 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
            if (uVar22 <= uVar7 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
            if (*plVar1 == 0) goto LAB_03586310;
            fVar45 = *(float *)(lVar25 + (long)(int)(uVar7 - 1) * 0x178 + 0x60);
            iVar21 = FUN_03776950(*plVar1 + 0x50,0);
            lVar25 = *plVar1;
          }
          else {
LAB_03585044:
            if (*plVar1 == 0) goto LAB_03586310;
            fVar45 = *(float *)(unaff_x19 + 0x1e8);
            iVar21 = FUN_03776950(*plVar1 + 0x50,0);
            lVar25 = *(long *)(unaff_x19 + 0x100);
          }
          if (lVar25 == 0) goto LAB_03586310;
          fVar46 = (float)FUN_03776960(lVar25 + 0x50,0);
          fVar34 = fVar40;
          if (*(char *)(unaff_x19 + 0x305) != '\0') {
            fVar34 = 1.0;
          }
          fVar48 = 0.0;
          fVar37 = 0.0;
          if (!(bool)(bVar18 & uVar24 == 0x2026)) {
            if (*plVar1 == 0) goto LAB_03586310;
            fVar37 = (float)FUN_03776980(*plVar1 + 0x50,0);
            if (*plVar1 == 0) goto LAB_03586310;
            fVar48 = (float)FUN_037769c0(*plVar1 + 0x50,0);
          }
          if ((*puVar5 == 0) || (lVar25 = *(long *)(unaff_x19 + 0x488), lVar25 == 0))
          goto LAB_03586310;
          uVar22 = *(uint *)(unaff_x19 + 0x494);
          if (*(uint *)(lVar25 + 0x18) <= uVar22) goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar45 = ((fStack0000000000000068 * fVar45) / (float)iVar21) * fVar46 * fVar34 *
                   *(float *)(unaff_x19 + 0x404) * *(float *)(*puVar5 + 0x2c);
          *(undefined4 *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x2c) = 0;
LAB_035852d0:
          bVar18 = uVar24 == 0xad;
          fVar34 = 0.0;
          if (!bVar18 && uVar24 != 3) {
            fVar34 = fVar45;
          }
        }
        else {
          fStack0000000000000068 = 1.0;
          if (iVar21 == 0) goto LAB_03584fa4;
LAB_03584c80:
          if (iVar21 == 1) {
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= *puVar4)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            *(undefined8 *)(unaff_x19 + 0x698) =
                 *(undefined8 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x40);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3);
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= *puVar4)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            *(undefined4 *)(unaff_x19 + 0x6a4) =
                 *(undefined4 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x48);
            if ((*(long *)(unaff_x19 + 0x698) == 0) ||
               (lVar25 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
               lVar25 == 0)) goto LAB_03586310;
            FUN_02215a88(lVar25,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
            uVar26 = _fStack00000000000000c0;
            if (_fStack00000000000000c0 == 0) goto LAB_03586300;
            if (uVar24 == 0x3c) {
              uVar24 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
            }
            if (*plVar3 == 0) goto LAB_03586310;
            memmove(&stack0x00000140,(void *)(*plVar3 + 0x48),0x60);
            iVar21 = FUN_03776950(&stack0x00000140,0);
            fVar45 = *(float *)(unaff_x19 + 0x1e8);
            if (iVar21 < 1) {
              if (*plVar1 == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*plVar1 + 0x50),0x60);
              iVar21 = FUN_03776950(&stack0x00000140,0);
              if (*plVar1 == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*plVar1 + 0x50),0x60);
              fVar34 = (float)FUN_03776960(&stack0x00000140,0);
              fVar48 = fVar40;
              if (*(char *)(unaff_x19 + 0x305) != '\0') {
                fVar48 = 1.0;
              }
              if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
              fVar46 = (float)FUN_03776980(&stack0x00000140,0);
              if (*(long *)(uVar26 + 0x20) == 0) goto LAB_03586310;
              FUN_03776e6c(&stack0x000000c0,*(long *)(uVar26 + 0x20),0);
              in_stack_00000108 = in_stack_000000c8;
              in_stack_00000100 = _fStack00000000000000c0;
              in_stack_00000110 = uStack00000000000000d0;
              fVar36 = (float)FUN_03776c9c(&stack0x00000100,0);
              if (*(long *)(uVar26 + 0x20) == 0) goto LAB_03586310;
              fVar39 = *(float *)(uVar26 + 0x2c);
              fVar38 = (float)FUN_03776ea8(*(long *)(uVar26 + 0x20),0);
              if (*plVar1 == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*plVar1 + 0x50),0x60);
              fVar37 = (float)FUN_03776980(&stack0x00000140,0);
              if (*plVar1 == 0) goto LAB_03586310;
              fVar48 = (fVar45 / (float)iVar21) * fVar34 * fVar48;
              fVar45 = fVar48 * (fVar46 / fVar36) * fVar39 * fVar38;
              fVar48 = fVar48 / fVar45;
              fVar37 = fVar48 * fVar37;
              memmove(&stack0x00000140,(void *)(*plVar1 + 0x50),0x60);
              fVar34 = (float)FUN_037769c0(&stack0x00000140,0);
              fVar48 = fVar48 * fVar34;
            }
            else {
              if (*plVar3 == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*plVar3 + 0x48),0x60);
              iVar21 = FUN_03776950(&stack0x00000140,0);
              if (*plVar3 == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*plVar3 + 0x48),0x60);
              fVar48 = (float)FUN_03776960(&stack0x00000140,0);
              if (*(long *)(uVar26 + 0x20) == 0) goto LAB_03586310;
              fVar46 = *(float *)(uVar26 + 0x2c);
              fVar34 = fVar40;
              if (*(char *)(unaff_x19 + 0x305) != '\0') {
                fVar34 = 1.0;
              }
              fVar36 = (float)FUN_03776ea8(*(long *)(uVar26 + 0x20),0);
              if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
              fVar37 = (float)FUN_03776980(&stack0x00000140,0);
              if (*plVar3 == 0) goto LAB_03586310;
              fVar45 = (fVar45 / (float)iVar21) * fVar48 * fVar34 * fVar46 * fVar36;
              memmove(&stack0x00000140,(void *)(*plVar3 + 0x48),0x60);
              fVar48 = (float)FUN_037769c0(&stack0x00000140,0);
            }
            *puVar5 = uVar26;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar26);
            lVar25 = *plVar2;
            if (lVar25 != 0) {
              uVar22 = *puVar4;
              if (uVar22 < *(uint *)(lVar25 + 0x18)) {
                lVar30 = lVar25 + (long)(int)uVar22 * 0x178;
                *(undefined4 *)(lVar30 + 0x2c) = 1;
                *(float *)(lVar30 + 0x160) = fVar45;
                *(undefined4 *)(unaff_x19 + 0x120) = uVar47;
                goto LAB_035852d0;
              }
              goto UnityEngine_LightProbesQuery__get_IsCreated;
            }
            goto LAB_03586310;
          }
          bVar18 = uVar24 == 0xad;
          lVar25 = *plVar2;
          fVar37 = 0.0;
          fVar34 = 0.0;
          if (!bVar18 && uVar24 != 3) {
            fVar34 = fVar45;
          }
          if (lVar25 == 0) goto LAB_03586310;
          uVar22 = *puVar4;
          fVar48 = 0.0;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar22) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(short *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x20) = (short)uVar24;
        if ((*puVar5 == 0) || (lVar25 = *(long *)(*puVar5 + 0x20), lVar25 == 0)) goto LAB_03586310;
        FUN_03776e6c(&stack0x000000c0,lVar25,0);
        in_stack_00000128 = in_stack_000000c8;
        in_stack_00000120 = _fStack00000000000000c0;
        in_stack_00000130 = uStack00000000000000d0;
        if ((int)uVar24 < 0x10000) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_026b63d8(uVar24,0);
          uVar22 = uVar22 & 1;
        }
        else {
          uVar22 = 0;
        }
        fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
        *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
        if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
          fVar46 = 0.0;
        }
        else {
          if (*puVar5 == 0) goto LAB_03586310;
          uVar28 = *puVar4;
          uVar7 = *(uint *)(*puVar5 + 0x28);
          if ((int)uVar28 < (int)uVar9) {
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= uVar28 + 1)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar25 = *(long *)(lVar25 + (long)(int)(uVar28 + 1) * 0x178 + 0x30);
            if ((((lVar25 == 0) || (*plVar1 == 0)) ||
                (lVar30 = *(long *)(*plVar1 + 0x128), lVar30 == 0)) ||
               (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_03586310;
            _fStack00000000000000c0 =
                 CONCAT44(uStack00000000000000c4,uVar7 | *(int *)(lVar25 + 0x28) << 0x10);
            uVar26 = FUN_0219f8b8(lVar30,&stack0x000000c0,&stack0x000000f8,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            uVar47 = 0;
            if ((uVar26 & 1) == 0) {
              uVar49 = 0;
              fVar46 = 0.0;
              uVar50 = 0;
            }
            else {
              if (in_stack_000000f8 == 0) goto LAB_03586310;
              uVar47 = *(undefined4 *)(in_stack_000000f8 + 0x14);
              uVar49 = *(undefined4 *)(in_stack_000000f8 + 0x18);
              fVar46 = *(float *)(in_stack_000000f8 + 0x1c);
              uVar50 = *(undefined4 *)(in_stack_000000f8 + 0x20);
              if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
                fStack0000000000000074 = 0.0;
              }
            }
            uVar28 = *puVar4;
          }
          else {
            uVar47 = 0;
            uVar49 = 0;
            fVar46 = 0.0;
            uVar50 = 0;
          }
          if (0 < (int)uVar28) {
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar25 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= uVar28 - 1)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar25 = *(long *)(lVar25 + (ulong)(uVar28 - 1) * 0x178 + 0x30);
            if (((lVar25 == 0) || (*plVar1 == 0)) ||
               ((lVar30 = *(long *)(*plVar1 + 0x128), lVar30 == 0 ||
                (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_03586310;
            _fStack00000000000000c0 =
                 CONCAT44(uStack00000000000000c4,*(uint *)(lVar25 + 0x28) | uVar7 << 0x10);
            uVar26 = FUN_0219f8b8(lVar30,&stack0x000000c0,&stack0x000000f8,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
            if ((uVar26 & 1) != 0) {
              if ((in_stack_000000f8 == 0) ||
                 (FUN_03571cb4(uVar47,uVar49,fVar46,uVar50,*(undefined4 *)(in_stack_000000f8 + 0x28)
                               ,*(undefined4 *)(in_stack_000000f8 + 0x2c),
                               *(undefined4 *)(in_stack_000000f8 + 0x30),
                               *(undefined4 *)(in_stack_000000f8 + 0x34),0), in_stack_000000f8 == 0)
                 ) goto LAB_03586310;
              if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
                fStack0000000000000074 = 0.0;
              }
            }
          }
          *(float *)(unaff_x19 + 0x2fc) = fVar46;
        }
        fStack0000000000000060 = 0.0;
        fVar36 = *(float *)(unaff_x19 + 0x2b0);
        if (fVar36 != 0.0) {
          if ((*puVar5 == 0) || (lVar25 = *(long *)(*puVar5 + 0x20), lVar25 == 0))
          goto LAB_03586310;
          FUN_03776e6c(&stack0x000000c0,lVar25,0);
          in_stack_00000108 = in_stack_000000c8;
          in_stack_00000100 = _fStack00000000000000c0;
          in_stack_00000110 = uStack00000000000000d0;
          fVar38 = (float)FUN_03776c94(&stack0x00000100,0);
          if ((*puVar5 == 0) || (lVar25 = *(long *)(*puVar5 + 0x20), lVar25 == 0))
          goto LAB_03586310;
          FUN_03776e6c(&stack0x000000c0,lVar25,0);
          in_stack_00000108 = in_stack_000000c8;
          in_stack_00000100 = _fStack00000000000000c0;
          in_stack_00000110 = uStack00000000000000d0;
          fVar39 = (float)FUN_03776ca4(&stack0x00000100,0);
          fStack0000000000000060 =
               (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (fVar36 * 0.5 - fVar34 * (fVar38 * 0.5 + fVar39));
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
        }
        iVar21 = *(int *)(unaff_x19 + 0x644);
        fVar36 = 0.0;
        if (((cVar8 == '\0') && (fVar36 = 0.0, iVar21 == 0)) &&
           ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
          if (*plVar1 == 0) goto LAB_03586310;
          fVar36 = *(float *)(*plVar1 + 0x1b4);
        }
        lVar25 = *plVar2;
        if (lVar25 == 0) goto LAB_03586310;
        uVar7 = *puVar4;
        lVar30 = (long)(int)uVar7;
        if (*(uint *)(lVar25 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
        fVar38 = *(float *)(unaff_x19 + 0x4d8);
        fVar39 = *(float *)(unaff_x19 + 0x61c);
        fVar37 = fVar37 * fVar34;
        *(float *)(lVar25 + lVar30 * 0x178 + 0x14c) = (0.0 - fVar38) + fVar39;
        if (iVar21 == 0) {
          fVar37 = fVar37 / fStack0000000000000068;
          fVar48 = (fVar48 * fVar34) / fStack0000000000000068;
        }
        else {
          fVar48 = fVar48 * fVar34;
        }
        fVar37 = fVar39 + fVar37;
        if ((uVar22 == 0) || (uVar7 == *(uint *)(unaff_x19 + 0x498))) {
          fVar48 = fVar39 + fVar48;
          fVar43 = fVar37;
          fVar42 = fVar48;
          if (fVar39 != 0.0) {
            fVar43 = (fVar37 - fVar39) / *(float *)(unaff_x19 + 0x404);
            fVar42 = (fVar48 - fVar39) / *(float *)(unaff_x19 + 0x404);
            if (fVar43 <= fVar37) {
              fVar43 = fVar37;
            }
            if (fVar48 <= fVar42) {
              fVar42 = fVar48;
            }
          }
          lVar25 = lVar25 + lVar30 * 0x178;
          fVar39 = fVar43;
          if (fVar43 <= *(float *)(unaff_x19 + 0x4c8)) {
            fVar39 = *(float *)(unaff_x19 + 0x4c8);
          }
          fVar44 = fVar42;
          if (*(float *)(unaff_x19 + 0x4cc) <= fVar42) {
            fVar44 = *(float *)(unaff_x19 + 0x4cc);
          }
          *(float *)(unaff_x19 + 0x4cc) = fVar44;
          *(float *)(unaff_x19 + 0x4c8) = fVar39;
          *(float *)(lVar25 + 0x154) = fVar43;
          *(float *)(lVar25 + 0x158) = fVar42;
          *(float *)(lVar25 + 0x148) = fVar37 - fVar38;
          *(float *)(unaff_x19 + 0x4c0) = fVar37 - fVar38;
          *(float *)(lVar25 + 0x150) = fVar48 - fVar38;
          *(float *)(unaff_x19 + 0x4c4) = fVar48 - fVar38;
          if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
            *(float *)(unaff_x19 + 0x4b8) = fVar39;
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
            fVar48 = *(float *)(unaff_x19 + 0x4bc);
            fVar38 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
            fStack0000000000000068 = (fVar34 * fVar38) / fStack0000000000000068;
            fVar38 = *(float *)(unaff_x19 + 0x4d8);
            if (fVar48 <= fStack0000000000000068) {
              fVar48 = fStack0000000000000068;
            }
            *(float *)(unaff_x19 + 0x4bc) = fVar48;
          }
        }
        else {
          fVar48 = *(float *)(unaff_x19 + 0x4c8);
          lVar25 = lVar25 + lVar30 * 0x178;
          *(float *)(lVar25 + 0x154) = fVar48;
          fVar39 = *(float *)(unaff_x19 + 0x4cc);
          fVar48 = fVar48 - fVar38;
          *(float *)(lVar25 + 0x148) = fVar48;
          *(float *)(lVar25 + 0x158) = fVar39;
          *(float *)(unaff_x19 + 0x4c0) = fVar48;
          fVar39 = fVar39 - fVar38;
          *(float *)(lVar25 + 0x150) = fVar39;
          *(float *)(unaff_x19 + 0x4c4) = fVar39;
        }
        if (fVar38 == 0.0) {
          if ((uVar22 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
            fVar48 = *(float *)(unaff_x19 + 0x4b4);
            if (*(float *)(unaff_x19 + 0x4b4) <= fVar37) {
              fVar48 = fVar37;
            }
            *(float *)(unaff_x19 + 0x4b4) = fVar48;
            goto LAB_035857b0;
          }
          bVar19 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
          if (uVar24 != 9) goto LAB_03585804;
LAB_035857c4:
          bVar10 = true;
LAB_03585820:
          fVar38 = *(float *)(unaff_x19 + 0x360);
          fVar39 = *(float *)(unaff_x19 + 0x640);
          fVar48 = (fVar33 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
          bVar16 = true;
          if ((fVar38 <= fVar48) && (bVar16 = false, !NAN(fVar38))) {
            bVar16 = fVar38 == -1.0;
          }
          if (!bVar16) {
            fVar48 = fVar38;
          }
          fVar38 = (float)FUN_03776cb4(&stack0x00000120,0);
          if (!bVar18) {
            fVar45 = fVar34;
          }
          fVar37 = 1.0;
          if (!bVar19) {
            fVar37 = DAT_00d38acc;
          }
          fStack000000000000005c =
               ABS(fVar39) + fVar45 * fVar38 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
          if ((fStack000000000000005c <= fVar37 * fVar48 || (uVar6 & 1) != 0) ||
             (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
            fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
            fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
            if (!bVar10) goto LAB_03585998;
            if (*plVar1 != 0) {
              memmove(&stack0x00000140,(void *)(*plVar1 + 0x50),0x60);
              fVar45 = (float)FUN_03776a48(&stack0x00000140,0);
              if (*plVar1 != 0) {
                fVar46 = *(float *)(unaff_x19 + 0x640);
                fVar48 = (float)NEON_ucvtf((uint)*(byte *)(*plVar1 + 0x1b9));
                fVar48 = fVar34 * fVar45 * fVar48;
                fVar45 = fVar48 * (float)(int)(fVar46 / fVar48);
                if (fVar45 <= fVar46) {
                  fVar45 = fVar46 + fVar48;
                }
                goto LAB_03585a9c;
              }
            }
          }
          else {
            uVar23 = FUN_0358c15c();
            lVar25 = *(long *)(unaff_x19 + 0x488);
            if (lVar25 != 0) {
              uVar24 = *(uint *)(unaff_x19 + 0x494);
              uVar22 = uVar24 - 1;
              if (*(uint *)(lVar25 + 0x18) <= uVar22)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              if ((!bVar17 && *(short *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x20) == 0xad) &&
                 (*(int *)(unaff_x19 + 0x2e0) == 0)) {
                bVar17 = false;
                in_stack_00000c14 = 0x2d;
                *puVar4 = uVar22;
                fVar45 = fVar34;
                uVar23 = uVar23 - 1;
                in_stack_00000c10 = uVar22;
                goto LAB_03586300;
              }
              if (*(uint *)(lVar25 + 0x18) <= uVar24)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              if (*(short *)(lVar25 + (long)(int)uVar24 * 0x178 + 0x20) == 0xad) {
                bVar17 = true;
                fVar45 = fVar34;
                goto LAB_03586300;
              }
              if ((uStack0000000000000030 & unaff_w24) != 0) {
                fVar45 = *(float *)(unaff_x19 + 0x2d4);
                fVar46 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
                if ((fVar46 <= fVar45) ||
                   (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
                  if ((*unaff_x22 <= *(float *)(unaff_x19 + 0x250)) ||
                     (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244)))
                  goto LAB_03586060;
                  *(float *)(unaff_x19 + 0x23c) = *unaff_x22;
                  fVar45 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                  if (fVar45 <= DAT_00d38b84) {
                    fVar45 = DAT_00d38b84;
                  }
                  fVar45 = *unaff_x22 - fVar45;
                  *unaff_x22 = fVar45;
                  fVar40 = fVar45 * 20.0 + 0.5;
                  fVar45 = DAT_00d38e60;
                  if (fVar40 != INFINITY) {
                    fVar45 = (float)(int)fVar40 / 20.0;
                  }
                  if (fVar45 <= *(float *)(unaff_x19 + 0x250)) {
                    fVar45 = *(float *)(unaff_x19 + 0x250);
                  }
                  *unaff_x22 = fVar45;
                }
                else {
                  fVar40 = fStack000000000000005c;
                  if (0.0 < fVar45) {
                    fVar40 = fStack000000000000005c / (1.0 - fVar45);
                  }
                  fVar45 = fVar45 + (fStack000000000000005c - fVar37 * (fVar48 + DAT_00d38cc4)) /
                                    fVar40;
                  if (fVar46 <= fVar45) {
                    fVar45 = fVar46;
                  }
                  *(float *)(unaff_x19 + 0x2d4) = fVar45;
                }
                goto LAB_035863e8;
              }
LAB_03586060:
              if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                fVar45 = *(float *)(unaff_x19 + 0x4c8);
                fVar48 = *(float *)(unaff_x19 + 0x4d0);
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                fVar45 = fVar45 - fVar48;
                if (((fVar13 < ABS(fVar45)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                   (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                  *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar45;
                  *(float *)(unaff_x19 + 0x4d8) = fVar45 + *(float *)(unaff_x19 + 0x4d8);
                }
              }
              fVar46 = *(float *)(unaff_x19 + 0x640);
              fVar48 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
              fVar45 = *(float *)(unaff_x19 + 0x4c4);
              if (fVar48 <= *(float *)(unaff_x19 + 0x4c4)) {
                fVar45 = fVar48;
              }
              *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
              *(float *)(unaff_x19 + 0x4c4) = fVar45;
              *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
              if ((uStack0000000000000034 & 1) == 0) {
                fVar48 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar48;
                if (fStack0000000000000038 <= fVar48) {
                  fStack0000000000000038 = fVar48;
                }
              }
              else {
                fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar45;
              }
              FUN_0358c4f0();
              lVar25 = *(long *)(unaff_x19 + 0x488);
              *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
              if (lVar25 != 0) {
                if (*(uint *)(unaff_x19 + 0x494) < *(uint *)(lVar25 + 0x18)) {
                  fVar45 = *(float *)(unaff_x19 + 0x2c0);
                  fVar48 = *(float *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 +
                                     0x154);
                  bVar17 = fVar45 != DAT_00d38ba4;
                  if (bVar17) {
                    fVar36 = fVar35 * *(float *)(unaff_x19 + 0x2b8);
                  }
                  else {
                    fVar36 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                             fVar31 * (fVar32 + *(float *)(unaff_x19 + 700));
                    fVar45 = fVar35 * *(float *)(unaff_x19 + 0x2b8);
                  }
                  *(bool *)(unaff_x19 + 0x2c4) = bVar17;
                  *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar45 + fVar36;
                  puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar25 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar25 = *(long *)puVar14;
                  }
                  bVar17 = false;
                  fStack000000000000006c = fStack000000000000006c + fVar46;
                  uVar41 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
                  uVar41 = NEON_rev64(uVar41,4);
                  *(float *)(unaff_x19 + 0x4d0) = fVar48;
                  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar41;
                  uStack0000000000000030 = 1;
                  fVar45 = fVar34;
                  goto LAB_03586300;
                }
                goto UnityEngine_LightProbesQuery__get_IsCreated;
              }
            }
          }
          goto LAB_03586310;
        }
LAB_035857b0:
        bVar19 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
        if (uVar24 == 9) goto LAB_035857c4;
        if ((((uVar22 == 0) && (uVar24 != 3)) && (uVar24 != 0x200b)) && (uVar24 != 0xad)) {
UnityEngine_Display__Activate:
          bVar10 = false;
          goto LAB_03585820;
        }
LAB_03585804:
        if ((!(bool)(bVar17 | bVar18 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1))
        goto UnityEngine_Display__Activate;
LAB_03585998:
        fVar45 = *(float *)(unaff_x19 + 0x640);
        if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
          fVar48 = (float)FUN_03776cb4(&stack0x00000120,0);
          if (*plVar1 == 0) goto LAB_03586310;
          fVar48 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                   (*(float *)(unaff_x19 + 0x2ac) +
                   fVar34 * (fVar46 + fVar48) +
                   fVar35 * (fVar36 + fStack0000000000000074 + *(float *)(*plVar1 + 0x1ac)));
        }
        else {
          if (*plVar1 == 0) goto LAB_03586310;
          fVar48 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                   (*(float *)(unaff_x19 + 0x2ac) +
                   (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                   fVar35 * (fStack0000000000000074 + *(float *)(*plVar1 + 0x1ac)));
        }
        fVar45 = fVar45 + fVar48;
        *(float *)(unaff_x19 + 0x640) = fVar45;
        if ((uVar24 == 0x200b) || (uVar22 != 0)) {
          fVar45 = fVar45 + fVar35 * *(float *)(unaff_x19 + 0x2b4);
          *(float *)(unaff_x19 + 0x640) = fVar45;
        }
        if (uVar24 == 0xd) {
          if (fStack0000000000000064 <= fStack000000000000006c + fVar45) {
            fStack0000000000000064 = fStack000000000000006c + fVar45;
          }
          fStack000000000000006c = 0.0;
          fVar45 = *(float *)(unaff_x19 + 0x40c) + 0.0;
LAB_03585a9c:
          bVar19 = false;
          *(float *)(unaff_x19 + 0x640) = fVar45;
LAB_03585aa4:
          if (*puVar4 == uVar9) goto LAB_03585b64;
        }
        else {
          bVar19 = uVar24 == 10;
          if (((0xb < uVar24) || ((1 << (ulong)(uVar24 & 0x1f) & 0xc08U) == 0)) &&
             (1 < uVar24 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar45 = *(float *)(unaff_x19 + 0x4c8);
            fVar48 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar45 = fVar45 - fVar48;
            if (((fVar13 < ABS(fVar45)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
               (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar45;
              *(float *)(unaff_x19 + 0x4d8) = fVar45 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar45 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar45 <= *(float *)(unaff_x19 + 0x4c4)) {
            fStack0000000000000038 = fVar45;
          }
          fVar48 = fStack0000000000000044 +
                   fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
          fVar45 = fStack0000000000000064;
          if (fStack0000000000000064 <= fVar48) {
            fVar45 = fVar48;
          }
          *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
          fStack000000000000006c = fVar45;
          if (*(uint *)(unaff_x19 + 0x494) != uVar9) {
            fStack000000000000006c = 0.0;
            fStack0000000000000064 = fVar45;
          }
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
          *(undefined1 *)(unaff_x19 + 0x33c) = 0;
          if (bVar19) {
LAB_03585e8c:
            FUN_0358c4f0();
            FUN_0358c4f0();
            uVar22 = *(uint *)(unaff_x19 + 0x494);
            lVar25 = *(long *)(unaff_x19 + 0x488);
            iVar21 = uVar22 + 1;
            *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
            *(int *)(unaff_x19 + 0x498) = iVar21;
            if (lVar25 == 0) goto LAB_03586310;
            if (*(uint *)(lVar25 + 0x18) <= uVar22)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            fVar45 = *(float *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x154);
            if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
              fVar48 = 0.0;
              if (!(bool)(uVar24 != 0x2029 & (bVar19 ^ 1U))) {
                fVar48 = *(float *)(unaff_x19 + 0x2cc);
              }
              uVar29 = 0;
              fVar48 = fVar45 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                       fVar31 * (fVar32 + *(float *)(unaff_x19 + 700)) +
                       fVar35 * (*(float *)(unaff_x19 + 0x2b8) + fVar48) +
                       *(float *)(unaff_x19 + 0x4d8);
            }
            else {
              fVar48 = 0.0;
              if (!(bool)(uVar24 != 0x2029 & (bVar19 ^ 1U))) {
                fVar48 = *(float *)(unaff_x19 + 0x2cc);
              }
              uVar29 = 1;
              fVar48 = *(float *)(unaff_x19 + 0x4d8) +
                       *(float *)(unaff_x19 + 0x2c0) +
                       fVar35 * (*(float *)(unaff_x19 + 0x2b8) + fVar48);
            }
            *(float *)(unaff_x19 + 0x4d8) = fVar48;
            *(undefined1 *)(unaff_x19 + 0x2c4) = uVar29;
            puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar25 = *(long *)puVar14;
              iVar21 = *puVar4 + 1;
            }
            uVar41 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x640) =
                 *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
            uVar41 = NEON_rev64(uVar41,4);
            *(float *)(unaff_x19 + 0x4d0) = fVar45;
            *(undefined8 *)(unaff_x19 + 0x4c8) = uVar41;
            *(int *)(unaff_x19 + 0x494) = iVar21;
            fVar45 = fVar34;
            goto LAB_03586300;
          }
          if ((int)uVar24 < 0x2028) {
            if (uVar24 == 3) {
              if (*(long *)(unaff_x19 + 0x478) != 0) {
                uVar23 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
                uVar24 = 3;
                goto LAB_03585ab4;
              }
              goto LAB_03586310;
            }
            if ((uVar24 == 0xb) || (uVar24 == 0x2d)) goto LAB_03585e8c;
          }
          else if (uVar24 - 0x2028 < 2) goto LAB_03585e8c;
        }
LAB_03585ab4:
        if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
          if ((uVar22 == 0) && (((uVar24 != 0x2d && (uVar24 != 0x200b)) && (uVar24 != 0xad)))) {
            if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
              if (((((0x2bfd < uVar24 - 0xac01) && (0xfd < uVar24 - 0x1101)) &&
                   (0x1d < uVar24 - 0xa961)) || (uVar26 = FUN_03597a54(0), (uVar26 & 1) != 0)) &&
                 ((((0xed < uVar24 - 0xff01 && (0x1d < uVar24 - 0xfe31)) &&
                   (0x717d < uVar24 - 0x2e81)) && (0x1fd < uVar24 - 0xf901)))) goto LAB_03585adc;
              lVar25 = FUN_035978e8(0);
              if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_03586310;
              _fStack00000000000000c0 = CONCAT44(uStack00000000000000c4,uVar24);
              uVar24 = FUN_0219c130(*(long *)(lVar25 + 0x10),&stack0x000000c0,
                                    *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if ((int)uVar9 <= (int)*puVar4) {
                if (uStack0000000000000030 != 0 || ((uVar24 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
                  FUN_0358c4f0();
                }
LAB_035862c4:
                uStack0000000000000030 = 0;
                bVar11 = true;
                goto LAB_035862f4;
              }
              lVar25 = FUN_035978e8(0);
              if ((lVar25 == 0) || (lVar30 = *plVar2, lVar30 == 0)) goto LAB_03586310;
              if (*(uint *)(lVar30 + 0x18) <= *puVar4 + 1)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              if (*(long *)(lVar25 + 0x18) == 0) goto LAB_03586310;
              _fStack00000000000000c0 =
                   CONCAT44(uStack00000000000000c4,
                            (uint)*(ushort *)(lVar30 + (long)(int)(*puVar4 + 1) * 0x178 + 0x20));
              uVar26 = FUN_0219c130(*(long *)(lVar25 + 0x18),&stack0x000000c0,
                                    *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
              if (uStack0000000000000030 == 0 && ((uVar24 ^ 0xffffffff) & 1) == 0)
              goto LAB_035862c4;
              if ((uVar26 & 1) == 0) goto LAB_035862b0;
              if (uStack0000000000000030 == 0) goto LAB_035862c4;
              if (uVar22 != 0) {
                FUN_0358c4f0();
              }
              FUN_0358c4f0();
              bVar11 = true;
LAB_03585ccc:
              uStack0000000000000030 = 1;
            }
            else {
LAB_03585adc:
              if (bVar11) {
                lVar25 = FUN_035978e8(0);
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_03586310;
                _fStack00000000000000c0 = CONCAT44(uStack00000000000000c4,uVar24);
                uVar26 = FUN_0219c130(*(long *)(lVar25 + 0x10),&stack0x000000c0,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                if ((uVar26 & 1) == 0) {
                  FUN_0358c4f0();
                }
                bVar11 = false;
              }
              else {
                if (uStack0000000000000030 != 0) {
                  if ((!bVar17 && bVar18) || (uVar22 != 0)) {
                    FUN_0358c4f0();
                  }
                  FUN_0358c4f0();
                  bVar11 = false;
                  goto LAB_03585ccc;
                }
                bVar11 = false;
                uStack0000000000000030 = 0;
              }
            }
          }
          else {
            if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
            if (((uVar24 - 0x2007 < 0x29) &&
                ((1L << ((ulong)(uVar24 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
               ((uVar24 == 0xa0 || (uVar24 == 0x2060)))) goto LAB_03585d14;
            FUN_0358c4f0();
            bVar11 = false;
            uStack0000000000000030 = 0;
            in_stack_000001a8 = 0xffffffff;
          }
        }
LAB_035862f4:
        *puVar4 = *puVar4 + 1;
        fVar45 = fVar34;
LAB_03586300:
        lVar25 = *(long *)(unaff_x19 + 0x478);
        uVar23 = uVar23 + 1;
        if (lVar25 == 0) goto LAB_03586310;
        goto LAB_035849d0;
      }
      goto LAB_0358461c;
    }
  }
  puVar15 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  puVar14 = PTR_DAT_03cbe438;
  in_stack_000001a0._4_4_ = FUN_036d3364();
  uVar41 = FUN_0276793c((long)&stack0x000001a0 + 4,0);
  uVar41 = FUN_025b1328(*(undefined8 *)puVar15,uVar41,0);
  if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar14);
  }
  FUN_036772fc(uVar41,0);
LAB_0358461c:
  *(undefined1 *)(unaff_x19 + 0x24c) = 1;
  if (DAT_0411f1e3 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbeb70);
    DAT_0411f1e3 = '\x01';
  }
LAB_03584640:
  return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
}


