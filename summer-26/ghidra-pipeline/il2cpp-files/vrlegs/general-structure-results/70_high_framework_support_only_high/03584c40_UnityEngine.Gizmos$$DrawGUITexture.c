/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawGUITexture
ENTRY_POINT: 03584c40
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


float UnityEngine_Gizmos__DrawGUITexture(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined1 uVar17;
  long unaff_x19;
  uint *unaff_x21;
  int iVar18;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float unaff_s13;
  undefined4 uVar32;
  float unaff_s15;
  float fVar33;
  undefined8 in_stack_00000008;
  float *in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  ulong in_stack_00000040;
  float fStack0000000000000048;
  byte bStack000000000000004c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint in_stack_00000070;
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
  
  uVar6 = in_stack_00000040;
  uVar5 = _uStack0000000000000030;
code_r0x03584c40:
  if (*(uint *)(param_1 + 0x18) <= unaff_w26) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  iVar18 = (int)unaff_x22;
  param_1 = param_1 + (long)(int)unaff_w26 * (long)iVar18;
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0x200b;
  *(undefined4 *)(param_1 + 100) = 0;
  *unaff_x21 = unaff_w26 + 1;
LAB_03586300:
  lVar15 = *(long *)(unaff_x19 + 0x478);
  unaff_w27 = unaff_w27 + 1;
  if (lVar15 != 0) {
    if ((int)*(uint *)(lVar15 + 0x18) <= (int)unaff_w27) {
LAB_03586314:
      if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
           ((_uStack0000000000000018 & 1) == 0)) ||
          (fVar33 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar33)) ||
         (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        fVar33 = *(float *)(unaff_x19 + 0x340);
        fVar20 = *(float *)(unaff_x19 + 0x348);
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        *(undefined1 *)(unaff_x19 + 0x24c) = 1;
        fVar20 = (fStack000000000000006c + fVar33 + fVar20) * 100.0 + 1.0;
        fVar33 = DAT_00d387f8;
        if (fVar20 != INFINITY) {
          fVar33 = (float)(int)fVar20 / 100.0;
        }
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        return fVar33;
      }
      if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
        fVar33 = *in_stack_00000010;
      }
      *(float *)(unaff_x19 + 0x240) = fVar33;
      fVar33 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
      if (fVar33 <= DAT_00d38b84) {
        fVar33 = DAT_00d38b84;
      }
      fVar33 = *in_stack_00000010 + fVar33;
      *in_stack_00000010 = fVar33;
      fVar20 = fVar33 * 20.0 + 0.5;
      fVar33 = DAT_00d38e60;
      if (fVar20 != INFINITY) {
        fVar33 = (float)(int)fVar20 / 20.0;
      }
      if (*(float *)(unaff_x19 + 0x254) <= fVar33) {
        fVar33 = *(float *)(unaff_x19 + 0x254);
      }
      *in_stack_00000010 = fVar33;
      goto LAB_035863e8;
    }
    if (*(uint *)(lVar15 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
    uVar12 = *(uint *)(lVar15 + (long)(int)unaff_w27 * 0xc + 0x20);
    if (uVar12 == 0) goto LAB_03586314;
    if ((uVar12 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03584a00;
    if ((*(long *)(unaff_x19 + 0x368) != 0) &&
       (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 != 0)) {
      if (*unaff_x21 < *(uint *)(lVar15 + 0x18)) {
        lVar15 = lVar15 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar15 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar15 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar15 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        goto LAB_03584a74;
      }
      goto UnityEngine_LightProbesQuery__get_IsCreated;
    }
  }
  goto LAB_03586310;
code_r0x03584a00:
  *(undefined1 *)(unaff_x19 + 0x431) = 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  uVar13 = FUN_03586568();
  if (((uVar13 & 1) != 0) && (unaff_w27 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03586300;
LAB_03584a74:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0)) goto LAB_03586310;
  unaff_w26 = *unaff_x21;
  if (*(uint *)(lVar15 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
  lVar19 = (long)(int)unaff_w26;
  cVar2 = *(char *)(lVar15 + lVar19 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar30 = *(undefined4 *)(unaff_x19 + 0x120);
  if (in_stack_00000c10 == unaff_w26) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000c14 == 0x2026) {
      lVar15 = *in_stack_00000078;
      if (lVar15 == 0) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar15 + lVar19 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar15 = *in_stack_00000078;
      if (lVar15 == 0) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar15 = lVar15 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar15 + 0x2c) = 0;
      *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar15 = *(long *)(unaff_x19 + 0x488);
      if (lVar15 == 0) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
      goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar15 = *in_stack_00000078;
      if (lVar15 == 0) goto LAB_03586310;
      unaff_w26 = *unaff_x21;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
      bVar8 = true;
      in_stack_00000c10 = unaff_w26 + 1;
      *(undefined4 *)(lVar15 + (long)(int)unaff_w26 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      uVar12 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000c14 = 3;
      goto LAB_03584c20;
    }
    if (in_stack_00000c14 != 3) {
      bVar8 = true;
      uVar12 = in_stack_00000c14;
      goto LAB_03584c20;
    }
    lVar15 = *in_stack_00000078;
    if (((lVar15 == 0) || (*unaff_x23 == 0)) || (lVar14 = FUN_03568ac0(*unaff_x23,0), lVar14 == 0))
    goto LAB_03586310;
    FUN_0219b634(lVar14,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
    if (*(uint *)(lVar15 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(ulong *)(lVar15 + lVar19 * unaff_x22 + 0x30) =
         CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    bVar8 = true;
    uVar12 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar8 = false;
LAB_03584c20:
    if ((uVar12 != 3) && ((int)unaff_w26 < *(int *)(unaff_x19 + 0x324))) goto code_r0x03584c34;
  }
  iVar10 = *(int *)(unaff_x19 + 0x644);
  if (iVar10 == 0) {
    uVar11 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar11 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b812c(uVar12,0);
          fStack0000000000000068 = 1.0;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b8410(uVar12,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03584f98;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8070(uVar12,0);
        fStack0000000000000068 = 1.0;
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b8594(uVar12,0);
          goto LAB_03584f98;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b812c(uVar12,0);
      fStack0000000000000068 = 1.0;
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b8410(uVar12,0);
LAB_03584f98:
        uVar12 = uVar12 & 0xffff;
      }
    }
    iVar10 = *(int *)(unaff_x19 + 0x644);
    if (iVar10 != 0) goto LAB_03584c80;
LAB_03584fa4:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar15 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *unaff_x25 = *(long *)(lVar15 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x25 == 0) goto LAB_03586300;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0)) goto LAB_03586310;
    uVar1 = *unaff_x21;
    uVar11 = *(uint *)(lVar15 + 0x18);
    if (uVar11 <= uVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar15 + (long)(int)uVar1 * unaff_x22 + 0x58);
    if (bVar8) {
      lVar19 = *(long *)(unaff_x19 + 0x478);
      if (lVar19 == 0) goto LAB_03586310;
      if (*(uint *)(lVar19 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar19 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar1 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar11 <= uVar1 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar33 = *(float *)(lVar15 + (long)(int)(uVar1 - 1) * (long)iVar18 + 0x60);
      iVar10 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar15 = *unaff_x23;
    }
    else {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar33 = *(float *)(unaff_x19 + 0x1e8);
      iVar10 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar15 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar15 == 0) goto LAB_03586310;
    fVar29 = (float)FUN_03776960(lVar15 + 0x50,0);
    fVar28 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar28 = 1.0;
    }
    fVar20 = 0.0;
    fVar22 = 0.0;
    if (!(bool)(bVar8 & uVar12 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar22 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar20 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar15 = *(long *)(unaff_x19 + 0x488), lVar15 == 0))
    goto LAB_03586310;
    uVar11 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_s15 = ((fStack0000000000000068 * fVar33) / (float)iVar10) * fVar29 * fVar28 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar15 + (long)(int)uVar11 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    bVar8 = uVar12 == 0xad;
    fVar33 = unaff_s13;
    if (!bVar8 && uVar12 != 3) {
      fVar33 = unaff_s15;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar10 == 0) goto LAB_03584fa4;
LAB_03584c80:
    if (iVar10 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar15 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar15 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar15 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar15 == 0
         )) goto LAB_03586310;
      FUN_02215a88(lVar15,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      lVar15 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      if (lVar15 == 0) goto LAB_03586300;
      if (uVar12 == 0x3c) {
        uVar12 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar10 = FUN_03776950(&stack0x00000140,0);
      fVar33 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar10 < 1) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        iVar10 = FUN_03776950(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar28 = (float)FUN_03776960(&stack0x00000140,0);
        fVar20 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar20 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar29 = (float)FUN_03776980(&stack0x00000140,0);
        if (*(long *)(lVar15 + 0x20) == 0) goto LAB_03586310;
        FUN_03776e6c(&stack0x000000c0,*(long *)(lVar15 + 0x20),0);
        in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000110 = in_stack_000000d0;
        fVar21 = (float)FUN_03776c9c(&stack0x00000100,0);
        if (*(long *)(lVar15 + 0x20) == 0) goto LAB_03586310;
        fVar26 = *(float *)(lVar15 + 0x2c);
        fVar23 = (float)FUN_03776ea8(*(long *)(lVar15 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar22 = (float)FUN_03776980(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar20 = (fVar33 / (float)iVar10) * fVar28 * fVar20;
        unaff_s15 = fVar20 * (fVar29 / fVar21) * fVar26 * fVar23;
        fVar20 = fVar20 / unaff_s15;
        fVar22 = fVar20 * fVar22;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar33 = (float)FUN_037769c0(&stack0x00000140,0);
        fVar20 = fVar20 * fVar33;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar10 = FUN_03776950(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar20 = (float)FUN_03776960(&stack0x00000140,0);
        if (*(long *)(lVar15 + 0x20) == 0) goto LAB_03586310;
        fVar29 = *(float *)(lVar15 + 0x2c);
        fVar28 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar28 = 1.0;
        }
        fVar21 = (float)FUN_03776ea8(*(long *)(lVar15 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar22 = (float)FUN_03776980(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        unaff_s15 = (fVar33 / (float)iVar10) * fVar20 * fVar28 * fVar29 * fVar21;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar20 = (float)FUN_037769c0(&stack0x00000140,0);
      }
      *unaff_x25 = lVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      unaff_s13 = 0.0;
      lVar15 = *in_stack_00000078;
      if (lVar15 == 0) goto LAB_03586310;
      uVar11 = *unaff_x21;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar19 = lVar15 + (long)(int)uVar11 * unaff_x22;
      *(undefined4 *)(lVar19 + 0x2c) = 1;
      *(float *)(lVar19 + 0x160) = unaff_s15;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar30;
      goto LAB_035852d0;
    }
    bVar8 = uVar12 == 0xad;
    lVar15 = *in_stack_00000078;
    fVar22 = 0.0;
    fVar33 = 0.0;
    if (!bVar8 && uVar12 != 3) {
      fVar33 = unaff_s15;
    }
    if (lVar15 == 0) goto LAB_03586310;
    uVar11 = *unaff_x21;
    fVar20 = 0.0;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
  *(short *)(lVar15 + (long)(int)uVar11 * (long)iVar18 + 0x20) = (short)uVar12;
  if ((*unaff_x25 == 0) || (lVar15 = *(long *)(*unaff_x25 + 0x20), lVar15 == 0)) goto LAB_03586310;
  FUN_03776e6c(&stack0x000000c0,lVar15,0);
  in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000130 = in_stack_000000d0;
  if ((int)uVar12 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b63d8(uVar12,0);
    uVar11 = uVar11 & 1;
  }
  else {
    uVar11 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar28 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03586310;
    uVar16 = *unaff_x21;
    uVar1 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar16 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= uVar16 + 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar15 = *(long *)(lVar15 + (long)(int)(uVar16 + 1) * (long)iVar18 + 0x30);
      if ((((lVar15 == 0) || (*unaff_x23 == 0)) ||
          (lVar19 = *(long *)(*unaff_x23 + 0x128), lVar19 == 0)) ||
         (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)) goto LAB_03586310;
      uStack00000000000000c0 = uVar1 | *(int *)(lVar15 + 0x28) << 0x10;
      uVar13 = FUN_0219f8b8(lVar19,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar30 = 0;
      if ((uVar13 & 1) == 0) {
        uVar31 = 0;
        fVar28 = 0.0;
        uVar32 = 0;
      }
      else {
        if (in_stack_000000f8 == 0) goto LAB_03586310;
        uVar30 = *(undefined4 *)(in_stack_000000f8 + 0x14);
        uVar31 = *(undefined4 *)(in_stack_000000f8 + 0x18);
        fVar28 = *(float *)(in_stack_000000f8 + 0x1c);
        uVar32 = *(undefined4 *)(in_stack_000000f8 + 0x20);
        if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar16 = *unaff_x21;
    }
    else {
      uVar30 = 0;
      uVar31 = 0;
      fVar28 = 0.0;
      uVar32 = 0;
    }
    if (0 < (int)uVar16) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= uVar16 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar15 = *(long *)(lVar15 + (ulong)(uVar16 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar15 == 0) || (*unaff_x23 == 0)) ||
         ((lVar19 = *(long *)(*unaff_x23 + 0x128), lVar19 == 0 ||
          (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)))) goto LAB_03586310;
      uStack00000000000000c0 = *(uint *)(lVar15 + 0x28) | uVar1 << 0x10;
      uVar13 = FUN_0219f8b8(lVar19,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar13 & 1) != 0) {
        if ((in_stack_000000f8 == 0) ||
           (FUN_03571cb4(uVar30,uVar31,fVar28,uVar32,*(undefined4 *)(in_stack_000000f8 + 0x28),
                         *(undefined4 *)(in_stack_000000f8 + 0x2c),
                         *(undefined4 *)(in_stack_000000f8 + 0x30),
                         *(undefined4 *)(in_stack_000000f8 + 0x34),0), in_stack_000000f8 == 0))
        goto LAB_03586310;
        if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
    }
    unaff_s13 = 0.0;
    *(float *)(unaff_x19 + 0x2fc) = fVar28;
  }
  fStack0000000000000060 = 0.0;
  fVar29 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar29 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar15 = *(long *)(*unaff_x25 + 0x20), lVar15 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar15,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar21 = (float)FUN_03776c94(&stack0x00000100,0);
    if ((*unaff_x25 == 0) || (lVar15 = *(long *)(*unaff_x25 + 0x20), lVar15 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar15,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar23 = (float)FUN_03776ca4(&stack0x00000100,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar29 * 0.5 - fVar33 * (fVar21 * 0.5 + fVar23));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar10 = *(int *)(unaff_x19 + 0x644);
  fVar29 = 0.0;
  if (((cVar2 == '\0') && (fVar29 = 0.0, iVar10 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar29 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar15 = *in_stack_00000078;
  if (lVar15 == 0) goto LAB_03586310;
  uVar1 = *unaff_x21;
  lVar19 = (long)(int)uVar1;
  if (*(uint *)(lVar15 + 0x18) <= uVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
  fVar21 = *(float *)(unaff_x19 + 0x4d8);
  fVar23 = *(float *)(unaff_x19 + 0x61c);
  fVar22 = fVar22 * fVar33;
  *(float *)(lVar15 + lVar19 * unaff_x22 + 0x14c) = (unaff_s13 - fVar21) + fVar23;
  if (iVar10 == 0) {
    fVar22 = fVar22 / fStack0000000000000068;
    fVar20 = (fVar20 * fVar33) / fStack0000000000000068;
  }
  else {
    fVar20 = fVar20 * fVar33;
  }
  fVar22 = fVar23 + fVar22;
  if ((uVar11 == 0) || (uVar1 == *(uint *)(unaff_x19 + 0x498))) {
    fVar20 = fVar23 + fVar20;
    fVar26 = fVar22;
    fVar24 = fVar20;
    if (fVar23 != 0.0) {
      fVar26 = (fVar22 - fVar23) / *(float *)(unaff_x19 + 0x404);
      fVar24 = (fVar20 - fVar23) / *(float *)(unaff_x19 + 0x404);
      if (fVar26 <= fVar22) {
        fVar26 = fVar22;
      }
      if (fVar20 <= fVar24) {
        fVar24 = fVar20;
      }
    }
    lVar15 = lVar15 + lVar19 * unaff_x22;
    fVar23 = fVar26;
    if (fVar26 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar23 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar27 = fVar24;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar24) {
      fVar27 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar27;
    *(float *)(unaff_x19 + 0x4c8) = fVar23;
    *(float *)(lVar15 + 0x154) = fVar26;
    *(float *)(lVar15 + 0x158) = fVar24;
    *(float *)(lVar15 + 0x148) = fVar22 - fVar21;
    *(float *)(unaff_x19 + 0x4c0) = fVar22 - fVar21;
    *(float *)(lVar15 + 0x150) = fVar20 - fVar21;
    *(float *)(unaff_x19 + 0x4c4) = fVar20 - fVar21;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar23;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
      fVar20 = *(float *)(unaff_x19 + 0x4bc);
      fVar21 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (fVar33 * fVar21) / fStack0000000000000068;
      fVar21 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar20 <= fStack0000000000000068) {
        fVar20 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar20;
    }
  }
  else {
    fVar20 = *(float *)(unaff_x19 + 0x4c8);
    lVar15 = lVar15 + lVar19 * unaff_x22;
    *(float *)(lVar15 + 0x154) = fVar20;
    fVar23 = *(float *)(unaff_x19 + 0x4cc);
    fVar20 = fVar20 - fVar21;
    *(float *)(lVar15 + 0x148) = fVar20;
    *(float *)(lVar15 + 0x158) = fVar23;
    *(float *)(unaff_x19 + 0x4c0) = fVar20;
    fVar23 = fVar23 - fVar21;
    *(float *)(lVar15 + 0x150) = fVar23;
    *(float *)(unaff_x19 + 0x4c4) = fVar23;
  }
  if (fVar21 == 0.0) {
    if ((uVar11 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar20 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar22) {
        fVar20 = fVar22;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar20;
      goto LAB_035857b0;
    }
    bVar9 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar12 != 9) goto LAB_03585804;
LAB_035857c4:
    bVar3 = true;
LAB_03585820:
    fVar21 = *(float *)(unaff_x19 + 0x360);
    fVar23 = *(float *)(unaff_x19 + 0x640);
    fVar20 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar7 = true;
    if ((fVar21 <= fVar20) && (bVar7 = false, !NAN(fVar21))) {
      bVar7 = fVar21 == -1.0;
    }
    if (!bVar7) {
      fVar20 = fVar21;
    }
    fVar21 = (float)FUN_03776cb4(&stack0x00000120,0);
    if (bVar8 == false) {
      unaff_s15 = fVar33;
    }
    fVar26 = 1.0;
    if (!bVar9) {
      fVar26 = DAT_00d38acc;
    }
    fStack000000000000005c =
         ABS(fVar23) + unaff_s15 * fVar21 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar26 * fVar20 < fStack000000000000005c && (uVar6 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_0358c15c();
      lVar15 = *(long *)(unaff_x19 + 0x488);
      if (lVar15 == 0) goto LAB_03586310;
      uVar12 = *(uint *)(unaff_x19 + 0x494);
      uVar11 = uVar12 - 1;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar15 + (long)(int)uVar11 * (long)iVar18 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        in_stack_00000c14 = 0x2d;
        *unaff_x21 = uVar11;
        unaff_w27 = unaff_w27 - 1;
        unaff_s15 = fVar33;
        in_stack_00000c10 = uVar11;
        goto LAB_03586300;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*(short *)(lVar15 + (long)(int)uVar12 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        unaff_s15 = fVar33;
        goto LAB_03586300;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) == 0) {
LAB_03586060:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar20 = *(float *)(unaff_x19 + 0x4c8);
          fVar28 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar20 = fVar20 - fVar28;
          if (((fStack000000000000001c < ABS(fVar20)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar20;
            *(float *)(unaff_x19 + 0x4d8) = fVar20 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar29 = *(float *)(unaff_x19 + 0x640);
        fVar28 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar20 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar28 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar20 = fVar28;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar20;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar5 & 0x100000000) == 0) {
          fVar28 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar28;
          if (fStack0000000000000038 <= fVar28) {
            fStack0000000000000038 = fVar28;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar20;
        }
        FUN_0358c4f0();
        lVar15 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar15 == 0) goto LAB_03586310;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        fVar20 = *(float *)(unaff_x19 + 0x2c0);
        fVar28 = *(float *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar8 = fVar20 != DAT_00d38ba4;
        if (bVar8) {
          fVar21 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar21 = fVar28 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar20 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar8;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar20 + fVar21;
        puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar4;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar29;
        uVar25 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar25 = NEON_rev64(uVar25,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar28;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar25;
        uStack0000000000000030 = 1;
        unaff_s15 = fVar33;
        goto LAB_03586300;
      }
      fVar28 = *(float *)(unaff_x19 + 0x2d4);
      fVar29 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
      if ((fVar29 <= fVar28) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        if ((*in_stack_00000010 <= *(float *)(unaff_x19 + 0x250)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03586060;
        *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
        fVar33 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
        if (fVar33 <= DAT_00d38b84) {
          fVar33 = DAT_00d38b84;
        }
        fVar33 = *in_stack_00000010 - fVar33;
        *in_stack_00000010 = fVar33;
        fVar20 = fVar33 * 20.0 + 0.5;
        fVar33 = DAT_00d38e60;
        if (fVar20 != INFINITY) {
          fVar33 = (float)(int)fVar20 / 20.0;
        }
        if (fVar33 <= *(float *)(unaff_x19 + 0x250)) {
          fVar33 = *(float *)(unaff_x19 + 0x250);
        }
        *in_stack_00000010 = fVar33;
      }
      else {
        fVar33 = fStack000000000000005c;
        if (0.0 < fVar28) {
          fVar33 = fStack000000000000005c / (1.0 - fVar28);
        }
        fVar28 = fVar28 + (fStack000000000000005c - fVar26 * (fVar20 + DAT_00d38cc4)) / fVar33;
        if (fVar29 <= fVar28) {
          fVar28 = fVar29;
        }
        *(float *)(unaff_x19 + 0x2d4) = fVar28;
      }
LAB_035863e8:
      if (DAT_0411f1e3 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbeb70);
        DAT_0411f1e3 = '\x01';
      }
      return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
    }
    fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
    in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
    if (!bVar3) goto LAB_03585998;
    if (*unaff_x23 == 0) goto LAB_03586310;
    memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
    fVar20 = (float)FUN_03776a48(&stack0x00000140,0);
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar29 = *(float *)(unaff_x19 + 0x640);
    fVar28 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar28 = fVar33 * fVar20 * fVar28;
    fVar20 = fVar28 * (float)(int)(fVar29 / fVar28);
    if (fVar20 <= fVar29) {
      fVar20 = fVar29 + fVar28;
    }
LAB_03585a9c:
    bVar9 = false;
    *(float *)(unaff_x19 + 0x640) = fVar20;
LAB_03585aa4:
    if (*unaff_x21 == in_stack_00000070) goto LAB_03585b64;
  }
  else {
LAB_035857b0:
    bVar9 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar12 == 9) goto LAB_035857c4;
    if ((((uVar11 == 0) && (uVar12 != 3)) && (uVar12 != 0x200b)) && (uVar12 != 0xad)) {
UnityEngine_Display__Activate:
      bVar3 = false;
      goto LAB_03585820;
    }
LAB_03585804:
    if ((((bStack000000000000004c | bVar8 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x644) == 1))
    goto UnityEngine_Display__Activate;
LAB_03585998:
    fVar20 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar21 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar28 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               fVar33 * (fVar28 + fVar21) +
               fStack0000000000000058 *
               (fVar29 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar28 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar20 = fVar20 + fVar28;
    *(float *)(unaff_x19 + 0x640) = fVar20;
    if ((uVar12 == 0x200b) || (uVar11 != 0)) {
      fVar20 = fVar20 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar20;
    }
    if (uVar12 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar20) {
        fStack0000000000000064 = fStack000000000000006c + fVar20;
      }
      fStack000000000000006c = 0.0;
      fVar20 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03585a9c;
    }
    bVar9 = uVar12 == 10;
    if (((0xb < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0xc08U) == 0)) && (1 < uVar12 - 0x2028))
    goto LAB_03585aa4;
LAB_03585b64:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar20 = *(float *)(unaff_x19 + 0x4c8);
      fVar28 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar20 = fVar20 - fVar28;
      if (((fStack000000000000001c < ABS(fVar20)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
         (*(char *)(unaff_x19 + 0x33c) == '\0')) {
        *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar20;
        *(float *)(unaff_x19 + 0x4d8) = fVar20 + *(float *)(unaff_x19 + 0x4d8);
      }
    }
    fVar20 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
    if (fVar20 <= *(float *)(unaff_x19 + 0x4c4)) {
      fStack0000000000000038 = fVar20;
    }
    fVar28 = in_stack_00000040._4_4_ +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar20 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar28) {
      fVar20 = fVar28;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar20;
    if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
      fStack000000000000006c = unaff_s13;
      fStack0000000000000064 = fVar20;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if (bVar9) {
LAB_03585e8c:
      FUN_0358c4f0();
      FUN_0358c4f0();
      uVar11 = *(uint *)(unaff_x19 + 0x494);
      lVar15 = *(long *)(unaff_x19 + 0x488);
      iVar10 = uVar11 + 1;
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      *(int *)(unaff_x19 + 0x498) = iVar10;
      if (lVar15 == 0) goto LAB_03586310;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
      fVar20 = *(float *)(lVar15 + (long)(int)uVar11 * unaff_x22 + 0x154);
      if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
        fVar28 = 0.0;
        if (!(bool)(uVar12 != 0x2029 & (bVar9 ^ 1U))) {
          fVar28 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar17 = 0;
        fVar28 = fVar20 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                 fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar28) +
                 *(float *)(unaff_x19 + 0x4d8);
      }
      else {
        fVar28 = 0.0;
        if (!(bool)(uVar12 != 0x2029 & (bVar9 ^ 1U))) {
          fVar28 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar17 = 1;
        fVar28 = *(float *)(unaff_x19 + 0x4d8) +
                 *(float *)(unaff_x19 + 0x2c0) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar28);
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar28;
      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar17;
      puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *(long *)puVar4;
        iVar10 = *unaff_x21 + 1;
      }
      uVar25 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 0x640) =
           *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
      uVar25 = NEON_rev64(uVar25,4);
      *(float *)(unaff_x19 + 0x4d0) = fVar20;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar25;
      *(int *)(unaff_x19 + 0x494) = iVar10;
      unaff_s15 = fVar33;
      goto LAB_03586300;
    }
    if ((int)uVar12 < 0x2028) {
      if (uVar12 == 3) {
        if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
        unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
        uVar12 = 3;
      }
      else if ((uVar12 == 0xb) || (uVar12 == 0x2d)) goto LAB_03585e8c;
    }
    else if (uVar12 - 0x2028 < 2) goto LAB_03585e8c;
  }
  if (((uVar5 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3)) goto LAB_035862f4;
  if ((uVar11 == 0) && (((uVar12 != 0x2d && (uVar12 != 0x200b)) && (uVar12 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
LAB_03585d14:
    if (((((0x2bfd < uVar12 - 0xac01) && (0xfd < uVar12 - 0x1101)) && (0x1d < uVar12 - 0xa961)) ||
        (uVar13 = FUN_03597a54(0), (uVar13 & 1) != 0)) &&
       ((((0xed < uVar12 - 0xff01 && (0x1d < uVar12 - 0xfe31)) && (0x717d < uVar12 - 0x2e81)) &&
        (0x1fd < uVar12 - 0xf901)))) goto LAB_03585adc;
    lVar15 = FUN_035978e8(0);
    if ((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) goto LAB_03586310;
    uStack00000000000000c0 = uVar12;
    uVar12 = FUN_0219c130(*(long *)(lVar15 + 0x10),&stack0x000000c0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000070 <= (int)*unaff_x21) {
      if (((uStack0000000000000030 | uVar12 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
        FUN_0358c4f0();
      }
LAB_035862c4:
      uStack0000000000000030 = 0;
      uStack0000000000000028 = 1;
      goto LAB_035862f4;
    }
    lVar15 = FUN_035978e8(0);
    if ((lVar15 == 0) || (lVar19 = *in_stack_00000078, lVar19 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar19 + 0x18) <= *unaff_x21 + 1)
    goto UnityEngine_LightProbesQuery__get_IsCreated;
    if (*(long *)(lVar15 + 0x18) == 0) goto LAB_03586310;
    uStack00000000000000c0 =
         (uint)*(ushort *)(lVar19 + (long)(int)(*unaff_x21 + 1) * (long)iVar18 + 0x20);
    uVar13 = FUN_0219c130(*(long *)(lVar15 + 0x18),&stack0x000000c0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if (((uStack0000000000000030 | uVar12 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
    if ((uVar13 & 1) == 0) goto LAB_035862b0;
    if ((uStack0000000000000030 & 1) == 0) goto LAB_035862c4;
    if (uVar11 != 0) {
      FUN_0358c4f0();
    }
    FUN_0358c4f0();
    uStack0000000000000028 = 1;
  }
  else {
    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
      if (((0x28 < uVar12 - 0x2007) ||
          ((1L << ((ulong)(uVar12 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((uVar12 != 0xa0 && (uVar12 != 0x2060)))) {
        FUN_0358c4f0();
        uStack0000000000000028 = 0;
        uStack0000000000000030 = 0;
        in_stack_000001a8 = 0xffffffff;
        goto LAB_035862f4;
      }
      goto LAB_03585d14;
    }
LAB_03585adc:
    if ((uStack0000000000000028 & 1) != 0) {
      lVar15 = FUN_035978e8(0);
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) goto LAB_03586310;
      uStack00000000000000c0 = uVar12;
      uVar13 = FUN_0219c130(*(long *)(lVar15 + 0x10),&stack0x000000c0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((uVar13 & 1) == 0) {
        FUN_0358c4f0();
      }
      uStack0000000000000028 = 0;
      goto LAB_035862f4;
    }
    if ((uStack0000000000000030 & 1) == 0) {
      uStack0000000000000028 = 0;
      uStack0000000000000030 = 0;
      goto LAB_035862f4;
    }
    if ((((bStack000000000000004c | bVar8 ^ 0xffU) & 1) == 0) || (uVar11 != 0)) {
      FUN_0358c4f0();
    }
    FUN_0358c4f0();
    uStack0000000000000028 = 0;
  }
  uStack0000000000000030 = 1;
LAB_035862f4:
  *unaff_x21 = *unaff_x21 + 1;
  unaff_s15 = fVar33;
  goto LAB_03586300;
code_r0x03584c34:
  param_1 = *in_stack_00000078;
  if (param_1 == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  goto code_r0x03584c40;
}


