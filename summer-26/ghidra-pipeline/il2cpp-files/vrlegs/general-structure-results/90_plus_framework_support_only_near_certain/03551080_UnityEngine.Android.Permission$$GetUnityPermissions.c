/*
FUNCTION_NAME: UnityEngine.Android.Permission$$GetUnityPermissions
ENTRY_POINT: 03551080
PROGRAM: vrlegs-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_7
*/


void UnityEngine_Android_Permission__GetUnityPermissions(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  int *piVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  long in_x9;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  float *pfVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar42;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar43;
  long *plVar44;
  uint unaff_w26;
  long *unaff_x28;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  byte bStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  int iStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  uint in_stack_000008a0;
  undefined4 in_stack_000008a4;
  undefined8 in_stack_000008a8;
  undefined4 in_stack_000008b0;
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float in_stack_000017d8;
  uint in_stack_000017dc;
  
code_r0x03551080:
  *in_stack_00000160 = *(long *)(param_1 + in_x9 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar17 = *unaff_x20;
  uVar11 = *(uint *)(lVar27 + 0x18);
  if (uVar11 <= uVar17) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + (long)(int)uVar17 * unaff_x24 + 0x58)
  ;
  iVar16 = (int)unaff_x24;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar60 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar27 = unaff_x19[0x20];
  }
  else {
    lVar36 = unaff_x19[0x8f];
    if (lVar36 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar36 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar36 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar17 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar11 <= uVar17 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar60 = *(float *)(lVar27 + (long)(int)(uVar17 - 1) * (long)iVar16 + 0x60);
    iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar27 = *unaff_x21;
  }
  if (lVar27 == 0) goto LAB_035574b8;
  fVar45 = (float)FUN_03776960(lVar27 + 0x50,0);
  fVar53 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar53 = 1.0;
  }
  fVar47 = 0.0;
  fVar46 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar47 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar27 = unaff_x19[0xc9];
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
  fVar62 = *(float *)((long)unaff_x19 + 0x404);
  fVar64 = *(float *)(lVar27 + 0x2c);
  fVar48 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar49 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar66 = *(float *)((long)unaff_x19 + 0x404);
  fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar27 = unaff_x19[0x6d];
  if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*unaff_x20 < *(uint *)(lVar36 + 0x18)) {
    lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar36 + 0x2c) = 0;
    fVar53 = ((in_stack_00000158 * fVar60) / (float)iVar12) * fVar45 * fVar53;
    fVar48 = fVar53 * fVar62 * fVar64 * fVar48;
    uVar21 = (ulong)(uint)fVar48;
    *(float *)(lVar36 + 0x160) = fVar48;
    uVar11 = *(uint *)(unaff_x19 + 0x24);
    fVar50 = fVar53 * fVar49 * fVar66 * fVar50;
    if (uVar11 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar36 = unaff_x19[0xe1];
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar36 = *(long *)(lVar36 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar36 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar36 + 0x10c);
    }
LAB_035514b0:
    uVar54 = 0;
    uVar22 = in_stack_000017c8;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      uVar54 = uVar21;
    }
LAB_035514cc:
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(short *)(lVar27 + 0x20) = (short)in_stack_000017dc;
    *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3d];
    *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
    if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *(int *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
    if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
         *(undefined4 *)((long)unaff_x19 + 0x15c);
    if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    uVar11 = *unaff_x20;
    FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
                 *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
    if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)uVar11 * unaff_x24;
    *(undefined4 *)(lVar27 + 0x18c) = in_stack_000008b0;
    *(undefined8 *)(lVar27 + 0x184) = in_stack_000008a8;
    *(ulong *)(lVar27 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
    if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
         *(undefined4 *)((long)unaff_x19 + 0x25c);
    if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
    goto LAB_035574b8;
    FUN_03776e6c(&stack0x00000c18,lVar27,0);
    puVar7 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    if ((int)in_stack_000017dc < 0x10000) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(in_stack_000017dc,0);
      uVar11 = uVar11 & 1;
    }
    else {
      uVar11 = 0;
    }
    fVar60 = *(float *)(unaff_x19 + 0x55);
    *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
    if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
      fStack000000000000012c = 0.0;
      fVar45 = 0.0;
      fVar53 = 0.0;
    }
    else {
      if (*in_stack_000000e0 == 0) goto LAB_035574b8;
      uVar55 = *unaff_x20;
      uVar17 = *(uint *)(*in_stack_000000e0 + 0x28);
      if ((int)uVar55 < (int)in_stack_00000088._4_4_) {
        if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= uVar55 + 1) goto LAB_035575f4;
        lVar27 = *(long *)(lVar27 + (long)(int)(uVar55 + 1) * (long)iVar16 + 0x30);
        if ((((lVar27 == 0) || (*unaff_x21 == 0)) ||
            (lVar36 = *(long *)(*unaff_x21 + 0x128), lVar36 == 0)) ||
           (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)) goto LAB_035574b8;
        in_stack_000008a0 = uVar17 | *(int *)(lVar27 + 0x28) << 0x10;
        uVar20 = FUN_0219f8b8(lVar36,&stack0x000008a0,&stack0x000016f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        uVar65 = 0;
        if ((uVar20 & 1) == 0) {
          fStack000000000000012c = 0.0;
          fVar45 = 0.0;
          fVar53 = 0.0;
        }
        else {
          if (in_stack_000016f8 == 0) goto LAB_035574b8;
          fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
          uVar65 = *(undefined4 *)(in_stack_000016f8 + 0x20);
          fVar53 = *(float *)(in_stack_000016f8 + 0x14);
          fVar45 = *(float *)(in_stack_000016f8 + 0x18);
          if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
            fVar60 = 0.0;
          }
        }
        uVar55 = *unaff_x20;
      }
      else {
        uVar65 = 0;
        fStack000000000000012c = 0.0;
        fVar45 = 0.0;
        fVar53 = 0.0;
      }
      if (0 < (int)uVar55) {
        if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= uVar55 - 1) goto LAB_035575f4;
        lVar27 = *(long *)(lVar27 + (ulong)(uVar55 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
        if (((lVar27 == 0) || (*unaff_x21 == 0)) ||
           ((lVar36 = *(long *)(*unaff_x21 + 0x128), lVar36 == 0 ||
            (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)))) goto LAB_035574b8;
        in_stack_000008a0 = *(uint *)(lVar27 + 0x28) | uVar17 << 0x10;
        uVar20 = FUN_0219f8b8(lVar36,&stack0x000008a0,&stack0x000016f8,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
        if ((uVar20 & 1) != 0) {
          if ((in_stack_000016f8 == 0) ||
             (fVar53 = (float)FUN_03571cb4(fVar53,fVar45,fStack000000000000012c,uVar65,
                                           *(undefined4 *)(in_stack_000016f8 + 0x28),
                                           *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                           *(undefined4 *)(in_stack_000016f8 + 0x30),
                                           *(undefined4 *)(in_stack_000016f8 + 0x34),0),
             in_stack_000016f8 == 0)) goto LAB_035574b8;
          if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
            fVar60 = 0.0;
          }
        }
      }
      *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
    }
    fVar48 = (float)uVar54;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar64 = *(float *)(unaff_x19 + 200);
      fVar62 = (float)FUN_03776cb4(&stack0x00001790,0);
      fVar64 = fVar64 - fVar48 * fVar62 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
      *(float *)(unaff_x19 + 200) = fVar64;
      if ((in_stack_000017dc == 0x200b) || (uVar11 != 0)) {
        *(float *)(unaff_x19 + 200) =
             fVar64 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      }
    }
    fVar64 = *(float *)(unaff_x19 + 0x56);
    fVar62 = 0.0;
    if (fVar64 != 0.0) {
      fVar62 = (float)FUN_03776c94(&stack0x00001790,0);
      fVar49 = (float)FUN_03776ca4(&stack0x00001790,0);
      fVar62 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fVar64 * 0.5 - fVar48 * (fVar62 * 0.5 + fVar49));
      *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar62;
    }
    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_036cee6c(lVar27,0,0);
      fVar49 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        uVar20 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
        fVar49 = 0.0;
        if ((uVar20 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_035574b8;
          fVar64 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                               (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar66 = *(float *)(*unaff_x21 + 0x1b0);
          fVar49 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
          fVar49 = fVar49 * fVar64 * fVar66 * 0.25;
          if (fVar64 < fStack000000000000015c + fVar49) {
            fStack000000000000015c = fVar64 - fVar49;
          }
        }
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
    }
    else {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_036cee6c(lVar27,0,0);
      fStack00000000000000d0 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        uVar20 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
        if ((uVar20 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_035574b8;
          uVar20 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
          if ((uVar20 & 1) != 0) {
            lVar27 = *in_stack_00000160;
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar27 != 0) {
              fVar64 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                                   (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
              if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
                fVar66 = *(float *)(*unaff_x21 + 0x1a8);
                fVar49 = (float)FUN_0369e060(*in_stack_00000160,
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
                fVar49 = fVar49 * fVar64 * fVar66 * 0.25;
                if (fVar64 < fStack000000000000015c + fVar49) {
                  fStack000000000000015c = fVar64 - fVar49;
                }
                goto FUN_03551b84;
              }
            }
            goto LAB_035574b8;
          }
        }
      }
      fVar49 = 0.0;
    }
FUN_03551b84:
    fVar64 = *(float *)(unaff_x19 + 200);
    fVar66 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar64 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      fVar48 * (fVar53 + ((fVar66 - fStack000000000000015c) - fVar49));
    fVar53 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar67 = *(float *)((long)unaff_x19 + 0x61c) +
             ((fVar50 + fVar48 * (fVar45 + fStack000000000000015c + fVar53)) -
             *(float *)(unaff_x19 + 0x9b));
    fVar53 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar53 = fVar67 - fVar48 * (fStack000000000000015c + fStack000000000000015c + fVar53);
    fVar45 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar66 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      fVar48 * (fVar49 + fVar49 +
                               fStack000000000000015c + fStack000000000000015c + fVar45);
    fStack0000000000000104 = fVar64;
    fVar45 = fVar66;
    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
      fVar58 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
      fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
      fVar57 = fVar58 * fVar48 * (fVar49 + fStack000000000000015c + fVar45);
      fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
      fVar61 = (float)FUN_03776c9c(&stack0x00001790,0);
      fVar67 = fVar67 + 0.0;
      fVar53 = fVar53 + 0.0;
      fVar58 = fVar58 * fVar48 * (((fVar45 - fVar61) - fStack000000000000015c) - fVar49);
      fVar61 = fVar64 + fVar57;
      fVar45 = fVar66 + fVar58;
      fVar51 = (fVar57 - fVar58) * 0.5;
      fVar64 = (fVar64 + fVar58) - fVar51;
      fVar66 = (fVar66 + fVar57) - fVar51;
      fStack0000000000000104 = fVar61 - fVar51;
      fVar45 = fVar45 - fVar51;
    }
    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
      fStack0000000000000114 = 0.0;
      fVar51 = 0.0;
      fVar57 = 0.0;
      fStack0000000000000100 = 0.0;
      fVar58 = fVar53;
      fVar61 = fVar67;
    }
    else {
      thunk_FUN_036bc400(_fStack0000000000000078,0);
      fVar59 = (fVar66 + fVar64) * 0.5;
      fVar63 = (fVar53 + fVar67) * 0.5;
      fVar67 = fVar67 - fVar63;
      fStack0000000000000100 = 0.0;
      fVar61 = fVar67;
      fStack0000000000000104 =
           (float)FUN_036bdd2c(fStack0000000000000104 - fVar59,_fStack0000000000000078,0);
      fStack0000000000000104 = fVar59 + fStack0000000000000104;
      fStack0000000000000100 = fStack0000000000000100 + 0.0;
      fVar58 = fVar53 - fVar63;
      fStack0000000000000114 = 0.0;
      fVar53 = fVar58;
      fVar64 = (float)FUN_036bdd2c(fVar64 - fVar59,_fStack0000000000000078,0);
      fVar64 = fVar59 + fVar64;
      fStack0000000000000114 = fStack0000000000000114 + 0.0;
      fVar53 = fVar63 + fVar53;
      fVar57 = 0.0;
      fVar66 = (float)FUN_036bdd2c(fVar66 - fVar59,_fStack0000000000000078,0);
      fVar66 = fVar59 + fVar66;
      fVar67 = fVar63 + fVar67;
      fVar57 = fVar57 + 0.0;
      fVar51 = 0.0;
      fVar45 = (float)FUN_036bdd2c(fVar45 - fVar59,_fStack0000000000000078,0);
      fVar45 = fVar59 + fVar45;
      fVar51 = fVar51 + 0.0;
      fVar58 = fVar63 + fVar58;
      fVar61 = fVar63 + fVar61;
    }
    if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(float *)(lVar27 + 0x11c) = fVar64;
    *(float *)(lVar27 + 0x120) = fVar53;
    *(float *)(lVar27 + 0x124) = fStack0000000000000114;
    if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(float *)(lVar27 + 0x114) = fVar61;
    *(float *)(lVar27 + 0x110) = fStack0000000000000104;
    *(float *)(lVar27 + 0x118) = fStack0000000000000100;
    if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(float *)(lVar27 + 0x128) = fVar66;
    *(float *)(lVar27 + 300) = fVar67;
    *(float *)(lVar27 + 0x130) = fVar57;
    if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(float *)(lVar27 + 0x134) = fVar45;
    *(float *)(lVar27 + 0x138) = fVar58;
    *(float *)(lVar27 + 0x13c) = fVar51;
    if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    uVar17 = *unaff_x20;
    lVar36 = (long)(int)uVar17;
    if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
    lVar30 = lVar27 + lVar36 * unaff_x24;
    *(int *)(lVar30 + 0x140) = (int)unaff_x19[200];
    fVar67 = *(float *)(unaff_x19 + 0x9b);
    uVar20 = (ulong)(uint)fVar67;
    fVar45 = *(float *)((long)unaff_x19 + 0x61c);
    *(float *)(lVar30 + 0x15c) = (fVar66 - fVar64) / (fVar61 - fVar53);
    *(float *)(lVar30 + 0x14c) = (fVar50 - fVar67) + fVar45;
    fVar46 = fVar46 * fVar48;
    if (*(int *)((long)unaff_x19 + 0x644) == 0) {
      fVar46 = fVar46 / in_stack_00000158;
      fVar47 = (fVar47 * fVar48) / in_stack_00000158;
    }
    else {
      fVar47 = fVar47 * fVar48;
    }
    uVar55 = *(uint *)(unaff_x19 + 0x93);
    if ((uVar11 == 0) || (uVar17 == uVar55)) {
      fVar47 = fVar45 + fVar47;
      fVar46 = fVar45 + fVar46;
      fVar64 = fVar47;
      fVar53 = fVar46;
      if (fVar45 != 0.0) {
        fVar53 = (fVar46 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
        fVar64 = (fVar47 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
        if (fVar53 <= fVar46) {
          fVar53 = fVar46;
        }
        if (fVar47 <= fVar64) {
          fVar64 = fVar47;
        }
      }
      lVar27 = lVar27 + lVar36 * unaff_x24;
      fVar45 = fVar53;
      if (fVar53 <= *(float *)(unaff_x19 + 0x99)) {
        fVar45 = *(float *)(unaff_x19 + 0x99);
      }
      fVar50 = fVar64;
      if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar64) {
        fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
      }
      *(float *)((long)unaff_x19 + 0x4cc) = fVar50;
      *(float *)(unaff_x19 + 0x99) = fVar45;
      *(float *)(lVar27 + 0x154) = fVar53;
      *(float *)(lVar27 + 0x158) = fVar64;
      *(float *)(lVar27 + 0x148) = fVar46 - fVar67;
      *(float *)(unaff_x19 + 0x98) = fVar46 - fVar67;
      *(float *)(lVar27 + 0x150) = fVar47 - fVar67;
      *(float *)((long)unaff_x19 + 0x4c4) = fVar47 - fVar67;
      if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
        *(float *)(unaff_x19 + 0x97) = fVar45;
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar53 = *(float *)((long)unaff_x19 + 0x4bc);
        fVar45 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
        in_stack_00000158 = (fVar48 * fVar45) / in_stack_00000158;
        uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
        if (fVar53 <= in_stack_00000158) {
          fVar53 = in_stack_00000158;
        }
        *(float *)((long)unaff_x19 + 0x4bc) = fVar53;
      }
      if ((float)uVar20 == 0.0) {
        fVar53 = *(float *)(in_stack_00000080 + 0x208);
        if (*(float *)(in_stack_00000080 + 0x208) <= fVar46) {
          fVar53 = fVar46;
        }
        *(float *)(in_stack_00000080 + 0x208) = fVar53;
      }
    }
    else {
      fVar53 = *(float *)(unaff_x19 + 0x99);
      lVar27 = lVar27 + lVar36 * unaff_x24;
      *(float *)(lVar27 + 0x154) = fVar53;
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar53 = fVar53 - fVar67;
      *(float *)(lVar27 + 0x148) = fVar53;
      *(float *)(lVar27 + 0x158) = fVar45;
      *(float *)(unaff_x19 + 0x98) = fVar53;
      fVar45 = fVar45 - fVar67;
      *(float *)(lVar27 + 0x150) = fVar45;
      *(float *)((long)unaff_x19 + 0x4c4) = fVar45;
    }
    lVar27 = *unaff_x28;
    if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0)) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar36 = lVar36 + (long)(int)uVar13 * unaff_x24;
    *(undefined1 *)(lVar36 + 0x194) = 0;
    uVar33 = *(uint *)(unaff_x19 + 0x4f);
    if (((in_stack_000017dc == 9) ||
        ((((uVar11 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
         (in_stack_000017dc != 0xad)))) ||
       (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
        (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
      *(undefined1 *)(lVar36 + 0x194) = 1;
      pfVar31 = _fStack00000000000000a0;
      pfVar34 = _fStack00000000000000a8;
      if (unaff_w23 != 0) {
        lVar27 = *(long *)(lVar27 + 0x50);
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        pfVar34 = (float *)(lVar27 + 0x60);
        pfVar31 = (float *)(lVar27 + 100);
      }
      fVar45 = *pfVar34;
      fVar46 = *pfVar31;
      fVar53 = *(float *)(unaff_x19 + 0x6c);
      fVar47 = *(float *)(unaff_x19 + 200);
      in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar45) - fVar46;
      bVar9 = true;
      if ((fVar53 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar53))) {
        bVar9 = fVar53 == -1.0;
      }
      if (!bVar9) {
        in_stack_000000f8._4_4_ = fVar53;
      }
      fVar53 = 0.0;
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar53 = (float)FUN_03776cb4(&stack0x00001790,0);
        uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      }
      fVar50 = *(float *)((long)unaff_x19 + 0x2d4);
      fVar66 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar64 = (float)uVar21;
      if (in_stack_000017dc != 0xad) {
        fVar64 = fVar48;
      }
      fVar61 = (float)uVar20;
      fVar67 = 0.0;
      if ((0.0 < fVar61) && (fVar67 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar67 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar13 = *unaff_x20;
      fVar67 = (*(float *)(unaff_x19 + 0x97) - (fVar66 - fVar61)) + fVar67;
      if (fStack00000000000000c4 < fVar67) {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        in_stack_000017c8 = DAT_00d37868;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar58 = *(float *)(unaff_x19 + 0x59);
          if (((fVar58 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar61)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar60 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar67) / (float)(int)unaff_x19[0x95]) /
                     fStack0000000000000058;
            if (fVar60 <= fVar58) {
              fVar60 = fVar58;
            }
            goto LAB_03554b48;
          }
          fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
          fVar67 = *(float *)(unaff_x19 + 0x4a);
          uVar20 = (ulong)(uint)fVar67;
          if ((fVar67 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar60 = (fVar61 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar60 <= DAT_00d38b84) {
              fVar60 = DAT_00d38b84;
            }
            fVar53 = (fVar61 - fVar60) * 20.0 + 0.5;
            *(float *)((long)unaff_x19 + 0x23c) = fVar61;
            fVar60 = DAT_00d38e60;
            if (fVar53 != INFINITY) {
              fVar60 = (float)(int)fVar53 / 20.0;
            }
            if (fVar60 <= fVar67) {
              fVar60 = fVar67;
            }
            goto LAB_03554658;
          }
        }
        switch((int)unaff_x19[0x5c]) {
        case 1:
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          lVar36 = *(long *)(lVar27 + 0xb8);
          lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = FUN_01a46ff8(lVar27);
          }
          piVar23 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*piVar23 == 0) {
LAB_03554580:
            in_stack_000017c8 = DAT_00d37868;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            in_stack_000017a8 = 0xffffffff;
            goto LAB_03550bd0;
          }
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar12 = FUN_0358c15c();
LAB_035529e8:
          iVar14 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar14;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar12 - 1;
          in_stack_000017c8 = CONCAT44(0x2026,iVar14);
          goto LAB_03550bd0;
        default:
          goto UnityEngine_AnimationClip__set_wrapMode;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
LAB_03552550:
          in_stack_000017a8 = FUN_0358c15c();
          break;
        case 5:
          if ((uVar13 == 0) || ((int)in_stack_000017a8 < 0)) {
            in_stack_000017a8 = 0xffffffff;
            *unaff_x20 = 0;
            goto LAB_03550bd0;
          }
          fVar60 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fVar60 - fVar66 <= fStack00000000000000c4) {
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
            *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
            uVar20 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            lVar27 = NEON_rev64(uVar20,4);
            unaff_x19[0x99] = lVar27;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            in_stack_000017c8 = uVar22;
            goto LAB_03550bd0;
          }
          break;
        case 6:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          lVar27 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar21 = FUN_036cee6c(lVar27,0,0);
          if ((uVar21 & 1) != 0) {
            plVar44 = (long *)unaff_x19[0x5d];
            uVar22 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar44 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar44 + 0x528))(plVar44,uVar22,*(undefined8 *)(*plVar44 + 0x530));
            lVar27 = unaff_x19[0x5d];
            if (lVar27 == 0) goto LAB_035574b8;
            *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar44 = (long *)unaff_x19[0x5d];
            if (plVar44 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar44 + 0x7a8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
        }
UnityEngine_AnimationClip__get_hasMotionCurves:
        in_stack_000017c8 = CONCAT44(3,uVar13);
        goto LAB_03550bd0;
      }
UnityEngine_AnimationClip__set_wrapMode:
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar47 = ABS(fVar47) + fVar53 * (1.0 - fVar50) * fVar64;
      fVar53 = 1.0;
      if ((uVar33 & 0x18) != 0) {
        fVar53 = DAT_00d38acc;
      }
      fVar64 = fVar53 * in_stack_000000f8._4_4_;
      if (fVar64 < fVar47) {
        uVar20 = (ulong)(uint)fVar49;
        if (((char)unaff_x19[0x5b] != '\0') && (uVar13 != *(uint *)(unaff_x19 + 0x93))) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
            lVar27 = *in_stack_00000170;
            if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0))
            goto LAB_035574b8;
            if (*(uint *)(lVar36 + 0x18) <= *unaff_x20) goto LAB_035575f4;
            fVar64 = *(float *)(unaff_x19 + 0x9b);
            fVar50 = 0.0;
            if ((0.0 < fVar64) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
              fVar50 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
            }
            fVar50 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                     *(float *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                     (fVar50 - *(float *)((long)unaff_x19 + 0x4cc)) +
                     fStack0000000000000058 *
                     (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
          }
          else {
            lVar27 = unaff_x19[0x6d];
            *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
            if (lVar27 == 0) goto LAB_035574b8;
            fVar64 = *(float *)(unaff_x19 + 0x9b);
            fVar50 = *(float *)(unaff_x19 + 0x58) +
                     fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            uVar35 = *(uint *)((long)unaff_x19 + 0x494);
            if ((*(uint *)(lVar27 + 0x18) <= uVar35) ||
               (uVar5 = uVar35 - 1, *(uint *)(lVar27 + 0x18) <= uVar5)) goto LAB_035575f4;
            uVar20 = (ulong)(uint)(fVar50 + *(float *)(unaff_x19 + 0x97));
            fVar66 = (fVar50 + *(float *)(unaff_x19 + 0x97) + fVar64) -
                     *(float *)(lVar27 + (long)(int)uVar35 * unaff_x24 + 0x158);
            if (((bStack0000000000000074 & 1) == 0 &&
                 *(short *)(lVar27 + (long)(int)uVar5 * (long)iVar16 + 0x20) == 0xad) &&
               ((fVar66 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar5;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              in_stack_000017c8 = CONCAT44(0x2d,uVar5);
              goto LAB_03550bd0;
            }
            if (*(short *)(lVar27 + (long)(int)uVar35 * unaff_x24 + 0x20) == 0xad) {
              bStack0000000000000074 = 1;
              in_stack_000017c8 = uVar22;
              goto LAB_03550bd0;
            }
            if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
              fVar50 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar64 <= fVar50) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              {
                fVar50 = *(float *)((long)unaff_x19 + 0x1e4);
                uVar20 = (ulong)(uint)fVar50;
                fVar64 = *(float *)(unaff_x19 + 0x4a);
                if ((fVar50 <= fVar64) ||
                   ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) goto LAB_03552d44;
LAB_03557594:
                fVar60 = (fVar50 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                if (fVar60 <= DAT_00d38b84) {
                  fVar60 = DAT_00d38b84;
                }
                *(float *)((long)unaff_x19 + 0x23c) = fVar50;
                fVar50 = fVar50 - fVar60;
                goto LAB_03557524;
              }
LAB_03557558:
              fVar60 = fVar47;
              if (0.0 < fVar50) {
                fVar60 = fVar47 / (1.0 - fVar50);
              }
              fVar50 = fVar50 + (fVar47 - fVar53 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) /
                                fVar60;
LAB_035574e8:
              if (fVar64 <= fVar50) {
                fVar50 = fVar64;
              }
              *(float *)((long)unaff_x19 + 0x2d4) = fVar50;
              return;
            }
LAB_03552d44:
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar7;
            }
            iVar12 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
            if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
               (((bStack0000000000000070 ^ 1) & 1) == 0)) {
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017a8 = FUN_0358c15c();
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0)) goto LAB_035574b8;
              uVar35 = *unaff_x20 - 1;
              if (*(uint *)(lVar27 + 0x18) <= uVar35) goto LAB_035575f4;
              iStack0000000000000034 = iVar12;
              if (*(short *)(lVar27 + (long)(int)uVar35 * (long)iVar16 + 0x20) == 0xad) {
                bStack0000000000000074 = 0;
                *unaff_x20 = uVar35;
                in_stack_000017a8 = in_stack_000017a8 - 1;
                in_stack_000017c8 = CONCAT44(0x2d,uVar35);
                goto LAB_03550bd0;
              }
            }
            if (fVar66 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
              uVar20 = uVar54;
              FUN_0358cbd4(fStack0000000000000058,uVar54,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar60,
                           in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            }
            else {
              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
              }
              fVar64 = fStack00000000000000c4;
              if ((char)unaff_x19[0x47] != '\0') {
                fVar64 = *(float *)(unaff_x19 + 0x59);
                if ((fVar64 < *(float *)((long)unaff_x19 + 700)) &&
                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                  fVar60 = *(float *)((long)unaff_x19 + 700) +
                           ((in_stack_00000018._4_4_ - fVar66) / (float)((int)unaff_x19[0x95] + 1))
                           / fStack0000000000000058;
                  if (fVar60 <= fVar64) {
                    fVar60 = fVar64;
                  }
LAB_03554b48:
                  *(float *)((long)unaff_x19 + 700) = fVar60;
                  return;
                }
                fVar50 = *(float *)((long)unaff_x19 + 0x2d4);
                fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                if ((fVar50 < fVar64) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                goto LAB_03557558;
                fVar50 = *(float *)((long)unaff_x19 + 0x1e4);
                uVar20 = (ulong)(uint)fVar50;
                fVar64 = *(float *)(unaff_x19 + 0x4a);
                if ((fVar64 < fVar50) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                goto LAB_03557594;
              }
              switch((int)unaff_x19[0x5c]) {
              case 0:
              case 2:
              case 4:
                goto switchD_03552ef4_caseD_0;
              case 1:
                lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                lVar36 = *(long *)(lVar27 + 0xb8);
                lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                  lVar27 = FUN_01a46ff8(lVar27);
                }
                piVar23 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                    *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8
                                                                       ) + 0x80) + 0xa0);
                if (*piVar23 == 0) {
                  bStack0000000000000074 = 0;
                  goto LAB_03554580;
                }
                lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                memcpy(&stack0x00001008,&stack0x000008a0,0x378);
                iVar12 = FUN_0358c15c();
                bStack0000000000000074 = 0;
                goto LAB_035529e8;
              case 3:
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                in_stack_000017a8 = FUN_0358c15c();
                bStack0000000000000074 = 0;
                goto UnityEngine_AnimationClip__get_hasMotionCurves;
              case 5:
                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                uVar20 = uVar54;
                FUN_0358cbd4(fStack0000000000000058,uVar54,fStack00000000000000d4,
                             *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar60,
                             in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                break;
              case 6:
                lVar27 = unaff_x19[0x5d];
                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar21 = FUN_036cee6c(lVar27,0,0);
                if ((uVar21 & 1) != 0) {
                  plVar44 = (long *)unaff_x19[0x5d];
                  uVar22 = (**(code **)(*unaff_x19 + 0x518))();
                  if (plVar44 == (long *)0x0) goto LAB_035574b8;
                  (**(code **)(*plVar44 + 0x528))(plVar44,uVar22,*(undefined8 *)(*plVar44 + 0x530));
                  lVar27 = unaff_x19[0x5d];
                  if (lVar27 == 0) goto LAB_035574b8;
                  *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                  FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                  plVar44 = (long *)unaff_x19[0x5d];
                  if (plVar44 == (long *)0x0) goto LAB_035574b8;
                  (**(code **)(*plVar44 + 0x7a8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                }
                bStack0000000000000074 = 0;
                goto LAB_03552b00;
              default:
                bStack0000000000000074 = 0;
                goto LAB_03552f54;
              }
            }
            bStack0000000000000070 = 1;
            bStack0000000000000074 = 0;
            in_stack_00000068._4_4_ = 1;
            in_stack_000017c8 = uVar22;
            goto LAB_03550bd0;
          }
          goto LAB_035574b8;
        }
        if (((char)unaff_x19[0x47] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if (fVar50 < fVar64) {
            fVar60 = fVar47 / (1.0 - fVar50);
            if (fVar50 <= 0.0) {
              fVar60 = fVar47;
            }
            fVar50 = fVar50 + (fVar47 - fVar53 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar60;
            goto LAB_035574e8;
          }
          fVar50 = *(float *)((long)unaff_x19 + 0x1e4);
          fVar64 = *(float *)(unaff_x19 + 0x4a);
          if (fVar64 < fVar50) {
            fVar60 = (fVar50 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar60 <= DAT_00d38b84) {
              fVar60 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar50;
            fVar50 = fVar50 - fVar60;
LAB_03557524:
            fVar53 = fVar50 * 20.0 + 0.5;
            fVar60 = DAT_00d38e60;
            if (fVar53 != INFINITY) {
              fVar60 = (float)(int)fVar53 / 20.0;
            }
            if (fVar60 <= fVar64) {
              fVar60 = fVar64;
            }
LAB_03554658:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar60;
            return;
          }
        }
        iVar12 = (int)unaff_x19[0x5c];
        if (iVar12 == 1) {
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          lVar36 = *(long *)(lVar27 + 0xb8);
          lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = FUN_01a46ff8(lVar27);
          }
          piVar23 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*piVar23 == 0) goto LAB_03554580;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
          goto LAB_035529dc;
        }
        if (iVar12 == 6) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          lVar27 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar21 = FUN_036cee6c(lVar27,0,0);
          if ((uVar21 & 1) != 0) {
            plVar44 = (long *)unaff_x19[0x5d];
            uVar22 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar44 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar44 + 0x528))(plVar44,uVar22,*(undefined8 *)(*plVar44 + 0x530));
            lVar27 = unaff_x19[0x5d];
            if (lVar27 == 0) goto LAB_035574b8;
            *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar44 = (long *)unaff_x19[0x5d];
            if (plVar44 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar44 + 0x7a8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
LAB_03552b00:
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
          goto LAB_03550bd0;
        }
        if (iVar12 == 3) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          goto LAB_03552550;
        }
      }
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(undefined1 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
      }
      else {
        if (in_stack_000017dc == 9) {
          lVar27 = *in_stack_00000170;
          if ((lVar27 != 0) && (lVar36 = *(long *)(lVar27 + 0x38), lVar36 != 0)) {
            uVar13 = *unaff_x20;
            if (uVar13 < *(uint *)(lVar36 + 0x18)) {
              *(undefined1 *)(lVar36 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
              lVar36 = *(long *)(lVar27 + 0x50);
              if (lVar36 != 0) {
                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar36 + 0x18)) {
                  lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                  *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
                  goto LAB_03552fcc;
                }
                goto LAB_035575f4;
              }
              goto LAB_035574b8;
            }
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar64,fVar49);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar13 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar13;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        in_stack_00000068._4_4_ = 0;
        *(float *)(lVar27 + 0x60) = fVar45;
        *(float *)(lVar27 + 100) = fVar46;
      }
    }
    else {
      if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
        fVar45 = (float)uVar20;
        fVar53 = 0.0;
        if ((0.0 < fVar45) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar53 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        uVar20 = (ulong)(uint)fStack00000000000000c4;
        if (fStack00000000000000c4 <
            (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar45)) + fVar53
           ) {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
          }
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          lVar27 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar21 = FUN_036cee6c(lVar27,0,0);
          if ((uVar21 & 1) != 0) {
            plVar44 = (long *)unaff_x19[0x5d];
            uVar22 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar44 != (long *)0x0) {
              (**(code **)(*plVar44 + 0x528))(plVar44,uVar22,*(undefined8 *)(*plVar44 + 0x530));
              lVar27 = unaff_x19[0x5d];
              if (lVar27 != 0) {
                *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar44 = (long *)unaff_x19[0x5d];
                if (plVar44 != (long *)0x0) {
                  (**(code **)(*plVar44 + 0x7a8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                  goto UnityEngine_AnimationClip__get_hasMotionCurves;
                }
              }
            }
            goto LAB_035574b8;
          }
          goto UnityEngine_AnimationClip__get_hasMotionCurves;
        }
      }
      if ((((in_stack_000017dc - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_000017dc - 10 < 2)) || (in_stack_000017dc == 0xa0)) {
LAB_03552b54:
        if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
           (in_stack_000017dc != 0x2060)) {
          lVar27 = *in_stack_00000170;
          if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x50), lVar36 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
          lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
          *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(in_stack_000017dc,0);
        if ((uVar21 & 1) != 0) goto LAB_03552b54;
      }
      if (in_stack_000017dc == 0xa0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
      }
    }
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar53 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar46 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar27 = unaff_x19[0xca];
      fVar45 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar45 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
      fVar64 = *(float *)((long)unaff_x19 + 0x404);
      fVar50 = *(float *)(lVar27 + 0x2c);
      fVar47 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
      fVar49 = *_fStack00000000000000a8;
      fVar47 = fVar64 * (fVar53 / (float)iVar12) * fVar46 * fVar45 * fVar50 * fVar47;
      fVar53 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar45 = *(float *)(lVar27 + (long)(int)uVar13 * (long)iVar16 + 0x60);
        iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar64 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar27 = unaff_x19[0xca];
        fVar46 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar46 = 1.0;
        }
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
        fVar50 = *(float *)((long)unaff_x19 + 0x404);
        fVar66 = *(float *)(lVar27 + 0x2c);
        fVar47 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar49 = *(float *)(lVar27 + 0x60);
        fVar53 = *(float *)(lVar27 + 100);
        fVar47 = fVar50 * (fVar45 / (float)iVar12) * fVar64 * fVar46 * fVar66 * fVar47;
      }
      fVar64 = *(float *)(unaff_x19 + 0x9b);
      fVar45 = 0.0;
      fVar46 = 0.0;
      if ((0.0 < fVar64) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar66 = *(float *)(unaff_x19 + 0x97);
      fVar67 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar50 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar27,0);
        fVar45 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar61 = *(float *)(unaff_x19 + 0x6c);
      fVar53 = (fStack000000000000009c - fVar49) - fVar53;
      bVar9 = true;
      if ((fVar61 <= fVar53) && (bVar9 = false, !NAN(fVar61))) {
        bVar9 = fVar61 == -1.0;
      }
      if (!bVar9) {
        fVar53 = fVar61;
      }
      fVar49 = 1.0;
      if ((uVar33 & 0x18) != 0) {
        fVar49 = DAT_00d38acc;
      }
      if (((fVar66 - (fVar67 - fVar64)) + fVar46 < fStack00000000000000c4) &&
         (ABS(fVar50) + fVar47 * fVar45 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar49 * fVar53)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar27 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar27 + 0x788),0x378);
        FUN_0209b210(lVar27 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar36 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar13 = *(uint *)(unaff_x19 + 0x95);
    lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar36 + 100) = uVar13;
    *(int *)(lVar36 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
      *(int *)(lVar27 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
      if (*(int *)(lVar27 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar53 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = *(float *)(unaff_x19 + 200);
      fVar45 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar53 = fVar48 * fVar53 * fVar45;
      fVar45 = fVar53 * (float)(int)(fVar46 / fVar53);
      uVar20 = (ulong)(uint)fVar45;
      if (fVar45 <= fVar46) {
        fVar45 = fVar46 + fVar53;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar45;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar46 = 1.0;
        }
        else {
          fVar46 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar45 = *(float *)(unaff_x19 + 200);
        fVar47 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar53 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar45 = fVar45 + fVar53 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar48 * (fStack000000000000012c + fVar46 * fVar47) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     fVar60 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar45;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar48 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + fVar60 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar20 = (ulong)(uint)fVar45;
      fVar45 = *(float *)(unaff_x19 + 200) - fVar45;
      *(float *)(unaff_x19 + 200) = fVar45;
      if ((in_stack_000017dc == 0x200b) || (uVar11 != 0)) {
        fVar53 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar20 = (ulong)(uint)fVar53;
        fVar45 = fVar45 - fVar53;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar53 = *(float *)(unaff_x19 + 200);
      fVar45 = fVar53 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar62) +
                        fStack00000000000000d4 * (fVar60 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar45;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar20 = (ulong)(uint)fVar53, uVar11 != 0)) {
        fVar53 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar20 = (ulong)(uint)fVar53;
        fVar45 = fVar45 + fVar53;
        goto LAB_03553678;
      }
    }
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0)) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    uVar33 = (uint)*(undefined8 *)(lVar36 + 0x18);
    if (uVar33 <= uVar13) goto LAB_035575f4;
    *(float *)(lVar36 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar45;
    uVar35 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar13 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar20 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar13 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar53 = *(float *)(unaff_x19 + 0x99);
        fVar45 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar53 = fVar53 - fVar45;
        if (((fStack000000000000005c < ABS(fVar53)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar53);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar53;
          *(float *)(unaff_x19 + 0x9b) = fVar53 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          lVar36 = *(long *)(lVar27 + 0xb8);
          if (*(int *)(lVar36 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar36 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar36 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar27 + 0xb8) + 0x818,0);
            lVar27 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar27 + 0x7bc) = fVar53 + *(float *)(lVar27 + 0x7bc);
            *(float *)(lVar27 + 0x800) = fVar53 + *(float *)(lVar27 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar27 + 0x788),0x378);
            FUN_0209b210(lVar27 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar46 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc) - fVar46;
      fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar45 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar53 = fVar45;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar53;
      fVar47 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar53;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x50), lVar36 == 0)) goto LAB_035574b8;
      uVar13 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar30 = unaff_x19[0x93];
      lVar19 = lVar36 + (long)(int)uVar13 * 0x5c;
      *(int *)(lVar19 + 0x34) = (int)lVar30;
      uVar33 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar30 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar33 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar33;
      *(uint *)(lVar19 + 0x38) = uVar33;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar19 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar12 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar33 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
      *(int *)(lVar19 + 0x40) = iVar12;
      *(int *)(lVar19 + 0x24) = (*(int *)(lVar19 + 0x3c) - *(int *)(lVar19 + 0x34)) + 1;
      *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar33) goto LAB_035575f4;
      uVar65 = *(undefined4 *)(lVar27 + (long)(int)uVar33 * (long)iVar16 + 0x11c);
      lVar36 = lVar36 + (long)(int)uVar13 * 0x5c;
      *(float *)(lVar36 + 0x70) = fVar45;
      *(undefined4 *)(lVar36 + 0x6c) = uVar65;
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x50), lVar36 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar47 = fVar47 - fVar46;
      uVar20 = (ulong)(uint)fVar47;
      lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar36 + 0x74) =
           *(undefined4 *)
            (lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar36 + 0x78) = fVar47;
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
      lVar19 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar36 = lVar30 + lVar19 * 0x5c;
      *(float *)(lVar36 + 0x44) = *(float *)(lVar36 + 0x74) - fVar48 * fStack000000000000015c;
      *(float *)(lVar36 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar36 + 0x24) == 1) {
        *(int *)(lVar30 + lVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      lVar43 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar33 = (uint)*(undefined8 *)(lVar36 + 0x18);
      if (uVar33 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar36 + lVar43 * unaff_x24 + 0x194) == '\0') &&
         (lVar43 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar33 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar30 = lVar30 + lVar19 * 0x5c;
      fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + fVar60 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar60 = -fVar53;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar60 = fVar53;
      }
      *(float *)(lVar30 + 0x58) = *(float *)(lVar36 + lVar43 * unaff_x24 + 0x144) + fVar60;
      *(float *)(lVar30 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar30 + 0x54) = fVar45;
      *(float *)(lVar30 + 0x48) = in_stack_00000060 + (fVar47 - fVar45);
      *(float *)(lVar30 + 0x4c) = fVar47;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar27 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar12 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar12;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar27 != 0) && (*(long *)(lVar27 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar12) {
              FUN_0358ca18();
              lVar27 = unaff_x19[0x6d];
              if (lVar27 == 0) goto LAB_035574b8;
            }
            lVar27 = *(long *)(lVar27 + 0x38);
            if (lVar27 != 0) {
              if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
                fVar60 = *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar53 = 0.0, in_stack_000017dc == 10)) {
                    fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar25 = 0;
                  fVar53 = fVar60 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar53) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar53 = 0.0, in_stack_000017dc == 10)) {
                    fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar25 = 1;
                  fVar53 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar53);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar53;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar27 = *(long *)puVar7;
                }
                uVar18 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar60;
                uVar20 = NEON_rev64(uVar18,4);
                unaff_x19[0x99] = uVar20;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068._4_4_ = 1;
                bStack0000000000000070 = 1;
                in_stack_000017c8 = uVar22;
                goto LAB_03550bd0;
              }
              goto LAB_035575f4;
            }
          }
          goto LAB_035574b8;
        }
        if (in_stack_000017dc == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
          in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar35 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar13 = *unaff_x20;
    if (uVar33 <= uVar13) goto LAB_035575f4;
    if (*(char *)(lVar36 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
      lVar36 = lVar36 + (long)(int)uVar13 * unaff_x24;
      uVar20 = *(ulong *)(lVar36 + 0x11c);
      uVar21 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar21 ^ (uVar21 ^ uVar20) &
                    ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar20 >> 0x20)),
                              -(uint)((float)uVar21 < (float)uVar20));
      uVar21 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar20 = *(ulong *)(lVar36 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar21 ^ (uVar21 ^ uVar20) &
                    ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar21 >> 0x20)),
                              -(uint)((float)uVar20 < (float)uVar21));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar35 || ((1 << (ulong)(uVar35 & 0x1f) & 0x2c00U) == 0)))) {
      lVar36 = *(long *)(lVar27 + 0x58);
      if (lVar36 == 0) goto LAB_035574b8;
      iVar12 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar36 + 0x18) < iVar12) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar27 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar27 = *in_stack_00000170;
        if (lVar27 == 0) goto LAB_035574b8;
      }
      lVar36 = *(long *)(lVar27 + 0x58);
      if (lVar36 == 0) goto LAB_035574b8;
      uVar33 = *(uint *)(unaff_x19 + 0x96);
      lVar30 = (long)(int)uVar33;
      uVar13 = *(uint *)(lVar36 + 0x18);
      if (uVar13 <= uVar33) goto LAB_035575f4;
      lVar19 = lVar36 + lVar30 * 0x14;
      fVar53 = *(float *)(lVar19 + 0x30);
      uVar20 = (ulong)(uint)fVar53;
      *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar53 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar60 = fVar53;
      }
      *(float *)(lVar19 + 0x30) = fVar60;
      uVar35 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar35 == 0 && uVar33 == 0) {
        *(uint *)(lVar36 + (ulong)uVar33 * 0x14 + 0x20) = uVar35;
      }
      else {
        uVar5 = uVar35 - 1;
        if (0 < (int)uVar35) {
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_035575f4;
          if (uVar33 != *(uint *)(lVar27 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar33 - 1 < uVar13) {
              *(uint *)(lVar36 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar36 + 0x20 + lVar30 * 0x14) = uVar35;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar35 == in_stack_00000088._4_4_) {
          *(float *)(lVar36 + lVar30 * 0x14 + 0x24) = in_stack_00000088._4_4_;
        }
      }
    }
LAB_03553d10:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
    if ((uVar11 == 0) &&
       (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
        if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
             (0x1d < in_stack_000017dc - 0xa961)) || (uVar21 = FUN_03597a54(0), (uVar21 & 1) != 0))
           && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
        goto LAB_03553f78;
        lVar27 = FUN_035978e8(0);
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_035574b8;
        uVar13 = FUN_0219c130(*(long *)(lVar27 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar13 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if (uVar17 != uVar55 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
          if (uVar11 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar27 = FUN_035978e8(0);
        if (((lVar27 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar36 = *(long *)(*in_stack_00000170 + 0x38), lVar36 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar36 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar27 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar36 + (long)(int)(*unaff_x20 + 1) * (long)iVar16 + 0x20);
        uVar21 = FUN_0219c130(*(long *)(lVar27 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar13 & 1) != 0) goto LAB_035541dc;
        if ((uVar21 & 1) == 0) goto LAB_03554270;
        if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
        if (uVar11 != 0) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
      }
      else {
        if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
        if ((bStack0000000000000074 & 1) == 0 && in_stack_000017dc == 0xad)
        goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
      }
      bStack0000000000000070 = 1;
    }
    else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
      if ((bStack0000000000000070 & 1) != 0) {
        if (uVar11 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_0355422c;
      }
LAB_035542a8:
      bStack0000000000000070 = 0;
    }
    else {
      if (((in_stack_000017dc - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_000017dc == 0xa0 || (in_stack_000017dc == 0x2060)))) goto LAB_03553ef0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      bStack0000000000000070 = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_035542ac:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    in_stack_000017c8 = uVar22;
LAB_03550bd0:
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar27 = unaff_x19[0x8f];
    if (lVar27 != 0) {
      if ((int)in_stack_000017a8 < (int)*(uint *)(lVar27 + 0x18)) {
        if (*(uint *)(lVar27 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
        uVar11 = *(uint *)(lVar27 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
        if (uVar11 == 0) goto LAB_0355459c;
        if (5 < in_stack_00000168._4_4_) {
          uVar22 = FUN_0276793c(&stack0x000017dc,0);
          uVar18 = FUN_0276793c(&stack0x000017a8,0);
          uVar22 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar22,
                                *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar18,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367ae18(uVar22,0);
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
        }
        if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (uVar11 == 0x3c)) goto code_r0x0355094c;
        if ((*in_stack_00000170 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar27 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + 0x58);
            unaff_x19[0x20] = *(long *)(lVar27 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            goto LAB_035509d4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_0355459c:
      fVar60 = (float)uVar20;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar60 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar53 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar60 < fVar53) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar45 = (*(float *)((long)unaff_x19 + 0x23c) - fVar60) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar60;
          fVar45 = (fVar60 + fVar45) * 20.0 + 0.5;
          fVar60 = DAT_00d38e60;
          if (fVar45 != INFINITY) {
            fVar60 = (float)(int)fVar45 / 20.0;
          }
          if (fVar53 <= fVar60) {
            fVar60 = fVar53;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar7 = PTR_DAT_03cbdf88;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar22 = FUN_0276793c(_fStack0000000000000038,0);
        uVar18 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar22 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar22,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar18,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar22,0);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017dc == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar8;
      }
      plVar44 = (long *)OVRPlugin_Media_TypeInfo;
      lVar27 = **(long **)(lVar27 + 0xb8);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar16 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar27 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar12 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar27 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)uStack00000000000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar12 < 0x401) {
        if (iVar12 == 0x100) {
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_035575f4;
          uVar22 = *(undefined8 *)(lVar27 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar36 = *(long *)(*in_stack_00000170 + 0x58), lVar36 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar60 = *(float *)(lVar36 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar60 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x2c);
          fVar60 = (0.0 - fVar60) - fStack0000000000000020;
        }
        else if (iVar12 == 0x200) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          uVar22 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar27 + 0x24) +
                            (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar27 = *(long *)(*in_stack_00000170 + 0x58), lVar27 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar27 = lVar27 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar60 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) +
                      *(float *)(lVar27 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar60 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar12 != 0x400) goto LAB_03554c4c;
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
          uVar22 = *(undefined8 *)(lVar27 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar36 = *(long *)(*in_stack_00000170 + 0x58), lVar36 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar36 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x20);
          fVar60 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar22 >> 0x20) + 0.0,(float)uVar22 + fVar60);
      }
      else if (iVar12 == 0x800) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
        fVar60 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar60;
      }
      else {
        if (iVar12 == 0x1000) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
            uVar22 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
            fVar60 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar12 == 0x2000) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
          fVar60 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar27 + 0x24) +
                                (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + fVar60);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar22 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar7);
      }
      uVar21 = FUN_036d35a8(uVar22,0,0);
      lVar27 = FUN_0357f060();
      if (lVar27 == 0) goto LAB_035574b8;
      FUN_036df824(lVar27,0);
      *(float *)(unaff_x19 + 0xe2) = fVar60;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar12 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar53 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar65 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar7 = OVRPlugin_Mesh_TypeInfo;
      lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar7;
      }
      puVar28 = *(undefined4 **)(lVar27 + 0xb8);
      uVar54 = (ulong)(uint)puVar28[1];
      uVar20 = (ulong)(uint)puVar28[2];
      uVar56 = (ulong)(uint)puVar28[3];
      FUN_035683a4(*puVar28,uVar54,uVar20,uVar56,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar27 = *in_stack_00000170;
      if (lVar27 == 0) goto LAB_035574b8;
      uVar11 = *unaff_x20;
      if ((int)uVar11 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar16 = 0;
        goto LAB_03556f00;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      fVar60 = ABS(fVar60);
      fVar45 = 1.0;
      if ((uVar21 & 1) == 0) {
        fVar45 = fVar60;
      }
      if (lVar27 == 0) goto LAB_035574b8;
      bVar10 = false;
      bVar6 = false;
      _iStack0000000000000128 = 0;
      bVar9 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      in_stack_00000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar36 = 0x2e0;
      fVar47 = 0.0;
      fVar46 = 0.0;
      fStack00000000000000c8 = fStack00000000000000d8;
      fStack0000000000000104 =
           *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
      fStack00000000000000d0 = fStack00000000000000dc;
      _bStack0000000000000070 = fStack00000000000000dc;
      fStack000000000000009c = fStack00000000000000dc;
      fStack00000000000000a0 = fStack00000000000000d8;
      fStack0000000000000100 = 0.0;
      in_stack_00000088._4_4_ = 0.0;
      fStack0000000000000040 = 0.0;
      fStack00000000000000a8 = 0.0;
      fStack0000000000000038 = 0.0;
      _bStack0000000000000074 = uStack00000000000000c0;
      fStack0000000000000078 = fStack00000000000000d8;
      fStack0000000000000098 = (float)uStack00000000000000c0;
      uVar17 = 1;
      uVar55 = 0;
      goto LAB_03554e78;
    }
    goto LAB_035574b8;
  }
  goto LAB_035575f4;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar21 = FUN_03586568();
  if (((uVar21 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, in_stack_000017dc = uVar11,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar17 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
  lVar30 = (long)(int)uVar17;
  unaff_w26 = (uint)*(byte *)(lVar27 + lVar30 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar36 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar17) {
    uVar11 = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (uVar11 == 0x2026) {
      *(long *)(lVar27 + lVar30 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar17 = *unaff_x20;
      if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar27 + (long)(int)uVar17 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar17 + 1);
    }
    else if (uVar11 == 3) {
      if ((*unaff_x21 == 0) || (lVar19 = FUN_03568ac0(*unaff_x21,0), lVar19 == 0))
      goto LAB_035574b8;
      FUN_0219b634(lVar19,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
      *(ulong *)(lVar27 + lVar30 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar17 = *(uint *)((long)unaff_x19 + 0x494);
      unaff_w23 = 1;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      unaff_w23 = 1;
    }
  }
  else {
    unaff_w23 = 0;
  }
  in_stack_000017dc = uVar11;
  if (((int)uVar17 < *(int *)((long)unaff_x19 + 0x324)) && (uVar11 != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)uVar17 * (long)iVar16;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *unaff_x20 = uVar17 + 1;
    goto LAB_03550bd0;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 != 0) {
    in_stack_00000158 = 1.0;
    goto joined_r0x03550fe8;
  }
  uVar17 = *(uint *)((long)unaff_x19 + 0x25c);
  if ((uVar17 >> 4 & 1) == 0) {
    if ((uVar17 >> 3 & 1) == 0) {
      in_stack_00000158 = 1.0;
      if ((uVar17 >> 5 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b812c(uVar11,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8410(uVar11,0);
          uVar11 = uVar11 & 0xffff;
          in_stack_00000158 = fStack0000000000000028;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b8070(uVar11,0);
      in_stack_00000158 = 1.0;
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8594(uVar11,0);
        goto LAB_03550fdc;
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b812c(uVar11,0);
    in_stack_00000158 = 1.0;
    if ((uVar21 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b8410(uVar11,0);
LAB_03550fdc:
      in_stack_00000158 = 1.0;
      uVar11 = uVar11 & 0xffff;
    }
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  in_stack_000017dc = uVar11;
joined_r0x03550fe8:
  unaff_x28 = in_stack_00000170;
  if (iVar12 == 0) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    if (*in_stack_000000e0 != 0) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *unaff_x21 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) ||
         (param_1 = *(long *)(*in_stack_00000170 + 0x38), param_1 == 0)) goto LAB_035574b8;
      in_x9 = (long)(int)*unaff_x20;
      if (*unaff_x20 < *(uint *)(param_1 + 0x18)) goto code_r0x03551080;
      goto LAB_035575f4;
    }
    goto LAB_03550bd0;
  }
  if (iVar12 == 1) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000b8 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
         *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
    if ((unaff_x19[0xd3] == 0) ||
       (lVar27 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar27 == 0))
    goto LAB_035574b8;
    FUN_02215a88(lVar27,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar27 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
    if (lVar27 != 0) {
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar30 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar30 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar60 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar45 = (float)FUN_03776960(&stack0x00001720,0);
      fVar53 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar53 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar53 = (fVar60 / (float)iVar12) * fVar45 * fVar53;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar60 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar47 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar47 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar48 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar27 + 0x20),0);
        fVar62 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        fVar49 = *(float *)(lVar27 + 0x2c);
        fVar64 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar66 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar67 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar50 = fVar53 * fVar66 * fVar67 * fVar50;
        fVar47 = (fVar60 / (float)iVar12) * fVar45 * fVar47;
        fVar53 = fVar47 * (fVar48 / fVar62) * fVar49 * fVar64;
        fVar47 = fVar47 / fVar53;
        fVar46 = fVar47 * fVar46;
        fVar60 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar47 = fVar47 * fVar60;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        fVar48 = *(float *)(lVar27 + 0x2c);
        fVar47 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar47 = 1.0;
        }
        fVar62 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar64 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar49 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar50 = fVar53 * fVar64 * fVar49 * fVar50;
        fVar53 = (fVar60 / (float)iVar12) * fVar45 * fVar47 * fVar48 * fVar62;
        fVar47 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      uVar21 = (ulong)(uint)fVar53;
      *in_stack_000000e0 = lVar27;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar27);
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 1;
      *(float *)(lVar27 + 0x160) = fVar53;
      *(long *)(lVar27 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar36;
      goto LAB_035514b0;
    }
    goto LAB_03550bd0;
  }
  lVar27 = *in_stack_00000170;
  fVar50 = 0.0;
  uVar20 = 0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    uVar20 = uVar54;
  }
  if (lVar27 == 0) goto LAB_035574b8;
  fVar46 = 0.0;
  fVar47 = 0.0;
  uVar21 = uVar54;
  uVar54 = uVar20;
  uVar22 = in_stack_000017c8;
  goto LAB_035514cc;
LAB_03554e78:
  uVar11 = uVar17 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x50), lVar30 == 0))
  goto LAB_035574b8;
  lVar43 = (long)(int)uVar11;
  lVar19 = lVar27 + lVar43 * 0x178;
  uVar13 = *(uint *)(lVar19 + 100);
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar41 = (long)(int)uVar13;
  lVar30 = lVar30 + lVar41 * 0x5c;
  lVar37 = *(long *)(lVar19 + 0x38);
  uVar3 = *(ushort *)(lVar19 + 0x20);
  uVar35 = *(uint *)(lVar30 + 0x3c);
  uVar33 = *(uint *)(lVar30 + 0x68);
  iVar2 = *(int *)(lVar30 + 0x20);
  iVar14 = *(int *)(lVar30 + 0x28);
  iVar15 = *(int *)(lVar30 + 0x2c);
  uVar5 = *(uint *)(lVar30 + 0x40);
  lVar19 = (long)(int)uVar5;
  fVar64 = *(float *)(lVar30 + 0x4c);
  fVar50 = *(float *)(lVar30 + 0x54);
  fVar48 = *(float *)(lVar30 + 0x58);
  fVar61 = *(float *)(lVar30 + 0x5c);
  fVar66 = *(float *)(lVar30 + 0x60);
  fVar67 = *(float *)(lVar30 + 0x6c);
  fVar58 = *(float *)(lVar30 + 0x70);
  fVar62 = *(float *)(lVar30 + 0x74);
  fVar49 = *(float *)(lVar30 + 0x78);
  uVar40 = (uint)uVar3;
  if ((int)uVar33 < 9) {
    switch(uVar33) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar66 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar48;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar66 + fVar61 * 0.5) - fVar48 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar61 + fVar66) - fVar48;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar61 + fVar66;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar33 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
        if (*(uint *)(lVar27 + 0x18) <= uVar35) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar35 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b8cc4(uVar4,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar13 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar48 <= fVar61) && (!bVar1 && uVar33 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar66;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar61 + fVar66;
          }
          goto LAB_03555088;
        }
        if (((uVar17 == 1) || (uVar13 != uVar55)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar66;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar61 + fVar66;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fStack0000000000000028 = (float)FUN_026b97f8(uVar40,0);
          uStack00000000000000e8 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1e];
          fVar66 = -fVar48;
          if (cVar26 != '\0') {
            fVar66 = fVar48;
          }
          if (*(uint *)(lVar27 + 0x18) <= uVar35) goto LAB_035575f4;
          iVar15 = (int)*(char *)(lVar27 + (long)(int)uVar35 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar15 + -1;
          if (iVar15 < 1) {
            fVar48 = 1.0;
            iVar15 = 1;
          }
          else {
            fVar48 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar40 == 9) {
LAB_03556e74:
            fVar48 = 1.0 - fVar48;
          }
          else {
            if (uVar40 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar21 = FUN_026b97f8(uVar40,0);
              cVar26 = (char)unaff_x19[0x1e];
              if ((uVar21 & 1) != 0) goto LAB_03556e74;
            }
            iVar15 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar14;
          }
          fVar48 = ((fVar61 + fVar66) * fVar48) / (float)iVar15;
          if (cVar26 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar48;
            uStack00000000000000e8 =
                 CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                          (float)uStack00000000000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar48;
          }
        }
      }
    }
    else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar33 == 0x20) {
    fVar48 = fVar67 + fVar62;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar33 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar33 <= uVar11) goto LAB_035575f4;
  lVar30 = lVar27 + lVar43 * 0x178;
  fVar61 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar48 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar66 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar30 + 0x194) == '\0') goto LAB_03555938;
  iVar14 = *(int *)(lVar27 + lVar43 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0355574c;
  fVar47 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar13,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar29 = lVar27 + lVar43 * 0x178;
    *(undefined4 *)(lVar29 + 0x84) = 0;
    *(undefined4 *)(lVar29 + 0xac) = 0;
    *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
    fVar47 = 1.0;
    break;
  case 1:
    fVar49 = *(float *)(lVar27 + lVar43 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar29 = lVar27 + lVar43 * 0x178;
      fVar62 = (in_stack_000000f8._4_4_ + fVar49) - *(float *)(in_stack_00000080 + 0x230);
      fVar49 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar29 = lVar27 + lVar43 * 0x178;
    fVar62 = fVar62 - fVar67;
    *(float *)(lVar29 + 0x84) = fVar47 + (fVar49 - fVar67) / fVar62;
    *(float *)(lVar29 + 0xac) = fVar47 + (*(float *)(lVar29 + 0x98) - fVar67) / fVar62;
    *(float *)(lVar29 + 0xd4) = fVar47 + (*(float *)(lVar29 + 0xc0) - fVar67) / fVar62;
    fVar47 = fVar47 + (*(float *)(lVar29 + 0xe8) - fVar67) / fVar62;
    break;
  case 2:
    lVar29 = lVar27 + lVar43 * 0x178;
    fVar49 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar62 = (in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar29 + 0x84) = fVar47 + fVar62 / fVar49;
    *(float *)(lVar29 + 0xac) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar29 + 0xd4) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar47 = fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar29 = lVar27 + lVar43 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0;
      *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar29 = lVar27 + lVar43 * 0x178;
      fVar49 = fVar49 - fVar58;
      fVar62 = fVar47 + (*(float *)(lVar29 + 0x74) - fVar58) / fVar49;
      fVar49 = fVar47 + (*(float *)(lVar29 + 0x9c) - fVar58) / fVar49;
      *(float *)(lVar29 + 0x88) = fVar62;
      *(float *)(lVar29 + 0xb0) = fVar49;
      *(float *)(lVar29 + 0xd8) = fVar62;
      *(float *)(lVar29 + 0x100) = fVar49;
      break;
    case 2:
      lVar29 = lVar27 + lVar43 * 0x178;
      fVar62 = fVar47 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar29 + 0x88) = fVar62;
      fVar49 = *(float *)(unaff_x19 + 0x9c);
      fVar67 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar29 + 0xd8) = fVar62;
      fVar62 = fVar47 + (*(float *)(lVar29 + 0x9c) - fVar49) / (fVar67 - fVar49);
      *(float *)(lVar29 + 0xb0) = fVar62;
      *(float *)(lVar29 + 0x100) = fVar62;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar33 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar43 * 0x178;
    fVar62 = *(float *)(lVar29 + 0x15c);
    fVar49 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar62) * 0.5;
    fVar67 = fVar47 + *(float *)(lVar29 + 0x88) * fVar62 + fVar49;
    fVar47 = fVar47 + fVar49 + *(float *)(lVar29 + 0xb0) * fVar62;
    *(float *)(lVar29 + 0x84) = fVar67;
    *(float *)(lVar29 + 0xac) = fVar67;
    *(float *)(lVar29 + 0xd4) = fVar47;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar27 + lVar43 * 0x178 + 0xfc) = fVar47;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar43 * 0x178;
    *(undefined4 *)(lVar29 + 0x88) = 0;
    *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar33) {
      lVar29 = lVar27 + lVar43 * 0x178;
      fVar64 = fVar64 - fVar50;
      fVar47 = (*(float *)(lVar29 + 0x74) - fVar50) / fVar64;
      fVar64 = (*(float *)(lVar29 + 0x9c) - fVar50) / fVar64;
      *(float *)(lVar29 + 0x88) = fVar47;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar43 * 0x178;
    fVar47 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar29 + 0x88) = fVar47;
    fVar64 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar29 + 0xb0) = fVar64;
    *(float *)(lVar29 + 0xd8) = fVar64;
    *(float *)(lVar29 + 0x100) = fVar47;
    break;
  case 3:
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar29 = lVar27 + lVar43 * 0x178;
    fVar64 = *(float *)(lVar29 + 0x15c);
    fVar62 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar64) * 0.5;
    fVar47 = *(float *)(lVar29 + 0x84) / fVar64 + fVar62;
    fVar62 = fVar62 + *(float *)(lVar29 + 0xd4) / fVar64;
    *(float *)(lVar29 + 0x88) = fVar47;
    *(float *)(lVar29 + 0xb0) = fVar62;
    *(float *)(lVar29 + 0x100) = fVar47;
    *(float *)(lVar29 + 0xd8) = fVar62;
  }
  if (uVar33 <= uVar11) goto LAB_035575f4;
  lVar29 = lVar27 + lVar43 * 0x178;
  fVar47 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar43 * 0x178 + 400) & 1) != 0)) {
    fVar47 = -fVar47;
  }
  fVar62 = fVar60;
  if (((iVar12 == 2) || (fVar62 = fVar45, iVar12 == 1)) || (fVar62 = fVar60 / fVar53, iVar12 == 0))
  {
    fVar47 = fVar62 * fVar47;
  }
  lVar29 = lVar27 + lVar43 * 0x178;
  fVar64 = *(float *)(lVar29 + 0x88);
  fVar49 = *(float *)(lVar29 + 0x84);
  fVar62 = -2.1474836e+09;
  if (fVar49 != INFINITY) {
    fVar62 = (float)(int)fVar49;
  }
  fVar67 = *(float *)(lVar29 + 0xd4);
  fVar58 = *(float *)(lVar29 + 0xd8);
  fVar50 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar50 = (float)(int)fVar64;
  }
  uVar52 = FUN_03591d3c(fVar49 - fVar62,fVar64 - fVar50);
  *(undefined4 *)(lVar29 + 0x84) = uVar52;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar58 = fVar58 - fVar50;
  *(float *)(lVar29 + 0x88) = fVar47;
  uVar52 = FUN_03591d3c(fVar49 - fVar62,fVar58);
  *(undefined4 *)(lVar27 + lVar43 * 0x178 + 0xac) = uVar52;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar67 = fVar67 - fVar62;
  *(float *)(lVar27 + lVar43 * 0x178 + 0xb0) = fVar47;
  fVar62 = (float)FUN_03591d3c(fVar67,fVar58);
  *(float *)(lVar29 + 0xd4) = fVar62;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  *(float *)(lVar29 + 0xd8) = fVar47;
  uVar52 = FUN_03591d3c(fVar67,fVar64 - fVar50);
  *(undefined4 *)(lVar27 + lVar43 * 0x178 + 0xfc) = uVar52;
  uVar33 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar33 <= uVar11) goto LAB_035575f4;
  *(float *)(lVar27 + lVar43 * 0x178 + 0x100) = fVar47;
LAB_0355574c:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar33 <= uVar11) goto LAB_035575f4;
      lVar30 = lVar27 + lVar43 * 0x178;
      *(ulong *)(lVar30 + 0x70) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar30 + 0x70));
      *(float *)(lVar30 + 0x78) = fVar66 + *(float *)(lVar30 + 0x78);
      *(ulong *)(lVar30 + 0x98) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar30 + 0x98));
      *(float *)(lVar30 + 0xa0) = fVar66 + *(float *)(lVar30 + 0xa0);
      *(ulong *)(lVar30 + 0xc0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar30 + 0xc0));
      *(float *)(lVar30 + 200) = fVar66 + *(float *)(lVar30 + 200);
      *(ulong *)(lVar30 + 0xe8) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar30 + 0xe8));
      *(float *)(lVar30 + 0xf0) = fVar66 + *(float *)(lVar30 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar33) {
        if (*(uint *)(lVar27 + lVar43 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar30 = lVar27 + lVar43 * 0x178;
          *(ulong *)(lVar30 + 0x70) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar30 + 0x70));
          *(float *)(lVar30 + 0x78) = fVar66 + *(float *)(lVar30 + 0x78);
          *(ulong *)(lVar30 + 0x98) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar30 + 0x98));
          *(float *)(lVar30 + 0xa0) = fVar66 + *(float *)(lVar30 + 0xa0);
          *(ulong *)(lVar30 + 0xc0) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar30 + 0xc0));
          *(float *)(lVar30 + 200) = fVar66 + *(float *)(lVar30 + 200);
          *(ulong *)(lVar30 + 0xe8) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar30 + 0xe8));
          *(float *)(lVar30 + 0xf0) = fVar66 + *(float *)(lVar30 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar33 <= uVar11) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar33 = *(uint *)(lVar27 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar29 = lVar27 + lVar43 * 0x178;
  *(undefined8 *)(lVar29 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar29 + 0x78) = uVar52;
  if (uVar33 <= uVar11) goto LAB_035575f4;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar29 = lVar27 + lVar43 * 0x178;
  *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 0xa0) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 200) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar29 + 0xf0) = uVar52;
  *(undefined1 *)(lVar30 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar14 == 0) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar32)();
  }
  else if (iVar14 == 1) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  uVar22 = *(undefined8 *)(lVar30 + 0x11c);
  *(undefined8 *)(lVar30 + 0x11c) =
       CONCAT44(fVar48 + (float)((ulong)uVar22 >> 0x20),fVar61 + (float)uVar22);
  *(float *)(lVar30 + 0x124) = fVar66 + *(float *)(lVar30 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  *(ulong *)(lVar30 + 0x110) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x110) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar30 + 0x110));
  *(float *)(lVar30 + 0x118) = fVar66 + *(float *)(lVar30 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  *(ulong *)(lVar30 + 0x128) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x128) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar30 + 0x128));
  *(float *)(lVar30 + 0x130) = fVar66 + *(float *)(lVar30 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  *(float *)(lVar30 + 0x134) = fVar61 + *(float *)(lVar30 + 0x134);
  *(ulong *)(lVar30 + 0x138) =
       CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar30 + 0x138) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar30 + 0x138));
  lVar30 = *in_stack_00000170;
  if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar33 = *(uint *)(lVar29 + 0x18);
  if (uVar33 <= uVar11) goto LAB_035575f4;
  lVar38 = lVar29 + lVar43 * 0x178;
  uVar54 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar38 + 0x140));
  fVar62 = fVar48 + *(float *)(lVar38 + 0x150);
  uVar20 = (ulong)(uint)fVar62;
  uVar56 = CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar38 + 0x148));
  *(float *)(lVar38 + 0x150) = fVar62;
  *(ulong *)(lVar38 + 0x140) = uVar54;
  *(ulong *)(lVar38 + 0x148) = uVar56;
  if (uVar13 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar11 == uVar55) goto LAB_03555b44;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar38 = (long)(int)uVar55;
    lVar39 = lVar30 + lVar38 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar39 + 0x58);
    fVar62 = fVar48 + *(float *)(lVar39 + 0x54);
    uVar54 = (ulong)(uint)fVar62;
    fVar64 = fVar61 + *(float *)(lVar39 + 0x58);
    uVar20 = (ulong)(uint)fVar64;
    *(ulong *)(lVar39 + 0x4c) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar39 + 0x4c));
    *(float *)(lVar39 + 0x54) = fVar62;
    *(float *)(lVar39 + 0x58) = fVar64;
    if (uVar33 <= *(uint *)(lVar39 + 0x34)) goto LAB_035575f4;
    uVar52 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
    lVar30 = lVar30 + lVar38 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar62;
    *(undefined4 *)(lVar30 + 0x6c) = uVar52;
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar29 + lVar38 * 0x5c + 0x40);
    if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar29 = lVar29 + lVar38 * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar11 == uVar55) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar38 = lVar29 + lVar41 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar38 + 0x58);
      uVar54 = CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar38 + 0x4c));
      fVar62 = fVar48 + *(float *)(lVar38 + 0x54);
      fVar61 = fVar61 + *(float *)(lVar38 + 0x58);
      uVar20 = (ulong)(uint)fVar61;
      *(ulong *)(lVar38 + 0x4c) = uVar54;
      *(float *)(lVar38 + 0x54) = fVar62;
      *(float *)(lVar38 + 0x58) = fVar61;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar38 + 0x34)) goto LAB_035575f4;
      uVar52 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
      lVar29 = lVar29 + lVar41 * 0x5c;
      *(float *)(lVar29 + 0x70) = fVar62;
      *(undefined4 *)(lVar29 + 0x6c) = uVar52;
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar29 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar21 = FUN_026b82c4(uVar40,0);
  if (((((uVar21 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
    if (bVar6) {
      if (((uVar17 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*unaff_x20 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar27 + lVar36 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b82c4(uVar4,0);
        if ((uVar21 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar27 + lVar36 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar4,0);
          if ((uVar21 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_0355686c:
        bVar6 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b81f8(uVar40,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b63d8(uVar40,0);
        if (((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar11 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b82c4(uVar40,0);
      iVar14 = iStack0000000000000128;
      if ((uVar21 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar14 = uVar17 - 2;
    }
    lVar30 = *in_stack_00000170;
    if (lVar30 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar30 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar30 + 0x24);
    iVar15 = *(int *)(lVar29 + 0x18);
    if (iVar15 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar30 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
    }
    lVar30 = *(long *)(lVar30 + 0x40);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar30 + 0x20) = unaff_x19;
    *(float *)(lVar30 + 0x28) = in_stack_00000158;
    *(int *)(lVar30 + 0x2c) = iVar14;
    *(int *)(lVar30 + 0x30) = (iVar14 - (int)in_stack_00000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar30 = unaff_x19[0x6d];
    if (lVar30 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar30 + 0x50);
    *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar29 = lVar29 + lVar41 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000158 = (float)uVar11;
    }
    if (uVar11 == *unaff_x20 - 1) {
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar30 + 0x40);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar30 + 0x24);
      iVar14 = *(int *)(lVar29 + 0x18);
      if (iVar14 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar30 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x40);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar30 = lVar30 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      *(float *)(lVar30 + 0x28) = in_stack_00000158;
      *(uint *)(lVar30 + 0x2c) = uVar11;
      *(uint *)(lVar30 + 0x30) = uVar17 - (int)in_stack_00000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar30 = unaff_x19[0x6d];
      if (lVar30 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar55 = *(uint *)(lVar30 + 0x18);
  if (uVar55 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar43 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar55 <= uVar17 - 2) goto LAB_035575f4;
      lVar41 = *unaff_x19;
      uVar55 = *(uint *)(lVar30 + lVar36 + -0x330);
      uVar52 = *(undefined4 *)(lVar30 + lVar36 + -0x2f8);
LAB_035562ec:
      pcVar32 = *(code **)(lVar41 + 0x8d8);
LAB_035562f4:
      uVar56 = (ulong)uVar55;
      uVar54 = (ulong)(uint)_bStack0000000000000070;
      uVar20 = (ulong)_bStack0000000000000074;
      (*pcVar32)(fStack0000000000000078,uVar54,uVar20,uVar56,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar52);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar30 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar46 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar30 = lVar30 + lVar43 * 0x178;
    iVar14 = *(int *)(lVar30 + 0x68);
    *(int *)(lVar30 + 0x16c) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b63d8(uVar40,0);
    if ((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar41 = *(long *)(lVar30 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar41 + 0x18) <= uVar11) goto LAB_035575f4;
      fVar62 = *(float *)(lVar41 + lVar43 * 0x178 + 0x160);
      if (fVar46 <= fVar62) {
        fVar46 = fVar62;
      }
      if (fStack0000000000000100 <= ABS(fVar47)) {
        fStack0000000000000100 = ABS(fVar47);
      }
      if (iVar14 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar30 = *in_stack_00000170;
          if (lVar30 == 0) goto LAB_035574b8;
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar41 + 0x15a8);
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar64 = *(float *)(lVar30 + lVar43 * 0x178 + 0x14c);
      fVar62 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar64 = fVar64 + fVar46 * fVar62;
      if (fVar64 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar64;
      }
      uVar54 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar14;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar40,0);
        if ((uVar21 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar30 = lVar30 + lVar43 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar30 + 0x160);
      fStack0000000000000078 = *(float *)(lVar30 + 0x11c);
      uVar20 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar46 != 0.0;
      fVar62 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar62 = fVar46;
      }
      fVar46 = fVar62;
      uVar65 = *(undefined4 *)(lVar30 + 0x168);
      _bStack0000000000000074 = 0;
      fVar62 = fVar47;
      if (bVar10) {
        fVar62 = fStack0000000000000100;
      }
      uVar54 = (ulong)(uint)fVar62;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar62;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar11 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar43 * 0x178;
          lVar41 = *unaff_x19;
          uVar55 = *(uint *)(lVar30 + 0x128);
          uVar52 = *(undefined4 *)(lVar30 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar11 == uVar35) || ((int)uVar5 <= (int)uVar11)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        lVar41 = lVar43;
        uVar55 = uVar11;
        if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
          lVar41 = lVar19;
          uVar55 = uVar5;
        }
        if (uVar55 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar41 * 0x178;
          uVar55 = *(uint *)(lVar30 + 0x128);
          uVar52 = *(undefined4 *)(lVar30 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        uVar55 = *(uint *)(lVar30 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar21 = FUN_03567ad8(uVar65,*(undefined4 *)(lVar30 + lVar36),0);
      if ((uVar21 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0)) {
          if (uVar11 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar43 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar30 + 0x128);
            uVar20 = (ulong)_bStack0000000000000074;
            uVar54 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar54,uVar20,uVar56,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar30 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar30 = *(long *)puVar7;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar10 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  if (lVar37 == 0) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar30 + lVar43 * 0x178 + 400);
  fVar62 = (float)FUN_03776a30(lVar37 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
      uVar55 = *(uint *)(lVar30 + lVar36 + -0x330);
      fVar48 = *(float *)(lVar30 + lVar36 + -0x30c);
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar56 = (ulong)uVar55;
      uVar54 = (ulong)(uint)fStack000000000000009c;
      uVar20 = (ulong)(uint)fStack0000000000000098;
      (*pcVar32)(fStack00000000000000a0,uVar54,uVar20,uVar56,
                 fStack00000000000000a8 * fVar62 + fVar48,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar41 = *(long *)(lVar30 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= uVar11) goto LAB_035575f4;
    *(int *)(lVar41 + lVar43 * 0x178 + 0x174) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar41 + lVar43 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar40,0);
        if ((uVar21 & 1) != 0) goto LAB_035564e8;
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar30 = lVar30 + lVar43 * 0x178;
      fStack0000000000000040 = *(float *)(lVar30 + 0x60);
      fStack0000000000000038 = *(float *)(lVar30 + 0x14c);
      uVar54 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar30 + 0x11c);
      uVar20 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar30 + 0x160);
      fStack000000000000009c = fVar62 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar11 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar43 * 0x178;
          lVar19 = *unaff_x19;
          uVar55 = *(uint *)(lVar30 + 0x128);
          fVar48 = *(float *)(lVar30 + 0x14c);
LAB_03556654:
          pcVar32 = *(code **)(lVar19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar11 == uVar35) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        uVar55 = *(uint *)(lVar30 + 0x18);
        if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
          if (uVar55 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar19 = lVar43;
          if (uVar55 <= uVar11) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar30 = lVar30 + lVar19 * 0x178;
        fVar48 = *(float *)(lVar30 + 0x14c);
        uVar55 = *(uint *)(lVar30 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)uVar55) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 != 0) && (lVar41 = *(long *)(lVar30 + 0x38), lVar41 != 0)) {
        if (uVar17 < *(uint *)(lVar41 + 0x18)) {
          if (*(float *)(lVar41 + lVar36 + -0x108) == fStack0000000000000040) {
            fVar64 = *(float *)(lVar41 + lVar36 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar54 = (ulong)(uint)fStack0000000000000038;
            uVar21 = FUN_03567bac(fVar48 + fVar64,uVar54,0);
            if ((uVar21 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar30 = *in_stack_00000170;
            if (lVar30 == 0) goto LAB_035574b8;
          }
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 != 0) {
            uVar55 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar11 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar55) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar11 < (int)uVar55) {
      iVar14 = FUN_036d3364(lVar37,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar30 = *(long *)(lVar27 + lVar36 + -0x130);
      if (lVar30 == 0) goto LAB_035574b8;
      iVar15 = FUN_036d3364(lVar30,0);
      if (iVar14 != iVar15) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar30 + 0x18)) {
          lVar19 = *unaff_x19;
          uVar55 = *(uint *)(lVar30 + lVar36 + -0x330);
          fVar48 = *(float *)(lVar30 + lVar36 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar55 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar55 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar43 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar20 = (ulong)uStack00000000000000c0;
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar20,uVar56,fStack00000000000000d0,uVar20);
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar30 + lVar43 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar40,0);
        if ((uVar21 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      uVar55 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar55 <= uVar11) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + 0xb8);
      lVar37 = lVar30 + lVar43 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar37 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar37 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar19 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar19 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar37 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar19 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar19 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar55 <= uVar11) goto LAB_035575f4;
    lVar30 = lVar30 + lVar43 * 0x178;
    fVar62 = *(float *)(lVar30 + 0x128);
    fVar50 = *(float *)(lVar30 + 0x188);
    uVar18 = *(undefined8 *)(lVar30 + 0x17c);
    fVar67 = *(float *)(lVar30 + 0x184);
    uVar22 = *(undefined8 *)(lVar30 + 0x184);
    fVar66 = *(float *)(lVar30 + 0x18c);
    fVar48 = *(float *)(lVar30 + 0x11c);
    fVar49 = *(float *)(lVar30 + 0x148);
    fVar64 = *(float *)(lVar30 + 0x150);
    in_stack_00000178 = uVar18;
    fStack0000000000000180 = fVar67;
    fStack0000000000000184 = fVar50;
    in_stack_00000188 = fVar66;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar21 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar30 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar21 & 1) == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar62 = fVar62 + (float)in_stack_000017b8;
      uVar20 = (ulong)(uint)fVar62;
      fVar48 = fVar48 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar64 = fVar64 - in_stack_000017c0;
      uVar54 = (ulong)(uint)fVar64;
      fVar49 = fVar49 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar56 = (ulong)(uint)fVar49;
      if (fVar48 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar48;
      }
      if (fVar64 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar64;
      }
      if (fStack00000000000000c8 <= fVar62) {
        fStack00000000000000c8 = fVar62;
      }
      if (fStack00000000000000d0 <= fVar49) {
        fStack00000000000000d0 = fVar49;
      }
    }
    else {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar48 = (fVar48 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar56 = (ulong)(uint)fVar48;
      if (fVar64 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar64;
      }
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar20 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar49) {
        fStack00000000000000d0 = fVar49;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar20,uVar56,fStack00000000000000d0,uVar20);
      fStack00000000000000dc = fVar64 - fVar66;
      fStack00000000000000c8 = fVar62 + fVar67;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar49 + fVar50;
      fStack00000000000000d8 = fVar48;
      in_stack_000017b0 = uVar18;
      in_stack_000017b8 = uVar22;
      in_stack_000017c0 = fVar66;
    }
    if (((*unaff_x20 == 1) || (uVar11 == uVar35)) || (((int)uVar5 <= (int)uVar11 || (!bVar1)))) {
      uVar20 = (ulong)uStack00000000000000c0;
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar20,uVar56,fStack00000000000000d0,uVar20);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar11 = *unaff_x20;
  lVar36 = lVar36 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar11 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar55 = uVar13;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar27 = *in_stack_00000170;
  if (lVar27 != 0) {
    iVar16 = uVar13 + 1;
    plVar44 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar27 + 0x18) = uVar11;
    lVar36 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar16;
    if ((int)uVar11 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar36;
    *(float *)(lVar27 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar27 = unaff_x19[0xdf];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar27 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar16 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar16 != 0x19) {
      lVar27 = unaff_x19[0xe5];
      if (lVar27 == 0) goto LAB_035574b8;
      uVar11 = FUN_03911ee4(lVar27,0);
      FUN_03911f20(lVar27,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar22 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar27 = *in_stack_00000170;
                              if (lVar27 != 0) {
                                lVar30 = 0;
                                lVar36 = 0;
                                do {
                                  uVar21 = lVar36 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar21)
                                  goto LAB_03554724;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*plVar44 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                  FUN_03596a20(lVar27 + lVar30 + 0x70,0);
                                  lVar27 = unaff_x19[0xe1];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                  uVar18 = *(undefined8 *)(lVar27 + lVar36 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036d35a8(uVar18,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0
                                         )) break;
                                      if (*(int *)(*plVar44 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                      FUN_03596b20(lVar27 + lVar30 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a460c(lVar27,*(undefined8 *)(lVar19 + lVar30 + 0x80),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4810(lVar27,*(undefined8 *)(lVar19 + lVar30 + 0x98),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a48bc(lVar27,*(undefined8 *)(lVar19 + lVar30 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4e24(lVar27,*(undefined8 *)(lVar19 + lVar30 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = UnityEngine_Material__GetColorArray(lVar27,0),
                                       lVar27 == 0)) break;
                                    FUN_036aa280(lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_037b514c(lVar27,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar36 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (uVar18 = UnityEngine_Material__GetColorArray(lVar19,0),
                                       lVar27 == 0)) break;
                                    FUN_0390f3a4(lVar27,uVar18,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390eec8(uVar22,uVar54,uVar20,uVar56,lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar36 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390ed78(lVar27,uVar11 & 1,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                    plVar42 = *(long **)(lVar27 + lVar36 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar42 == (long *)0x0) break;
                                    (**(code **)(*plVar42 + 0x2c8))
                                              (plVar42,uVar17 & 1,*(undefined8 *)(*plVar42 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *in_stack_00000170;
                                  lVar36 = lVar36 + 1;
                                  lVar30 = lVar30 + 0x50;
                                } while (lVar27 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


