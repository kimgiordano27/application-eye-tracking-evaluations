/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawWireMesh
ENTRY_POINT: 03584ae8
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


float UnityEngine_Gizmos__DrawWireMesh(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  long unaff_x19;
  uint unaff_w20;
  uint *unaff_x21;
  int iVar17;
  ulong unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float unaff_s13;
  undefined4 uVar30;
  float unaff_s15;
  float fVar31;
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
  
  uVar5 = in_stack_00000040;
  uVar4 = _uStack0000000000000030;
code_r0x03584ae8:
  lVar12 = FUN_03568ac0(param_1,param_2);
  if (lVar12 == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_0219b634(lVar12,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
  if (*(uint *)(unaff_x28 + 0x18) <= unaff_w26) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(ulong *)(unaff_x28 + unaff_x29 * unaff_x22 + 0x30) =
       CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  bVar7 = true;
  uVar11 = 3;
  *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
LAB_03584c70:
  iVar9 = *(int *)(unaff_x19 + 0x644);
  iVar17 = (int)unaff_x22;
  if (iVar9 == 0) {
    uVar10 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b812c(uVar11,0);
          fStack0000000000000068 = 1.0;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b8410(uVar11,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03584f98;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8070(uVar11,0);
        fStack0000000000000068 = 1.0;
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8594(uVar11,0);
          goto LAB_03584f98;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b812c(uVar11,0);
      fStack0000000000000068 = 1.0;
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8410(uVar11,0);
LAB_03584f98:
        uVar11 = uVar11 & 0xffff;
      }
    }
    iVar9 = *(int *)(unaff_x19 + 0x644);
    if (iVar9 != 0) goto LAB_03584c80;
LAB_03584fa4:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar12 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *unaff_x25 = *(long *)(lVar12 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x25 == 0) goto LAB_03586300;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_03586310;
    uVar1 = *unaff_x21;
    uVar10 = *(uint *)(lVar12 + 0x18);
    if (uVar10 <= uVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar12 + (long)(int)uVar1 * unaff_x22 + 0x58);
    if (bVar7) {
      lVar16 = *(long *)(unaff_x19 + 0x478);
      if (lVar16 == 0) goto LAB_03586310;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar1 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar10 <= uVar1 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar31 = *(float *)(lVar12 + (long)(int)(uVar1 - 1) * (long)iVar17 + 0x60);
      iVar9 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar12 = *unaff_x23;
    }
    else {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar31 = *(float *)(unaff_x19 + 0x1e8);
      iVar9 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar12 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar12 == 0) goto LAB_03586310;
    fVar27 = (float)FUN_03776960(lVar12 + 0x50,0);
    fVar26 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar26 = 1.0;
    }
    fVar18 = 0.0;
    fVar20 = 0.0;
    if (!(bool)(bVar7 & uVar11 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar20 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar18 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar12 = *(long *)(unaff_x19 + 0x488), lVar12 == 0))
    goto LAB_03586310;
    uVar10 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar12 + 0x18) <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_s15 = ((fStack0000000000000068 * fVar31) / (float)iVar9) * fVar27 * fVar26 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar12 + (long)(int)uVar10 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    bVar7 = uVar11 == 0xad;
    fVar31 = unaff_s13;
    if (!bVar7 && uVar11 != 3) {
      fVar31 = unaff_s15;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar9 == 0) goto LAB_03584fa4;
LAB_03584c80:
    if (iVar9 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar12 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar12 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar12 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar12 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar12 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar12 == 0
         )) goto LAB_03586310;
      FUN_02215a88(lVar12,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      lVar12 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      if (lVar12 == 0) goto LAB_03586300;
      if (uVar11 == 0x3c) {
        uVar11 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar9 = FUN_03776950(&stack0x00000140,0);
      fVar31 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar9 < 1) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        iVar9 = FUN_03776950(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar26 = (float)FUN_03776960(&stack0x00000140,0);
        fVar18 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar18 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar27 = (float)FUN_03776980(&stack0x00000140,0);
        if (*(long *)(lVar12 + 0x20) == 0) goto LAB_03586310;
        FUN_03776e6c(&stack0x000000c0,*(long *)(lVar12 + 0x20),0);
        in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000110 = in_stack_000000d0;
        fVar19 = (float)FUN_03776c9c(&stack0x00000100,0);
        if (*(long *)(lVar12 + 0x20) == 0) goto LAB_03586310;
        fVar24 = *(float *)(lVar12 + 0x2c);
        fVar21 = (float)FUN_03776ea8(*(long *)(lVar12 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar20 = (float)FUN_03776980(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar18 = (fVar31 / (float)iVar9) * fVar26 * fVar18;
        unaff_s15 = fVar18 * (fVar27 / fVar19) * fVar24 * fVar21;
        fVar18 = fVar18 / unaff_s15;
        fVar20 = fVar18 * fVar20;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar31 = (float)FUN_037769c0(&stack0x00000140,0);
        fVar18 = fVar18 * fVar31;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar9 = FUN_03776950(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar18 = (float)FUN_03776960(&stack0x00000140,0);
        if (*(long *)(lVar12 + 0x20) == 0) goto LAB_03586310;
        fVar27 = *(float *)(lVar12 + 0x2c);
        fVar26 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar26 = 1.0;
        }
        fVar19 = (float)FUN_03776ea8(*(long *)(lVar12 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar20 = (float)FUN_03776980(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        unaff_s15 = (fVar31 / (float)iVar9) * fVar18 * fVar26 * fVar27 * fVar19;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar18 = (float)FUN_037769c0(&stack0x00000140,0);
      }
      *unaff_x25 = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      unaff_s13 = 0.0;
      lVar12 = *in_stack_00000078;
      if (lVar12 != 0) {
        uVar10 = *unaff_x21;
        if (uVar10 < *(uint *)(lVar12 + 0x18)) {
          lVar16 = lVar12 + (long)(int)uVar10 * unaff_x22;
          *(undefined4 *)(lVar16 + 0x2c) = 1;
          *(float *)(lVar16 + 0x160) = unaff_s15;
          *(undefined4 *)(unaff_x19 + 0x120) = unaff_w24;
          goto LAB_035852d0;
        }
        goto UnityEngine_LightProbesQuery__get_IsCreated;
      }
      goto LAB_03586310;
    }
    bVar7 = uVar11 == 0xad;
    lVar12 = *in_stack_00000078;
    fVar20 = 0.0;
    fVar31 = 0.0;
    if (!bVar7 && uVar11 != 3) {
      fVar31 = unaff_s15;
    }
    if (lVar12 == 0) goto LAB_03586310;
    uVar10 = *unaff_x21;
    fVar18 = 0.0;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
  *(short *)(lVar12 + (long)(int)uVar10 * (long)iVar17 + 0x20) = (short)uVar11;
  if ((*unaff_x25 == 0) || (lVar12 = *(long *)(*unaff_x25 + 0x20), lVar12 == 0)) goto LAB_03586310;
  FUN_03776e6c(&stack0x000000c0,lVar12,0);
  in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000130 = in_stack_000000d0;
  if ((int)uVar11 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b63d8(uVar11,0);
    uVar10 = uVar10 & 1;
  }
  else {
    uVar10 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar26 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03586310;
    uVar14 = *unaff_x21;
    uVar1 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar14 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar12 + 0x18) <= uVar14 + 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar12 = *(long *)(lVar12 + (long)(int)(uVar14 + 1) * (long)iVar17 + 0x30);
      if ((((lVar12 == 0) || (*unaff_x23 == 0)) ||
          (lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)) goto LAB_03586310;
      uStack00000000000000c0 = uVar1 | *(int *)(lVar12 + 0x28) << 0x10;
      uVar13 = FUN_0219f8b8(lVar16,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar28 = 0;
      if ((uVar13 & 1) == 0) {
        uVar29 = 0;
        fVar26 = 0.0;
        uVar30 = 0;
      }
      else {
        if (in_stack_000000f8 == 0) goto LAB_03586310;
        uVar28 = *(undefined4 *)(in_stack_000000f8 + 0x14);
        uVar29 = *(undefined4 *)(in_stack_000000f8 + 0x18);
        fVar26 = *(float *)(in_stack_000000f8 + 0x1c);
        uVar30 = *(undefined4 *)(in_stack_000000f8 + 0x20);
        if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar14 = *unaff_x21;
    }
    else {
      uVar28 = 0;
      uVar29 = 0;
      fVar26 = 0.0;
      uVar30 = 0;
    }
    if (0 < (int)uVar14) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar12 + 0x18) <= uVar14 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar12 = *(long *)(lVar12 + (ulong)(uVar14 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar12 == 0) || (*unaff_x23 == 0)) ||
         ((lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0 ||
          (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)))) goto LAB_03586310;
      uStack00000000000000c0 = *(uint *)(lVar12 + 0x28) | uVar1 << 0x10;
      uVar13 = FUN_0219f8b8(lVar16,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar13 & 1) != 0) {
        if ((in_stack_000000f8 == 0) ||
           (FUN_03571cb4(uVar28,uVar29,fVar26,uVar30,*(undefined4 *)(in_stack_000000f8 + 0x28),
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
    *(float *)(unaff_x19 + 0x2fc) = fVar26;
  }
  fStack0000000000000060 = 0.0;
  fVar27 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar27 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar12 = *(long *)(*unaff_x25 + 0x20), lVar12 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar12,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar19 = (float)FUN_03776c94(&stack0x00000100,0);
    if ((*unaff_x25 == 0) || (lVar12 = *(long *)(*unaff_x25 + 0x20), lVar12 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar12,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar21 = (float)FUN_03776ca4(&stack0x00000100,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar27 * 0.5 - fVar31 * (fVar19 * 0.5 + fVar21));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar9 = *(int *)(unaff_x19 + 0x644);
  fVar27 = 0.0;
  if (((unaff_w20 == 0) && (fVar27 = 0.0, iVar9 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar27 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar12 = *in_stack_00000078;
  if (lVar12 == 0) goto LAB_03586310;
  uVar1 = *unaff_x21;
  lVar16 = (long)(int)uVar1;
  if (*(uint *)(lVar12 + 0x18) <= uVar1) goto UnityEngine_LightProbesQuery__get_IsCreated;
  fVar19 = *(float *)(unaff_x19 + 0x4d8);
  fVar21 = *(float *)(unaff_x19 + 0x61c);
  fVar20 = fVar20 * fVar31;
  *(float *)(lVar12 + lVar16 * unaff_x22 + 0x14c) = (unaff_s13 - fVar19) + fVar21;
  if (iVar9 == 0) {
    fVar20 = fVar20 / fStack0000000000000068;
    fVar18 = (fVar18 * fVar31) / fStack0000000000000068;
  }
  else {
    fVar18 = fVar18 * fVar31;
  }
  fVar20 = fVar21 + fVar20;
  if ((uVar10 == 0) || (uVar1 == *(uint *)(unaff_x19 + 0x498))) {
    fVar18 = fVar21 + fVar18;
    fVar24 = fVar20;
    fVar22 = fVar18;
    if (fVar21 != 0.0) {
      fVar24 = (fVar20 - fVar21) / *(float *)(unaff_x19 + 0x404);
      fVar22 = (fVar18 - fVar21) / *(float *)(unaff_x19 + 0x404);
      if (fVar24 <= fVar20) {
        fVar24 = fVar20;
      }
      if (fVar18 <= fVar22) {
        fVar22 = fVar18;
      }
    }
    lVar12 = lVar12 + lVar16 * unaff_x22;
    fVar21 = fVar24;
    if (fVar24 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar21 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar25 = fVar22;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar22) {
      fVar25 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar25;
    *(float *)(unaff_x19 + 0x4c8) = fVar21;
    *(float *)(lVar12 + 0x154) = fVar24;
    *(float *)(lVar12 + 0x158) = fVar22;
    *(float *)(lVar12 + 0x148) = fVar20 - fVar19;
    *(float *)(unaff_x19 + 0x4c0) = fVar20 - fVar19;
    *(float *)(lVar12 + 0x150) = fVar18 - fVar19;
    *(float *)(unaff_x19 + 0x4c4) = fVar18 - fVar19;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar21;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
      fVar18 = *(float *)(unaff_x19 + 0x4bc);
      fVar19 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (fVar31 * fVar19) / fStack0000000000000068;
      fVar19 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar18 <= fStack0000000000000068) {
        fVar18 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar18;
    }
  }
  else {
    fVar18 = *(float *)(unaff_x19 + 0x4c8);
    lVar12 = lVar12 + lVar16 * unaff_x22;
    *(float *)(lVar12 + 0x154) = fVar18;
    fVar21 = *(float *)(unaff_x19 + 0x4cc);
    fVar18 = fVar18 - fVar19;
    *(float *)(lVar12 + 0x148) = fVar18;
    *(float *)(lVar12 + 0x158) = fVar21;
    *(float *)(unaff_x19 + 0x4c0) = fVar18;
    fVar21 = fVar21 - fVar19;
    *(float *)(lVar12 + 0x150) = fVar21;
    *(float *)(unaff_x19 + 0x4c4) = fVar21;
  }
  if (fVar19 == 0.0) {
    if ((uVar10 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar18 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar20) {
        fVar18 = fVar20;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar18;
      goto LAB_035857b0;
    }
    bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar11 == 9) goto LAB_035857c4;
LAB_03585804:
    if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x644) == 1))
    goto UnityEngine_Display__Activate;
LAB_03585998:
    fVar18 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar19 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar26 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               fVar31 * (fVar26 + fVar19) +
               fStack0000000000000058 *
               (fVar27 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar26 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar18 = fVar18 + fVar26;
    *(float *)(unaff_x19 + 0x640) = fVar18;
    if ((uVar11 == 0x200b) || (uVar10 != 0)) {
      fVar18 = fVar18 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar18;
    }
    if (uVar11 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar18) {
        fStack0000000000000064 = fStack000000000000006c + fVar18;
      }
      fStack000000000000006c = 0.0;
      fVar18 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03585a9c;
    }
    bVar8 = uVar11 == 10;
    if (((0xb < uVar11) || ((1 << (ulong)(uVar11 & 0x1f) & 0xc08U) == 0)) && (1 < uVar11 - 0x2028))
    goto LAB_03585aa4;
LAB_03585b64:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar18 = *(float *)(unaff_x19 + 0x4c8);
      fVar26 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar18 = fVar18 - fVar26;
      if (((fStack000000000000001c < ABS(fVar18)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
         (*(char *)(unaff_x19 + 0x33c) == '\0')) {
        *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar18;
        *(float *)(unaff_x19 + 0x4d8) = fVar18 + *(float *)(unaff_x19 + 0x4d8);
      }
    }
    fVar18 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
    if (fVar18 <= *(float *)(unaff_x19 + 0x4c4)) {
      fStack0000000000000038 = fVar18;
    }
    fVar26 = in_stack_00000040._4_4_ +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar18 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar26) {
      fVar18 = fVar26;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar18;
    if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
      fStack000000000000006c = unaff_s13;
      fStack0000000000000064 = fVar18;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if (bVar8) {
LAB_03585e8c:
      FUN_0358c4f0();
      FUN_0358c4f0();
      uVar10 = *(uint *)(unaff_x19 + 0x494);
      lVar12 = *(long *)(unaff_x19 + 0x488);
      iVar9 = uVar10 + 1;
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      *(int *)(unaff_x19 + 0x498) = iVar9;
      if (lVar12 != 0) {
        if (uVar10 < *(uint *)(lVar12 + 0x18)) {
          fVar18 = *(float *)(lVar12 + (long)(int)uVar10 * unaff_x22 + 0x154);
          if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
            fVar26 = 0.0;
            if (!(bool)(uVar11 != 0x2029 & (bVar8 ^ 1U))) {
              fVar26 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar15 = 0;
            fVar26 = fVar18 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
                     + fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar26) +
                     *(float *)(unaff_x19 + 0x4d8);
          }
          else {
            fVar26 = 0.0;
            if (!(bool)(uVar11 != 0x2029 & (bVar8 ^ 1U))) {
              fVar26 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar15 = 1;
            fVar26 = *(float *)(unaff_x19 + 0x4d8) +
                     *(float *)(unaff_x19 + 0x2c0) +
                     fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar26);
          }
          *(float *)(unaff_x19 + 0x4d8) = fVar26;
          *(undefined1 *)(unaff_x19 + 0x2c4) = uVar15;
          puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar12 = *(long *)puVar3;
            iVar9 = *unaff_x21 + 1;
          }
          uVar23 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) =
               *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
          uVar23 = NEON_rev64(uVar23,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar18;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar23;
          *(int *)(unaff_x19 + 0x494) = iVar9;
          unaff_s15 = fVar31;
          goto LAB_03586300;
        }
        goto UnityEngine_LightProbesQuery__get_IsCreated;
      }
      goto LAB_03586310;
    }
    if ((int)uVar11 < 0x2028) {
      if (uVar11 == 3) {
        if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
        unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
        uVar11 = 3;
      }
      else if ((uVar11 == 0xb) || (uVar11 == 0x2d)) goto LAB_03585e8c;
    }
    else if (uVar11 - 0x2028 < 2) goto LAB_03585e8c;
  }
  else {
LAB_035857b0:
    bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar11 == 9) {
LAB_035857c4:
      bVar2 = true;
    }
    else {
      if ((((uVar10 != 0) || (uVar11 == 3)) || (uVar11 == 0x200b)) || (uVar11 == 0xad))
      goto LAB_03585804;
UnityEngine_Display__Activate:
      bVar2 = false;
    }
    fVar19 = *(float *)(unaff_x19 + 0x360);
    fVar21 = *(float *)(unaff_x19 + 0x640);
    fVar18 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar6 = true;
    if ((fVar19 <= fVar18) && (bVar6 = false, !NAN(fVar19))) {
      bVar6 = fVar19 == -1.0;
    }
    if (!bVar6) {
      fVar18 = fVar19;
    }
    fVar19 = (float)FUN_03776cb4(&stack0x00000120,0);
    if (bVar7 == false) {
      unaff_s15 = fVar31;
    }
    fVar24 = 1.0;
    if (!bVar8) {
      fVar24 = DAT_00d38acc;
    }
    fStack000000000000005c =
         ABS(fVar21) + unaff_s15 * fVar19 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar24 * fVar18 < fStack000000000000005c && (uVar5 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_0358c15c();
      lVar12 = *(long *)(unaff_x19 + 0x488);
      if (lVar12 == 0) goto LAB_03586310;
      uVar11 = *(uint *)(unaff_x19 + 0x494);
      uVar10 = uVar11 - 1;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar12 + (long)(int)uVar10 * (long)iVar17 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        in_stack_00000c14 = 0x2d;
        *unaff_x21 = uVar10;
        unaff_w27 = unaff_w27 - 1;
        unaff_s15 = fVar31;
        in_stack_00000c10 = uVar10;
        goto LAB_03586300;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*(short *)(lVar12 + (long)(int)uVar11 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        unaff_s15 = fVar31;
      }
      else {
        if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
          fVar26 = *(float *)(unaff_x19 + 0x2d4);
          fVar27 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
          if ((fVar26 < fVar27) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
            fVar31 = fStack000000000000005c;
            if (0.0 < fVar26) {
              fVar31 = fStack000000000000005c / (1.0 - fVar26);
            }
            fVar26 = fVar26 + (fStack000000000000005c - fVar24 * (fVar18 + DAT_00d38cc4)) / fVar31;
            if (fVar27 <= fVar26) {
              fVar26 = fVar27;
            }
            *(float *)(unaff_x19 + 0x2d4) = fVar26;
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
            fVar31 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
            if (fVar31 <= DAT_00d38b84) {
              fVar31 = DAT_00d38b84;
            }
            fVar31 = *in_stack_00000010 - fVar31;
            *in_stack_00000010 = fVar31;
            fVar18 = fVar31 * 20.0 + 0.5;
            fVar31 = DAT_00d38e60;
            if (fVar18 != INFINITY) {
              fVar31 = (float)(int)fVar18 / 20.0;
            }
            if (fVar31 <= *(float *)(unaff_x19 + 0x250)) {
              fVar31 = *(float *)(unaff_x19 + 0x250);
            }
            *in_stack_00000010 = fVar31;
            goto LAB_035863e8;
          }
        }
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar18 = *(float *)(unaff_x19 + 0x4c8);
          fVar26 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar18 = fVar18 - fVar26;
          if (((fStack000000000000001c < ABS(fVar18)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar18;
            *(float *)(unaff_x19 + 0x4d8) = fVar18 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar27 = *(float *)(unaff_x19 + 0x640);
        fVar26 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar18 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar26 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar18 = fVar26;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar18;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar4 & 0x100000000) == 0) {
          fVar26 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar26;
          if (fStack0000000000000038 <= fVar26) {
            fStack0000000000000038 = fVar26;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar18;
        }
        FUN_0358c4f0();
        lVar12 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar12 == 0) goto LAB_03586310;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        fVar18 = *(float *)(unaff_x19 + 0x2c0);
        fVar26 = *(float *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar7 = fVar18 != DAT_00d38ba4;
        if (bVar7) {
          fVar19 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar19 = fVar26 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar18 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar7;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar18 + fVar19;
        puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar12 = *(long *)puVar3;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar27;
        uVar23 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar23 = NEON_rev64(uVar23,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar26;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar23;
        uStack0000000000000030 = 1;
        unaff_s15 = fVar31;
      }
      goto LAB_03586300;
    }
    fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
    in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
    if (!bVar2) goto LAB_03585998;
    if (*unaff_x23 == 0) goto LAB_03586310;
    memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
    fVar18 = (float)FUN_03776a48(&stack0x00000140,0);
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar27 = *(float *)(unaff_x19 + 0x640);
    fVar26 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar26 = fVar31 * fVar18 * fVar26;
    fVar18 = fVar26 * (float)(int)(fVar27 / fVar26);
    if (fVar18 <= fVar27) {
      fVar18 = fVar27 + fVar26;
    }
LAB_03585a9c:
    bVar8 = false;
    *(float *)(unaff_x19 + 0x640) = fVar18;
LAB_03585aa4:
    if (*unaff_x21 == in_stack_00000070) goto LAB_03585b64;
  }
  if (((uVar4 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
    if ((uVar10 == 0) && (((uVar11 != 0x2d && (uVar11 != 0x200b)) && (uVar11 != 0xad)))) {
      if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
        if (((((0x2bfd < uVar11 - 0xac01) && (0xfd < uVar11 - 0x1101)) && (0x1d < uVar11 - 0xa961))
            || (uVar13 = FUN_03597a54(0), (uVar13 & 1) != 0)) &&
           ((((0xed < uVar11 - 0xff01 && (0x1d < uVar11 - 0xfe31)) && (0x717d < uVar11 - 0x2e81)) &&
            (0x1fd < uVar11 - 0xf901)))) goto LAB_03585adc;
        lVar12 = FUN_035978e8(0);
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_03586310;
        uStack00000000000000c0 = uVar11;
        uVar11 = FUN_0219c130(*(long *)(lVar12 + 0x10),&stack0x000000c0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000070 <= (int)*unaff_x21) {
          if (((uStack0000000000000030 | uVar11 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
            FUN_0358c4f0();
          }
LAB_035862c4:
          uStack0000000000000030 = 0;
          uStack0000000000000028 = 1;
          goto LAB_035862f4;
        }
        lVar12 = FUN_035978e8(0);
        if ((lVar12 == 0) || (lVar16 = *in_stack_00000078, lVar16 == 0)) goto LAB_03586310;
        if (*(uint *)(lVar16 + 0x18) <= *unaff_x21 + 1)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (*(long *)(lVar12 + 0x18) == 0) goto LAB_03586310;
        uStack00000000000000c0 =
             (uint)*(ushort *)(lVar16 + (long)(int)(*unaff_x21 + 1) * (long)iVar17 + 0x20);
        uVar13 = FUN_0219c130(*(long *)(lVar12 + 0x18),&stack0x000000c0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if (((uStack0000000000000030 | uVar11 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
        if ((uVar13 & 1) == 0) goto LAB_035862b0;
        if ((uStack0000000000000030 & 1) == 0) goto LAB_035862c4;
        if (uVar10 != 0) {
          FUN_0358c4f0();
        }
        FUN_0358c4f0();
        uStack0000000000000028 = 1;
LAB_03585ccc:
        uStack0000000000000030 = 1;
      }
      else {
LAB_03585adc:
        if ((uStack0000000000000028 & 1) == 0) {
          if ((uStack0000000000000030 & 1) != 0) {
            if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) || (uVar10 != 0)) {
              FUN_0358c4f0();
            }
            FUN_0358c4f0();
            uStack0000000000000028 = 0;
            goto LAB_03585ccc;
          }
          uStack0000000000000028 = 0;
          uStack0000000000000030 = 0;
        }
        else {
          lVar12 = FUN_035978e8(0);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_03586310;
          uStack00000000000000c0 = uVar11;
          uVar13 = FUN_0219c130(*(long *)(lVar12 + 0x10),&stack0x000000c0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if ((uVar13 & 1) == 0) {
            FUN_0358c4f0();
          }
          uStack0000000000000028 = 0;
        }
      }
    }
    else {
      if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
      if (((uVar11 - 0x2007 < 0x29) &&
          ((1L << ((ulong)(uVar11 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((uVar11 == 0xa0 || (uVar11 == 0x2060)))) goto LAB_03585d14;
      FUN_0358c4f0();
      uStack0000000000000028 = 0;
      uStack0000000000000030 = 0;
      in_stack_000001a8 = 0xffffffff;
    }
  }
LAB_035862f4:
  *unaff_x21 = *unaff_x21 + 1;
  unaff_s15 = fVar31;
LAB_03586300:
  lVar12 = *(long *)(unaff_x19 + 0x478);
  unaff_w27 = unaff_w27 + 1;
  if (lVar12 != 0) {
    if ((int)unaff_w27 < (int)*(uint *)(lVar12 + 0x18)) {
      if (*(uint *)(lVar12 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      uVar11 = *(uint *)(lVar12 + (long)(int)unaff_w27 * 0xc + 0x20);
      if (uVar11 == 0) goto LAB_03586314;
      if ((uVar11 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03584a00;
      if ((*(long *)(unaff_x19 + 0x368) != 0) &&
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 != 0)) {
        if (*unaff_x21 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)*unaff_x21 * unaff_x22;
          *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar12 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar12 + 0x58);
          *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar12 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_03584a74;
        }
        goto UnityEngine_LightProbesQuery__get_IsCreated;
      }
      goto LAB_03586310;
    }
LAB_03586314:
    if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
         ((_uStack0000000000000018 & 1) == 0)) ||
        (fVar31 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar31)) ||
       (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
      fVar31 = *(float *)(unaff_x19 + 0x340);
      fVar18 = *(float *)(unaff_x19 + 0x348);
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      *(undefined1 *)(unaff_x19 + 0x24c) = 1;
      fVar18 = (fStack000000000000006c + fVar31 + fVar18) * 100.0 + 1.0;
      fVar31 = DAT_00d387f8;
      if (fVar18 != INFINITY) {
        fVar31 = (float)(int)fVar18 / 100.0;
      }
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
      return fVar31;
    }
    if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
      fVar31 = *in_stack_00000010;
    }
    *(float *)(unaff_x19 + 0x240) = fVar31;
    fVar31 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
    if (fVar31 <= DAT_00d38b84) {
      fVar31 = DAT_00d38b84;
    }
    fVar31 = *in_stack_00000010 + fVar31;
    *in_stack_00000010 = fVar31;
    fVar18 = fVar31 * 20.0 + 0.5;
    fVar31 = DAT_00d38e60;
    if (fVar18 != INFINITY) {
      fVar31 = (float)(int)fVar18 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x254) <= fVar31) {
      fVar31 = *(float *)(unaff_x19 + 0x254);
    }
    *in_stack_00000010 = fVar31;
    goto LAB_035863e8;
  }
  goto LAB_03586310;
code_r0x03584a00:
  *(undefined1 *)(unaff_x19 + 0x431) = 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  uVar13 = FUN_03586568();
  if (((uVar13 & 1) == 0) || (unaff_w27 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) != 0)
     ) {
LAB_03584a74:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_03586310;
    unaff_w26 = *unaff_x21;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_x29 = (long)(int)unaff_w26;
    unaff_w20 = (uint)*(byte *)(lVar12 + unaff_x29 * unaff_x22 + 0x5c);
    *(undefined1 *)(unaff_x19 + 0x431) = 0;
    unaff_w24 = *(undefined4 *)(unaff_x19 + 0x120);
    if (in_stack_00000c10 == unaff_w26) {
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      if (in_stack_00000c14 == 0x2026) {
        lVar12 = *in_stack_00000078;
        if (lVar12 == 0) goto LAB_03586310;
        if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined8 *)(lVar12 + unaff_x29 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar12 = *in_stack_00000078;
        if (lVar12 == 0) goto LAB_03586310;
                    /* try { // try from 03584b88 to 03684ee3 has its CatchHandler @ 03584b88
                       catch() { ... } // from try @ 03584b88 with catch @ 03584b88
                       catch() { ... } // from try @ 035851d4 with catch @ 03584b88
                       catch() { ... } // from try @ 0358521c with catch @ 03584b88
                       catch() { ... } // from try @ 0358533c with catch @ 03584b88
                       catch() { ... } // from try @ 03585344 with catch @ 03584b88
                       catch() { ... } // from try @ 03585408 with catch @ 03584b88 */
        if (*(uint *)(lVar12 + 0x18) <= *unaff_x21)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar12 = lVar12 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(lVar12 + 0x2c) = 0;
        *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar12 = *(long *)(unaff_x19 + 0x488);
        if (lVar12 == 0) goto LAB_03586310;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
             *(undefined8 *)(unaff_x19 + 0x660);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar12 = *in_stack_00000078;
        if (lVar12 == 0) goto LAB_03586310;
        unaff_w26 = *unaff_x21;
        if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
        bVar7 = true;
        in_stack_00000c10 = unaff_w26 + 1;
        *(undefined4 *)(lVar12 + (long)(int)unaff_w26 * unaff_x22 + 0x58) =
             *(undefined4 *)(unaff_x19 + 0x668);
        uVar11 = 0x2026;
        *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
        in_stack_00000c14 = 3;
      }
      else {
        if (in_stack_00000c14 == 3) {
          unaff_x28 = *in_stack_00000078;
          if ((unaff_x28 == 0) || (param_1 = *unaff_x23, param_1 == 0)) goto LAB_03586310;
          param_2 = 0;
          goto code_r0x03584ae8;
        }
        bVar7 = true;
        uVar11 = in_stack_00000c14;
      }
    }
    else {
      bVar7 = false;
    }
    if ((uVar11 == 3) || (*(int *)(unaff_x19 + 0x324) <= (int)unaff_w26)) goto LAB_03584c70;
    lVar12 = *in_stack_00000078;
    if (lVar12 == 0) goto LAB_03586310;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto UnityEngine_LightProbesQuery__get_IsCreated;
    lVar12 = lVar12 + (long)(int)unaff_w26 * (long)iVar17;
    *(undefined1 *)(lVar12 + 0x194) = 0;
    *(undefined2 *)(lVar12 + 0x20) = 0x200b;
    *(undefined4 *)(lVar12 + 100) = 0;
    *unaff_x21 = unaff_w26 + 1;
  }
  goto LAB_03586300;
}


