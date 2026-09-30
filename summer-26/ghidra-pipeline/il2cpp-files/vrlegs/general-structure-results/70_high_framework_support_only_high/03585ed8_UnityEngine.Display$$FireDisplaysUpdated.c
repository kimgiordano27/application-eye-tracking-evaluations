/*
FUNCTION_NAME: UnityEngine.Display$$FireDisplaysUpdated
ENTRY_POINT: 03585ed8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


float UnityEngine_Display__FireDisplaysUpdated(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 in_CY;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int in_w8;
  undefined1 uVar15;
  long in_x9;
  long in_x10;
  long unaff_x19;
  byte unaff_w20;
  uint *unaff_x21;
  int iVar16;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w27;
  uint unaff_w28;
  long lVar17;
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
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float unaff_s12;
  undefined4 uVar31;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
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
  uint in_stack_00000040;
  float fStack0000000000000044;
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
  
  uVar4 = _uStack0000000000000030;
  fStack0000000000000048 = unaff_s12;
  fStack0000000000000044 = unaff_s15;
code_r0x03585ed8:
  if ((bool)in_CY) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  fVar26 = *(float *)(in_x10 + in_x9 * unaff_x22 + 0x154);
  if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
    fVar22 = 0.0;
    if ((unaff_w28 != 0x2029 & (unaff_w20 ^ 0xff)) == 0) {
      fVar22 = *(float *)(unaff_x19 + 0x2cc);
    }
    uVar15 = 0;
    fVar22 = fVar26 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
             fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
             fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22) +
             *(float *)(unaff_x19 + 0x4d8);
  }
  else {
    fVar22 = 0.0;
    if ((unaff_w28 != 0x2029 & (unaff_w20 ^ 0xff)) == 0) {
      fVar22 = *(float *)(unaff_x19 + 0x2cc);
    }
    uVar15 = 1;
    fVar22 = *(float *)(unaff_x19 + 0x4d8) +
             *(float *)(unaff_x19 + 0x2c0) +
             fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22);
  }
  *(float *)(unaff_x19 + 0x4d8) = fVar22;
  *(undefined1 *)(unaff_x19 + 0x2c4) = uVar15;
  puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar13 = *(long *)puVar3;
    in_w8 = *unaff_x21 + 1;
  }
  uVar23 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x640) =
       *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
  uVar23 = NEON_rev64(uVar23,4);
  *(float *)(unaff_x19 + 0x4d0) = fVar26;
  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar23;
  *(int *)(unaff_x19 + 0x494) = in_w8;
  fVar26 = unaff_s14;
LAB_03586300:
  lVar13 = *(long *)(unaff_x19 + 0x478);
  unaff_w27 = unaff_w27 + 1;
  if (lVar13 != 0) {
    if ((int)*(uint *)(lVar13 + 0x18) <= (int)unaff_w27) {
LAB_03586314:
      if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
           ((_uStack0000000000000018 & 1) == 0)) ||
          (fVar26 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar26)) ||
         (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        fVar26 = *(float *)(unaff_x19 + 0x340);
        fVar22 = *(float *)(unaff_x19 + 0x348);
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        *(undefined1 *)(unaff_x19 + 0x24c) = 1;
        fVar22 = (fStack000000000000006c + fVar26 + fVar22) * 100.0 + 1.0;
        fVar26 = DAT_00d387f8;
        if (fVar22 != INFINITY) {
          fVar26 = (float)(int)fVar22 / 100.0;
        }
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        return fVar26;
      }
      if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
        fVar26 = *in_stack_00000010;
      }
      *(float *)(unaff_x19 + 0x240) = fVar26;
      fVar26 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
      if (fVar26 <= DAT_00d38b84) {
        fVar26 = DAT_00d38b84;
      }
      fVar26 = *in_stack_00000010 + fVar26;
      *in_stack_00000010 = fVar26;
      fVar22 = fVar26 * 20.0 + 0.5;
      fVar26 = DAT_00d38e60;
      if (fVar22 != INFINITY) {
        fVar26 = (float)(int)fVar22 / 20.0;
      }
      if (*(float *)(unaff_x19 + 0x254) <= fVar26) {
        fVar26 = *(float *)(unaff_x19 + 0x254);
      }
      *in_stack_00000010 = fVar26;
      goto LAB_035863e8;
    }
    if (*(uint *)(lVar13 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_w28 = *(uint *)(lVar13 + (long)(int)unaff_w27 * 0xc + 0x20);
    if (unaff_w28 == 0) goto LAB_03586314;
    if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03584a00;
    if ((*(long *)(unaff_x19 + 0x368) != 0) &&
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 != 0)) {
      if (*unaff_x21 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar13 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar13 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar13 + 0x38);
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
     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
  uVar9 = *unaff_x21;
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
  lVar17 = (long)(int)uVar9;
  cVar1 = *(char *)(lVar13 + lVar17 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar29 = *(undefined4 *)(unaff_x19 + 0x120);
  iVar16 = (int)unaff_x22;
  if (in_stack_00000c10 == uVar9) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000c14 == 0x2026) {
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar13 + lVar17 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar13 + 0x2c) = 0;
      *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar13 = *(long *)(unaff_x19 + 0x488);
      if (lVar13 == 0) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
      goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03586310;
      uVar9 = *unaff_x21;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
      bVar6 = true;
      in_stack_00000c10 = uVar9 + 1;
      *(undefined4 *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      unaff_w28 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000c14 = 3;
      goto LAB_03584c20;
    }
    if (in_stack_00000c14 != 3) {
      bVar6 = true;
      unaff_w28 = in_stack_00000c14;
      goto LAB_03584c20;
    }
    lVar13 = *in_stack_00000078;
    if (((lVar13 == 0) || (*unaff_x23 == 0)) || (lVar12 = FUN_03568ac0(*unaff_x23,0), lVar12 == 0))
    goto LAB_03586310;
    FUN_0219b634(lVar12,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(ulong *)(lVar13 + lVar17 * unaff_x22 + 0x30) =
         CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    bVar6 = true;
    unaff_w28 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar6 = false;
LAB_03584c20:
    if ((unaff_w28 != 3) && ((int)uVar9 < *(int *)(unaff_x19 + 0x324))) {
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar13 = lVar13 + (long)(int)uVar9 * (long)iVar16;
      *(undefined1 *)(lVar13 + 0x194) = 0;
      *(undefined2 *)(lVar13 + 0x20) = 0x200b;
      *(undefined4 *)(lVar13 + 100) = 0;
      *unaff_x21 = uVar9 + 1;
      goto LAB_03586300;
    }
  }
  iVar8 = *(int *)(unaff_x19 + 0x644);
  if (iVar8 == 0) {
    uVar9 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar9 >> 4 & 1) == 0) {
      if ((uVar9 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar9 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b812c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_026b8410(unaff_w28,0);
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
          uVar9 = FUN_026b8594(unaff_w28,0);
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
        uVar9 = FUN_026b8410(unaff_w28,0);
LAB_03584f98:
        unaff_w28 = uVar9 & 0xffff;
      }
    }
    iVar8 = *(int *)(unaff_x19 + 0x644);
    if (iVar8 != 0) goto LAB_03584c80;
LAB_03584fa4:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *unaff_x25 = *(long *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x25 == 0) goto LAB_03586300;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
    uVar10 = *unaff_x21;
    uVar9 = *(uint *)(lVar13 + 0x18);
    if (uVar9 <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar13 + (long)(int)uVar10 * unaff_x22 + 0x58);
    if (bVar6) {
      lVar17 = *(long *)(unaff_x19 + 0x478);
      if (lVar17 == 0) goto LAB_03586310;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar17 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar10 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar9 <= uVar10 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar26 = *(float *)(lVar13 + (long)(int)(uVar10 - 1) * (long)iVar16 + 0x60);
      iVar8 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar13 = *unaff_x23;
    }
    else {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar26 = *(float *)(unaff_x19 + 0x1e8);
      iVar8 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar13 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar13 == 0) goto LAB_03586310;
    fVar28 = (float)FUN_03776960(lVar13 + 0x50,0);
    fVar27 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar27 = 1.0;
    }
    fVar22 = 0.0;
    fVar19 = 0.0;
    if (!(bool)(bVar6 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar19 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar22 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x488), lVar13 == 0))
    goto LAB_03586310;
    uVar9 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
    fVar26 = ((fStack0000000000000068 * fVar26) / (float)iVar8) * fVar28 * fVar27 *
             *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    bVar6 = unaff_w28 == 0xad;
    unaff_s14 = unaff_s13;
    if (!bVar6 && unaff_w28 != 3) {
      unaff_s14 = fVar26;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar8 == 0) goto LAB_03584fa4;
LAB_03584c80:
    if (iVar8 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar13 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar13 == 0
         )) goto LAB_03586310;
      FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      lVar13 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      if (lVar13 == 0) goto LAB_03586300;
      if (unaff_w28 == 0x3c) {
        unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar8 = FUN_03776950(&stack0x00000140,0);
      fVar26 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar8 < 1) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        iVar8 = FUN_03776950(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar27 = (float)FUN_03776960(&stack0x00000140,0);
        fVar22 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar22 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar28 = (float)FUN_03776980(&stack0x00000140,0);
        if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03586310;
        FUN_03776e6c(&stack0x000000c0,*(long *)(lVar13 + 0x20),0);
        in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000110 = in_stack_000000d0;
        fVar18 = (float)FUN_03776c9c(&stack0x00000100,0);
        if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03586310;
        fVar24 = *(float *)(lVar13 + 0x2c);
        fVar20 = (float)FUN_03776ea8(*(long *)(lVar13 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar19 = (float)FUN_03776980(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar22 = (fVar26 / (float)iVar8) * fVar27 * fVar22;
        fVar26 = fVar22 * (fVar28 / fVar18) * fVar24 * fVar20;
        fVar22 = fVar22 / fVar26;
        fVar19 = fVar22 * fVar19;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar27 = (float)FUN_037769c0(&stack0x00000140,0);
        fVar22 = fVar22 * fVar27;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar8 = FUN_03776950(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar22 = (float)FUN_03776960(&stack0x00000140,0);
        if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03586310;
        fVar28 = *(float *)(lVar13 + 0x2c);
        fVar27 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar27 = 1.0;
        }
        fVar18 = (float)FUN_03776ea8(*(long *)(lVar13 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar19 = (float)FUN_03776980(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        fVar26 = (fVar26 / (float)iVar8) * fVar22 * fVar27 * fVar28 * fVar18;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar22 = (float)FUN_037769c0(&stack0x00000140,0);
      }
      *unaff_x25 = lVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      unaff_s13 = 0.0;
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03586310;
      uVar9 = *unaff_x21;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar17 = lVar13 + (long)(int)uVar9 * unaff_x22;
      *(undefined4 *)(lVar17 + 0x2c) = 1;
      *(float *)(lVar17 + 0x160) = fVar26;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar29;
      goto LAB_035852d0;
    }
    bVar6 = unaff_w28 == 0xad;
    lVar13 = *in_stack_00000078;
    fVar19 = 0.0;
    unaff_s14 = 0.0;
    if (!bVar6 && unaff_w28 != 3) {
      unaff_s14 = fVar26;
    }
    if (lVar13 == 0) goto LAB_03586310;
    uVar9 = *unaff_x21;
    fVar22 = 0.0;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
  *(short *)(lVar13 + (long)(int)uVar9 * (long)iVar16 + 0x20) = (short)unaff_w28;
  if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0)) goto LAB_03586310;
  FUN_03776e6c(&stack0x000000c0,lVar13,0);
  in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000130 = in_stack_000000d0;
  if ((int)unaff_w28 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_026b63d8(unaff_w28,0);
    uVar9 = uVar9 & 1;
  }
  else {
    uVar9 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar27 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03586310;
    uVar14 = *unaff_x21;
    uVar10 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar14 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= uVar14 + 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar13 = *(long *)(lVar13 + (long)(int)(uVar14 + 1) * (long)iVar16 + 0x30);
      if ((((lVar13 == 0) || (*unaff_x23 == 0)) ||
          (lVar17 = *(long *)(*unaff_x23 + 0x128), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0)) goto LAB_03586310;
      uStack00000000000000c0 = uVar10 | *(int *)(lVar13 + 0x28) << 0x10;
      uVar11 = FUN_0219f8b8(lVar17,&stack0x000000c0,&stack0x000000f8,
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
      uVar14 = *unaff_x21;
    }
    else {
      uVar29 = 0;
      uVar30 = 0;
      fVar27 = 0.0;
      uVar31 = 0;
    }
    if (0 < (int)uVar14) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar13 + 0x18) <= uVar14 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar13 = *(long *)(lVar13 + (ulong)(uVar14 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar13 == 0) || (*unaff_x23 == 0)) ||
         ((lVar17 = *(long *)(*unaff_x23 + 0x128), lVar17 == 0 ||
          (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0)))) goto LAB_03586310;
      uStack00000000000000c0 = *(uint *)(lVar13 + 0x28) | uVar10 << 0x10;
      uVar11 = FUN_0219f8b8(lVar17,&stack0x000000c0,&stack0x000000f8,
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
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar13,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar18 = (float)FUN_03776c94(&stack0x00000100,0);
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
    goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar13,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar20 = (float)FUN_03776ca4(&stack0x00000100,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
         (fVar28 * 0.5 - unaff_s14 * (fVar18 * 0.5 + fVar20));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar8 = *(int *)(unaff_x19 + 0x644);
  fVar28 = 0.0;
  if (((cVar1 == '\0') && (fVar28 = 0.0, iVar8 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar28 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar13 = *in_stack_00000078;
  if (lVar13 == 0) goto LAB_03586310;
  uVar10 = *unaff_x21;
  lVar17 = (long)(int)uVar10;
  if (*(uint *)(lVar13 + 0x18) <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
  fVar18 = *(float *)(unaff_x19 + 0x4d8);
  fVar20 = *(float *)(unaff_x19 + 0x61c);
  fVar19 = fVar19 * unaff_s14;
  *(float *)(lVar13 + lVar17 * unaff_x22 + 0x14c) = (unaff_s13 - fVar18) + fVar20;
  if (iVar8 == 0) {
    fVar19 = fVar19 / fStack0000000000000068;
    fVar22 = (fVar22 * unaff_s14) / fStack0000000000000068;
  }
  else {
    fVar22 = fVar22 * unaff_s14;
  }
  fVar19 = fVar20 + fVar19;
  if ((uVar9 == 0) || (uVar10 == *(uint *)(unaff_x19 + 0x498))) {
    fVar22 = fVar20 + fVar22;
    fVar24 = fVar19;
    fVar21 = fVar22;
    if (fVar20 != 0.0) {
      fVar24 = (fVar19 - fVar20) / *(float *)(unaff_x19 + 0x404);
      fVar21 = (fVar22 - fVar20) / *(float *)(unaff_x19 + 0x404);
      if (fVar24 <= fVar19) {
        fVar24 = fVar19;
      }
      if (fVar22 <= fVar21) {
        fVar21 = fVar22;
      }
    }
    lVar13 = lVar13 + lVar17 * unaff_x22;
    fVar20 = fVar24;
    if (fVar24 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar20 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar25 = fVar21;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar21) {
      fVar25 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar25;
    *(float *)(unaff_x19 + 0x4c8) = fVar20;
    *(float *)(lVar13 + 0x154) = fVar24;
    *(float *)(lVar13 + 0x158) = fVar21;
    *(float *)(lVar13 + 0x148) = fVar19 - fVar18;
    *(float *)(unaff_x19 + 0x4c0) = fVar19 - fVar18;
    *(float *)(lVar13 + 0x150) = fVar22 - fVar18;
    *(float *)(unaff_x19 + 0x4c4) = fVar22 - fVar18;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar20;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
      fVar22 = *(float *)(unaff_x19 + 0x4bc);
      fVar18 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (unaff_s14 * fVar18) / fStack0000000000000068;
      fVar18 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar22 <= fStack0000000000000068) {
        fVar22 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar22;
    }
  }
  else {
    fVar22 = *(float *)(unaff_x19 + 0x4c8);
    lVar13 = lVar13 + lVar17 * unaff_x22;
    *(float *)(lVar13 + 0x154) = fVar22;
    fVar20 = *(float *)(unaff_x19 + 0x4cc);
    fVar22 = fVar22 - fVar18;
    *(float *)(lVar13 + 0x148) = fVar22;
    *(float *)(lVar13 + 0x158) = fVar20;
    *(float *)(unaff_x19 + 0x4c0) = fVar22;
    fVar20 = fVar20 - fVar18;
    *(float *)(lVar13 + 0x150) = fVar20;
    *(float *)(unaff_x19 + 0x4c4) = fVar20;
  }
  if (fVar18 == 0.0) {
    if ((uVar9 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar22 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar19) {
        fVar22 = fVar19;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar22;
      goto LAB_035857b0;
    }
    bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 != 9) goto LAB_03585804;
LAB_035857c4:
    bVar2 = true;
LAB_03585820:
    fVar18 = *(float *)(unaff_x19 + 0x360);
    fVar20 = *(float *)(unaff_x19 + 0x640);
    fVar22 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar5 = true;
    if ((fVar18 <= fVar22) && (bVar5 = false, !NAN(fVar18))) {
      bVar5 = fVar18 == -1.0;
    }
    if (!bVar5) {
      fVar22 = fVar18;
    }
    fVar18 = (float)FUN_03776cb4(&stack0x00000120,0);
    if (bVar6 == false) {
      fVar26 = unaff_s14;
    }
    fVar24 = 1.0;
    if (!bVar7) {
      fVar24 = DAT_00d38acc;
    }
    fStack000000000000005c = ABS(fVar20) + fVar26 * fVar18 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar24 * fVar22 < fStack000000000000005c && (in_stack_00000040 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_0358c15c();
      lVar13 = *(long *)(unaff_x19 + 0x488);
      if (lVar13 == 0) goto LAB_03586310;
      uVar9 = *(uint *)(unaff_x19 + 0x494);
      uVar10 = uVar9 - 1;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar13 + (long)(int)uVar10 * (long)iVar16 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        in_stack_00000c14 = 0x2d;
        *unaff_x21 = uVar10;
        unaff_w27 = unaff_w27 - 1;
        fVar26 = unaff_s14;
        in_stack_00000c10 = uVar10;
        goto LAB_03586300;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*(short *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        fVar26 = unaff_s14;
        goto LAB_03586300;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) == 0) {
LAB_03586060:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar26 = *(float *)(unaff_x19 + 0x4c8);
          fVar22 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar26 = fVar26 - fVar22;
          if (((fStack000000000000001c < ABS(fVar26)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar26;
            *(float *)(unaff_x19 + 0x4d8) = fVar26 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar27 = *(float *)(unaff_x19 + 0x640);
        fVar22 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar26 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar22 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar26 = fVar22;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar26;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar4 & 0x100000000) == 0) {
          fVar22 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar22;
          if (fStack0000000000000038 <= fVar22) {
            fStack0000000000000038 = fVar22;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar26;
        }
        FUN_0358c4f0();
        lVar13 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar13 == 0) goto LAB_03586310;
        if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        fVar26 = *(float *)(unaff_x19 + 0x2c0);
        fVar22 = *(float *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar6 = fVar26 != DAT_00d38ba4;
        if (bVar6) {
          fVar28 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar28 = fVar22 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar26 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar6;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar26 + fVar28;
        puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar3;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar27;
        uVar23 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar23 = NEON_rev64(uVar23,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar22;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar23;
        uStack0000000000000030 = 1;
        fVar26 = unaff_s14;
        goto LAB_03586300;
      }
      fVar26 = *(float *)(unaff_x19 + 0x2d4);
      fVar27 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
      if ((fVar27 <= fVar26) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        if ((*in_stack_00000010 <= *(float *)(unaff_x19 + 0x250)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03586060;
        *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
        fVar26 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
        if (fVar26 <= DAT_00d38b84) {
          fVar26 = DAT_00d38b84;
        }
        fVar26 = *in_stack_00000010 - fVar26;
        *in_stack_00000010 = fVar26;
        fVar22 = fVar26 * 20.0 + 0.5;
        fVar26 = DAT_00d38e60;
        if (fVar22 != INFINITY) {
          fVar26 = (float)(int)fVar22 / 20.0;
        }
        if (fVar26 <= *(float *)(unaff_x19 + 0x250)) {
          fVar26 = *(float *)(unaff_x19 + 0x250);
        }
        *in_stack_00000010 = fVar26;
      }
      else {
        fVar28 = fStack000000000000005c;
        if (0.0 < fVar26) {
          fVar28 = fStack000000000000005c / (1.0 - fVar26);
        }
        fVar26 = fVar26 + (fStack000000000000005c - fVar24 * (fVar22 + DAT_00d38cc4)) / fVar28;
        if (fVar27 <= fVar26) {
          fVar26 = fVar27;
        }
        *(float *)(unaff_x19 + 0x2d4) = fVar26;
      }
LAB_035863e8:
      if (DAT_0411f1e3 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbeb70);
        DAT_0411f1e3 = '\x01';
      }
      return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
    }
    fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
    fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
    if (!bVar2) goto LAB_03585998;
    if (*unaff_x23 == 0) goto LAB_03586310;
    memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
    fVar26 = (float)FUN_03776a48(&stack0x00000140,0);
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar27 = *(float *)(unaff_x19 + 0x640);
    fVar22 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar22 = unaff_s14 * fVar26 * fVar22;
    fVar26 = fVar22 * (float)(int)(fVar27 / fVar22);
    if (fVar26 <= fVar27) {
      fVar26 = fVar27 + fVar22;
    }
LAB_03585a9c:
    unaff_w20 = false;
    *(float *)(unaff_x19 + 0x640) = fVar26;
LAB_03585aa4:
    if (*unaff_x21 == in_stack_00000070) goto LAB_03585b64;
  }
  else {
LAB_035857b0:
    bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 == 9) goto LAB_035857c4;
    if ((((uVar9 == 0) && (unaff_w28 != 3)) && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)) {
UnityEngine_Display__Activate:
      bVar2 = false;
      goto LAB_03585820;
    }
LAB_03585804:
    if ((((bStack000000000000004c | bVar6 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x644) == 1))
    goto UnityEngine_Display__Activate;
LAB_03585998:
    fVar26 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar22 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar22 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               unaff_s14 * (fVar27 + fVar22) +
               fStack0000000000000058 *
               (fVar28 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar22 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar26 = fVar26 + fVar22;
    *(float *)(unaff_x19 + 0x640) = fVar26;
    if ((unaff_w28 == 0x200b) || (uVar9 != 0)) {
      fVar26 = fVar26 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar26;
    }
    if (unaff_w28 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar26) {
        fStack0000000000000064 = fStack000000000000006c + fVar26;
      }
      fStack000000000000006c = 0.0;
      fVar26 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03585a9c;
    }
    unaff_w20 = unaff_w28 == 10;
    if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
       (1 < unaff_w28 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar26 = *(float *)(unaff_x19 + 0x4c8);
      fVar22 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar26 = fVar26 - fVar22;
      if (((fStack000000000000001c < ABS(fVar26)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
         (*(char *)(unaff_x19 + 0x33c) == '\0')) {
        *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar26;
        *(float *)(unaff_x19 + 0x4d8) = fVar26 + *(float *)(unaff_x19 + 0x4d8);
      }
    }
    fVar26 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
    if (fVar26 <= *(float *)(unaff_x19 + 0x4c4)) {
      fStack0000000000000038 = fVar26;
    }
    fVar22 = fStack0000000000000044 +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar26 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar22) {
      fVar26 = fVar22;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar26;
    if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
      fStack000000000000006c = unaff_s13;
      fStack0000000000000064 = fVar26;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if ((bool)unaff_w20 != false) goto LAB_03585e8c;
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
  if ((uVar9 == 0) && (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
LAB_03585d14:
    if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
         (0x1d < unaff_w28 - 0xa961)) || (uVar11 = FUN_03597a54(0), (uVar11 & 1) != 0)) &&
       ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
         (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901)))) goto LAB_03585adc;
    lVar13 = FUN_035978e8(0);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03586310;
    uStack00000000000000c0 = unaff_w28;
    uVar10 = FUN_0219c130(*(long *)(lVar13 + 0x10),&stack0x000000c0,
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
    lVar13 = FUN_035978e8(0);
    if ((lVar13 == 0) || (lVar17 = *in_stack_00000078, lVar17 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar17 + 0x18) <= *unaff_x21 + 1)
    goto UnityEngine_LightProbesQuery__get_IsCreated;
    if (*(long *)(lVar13 + 0x18) == 0) goto LAB_03586310;
    uStack00000000000000c0 =
         (uint)*(ushort *)(lVar17 + (long)(int)(*unaff_x21 + 1) * (long)iVar16 + 0x20);
    uVar11 = FUN_0219c130(*(long *)(lVar13 + 0x18),&stack0x000000c0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if (((uStack0000000000000030 | uVar10 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
    if ((uVar11 & 1) == 0) goto LAB_035862b0;
    if ((uStack0000000000000030 & 1) == 0) goto LAB_035862c4;
    if (uVar9 != 0) {
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
      lVar13 = FUN_035978e8(0);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03586310;
      uStack00000000000000c0 = unaff_w28;
      uVar11 = FUN_0219c130(*(long *)(lVar13 + 0x10),&stack0x000000c0,
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
    if ((((bStack000000000000004c | bVar6 ^ 0xffU) & 1) == 0) || (uVar9 != 0)) {
      FUN_0358c4f0();
    }
    FUN_0358c4f0();
    uStack0000000000000028 = 0;
  }
  uStack0000000000000030 = 1;
LAB_035862f4:
  *unaff_x21 = *unaff_x21 + 1;
  fVar26 = unaff_s14;
  goto LAB_03586300;
LAB_03585e8c:
  FUN_0358c4f0();
  FUN_0358c4f0();
  uVar9 = *(uint *)(unaff_x19 + 0x494);
  in_x9 = (long)(int)uVar9;
  in_x10 = *(long *)(unaff_x19 + 0x488);
  in_w8 = uVar9 + 1;
  *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
  *(int *)(unaff_x19 + 0x498) = in_w8;
  if (in_x10 == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_CY = *(uint *)(in_x10 + 0x18) <= uVar9;
  goto code_r0x03585ed8;
}


