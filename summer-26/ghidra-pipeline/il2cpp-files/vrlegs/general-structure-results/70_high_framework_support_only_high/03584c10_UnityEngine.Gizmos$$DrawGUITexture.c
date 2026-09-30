/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawGUITexture
ENTRY_POINT: 03584c10
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


float UnityEngine_Gizmos__DrawGUITexture(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint in_w8;
  uint uVar13;
  long lVar14;
  undefined1 uVar15;
  uint in_w11;
  long unaff_x19;
  uint uVar16;
  uint unaff_w20;
  uint *unaff_x21;
  int iVar17;
  ulong unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float unaff_s13;
  undefined4 uVar31;
  float unaff_s15;
  float fVar32;
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
  
  uVar5 = in_stack_00000040;
  uVar4 = _uStack0000000000000030;
LAB_03584c20:
  iVar17 = (int)unaff_x22;
  if (unaff_w28 == 3) goto LAB_03584c70;
  if (*(int *)(unaff_x19 + 0x324) <= (int)unaff_w26) goto LAB_03584c70;
  lVar14 = *in_stack_00000078;
  if (lVar14 == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar14 + 0x18) <= unaff_w26) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar14 = lVar14 + (long)(int)unaff_w26 * (long)iVar17;
  *(undefined1 *)(lVar14 + 0x194) = 0;
  *(undefined2 *)(lVar14 + 0x20) = 0x200b;
  *(undefined4 *)(lVar14 + 100) = 0;
  *unaff_x21 = unaff_w26 + 1;
LAB_03586300:
  lVar14 = *(long *)(unaff_x19 + 0x478);
  unaff_w27 = unaff_w27 + 1;
  if (lVar14 != 0) {
    if ((int)*(uint *)(lVar14 + 0x18) <= (int)unaff_w27) {
LAB_03586314:
      if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
           ((_uStack0000000000000018 & 1) == 0)) ||
          (fVar32 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar32)) ||
         (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        fVar32 = *(float *)(unaff_x19 + 0x340);
        fVar19 = *(float *)(unaff_x19 + 0x348);
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        *(undefined1 *)(unaff_x19 + 0x24c) = 1;
        fVar19 = (fStack000000000000006c + fVar32 + fVar19) * 100.0 + 1.0;
        fVar32 = DAT_00d387f8;
        if (fVar19 != INFINITY) {
          fVar32 = (float)(int)fVar19 / 100.0;
        }
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        return fVar32;
      }
      if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
        fVar32 = *in_stack_00000010;
      }
      *(float *)(unaff_x19 + 0x240) = fVar32;
      fVar32 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
      if (fVar32 <= DAT_00d38b84) {
        fVar32 = DAT_00d38b84;
      }
      fVar32 = *in_stack_00000010 + fVar32;
      *in_stack_00000010 = fVar32;
      fVar19 = fVar32 * 20.0 + 0.5;
      fVar32 = DAT_00d38e60;
      if (fVar19 != INFINITY) {
        fVar32 = (float)(int)fVar19 / 20.0;
      }
      if (*(float *)(unaff_x19 + 0x254) <= fVar32) {
        fVar32 = *(float *)(unaff_x19 + 0x254);
      }
      *in_stack_00000010 = fVar32;
      goto LAB_035863e8;
    }
    if (*(uint *)(lVar14 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_w28 = *(uint *)(lVar14 + (long)(int)unaff_w27 * 0xc + 0x20);
    if (unaff_w28 == 0) goto LAB_03586314;
    if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03584a00;
    if ((*(long *)(unaff_x19 + 0x368) != 0) &&
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 != 0)) {
      if (*unaff_x21 < *(uint *)(lVar14 + 0x18)) {
        lVar14 = lVar14 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar14 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar14 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar14 + 0x38);
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
  uVar11 = FUN_03586568();
  if (((uVar11 & 1) != 0) && (unaff_w27 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03586300;
LAB_03584a74:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03586310;
  unaff_w26 = *unaff_x21;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
  lVar18 = (long)(int)unaff_w26;
  bVar1 = *(byte *)(lVar14 + lVar18 * unaff_x22 + 0x5c);
  uVar16 = (uint)bVar1;
  unaff_w20 = (uint)bVar1;
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  unaff_w24 = *(undefined4 *)(unaff_x19 + 0x120);
  if (in_w11 != unaff_w26) {
    unaff_w29 = 0;
    unaff_w20 = uVar16;
    goto LAB_03584c20;
  }
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  if (in_w8 == 0x2026) {
    lVar14 = *in_stack_00000078;
    if (lVar14 == 0) goto LAB_03586310;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined8 *)(lVar14 + lVar18 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar14 = *in_stack_00000078;
    if (lVar14 == 0) goto LAB_03586310;
    if (*(uint *)(lVar14 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
    lVar14 = lVar14 + (long)(int)*unaff_x21 * unaff_x22;
    *(undefined4 *)(lVar14 + 0x2c) = 0;
    *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar14 = *(long *)(unaff_x19 + 0x488);
    if (lVar14 == 0) goto LAB_03586310;
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
    goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
         *(undefined8 *)(unaff_x19 + 0x660);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar14 = *in_stack_00000078;
    if (lVar14 == 0) goto LAB_03586310;
    unaff_w26 = *unaff_x21;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_w29 = 1;
    in_w11 = unaff_w26 + 1;
    *(undefined4 *)(lVar14 + (long)(int)unaff_w26 * unaff_x22 + 0x58) =
         *(undefined4 *)(unaff_x19 + 0x668);
    in_w8 = 3;
    unaff_w28 = 0x2026;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
    unaff_w20 = uVar16;
    goto LAB_03584c20;
  }
  if (in_w8 != 3) goto LAB_03584c1c;
  lVar14 = *in_stack_00000078;
  if (((lVar14 == 0) || (*unaff_x23 == 0)) || (lVar12 = FUN_03568ac0(*unaff_x23,0), lVar12 == 0))
  goto LAB_03586310;
  FUN_0219b634(lVar12,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
  if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
  *(ulong *)(lVar14 + lVar18 * unaff_x22 + 0x30) =
       CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  unaff_w29 = 1;
  unaff_w28 = 3;
  *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
LAB_03584c70:
  iVar9 = *(int *)(unaff_x19 + 0x644);
  if (iVar9 == 0) {
    uVar16 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar16 >> 4 & 1) == 0) {
      if ((uVar16 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar16 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b812c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b8410(unaff_w28,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03584f98;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8070(unaff_w28,0);
        fStack0000000000000068 = 1.0;
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b8594(unaff_w28,0);
          goto LAB_03584f98;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b812c(unaff_w28,0);
      fStack0000000000000068 = 1.0;
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b8410(unaff_w28,0);
LAB_03584f98:
        unaff_w28 = uVar16 & 0xffff;
      }
    }
    iVar9 = *(int *)(unaff_x19 + 0x644);
    if (iVar9 != 0) goto LAB_03584c80;
LAB_03584fa4:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar14 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *unaff_x25 = *(long *)(lVar14 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x25 == 0) goto LAB_03586300;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03586310;
    uVar10 = *unaff_x21;
    uVar16 = *(uint *)(lVar14 + 0x18);
    if (uVar16 <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar14 + (long)(int)uVar10 * unaff_x22 + 0x58);
    if (unaff_w29 == 0) {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar32 = *(float *)(unaff_x19 + 0x1e8);
      iVar9 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar14 = *(long *)(unaff_x19 + 0x100);
    }
    else {
      lVar18 = *(long *)(unaff_x19 + 0x478);
      if (lVar18 == 0) goto LAB_03586310;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar18 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar10 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar16 <= uVar10 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar32 = *(float *)(lVar14 + (long)(int)(uVar10 - 1) * (long)iVar17 + 0x60);
      iVar9 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar14 = *unaff_x23;
    }
    if (lVar14 == 0) goto LAB_03586310;
    fVar28 = (float)FUN_03776960(lVar14 + 0x50,0);
    fVar27 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar27 = 1.0;
    }
    fVar19 = 0.0;
    fVar21 = 0.0;
    if ((unaff_w29 & unaff_w28 == 0x2026) == 0) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar21 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar19 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar14 = *(long *)(unaff_x19 + 0x488), lVar14 == 0))
    goto LAB_03586310;
    uVar16 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar14 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_s15 = ((fStack0000000000000068 * fVar32) / (float)iVar9) * fVar28 * fVar27 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar14 + (long)(int)uVar16 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    bVar7 = unaff_w28 == 0xad;
    fVar32 = unaff_s13;
    if (!bVar7 && unaff_w28 != 3) {
      fVar32 = unaff_s15;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar9 == 0) goto LAB_03584fa4;
LAB_03584c80:
    if (iVar9 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar14 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar14 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar14 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar14 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar14 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar14 == 0
         )) goto LAB_03586310;
      FUN_02215a88(lVar14,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      lVar14 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      if (lVar14 == 0) goto LAB_03586300;
      if (unaff_w28 == 0x3c) {
        unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar9 = FUN_03776950(&stack0x00000140,0);
      fVar32 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar9 < 1) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        iVar9 = FUN_03776950(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar27 = (float)FUN_03776960(&stack0x00000140,0);
        fVar19 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar19 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar28 = (float)FUN_03776980(&stack0x00000140,0);
        if (*(long *)(lVar14 + 0x20) == 0) goto LAB_03586310;
        FUN_03776e6c(&stack0x000000c0,*(long *)(lVar14 + 0x20),0);
        in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000110 = in_stack_000000d0;
        fVar20 = (float)FUN_03776c9c(&stack0x00000100,0);
        if (*(long *)(lVar14 + 0x20) == 0) goto LAB_03586310;
        fVar25 = *(float *)(lVar14 + 0x2c);
        fVar22 = (float)FUN_03776ea8(*(long *)(lVar14 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar21 = (float)FUN_03776980(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar19 = (fVar32 / (float)iVar9) * fVar27 * fVar19;
        unaff_s15 = fVar19 * (fVar28 / fVar20) * fVar25 * fVar22;
        fVar19 = fVar19 / unaff_s15;
        fVar21 = fVar19 * fVar21;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar32 = (float)FUN_037769c0(&stack0x00000140,0);
        fVar19 = fVar19 * fVar32;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar9 = FUN_03776950(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar19 = (float)FUN_03776960(&stack0x00000140,0);
        if (*(long *)(lVar14 + 0x20) == 0) goto LAB_03586310;
        fVar28 = *(float *)(lVar14 + 0x2c);
        fVar27 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar27 = 1.0;
        }
        fVar20 = (float)FUN_03776ea8(*(long *)(lVar14 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar21 = (float)FUN_03776980(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        unaff_s15 = (fVar32 / (float)iVar9) * fVar19 * fVar27 * fVar28 * fVar20;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar19 = (float)FUN_037769c0(&stack0x00000140,0);
      }
      *unaff_x25 = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      unaff_s13 = 0.0;
      lVar14 = *in_stack_00000078;
      if (lVar14 == 0) goto LAB_03586310;
      uVar16 = *unaff_x21;
      if (*(uint *)(lVar14 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar18 = lVar14 + (long)(int)uVar16 * unaff_x22;
      *(undefined4 *)(lVar18 + 0x2c) = 1;
      *(float *)(lVar18 + 0x160) = unaff_s15;
      *(undefined4 *)(unaff_x19 + 0x120) = unaff_w24;
      goto LAB_035852d0;
    }
    bVar7 = unaff_w28 == 0xad;
    lVar14 = *in_stack_00000078;
    fVar21 = 0.0;
    fVar32 = 0.0;
    if (!bVar7 && unaff_w28 != 3) {
      fVar32 = unaff_s15;
    }
    if (lVar14 == 0) goto LAB_03586310;
    uVar16 = *unaff_x21;
    fVar19 = 0.0;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
  *(short *)(lVar14 + (long)(int)uVar16 * (long)iVar17 + 0x20) = (short)unaff_w28;
  if ((*unaff_x25 == 0) || (lVar14 = *(long *)(*unaff_x25 + 0x20), lVar14 == 0)) goto LAB_03586310;
  FUN_03776e6c(&stack0x000000c0,lVar14,0);
  in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000130 = in_stack_000000d0;
  if ((int)unaff_w28 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_026b63d8(unaff_w28,0);
    uVar16 = uVar16 & 1;
  }
  else {
    uVar16 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar27 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03586310;
    uVar13 = *unaff_x21;
    uVar10 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar13 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar14 + 0x18) <= uVar13 + 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar14 = *(long *)(lVar14 + (long)(int)(uVar13 + 1) * (long)iVar17 + 0x30);
      if ((((lVar14 == 0) || (*unaff_x23 == 0)) ||
          (lVar18 = *(long *)(*unaff_x23 + 0x128), lVar18 == 0)) ||
         (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)) goto LAB_03586310;
      uStack00000000000000c0 = uVar10 | *(int *)(lVar14 + 0x28) << 0x10;
      uVar11 = FUN_0219f8b8(lVar18,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar29 = 0;
      if ((uVar11 & 1) == 0) {
        uVar30 = 0;
        fVar27 = 0.0;
        uVar31 = 0;
      }
      else {
        if (in_stack_000000f8 == 0) goto LAB_03586310;
        uVar29 = *(undefined4 *)(in_stack_000000f8 + 0x14);
        uVar30 = *(undefined4 *)(in_stack_000000f8 + 0x18);
        fVar27 = *(float *)(in_stack_000000f8 + 0x1c);
        uVar31 = *(undefined4 *)(in_stack_000000f8 + 0x20);
        if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar13 = *unaff_x21;
    }
    else {
      uVar29 = 0;
      uVar30 = 0;
      fVar27 = 0.0;
      uVar31 = 0;
    }
    if (0 < (int)uVar13) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar14 + 0x18) <= uVar13 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar14 = *(long *)(lVar14 + (ulong)(uVar13 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar14 == 0) || (*unaff_x23 == 0)) ||
         ((lVar18 = *(long *)(*unaff_x23 + 0x128), lVar18 == 0 ||
          (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)))) goto LAB_03586310;
      uStack00000000000000c0 = *(uint *)(lVar14 + 0x28) | uVar10 << 0x10;
      uVar11 = FUN_0219f8b8(lVar18,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar11 & 1) != 0) {
        if ((in_stack_000000f8 == 0) ||
           (FUN_03571cb4(uVar29,uVar30,fVar27,uVar31,*(undefined4 *)(in_stack_000000f8 + 0x28),
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
    *(float *)(unaff_x19 + 0x2fc) = fVar27;
  }
  fStack0000000000000060 = 0.0;
  fVar28 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar28 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar14 = *(long *)(*unaff_x25 + 0x20), lVar14 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar14,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar20 = (float)FUN_03776c94(&stack0x00000100,0);
    if ((*unaff_x25 == 0) || (lVar14 = *(long *)(*unaff_x25 + 0x20), lVar14 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar14,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar22 = (float)FUN_03776ca4(&stack0x00000100,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar28 * 0.5 - fVar32 * (fVar20 * 0.5 + fVar22));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar9 = *(int *)(unaff_x19 + 0x644);
  fVar28 = 0.0;
  if (((unaff_w20 == 0) && (fVar28 = 0.0, iVar9 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar28 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar14 = *in_stack_00000078;
  if (lVar14 == 0) goto LAB_03586310;
  uVar10 = *unaff_x21;
  lVar18 = (long)(int)uVar10;
  if (*(uint *)(lVar14 + 0x18) <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
  fVar20 = *(float *)(unaff_x19 + 0x4d8);
  fVar22 = *(float *)(unaff_x19 + 0x61c);
  fVar21 = fVar21 * fVar32;
  *(float *)(lVar14 + lVar18 * unaff_x22 + 0x14c) = (unaff_s13 - fVar20) + fVar22;
  if (iVar9 == 0) {
    fVar21 = fVar21 / fStack0000000000000068;
    fVar19 = (fVar19 * fVar32) / fStack0000000000000068;
  }
  else {
    fVar19 = fVar19 * fVar32;
  }
  fVar21 = fVar22 + fVar21;
  if ((uVar16 == 0) || (uVar10 == *(uint *)(unaff_x19 + 0x498))) {
    fVar19 = fVar22 + fVar19;
    fVar25 = fVar21;
    fVar23 = fVar19;
    if (fVar22 != 0.0) {
      fVar25 = (fVar21 - fVar22) / *(float *)(unaff_x19 + 0x404);
      fVar23 = (fVar19 - fVar22) / *(float *)(unaff_x19 + 0x404);
      if (fVar25 <= fVar21) {
        fVar25 = fVar21;
      }
      if (fVar19 <= fVar23) {
        fVar23 = fVar19;
      }
    }
    lVar14 = lVar14 + lVar18 * unaff_x22;
    fVar22 = fVar25;
    if (fVar25 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar22 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar26 = fVar23;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar23) {
      fVar26 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar26;
    *(float *)(unaff_x19 + 0x4c8) = fVar22;
    *(float *)(lVar14 + 0x154) = fVar25;
    *(float *)(lVar14 + 0x158) = fVar23;
    *(float *)(lVar14 + 0x148) = fVar21 - fVar20;
    *(float *)(unaff_x19 + 0x4c0) = fVar21 - fVar20;
    *(float *)(lVar14 + 0x150) = fVar19 - fVar20;
    *(float *)(unaff_x19 + 0x4c4) = fVar19 - fVar20;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar22;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
      fVar19 = *(float *)(unaff_x19 + 0x4bc);
      fVar20 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (fVar32 * fVar20) / fStack0000000000000068;
      fVar20 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar19 <= fStack0000000000000068) {
        fVar19 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar19;
    }
  }
  else {
    fVar19 = *(float *)(unaff_x19 + 0x4c8);
    lVar14 = lVar14 + lVar18 * unaff_x22;
    *(float *)(lVar14 + 0x154) = fVar19;
    fVar22 = *(float *)(unaff_x19 + 0x4cc);
    fVar19 = fVar19 - fVar20;
    *(float *)(lVar14 + 0x148) = fVar19;
    *(float *)(lVar14 + 0x158) = fVar22;
    *(float *)(unaff_x19 + 0x4c0) = fVar19;
    fVar22 = fVar22 - fVar20;
    *(float *)(lVar14 + 0x150) = fVar22;
    *(float *)(unaff_x19 + 0x4c4) = fVar22;
  }
  if (fVar20 == 0.0) {
    if ((uVar16 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar19 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar21) {
        fVar19 = fVar21;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar19;
      goto LAB_035857b0;
    }
    bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 != 9) goto LAB_03585804;
LAB_035857c4:
    bVar2 = true;
LAB_03585820:
    fVar20 = *(float *)(unaff_x19 + 0x360);
    fVar22 = *(float *)(unaff_x19 + 0x640);
    fVar19 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar6 = true;
    if ((fVar20 <= fVar19) && (bVar6 = false, !NAN(fVar20))) {
      bVar6 = fVar20 == -1.0;
    }
    if (!bVar6) {
      fVar19 = fVar20;
    }
    fVar20 = (float)FUN_03776cb4(&stack0x00000120,0);
    if (bVar7 == false) {
      unaff_s15 = fVar32;
    }
    fVar25 = 1.0;
    if (!bVar8) {
      fVar25 = DAT_00d38acc;
    }
    fStack000000000000005c =
         ABS(fVar22) + unaff_s15 * fVar20 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar25 * fVar19 < fStack000000000000005c && (uVar5 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_0358c15c();
      lVar14 = *(long *)(unaff_x19 + 0x488);
      if (lVar14 == 0) goto LAB_03586310;
      uVar16 = *(uint *)(unaff_x19 + 0x494);
      uVar10 = uVar16 - 1;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar14 + (long)(int)uVar10 * (long)iVar17 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        in_w8 = 0x2d;
        *unaff_x21 = uVar10;
        unaff_w27 = unaff_w27 - 1;
        unaff_s15 = fVar32;
        in_w11 = uVar10;
        goto LAB_03586300;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*(short *)(lVar14 + (long)(int)uVar16 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        unaff_s15 = fVar32;
        goto LAB_03586300;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) == 0) {
LAB_03586060:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar19 = *(float *)(unaff_x19 + 0x4c8);
          fVar27 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar19 = fVar19 - fVar27;
          if (((fStack000000000000001c < ABS(fVar19)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar19;
            *(float *)(unaff_x19 + 0x4d8) = fVar19 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar28 = *(float *)(unaff_x19 + 0x640);
        fVar27 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar19 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar27 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar19 = fVar27;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar19;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar4 & 0x100000000) == 0) {
          fVar27 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar27;
          if (fStack0000000000000038 <= fVar27) {
            fStack0000000000000038 = fVar27;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar19;
        }
        FUN_0358c4f0();
        lVar14 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar14 == 0) goto LAB_03586310;
        if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        fVar19 = *(float *)(unaff_x19 + 0x2c0);
        fVar27 = *(float *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar7 = fVar19 != DAT_00d38ba4;
        if (bVar7) {
          fVar20 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar20 = fVar27 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar19 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar7;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar19 + fVar20;
        puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *(long *)puVar3;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar28;
        uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar24 = NEON_rev64(uVar24,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar27;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar24;
        uStack0000000000000030 = 1;
        unaff_s15 = fVar32;
        goto LAB_03586300;
      }
      fVar27 = *(float *)(unaff_x19 + 0x2d4);
      fVar28 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
      if ((fVar28 <= fVar27) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        if ((*in_stack_00000010 <= *(float *)(unaff_x19 + 0x250)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03586060;
        *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
        fVar32 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
        if (fVar32 <= DAT_00d38b84) {
          fVar32 = DAT_00d38b84;
        }
        fVar32 = *in_stack_00000010 - fVar32;
        *in_stack_00000010 = fVar32;
        fVar19 = fVar32 * 20.0 + 0.5;
        fVar32 = DAT_00d38e60;
        if (fVar19 != INFINITY) {
          fVar32 = (float)(int)fVar19 / 20.0;
        }
        if (fVar32 <= *(float *)(unaff_x19 + 0x250)) {
          fVar32 = *(float *)(unaff_x19 + 0x250);
        }
        *in_stack_00000010 = fVar32;
      }
      else {
        fVar32 = fStack000000000000005c;
        if (0.0 < fVar27) {
          fVar32 = fStack000000000000005c / (1.0 - fVar27);
        }
        fVar27 = fVar27 + (fStack000000000000005c - fVar25 * (fVar19 + DAT_00d38cc4)) / fVar32;
        if (fVar28 <= fVar27) {
          fVar27 = fVar28;
        }
        *(float *)(unaff_x19 + 0x2d4) = fVar27;
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
    if (!bVar2) goto LAB_03585998;
    if (*unaff_x23 == 0) goto LAB_03586310;
    memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
    fVar19 = (float)FUN_03776a48(&stack0x00000140,0);
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar28 = *(float *)(unaff_x19 + 0x640);
    fVar27 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar27 = fVar32 * fVar19 * fVar27;
    fVar19 = fVar27 * (float)(int)(fVar28 / fVar27);
    if (fVar19 <= fVar28) {
      fVar19 = fVar28 + fVar27;
    }
LAB_03585a9c:
    bVar8 = false;
    *(float *)(unaff_x19 + 0x640) = fVar19;
LAB_03585aa4:
    if (*unaff_x21 == in_stack_00000070) goto LAB_03585b64;
  }
  else {
LAB_035857b0:
    bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 == 9) goto LAB_035857c4;
    if ((((uVar16 == 0) && (unaff_w28 != 3)) && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)) {
UnityEngine_Display__Activate:
      bVar2 = false;
      goto LAB_03585820;
    }
LAB_03585804:
    if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x644) == 1))
    goto UnityEngine_Display__Activate;
LAB_03585998:
    fVar19 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar20 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar27 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               fVar32 * (fVar27 + fVar20) +
               fStack0000000000000058 *
               (fVar28 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar27 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar19 = fVar19 + fVar27;
    *(float *)(unaff_x19 + 0x640) = fVar19;
    if ((unaff_w28 == 0x200b) || (uVar16 != 0)) {
      fVar19 = fVar19 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar19;
    }
    if (unaff_w28 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar19) {
        fStack0000000000000064 = fStack000000000000006c + fVar19;
      }
      fStack000000000000006c = 0.0;
      fVar19 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03585a9c;
    }
    bVar8 = unaff_w28 == 10;
    if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
       (1 < unaff_w28 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar19 = *(float *)(unaff_x19 + 0x4c8);
      fVar27 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar19 = fVar19 - fVar27;
      if (((fStack000000000000001c < ABS(fVar19)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
         (*(char *)(unaff_x19 + 0x33c) == '\0')) {
        *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar19;
        *(float *)(unaff_x19 + 0x4d8) = fVar19 + *(float *)(unaff_x19 + 0x4d8);
      }
    }
    fVar19 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
    if (fVar19 <= *(float *)(unaff_x19 + 0x4c4)) {
      fStack0000000000000038 = fVar19;
    }
    fVar27 = in_stack_00000040._4_4_ +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar19 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar27) {
      fVar19 = fVar27;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar19;
    if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
      fStack000000000000006c = unaff_s13;
      fStack0000000000000064 = fVar19;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if (bVar8) {
LAB_03585e8c:
      FUN_0358c4f0();
      FUN_0358c4f0();
      uVar16 = *(uint *)(unaff_x19 + 0x494);
      lVar14 = *(long *)(unaff_x19 + 0x488);
      iVar9 = uVar16 + 1;
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      *(int *)(unaff_x19 + 0x498) = iVar9;
      if (lVar14 == 0) goto LAB_03586310;
      if (*(uint *)(lVar14 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
      fVar19 = *(float *)(lVar14 + (long)(int)uVar16 * unaff_x22 + 0x154);
      if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
        fVar27 = 0.0;
        if (!(bool)(unaff_w28 != 0x2029 & (bVar8 ^ 1U))) {
          fVar27 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar15 = 0;
        fVar27 = fVar19 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                 fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar27) +
                 *(float *)(unaff_x19 + 0x4d8);
      }
      else {
        fVar27 = 0.0;
        if (!(bool)(unaff_w28 != 0x2029 & (bVar8 ^ 1U))) {
          fVar27 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar15 = 1;
        fVar27 = *(float *)(unaff_x19 + 0x4d8) +
                 *(float *)(unaff_x19 + 0x2c0) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar27);
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar27;
      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar15;
      puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)puVar3;
        iVar9 = *unaff_x21 + 1;
      }
      uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 0x640) =
           *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
      uVar24 = NEON_rev64(uVar24,4);
      *(float *)(unaff_x19 + 0x4d0) = fVar19;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar24;
      *(int *)(unaff_x19 + 0x494) = iVar9;
      unaff_s15 = fVar32;
      goto LAB_03586300;
    }
    if ((int)unaff_w28 < 0x2028) {
      if (unaff_w28 == 3) {
        if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
        unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
        unaff_w28 = 3;
      }
      else if ((unaff_w28 == 0xb) || (unaff_w28 == 0x2d)) goto LAB_03585e8c;
    }
    else if (unaff_w28 - 0x2028 < 2) goto LAB_03585e8c;
  }
  if (((uVar4 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3)) goto LAB_035862f4;
  if ((uVar16 == 0) && (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
LAB_03585d14:
    if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
         (0x1d < unaff_w28 - 0xa961)) || (uVar11 = FUN_03597a54(0), (uVar11 & 1) != 0)) &&
       ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
         (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901)))) goto LAB_03585adc;
    lVar14 = FUN_035978e8(0);
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_03586310;
    uStack00000000000000c0 = unaff_w28;
    uVar10 = FUN_0219c130(*(long *)(lVar14 + 0x10),&stack0x000000c0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000070 <= (int)*unaff_x21) {
      if (((uStack0000000000000030 | uVar10 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
        FUN_0358c4f0();
      }
LAB_035862c4:
      uStack0000000000000030 = 0;
      uStack0000000000000028 = 1;
      goto LAB_035862f4;
    }
    lVar14 = FUN_035978e8(0);
    if ((lVar14 == 0) || (lVar18 = *in_stack_00000078, lVar18 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar18 + 0x18) <= *unaff_x21 + 1)
    goto UnityEngine_LightProbesQuery__get_IsCreated;
    if (*(long *)(lVar14 + 0x18) == 0) goto LAB_03586310;
    uStack00000000000000c0 =
         (uint)*(ushort *)(lVar18 + (long)(int)(*unaff_x21 + 1) * (long)iVar17 + 0x20);
    uVar11 = FUN_0219c130(*(long *)(lVar14 + 0x18),&stack0x000000c0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if (((uStack0000000000000030 | uVar10 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
    if ((uVar11 & 1) == 0) goto LAB_035862b0;
    if ((uStack0000000000000030 & 1) == 0) goto LAB_035862c4;
    if (uVar16 != 0) {
      FUN_0358c4f0();
    }
    FUN_0358c4f0();
    uStack0000000000000028 = 1;
  }
  else {
    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
      if (((0x28 < unaff_w28 - 0x2007) ||
          ((1L << ((ulong)(unaff_w28 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((unaff_w28 != 0xa0 && (unaff_w28 != 0x2060)))) {
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
      lVar14 = FUN_035978e8(0);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_03586310;
      uStack00000000000000c0 = unaff_w28;
      uVar11 = FUN_0219c130(*(long *)(lVar14 + 0x10),&stack0x000000c0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((uVar11 & 1) == 0) {
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
    if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) || (uVar16 != 0)) {
      FUN_0358c4f0();
    }
    FUN_0358c4f0();
    uStack0000000000000028 = 0;
  }
  uStack0000000000000030 = 1;
LAB_035862f4:
  *unaff_x21 = *unaff_x21 + 1;
  unaff_s15 = fVar32;
  goto LAB_03586300;
LAB_03584c1c:
  unaff_w29 = 1;
  unaff_w28 = in_w8;
  unaff_w20 = uVar16;
  goto LAB_03584c20;
}


