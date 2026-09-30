/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawWireMesh
ENTRY_POINT: 03584844
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


float UnityEngine_Gizmos__DrawWireMesh(void)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  undefined1 uVar23;
  long unaff_x19;
  long unaff_x20;
  float *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long *unaff_x27;
  int unaff_w28;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar41;
  undefined4 uVar42;
  float unaff_s12;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 unaff_d13;
  float unaff_s14;
  float unaff_s15;
  float fVar45;
  undefined8 in_stack_00000028;
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
  undefined8 in_stack_00000070;
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
  
  uStack00000000000000c0 = 0;
  FUN_0209aa94();
  *(undefined1 *)(unaff_x19 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  lVar19 = *unaff_x27;
  uStack0000000000000034 = unaff_w26;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar19 = *unaff_x27;
  }
  uVar34 = NEON_rev64(*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x15a8),4);
  *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
  *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
  *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
  *(undefined8 *)(unaff_x19 + 0x350) = unaff_d13;
  *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
  *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
  *(undefined8 *)(unaff_x19 + 0x4b8) = unaff_d13;
  *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar34;
  *(undefined1 *)(unaff_x19 + 0x2da) = 0;
  FUN_0359f73c(&stack0x00000c10,0xffffffff,0,0);
  memset(&stack0x00000898,0,0x378);
  memset(&stack0x00000520,0,0x378);
  memset(&stack0x000001a8,0,0x378);
  lVar19 = *(long *)(unaff_x19 + 0x478);
  *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
  fVar33 = DAT_00d38d28;
  fVar32 = DAT_00d38938;
  if (lVar19 == 0) {
LAB_03586310:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar1 = (long *)(unaff_x19 + 0x698);
  uVar7 = unaff_w28 - 1;
  uVar4 = uStack0000000000000034 ^ 1;
  fStack0000000000000064 = 0.0;
  fStack0000000000000048 = 0.0;
  fStack0000000000000044 = 0.0;
  fVar38 = unaff_s10 - (unaff_s11 - unaff_s12);
  fStack000000000000006c = 0.0;
  fStack0000000000000038 = 0.0;
  fVar35 = unaff_s8 + DAT_00d3879c;
  fStack000000000000005c = 0.0;
  fVar36 = (unaff_s9 / (float)unaff_w25) * unaff_s14 * unaff_s15;
  bVar9 = false;
  bVar12 = false;
  fVar25 = unaff_s15 * in_stack_00000070._4_4_ * DAT_00d38d28;
  uVar17 = 0;
  puVar2 = (uint *)(unaff_x20 + 0x1e8);
  plVar3 = (long *)(unaff_x19 + 0x648);
  uStack0000000000000030 = 1;
  fVar45 = fVar36;
LAB_035849d0:
  if ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar17) {
LAB_03586314:
    if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
         ((unaff_w24 & 1) == 0)) || (fVar32 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar32))
       || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
      fVar32 = *(float *)(unaff_x19 + 0x340);
      fVar33 = *(float *)(unaff_x19 + 0x348);
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      *(undefined1 *)(unaff_x19 + 0x24c) = 1;
      fVar33 = (fStack000000000000006c + fVar32 + fVar33) * 100.0 + 1.0;
      fVar32 = DAT_00d387f8;
      if (fVar33 != INFINITY) {
        fVar32 = (float)(int)fVar33 / 100.0;
      }
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
      return fVar32;
    }
    if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
      fVar32 = *unaff_x22;
    }
    *(float *)(unaff_x19 + 0x240) = fVar32;
    fVar32 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
    if (fVar32 <= DAT_00d38b84) {
      fVar32 = DAT_00d38b84;
    }
    fVar32 = *unaff_x22 + fVar32;
    *unaff_x22 = fVar32;
    fVar33 = fVar32 * 20.0 + 0.5;
    fVar32 = DAT_00d38e60;
    if (fVar33 != INFINITY) {
      fVar32 = (float)(int)fVar33 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x254) <= fVar32) {
      fVar32 = *(float *)(unaff_x19 + 0x254);
    }
    *unaff_x22 = fVar32;
    goto LAB_035863e8;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar17) goto UnityEngine_LightProbesQuery__get_IsCreated;
  uVar18 = *(uint *)(lVar19 + (long)(int)uVar17 * 0xc + 0x20);
  if (uVar18 == 0) goto LAB_03586314;
  if ((uVar18 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x431) = 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    uVar20 = FUN_03586568();
    if (((uVar20 & 1) == 0) || (uVar17 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
    goto LAB_03584a74;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0)) goto LAB_03586310;
    if (*(uint *)(lVar19 + 0x18) <= *puVar2) goto UnityEngine_LightProbesQuery__get_IsCreated;
    lVar19 = lVar19 + (long)(int)*puVar2 * 0x178;
    *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar19 + 0x2c);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar19 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar19 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_03584a74:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0)) goto LAB_03586310;
    uVar16 = *puVar2;
    if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
    lVar24 = (long)(int)uVar16;
    cVar6 = *(char *)(lVar19 + lVar24 * 0x178 + 0x5c);
    *(undefined1 *)(unaff_x19 + 0x431) = 0;
    uVar42 = *(undefined4 *)(unaff_x19 + 0x120);
    if (in_stack_00000c10 == uVar16) {
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      if (in_stack_00000c14 == 0x2026) {
        lVar19 = *in_stack_00000078;
        if (lVar19 != 0) {
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
          *(undefined8 *)(lVar19 + lVar24 * 0x178 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar19 = *in_stack_00000078;
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= *puVar2)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar19 = lVar19 + (long)(int)*puVar2 * 0x178;
            *(undefined4 *)(lVar19 + 0x2c) = 0;
            *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar19 = *(long *)(unaff_x19 + 0x488);
            if (lVar19 != 0) {
              if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                   *(undefined8 *)(unaff_x19 + 0x660);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar19 = *in_stack_00000078;
              if (lVar19 != 0) {
                uVar16 = *puVar2;
                if (*(uint *)(lVar19 + 0x18) <= uVar16)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                bVar13 = true;
                in_stack_00000c10 = uVar16 + 1;
                *(undefined4 *)(lVar19 + (long)(int)uVar16 * 0x178 + 0x58) =
                     *(undefined4 *)(unaff_x19 + 0x668);
                uVar18 = 0x2026;
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
        bVar13 = true;
        uVar18 = in_stack_00000c14;
        goto LAB_03584c20;
      }
      lVar19 = *in_stack_00000078;
      if (((lVar19 == 0) || (*unaff_x23 == 0)) || (lVar21 = FUN_03568ac0(*unaff_x23,0), lVar21 == 0)
         ) goto LAB_03586310;
      FUN_0219b634(lVar21,&stack0x00000c1c,&stack0x000000c0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(ulong *)(lVar19 + lVar24 * 0x178 + 0x30) =
           CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      bVar13 = true;
      uVar18 = 3;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
    }
    else {
      bVar13 = false;
LAB_03584c20:
      if ((uVar18 != 3) && ((int)uVar16 < *(int *)(unaff_x19 + 0x324))) {
        lVar19 = *in_stack_00000078;
        if (lVar19 != 0) {
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar19 = lVar19 + (long)(int)uVar16 * 0x178;
          *(undefined1 *)(lVar19 + 0x194) = 0;
          *(undefined2 *)(lVar19 + 0x20) = 0x200b;
          *(undefined4 *)(lVar19 + 100) = 0;
          *puVar2 = uVar16 + 1;
          goto LAB_03586300;
        }
        goto LAB_03586310;
      }
    }
    iVar15 = *(int *)(unaff_x19 + 0x644);
    if (iVar15 == 0) {
      uVar16 = *(uint *)(unaff_x19 + 0x25c);
      if ((uVar16 >> 4 & 1) == 0) {
        if ((uVar16 >> 3 & 1) == 0) {
          fStack0000000000000068 = 1.0;
          if ((uVar16 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b812c(uVar18,0);
            fStack0000000000000068 = 1.0;
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar18 = FUN_026b8410(uVar18,0);
              fStack0000000000000068 = fVar32;
              goto LAB_03584f98;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b8070(uVar18,0);
          fStack0000000000000068 = 1.0;
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar18 = FUN_026b8594(uVar18,0);
            goto LAB_03584f98;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b812c(uVar18,0);
        fStack0000000000000068 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b8410(uVar18,0);
LAB_03584f98:
          uVar18 = uVar18 & 0xffff;
        }
      }
      iVar15 = *(int *)(unaff_x19 + 0x644);
      if (iVar15 != 0) goto LAB_03584c80;
LAB_03584fa4:
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0)) goto LAB_03586310;
      if (*(uint *)(lVar19 + 0x18) <= *puVar2) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *plVar3 = *(long *)(lVar19 + (long)(int)*puVar2 * 0x178 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3);
      if (*plVar3 == 0) goto LAB_03586300;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0)) goto LAB_03586310;
      uVar5 = *puVar2;
      uVar16 = *(uint *)(lVar19 + 0x18);
      if (uVar16 <= uVar5) goto UnityEngine_LightProbesQuery__get_IsCreated;
      *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar19 + (long)(int)uVar5 * 0x178 + 0x58)
      ;
      if (bVar13) {
        lVar24 = *(long *)(unaff_x19 + 0x478);
        if (lVar24 == 0) goto LAB_03586310;
        if (*(uint *)(lVar24 + 0x18) <= uVar17) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if ((*(int *)(lVar24 + (long)(int)uVar17 * 0xc + 0x20) != 10) ||
           (uVar5 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
        if (uVar16 <= uVar5 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar45 = *(float *)(lVar19 + (long)(int)(uVar5 - 1) * 0x178 + 0x60);
        iVar15 = FUN_03776950(*unaff_x23 + 0x50,0);
        lVar19 = *unaff_x23;
      }
      else {
LAB_03585044:
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar45 = *(float *)(unaff_x19 + 0x1e8);
        iVar15 = FUN_03776950(*unaff_x23 + 0x50,0);
        lVar19 = *(long *)(unaff_x19 + 0x100);
      }
      if (lVar19 == 0) goto LAB_03586310;
      fVar41 = (float)FUN_03776960(lVar19 + 0x50,0);
      fVar29 = in_stack_00000028._4_4_;
      if (*(char *)(unaff_x19 + 0x305) != '\0') {
        fVar29 = 1.0;
      }
      fVar26 = 0.0;
      fVar28 = 0.0;
      if (!(bool)(bVar13 & uVar18 == 0x2026)) {
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar28 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar26 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
      }
      if ((*plVar3 == 0) || (lVar19 = *(long *)(unaff_x19 + 0x488), lVar19 == 0)) goto LAB_03586310;
      uVar16 = *(uint *)(unaff_x19 + 0x494);
      if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
      fVar45 = ((fStack0000000000000068 * fVar45) / (float)iVar15) * fVar41 * fVar29 *
               *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar3 + 0x2c);
      *(undefined4 *)(lVar19 + (long)(int)uVar16 * 0x178 + 0x2c) = 0;
LAB_035852d0:
      bVar13 = uVar18 == 0xad;
      fVar29 = 0.0;
      if (!bVar13 && uVar18 != 3) {
        fVar29 = fVar45;
      }
    }
    else {
      fStack0000000000000068 = 1.0;
      if (iVar15 == 0) goto LAB_03584fa4;
LAB_03584c80:
      if (iVar15 == 1) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar19 + 0x18) <= *puVar2) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined8 *)(unaff_x19 + 0x698) =
             *(undefined8 *)(lVar19 + (long)(int)*puVar2 * 0x178 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar19 + 0x18) <= *puVar2) goto UnityEngine_LightProbesQuery__get_IsCreated;
        *(undefined4 *)(unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar19 + (long)(int)*puVar2 * 0x178 + 0x48);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar19 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
           lVar19 == 0)) goto LAB_03586310;
        FUN_02215a88(lVar19,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                     *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
        lVar19 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        if (lVar19 == 0) goto LAB_03586300;
        if (uVar18 == 0x3c) {
          uVar18 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
        }
        if (*plVar1 == 0) goto LAB_03586310;
        memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
        iVar15 = FUN_03776950(&stack0x00000140,0);
        fVar45 = *(float *)(unaff_x19 + 0x1e8);
        if (iVar15 < 1) {
          if (*unaff_x23 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          iVar15 = FUN_03776950(&stack0x00000140,0);
          if (*unaff_x23 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar29 = (float)FUN_03776960(&stack0x00000140,0);
          fVar26 = in_stack_00000028._4_4_;
          if (*(char *)(unaff_x19 + 0x305) != '\0') {
            fVar26 = 1.0;
          }
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
          fVar41 = (float)FUN_03776980(&stack0x00000140,0);
          if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03586310;
          FUN_03776e6c(&stack0x000000c0,*(long *)(lVar19 + 0x20),0);
          in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
          in_stack_00000108 = in_stack_000000c8;
          in_stack_00000110 = in_stack_000000d0;
          fVar27 = (float)FUN_03776c9c(&stack0x00000100,0);
          if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03586310;
          fVar31 = *(float *)(lVar19 + 0x2c);
          fVar30 = (float)FUN_03776ea8(*(long *)(lVar19 + 0x20),0);
          if (*unaff_x23 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar28 = (float)FUN_03776980(&stack0x00000140,0);
          if (*unaff_x23 == 0) goto LAB_03586310;
          fVar26 = (fVar45 / (float)iVar15) * fVar29 * fVar26;
          fVar45 = fVar26 * (fVar41 / fVar27) * fVar31 * fVar30;
          fVar26 = fVar26 / fVar45;
          fVar28 = fVar26 * fVar28;
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar29 = (float)FUN_037769c0(&stack0x00000140,0);
          fVar26 = fVar26 * fVar29;
        }
        else {
          if (*plVar1 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
          iVar15 = FUN_03776950(&stack0x00000140,0);
          if (*plVar1 == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
          fVar26 = (float)FUN_03776960(&stack0x00000140,0);
          if (*(long *)(lVar19 + 0x20) == 0) goto LAB_03586310;
          fVar41 = *(float *)(lVar19 + 0x2c);
          fVar29 = in_stack_00000028._4_4_;
          if (*(char *)(unaff_x19 + 0x305) != '\0') {
            fVar29 = 1.0;
          }
          fVar27 = (float)FUN_03776ea8(*(long *)(lVar19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
          memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
          fVar28 = (float)FUN_03776980(&stack0x00000140,0);
          if (*plVar1 == 0) goto LAB_03586310;
          fVar45 = (fVar45 / (float)iVar15) * fVar26 * fVar29 * fVar41 * fVar27;
          memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
          fVar26 = (float)FUN_037769c0(&stack0x00000140,0);
        }
        *plVar3 = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,lVar19);
        lVar19 = *in_stack_00000078;
        if (lVar19 != 0) {
          uVar16 = *puVar2;
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
          lVar24 = lVar19 + (long)(int)uVar16 * 0x178;
          *(undefined4 *)(lVar24 + 0x2c) = 1;
          *(float *)(lVar24 + 0x160) = fVar45;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar42;
          goto LAB_035852d0;
        }
        goto LAB_03586310;
      }
      bVar13 = uVar18 == 0xad;
      lVar19 = *in_stack_00000078;
      fVar28 = 0.0;
      fVar29 = 0.0;
      if (!bVar13 && uVar18 != 3) {
        fVar29 = fVar45;
      }
      if (lVar19 == 0) goto LAB_03586310;
      uVar16 = *puVar2;
      fVar26 = 0.0;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
    *(short *)(lVar19 + (long)(int)uVar16 * 0x178 + 0x20) = (short)uVar18;
    if ((*plVar3 == 0) || (lVar19 = *(long *)(*plVar3 + 0x20), lVar19 == 0)) goto LAB_03586310;
    FUN_03776e6c(&stack0x000000c0,lVar19,0);
    in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
    in_stack_00000128 = in_stack_000000c8;
    in_stack_00000130 = in_stack_000000d0;
    if ((int)uVar18 < 0x10000) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b63d8(uVar18,0);
      uVar16 = uVar16 & 1;
    }
    else {
      uVar16 = 0;
    }
    in_stack_00000070._4_4_ = *(float *)(unaff_x19 + 0x2a8);
    *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
    if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
      fVar41 = 0.0;
    }
    else {
      if (*plVar3 == 0) goto LAB_03586310;
      uVar22 = *puVar2;
      uVar5 = *(uint *)(*plVar3 + 0x28);
      if ((int)uVar22 < (int)uVar7) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar19 + 0x18) <= uVar22 + 1)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar19 = *(long *)(lVar19 + (long)(int)(uVar22 + 1) * 0x178 + 0x30);
        if ((((lVar19 == 0) || (*unaff_x23 == 0)) ||
            (lVar24 = *(long *)(*unaff_x23 + 0x128), lVar24 == 0)) ||
           (lVar24 = *(long *)(lVar24 + 0x18), lVar24 == 0)) goto LAB_03586310;
        uStack00000000000000c0 = uVar5 | *(int *)(lVar19 + 0x28) << 0x10;
        uVar20 = FUN_0219f8b8(lVar24,&stack0x000000c0,&stack0x000000f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        uVar42 = 0;
        if ((uVar20 & 1) == 0) {
          uVar43 = 0;
          fVar41 = 0.0;
          uVar44 = 0;
        }
        else {
          if (in_stack_000000f8 == 0) goto LAB_03586310;
          uVar42 = *(undefined4 *)(in_stack_000000f8 + 0x14);
          uVar43 = *(undefined4 *)(in_stack_000000f8 + 0x18);
          fVar41 = *(float *)(in_stack_000000f8 + 0x1c);
          uVar44 = *(undefined4 *)(in_stack_000000f8 + 0x20);
          if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
            in_stack_00000070._4_4_ = 0.0;
          }
        }
        uVar22 = *puVar2;
      }
      else {
        uVar42 = 0;
        uVar43 = 0;
        fVar41 = 0.0;
        uVar44 = 0;
      }
      if (0 < (int)uVar22) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar19 == 0))
        goto LAB_03586310;
        if (*(uint *)(lVar19 + 0x18) <= uVar22 - 1)
        goto UnityEngine_LightProbesQuery__get_IsCreated;
        lVar19 = *(long *)(lVar19 + (ulong)(uVar22 - 1) * 0x178 + 0x30);
        if (((lVar19 == 0) || (*unaff_x23 == 0)) ||
           ((lVar24 = *(long *)(*unaff_x23 + 0x128), lVar24 == 0 ||
            (lVar24 = *(long *)(lVar24 + 0x18), lVar24 == 0)))) goto LAB_03586310;
        uStack00000000000000c0 = *(uint *)(lVar19 + 0x28) | uVar5 << 0x10;
        uVar20 = FUN_0219f8b8(lVar24,&stack0x000000c0,&stack0x000000f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        if ((uVar20 & 1) != 0) {
          if ((in_stack_000000f8 == 0) ||
             (FUN_03571cb4(uVar42,uVar43,fVar41,uVar44,*(undefined4 *)(in_stack_000000f8 + 0x28),
                           *(undefined4 *)(in_stack_000000f8 + 0x2c),
                           *(undefined4 *)(in_stack_000000f8 + 0x30),
                           *(undefined4 *)(in_stack_000000f8 + 0x34),0), in_stack_000000f8 == 0))
          goto LAB_03586310;
          if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
            in_stack_00000070._4_4_ = 0.0;
          }
        }
      }
      *(float *)(unaff_x19 + 0x2fc) = fVar41;
    }
    fStack0000000000000060 = 0.0;
    fVar27 = *(float *)(unaff_x19 + 0x2b0);
    if (fVar27 != 0.0) {
      if ((*plVar3 == 0) || (lVar19 = *(long *)(*plVar3 + 0x20), lVar19 == 0)) goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar19,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar30 = (float)FUN_03776c94(&stack0x00000100,0);
      if ((*plVar3 == 0) || (lVar19 = *(long *)(*plVar3 + 0x20), lVar19 == 0)) goto LAB_03586310;
      FUN_03776e6c(&stack0x000000c0,lVar19,0);
      in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000110 = in_stack_000000d0;
      fVar31 = (float)FUN_03776ca4(&stack0x00000100,0);
      fStack0000000000000060 =
           (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar27 * 0.5 - fVar29 * (fVar30 * 0.5 + fVar31))
      ;
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
    }
    iVar15 = *(int *)(unaff_x19 + 0x644);
    fVar27 = 0.0;
    if (((cVar6 == '\0') && (fVar27 = 0.0, iVar15 == 0)) &&
       ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar27 = *(float *)(*unaff_x23 + 0x1b4);
    }
    lVar19 = *in_stack_00000078;
    if (lVar19 == 0) goto LAB_03586310;
    uVar5 = *puVar2;
    lVar24 = (long)(int)uVar5;
    if (*(uint *)(lVar19 + 0x18) <= uVar5) goto UnityEngine_LightProbesQuery__get_IsCreated;
    fVar30 = *(float *)(unaff_x19 + 0x4d8);
    fVar31 = *(float *)(unaff_x19 + 0x61c);
    fVar28 = fVar28 * fVar29;
    *(float *)(lVar19 + lVar24 * 0x178 + 0x14c) = (0.0 - fVar30) + fVar31;
    if (iVar15 == 0) {
      fVar28 = fVar28 / fStack0000000000000068;
      fVar26 = (fVar26 * fVar29) / fStack0000000000000068;
    }
    else {
      fVar26 = fVar26 * fVar29;
    }
    fVar28 = fVar31 + fVar28;
    if ((uVar16 == 0) || (uVar5 == *(uint *)(unaff_x19 + 0x498))) {
      fVar26 = fVar31 + fVar26;
      fVar39 = fVar28;
      fVar37 = fVar26;
      if (fVar31 != 0.0) {
        fVar39 = (fVar28 - fVar31) / *(float *)(unaff_x19 + 0x404);
        fVar37 = (fVar26 - fVar31) / *(float *)(unaff_x19 + 0x404);
        if (fVar39 <= fVar28) {
          fVar39 = fVar28;
        }
        if (fVar26 <= fVar37) {
          fVar37 = fVar26;
        }
      }
      lVar19 = lVar19 + lVar24 * 0x178;
      fVar31 = fVar39;
      if (fVar39 <= *(float *)(unaff_x19 + 0x4c8)) {
        fVar31 = *(float *)(unaff_x19 + 0x4c8);
      }
      fVar40 = fVar37;
      if (*(float *)(unaff_x19 + 0x4cc) <= fVar37) {
        fVar40 = *(float *)(unaff_x19 + 0x4cc);
      }
      *(float *)(unaff_x19 + 0x4cc) = fVar40;
      *(float *)(unaff_x19 + 0x4c8) = fVar31;
      *(float *)(lVar19 + 0x154) = fVar39;
      *(float *)(lVar19 + 0x158) = fVar37;
      *(float *)(lVar19 + 0x148) = fVar28 - fVar30;
      *(float *)(unaff_x19 + 0x4c0) = fVar28 - fVar30;
      *(float *)(lVar19 + 0x150) = fVar26 - fVar30;
      *(float *)(unaff_x19 + 0x4c4) = fVar26 - fVar30;
      if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
        *(float *)(unaff_x19 + 0x4b8) = fVar31;
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
        fVar26 = *(float *)(unaff_x19 + 0x4bc);
        fVar30 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
        fStack0000000000000068 = (fVar29 * fVar30) / fStack0000000000000068;
        fVar30 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar26 <= fStack0000000000000068) {
          fVar26 = fStack0000000000000068;
        }
        *(float *)(unaff_x19 + 0x4bc) = fVar26;
      }
    }
    else {
      fVar26 = *(float *)(unaff_x19 + 0x4c8);
      lVar19 = lVar19 + lVar24 * 0x178;
      *(float *)(lVar19 + 0x154) = fVar26;
      fVar31 = *(float *)(unaff_x19 + 0x4cc);
      fVar26 = fVar26 - fVar30;
      *(float *)(lVar19 + 0x148) = fVar26;
      *(float *)(lVar19 + 0x158) = fVar31;
      *(float *)(unaff_x19 + 0x4c0) = fVar26;
      fVar31 = fVar31 - fVar30;
      *(float *)(lVar19 + 0x150) = fVar31;
      *(float *)(unaff_x19 + 0x4c4) = fVar31;
    }
    if (fVar30 == 0.0) {
      if ((uVar16 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fVar26 = *(float *)(unaff_x19 + 0x4b4);
        if (*(float *)(unaff_x19 + 0x4b4) <= fVar28) {
          fVar26 = fVar28;
        }
        *(float *)(unaff_x19 + 0x4b4) = fVar26;
        goto LAB_035857b0;
      }
      bVar14 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (uVar18 == 9) goto LAB_035857c4;
LAB_03585804:
      if ((!(bool)(bVar12 | bVar13 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1))
      goto UnityEngine_Display__Activate;
LAB_03585998:
      fVar45 = *(float *)(unaff_x19 + 0x640);
      if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
        fVar26 = (float)FUN_03776cb4(&stack0x00000120,0);
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar26 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 fVar29 * (fVar41 + fVar26) +
                 fVar25 * (fVar27 + in_stack_00000070._4_4_ + *(float *)(*unaff_x23 + 0x1ac)));
      }
      else {
        if (*unaff_x23 == 0) goto LAB_03586310;
        fVar26 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                 fVar25 * (in_stack_00000070._4_4_ + *(float *)(*unaff_x23 + 0x1ac)));
      }
      fVar45 = fVar45 + fVar26;
      *(float *)(unaff_x19 + 0x640) = fVar45;
      if ((uVar18 == 0x200b) || (uVar16 != 0)) {
        fVar45 = fVar45 + fVar25 * *(float *)(unaff_x19 + 0x2b4);
        *(float *)(unaff_x19 + 0x640) = fVar45;
      }
      if (uVar18 == 0xd) {
        if (fStack0000000000000064 <= fStack000000000000006c + fVar45) {
          fStack0000000000000064 = fStack000000000000006c + fVar45;
        }
        fStack000000000000006c = 0.0;
        fVar45 = *(float *)(unaff_x19 + 0x40c) + 0.0;
        goto LAB_03585a9c;
      }
      bVar14 = uVar18 == 10;
      if (((0xb < uVar18) || ((1 << (ulong)(uVar18 & 0x1f) & 0xc08U) == 0)) && (1 < uVar18 - 0x2028)
         ) goto LAB_03585aa4;
LAB_03585b64:
      if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
        fVar45 = *(float *)(unaff_x19 + 0x4c8);
        fVar26 = *(float *)(unaff_x19 + 0x4d0);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar45 = fVar45 - fVar26;
        if (((fVar33 < ABS(fVar45)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
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
      fVar26 = fStack0000000000000044 +
               fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
      fVar45 = fStack0000000000000064;
      if (fStack0000000000000064 <= fVar26) {
        fVar45 = fVar26;
      }
      *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
      fStack000000000000006c = fVar45;
      if (*(uint *)(unaff_x19 + 0x494) != uVar7) {
        fStack000000000000006c = 0.0;
        fStack0000000000000064 = fVar45;
      }
      fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
      *(undefined1 *)(unaff_x19 + 0x33c) = 0;
      if (bVar14) {
LAB_03585e8c:
        FUN_0358c4f0();
        FUN_0358c4f0();
        uVar16 = *(uint *)(unaff_x19 + 0x494);
        lVar19 = *(long *)(unaff_x19 + 0x488);
        iVar15 = uVar16 + 1;
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        *(int *)(unaff_x19 + 0x498) = iVar15;
        if (lVar19 != 0) {
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar45 = *(float *)(lVar19 + (long)(int)uVar16 * 0x178 + 0x154);
          if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
            fVar26 = 0.0;
            if (!(bool)(uVar18 != 0x2029 & (bVar14 ^ 1U))) {
              fVar26 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar23 = 0;
            fVar26 = fVar45 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fVar36 * (fVar38 + *(float *)(unaff_x19 + 700)) +
                     fVar25 * (*(float *)(unaff_x19 + 0x2b8) + fVar26) +
                     *(float *)(unaff_x19 + 0x4d8);
          }
          else {
            fVar26 = 0.0;
            if (!(bool)(uVar18 != 0x2029 & (bVar14 ^ 1U))) {
              fVar26 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar23 = 1;
            fVar26 = *(float *)(unaff_x19 + 0x4d8) +
                     *(float *)(unaff_x19 + 0x2c0) +
                     fVar25 * (*(float *)(unaff_x19 + 0x2b8) + fVar26);
          }
          *(float *)(unaff_x19 + 0x4d8) = fVar26;
          *(undefined1 *)(unaff_x19 + 0x2c4) = uVar23;
          puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar10;
            iVar15 = *puVar2 + 1;
          }
          uVar34 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) =
               *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
          uVar34 = NEON_rev64(uVar34,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar45;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar34;
          *(int *)(unaff_x19 + 0x494) = iVar15;
          fVar45 = fVar29;
          goto LAB_03586300;
        }
        goto LAB_03586310;
      }
      if ((int)uVar18 < 0x2028) {
        if (uVar18 == 3) {
          if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
          uVar17 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
          uVar18 = 3;
        }
        else if ((uVar18 == 0xb) || (uVar18 == 0x2d)) goto LAB_03585e8c;
      }
      else if (uVar18 - 0x2028 < 2) goto LAB_03585e8c;
    }
    else {
LAB_035857b0:
      bVar14 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (uVar18 == 9) {
LAB_035857c4:
        bVar8 = true;
      }
      else {
        if ((((uVar16 != 0) || (uVar18 == 3)) || (uVar18 == 0x200b)) || (uVar18 == 0xad))
        goto LAB_03585804;
UnityEngine_Display__Activate:
        bVar8 = false;
      }
      fVar30 = *(float *)(unaff_x19 + 0x360);
      fVar31 = *(float *)(unaff_x19 + 0x640);
      fVar26 = (fVar35 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
      bVar11 = true;
      if ((fVar30 <= fVar26) && (bVar11 = false, !NAN(fVar30))) {
        bVar11 = fVar30 == -1.0;
      }
      if (!bVar11) {
        fVar26 = fVar30;
      }
      fVar30 = (float)FUN_03776cb4(&stack0x00000120,0);
      if (!bVar13) {
        fVar45 = fVar29;
      }
      fVar28 = 1.0;
      if (!bVar14) {
        fVar28 = DAT_00d38acc;
      }
      fStack000000000000005c = ABS(fVar31) + fVar45 * fVar30 * (1.0 - *(float *)(unaff_x19 + 0x2d4))
      ;
      if ((fVar28 * fVar26 < fStack000000000000005c && (uVar4 & 1) == 0) &&
         (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
        uVar17 = FUN_0358c15c();
        lVar19 = *(long *)(unaff_x19 + 0x488);
        if (lVar19 == 0) goto LAB_03586310;
        uVar18 = *(uint *)(unaff_x19 + 0x494);
        uVar16 = uVar18 - 1;
        if (*(uint *)(lVar19 + 0x18) <= uVar16) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if ((!bVar12 && *(short *)(lVar19 + (long)(int)uVar16 * 0x178 + 0x20) == 0xad) &&
           (*(int *)(unaff_x19 + 0x2e0) == 0)) {
          bVar12 = false;
          in_stack_00000c14 = 0x2d;
          *puVar2 = uVar16;
          fVar45 = fVar29;
          uVar17 = uVar17 - 1;
          in_stack_00000c10 = uVar16;
          goto LAB_03586300;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar18) goto UnityEngine_LightProbesQuery__get_IsCreated;
        if (*(short *)(lVar19 + (long)(int)uVar18 * 0x178 + 0x20) == 0xad) {
          bVar12 = true;
          fVar45 = fVar29;
        }
        else {
          if ((uStack0000000000000030 & unaff_w24) != 0) {
            fVar45 = *(float *)(unaff_x19 + 0x2d4);
            fVar41 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
            if ((fVar45 < fVar41) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              fVar32 = fStack000000000000005c;
              if (0.0 < fVar45) {
                fVar32 = fStack000000000000005c / (1.0 - fVar45);
              }
              fVar45 = fVar45 + (fStack000000000000005c - fVar28 * (fVar26 + DAT_00d38cc4)) / fVar32
              ;
              if (fVar41 <= fVar45) {
                fVar45 = fVar41;
              }
              *(float *)(unaff_x19 + 0x2d4) = fVar45;
LAB_035863e8:
              if (DAT_0411f1e3 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbeb70);
                DAT_0411f1e3 = '\x01';
              }
              return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
            }
            if ((*(float *)(unaff_x19 + 0x250) < *unaff_x22) &&
               (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              *(float *)(unaff_x19 + 0x23c) = *unaff_x22;
              fVar32 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
              if (fVar32 <= DAT_00d38b84) {
                fVar32 = DAT_00d38b84;
              }
              fVar32 = *unaff_x22 - fVar32;
              *unaff_x22 = fVar32;
              fVar33 = fVar32 * 20.0 + 0.5;
              fVar32 = DAT_00d38e60;
              if (fVar33 != INFINITY) {
                fVar32 = (float)(int)fVar33 / 20.0;
              }
              if (fVar32 <= *(float *)(unaff_x19 + 0x250)) {
                fVar32 = *(float *)(unaff_x19 + 0x250);
              }
              *unaff_x22 = fVar32;
              goto LAB_035863e8;
            }
          }
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar45 = *(float *)(unaff_x19 + 0x4c8);
            fVar26 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar45 = fVar45 - fVar26;
            if (((fVar33 < ABS(fVar45)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
               (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar45;
              *(float *)(unaff_x19 + 0x4d8) = fVar45 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar41 = *(float *)(unaff_x19 + 0x640);
          fVar26 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fVar45 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar26 <= *(float *)(unaff_x19 + 0x4c4)) {
            fVar45 = fVar26;
          }
          *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
          *(float *)(unaff_x19 + 0x4c4) = fVar45;
          *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
          if ((uStack0000000000000034 & 1) == 0) {
            fVar26 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar26;
            if (fStack0000000000000038 <= fVar26) {
              fStack0000000000000038 = fVar26;
            }
          }
          else {
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar45;
          }
          FUN_0358c4f0();
          lVar19 = *(long *)(unaff_x19 + 0x488);
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          if (lVar19 == 0) goto LAB_03586310;
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
          goto UnityEngine_LightProbesQuery__get_IsCreated;
          fVar45 = *(float *)(unaff_x19 + 0x2c0);
          fVar26 = *(float *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x154);
          bVar12 = fVar45 != DAT_00d38ba4;
          if (bVar12) {
            fVar27 = fVar25 * *(float *)(unaff_x19 + 0x2b8);
          }
          else {
            fVar27 = fVar26 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fVar36 * (fVar38 + *(float *)(unaff_x19 + 700));
            fVar45 = fVar25 * *(float *)(unaff_x19 + 0x2b8);
          }
          *(bool *)(unaff_x19 + 0x2c4) = bVar12;
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar45 + fVar27;
          puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar10;
          }
          bVar12 = false;
          fStack000000000000006c = fStack000000000000006c + fVar41;
          uVar34 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
          uVar34 = NEON_rev64(uVar34,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar26;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar34;
          uStack0000000000000030 = 1;
          fVar45 = fVar29;
        }
        goto LAB_03586300;
      }
      fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
      fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
      if (!bVar8) goto LAB_03585998;
      if (*unaff_x23 == 0) goto LAB_03586310;
      memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
      fVar45 = (float)FUN_03776a48(&stack0x00000140,0);
      if (*unaff_x23 == 0) goto LAB_03586310;
      fVar41 = *(float *)(unaff_x19 + 0x640);
      fVar26 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
      fVar26 = fVar29 * fVar45 * fVar26;
      fVar45 = fVar26 * (float)(int)(fVar41 / fVar26);
      if (fVar45 <= fVar41) {
        fVar45 = fVar41 + fVar26;
      }
LAB_03585a9c:
      bVar14 = false;
      *(float *)(unaff_x19 + 0x640) = fVar45;
LAB_03585aa4:
      if (*puVar2 == uVar7) goto LAB_03585b64;
    }
    if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
      if ((uVar16 == 0) && (((uVar18 != 0x2d && (uVar18 != 0x200b)) && (uVar18 != 0xad)))) {
        if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
          if (((((0x2bfd < uVar18 - 0xac01) && (0xfd < uVar18 - 0x1101)) && (0x1d < uVar18 - 0xa961)
               ) || (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0)) &&
             ((((0xed < uVar18 - 0xff01 && (0x1d < uVar18 - 0xfe31)) && (0x717d < uVar18 - 0x2e81))
              && (0x1fd < uVar18 - 0xf901)))) goto LAB_03585adc;
          lVar19 = FUN_035978e8(0);
          if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) goto LAB_03586310;
          uStack00000000000000c0 = uVar18;
          uVar18 = FUN_0219c130(*(long *)(lVar19 + 0x10),&stack0x000000c0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if ((int)uVar7 <= (int)*puVar2) {
            if (uStack0000000000000030 != 0 || ((uVar18 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
              FUN_0358c4f0();
            }
LAB_035862c4:
            uStack0000000000000030 = 0;
            bVar9 = true;
            goto LAB_035862f4;
          }
          lVar19 = FUN_035978e8(0);
          if ((lVar19 == 0) || (lVar24 = *in_stack_00000078, lVar24 == 0)) goto LAB_03586310;
          if (*(uint *)(lVar24 + 0x18) <= *puVar2 + 1) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(long *)(lVar19 + 0x18) == 0) goto LAB_03586310;
          uStack00000000000000c0 =
               (uint)*(ushort *)(lVar24 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20);
          uVar20 = FUN_0219c130(*(long *)(lVar19 + 0x18),&stack0x000000c0,
                                *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
          if (uStack0000000000000030 == 0 && ((uVar18 ^ 0xffffffff) & 1) == 0) goto LAB_035862c4;
          if ((uVar20 & 1) == 0) goto LAB_035862b0;
          if (uStack0000000000000030 == 0) goto LAB_035862c4;
          if (uVar16 != 0) {
            FUN_0358c4f0();
          }
          FUN_0358c4f0();
          bVar9 = true;
LAB_03585ccc:
          uStack0000000000000030 = 1;
        }
        else {
LAB_03585adc:
          if (bVar9) {
            lVar19 = FUN_035978e8(0);
            if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) goto LAB_03586310;
            uStack00000000000000c0 = uVar18;
            uVar20 = FUN_0219c130(*(long *)(lVar19 + 0x10),&stack0x000000c0,
                                  *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
            if ((uVar20 & 1) == 0) {
              FUN_0358c4f0();
            }
            bVar9 = false;
          }
          else {
            if (uStack0000000000000030 != 0) {
              if ((!bVar12 && bVar13) || (uVar16 != 0)) {
                FUN_0358c4f0();
              }
              FUN_0358c4f0();
              bVar9 = false;
              goto LAB_03585ccc;
            }
            bVar9 = false;
            uStack0000000000000030 = 0;
          }
        }
      }
      else {
        if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
        if (((uVar18 - 0x2007 < 0x29) &&
            ((1L << ((ulong)(uVar18 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((uVar18 == 0xa0 || (uVar18 == 0x2060)))) goto LAB_03585d14;
        FUN_0358c4f0();
        bVar9 = false;
        uStack0000000000000030 = 0;
        in_stack_000001a8 = 0xffffffff;
      }
    }
LAB_035862f4:
    *puVar2 = *puVar2 + 1;
    fVar45 = fVar29;
  }
LAB_03586300:
  lVar19 = *(long *)(unaff_x19 + 0x478);
  uVar17 = uVar17 + 1;
  if (lVar19 == 0) goto LAB_03586310;
  goto LAB_035849d0;
}


