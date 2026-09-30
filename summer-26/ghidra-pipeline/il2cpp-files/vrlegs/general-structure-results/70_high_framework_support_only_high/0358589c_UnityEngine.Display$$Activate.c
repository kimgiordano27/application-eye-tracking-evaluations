/*
FUNCTION_NAME: UnityEngine.Display$$Activate
ENTRY_POINT: 0358589c
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


/* WARNING: Type propagation algorithm not settling */

float UnityEngine_Display__Activate(void)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte in_w8;
  uint uVar11;
  byte in_w9;
  undefined1 uVar12;
  long unaff_x19;
  uint *unaff_x21;
  int iVar13;
  ulong unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  byte unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float unaff_s8;
  float unaff_s9;
  uint uVar24;
  ulong unaff_d10;
  float fVar25;
  undefined4 uVar26;
  float unaff_s11;
  undefined4 uVar27;
  float unaff_s12;
  undefined4 uVar28;
  float unaff_s13;
  float unaff_s14;
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
  byte bStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  byte bStack000000000000004c;
  long *in_stack_00000050;
  float in_stack_00000058;
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
  
  uVar3 = _uStack0000000000000030;
code_r0x0358589c:
  fVar18 = (float)unaff_d10;
  iVar13 = (int)unaff_x22;
  fStack000000000000005c = unaff_s12;
  if ((((in_w8 | in_w9) & 1) == 0) && (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498)))
  {
    unaff_w27 = FUN_0358c15c();
    lVar9 = *(long *)(unaff_x19 + 0x488);
    if (lVar9 == 0) goto LAB_03586310;
    uVar7 = *(uint *)(unaff_x19 + 0x494);
    uVar11 = uVar7 - 1;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (((bStack000000000000004c & 1) == 0 &&
         *(short *)(lVar9 + (long)(int)uVar11 * (long)iVar13 + 0x20) == 0xad) &&
       (*(int *)(unaff_x19 + 0x2e0) == 0)) {
      bStack000000000000004c = 0;
      in_stack_00000c14 = 0x2d;
      *unaff_x21 = uVar11;
      unaff_w27 = unaff_w27 - 1;
      in_stack_00000c10 = uVar11;
    }
    else {
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*(short *)(lVar9 + (long)(int)uVar7 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        goto LAB_03586300;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
        fVar18 = *(float *)(unaff_x19 + 0x2d4);
        fVar20 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
        if ((fVar18 < fVar20) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
          fVar21 = unaff_s12;
          if (0.0 < fVar18) {
            fVar21 = unaff_s12 / (1.0 - fVar18);
          }
          fVar18 = fVar18 + (unaff_s12 - unaff_s9 * (unaff_s8 + DAT_00d38cc4)) / fVar21;
          if (fVar20 <= fVar18) {
            fVar18 = fVar20;
          }
          *(float *)(unaff_x19 + 0x2d4) = fVar18;
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
          fVar18 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
          if (fVar18 <= DAT_00d38b84) {
            fVar18 = DAT_00d38b84;
          }
          fVar18 = *in_stack_00000010 - fVar18;
          *in_stack_00000010 = fVar18;
          fVar20 = fVar18 * 20.0 + 0.5;
          fVar18 = DAT_00d38e60;
          if (fVar20 != INFINITY) {
            fVar18 = (float)(int)fVar20 / 20.0;
          }
          if (fVar18 <= *(float *)(unaff_x19 + 0x250)) {
            fVar18 = *(float *)(unaff_x19 + 0x250);
          }
          *in_stack_00000010 = fVar18;
          goto LAB_035863e8;
        }
      }
      if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
        fVar18 = *(float *)(unaff_x19 + 0x4c8);
        fVar20 = *(float *)(unaff_x19 + 0x4d0);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar18 = fVar18 - fVar20;
        if (((fStack000000000000001c < ABS(fVar18)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
           (*(char *)(unaff_x19 + 0x33c) == '\0')) {
          *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar18;
          *(float *)(unaff_x19 + 0x4d8) = fVar18 + *(float *)(unaff_x19 + 0x4d8);
        }
      }
      fVar21 = *(float *)(unaff_x19 + 0x640);
      fVar20 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
      fVar18 = *(float *)(unaff_x19 + 0x4c4);
      if (fVar20 <= *(float *)(unaff_x19 + 0x4c4)) {
        fVar18 = fVar20;
      }
      *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
      *(float *)(unaff_x19 + 0x4c4) = fVar18;
      *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
      if ((uVar3 & 0x100000000) == 0) {
        fVar20 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar20;
        if (fStack0000000000000038 <= fVar20) {
          fStack0000000000000038 = fVar20;
        }
      }
      else {
        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar18;
      }
      FUN_0358c4f0();
      lVar9 = *(long *)(unaff_x19 + 0x488);
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      if (lVar9 == 0) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
      goto UnityEngine_LightProbesQuery__get_IsCreated;
      fVar18 = *(float *)(unaff_x19 + 0x2c0);
      fVar20 = *(float *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
      bVar5 = fVar18 != DAT_00d38ba4;
      if (bVar5) {
        fVar25 = in_stack_00000058 * *(float *)(unaff_x19 + 0x2b8);
      }
      else {
        fVar25 = fVar20 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                 fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
        fVar18 = in_stack_00000058 * *(float *)(unaff_x19 + 0x2b8);
      }
      *(bool *)(unaff_x19 + 0x2c4) = bVar5;
      *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar18 + fVar25;
      puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar2;
      }
      bStack000000000000004c = 0;
      fStack000000000000006c = fStack000000000000006c + fVar21;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
      uVar22 = NEON_rev64(uVar22,4);
      *(float *)(unaff_x19 + 0x4d0) = fVar20;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar22;
      uStack0000000000000030 = 1;
    }
LAB_03586300:
    lVar9 = *(long *)(unaff_x19 + 0x478);
    unaff_w27 = unaff_w27 + 1;
    if (lVar9 != 0) {
      if ((int)unaff_w27 < (int)*(uint *)(lVar9 + 0x18)) {
        if (*(uint *)(lVar9 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
        unaff_w28 = *(uint *)(lVar9 + (long)(int)unaff_w27 * 0xc + 0x20);
        if (unaff_w28 == 0) goto LAB_03586314;
        if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03584a00;
        if ((*(long *)(unaff_x19 + 0x368) != 0) &&
           (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 != 0)) {
          if (*unaff_x21 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)*unaff_x21 * unaff_x22;
            *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar9 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar9 + 0x58);
            *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar9 + 0x38);
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
          (fVar18 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar18)) ||
         (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        fVar18 = *(float *)(unaff_x19 + 0x340);
        fVar20 = *(float *)(unaff_x19 + 0x348);
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        *(undefined1 *)(unaff_x19 + 0x24c) = 1;
        fVar20 = (fStack000000000000006c + fVar18 + fVar20) * 100.0 + 1.0;
        fVar18 = DAT_00d387f8;
        if (fVar20 != INFINITY) {
          fVar18 = (float)(int)fVar20 / 100.0;
        }
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        return fVar18;
      }
      if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
        fVar18 = *in_stack_00000010;
      }
      *(float *)(unaff_x19 + 0x240) = fVar18;
      fVar18 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
      if (fVar18 <= DAT_00d38b84) {
        fVar18 = DAT_00d38b84;
      }
      fVar18 = *in_stack_00000010 + fVar18;
      *in_stack_00000010 = fVar18;
      fVar20 = fVar18 * 20.0 + 0.5;
      fVar18 = DAT_00d38e60;
      if (fVar20 != INFINITY) {
        fVar18 = (float)(int)fVar20 / 20.0;
      }
      if (*(float *)(unaff_x19 + 0x254) <= fVar18) {
        fVar18 = *(float *)(unaff_x19 + 0x254);
      }
      *in_stack_00000010 = fVar18;
      goto LAB_035863e8;
    }
    goto LAB_03586310;
  }
  fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
  fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
  fVar20 = unaff_s14;
  if (unaff_w24 == 0) goto LAB_03585998;
  if (*unaff_x23 != 0) {
    memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
    fVar18 = (float)FUN_03776a48(&stack0x00000140,0);
    if (*unaff_x23 != 0) {
      fVar21 = *(float *)(unaff_x19 + 0x640);
      fVar20 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
      fVar20 = unaff_s14 * fVar18 * fVar20;
      fVar18 = fVar20 * (float)(int)(fVar21 / fVar20);
      if (fVar21 < fVar18) goto LAB_03585a9c;
      fVar18 = fVar21 + fVar20;
      goto LAB_03585a9c;
    }
  }
LAB_03586310:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
code_r0x03584a00:
  *(undefined1 *)(unaff_x19 + 0x431) = 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  uVar10 = FUN_03586568();
  if (((uVar10 & 1) != 0) && (unaff_w27 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03586300;
LAB_03584a74:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0)) goto LAB_03586310;
  uVar7 = *unaff_x21;
  if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
  lVar14 = (long)(int)uVar7;
  cVar1 = *(char *)(lVar9 + lVar14 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar26 = *(undefined4 *)(unaff_x19 + 0x120);
  if (in_stack_00000c10 == uVar7) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000c14 == 0x2026) {
      lVar9 = *in_stack_00000078;
      if (lVar9 == 0) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar9 + lVar14 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar9 = *in_stack_00000078;
      if (lVar9 == 0) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar9 = lVar9 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar9 + 0x2c) = 0;
      *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar9 = *(long *)(unaff_x19 + 0x488);
      if (lVar9 == 0) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
      goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar9 = *in_stack_00000078;
      if (lVar9 == 0) goto LAB_03586310;
      uVar7 = *unaff_x21;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
      bVar5 = true;
      in_stack_00000c10 = uVar7 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar7 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      unaff_w28 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000c14 = 3;
      goto LAB_03584c20;
    }
    if (in_stack_00000c14 != 3) {
      bVar5 = true;
      unaff_w28 = in_stack_00000c14;
      goto LAB_03584c20;
    }
    lVar9 = *in_stack_00000078;
    if (((lVar9 == 0) || (*unaff_x23 == 0)) || (lVar8 = FUN_03568ac0(*unaff_x23,0), lVar8 == 0))
    goto LAB_03586310;
    FUN_0219b634(lVar8,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
    if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(ulong *)(lVar9 + lVar14 * unaff_x22 + 0x30) =
         CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    bVar5 = true;
    unaff_w28 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar5 = false;
LAB_03584c20:
    if ((unaff_w28 != 3) && ((int)uVar7 < *(int *)(unaff_x19 + 0x324))) {
      lVar9 = *in_stack_00000078;
      if (lVar9 == 0) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar9 = lVar9 + (long)(int)uVar7 * (long)iVar13;
      *(undefined1 *)(lVar9 + 0x194) = 0;
      *(undefined2 *)(lVar9 + 0x20) = 0x200b;
      *(undefined4 *)(lVar9 + 100) = 0;
      *unaff_x21 = uVar7 + 1;
      goto LAB_03586300;
    }
  }
  iVar6 = *(int *)(unaff_x19 + 0x644);
  if (iVar6 == 0) {
    uVar7 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar7 >> 4 & 1) == 0) {
      if ((uVar7 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar7 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b812c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = FUN_026b8410(unaff_w28,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03584f98;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b8070(unaff_w28,0);
        fStack0000000000000068 = 1.0;
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_026b8594(unaff_w28,0);
          goto LAB_03584f98;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_026b812c(unaff_w28,0);
      fStack0000000000000068 = 1.0;
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_026b8410(unaff_w28,0);
LAB_03584f98:
        unaff_w28 = uVar7 & 0xffff;
      }
    }
    iVar6 = *(int *)(unaff_x19 + 0x644);
    if (iVar6 != 0) goto LAB_03584c80;
LAB_03584fa4:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar9 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *unaff_x25 = *(long *)(lVar9 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x25 == 0) goto LAB_03586300;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0)) goto LAB_03586310;
    uVar11 = *unaff_x21;
    uVar7 = *(uint *)(lVar9 + 0x18);
    if (uVar7 <= uVar11) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar9 + (long)(int)uVar11 * unaff_x22 + 0x58);
    if (bVar5) {
      lVar14 = *(long *)(unaff_x19 + 0x478);
      if (lVar14 == 0) goto LAB_03586310;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w27) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if ((*(int *)(lVar14 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar11 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
      if (uVar7 <= uVar11 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar18 = *(float *)(lVar9 + (long)(int)(uVar11 - 1) * (long)iVar13 + 0x60);
      iVar6 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar9 = *unaff_x23;
    }
    else {
LAB_03585044:
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar18 = *(float *)(unaff_x19 + 0x1e8);
      iVar6 = FUN_03776950(*unaff_x23 + 0x50,0);
      lVar9 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar9 == 0) goto LAB_03586310;
    fVar25 = (float)FUN_03776960(lVar9 + 0x50,0);
    fVar20 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar20 = 1.0;
    }
    fVar21 = 0.0;
    fVar16 = 0.0;
    if (!(bool)(bVar5 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar16 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar21 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar9 = *(long *)(unaff_x19 + 0x488), lVar9 == 0)) goto LAB_03586310;
    uVar7 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
    unaff_s14 = ((fStack0000000000000068 * fVar18) / (float)iVar6) * fVar25 * fVar20 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar9 + (long)(int)uVar7 * unaff_x22 + 0x2c) = 0;
LAB_035852d0:
    unaff_w26 = unaff_w28 == 0xad;
    fVar20 = unaff_s13;
    if (!(bool)unaff_w26 && unaff_w28 != 3) {
      fVar20 = unaff_s14;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar6 == 0) goto LAB_03584fa4;
LAB_03584c80:
    if (iVar6 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar9 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= *unaff_x21) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar9 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar9 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar9 == 0))
      goto LAB_03586310;
      FUN_02215a88(lVar9,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      lVar9 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      if (lVar9 == 0) goto LAB_03586300;
      if (unaff_w28 == 0x3c) {
        unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar6 = FUN_03776950(&stack0x00000140,0);
      fVar18 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar6 < 1) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        iVar6 = FUN_03776950(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar20 = (float)FUN_03776960(&stack0x00000140,0);
        fVar21 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar21 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar25 = (float)FUN_03776980(&stack0x00000140,0);
        if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03586310;
        FUN_03776e6c(&stack0x000000c0,*(long *)(lVar9 + 0x20),0);
        in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000110 = in_stack_000000d0;
        fVar15 = (float)FUN_03776c9c(&stack0x00000100,0);
        if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03586310;
        fVar19 = *(float *)(lVar9 + 0x2c);
        fVar17 = (float)FUN_03776ea8(*(long *)(lVar9 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar16 = (float)FUN_03776980(&stack0x00000140,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar21 = (fVar18 / (float)iVar6) * fVar20 * fVar21;
        unaff_s14 = fVar21 * (fVar25 / fVar15) * fVar19 * fVar17;
        fVar21 = fVar21 / unaff_s14;
        fVar16 = fVar21 * fVar16;
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar18 = (float)FUN_037769c0(&stack0x00000140,0);
        fVar21 = fVar21 * fVar18;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar6 = FUN_03776950(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar20 = (float)FUN_03776960(&stack0x00000140,0);
        if (*(long *)(lVar9 + 0x20) == 0) goto LAB_03586310;
        fVar25 = *(float *)(lVar9 + 0x2c);
        fVar21 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar21 = 1.0;
        }
        fVar15 = (float)FUN_03776ea8(*(long *)(lVar9 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar16 = (float)FUN_03776980(&stack0x00000140,0);
        if (*in_stack_00000050 == 0) goto LAB_03586310;
        unaff_s14 = (fVar18 / (float)iVar6) * fVar20 * fVar21 * fVar25 * fVar15;
        memmove(&stack0x00000140,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar21 = (float)FUN_037769c0(&stack0x00000140,0);
      }
      *unaff_x25 = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      unaff_s13 = 0.0;
      lVar9 = *in_stack_00000078;
      if (lVar9 == 0) goto LAB_03586310;
      uVar7 = *unaff_x21;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar14 = lVar9 + (long)(int)uVar7 * unaff_x22;
      *(undefined4 *)(lVar14 + 0x2c) = 1;
      *(float *)(lVar14 + 0x160) = unaff_s14;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar26;
      goto LAB_035852d0;
    }
    unaff_w26 = unaff_w28 == 0xad;
    lVar9 = *in_stack_00000078;
    fVar16 = 0.0;
    fVar20 = 0.0;
    if (!(bool)unaff_w26 && unaff_w28 != 3) {
      fVar20 = unaff_s14;
    }
    if (lVar9 == 0) goto LAB_03586310;
    uVar7 = *unaff_x21;
    fVar21 = 0.0;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
  *(short *)(lVar9 + (long)(int)uVar7 * (long)iVar13 + 0x20) = (short)unaff_w28;
  if ((*unaff_x25 == 0) || (lVar9 = *(long *)(*unaff_x25 + 0x20), lVar9 == 0)) goto LAB_03586310;
  FUN_03776e6c(&stack0x000000c0,lVar9,0);
  in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000130 = in_stack_000000d0;
  if ((int)unaff_w28 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_026b63d8(unaff_w28,0);
    unaff_w29 = uVar7 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    unaff_d10 = 0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03586310;
    uVar11 = *unaff_x21;
    uVar7 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar11 < (int)uStack0000000000000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= uVar11 + 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar9 = *(long *)(lVar9 + (long)(int)(uVar11 + 1) * (long)iVar13 + 0x30);
      if ((((lVar9 == 0) || (*unaff_x23 == 0)) ||
          (lVar14 = *(long *)(*unaff_x23 + 0x128), lVar14 == 0)) ||
         (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) goto LAB_03586310;
      uStack00000000000000c0 = uVar7 | *(int *)(lVar9 + 0x28) << 0x10;
      uVar10 = FUN_0219f8b8(lVar14,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar26 = 0;
      if ((uVar10 & 1) == 0) {
        uVar27 = 0;
        uVar24 = 0;
        uVar28 = 0;
      }
      else {
        if (in_stack_000000f8 == 0) goto LAB_03586310;
        uVar26 = *(undefined4 *)(in_stack_000000f8 + 0x14);
        uVar27 = *(undefined4 *)(in_stack_000000f8 + 0x18);
        uVar24 = *(uint *)(in_stack_000000f8 + 0x1c);
        uVar28 = *(undefined4 *)(in_stack_000000f8 + 0x20);
        if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar11 = *unaff_x21;
    }
    else {
      uVar26 = 0;
      uVar27 = 0;
      uVar24 = 0;
      uVar28 = 0;
    }
    unaff_d10 = (ulong)uVar24;
    if (0 < (int)uVar11) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= uVar11 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
      lVar9 = *(long *)(lVar9 + (ulong)(uVar11 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar9 == 0) || (*unaff_x23 == 0)) ||
         ((lVar14 = *(long *)(*unaff_x23 + 0x128), lVar14 == 0 ||
          (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)))) goto LAB_03586310;
      uStack00000000000000c0 = *(uint *)(lVar9 + 0x28) | uVar7 << 0x10;
      uVar10 = FUN_0219f8b8(lVar14,&stack0x000000c0,&stack0x000000f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar10 & 1) != 0) {
        if ((in_stack_000000f8 == 0) ||
           (FUN_03571cb4(uVar26,uVar27,unaff_d10,uVar28,*(undefined4 *)(in_stack_000000f8 + 0x28),
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
    *(int *)(unaff_x19 + 0x2fc) = (int)unaff_d10;
  }
  fStack0000000000000060 = 0.0;
  fVar18 = (float)unaff_d10;
  fVar25 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar25 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar9 = *(long *)(*unaff_x25 + 0x20), lVar9 == 0)) goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar9,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar15 = (float)FUN_03776c94(&stack0x00000100,0);
    if ((*unaff_x25 == 0) || (lVar9 = *(long *)(*unaff_x25 + 0x20), lVar9 == 0)) goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar9,0);
    in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000110 = in_stack_000000d0;
    fVar17 = (float)FUN_03776ca4(&stack0x00000100,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar25 * 0.5 - fVar20 * (fVar15 * 0.5 + fVar17));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar6 = *(int *)(unaff_x19 + 0x644);
  unaff_s11 = 0.0;
  if (((cVar1 == '\0') && (unaff_s11 = 0.0, iVar6 == 0)) &&
     ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
    if (*unaff_x23 == 0) goto LAB_03586310;
    unaff_s11 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar9 = *in_stack_00000078;
  if (lVar9 == 0) goto LAB_03586310;
  uVar7 = *unaff_x21;
  lVar14 = (long)(int)uVar7;
  if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
  fVar25 = *(float *)(unaff_x19 + 0x4d8);
  fVar15 = *(float *)(unaff_x19 + 0x61c);
  fVar16 = fVar16 * fVar20;
  *(float *)(lVar9 + lVar14 * unaff_x22 + 0x14c) = (unaff_s13 - fVar25) + fVar15;
  if (iVar6 == 0) {
    fVar16 = fVar16 / fStack0000000000000068;
    fVar21 = (fVar21 * fVar20) / fStack0000000000000068;
  }
  else {
    fVar21 = fVar21 * fVar20;
  }
  fVar16 = fVar15 + fVar16;
  if ((unaff_w29 == 0) || (uVar7 == *(uint *)(unaff_x19 + 0x498))) {
    fVar21 = fVar15 + fVar21;
    fVar17 = fVar16;
    fVar19 = fVar21;
    if (fVar15 != 0.0) {
      fVar17 = (fVar16 - fVar15) / *(float *)(unaff_x19 + 0x404);
      fVar19 = (fVar21 - fVar15) / *(float *)(unaff_x19 + 0x404);
      if (fVar17 <= fVar16) {
        fVar17 = fVar16;
      }
      if (fVar21 <= fVar19) {
        fVar19 = fVar21;
      }
    }
    lVar9 = lVar9 + lVar14 * unaff_x22;
    fVar15 = fVar17;
    if (fVar17 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar15 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar23 = fVar19;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar19) {
      fVar23 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar23;
    *(float *)(unaff_x19 + 0x4c8) = fVar15;
    *(float *)(lVar9 + 0x154) = fVar17;
    *(float *)(lVar9 + 0x158) = fVar19;
    *(float *)(lVar9 + 0x148) = fVar16 - fVar25;
    *(float *)(unaff_x19 + 0x4c0) = fVar16 - fVar25;
    *(float *)(lVar9 + 0x150) = fVar21 - fVar25;
    *(float *)(unaff_x19 + 0x4c4) = fVar21 - fVar25;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar15;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
      fVar21 = *(float *)(unaff_x19 + 0x4bc);
      fVar25 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (fVar20 * fVar25) / fStack0000000000000068;
      fVar25 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar21 <= fStack0000000000000068) {
        fVar21 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar21;
    }
  }
  else {
    fVar21 = *(float *)(unaff_x19 + 0x4c8);
    lVar9 = lVar9 + lVar14 * unaff_x22;
    *(float *)(lVar9 + 0x154) = fVar21;
    fVar15 = *(float *)(unaff_x19 + 0x4cc);
    fVar21 = fVar21 - fVar25;
    *(float *)(lVar9 + 0x148) = fVar21;
    *(float *)(lVar9 + 0x158) = fVar15;
    *(float *)(unaff_x19 + 0x4c0) = fVar21;
    fVar15 = fVar15 - fVar25;
    *(float *)(lVar9 + 0x150) = fVar15;
    *(float *)(unaff_x19 + 0x4c4) = fVar15;
  }
  if (fVar25 == 0.0) {
    if ((unaff_w29 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar21 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar16) {
        fVar21 = fVar16;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar21;
      goto LAB_035857b0;
    }
    bVar5 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 == 9) goto LAB_035857c4;
  }
  else {
LAB_035857b0:
    bVar5 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 == 9) {
LAB_035857c4:
      unaff_w24 = 1;
      goto LAB_03585820;
    }
    if ((((unaff_w29 == 0) && (unaff_w28 != 3)) && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad))
    goto UnityEngine_Display__Activate;
  }
  if ((((bStack000000000000004c | unaff_w26 ^ 0xff) & 1) == 0) || (*(int *)(unaff_x19 + 0x644) == 1)
     ) goto UnityEngine_Display__Activate;
LAB_03585998:
  fVar21 = *(float *)(unaff_x19 + 0x640);
  if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
    fVar25 = (float)FUN_03776cb4(&stack0x00000120,0);
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar18 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
             (*(float *)(unaff_x19 + 0x2ac) +
             fVar20 * (fVar18 + fVar25) +
             in_stack_00000058 *
             (unaff_s11 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
  }
  else {
    if (*unaff_x23 == 0) goto LAB_03586310;
    fVar18 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
             (*(float *)(unaff_x19 + 0x2ac) +
             (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
             in_stack_00000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
  }
  fVar21 = fVar21 + fVar18;
  *(float *)(unaff_x19 + 0x640) = fVar21;
  if ((unaff_w28 == 0x200b) || (unaff_w29 != 0)) {
    fVar21 = fVar21 + in_stack_00000058 * *(float *)(unaff_x19 + 0x2b4);
    *(float *)(unaff_x19 + 0x640) = fVar21;
  }
  unaff_s14 = fVar20;
  if (unaff_w28 == 0xd) {
    if (fStack0000000000000064 <= fStack000000000000006c + fVar21) {
      fStack0000000000000064 = fStack000000000000006c + fVar21;
    }
    fStack000000000000006c = 0.0;
    fVar18 = *(float *)(unaff_x19 + 0x40c) + 0.0;
LAB_03585a9c:
    bVar5 = false;
    *(float *)(unaff_x19 + 0x640) = fVar18;
    fVar20 = unaff_s14;
LAB_03585aa4:
    unaff_s14 = fVar20;
    if (*unaff_x21 == uStack0000000000000070) goto LAB_03585b64;
  }
  else {
    bVar5 = unaff_w28 == 10;
    if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
       (1 < unaff_w28 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar18 = *(float *)(unaff_x19 + 0x4c8);
      fVar20 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar18 = fVar18 - fVar20;
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
    fVar20 = fStack0000000000000044 +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar18 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar20) {
      fVar18 = fVar20;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar18;
    if (*(uint *)(unaff_x19 + 0x494) != uStack0000000000000070) {
      fStack000000000000006c = unaff_s13;
      fStack0000000000000064 = fVar18;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if (bVar5) {
LAB_03585e8c:
      FUN_0358c4f0();
      FUN_0358c4f0();
      uVar7 = *(uint *)(unaff_x19 + 0x494);
      lVar9 = *(long *)(unaff_x19 + 0x488);
      iVar6 = uVar7 + 1;
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      *(int *)(unaff_x19 + 0x498) = iVar6;
      if (lVar9 == 0) goto LAB_03586310;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto UnityEngine_LightProbesQuery__get_IsCreated;
      fVar18 = *(float *)(lVar9 + (long)(int)uVar7 * unaff_x22 + 0x154);
      if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
        fVar20 = 0.0;
        if (!(bool)(unaff_w28 != 0x2029 & (bVar5 ^ 1U))) {
          fVar20 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar12 = 0;
        fVar20 = fVar18 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                 fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                 in_stack_00000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar20) +
                 *(float *)(unaff_x19 + 0x4d8);
      }
      else {
        fVar20 = 0.0;
        if (!(bool)(unaff_w28 != 0x2029 & (bVar5 ^ 1U))) {
          fVar20 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar12 = 1;
        fVar20 = *(float *)(unaff_x19 + 0x4d8) +
                 *(float *)(unaff_x19 + 0x2c0) +
                 in_stack_00000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar20);
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar20;
      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar12;
      puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar2;
        iVar6 = *unaff_x21 + 1;
      }
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 0x640) =
           *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
      uVar22 = NEON_rev64(uVar22,4);
      *(float *)(unaff_x19 + 0x4d0) = fVar18;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar22;
      *(int *)(unaff_x19 + 0x494) = iVar6;
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
  if (((uVar3 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3)) goto LAB_035862f4;
  if ((((unaff_w29 == 0) && (unaff_w28 != 0x2d)) && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)) {
    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
LAB_03585d14:
    if ((((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
          (0x1d < unaff_w28 - 0xa961)) || (uVar10 = FUN_03597a54(0), (uVar10 & 1) != 0)) &&
        (((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
         (0x717d < unaff_w28 - 0x2e81)))) && (0x1fd < unaff_w28 - 0xf901)) goto LAB_03585adc;
    lVar9 = FUN_035978e8(0);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_03586310;
    uStack00000000000000c0 = unaff_w28;
    uVar7 = FUN_0219c130(*(long *)(lVar9 + 0x10),&stack0x000000c0,
                         *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)uStack0000000000000070 <= (int)*unaff_x21) {
      if (((uStack0000000000000030 | uVar7 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
        FUN_0358c4f0();
      }
LAB_035862c4:
      uStack0000000000000030 = 0;
      uStack0000000000000028 = 1;
      goto LAB_035862f4;
    }
    lVar9 = FUN_035978e8(0);
    if ((lVar9 == 0) || (lVar14 = *in_stack_00000078, lVar14 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar14 + 0x18) <= *unaff_x21 + 1)
    goto UnityEngine_LightProbesQuery__get_IsCreated;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_03586310;
    uStack00000000000000c0 =
         (uint)*(ushort *)(lVar14 + (long)(int)(*unaff_x21 + 1) * (long)iVar13 + 0x20);
    uVar10 = FUN_0219c130(*(long *)(lVar9 + 0x18),&stack0x000000c0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if (((uStack0000000000000030 | uVar7 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
    if ((uVar10 & 1) == 0) goto LAB_035862b0;
    if ((uStack0000000000000030 & 1) == 0) goto LAB_035862c4;
    if (unaff_w29 != 0) {
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
      lVar9 = FUN_035978e8(0);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_03586310;
      uStack00000000000000c0 = unaff_w28;
      uVar10 = FUN_0219c130(*(long *)(lVar9 + 0x10),&stack0x000000c0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((uVar10 & 1) == 0) {
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
    if ((((bStack000000000000004c | unaff_w26 ^ 0xff) & 1) == 0) || (unaff_w29 != 0)) {
      FUN_0358c4f0();
    }
    FUN_0358c4f0();
    uStack0000000000000028 = 0;
  }
  uStack0000000000000030 = 1;
LAB_035862f4:
  *unaff_x21 = *unaff_x21 + 1;
  goto LAB_03586300;
UnityEngine_Display__Activate:
  unaff_w24 = 0;
LAB_03585820:
  fVar18 = *(float *)(unaff_x19 + 0x360);
  fVar21 = *(float *)(unaff_x19 + 0x640);
  unaff_s8 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
  bVar4 = true;
  if ((fVar18 <= unaff_s8) && (bVar4 = false, !NAN(fVar18))) {
    bVar4 = fVar18 == -1.0;
  }
  if (!bVar4) {
    unaff_s8 = fVar18;
  }
  fVar18 = (float)FUN_03776cb4(&stack0x00000120,0);
  unaff_s9 = 1.0;
  if ((bool)unaff_w26 == false) {
    unaff_s14 = fVar20;
  }
  if (!bVar5) {
    unaff_s9 = DAT_00d38acc;
  }
  unaff_s12 = ABS(fVar21) + unaff_s14 * fVar18 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
  in_w8 = unaff_s12 <= unaff_s9 * unaff_s8;
  unaff_s14 = fVar20;
  in_w9 = bStack0000000000000040;
  goto code_r0x0358589c;
}


