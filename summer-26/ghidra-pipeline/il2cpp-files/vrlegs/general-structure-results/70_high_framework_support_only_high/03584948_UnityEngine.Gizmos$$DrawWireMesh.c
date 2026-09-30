/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawWireMesh
ENTRY_POINT: 03584948
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


float UnityEngine_Gizmos__DrawWireMesh
                (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
                float param_5,undefined8 param_6,long param_7)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined1 uVar19;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  int unaff_w25;
  uint uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float *in_stack_00000010;
  uint in_stack_00000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  uint uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  uint in_stack_00000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  long *in_stack_00000078;
  uint uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_000001a8;
  uint in_stack_00000c10;
  uint in_stack_00000c14;
  
  uVar8 = _uStack0000000000000030;
  fStack0000000000000044 = 0.0;
  fStack0000000000000024 = unaff_s10 - param_2;
  fStack000000000000006c = 0.0;
  fStack0000000000000038 = 0.0;
  fStack000000000000003c = unaff_s8 + param_3;
  fStack000000000000005c = 0.0;
  fVar27 = (unaff_s9 / (float)unaff_w25) * unaff_s14 * unaff_s15;
  bVar6 = false;
  uStack000000000000004c = 0;
  fStack0000000000000058 = unaff_s15 * fStack0000000000000074 * DAT_00d38d28;
  uVar13 = 0;
  puVar1 = (uint *)(unaff_x20 + 0x1e8);
  plVar2 = (long *)(unaff_x19 + 0x648);
  fStack000000000000001c = DAT_00d38d28;
  uStack0000000000000030 = 1;
  fStack0000000000000020 = fVar27;
  fStack0000000000000048 = param_5;
LAB_035849d0:
  if ((int)*(uint *)(param_7 + 0x18) <= (int)uVar13) {
LAB_03586314:
    if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
         ((in_stack_00000018 & 1) == 0)) ||
        (fVar27 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar27)) ||
       (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
      fVar27 = *(float *)(unaff_x19 + 0x340);
      fVar22 = *(float *)(unaff_x19 + 0x348);
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      *(undefined1 *)(unaff_x19 + 0x24c) = 1;
      fVar22 = (fStack000000000000006c + fVar27 + fVar22) * 100.0 + 1.0;
      fVar27 = DAT_00d387f8;
      if (fVar22 != INFINITY) {
        fVar27 = (float)(int)fVar22 / 100.0;
      }
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
      return fVar27;
    }
    if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
      fVar27 = *in_stack_00000010;
    }
    *(float *)(unaff_x19 + 0x240) = fVar27;
    fVar27 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
    if (fVar27 <= DAT_00d38b84) {
      fVar27 = DAT_00d38b84;
    }
    fVar27 = *in_stack_00000010 + fVar27;
    *in_stack_00000010 = fVar27;
    fVar22 = fVar27 * 20.0 + 0.5;
    fVar27 = DAT_00d38e60;
    if (fVar22 != INFINITY) {
      fVar27 = (float)(int)fVar22 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x254) <= fVar27) {
      fVar27 = *(float *)(unaff_x19 + 0x254);
    }
    *in_stack_00000010 = fVar27;
    goto LAB_035863e8;
  }
  if (*(uint *)(param_7 + 0x18) <= uVar13) goto UnityEngine_LightProbesQuery__get_IsCreated;
  uVar14 = *(uint *)(param_7 + (long)(int)uVar13 * 0xc + 0x20);
  if (uVar14 == 0) goto LAB_03586314;
  if ((uVar14 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x431) = 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    uVar15 = FUN_03586568();
    if (((uVar15 & 1) == 0) || (uVar13 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
    goto LAB_03584a74;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar18 + 0x18) <= *puVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
    lVar18 = lVar18 + (long)(int)*puVar1 * 0x178;
    *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar18 + 0x2c);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar18 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar18 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_03584a74:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0)) goto LAB_03586310;
    uVar12 = *puVar1;
    if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
    lVar21 = (long)(int)uVar12;
    cVar4 = *(char *)(lVar18 + lVar21 * 0x178 + 0x5c);
    *(undefined1 *)(unaff_x19 + 0x431) = 0;
    uVar34 = *(undefined4 *)(unaff_x19 + 0x120);
    if (in_stack_00000c10 == uVar12) {
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      if (in_stack_00000c14 == 0x2026) {
        lVar18 = *in_stack_00000078;
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *(undefined8 *)(lVar18 + lVar21 * 0x178 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar18 = *in_stack_00000078;
          if (lVar18 != 0) {
            if (*(uint *)(lVar18 + 0x18) <= *puVar1)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar18 = lVar18 + (long)(int)*puVar1 * 0x178;
            *(undefined4 *)(lVar18 + 0x2c) = 0;
            *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar18 = *(long *)(unaff_x19 + 0x488);
            if (lVar18 != 0) {
              if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                   *(undefined8 *)(unaff_x19 + 0x660);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar18 = *in_stack_00000078;
              if (lVar18 != 0) {
                uVar12 = *puVar1;
                if (*(uint *)(lVar18 + 0x18) <= uVar12)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                bVar10 = true;
                in_stack_00000c10 = uVar12 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x58) =
                     *(undefined4 *)(unaff_x19 + 0x668);
                uVar14 = 0x2026;
                *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                in_stack_00000c14 = 3;
                goto LAB_03584c20;
              }
            }
          }
        }
        goto LAB_03586310;
      }
      if (in_stack_00000c14 != 3) {
        bVar10 = true;
        uVar14 = in_stack_00000c14;
        goto LAB_03584c20;
      }
      lVar18 = *in_stack_00000078;
      if (((lVar18 == 0) || (*unaff_x23 == 0)) || (lVar16 = FUN_03568ac0(*unaff_x23,0), lVar16 == 0)
         ) goto LAB_03586310;
      FUN_0219b634(lVar16,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(ulong *)(lVar18 + lVar21 * 0x178 + 0x30) =
           CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      bVar10 = true;
      uVar14 = 3;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
    }
    else {
      bVar10 = false;
LAB_03584c20:
      if ((uVar14 != 3) && ((int)uVar12 < *(int *)(unaff_x19 + 0x324))) {
        lVar18 = *in_stack_00000078;
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar18 = lVar18 + (long)(int)uVar12 * 0x178;
          *(undefined1 *)(lVar18 + 0x194) = 0;
          *(undefined2 *)(lVar18 + 0x20) = 0x200b;
          *(undefined4 *)(lVar18 + 100) = 0;
          *puVar1 = uVar12 + 1;
          goto LAB_03586300;
        }
        goto LAB_03586310;
      }
    }
    iVar11 = *(int *)(unaff_x19 + 0x644);
    if (iVar11 == 0) {
      uVar12 = *(uint *)(unaff_x19 + 0x25c);
      if ((uVar12 >> 4 & 1) == 0) {
        if ((uVar12 >> 3 & 1) == 0) {
          fStack0000000000000068 = 1.0;
          if ((uVar12 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_026b812c(uVar14,0);
            fStack0000000000000068 = 1.0;
            if ((uVar15 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b8410(uVar14,0);
              fStack0000000000000068 = in_stack_00000008._4_4_;
              goto LAB_03584f98;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b8070(uVar14,0);
          fStack0000000000000068 = 1.0;
          if ((uVar15 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b8594(uVar14,0);
            goto LAB_03584f98;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b812c(uVar14,0);
        fStack0000000000000068 = 1.0;
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b8410(uVar14,0);
LAB_03584f98:
          uVar14 = uVar14 & 0xffff;
        }
      }
      iVar11 = *(int *)(unaff_x19 + 0x644);
      if (iVar11 != 0) goto LAB_03584c80;
LAB_03584fa4:
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar18 + 0x18) <= *puVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *plVar2 = *(long *)(lVar18 + (long)(int)*puVar1 * 0x178 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2);
      if (*plVar2 == 0) goto LAB_03586300;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0)) goto LAB_03586310;
      uVar20 = *puVar1;
      uVar12 = *(uint *)(lVar18 + 0x18);
      if (uVar12 <= uVar20) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x120) =
           *(undefined4 *)(lVar18 + (long)(int)uVar20 * 0x178 + 0x58);
      if (bVar10) {
        lVar21 = *(long *)(unaff_x19 + 0x478);
        if (lVar21 == 0) goto LAB_03586310;
        if (*(uint *)(lVar21 + 0x18) <= uVar13) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if ((*(int *)(lVar21 + (long)(int)uVar13 * 0xc + 0x20) != 10) ||
           (uVar20 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
        if (uVar12 <= uVar20 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar27 = *(float *)(lVar18 + (long)(int)(uVar20 - 1) * 0x178 + 0x60);
        iVar11 = FUN_03776950(*unaff_x23 + 0x50,0);
        lVar18 = *unaff_x23;
      }
      else {
LAB_03585044:
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar27 = *(float *)(unaff_x19 + 0x1e8);
        iVar11 = FUN_03776950(*unaff_x23 + 0x50,0);
        lVar18 = *(long *)(unaff_x19 + 0x100);
      }
      if (lVar18 == 0) goto LAB_03586310;
      fVar33 = (float)FUN_03776960(lVar18 + 0x50,0);
      fVar29 = in_stack_00000028._4_4_;
      if (*(char *)(unaff_x19 + 0x305) != '\0') {
        fVar29 = 1.0;
      }
      fVar22 = 0.0;
      fVar24 = 0.0;
      if (!(bool)(bVar10 & uVar14 == 0x2026)) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar24 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar22 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
      }
      if ((*plVar2 == 0) || (lVar18 = *(long *)(unaff_x19 + 0x488), lVar18 == 0)) goto LAB_03586310;
      uVar12 = *(uint *)(unaff_x19 + 0x494);
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      fVar27 = ((fStack0000000000000068 * fVar27) / (float)iVar11) * fVar33 * fVar29 *
               *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar2 + 0x2c);
      *(undefined4 *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x2c) = 0;
LAB_035852d0:
      uVar20 = (uint)(uVar14 == 0xad);
      fVar29 = 0.0;
      if (uVar14 != 0xad && uVar14 != 3) {
        fVar29 = fVar27;
      }
    }
    else {
      fStack0000000000000068 = 1.0;
      if (iVar11 == 0) goto LAB_03584fa4;
LAB_03584c80:
      if (iVar11 == 1) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar18 + 0x18) <= *puVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined8 *)(unaff_x19 + 0x698) =
             *(undefined8 *)(lVar18 + (long)(int)*puVar1 * 0x178 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar18 + 0x18) <= *puVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined4 *)(unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar18 + (long)(int)*puVar1 * 0x178 + 0x48);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar18 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
           lVar18 == 0)) goto LAB_03586310;
        FUN_02215a88(lVar18,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                     *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
        lVar18 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        if (lVar18 == 0) goto LAB_03586300;
        if (uVar14 == 0x3c) {
          uVar14 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
        }
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar11 = FUN_03776950(&stack0x00000140,0);
        fVar27 = *(float *)(unaff_x19 + 0x1e8);
        if (iVar11 < 1) {
          if (*unaff_x23 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          iVar11 = FUN_03776950(&stack0x00000140,0);
          if (*unaff_x23 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar29 = (float)FUN_03776960(&stack0x00000140,0);
          fVar22 = in_stack_00000028._4_4_;
          if (*(char *)(unaff_x19 + 0x305) != '\0') {
            fVar22 = 1.0;
          }
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
          fVar33 = (float)FUN_03776980(&stack0x00000140,0);
          if (*(long *)(lVar18 + 0x20) == 0) goto LAB_03586310;
          FUN_03776e6c(&stack0x000000c0,*(long *)(lVar18 + 0x20),0);
          in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
          in_stack_00000108 = in_stack_000000c8;
          in_stack_00000110 = in_stack_000000d0;
          fVar23 = (float)FUN_03776c9c(&stack0x00000100,0);
          if (*(long *)(lVar18 + 0x20) == 0) goto LAB_03586310;
          fVar26 = *(float *)(lVar18 + 0x2c);
          fVar25 = (float)FUN_03776ea8(*(long *)(lVar18 + 0x20),0);
          if (*unaff_x23 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar24 = (float)FUN_03776980(&stack0x00000140,0);
          if (*unaff_x23 == 0) goto LAB_03586310;
          fVar22 = (fVar27 / (float)iVar11) * fVar29 * fVar22;
          fVar27 = fVar22 * (fVar33 / fVar23) * fVar26 * fVar25;
          fVar22 = fVar22 / fVar27;
          fVar24 = fVar22 * fVar24;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar29 = (float)FUN_037769c0(&stack0x00000140,0);
          fVar22 = fVar22 * fVar29;
        }
        else {
          if (*in_stack_00000050 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
          iVar11 = FUN_03776950(&stack0x00000140,0);
          if (*in_stack_00000050 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
          fVar22 = (float)FUN_03776960(&stack0x00000140,0);
          if (*(long *)(lVar18 + 0x20) == 0) goto LAB_03586310;
          fVar33 = *(float *)(lVar18 + 0x2c);
          fVar29 = in_stack_00000028._4_4_;
          if (*(char *)(unaff_x19 + 0x305) != '\0') {
            fVar29 = 1.0;
          }
          fVar23 = (float)FUN_03776ea8(*(long *)(lVar18 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
          fVar24 = (float)FUN_03776980(&stack0x00000140,0);
          if (*in_stack_00000050 == 0) goto LAB_03586310;
          fVar27 = (fVar27 / (float)iVar11) * fVar22 * fVar29 * fVar33 * fVar23;
          memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
          fVar22 = (float)FUN_037769c0(&stack0x00000140,0);
        }
        *plVar2 = lVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar18);
        lVar18 = *in_stack_00000078;
        if (lVar18 != 0) {
          uVar12 = *puVar1;
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar21 = lVar18 + (long)(int)uVar12 * 0x178;
          *(undefined4 *)(lVar21 + 0x2c) = 1;
          *(float *)(lVar21 + 0x160) = fVar27;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar34;
          goto LAB_035852d0;
        }
        goto LAB_03586310;
      }
      uVar20 = (uint)(uVar14 == 0xad);
      lVar18 = *in_stack_00000078;
      fVar24 = 0.0;
      fVar29 = 0.0;
      if (uVar14 != 0xad && uVar14 != 3) {
        fVar29 = fVar27;
      }
      if (lVar18 == 0) goto LAB_03586310;
      uVar12 = *puVar1;
      fVar22 = 0.0;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(short *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x20) = (short)uVar14;
    if ((*plVar2 == 0) || (lVar18 = *(long *)(*plVar2 + 0x20), lVar18 == 0)) goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar18,0);
    in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000128 = in_stack_000000c8;
    in_stack_00000130 = in_stack_000000d0;
    if ((int)uVar14 < 0x10000) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(uVar14,0);
      uVar12 = uVar12 & 1;
    }
    else {
      uVar12 = 0;
    }
    fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
    *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
    if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
      fVar33 = 0.0;
    }
    else {
      if (*plVar2 == 0) goto LAB_03586310;
      uVar17 = *puVar1;
      uVar3 = *(uint *)(*plVar2 + 0x28);
      if ((int)uVar17 < (int)uStack0000000000000070) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar18 + 0x18) <= uVar17 + 1)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar18 = *(long *)(lVar18 + (long)(int)(uVar17 + 1) * 0x178 + 0x30);
        if ((((lVar18 == 0) || (*unaff_x23 == 0)) ||
            (lVar21 = *(long *)(*unaff_x23 + 0x128), lVar21 == 0)) ||
           (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)) goto LAB_03586310;
        uStack00000000000000c0 = uVar3 | *(int *)(lVar18 + 0x28) << 0x10;
        uVar15 = FUN_0219f8b8(lVar21,&stack0x000000c0,&stack0x000000f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        uVar34 = 0;
        if ((uVar15 & 1) == 0) {
          uVar35 = 0;
          fVar33 = 0.0;
          uVar36 = 0;
        }
        else {
          if (in_stack_000000f8 == 0) goto LAB_03586310;
          uVar34 = *(undefined4 *)(in_stack_000000f8 + 0x14);
          uVar35 = *(undefined4 *)(in_stack_000000f8 + 0x18);
          fVar33 = *(float *)(in_stack_000000f8 + 0x1c);
          uVar36 = *(undefined4 *)(in_stack_000000f8 + 0x20);
          if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
            fStack0000000000000074 = 0.0;
          }
        }
        uVar17 = *puVar1;
      }
      else {
        uVar34 = 0;
        uVar35 = 0;
        fVar33 = 0.0;
        uVar36 = 0;
      }
      if (0 < (int)uVar17) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar18 + 0x18) <= uVar17 - 1)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar18 = *(long *)(lVar18 + (ulong)(uVar17 - 1) * 0x178 + 0x30);
        if (((lVar18 == 0) || (*unaff_x23 == 0)) ||
           ((lVar21 = *(long *)(*unaff_x23 + 0x128), lVar21 == 0 ||
            (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)))) goto LAB_03586310;
        uStack00000000000000c0 = *(uint *)(lVar18 + 0x28) | uVar3 << 0x10;
        uVar15 = FUN_0219f8b8(lVar21,&stack0x000000c0,&stack0x000000f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        if ((uVar15 & 1) != 0) {
          if ((in_stack_000000f8 == 0) ||
             (FUN_03571cb4(uVar34,uVar35,fVar33,uVar36,*(undefined4 *)(in_stack_000000f8 + 0x28),
                           *(undefined4 *)(in_stack_000000f8 + 0x2c),
                           *(undefined4 *)(in_stack_000000f8 + 0x30),
                           *(undefined4 *)(in_stack_000000f8 + 0x34),0), in_stack_000000f8 == 0))
          goto LAB_03586310;
          if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
            fStack0000000000000074 = 0.0;
          }
        }
      }
      *(float *)(unaff_x19 + 0x2fc) = fVar33;
    }
    fStack0000000000000060 = 0.0;
    fVar23 = *(float *)(unaff_x19 + 0x2b0);
    if (fVar23 != 0.0) {
      if ((*plVar2 == 0) || (lVar18 = *(long *)(*plVar2 + 0x20), lVar18 == 0)) goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar18,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar25 = (float)FUN_03776c94(&stack0x00000100,0);
      if ((*plVar2 == 0) || (lVar18 = *(long *)(*plVar2 + 0x20), lVar18 == 0)) goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar18,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar26 = (float)FUN_03776ca4(&stack0x00000100,0);
      fStack0000000000000060 =
           (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar23 * 0.5 - fVar29 * (fVar25 * 0.5 + fVar26))
      ;
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
    }
    iVar11 = *(int *)(unaff_x19 + 0x644);
    fVar23 = 0.0;
    if (((cVar4 == '\0') && (fVar23 = 0.0, iVar11 == 0)) &&
       ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar23 = *(float *)(*unaff_x23 + 0x1b4);
    }
    lVar18 = *in_stack_00000078;
    if (lVar18 == 0) goto LAB_03586310;
    uVar3 = *puVar1;
    lVar21 = (long)(int)uVar3;
    if (*(uint *)(lVar18 + 0x18) <= uVar3) goto UnityEngine_LightProbesQuery__get_IsCreated;
    fVar25 = *(float *)(unaff_x19 + 0x4d8);
    fVar26 = *(float *)(unaff_x19 + 0x61c);
    fVar24 = fVar24 * fVar29;
    *(float *)(lVar18 + lVar21 * 0x178 + 0x14c) = (0.0 - fVar25) + fVar26;
    if (iVar11 == 0) {
      fVar24 = fVar24 / fStack0000000000000068;
      fVar22 = (fVar22 * fVar29) / fStack0000000000000068;
    }
    else {
      fVar22 = fVar22 * fVar29;
    }
    fVar24 = fVar26 + fVar24;
    if ((uVar12 == 0) || (uVar3 == *(uint *)(unaff_x19 + 0x498))) {
      fVar22 = fVar26 + fVar22;
      fVar31 = fVar24;
      fVar28 = fVar22;
      if (fVar26 != 0.0) {
        fVar31 = (fVar24 - fVar26) / *(float *)(unaff_x19 + 0x404);
        fVar28 = (fVar22 - fVar26) / *(float *)(unaff_x19 + 0x404);
        if (fVar31 <= fVar24) {
          fVar31 = fVar24;
        }
        if (fVar22 <= fVar28) {
          fVar28 = fVar22;
        }
      }
      lVar18 = lVar18 + lVar21 * 0x178;
      fVar26 = fVar31;
      if (fVar31 <= *(float *)(unaff_x19 + 0x4c8)) {
        fVar26 = *(float *)(unaff_x19 + 0x4c8);
      }
      fVar32 = fVar28;
      if (*(float *)(unaff_x19 + 0x4cc) <= fVar28) {
        fVar32 = *(float *)(unaff_x19 + 0x4cc);
      }
      *(float *)(unaff_x19 + 0x4cc) = fVar32;
      *(float *)(unaff_x19 + 0x4c8) = fVar26;
      *(float *)(lVar18 + 0x154) = fVar31;
      *(float *)(lVar18 + 0x158) = fVar28;
      *(float *)(lVar18 + 0x148) = fVar24 - fVar25;
      *(float *)(unaff_x19 + 0x4c0) = fVar24 - fVar25;
      *(float *)(lVar18 + 0x150) = fVar22 - fVar25;
      *(float *)(unaff_x19 + 0x4c4) = fVar22 - fVar25;
      if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
        *(float *)(unaff_x19 + 0x4b8) = fVar26;
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        fVar22 = *(float *)(unaff_x19 + 0x4bc);
        fVar25 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
        fStack0000000000000068 = (fVar29 * fVar25) / fStack0000000000000068;
        fVar25 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar22 <= fStack0000000000000068) {
          fVar22 = fStack0000000000000068;
        }
        *(float *)(unaff_x19 + 0x4bc) = fVar22;
      }
    }
    else {
      fVar22 = *(float *)(unaff_x19 + 0x4c8);
      lVar18 = lVar18 + lVar21 * 0x178;
      *(float *)(lVar18 + 0x154) = fVar22;
      fVar26 = *(float *)(unaff_x19 + 0x4cc);
      fVar22 = fVar22 - fVar25;
      *(float *)(lVar18 + 0x148) = fVar22;
      *(float *)(lVar18 + 0x158) = fVar26;
      *(float *)(unaff_x19 + 0x4c0) = fVar22;
      fVar26 = fVar26 - fVar25;
      *(float *)(lVar18 + 0x150) = fVar26;
      *(float *)(unaff_x19 + 0x4c4) = fVar26;
    }
    if (fVar25 == 0.0) {
      if ((uVar12 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fVar22 = *(float *)(unaff_x19 + 0x4b4);
        if (*(float *)(unaff_x19 + 0x4b4) <= fVar24) {
          fVar22 = fVar24;
        }
        *(float *)(unaff_x19 + 0x4b4) = fVar22;
        goto LAB_035857b0;
      }
      bVar10 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (uVar14 == 9) goto LAB_035857c4;
LAB_03585804:
      if ((((uStack000000000000004c | uVar20 ^ 0xffffffff) & 1) == 0) ||
         (fVar22 = fStack0000000000000048, fVar25 = fStack0000000000000044,
         *(int *)(unaff_x19 + 0x644) == 1)) goto UnityEngine_Display__Activate;
LAB_03585998:
      fVar27 = *(float *)(unaff_x19 + 0x640);
      if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
        fVar26 = (float)FUN_03776cb4(&stack0x00000120,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar33 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 fVar29 * (fVar33 + fVar26) +
                 fStack0000000000000058 *
                 (fVar23 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
      }
      else {
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar33 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                 fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)))
        ;
      }
      fVar27 = fVar27 + fVar33;
      *(float *)(unaff_x19 + 0x640) = fVar27;
      if ((uVar14 == 0x200b) || (uVar12 != 0)) {
        fVar27 = fVar27 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
        *(float *)(unaff_x19 + 0x640) = fVar27;
      }
      if (uVar14 == 0xd) {
        if (fStack0000000000000064 <= fStack000000000000006c + fVar27) {
          fStack0000000000000064 = fStack000000000000006c + fVar27;
        }
        fStack000000000000006c = 0.0;
        fVar27 = *(float *)(unaff_x19 + 0x40c) + 0.0;
        goto LAB_03585a9c;
      }
      bVar10 = uVar14 == 10;
      if (((0xb < uVar14) || ((1 << (ulong)(uVar14 & 0x1f) & 0xc08U) == 0)) && (1 < uVar14 - 0x2028)
         ) goto LAB_03585aa4;
LAB_03585b64:
      if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
        fVar27 = *(float *)(unaff_x19 + 0x4c8);
        fVar33 = *(float *)(unaff_x19 + 0x4d0);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar27 = fVar27 - fVar33;
        if (((fStack000000000000001c < ABS(fVar27)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
           (*(char *)(unaff_x19 + 0x33c) == '\0')) {
          *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar27;
          *(float *)(unaff_x19 + 0x4d8) = fVar27 + *(float *)(unaff_x19 + 0x4d8);
        }
      }
      fVar27 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
      fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
      if (fVar27 <= *(float *)(unaff_x19 + 0x4c4)) {
        fStack0000000000000038 = fVar27;
      }
      fVar33 = fVar25 + fVar22 + fStack000000000000006c + fStack000000000000005c;
      fVar27 = fStack0000000000000064;
      if (fStack0000000000000064 <= fVar33) {
        fVar27 = fVar33;
      }
      *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
      fStack000000000000006c = fVar27;
      if (*(uint *)(unaff_x19 + 0x494) != uStack0000000000000070) {
        fStack000000000000006c = 0.0;
        fStack0000000000000064 = fVar27;
      }
      fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
      *(undefined1 *)(unaff_x19 + 0x33c) = 0;
      if (bVar10) {
LAB_03585e8c:
        FUN_0358c4f0();
        FUN_0358c4f0();
        uVar12 = *(uint *)(unaff_x19 + 0x494);
        lVar18 = *(long *)(unaff_x19 + 0x488);
        iVar11 = uVar12 + 1;
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        *(int *)(unaff_x19 + 0x498) = iVar11;
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar27 = *(float *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x154);
          if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
            fVar33 = 0.0;
            if (!(bool)(uVar14 != 0x2029 & (bVar10 ^ 1U))) {
              fVar33 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar19 = 0;
            fVar33 = fVar27 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
                     + fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar33) +
                     *(float *)(unaff_x19 + 0x4d8);
          }
          else {
            fVar33 = 0.0;
            if (!(bool)(uVar14 != 0x2029 & (bVar10 ^ 1U))) {
              fVar33 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar19 = 1;
            fVar33 = *(float *)(unaff_x19 + 0x4d8) +
                     *(float *)(unaff_x19 + 0x2c0) +
                     fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar33);
          }
          *(float *)(unaff_x19 + 0x4d8) = fVar33;
          *(undefined1 *)(unaff_x19 + 0x2c4) = uVar19;
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          fStack0000000000000044 = fVar25;
          fStack0000000000000048 = fVar22;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar18 = *(long *)puVar7;
            iVar11 = *puVar1 + 1;
          }
          uVar30 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) =
               *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
          uVar30 = NEON_rev64(uVar30,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar27;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar30;
          *(int *)(unaff_x19 + 0x494) = iVar11;
          fVar27 = fVar29;
          goto LAB_03586300;
        }
        goto LAB_03586310;
      }
      if ((int)uVar14 < 0x2028) {
        if (uVar14 == 3) {
          if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
          uVar13 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
          uVar14 = 3;
        }
        else if ((uVar14 == 0xb) || (uVar14 == 0x2d)) goto LAB_03585e8c;
      }
      else if (uVar14 - 0x2028 < 2) goto LAB_03585e8c;
    }
    else {
LAB_035857b0:
      bVar10 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (uVar14 == 9) {
LAB_035857c4:
        bVar5 = true;
      }
      else {
        if ((((uVar12 != 0) || (uVar14 == 3)) || (uVar14 == 0x200b)) || (uVar14 == 0xad))
        goto LAB_03585804;
UnityEngine_Display__Activate:
        bVar5 = false;
      }
      fVar25 = *(float *)(unaff_x19 + 0x360);
      fVar26 = *(float *)(unaff_x19 + 0x640);
      fVar22 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
               *(float *)(unaff_x19 + 0x354);
      bVar9 = true;
      if ((fVar25 <= fVar22) && (bVar9 = false, !NAN(fVar25))) {
        bVar9 = fVar25 == -1.0;
      }
      if (!bVar9) {
        fVar22 = fVar25;
      }
      fVar25 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (uVar20 == 0) {
        fVar27 = fVar29;
      }
      fVar24 = 1.0;
      if (!bVar10) {
        fVar24 = DAT_00d38acc;
      }
      fVar27 = ABS(fVar26) + fVar27 * fVar25 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
      fStack000000000000005c = fVar27;
      if ((fVar24 * fVar22 < fVar27 && (in_stack_00000040 & 1) == 0) &&
         (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
        uVar13 = FUN_0358c15c();
        lVar18 = *(long *)(unaff_x19 + 0x488);
        if (lVar18 == 0) goto LAB_03586310;
        uVar14 = *(uint *)(unaff_x19 + 0x494);
        uVar12 = uVar14 - 1;
        if (*(uint *)(lVar18 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (((uStack000000000000004c & 1) == 0 &&
             *(short *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x20) == 0xad) &&
           (*(int *)(unaff_x19 + 0x2e0) == 0)) {
          uStack000000000000004c = 0;
          in_stack_00000c14 = 0x2d;
          *puVar1 = uVar12;
          fVar27 = fVar29;
          uVar13 = uVar13 - 1;
          in_stack_00000c10 = uVar12;
          goto LAB_03586300;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar14) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (*(short *)(lVar18 + (long)(int)uVar14 * 0x178 + 0x20) == 0xad) {
          uStack000000000000004c = 1;
          fVar27 = fVar29;
        }
        else {
          if ((uStack0000000000000030 & in_stack_00000018) != 0) {
            fVar33 = *(float *)(unaff_x19 + 0x2d4);
            fVar23 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
            if ((fVar33 < fVar23) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              fVar29 = fVar27;
              if (0.0 < fVar33) {
                fVar29 = fVar27 / (1.0 - fVar33);
              }
              fVar33 = fVar33 + (fVar27 - fVar24 * (fVar22 + DAT_00d38cc4)) / fVar29;
              if (fVar23 <= fVar33) {
                fVar33 = fVar23;
              }
              *(float *)(unaff_x19 + 0x2d4) = fVar33;
LAB_035863e8:
              if (DAT_0411f1e3 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbeb70);
                DAT_0411f1e3 = '\x01';
              }
              return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
            }
            if ((*(float *)(unaff_x19 + 0x250) < *in_stack_00000010) &&
               (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
              fVar27 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
              if (fVar27 <= DAT_00d38b84) {
                fVar27 = DAT_00d38b84;
              }
              fVar27 = *in_stack_00000010 - fVar27;
              *in_stack_00000010 = fVar27;
              fVar22 = fVar27 * 20.0 + 0.5;
              fVar27 = DAT_00d38e60;
              if (fVar22 != INFINITY) {
                fVar27 = (float)(int)fVar22 / 20.0;
              }
              if (fVar27 <= *(float *)(unaff_x19 + 0x250)) {
                fVar27 = *(float *)(unaff_x19 + 0x250);
              }
              *in_stack_00000010 = fVar27;
              goto LAB_035863e8;
            }
          }
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar27 = *(float *)(unaff_x19 + 0x4c8);
            fVar22 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar27 = fVar27 - fVar22;
            if (((fStack000000000000001c < ABS(fVar27)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
               && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar27;
              *(float *)(unaff_x19 + 0x4d8) = fVar27 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar33 = *(float *)(unaff_x19 + 0x640);
          fVar22 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fVar27 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar22 <= *(float *)(unaff_x19 + 0x4c4)) {
            fVar27 = fVar22;
          }
          *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
          *(float *)(unaff_x19 + 0x4c4) = fVar27;
          *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
          if ((uVar8 & 0x100000000) == 0) {
            fVar22 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar22;
            if (fStack0000000000000038 <= fVar22) {
              fStack0000000000000038 = fVar22;
            }
          }
          else {
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar27;
          }
          FUN_0358c4f0();
          lVar18 = *(long *)(unaff_x19 + 0x488);
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          if (lVar18 == 0) goto LAB_03586310;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
          goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar27 = *(float *)(unaff_x19 + 0x2c0);
          fVar22 = *(float *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x154);
          bVar10 = fVar27 != DAT_00d38ba4;
          if (bVar10) {
            fVar23 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          else {
            fVar23 = fVar22 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
            ;
            fVar27 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          *(bool *)(unaff_x19 + 0x2c4) = bVar10;
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar27 + fVar23;
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar18 = *(long *)puVar7;
          }
          uStack000000000000004c = 0;
          fStack000000000000006c = fStack000000000000006c + fVar33;
          uVar30 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
          uVar30 = NEON_rev64(uVar30,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar22;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar30;
          uStack0000000000000030 = 1;
          fVar27 = fVar29;
        }
        goto LAB_03586300;
      }
      fVar22 = *(float *)(unaff_x19 + 0x350);
      fVar25 = *(float *)(unaff_x19 + 0x354);
      if (!bVar5) goto LAB_03585998;
      if (*unaff_x23 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
      fVar27 = (float)FUN_03776a48(&stack0x00000140,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar23 = *(float *)(unaff_x19 + 0x640);
      fVar33 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
      fVar33 = fVar29 * fVar27 * fVar33;
      fVar27 = fVar33 * (float)(int)(fVar23 / fVar33);
      if (fVar27 <= fVar23) {
        fVar27 = fVar23 + fVar33;
      }
LAB_03585a9c:
      bVar10 = false;
      *(float *)(unaff_x19 + 0x640) = fVar27;
LAB_03585aa4:
      if (*puVar1 == uStack0000000000000070) goto LAB_03585b64;
    }
    fStack0000000000000044 = fVar25;
    fStack0000000000000048 = fVar22;
    if (((uVar8 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
      if ((uVar12 == 0) && (((uVar14 != 0x2d && (uVar14 != 0x200b)) && (uVar14 != 0xad)))) {
        if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
          if (((((0x2bfd < uVar14 - 0xac01) && (0xfd < uVar14 - 0x1101)) && (0x1d < uVar14 - 0xa961)
               ) || (uVar15 = FUN_03597a54(0), (uVar15 & 1) != 0)) &&
             ((((0xed < uVar14 - 0xff01 && (0x1d < uVar14 - 0xfe31)) && (0x717d < uVar14 - 0x2e81))
              && (0x1fd < uVar14 - 0xf901)))) goto LAB_03585adc;
          lVar18 = FUN_035978e8(0);
          if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) goto LAB_03586310;
          uStack00000000000000c0 = uVar14;
          uVar14 = FUN_0219c130(*(long *)(lVar18 + 0x10),&stack0x000000c0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if ((int)uStack0000000000000070 <= (int)*puVar1) {
            if (uStack0000000000000030 != 0 || ((uVar14 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
              FUN_0358c4f0();
            }
LAB_035862c4:
            uStack0000000000000030 = 0;
            bVar6 = true;
            goto LAB_035862f4;
          }
          lVar18 = FUN_035978e8(0);
          if ((lVar18 == 0) || (lVar21 = *in_stack_00000078, lVar21 == 0)) goto LAB_03586310;
          if (*(uint *)(lVar21 + 0x18) <= *puVar1 + 1) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(long *)(lVar18 + 0x18) == 0) goto LAB_03586310;
          uStack00000000000000c0 =
               (uint)*(ushort *)(lVar21 + (long)(int)(*puVar1 + 1) * 0x178 + 0x20);
          uVar15 = FUN_0219c130(*(long *)(lVar18 + 0x18),&stack0x000000c0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if (uStack0000000000000030 == 0 && ((uVar14 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
          if ((uVar15 & 1) == 0) goto LAB_035862b0;
          if (uStack0000000000000030 == 0) goto LAB_035862c4;
          if (uVar12 != 0) {
            FUN_0358c4f0();
          }
          FUN_0358c4f0();
          bVar6 = true;
LAB_03585ccc:
          uStack0000000000000030 = 1;
        }
        else {
LAB_03585adc:
          if (bVar6) {
            lVar18 = FUN_035978e8(0);
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) goto LAB_03586310;
            uStack00000000000000c0 = uVar14;
            uVar15 = FUN_0219c130(*(long *)(lVar18 + 0x10),&stack0x000000c0,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
            if ((uVar15 & 1) == 0) {
              FUN_0358c4f0();
            }
            bVar6 = false;
          }
          else {
            if (uStack0000000000000030 != 0) {
              if ((((uStack000000000000004c | uVar20 ^ 0xffffffff) & 1) == 0) || (uVar12 != 0)) {
                FUN_0358c4f0();
              }
              FUN_0358c4f0();
              bVar6 = false;
              goto LAB_03585ccc;
            }
            bVar6 = false;
            uStack0000000000000030 = 0;
          }
        }
      }
      else {
        if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
        if (((uVar14 - 0x2007 < 0x29) &&
            ((1L << ((ulong)(uVar14 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((uVar14 == 0xa0 || (uVar14 == 0x2060)))) goto LAB_03585d14;
        FUN_0358c4f0();
        bVar6 = false;
        uStack0000000000000030 = 0;
        in_stack_000001a8 = 0xffffffff;
      }
    }
LAB_035862f4:
    *puVar1 = *puVar1 + 1;
    fVar27 = fVar29;
  }
LAB_03586300:
  param_7 = *(long *)(unaff_x19 + 0x478);
  uVar13 = uVar13 + 1;
  if (param_7 == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  goto LAB_035849d0;
}


