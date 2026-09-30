/*
FUNCTION_NAME: UnityEngine.Display$$RelativeMouseAt
ENTRY_POINT: 03585b20
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


float UnityEngine_Display__RelativeMouseAt(void)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined1 uVar18;
  long unaff_x19;
  uint *unaff_x21;
  int iVar19;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w27;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float unaff_s13;
  float unaff_s14;
  float fVar34;
  undefined8 in_stack_00000008;
  float *in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
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
  
  uVar7 = in_stack_00000040;
  uVar6 = _uStack0000000000000030;
code_r0x03585b20:
  FUN_0358c4f0();
LAB_03585b28:
  bVar4 = false;
LAB_035862f4:
  *unaff_x21 = *unaff_x21 + 1;
  fVar34 = unaff_s14;
LAB_03586300:
  lVar16 = *(long *)(unaff_x19 + 0x478);
  unaff_w27 = unaff_w27 + 1;
  if (lVar16 != 0) {
    if ((int)*(uint *)(lVar16 + 0x18) <= (int)unaff_w27) {
LAB_03586314:
      if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
           ((_uStack0000000000000018 & 1) == 0)) ||
          (fVar34 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar34)) ||
         (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        fVar34 = *(float *)(unaff_x19 + 0x340);
        fVar21 = *(float *)(unaff_x19 + 0x348);
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        *(undefined1 *)(unaff_x19 + 0x24c) = 1;
        fVar21 = (fStack000000000000006c + fVar34 + fVar21) * 100.0 + 1.0;
        fVar34 = DAT_00d387f8;
        if (fVar21 != INFINITY) {
          fVar34 = (float)(int)fVar21 / 100.0;
        }
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        return fVar34;
      }
      if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
        fVar34 = *in_stack_00000010;
      }
      *(float *)(unaff_x19 + 0x240) = fVar34;
      fVar34 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
      if (fVar34 <= DAT_00d38b84) {
        fVar34 = DAT_00d38b84;
      }
      fVar34 = *in_stack_00000010 + fVar34;
      *in_stack_00000010 = fVar34;
      fVar21 = fVar34 * 20.0 + 0.5;
      fVar34 = DAT_00d38e60;
      if (fVar21 != INFINITY) {
        fVar34 = (float)(int)fVar21 / 20.0;
      }
      if (*(float *)(unaff_x19 + 0x254) <= fVar34) {
        fVar34 = *(float *)(unaff_x19 + 0x254);
      }
      *in_stack_00000010 = fVar34;
      goto LAB_035863e8;
    }
    if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
    uVar13 = *(uint *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20);
    if (uVar13 == 0) goto LAB_03586314;
    if ((uVar13 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03584a00;
    if ((*(long *)(unaff_x19 + 0x368) != 0) &&
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 != 0)) {
      if (*unaff_x21 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar16 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar16 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar16 + 0x38);
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
  uVar14 = FUN_03586568();
  if (((uVar14 & 1) != 0) && (unaff_w27 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03586300;
LAB_03584a74:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03586310;
  uVar12 = *unaff_x21;
  if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
  lVar20 = (long)(int)uVar12;
  cVar2 = *(char *)(lVar16 + lVar20 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar31 = *(undefined4 *)(unaff_x19 + 0x120);
  iVar19 = (int)unaff_x22;
  if (in_stack_00000c10 == uVar12) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000c14 == 0x2026) {
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar16 + lVar20 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar16 = lVar16 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar16 + 0x2c) = 0;
      *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar16 = *(long *)(unaff_x19 + 0x488);
      if (lVar16 == 0) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
      goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03586310;
      uVar12 = *unaff_x21;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      bVar9 = true;
      in_stack_00000c10 = uVar12 + 1;
      *(undefined4 *)(lVar16 + (long)(int)uVar12 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      uVar13 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000c14 = 3;
      goto LAB_03584c20;
    }
    if (in_stack_00000c14 != 3) {
      bVar9 = true;
      uVar13 = in_stack_00000c14;
      goto LAB_03584c20;
    }
    lVar16 = *in_stack_00000078;
    if (((lVar16 == 0) || (*unaff_x23 == 0)) || (lVar15 = FUN_03568ac0(*unaff_x23,0), lVar15 == 0))
    goto LAB_03586310;
    FUN_0219b634(lVar15,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(ulong *)(lVar16 + lVar20 * unaff_x22 + 0x30) =
         CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    bVar9 = true;
    uVar13 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar9 = false;
LAB_03584c20:
    if ((uVar13 != 3) && ((int)uVar12 < *(int *)(unaff_x19 + 0x324))) {
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar16 = lVar16 + (long)(int)uVar12 * (long)iVar19;
      *(undefined1 *)(lVar16 + 0x194) = 0;
      *(undefined2 *)(lVar16 + 0x20) = 0x200b;
      *(undefined4 *)(lVar16 + 100) = 0;
      *unaff_x21 = uVar12 + 1;
      goto LAB_03586300;
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
          uVar14 = FUN_026b812c(uVar13,0);
          fStack0000000000000068 = 1.0;
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b8410(uVar13,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03584f98;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8070(uVar13,0);
        fStack0000000000000068 = 1.0;
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b8594(uVar13,0);
          goto LAB_03584f98;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b812c(uVar13,0);
      fStack0000000000000068 = 1.0;
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8410(uVar13,0);
LAB_03584f98:
        uVar13 = uVar13 & 0xffff;
      }
    }
    iVar11 = *(int *)(unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03584c80;
LAB_03584fa4:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *unaff_x25 = *(long *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x25 == 0) goto LAB_03586300;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03586310;
    uVar1 = *unaff_x21;
    uVar12 = *(uint *)(lVar16 + 0x18);
    if (uVar12 <= uVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar16 + (long)(int)uVar1 * unaff_x22 + 0x58);
    if (bVar9) {
      lVar20 = *(long *)(unaff_x19 + 0x478);
      if (lVar20 == 0) goto LAB_03586310;
      if (*(uint *)(lVar20 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar20 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar1 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar12 <= uVar1 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar34 = *(float *)(lVar16 + (long)(int)(uVar1 - 1) * (long)iVar19 + 0x60);
      iVar11 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar16 = *unaff_x23;
    }
    else {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar34 = *(float *)(unaff_x19 + 0x1e8);
      iVar11 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar16 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar16 == 0) goto LAB_03586310;
    fVar30 = (float)FUN_03776960(lVar16 + 0x50,0);
    fVar29 = in_stack_00000028._4_4_;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar29 = 1.0;
    }
    fVar21 = 0.0;
    fVar23 = 0.0;
    if (!(bool)(bVar9 & uVar13 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar23 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar21 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar16 = *(long *)(unaff_x19 + 0x488), lVar16 == 0))
    goto LAB_03586310;
    uVar12 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
    fVar34 = ((fStack0000000000000068 * fVar34) / (float)iVar11) * fVar30 * fVar29 *
             *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar16 + (long)(int)uVar12 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    bVar9 = uVar13 == 0xad;
    unaff_s14 = unaff_s13;
    if (!bVar9 && uVar13 != 3) {
      unaff_s14 = fVar34;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar11 == 0) goto LAB_03584fa4;
LAB_03584c80:
    if (iVar11 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar16 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar16 == 0
         )) goto LAB_03586310;
      FUN_02215a88(lVar16,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      lVar16 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      if (lVar16 == 0) goto LAB_03586300;
      if (uVar13 == 0x3c) {
        uVar13 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar11 = FUN_03776950(&stack0x00000140,0);
      fVar34 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar11 < 1) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar29 = (float)FUN_03776960(&stack0x00000140,0);
        fVar21 = in_stack_00000028._4_4_;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar21 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar30 = (float)FUN_03776980(&stack0x00000140,0);
        if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03586310;
        FUN_03776e6c(&stack0x000000c0,*(long *)(lVar16 + 0x20),0);
        in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000110 = in_stack_000000d0;
        fVar22 = (float)FUN_03776c9c(&stack0x00000100,0);
        if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03586310;
        fVar27 = *(float *)(lVar16 + 0x2c);
        fVar24 = (float)FUN_03776ea8(*(long *)(lVar16 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar23 = (float)FUN_03776980(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar21 = (fVar34 / (float)iVar11) * fVar29 * fVar21;
        fVar34 = fVar21 * (fVar30 / fVar22) * fVar27 * fVar24;
        fVar21 = fVar21 / fVar34;
        fVar23 = fVar21 * fVar23;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar29 = (float)FUN_037769c0(&stack0x00000140,0);
        fVar21 = fVar21 * fVar29;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar11 = FUN_03776950(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar21 = (float)FUN_03776960(&stack0x00000140,0);
        if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03586310;
        fVar30 = *(float *)(lVar16 + 0x2c);
        fVar29 = in_stack_00000028._4_4_;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar29 = 1.0;
        }
        fVar22 = (float)FUN_03776ea8(*(long *)(lVar16 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar23 = (float)FUN_03776980(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        fVar34 = (fVar34 / (float)iVar11) * fVar21 * fVar29 * fVar30 * fVar22;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar21 = (float)FUN_037769c0(&stack0x00000140,0);
      }
      *unaff_x25 = lVar16;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      unaff_s13 = 0.0;
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03586310;
      uVar12 = *unaff_x21;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar20 = lVar16 + (long)(int)uVar12 * unaff_x22;
      *(undefined4 *)(lVar20 + 0x2c) = 1;
      *(float *)(lVar20 + 0x160) = fVar34;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar31;
      goto LAB_035852d0;
    }
    bVar9 = uVar13 == 0xad;
    lVar16 = *in_stack_00000078;
    fVar23 = 0.0;
    unaff_s14 = 0.0;
    if (!bVar9 && uVar13 != 3) {
      unaff_s14 = fVar34;
    }
    if (lVar16 == 0) goto LAB_03586310;
    uVar12 = *unaff_x21;
    fVar21 = 0.0;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
  *(short *)(lVar16 + (long)(int)uVar12 * (long)iVar19 + 0x20) = (short)uVar13;
  if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0)) goto LAB_03586310;
  FUN_03776e6c(&stack0x000000c0,lVar16,0);
  in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000130 = in_stack_000000d0;
  if ((int)uVar13 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(uVar13,0);
    uVar12 = uVar12 & 1;
  }
  else {
    uVar12 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar29 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03586310;
    uVar17 = *unaff_x21;
    uVar1 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar17 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= uVar17 + 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar16 = *(long *)(lVar16 + (long)(int)(uVar17 + 1) * (long)iVar19 + 0x30);
      if ((((lVar16 == 0) || (*unaff_x23 == 0)) ||
          (lVar20 = *(long *)(*unaff_x23 + 0x128), lVar20 == 0)) ||
         (lVar20 = *(long *)(lVar20 + 0x18), lVar20 == 0)) goto LAB_03586310;
      uStack00000000000000c0 = uVar1 | *(int *)(lVar16 + 0x28) << 0x10;
      uVar14 = FUN_0219f8b8(lVar20,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar31 = 0;
      if ((uVar14 & 1) == 0) {
        uVar32 = 0;
        fVar29 = 0.0;
        uVar33 = 0;
      }
      else {
        if (in_stack_000000f8 == 0) goto LAB_03586310;
        uVar31 = *(undefined4 *)(in_stack_000000f8 + 0x14);
        uVar32 = *(undefined4 *)(in_stack_000000f8 + 0x18);
        fVar29 = *(float *)(in_stack_000000f8 + 0x1c);
        uVar33 = *(undefined4 *)(in_stack_000000f8 + 0x20);
        if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar17 = *unaff_x21;
    }
    else {
      uVar31 = 0;
      uVar32 = 0;
      fVar29 = 0.0;
      uVar33 = 0;
    }
    if (0 < (int)uVar17) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= uVar17 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar16 = *(long *)(lVar16 + (ulong)(uVar17 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar16 == 0) || (*unaff_x23 == 0)) ||
         ((lVar20 = *(long *)(*unaff_x23 + 0x128), lVar20 == 0 ||
          (lVar20 = *(long *)(lVar20 + 0x18), lVar20 == 0)))) goto LAB_03586310;
      uStack00000000000000c0 = *(uint *)(lVar16 + 0x28) | uVar1 << 0x10;
      uVar14 = FUN_0219f8b8(lVar20,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar14 & 1) != 0) {
        if ((in_stack_000000f8 == 0) ||
           (FUN_03571cb4(uVar31,uVar32,fVar29,uVar33,*(undefined4 *)(in_stack_000000f8 + 0x28),
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
    *(float *)(unaff_x19 + 0x2fc) = fVar29;
  }
  fStack0000000000000060 = 0.0;
  fVar30 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar30 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar16,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar22 = (float)FUN_03776c94(&stack0x00000100,0);
    if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar16,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar24 = (float)FUN_03776ca4(&stack0x00000100,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
         (fVar30 * 0.5 - unaff_s14 * (fVar22 * 0.5 + fVar24));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar11 = *(int *)(unaff_x19 + 0x644);
  fVar30 = 0.0;
  if (((cVar2 == '\0') && (fVar30 = 0.0, iVar11 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar30 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar16 = *in_stack_00000078;
  if (lVar16 == 0) goto LAB_03586310;
  uVar1 = *unaff_x21;
  lVar20 = (long)(int)uVar1;
  if (*(uint *)(lVar16 + 0x18) <= uVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
  fVar22 = *(float *)(unaff_x19 + 0x4d8);
  fVar24 = *(float *)(unaff_x19 + 0x61c);
  fVar23 = fVar23 * unaff_s14;
  *(float *)(lVar16 + lVar20 * unaff_x22 + 0x14c) = (unaff_s13 - fVar22) + fVar24;
  if (iVar11 == 0) {
    fVar23 = fVar23 / fStack0000000000000068;
    fVar21 = (fVar21 * unaff_s14) / fStack0000000000000068;
  }
  else {
    fVar21 = fVar21 * unaff_s14;
  }
  fVar23 = fVar24 + fVar23;
  if ((uVar12 == 0) || (uVar1 == *(uint *)(unaff_x19 + 0x498))) {
    fVar21 = fVar24 + fVar21;
    fVar27 = fVar23;
    fVar25 = fVar21;
    if (fVar24 != 0.0) {
      fVar27 = (fVar23 - fVar24) / *(float *)(unaff_x19 + 0x404);
      fVar25 = (fVar21 - fVar24) / *(float *)(unaff_x19 + 0x404);
      if (fVar27 <= fVar23) {
        fVar27 = fVar23;
      }
      if (fVar21 <= fVar25) {
        fVar25 = fVar21;
      }
    }
    lVar16 = lVar16 + lVar20 * unaff_x22;
    fVar24 = fVar27;
    if (fVar27 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar24 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar28 = fVar25;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar25) {
      fVar28 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar28;
    *(float *)(unaff_x19 + 0x4c8) = fVar24;
    *(float *)(lVar16 + 0x154) = fVar27;
    *(float *)(lVar16 + 0x158) = fVar25;
    *(float *)(lVar16 + 0x148) = fVar23 - fVar22;
    *(float *)(unaff_x19 + 0x4c0) = fVar23 - fVar22;
    *(float *)(lVar16 + 0x150) = fVar21 - fVar22;
    *(float *)(unaff_x19 + 0x4c4) = fVar21 - fVar22;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar24;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
      fVar21 = *(float *)(unaff_x19 + 0x4bc);
      fVar22 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (unaff_s14 * fVar22) / fStack0000000000000068;
      fVar22 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar21 <= fStack0000000000000068) {
        fVar21 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar21;
    }
  }
  else {
    fVar21 = *(float *)(unaff_x19 + 0x4c8);
    lVar16 = lVar16 + lVar20 * unaff_x22;
    *(float *)(lVar16 + 0x154) = fVar21;
    fVar24 = *(float *)(unaff_x19 + 0x4cc);
    fVar21 = fVar21 - fVar22;
    *(float *)(lVar16 + 0x148) = fVar21;
    *(float *)(lVar16 + 0x158) = fVar24;
    *(float *)(unaff_x19 + 0x4c0) = fVar21;
    fVar24 = fVar24 - fVar22;
    *(float *)(lVar16 + 0x150) = fVar24;
    *(float *)(unaff_x19 + 0x4c4) = fVar24;
  }
  if (fVar22 == 0.0) {
    if ((uVar12 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar21 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar23) {
        fVar21 = fVar23;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar21;
      goto LAB_035857b0;
    }
    bVar10 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar13 != 9) goto LAB_03585804;
LAB_035857c4:
    bVar3 = true;
LAB_03585820:
    fVar22 = *(float *)(unaff_x19 + 0x360);
    fVar24 = *(float *)(unaff_x19 + 0x640);
    fVar21 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar8 = true;
    if ((fVar22 <= fVar21) && (bVar8 = false, !NAN(fVar22))) {
      bVar8 = fVar22 == -1.0;
    }
    if (!bVar8) {
      fVar21 = fVar22;
    }
    fVar22 = (float)FUN_03776cb4(&stack0x00000120,0);
    if (bVar9 == false) {
      fVar34 = unaff_s14;
    }
    fVar27 = 1.0;
    if (!bVar10) {
      fVar27 = DAT_00d38acc;
    }
    fStack000000000000005c = ABS(fVar24) + fVar34 * fVar22 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar27 * fVar21 < fStack000000000000005c && (uVar7 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_0358c15c();
      lVar16 = *(long *)(unaff_x19 + 0x488);
      if (lVar16 == 0) goto LAB_03586310;
      uVar13 = *(uint *)(unaff_x19 + 0x494);
      uVar12 = uVar13 - 1;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar16 + (long)(int)uVar12 * (long)iVar19 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        in_stack_00000c14 = 0x2d;
        *unaff_x21 = uVar12;
        unaff_w27 = unaff_w27 - 1;
        fVar34 = unaff_s14;
        in_stack_00000c10 = uVar12;
        goto LAB_03586300;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar13) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*(short *)(lVar16 + (long)(int)uVar13 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        fVar34 = unaff_s14;
        goto LAB_03586300;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) == 0) {
LAB_03586060:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar34 = *(float *)(unaff_x19 + 0x4c8);
          fVar21 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar34 = fVar34 - fVar21;
          if (((fStack000000000000001c < ABS(fVar34)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar34;
            *(float *)(unaff_x19 + 0x4d8) = fVar34 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar29 = *(float *)(unaff_x19 + 0x640);
        fVar21 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar34 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar21 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar34 = fVar21;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar34;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar6 & 0x100000000) == 0) {
          fVar21 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar21;
          if (fStack0000000000000038 <= fVar21) {
            fStack0000000000000038 = fVar21;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar34;
        }
        FUN_0358c4f0();
        lVar16 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar16 == 0) goto LAB_03586310;
        if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        fVar34 = *(float *)(unaff_x19 + 0x2c0);
        fVar21 = *(float *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar9 = fVar34 != DAT_00d38ba4;
        if (bVar9) {
          fVar30 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar30 = fVar21 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar34 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar9;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar34 + fVar30;
        puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar5;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar29;
        uVar26 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar26 = NEON_rev64(uVar26,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar21;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar26;
        uStack0000000000000030 = 1;
        fVar34 = unaff_s14;
        goto LAB_03586300;
      }
      fVar34 = *(float *)(unaff_x19 + 0x2d4);
      fVar29 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
      if ((fVar29 <= fVar34) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        if ((*in_stack_00000010 <= *(float *)(unaff_x19 + 0x250)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03586060;
        *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
        fVar34 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
        if (fVar34 <= DAT_00d38b84) {
          fVar34 = DAT_00d38b84;
        }
        fVar34 = *in_stack_00000010 - fVar34;
        *in_stack_00000010 = fVar34;
        fVar21 = fVar34 * 20.0 + 0.5;
        fVar34 = DAT_00d38e60;
        if (fVar21 != INFINITY) {
          fVar34 = (float)(int)fVar21 / 20.0;
        }
        if (fVar34 <= *(float *)(unaff_x19 + 0x250)) {
          fVar34 = *(float *)(unaff_x19 + 0x250);
        }
        *in_stack_00000010 = fVar34;
      }
      else {
        fVar30 = fStack000000000000005c;
        if (0.0 < fVar34) {
          fVar30 = fStack000000000000005c / (1.0 - fVar34);
        }
        fVar34 = fVar34 + (fStack000000000000005c - fVar27 * (fVar21 + DAT_00d38cc4)) / fVar30;
        if (fVar29 <= fVar34) {
          fVar34 = fVar29;
        }
        *(float *)(unaff_x19 + 0x2d4) = fVar34;
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
    fVar34 = (float)FUN_03776a48(&stack0x00000140,0);
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar29 = *(float *)(unaff_x19 + 0x640);
    fVar21 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar21 = unaff_s14 * fVar34 * fVar21;
    fVar34 = fVar21 * (float)(int)(fVar29 / fVar21);
    if (fVar34 <= fVar29) {
      fVar34 = fVar29 + fVar21;
    }
LAB_03585a9c:
    bVar10 = false;
    *(float *)(unaff_x19 + 0x640) = fVar34;
LAB_03585aa4:
    if (*unaff_x21 != in_stack_00000070) goto LAB_03585ab4;
  }
  else {
LAB_035857b0:
    bVar10 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar13 == 9) goto LAB_035857c4;
    if ((((uVar12 == 0) && (uVar13 != 3)) && (uVar13 != 0x200b)) && (uVar13 != 0xad)) {
UnityEngine_Display__Activate:
      bVar3 = false;
      goto LAB_03585820;
    }
LAB_03585804:
    if ((((bStack000000000000004c | bVar9 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x644) == 1))
    goto UnityEngine_Display__Activate;
LAB_03585998:
    fVar34 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar21 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar21 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               unaff_s14 * (fVar29 + fVar21) +
               fStack0000000000000058 *
               (fVar30 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar21 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar34 = fVar34 + fVar21;
    *(float *)(unaff_x19 + 0x640) = fVar34;
    if ((uVar13 == 0x200b) || (uVar12 != 0)) {
      fVar34 = fVar34 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar34;
    }
    if (uVar13 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar34) {
        fStack0000000000000064 = fStack000000000000006c + fVar34;
      }
      fStack000000000000006c = 0.0;
      fVar34 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03585a9c;
    }
    bVar10 = uVar13 == 10;
    if (((0xb < uVar13) || ((1 << (ulong)(uVar13 & 0x1f) & 0xc08U) == 0)) && (1 < uVar13 - 0x2028))
    goto LAB_03585aa4;
  }
  if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
    fVar34 = *(float *)(unaff_x19 + 0x4c8);
    fVar21 = *(float *)(unaff_x19 + 0x4d0);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar34 = fVar34 - fVar21;
    if (((fStack000000000000001c < ABS(fVar34)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
       (*(char *)(unaff_x19 + 0x33c) == '\0')) {
      *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar34;
      *(float *)(unaff_x19 + 0x4d8) = fVar34 + *(float *)(unaff_x19 + 0x4d8);
    }
  }
  fVar34 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
  if (fVar34 <= *(float *)(unaff_x19 + 0x4c4)) {
    fStack0000000000000038 = fVar34;
  }
  fVar21 = in_stack_00000040._4_4_ +
           fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
  fVar34 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar21) {
    fVar34 = fVar21;
  }
  *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
  fStack000000000000006c = fVar34;
  if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
    fStack000000000000006c = unaff_s13;
    fStack0000000000000064 = fVar34;
  }
  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
  *(undefined1 *)(unaff_x19 + 0x33c) = 0;
  if (bVar10) {
LAB_03585e8c:
    FUN_0358c4f0();
    FUN_0358c4f0();
    uVar12 = *(uint *)(unaff_x19 + 0x494);
    lVar16 = *(long *)(unaff_x19 + 0x488);
    iVar19 = uVar12 + 1;
    *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
    *(int *)(unaff_x19 + 0x498) = iVar19;
    if (lVar16 == 0) goto LAB_03586310;
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto UnityEngine_LightProbesQuery__get_IsCreated;
    fVar34 = *(float *)(lVar16 + (long)(int)uVar12 * unaff_x22 + 0x154);
    if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
      fVar21 = 0.0;
      if (!(bool)(uVar13 != 0x2029 & (bVar10 ^ 1U))) {
        fVar21 = *(float *)(unaff_x19 + 0x2cc);
      }
      uVar18 = 0;
      fVar21 = fVar34 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
               fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
               fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar21) +
               *(float *)(unaff_x19 + 0x4d8);
    }
    else {
      fVar21 = 0.0;
      if (!(bool)(uVar13 != 0x2029 & (bVar10 ^ 1U))) {
        fVar21 = *(float *)(unaff_x19 + 0x2cc);
      }
      uVar18 = 1;
      fVar21 = *(float *)(unaff_x19 + 0x4d8) +
               *(float *)(unaff_x19 + 0x2c0) +
               fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar21);
    }
    *(float *)(unaff_x19 + 0x4d8) = fVar21;
    *(undefined1 *)(unaff_x19 + 0x2c4) = uVar18;
    puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *(long *)puVar5;
      iVar19 = *unaff_x21 + 1;
    }
    uVar26 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
    *(float *)(unaff_x19 + 0x640) =
         *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
    uVar26 = NEON_rev64(uVar26,4);
    *(float *)(unaff_x19 + 0x4d0) = fVar34;
    *(undefined8 *)(unaff_x19 + 0x4c8) = uVar26;
    *(int *)(unaff_x19 + 0x494) = iVar19;
    fVar34 = unaff_s14;
    goto LAB_03586300;
  }
  if (0x2027 < (int)uVar13) {
    if (1 < uVar13 - 0x2028) goto LAB_03585ab4;
    goto LAB_03585e8c;
  }
  if (uVar13 != 3) {
    if ((uVar13 != 0xb) && (uVar13 != 0x2d)) goto LAB_03585ab4;
    goto LAB_03585e8c;
  }
  if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
  unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
  uVar13 = 3;
LAB_03585ab4:
  if (((uVar6 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3)) goto LAB_035862f4;
  if ((uVar12 == 0) && (((uVar13 != 0x2d && (uVar13 != 0x200b)) && (uVar13 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
      if (((((uVar13 - 0xac01 < 0x2bfe) || (uVar13 - 0x1101 < 0xfe)) || (uVar13 - 0xa961 < 0x1e)) &&
          (uVar14 = FUN_03597a54(0), (uVar14 & 1) == 0)) ||
         ((((uVar13 - 0xff01 < 0xee || (uVar13 - 0xfe31 < 0x1e)) || (uVar13 - 0x2e81 < 0x717e)) ||
          (uVar13 - 0xf901 < 0x1fe)))) {
        lVar16 = FUN_035978e8(0);
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) goto LAB_03586310;
        uStack00000000000000c0 = uVar13;
        uVar13 = FUN_0219c130(*(long *)(lVar16 + 0x10),&stack0x000000c0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)*unaff_x21 < (int)in_stack_00000070) {
          lVar16 = FUN_035978e8(0);
          if ((lVar16 == 0) || (lVar20 = *in_stack_00000078, lVar20 == 0)) goto LAB_03586310;
          if (*(uint *)(lVar20 + 0x18) <= *unaff_x21 + 1) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(long *)(lVar16 + 0x18) == 0) goto LAB_03586310;
          uStack00000000000000c0 =
               (uint)*(ushort *)(lVar20 + (long)(int)(*unaff_x21 + 1) * (long)iVar19 + 0x20);
          uVar14 = FUN_0219c130(*(long *)(lVar16 + 0x18),&stack0x000000c0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if (((uStack0000000000000030 | uVar13 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
          if ((uVar14 & 1) != 0) {
            if ((uStack0000000000000030 & 1) == 0) goto LAB_035862c4;
            if (uVar12 != 0) {
              FUN_0358c4f0();
            }
            FUN_0358c4f0();
            bVar4 = true;
            goto LAB_03585ccc;
          }
        }
        else if (((uStack0000000000000030 | uVar13 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
        FUN_0358c4f0();
LAB_035862c4:
        uStack0000000000000030 = 0;
        bVar4 = true;
        goto LAB_035862f4;
      }
    }
  }
  else if (*(char *)(unaff_x19 + 0x2da) == '\0') {
    if (((0x28 < uVar13 - 0x2007) ||
        ((1L << ((ulong)(uVar13 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
       ((uVar13 != 0xa0 && (uVar13 != 0x2060)))) {
      FUN_0358c4f0();
      bVar4 = false;
      uStack0000000000000030 = 0;
      in_stack_000001a8 = 0xffffffff;
      goto LAB_035862f4;
    }
    goto LAB_03585d14;
  }
  if (bVar4) goto code_r0x03585ae4;
  if ((uStack0000000000000030 & 1) == 0) {
    bVar4 = false;
    uStack0000000000000030 = 0;
    goto LAB_035862f4;
  }
  if ((((bStack000000000000004c | bVar9 ^ 0xffU) & 1) == 0) || (uVar12 != 0)) {
    FUN_0358c4f0();
  }
  FUN_0358c4f0();
  bVar4 = false;
LAB_03585ccc:
  uStack0000000000000030 = 1;
  goto LAB_035862f4;
code_r0x03585ae4:
  lVar16 = FUN_035978e8(0);
  if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uStack00000000000000c0 = uVar13;
  uVar14 = FUN_0219c130(*(long *)(lVar16 + 0x10),&stack0x000000c0,
                        *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
  if ((uVar14 & 1) == 0) goto code_r0x03585b20;
  goto LAB_03585b28;
}


