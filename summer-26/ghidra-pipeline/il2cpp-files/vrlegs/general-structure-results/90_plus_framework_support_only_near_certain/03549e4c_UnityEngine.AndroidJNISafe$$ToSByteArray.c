/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$ToSByteArray
ENTRY_POINT: 03549e4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_AndroidJNISafe__ToSByteArray(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  undefined4 *puVar25;
  uint in_w9;
  uint uVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  uint uVar31;
  uint uVar32;
  float *pfVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long *plVar39;
  uint unaff_w26;
  long lVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  ulong unaff_d11;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulong unaff_d13;
  float unaff_s14;
  undefined4 uVar58;
  float fVar59;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  int iStack000000000000002c;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  ulong in_stack_00000060;
  byte bStack0000000000000068;
  byte bStack000000000000006c;
  float fStack0000000000000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  undefined8 in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int iStack00000000000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float in_stack_00000150;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  int in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  uint in_stack_000008b0;
  undefined4 in_stack_000008b4;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  long in_stack_00001708;
  uint in_stack_0000179c;
  uint in_stack_000017b8;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float in_stack_000017e8;
  uint in_stack_000017ec;
  
code_r0x03549e4c:
  lVar24 = *(long *)(param_1 + 0x38);
  if (lVar24 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar24 + 0x20) = (short)in_w9;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = lVar24 + (long)(int)uVar10 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar24 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar24 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar24,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b63d8(in_stack_000017ec,0);
    uVar10 = uVar10 & 1;
  }
  else {
    uVar10 = 0;
  }
  fVar41 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  iVar11 = (int)unaff_x24;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fVar42 = 0.0;
    fVar59 = 0.0;
    fVar55 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar23 = *unaff_x20;
    uVar26 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar23 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= uVar23 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar23 + 1) * (long)iVar11 + 0x30);
      if ((((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0)) ||
         (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar26 | *(int *)(lVar24 + 0x28) << 0x10;
      uVar17 = FUN_0219f8b8(lVar27,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar58 = 0;
      if ((uVar17 & 1) == 0) {
        fVar42 = 0.0;
        fVar59 = 0.0;
        fVar55 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        fVar42 = *(float *)(in_stack_00001708 + 0x1c);
        uVar58 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar55 = *(float *)(in_stack_00001708 + 0x14);
        fVar59 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar41 = 0.0;
        }
      }
      uVar23 = *unaff_x20;
    }
    else {
      uVar58 = 0;
      fVar42 = 0.0;
      fVar59 = 0.0;
      fVar55 = 0.0;
    }
    if (0 < (int)uVar23) {
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= uVar23 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar23 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0 ||
          (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar24 + 0x28) | uVar26 << 0x10;
      uVar17 = FUN_0219f8b8(lVar27,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar17 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar55 = (float)FUN_03571cb4(fVar55,fVar59,fVar42,uVar58,
                                         *(undefined4 *)(in_stack_00001708 + 0x28),
                                         *(undefined4 *)(in_stack_00001708 + 0x2c),
                                         *(undefined4 *)(in_stack_00001708 + 0x30),
                                         *(undefined4 *)(in_stack_00001708 + 0x34),0),
           in_stack_00001708 == 0)) goto LAB_0354fbf4;
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar41 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fVar42;
  }
  fVar54 = (float)unaff_d13;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar49 = *(float *)(unaff_x19 + 200);
    fVar43 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar49 = fVar49 - fVar54 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar49;
    if ((in_stack_000017ec == 0x200b) || (uVar10 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar49 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar49 = *(float *)(unaff_x19 + 0x56);
  fVar43 = 0.0;
  if (fVar49 != 0.0) {
    fVar43 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar44 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar49 * 0.5 - fVar54 * (fVar43 * 0.5 + fVar44));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar43;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_036cee6c(lVar24,0,0);
    fVar44 = 0.0;
    if ((uVar17 & 1) != 0) {
      lVar24 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar24 == 0) goto LAB_0354fbf4;
      uVar17 = FUN_03699d3c(lVar24,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar44 = 0.0;
      if ((uVar17 & 1) != 0) {
        lVar24 = *in_stack_00000170;
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar24 == 0) goto LAB_0354fbf4;
        fVar49 = (float)FUN_0369e060(lVar24,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar52 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar44 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar44 = fVar44 * fVar49 * fVar52 * 0.25;
        if (fVar49 < in_stack_00000168._4_4_ + fVar44) {
          in_stack_00000168._4_4_ = fVar49 - fVar44;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar24 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_036cee6c(lVar24,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar17 & 1) != 0) {
      lVar24 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar24 == 0) goto LAB_0354fbf4;
      uVar17 = FUN_03699d3c(lVar24,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar17 & 1) != 0) {
        lVar24 = *in_stack_00000170;
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar24 == 0) goto LAB_0354fbf4;
        uVar17 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0xcc),0);
        if ((uVar17 & 1) != 0) {
          lVar24 = *in_stack_00000170;
          if (*(int *)(*plVar39 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar24 != 0) {
            fVar49 = (float)FUN_0369e060(lVar24,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0
                                        );
            if ((*in_stack_00000178 != 0) && (*in_stack_00000170 != 0)) {
              fVar52 = *(float *)(*in_stack_00000178 + 0x1a8);
              fVar44 = (float)FUN_0369e060(*in_stack_00000170,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
              fVar44 = fVar44 * fVar49 * fVar52 * 0.25;
              if (fVar49 < in_stack_00000168._4_4_ + fVar44) {
                in_stack_00000168._4_4_ = fVar49 - fVar44;
              }
              goto LAB_0354a568;
            }
          }
          goto LAB_0354fbf4;
        }
      }
    }
    fVar44 = 0.0;
  }
LAB_0354a568:
  fVar49 = *(float *)(unaff_x19 + 200);
  fVar52 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar49 = fVar49 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar54 * (fVar55 + ((fVar52 - in_stack_00000168._4_4_) - fVar44));
  fVar55 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar52 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s14 + fVar54 * (fVar59 + in_stack_00000168._4_4_ + fVar55)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar55 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar52 - fVar54 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar55);
  fVar55 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar59 = fVar49 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar54 * (fVar44 + fVar44 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar55);
  fStack0000000000000104 = fVar49;
  fVar55 = fVar59;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar45 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar55 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar46 = fVar45 * fVar54 * (fVar44 + in_stack_00000168._4_4_ + fVar55);
    fVar55 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar56 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar52 = fVar52 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar45 = fVar45 * fVar54 * (((fVar55 - fVar56) - in_stack_00000168._4_4_) - fVar44);
    fVar56 = fVar49 + fVar46;
    fVar55 = fVar59 + fVar45;
    fVar51 = (fVar46 - fVar45) * 0.5;
    fVar49 = (fVar49 + fVar45) - fVar51;
    fVar59 = (fVar59 + fVar46) - fVar51;
    fStack0000000000000104 = fVar56 - fVar51;
    fVar55 = fVar55 - fVar51;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar45 = 0.0;
    fVar46 = 0.0;
    fVar50 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar51 = fStack0000000000000134;
    fVar56 = fVar52;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar53 = (fVar59 + fVar49) * 0.5;
    fVar57 = (fStack0000000000000134 + fVar52) * 0.5;
    fVar52 = fVar52 - fVar57;
    fStack0000000000000100 = 0.0;
    fVar56 = fVar52;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar53,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar53 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar51 = fStack0000000000000134 - fVar57;
    fVar45 = 0.0;
    fStack0000000000000134 = fVar51;
    fVar49 = (float)FUN_036bdd2c(fVar49 - fVar53,_fStack0000000000000070,0);
    fVar49 = fVar53 + fVar49;
    fVar45 = fVar45 + 0.0;
    fStack0000000000000134 = fVar57 + fStack0000000000000134;
    fVar50 = 0.0;
    fVar59 = (float)FUN_036bdd2c(fVar59 - fVar53,_fStack0000000000000070,0);
    fVar59 = fVar53 + fVar59;
    fVar52 = fVar57 + fVar52;
    fVar50 = fVar50 + 0.0;
    fVar46 = 0.0;
    fVar55 = (float)FUN_036bdd2c(fVar55 - fVar53,_fStack0000000000000070,0);
    fVar55 = fVar53 + fVar55;
    fVar46 = fVar46 + 0.0;
    fVar51 = fVar57 + fVar51;
    fVar56 = fVar57 + fVar56;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar24 = *(long *)(*unaff_x22 + 0x38);
  uVar17 = unaff_d13 & 0xffffffff;
  if (lVar24 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fVar49;
  *(float *)(lVar24 + 0x120) = fStack0000000000000134;
  *(float *)(lVar24 + 0x124) = fVar45;
  if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x114) = fVar56;
  *(float *)(lVar24 + 0x110) = fStack0000000000000104;
  *(float *)(lVar24 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = fVar59;
  *(float *)(lVar24 + 300) = fVar52;
  *(float *)(lVar24 + 0x130) = fVar50;
  if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x134) = fVar55;
  *(float *)(lVar24 + 0x138) = fVar51;
  *(float *)(lVar24 + 0x13c) = fVar46;
  if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  uVar26 = *unaff_x20;
  lVar27 = (long)(int)uVar26;
  if (*(uint *)(lVar24 + 0x18) <= uVar26)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar24 + lVar27 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar52 = *(float *)(unaff_x19 + 0x9b);
  uVar20 = (ulong)(uint)fVar52;
  fVar55 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar59 - fVar49) / (fVar56 - fStack0000000000000134);
  *(float *)(lVar28 + 0x14c) = (unaff_s14 - fVar52) + fVar55;
  fVar59 = fStack0000000000000124 * fVar54;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar59 = fVar59 / in_stack_00000150;
    fStack0000000000000120 = (fStack0000000000000120 * fVar54) / in_stack_00000150;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar54;
  }
  uVar23 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar10 == 0) || (uVar26 == uVar23)) {
    fStack0000000000000120 = fVar55 + fStack0000000000000120;
    fVar59 = fVar55 + fVar59;
    fVar56 = fStack0000000000000120;
    fVar49 = fVar59;
    if (fVar55 != 0.0) {
      fVar49 = (fVar59 - fVar55) / *(float *)((long)unaff_x19 + 0x404);
      fVar56 = (fStack0000000000000120 - fVar55) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar49 <= fVar59) {
        fVar49 = fVar59;
      }
      if (fStack0000000000000120 <= fVar56) {
        fVar56 = fStack0000000000000120;
      }
    }
    lVar24 = lVar24 + lVar27 * unaff_x24;
    fVar55 = fVar49;
    if (fVar49 <= *(float *)(unaff_x19 + 0x99)) {
      fVar55 = *(float *)(unaff_x19 + 0x99);
    }
    fVar45 = fVar56;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar56) {
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
    *(float *)(unaff_x19 + 0x99) = fVar55;
    *(float *)(lVar24 + 0x154) = fVar49;
    *(float *)(lVar24 + 0x158) = fVar56;
    *(float *)(lVar24 + 0x148) = fVar59 - fVar52;
    *(float *)(unaff_x19 + 0x98) = fVar59 - fVar52;
    *(float *)(lVar24 + 0x150) = fStack0000000000000120 - fVar52;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar52;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar55;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar55 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar49 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      in_stack_00000150 = (fVar54 * fVar49) / in_stack_00000150;
      uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar55 <= in_stack_00000150) {
        fVar55 = in_stack_00000150;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar55;
    }
    if ((float)uVar20 == 0.0) {
      fVar55 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar59) {
        fVar55 = fVar59;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar55;
    }
  }
  else {
    fVar55 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + lVar27 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar55;
    fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar55 = fVar55 - fVar52;
    *(float *)(lVar24 + 0x148) = fVar55;
    *(float *)(lVar24 + 0x158) = fVar59;
    *(float *)(unaff_x19 + 0x98) = fVar55;
    fVar59 = fVar59 - fVar52;
    *(float *)(lVar24 + 0x150) = fVar59;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar59;
  }
  lVar24 = *unaff_x22;
  if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  uVar12 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)uVar12 * unaff_x24;
  *(undefined1 *)(lVar27 + 0x194) = 0;
  uVar31 = *(uint *)(unaff_x19 + 0x4f);
  if (((in_stack_000017ec == 9) ||
      ((((uVar10 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)))) ||
     (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar27 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar24 + 0x60);
      pfVar29 = (float *)(lVar24 + 100);
    }
    fVar59 = *pfVar33;
    fVar49 = *pfVar29;
    fVar55 = *(float *)(unaff_x19 + 0x6c);
    fVar52 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar59) - fVar49;
    bVar9 = true;
    if ((fVar55 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar55))) {
      bVar9 = fVar55 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000f8._4_4_ = fVar55;
    }
    fVar55 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar55 = (float)FUN_03776cb4(&stack0x000017a0,0);
      uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar51 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar56 = (float)unaff_d11;
    if (in_stack_000017ec != 0xad) {
      fVar56 = fVar54;
    }
    fVar50 = (float)uVar20;
    fVar46 = 0.0;
    if ((0.0 < fVar50) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar12 = *unaff_x20;
    fVar46 = (*(float *)(unaff_x19 + 0x97) - (fVar51 - fVar50)) + fVar46;
    if (fStack00000000000000c4 < fVar46) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar12;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar18 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar53 = *(float *)(unaff_x19 + 0x59);
        if (((fVar53 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar50)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar41 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar46) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar41 <= fVar53) {
            fVar41 = fVar53;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar50 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar46 = *(float *)(unaff_x19 + 0x4a);
        uVar20 = (ulong)(uint)fVar46;
        if ((fVar46 < fVar50) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar41 = (fVar50 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar41 <= DAT_00d38b84) {
            fVar41 = DAT_00d38b84;
          }
          fVar42 = (fVar50 - fVar41) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar50;
          fVar41 = DAT_00d38e60;
          if (fVar42 != INFINITY) {
            fVar41 = (float)(int)fVar42 / 20.0;
          }
          if (fVar41 <= fVar46) {
            fVar41 = fVar46;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        lVar27 = *(long *)(lVar24 + 0xb8);
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar19 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar19 == 0) {
LAB_0354cf2c:
          uVar18 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *(long *)puVar8;
          }
          FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
          iVar13 = FUN_0358c15c();
LAB_0354b3a0:
          iVar14 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar14;
          in_stack_00000180 = in_stack_00000180 + 1;
          in_stack_000017b8 = iVar13 - 1;
          uVar18 = CONCAT44(0x2026,iVar14);
        }
        goto LAB_03549564;
      default:
        goto switchD_0354ad3c_caseD_2;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_0354af20:
        in_stack_000017b8 = FUN_0358c15c();
        break;
      case 5:
        if ((uVar12 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          fVar41 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar41 - fVar51) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar20 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar24 = NEON_rev64(uVar20,4);
          unaff_x19[0x99] = lVar24;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          uVar18 = in_stack_000017d8;
        }
        goto LAB_03549564;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar17 = FUN_036cee6c(lVar24,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x528))(plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_0354fbf4;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_0354b0e0:
      uVar18 = CONCAT44(3,uVar12);
      goto LAB_03549564;
    }
switchD_0354ad3c_caseD_2:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar52 = ABS(fVar52) + fVar55 * (1.0 - fVar45) * fVar56;
    fVar55 = 1.0;
    if ((uVar31 & 0x18) != 0) {
      fVar55 = DAT_00d38acc;
    }
    fVar56 = fVar55 * in_stack_000000f8._4_4_;
    if (fVar52 <= fVar56) {
LAB_0354b8e4:
      if (in_stack_000017ec == 0xad) {
        if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
            *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
      }
      else if (in_stack_000017ec == 9) {
        lVar24 = *unaff_x22;
        if ((lVar24 != 0) && (lVar27 = *(long *)(lVar24 + 0x38), lVar27 != 0)) {
          uVar12 = *unaff_x20;
          if (*(uint *)(lVar27 + 0x18) <= uVar12)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(undefined1 *)(lVar27 + (long)(int)uVar12 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar12;
          lVar27 = *(long *)(lVar24 + 0x50);
          if (lVar27 != 0) {
            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar27 + 0x18)) {
              lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
              goto LAB_0354b950;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar56,fVar44);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
        }
        uVar12 = *unaff_x20;
        if ((in_stack_00000060 & 1) != 0) {
          *(uint *)(in_stack_00000078 + 0x1f0) = uVar12;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar12;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000060 = 0;
            *(float *)(lVar24 + 0x60) = fVar59;
            *(float *)(lVar24 + 100) = fVar49;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
      }
      goto LAB_0354fbf4;
    }
    uVar20 = (ulong)(uint)fVar44;
    if (((char)unaff_x19[0x5b] != '\0') && (uVar12 != *(uint *)(unaff_x19 + 0x93))) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017b8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar24 = *unaff_x22;
        if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar56 = *(float *)(unaff_x19 + 0x9b);
        fVar45 = 0.0;
        if ((0.0 < fVar56) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar45 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar45 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar24 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar24 == 0) goto LAB_0354fbf4;
        fVar56 = *(float *)(unaff_x19 + 0x9b);
        fVar45 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 != 0) {
        uVar34 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar24 + 0x18) <= uVar34) ||
           (uVar4 = uVar34 - 1, *(uint *)(lVar24 + 0x18) <= uVar4))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar20 = (ulong)(uint)(fVar45 + *(float *)(unaff_x19 + 0x97));
        fVar51 = (fVar45 + *(float *)(unaff_x19 + 0x97) + fVar56) -
                 *(float *)(lVar24 + (long)(int)uVar34 * unaff_x24 + 0x158);
        if (((bStack000000000000006c & 1) == 0 &&
             *(short *)(lVar24 + (long)(int)uVar4 * (long)iVar11 + 0x20) == 0xad) &&
           ((fVar51 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar4;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          uVar18 = CONCAT44(0x2d,uVar4);
          goto LAB_03549564;
        }
        if (*(short *)(lVar24 + (long)(int)uVar34 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000006c = 1;
          uVar18 = in_stack_000017d8;
          goto LAB_03549564;
        }
        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar56 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar56 <= fVar45) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar20 = (ulong)(uint)fVar45;
            fVar56 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar45 <= fVar56) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_0354b6dc;
LAB_0354fcd0:
            fVar41 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar41 <= DAT_00d38b84) {
              fVar41 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar45;
            fVar45 = fVar45 - fVar41;
            goto LAB_0354fc60;
          }
LAB_0354fc94:
          fVar41 = fVar52;
          if (0.0 < fVar45) {
            fVar41 = fVar52 / (1.0 - fVar45);
          }
          fVar45 = fVar45 + (fVar52 - fVar55 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar41;
LAB_0354fc24:
          if (fVar56 <= fVar45) {
            fVar45 = fVar56;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar45;
          return;
        }
LAB_0354b6dc:
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        iVar13 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
        if (((iVar13 != iStack000000000000002c) && (iVar13 != -1)) &&
           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
          goto LAB_0354fbf4;
          uVar34 = *unaff_x20 - 1;
          if (*(uint *)(lVar24 + 0x18) <= uVar34)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar13;
          if (*(short *)(lVar24 + (long)(int)uVar34 * (long)iVar11 + 0x20) == 0xad) {
            bStack000000000000006c = 0;
            *unaff_x20 = uVar34;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            uVar18 = CONCAT44(0x2d,uVar34);
            goto LAB_03549564;
          }
        }
        if (fVar51 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
          FUN_0358cbd4(in_stack_00000050,uVar17,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar41,
                       in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
          }
          fVar56 = fStack00000000000000c4;
          if ((char)unaff_x19[0x47] != '\0') {
            fVar56 = *(float *)(unaff_x19 + 0x59);
            if ((fVar56 < *(float *)((long)unaff_x19 + 700)) &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar41 = *(float *)((long)unaff_x19 + 700) +
                       ((fStack0000000000000018 - fVar51) / (float)((int)unaff_x19[0x95] + 1)) /
                       in_stack_00000050;
              if (fVar41 <= fVar56) {
                fVar41 = fVar56;
              }
UnityEngine_AndroidJavaObject___ctor:
              *(float *)((long)unaff_x19 + 700) = fVar41;
              return;
            }
            fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar56 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar45 < fVar56) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fc94;
            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar20 = (ulong)(uint)fVar45;
            fVar56 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar56 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fcd0;
          }
          switch((int)unaff_x19[0x5c]) {
          case 0:
          case 2:
          case 4:
            goto switchD_0354b88c_caseD_0;
          case 1:
            lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar27 = *(long *)(lVar24 + 0xb8);
            lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
              lVar24 = FUN_01a46ff8(lVar24);
            }
            piVar19 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            if (*piVar19 != 0) {
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              memcpy(&stack0x00001018,&stack0x000008b0,0x378);
              iVar13 = FUN_0358c15c();
              bStack000000000000006c = 0;
              goto LAB_0354b3a0;
            }
            bStack000000000000006c = 0;
            goto LAB_0354cf2c;
          case 3:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017b8 = FUN_0358c15c();
            bStack000000000000006c = 0;
            goto LAB_0354b0e0;
          case 5:
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
            FUN_0358cbd4(in_stack_00000050,uVar17,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar41,
                         in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            break;
          case 6:
            lVar24 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_036cee6c(lVar24,0,0);
            if ((uVar17 & 1) != 0) {
              plVar39 = (long *)unaff_x19[0x5d];
              uVar18 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar39 + 0x528))(plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
              lVar24 = unaff_x19[0x5d];
              if (lVar24 == 0) goto LAB_0354fbf4;
              *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar39 = (long *)unaff_x19[0x5d];
              if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
            }
            bStack000000000000006c = 0;
            goto LAB_0354b4b4;
          default:
            bStack000000000000006c = 0;
            goto LAB_0354b8e4;
          }
        }
        bStack000000000000006c = 0;
        goto LAB_0354c6b4;
      }
      goto LAB_0354fbf4;
    }
    if (((char)unaff_x19[0x47] != '\0') &&
       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
      fVar56 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if (fVar45 < fVar56) {
        fVar41 = fVar52 / (1.0 - fVar45);
        if (fVar45 <= 0.0) {
          fVar41 = fVar52;
        }
        fVar45 = fVar45 + (fVar52 - fVar55 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar41;
        goto LAB_0354fc24;
      }
      fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar56 = *(float *)(unaff_x19 + 0x4a);
      if (fVar56 < fVar45) {
        fVar41 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar41 <= DAT_00d38b84) {
          fVar41 = DAT_00d38b84;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar45;
        fVar45 = fVar45 - fVar41;
LAB_0354fc60:
        fVar42 = fVar45 * 20.0 + 0.5;
        fVar41 = DAT_00d38e60;
        if (fVar42 != INFINITY) {
          fVar41 = (float)(int)fVar42 / 20.0;
        }
        if (fVar41 <= fVar56) {
          fVar41 = fVar56;
        }
LAB_0354d004:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar41;
        return;
      }
    }
    iVar13 = (int)unaff_x19[0x5c];
    if (iVar13 == 1) {
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar8;
      }
      lVar27 = *(long *)(lVar24 + 0xb8);
      lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = FUN_01a46ff8(lVar24);
      }
      piVar19 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar19 != 0) {
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
        goto LAB_0354b394;
      }
      goto LAB_0354cf2c;
    }
    if (iVar13 != 6) {
      if (iVar13 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_0354af20;
      }
      goto LAB_0354b8e4;
    }
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_000017b8 = FUN_0358c15c();
    lVar24 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar17 = FUN_036cee6c(lVar24,0,0);
    if ((uVar17 & 1) != 0) {
      plVar39 = (long *)unaff_x19[0x5d];
      uVar18 = (**(code **)(*unaff_x19 + 0x518))();
      if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar39 + 0x528))(plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
      lVar24 = unaff_x19[0x5d];
      if (lVar24 == 0) goto LAB_0354fbf4;
      *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
      FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar39 = (long *)unaff_x19[0x5d];
      if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
LAB_0354b4b4:
    uVar18 = CONCAT44(3,*unaff_x20);
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar59 = (float)uVar20;
      fVar55 = 0.0;
      if ((0.0 < fVar59) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar55 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar20 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar59)) + fVar55)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar12;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar17 = FUN_036cee6c(lVar24,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar39 != (long *)0x0) {
            (**(code **)(*plVar39 + 0x528))(plVar39,uVar18,*(undefined8 *)(*plVar39 + 0x530));
            lVar24 = unaff_x19[0x5d];
            if (lVar24 != 0) {
              *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar39 = (long *)unaff_x19[0x5d];
              if (plVar39 != (long *)0x0) {
                (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                goto LAB_0354b0e0;
              }
            }
          }
          goto LAB_0354fbf4;
        }
        goto LAB_0354b0e0;
      }
    }
    if ((((in_stack_000017ec - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017ec - 10 < 2)) || (in_stack_000017ec == 0xa0)) {
LAB_0354b500:
      if (((in_stack_000017ec != 0xad) && (in_stack_000017ec != 0x200b)) &&
         (in_stack_000017ec != 0x2060)) {
        lVar24 = *unaff_x22;
        if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b97f8(in_stack_000017ec,0);
      if ((uVar17 & 1) != 0) goto LAB_0354b500;
    }
    if (in_stack_000017ec == 0xa0) {
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x50), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
LAB_0354ba38:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar55 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar49 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar24 = unaff_x19[0xca];
      fVar59 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar59 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar52 = *(float *)((long)unaff_x19 + 0x404);
      fVar45 = *(float *)(lVar24 + 0x2c);
      fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
      fVar56 = *_fStack00000000000000a8;
      fVar44 = fVar52 * (fVar55 / (float)iVar13) * fVar49 * fVar59 * fVar45 * fVar44;
      fVar55 = *_fStack00000000000000a0;
      if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        uVar12 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar24 + 0x18) <= uVar12)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar59 = *(float *)(lVar24 + (long)(int)uVar12 * (long)iVar11 + 0x60);
        iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar52 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar24 = unaff_x19[0xca];
        fVar49 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar49 = 1.0;
        }
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_0354fbf4;
        fVar45 = *(float *)((long)unaff_x19 + 0x404);
        fVar51 = *(float *)(lVar24 + 0x2c);
        fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x50), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar56 = *(float *)(lVar24 + 0x60);
        fVar55 = *(float *)(lVar24 + 100);
        fVar44 = fVar45 * (fVar59 / (float)iVar13) * fVar52 * fVar49 * fVar51 * fVar44;
      }
      fVar52 = *(float *)(unaff_x19 + 0x9b);
      fVar59 = 0.0;
      fVar49 = 0.0;
      if ((0.0 < fVar52) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar49 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar51 = *(float *)(unaff_x19 + 0x97);
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar45 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
        goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,lVar24,0);
        fVar59 = (float)FUN_03776cb4(&stack0x00001710,0);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar50 = *(float *)(unaff_x19 + 0x6c);
      fVar55 = (fStack000000000000009c - fVar56) - fVar55;
      bVar9 = true;
      if ((fVar50 <= fVar55) && (bVar9 = false, !NAN(fVar50))) {
        bVar9 = fVar50 == -1.0;
      }
      if (!bVar9) {
        fVar55 = fVar50;
      }
      fVar56 = 1.0;
      if ((uVar31 & 0x18) != 0) {
        fVar56 = DAT_00d38acc;
      }
      if (((fVar51 - (fVar46 - fVar52)) + fVar49 < fStack00000000000000c4) &&
         (ABS(fVar45) + fVar44 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar56 * fVar55)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
        memcpy(&stack0x00000538,(void *)(lVar24 + 0x788),0x378);
        FUN_0209b210(lVar24 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar24 = *unaff_x22;
    if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar12 = *(uint *)(unaff_x19 + 0x95);
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar27 + 100) = uVar12;
    *(int *)(lVar27 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017ec || ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) == 0)))) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
      if (*(uint *)(lVar24 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(int *)(lVar24 + (long)(int)uVar12 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*(int *)(lVar24 + (long)(int)uVar12 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
    }
    if (in_stack_000017ec == 9) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar42 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar43 = *(float *)(unaff_x19 + 200);
      fVar55 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar42 = fVar54 * fVar42 * fVar55;
      fVar59 = fVar42 * (float)(int)(fVar43 / fVar42);
      uVar20 = (ulong)(uint)fVar59;
      if (fVar59 <= fVar43) {
        fVar59 = fVar43 + fVar42;
      }
LAB_0354c000:
      *(float *)(unaff_x19 + 200) = fVar59;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar43 = 1.0;
        }
        else {
          fVar43 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
        }
        fVar59 = *(float *)(unaff_x19 + 200);
        fVar49 = (float)FUN_03776cb4(&stack0x000017a0,0);
        if (unaff_x19[0x20] != 0) {
          fVar55 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar59 = fVar59 + fVar55 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar54 * (fVar42 + fVar43 * fVar49) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     fVar41 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar59;
          goto joined_r0x0354bf48;
        }
        goto LAB_0354fbf4;
      }
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar54 * fVar42 +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + fVar41 + *(float *)(*in_stack_00000178 + 0x1ac)));
      uVar20 = (ulong)(uint)fVar59;
      fVar59 = *(float *)(unaff_x19 + 200) - fVar59;
      *(float *)(unaff_x19 + 200) = fVar59;
      if ((in_stack_000017ec == 0x200b) || (uVar10 != 0)) {
        fVar42 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar20 = (ulong)(uint)fVar42;
        fVar59 = fVar59 - fVar42;
        goto LAB_0354c000;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar55 = *(float *)(unaff_x19 + 200);
      fVar59 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar43) +
                        fStack00000000000000d4 * (fVar41 + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar59;
joined_r0x0354bf48:
      if ((in_stack_000017ec == 0x200b) || (uVar20 = (ulong)(uint)fVar55, uVar10 != 0)) {
        fVar42 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar20 = (ulong)(uint)fVar42;
        fVar59 = fVar59 + fVar42;
        goto LAB_0354c000;
      }
    }
    lVar24 = *unaff_x22;
    if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
    uVar12 = *unaff_x20;
    uVar31 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar31 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar27 + (long)(int)uVar12 * unaff_x24 + 0x144) = fVar59;
    uVar34 = in_stack_000017ec;
    if ((int)in_stack_000017ec < 0xd) {
      if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
      if (((unaff_w23 & in_stack_000017ec == 0x2d) != 0) ||
         ((float)uVar12 == in_stack_00000080._4_4_)) goto LAB_0354c060;
    }
    else {
      if (1 < in_stack_000017ec - 0x2028) {
        if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
        uVar20 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar12 != in_stack_00000080._4_4_) goto LAB_0354c704;
      }
LAB_0354c060:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar42 = *(float *)(unaff_x19 + 0x99);
        fVar55 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar42 = fVar42 - fVar55;
        if (((fStack0000000000000058 < ABS(fVar42)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar42);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar42;
          *(float *)(unaff_x19 + 0x9b) = fVar42 + *(float *)(unaff_x19 + 0x9b);
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *(long *)puVar8;
          }
          lVar27 = *(long *)(lVar24 + 0xb8);
          if (*(int *)(lVar27 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar27 + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000008b0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar24 + 0xb8) + 0x818,0);
            lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
            *(float *)(lVar24 + 0x7bc) = fVar42 + *(float *)(lVar24 + 0x7bc);
            *(float *)(lVar24 + 0x800) = fVar42 + *(float *)(lVar24 + 0x800);
            memcpy(&stack0x000001c0,(void *)(lVar24 + 0x788),0x378);
            FUN_0209b210(lVar24 + 0x11f0,&stack0x000001c0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar59 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar55 = *(float *)((long)unaff_x19 + 0x4cc) - fVar59;
      fVar42 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar55 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar42 = fVar55;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar42;
      fVar43 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017e4 == '\0') {
        in_stack_000017e8 = fVar42;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017e4 = '\x01';
      }
      lVar24 = *unaff_x22;
      if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
      uVar12 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = unaff_x19[0x93];
      lVar16 = lVar27 + (long)(int)uVar12 * 0x5c;
      *(int *)(lVar16 + 0x34) = (int)lVar28;
      uVar31 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar28 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar31 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar31;
      *(uint *)(lVar16 + 0x38) = uVar31;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar16 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar13 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar31 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar13 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar13;
      *(int *)(lVar16 + 0x40) = iVar13;
      *(int *)(lVar16 + 0x24) = (*(int *)(lVar16 + 0x3c) - *(int *)(lVar16 + 0x34)) + 1;
      *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= uVar31)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar58 = *(undefined4 *)(lVar24 + (long)(int)uVar31 * (long)iVar11 + 0x11c);
      lVar27 = lVar27 + (long)(int)uVar12 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar55;
      *(undefined4 *)(lVar27 + 0x6c) = uVar58;
      lVar24 = *unaff_x22;
      if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar43 = fVar43 - fVar59;
      uVar20 = (ulong)(uint)fVar43;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) =
           *(undefined4 *)
            (lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar27 + 0x78) = fVar43;
      lVar24 = *unaff_x22;
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_0354fbf4;
      lVar16 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar28 + lVar16 * 0x5c;
      *(float *)(lVar27 + 0x44) = *(float *)(lVar27 + 0x74) - fVar54 * in_stack_00000168._4_4_;
      *(float *)(lVar27 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar27 + 0x24) == 1) {
        *(int *)(lVar28 + lVar16 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar31 = (uint)*(undefined8 *)(lVar27 + 0x18);
      if (uVar31 <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(char *)(lVar27 + lVar40 * unaff_x24 + 0x194) == '\0') &&
         (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar31 <= *(uint *)(unaff_x19 + 0x94)))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar16 * 0x5c;
      fVar42 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + fVar41 + *(float *)(*in_stack_00000178 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar41 = -fVar42;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar41 = fVar42;
      }
      *(float *)(lVar28 + 0x58) = *(float *)(lVar27 + lVar40 * unaff_x24 + 0x144) + fVar41;
      *(float *)(lVar28 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar28 + 0x54) = fVar55;
      *(float *)(lVar28 + 0x48) = fStack000000000000005c + (fVar43 - fVar55);
      *(float *)(lVar28 + 0x4c) = fVar43;
      if ((int)in_stack_000017ec < 0x2d) {
        if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar24 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar13 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar13;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar13) {
              FUN_0358ca18();
              lVar24 = unaff_x19[0x6d];
              if (lVar24 == 0) goto LAB_0354fbf4;
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if (lVar24 != 0) {
              if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
                fVar41 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017ec == 0x2029) || (fVar42 = 0.0, in_stack_000017ec == 10)) {
                    fVar42 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar21 = 0;
                  fVar42 = fVar41 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           in_stack_00000050 *
                           (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar42) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017ec == 0x2029) || (fVar42 = 0.0, in_stack_000017ec == 10)) {
                    fVar42 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar21 = 1;
                  fVar42 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar42);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar42;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar21;
                puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar24 = *(long *)puVar8;
                }
                uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar41;
                uVar17 = NEON_rev64(uVar18,4);
                unaff_x19[0x99] = uVar17;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
                bStack0000000000000068 = 1;
                in_stack_00000060 = 1;
                uVar20 = uVar17;
                uVar18 = in_stack_000017d8;
                goto LAB_03549564;
              }
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
          }
          goto LAB_0354fbf4;
        }
        if (in_stack_000017ec == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
          in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar34 = 3;
        }
      }
      else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d)) goto LAB_0354c4a8;
    }
LAB_0354c704:
    uVar12 = *unaff_x20;
    if (uVar31 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(char *)(lVar27 + (long)(int)uVar12 * unaff_x24 + 0x194) != '\0') {
      lVar27 = lVar27 + (long)(int)uVar12 * unaff_x24;
      uVar20 = *(ulong *)(lVar27 + 0x11c);
      uVar17 = *(ulong *)(in_stack_00000078 + 0x230);
      *(ulong *)(in_stack_00000078 + 0x230) =
           uVar17 ^ (uVar17 ^ uVar20) &
                    ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar20 >> 0x20)),
                              -(uint)((float)uVar17 < (float)uVar20));
      uVar17 = *(ulong *)(in_stack_00000078 + 0x238);
      uVar20 = *(ulong *)(lVar27 + 0x128);
      *(ulong *)(in_stack_00000078 + 0x238) =
           uVar17 ^ (uVar17 ^ uVar20) &
                    ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar17 >> 0x20)),
                              -(uint)((float)uVar20 < (float)uVar17));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
      lVar27 = *(long *)(lVar24 + 0x58);
      if (lVar27 == 0) goto LAB_0354fbf4;
      iVar13 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar27 + 0x18) < iVar13) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar24 + 0x58),iVar13,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar24 = *unaff_x22;
        if (lVar24 == 0) goto LAB_0354fbf4;
      }
      lVar27 = *(long *)(lVar24 + 0x58);
      if (lVar27 == 0) goto LAB_0354fbf4;
      uVar31 = *(uint *)(unaff_x19 + 0x96);
      lVar28 = (long)(int)uVar31;
      uVar12 = *(uint *)(lVar27 + 0x18);
      if (uVar12 <= uVar31) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar27 + lVar28 * 0x14;
      fVar42 = *(float *)(lVar16 + 0x30);
      uVar20 = (ulong)(uint)fVar42;
      *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar41 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar42 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar41 = fVar42;
      }
      *(float *)(lVar16 + 0x30) = fVar41;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar34 == 0 && uVar31 == 0) {
        *(uint *)(lVar27 + (ulong)uVar31 * 0x14 + 0x20) = uVar34;
      }
      else {
        uVar4 = uVar34 - 1;
        if (0 < (int)uVar34) {
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar24 + 0x18) <= uVar4)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (uVar31 != *(uint *)(lVar24 + (ulong)uVar4 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar31 - 1 < uVar12) {
              *(uint *)(lVar27 + 0x20 + (long)(int)(uVar31 - 1) * 0x14 + 4) = uVar4;
              *(uint *)(lVar27 + 0x20 + lVar28 * 0x14) = uVar34;
              goto LAB_0354c780;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
        }
        if ((float)uVar34 == in_stack_00000080._4_4_) {
          *(float *)(lVar27 + lVar28 * 0x14 + 0x24) = in_stack_00000080._4_4_;
        }
      }
    }
LAB_0354c780:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
    if ((uVar10 == 0) &&
       (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
        if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
             (0x1d < in_stack_000017ec - 0xa961)) || (uVar17 = FUN_03597a54(0), (uVar17 & 1) != 0))
           && ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
                (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
        goto LAB_0354c904;
        lVar24 = FUN_035978e8(0);
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_0354fbf4;
        uVar12 = FUN_0219c130(*(long *)(lVar24 + 0x10),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
          in_stack_000008b0 = in_stack_000017ec;
          if ((uVar12 & 1) == 0) {
LAB_0354cc08:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            bStack0000000000000068 = 0;
            goto LAB_0354cc90;
          }
LAB_0354cb6c:
          if (uVar26 != uVar23 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
          if (uVar10 != 0) goto LAB_0354cb88;
          goto LAB_0354cbc0;
        }
        lVar24 = FUN_035978e8(0);
        if (((lVar24 == 0) || (*unaff_x22 == 0)) ||
           (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20 + 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(long *)(lVar24 + 0x18) == 0) goto LAB_0354fbf4;
        in_stack_000008b0 =
             (uint)*(ushort *)(lVar27 + (long)(int)(*unaff_x20 + 1) * (long)iVar11 + 0x20);
        uVar17 = FUN_0219c130(*(long *)(lVar24 + 0x18),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar12 & 1) != 0) goto LAB_0354cb6c;
        if ((uVar17 & 1) == 0) goto LAB_0354cc08;
        if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
        if (uVar10 != 0) {
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
        if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
LAB_0354c910:
        if ((bStack000000000000006c & 1) == 0 && in_stack_000017ec == 0xad) goto LAB_0354cb88;
LAB_0354cbc0:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
      }
      bStack0000000000000068 = 1;
    }
    else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_0354c904:
      if ((bStack0000000000000068 & 1) != 0) {
        if (uVar10 == 0) goto LAB_0354c910;
LAB_0354cb88:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_0354cbc0;
      }
LAB_0354cc88:
      bStack0000000000000068 = 0;
    }
    else {
      if (((in_stack_000017ec - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_000017ec == 0xa0 || (in_stack_000017ec == 0x2060)))) goto LAB_0354c87c;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      bStack0000000000000068 = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_0354cc90:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    uVar18 = in_stack_000017d8;
  }
LAB_03549564:
  do {
    unaff_d11 = unaff_d13 & 0xffffffff;
    in_stack_000017b8 = in_stack_000017b8 + 1;
    lVar24 = unaff_x19[0x8f];
    if (lVar24 == 0) goto LAB_0354fbf4;
    if ((int)*(uint *)(lVar24 + 0x18) <= (int)in_stack_000017b8) {
LAB_0354cf48:
      fVar41 = (float)uVar20;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar41 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar41 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar42 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar41 < fVar42) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar55 = (*(float *)((long)unaff_x19 + 0x23c) - fVar41) * 0.5;
          if (fVar55 <= DAT_00d38b84) {
            fVar55 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar41;
          fVar55 = (fVar41 + fVar55) * 20.0 + 0.5;
          fVar41 = DAT_00d38e60;
          if (fVar55 != INFINITY) {
            fVar41 = (float)(int)fVar55 / 20.0;
          }
          if (fVar42 <= fVar41) {
            fVar41 = fVar42;
          }
          goto LAB_0354d004;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar18 = FUN_0276793c(in_stack_00000038,0);
        uVar15 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar15,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar18,0);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017ec == 3)))) {
        (**(code **)(*unaff_x19 + 0x928))();
        goto LAB_0354d0cc;
      }
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar8;
      }
      plVar39 = (long *)OVRPlugin_Media_TypeInfo;
      lVar24 = **(long **)(lVar24 + 0xb8);
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      iVar11 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x60), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar24 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_035968e8(lVar24 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar13 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar24 = unaff_x19[0xeb];
      in_stack_000000b8 = (long *)uStack00000000000000f0;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar13 < 0x401) {
        if (iVar13 == 0x100) {
          if (lVar24 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar24 + 0x18) < 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar18 = *(undefined8 *)(lVar24 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x58), lVar27 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar41 = *(float *)(lVar27 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
          }
          else {
            fVar41 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar24 + 0x2c);
          fVar41 = (0.0 - fVar41) - fStack000000000000001c;
        }
        else if (iVar13 == 0x200) {
          if (lVar24 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fStack00000000000000c4 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x58), lVar24 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar24 = lVar24 + (long)(int)uStack0000000000000034 * 0x14;
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar41 = ((fStack000000000000001c + *(float *)(lVar24 + 0x28) +
                      *(float *)(lVar24 + 0x30)) - fStack0000000000000020) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar41 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                     fStack0000000000000020) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar13 != 0x400) goto LAB_0354d620;
          if (lVar24 == 0) goto LAB_0354fbf4;
          if (*(int *)(lVar24 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar18 = *(undefined8 *)(lVar24 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x58), lVar27 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            in_stack_000017e8 = *(float *)(lVar27 + (long)(int)uStack0000000000000034 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar24 + 0x20);
          fVar41 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
        }
LAB_0354d610:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar41);
      }
      else if (iVar13 == 0x800) {
        if (lVar24 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar41 = fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar41;
      }
      else {
        if (iVar13 == 0x1000) {
          if (lVar24 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
            uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
            fVar41 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
            goto LAB_0354d610;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        if (iVar13 == 0x2000) {
          if (lVar24 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar41 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                         fStack0000000000000020) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar24 + 0x24) +
                                (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar41);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        }
      }
LAB_0354d620:
      lVar24 = FUN_03559490();
      if (lVar24 == 0) goto LAB_0354fbf4;
      FUN_036df824(lVar24,0);
      *(float *)((long)unaff_x19 + 0x6e4) = fVar41;
      uVar58 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar8 = OVRPlugin_Mesh_TypeInfo;
      lVar24 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar8;
      }
      puVar25 = *(undefined4 **)(lVar24 + 0xb8);
      FUN_035683a4(*puVar25,puVar25[1],puVar25[2],puVar25[3],&stack0x000017c0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar24 = *unaff_x22;
      if (lVar24 == 0) goto LAB_0354fbf4;
      uVar10 = *unaff_x20;
      if ((int)uVar10 < 1) {
        iStack00000000000000d8 = 0;
        iVar11 = 0;
        goto LAB_0354f7f4;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_0354fbf4;
      bVar9 = false;
      bVar7 = false;
      bVar5 = false;
      fStack0000000000000124 = 0.0;
      bVar6 = false;
      iStack00000000000000d8 = 0;
      uStack0000000000000030 = 0;
      in_stack_00000168._4_4_ = 0.0;
      fStack000000000000005c = 0.0;
      lVar27 = 0x2e0;
      fVar55 = 0.0;
      fVar42 = 0.0;
      fStack00000000000000d0 = fStack00000000000000e0;
      fStack00000000000000d4 = fStack00000000000000e4;
      _bStack0000000000000068 = fStack00000000000000e4;
      fStack0000000000000104 =
           *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
      fStack000000000000009c = fStack00000000000000e4;
      fStack00000000000000a0 = fStack00000000000000e0;
      fStack0000000000000100 = 0.0;
      in_stack_00000080._4_4_ = 0.0;
      in_stack_00000048._4_4_ = 0.0;
      fStack00000000000000a8 = 0.0;
      fStack0000000000000040 = 0.0;
      _bStack000000000000006c = uStack00000000000000c0;
      fStack0000000000000070 = fStack00000000000000e0;
      fStack0000000000000098 = (float)uStack00000000000000c0;
      uVar26 = 0;
      uVar23 = 1;
      goto LAB_0354d7c0;
    }
    if (*(uint *)(lVar24 + 0x18) <= in_stack_000017b8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_w9 = *(uint *)(lVar24 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
    if (in_w9 == 0) goto LAB_0354cf48;
    if (5 < in_stack_00000180) {
      uVar18 = FUN_0276793c(&stack0x000017ec,0);
      uVar15 = FUN_0276793c(&stack0x000017b8,0);
      uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar15,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar18,0);
      uVar18 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_w9 != 0x3c)) {
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar17 = FUN_03586568();
      if (((uVar17 & 1) != 0) &&
         (in_stack_000017b8 = in_stack_0000179c, in_stack_000017ec = in_w9,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    uVar10 = *unaff_x20;
    if (*(uint *)(lVar24 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar28 = (long)(int)uVar10;
    unaff_w26 = (uint)*(byte *)(lVar24 + lVar28 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar27 = unaff_x19[0x24];
    if ((uint)uVar18 == uVar10) {
      in_w9 = (uint)((ulong)uVar18 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_w9 == 0x2026) {
        *(long *)(lVar24 + lVar28 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar24 + 0x2c) = 0;
        *(long *)(lVar24 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        uVar10 = *unaff_x20;
        if (*(uint *)(lVar24 + 0x18) <= uVar10)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        unaff_w23 = 1;
        *(int *)(lVar24 + (long)(int)uVar10 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        uVar18 = CONCAT44(3,uVar10 + 1);
      }
      else if (in_w9 == 3) {
        if ((*in_stack_00000178 == 0) || (lVar16 = FUN_03568ac0(*in_stack_00000178,0), lVar16 == 0))
        goto LAB_0354fbf4;
        FUN_0219b634(lVar16,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar24 + 0x18) <= uVar10)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(ulong *)(lVar24 + lVar28 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008b4,in_stack_000008b0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar10 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x324)) && (in_w9 != 3)) {
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + (long)(int)uVar10 * (long)iVar11;
      *(undefined1 *)(lVar24 + 0x194) = 0;
      *(undefined2 *)(lVar24 + 0x20) = 0x200b;
      *(undefined4 *)(lVar24 + 100) = 0;
      *unaff_x20 = uVar10 + 1;
      in_stack_000017ec = in_w9;
      goto LAB_03549564;
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar13 == 0) {
      uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
      if ((uVar10 >> 4 & 1) == 0) {
        if ((uVar10 >> 3 & 1) == 0) {
          in_stack_00000150 = 1.0;
          if ((uVar10 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b812c(in_w9,0);
            if ((uVar17 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b8410(in_w9,0);
              in_w9 = uVar10 & 0xffff;
              in_stack_00000150 = fStack0000000000000024;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b8070(in_w9,0);
          in_stack_00000150 = 1.0;
          if ((uVar17 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8594(in_w9,0);
            goto LAB_03549968;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b812c(in_w9,0);
        in_stack_00000150 = 1.0;
        if ((uVar17 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b8410(in_w9,0);
LAB_03549968:
          in_stack_00000150 = 1.0;
          in_w9 = uVar10 & 0xffff;
        }
      }
      iVar13 = *(int *)((long)unaff_x19 + 0x644);
    }
    else {
      in_stack_00000150 = 1.0;
    }
    in_stack_000017d8 = uVar18;
    in_stack_000017ec = in_w9;
    if (iVar13 == 0) {
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *_iStack00000000000000d8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
      if (*_iStack00000000000000d8 != 0) {
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000178 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000170 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        uVar26 = *unaff_x20;
        uVar10 = *(uint *)(lVar24 + 0x18);
        if (uVar10 <= uVar26) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar24 + (long)(int)uVar26 * unaff_x24 + 0x58);
        if (unaff_w23 == 0) {
LAB_03549a88:
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar41 = *(float *)(unaff_x19 + 0x3d);
          iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar24 = unaff_x19[0x20];
        }
        else {
          lVar27 = unaff_x19[0x8f];
          if (lVar27 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar27 + 0x18) <= in_stack_000017b8)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if ((*(int *)(lVar27 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
             (uVar26 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
          if (uVar10 <= uVar26 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar41 = *(float *)(lVar24 + (long)(int)(uVar26 - 1) * (long)iVar11 + 0x60);
          iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar24 = *in_stack_00000178;
        }
        if (lVar24 == 0) goto LAB_0354fbf4;
        fVar55 = (float)FUN_03776960(lVar24 + 0x50,0);
        fVar42 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar42 = 1.0;
        }
        uVar58 = 0;
        fStack0000000000000124 = 0.0;
        if ((unaff_w23 & in_w9 == 0x2026) == 0) {
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          uVar58 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
        }
        lVar24 = unaff_x19[0xc9];
        if (lVar24 == 0) goto LAB_0354fbf4;
        _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar58);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_0354fbf4;
        fVar54 = *(float *)((long)unaff_x19 + 0x404);
        fVar43 = *(float *)(lVar24 + 0x2c);
        fVar59 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar49 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar52 = *(float *)((long)unaff_x19 + 0x404);
        fVar44 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        param_1 = unaff_x19[0x6d];
        if ((param_1 == 0) || (lVar24 = *(long *)(param_1 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar24 + 0x2c) = 0;
        fVar42 = ((in_stack_00000150 * fVar41) / (float)iVar11) * fVar55 * fVar42;
        fVar59 = fVar42 * fVar54 * fVar43 * fVar59;
        unaff_d11 = (ulong)(uint)fVar59;
        *(float *)(lVar24 + 0x160) = fVar59;
        uVar10 = *(uint *)(unaff_x19 + 0x24);
        unaff_s14 = fVar42 * fVar49 * fVar52 * fVar44;
        if (uVar10 == 0) {
          in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
          goto LAB_03549e30;
        }
        lVar24 = unaff_x19[0xe1];
        if (lVar24 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= uVar10)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = *(long *)(lVar24 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_0354fbf4;
        in_stack_00000168._4_4_ = *(float *)(lVar24 + 0x54);
        goto LAB_03549e30;
      }
      goto LAB_03549564;
    }
    if (iVar13 != 1) {
      param_1 = *unaff_x22;
      unaff_s14 = 0.0;
      unaff_d13 = 0;
      if (in_w9 != 3 && in_w9 != 0xad) {
        unaff_d13 = unaff_d11;
      }
      if (param_1 == 0) goto LAB_0354fbf4;
      _fStack0000000000000120 = 0;
      goto code_r0x03549e4c;
    }
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_000000b8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
         *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
    if ((unaff_x19[0xd3] == 0) ||
       (lVar24 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar24 == 0))
    goto LAB_0354fbf4;
    FUN_02215a88(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar24 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  } while (lVar24 == 0);
  if (in_w9 == 0x3c) {
    in_w9 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
  }
  else {
    lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar28 = *(long *)puVar8;
    }
    *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
  }
  if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
  fVar41 = *(float *)(unaff_x19 + 0x3d);
  memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
  iVar11 = FUN_03776950(&stack0x00001730,0);
  if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
  memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
  fVar55 = (float)FUN_03776960(&stack0x00001730,0);
  fVar42 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar42 = 1.0;
  }
  if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
  fVar42 = (fVar41 / (float)iVar11) * fVar55 * fVar42;
  iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
  fVar41 = *(float *)(unaff_x19 + 0x3d);
  if (iVar11 < 1) {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar59 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    fVar55 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar55 = 1.0;
    }
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    fVar54 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
    if (*(long *)(lVar24 + 0x20) == 0) goto LAB_0354fbf4;
    FUN_03776e6c(&stack0x000008b0,*(long *)(lVar24 + 0x20),0);
    fVar43 = (float)FUN_03776c9c(&stack0x00001710,0);
    if (*(long *)(lVar24 + 0x20) == 0) goto LAB_0354fbf4;
    fVar44 = *(float *)(lVar24 + 0x2c);
    fVar49 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar52 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar56 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar51 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    unaff_s14 = fVar42 * fVar56 * fVar51 * fVar45;
    fVar55 = (fVar41 / (float)iVar11) * fVar59 * fVar55;
    fVar42 = fVar55 * (fVar54 / fVar43) * fVar44 * fVar49;
    fVar55 = fVar55 / fVar42;
    fVar52 = fVar55 * fVar52;
    fVar41 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
    fVar55 = fVar55 * fVar41;
  }
  else {
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar55 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (*(long *)(lVar24 + 0x20) == 0) goto LAB_0354fbf4;
    fVar54 = *(float *)(lVar24 + 0x2c);
    fVar59 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar59 = 1.0;
    }
    fVar43 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    fVar52 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar49 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar56 = *(float *)((long)unaff_x19 + 0x404);
    fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    unaff_s14 = fVar42 * fVar49 * fVar56 * fVar44;
    fVar42 = (fVar41 / (float)iVar11) * fVar55 * fVar59 * fVar54 * fVar43;
    fVar55 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
  }
  unaff_d11 = (ulong)(uint)fVar42;
  *_iStack00000000000000d8 = lVar24;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8,lVar24);
  if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x2c) = 1;
  *(float *)(lVar24 + 0x160) = fVar42;
  *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  param_1 = *unaff_x22;
  if ((param_1 == 0) || (lVar24 = *(long *)(param_1 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  _fStack0000000000000120 = CONCAT44(fVar52,fVar55);
  in_stack_00000168._4_4_ = 0.0;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
  *(int *)(unaff_x19 + 0x24) = (int)lVar27;
LAB_03549e30:
  unaff_d13 = 0;
  in_stack_000017ec = in_w9;
  if (in_w9 != 3 && in_w9 != 0xad) {
    unaff_d13 = unaff_d11;
  }
  goto code_r0x03549e4c;
LAB_0354d7c0:
  uVar10 = uVar23 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x50), lVar28 == 0)) goto LAB_0354fbf4;
  lVar40 = (long)(int)uVar10;
  lVar16 = lVar24 + lVar40 * 0x178;
  uVar12 = *(uint *)(lVar16 + 100);
  if (*(uint *)(lVar28 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = *(long *)(lVar16 + 0x38);
  lVar38 = (long)(int)uVar12;
  lVar28 = lVar28 + lVar38 * 0x5c;
  uVar31 = *(uint *)(lVar28 + 0x68);
  uVar32 = (uint)*(ushort *)(lVar16 + 0x20);
  uVar34 = *(uint *)(lVar28 + 0x3c);
  iVar2 = *(int *)(lVar28 + 0x20);
  iVar13 = *(int *)(lVar28 + 0x28);
  iVar14 = *(int *)(lVar28 + 0x2c);
  fVar43 = *(float *)(lVar28 + 0x4c);
  uVar4 = *(uint *)(lVar28 + 0x40);
  fVar44 = *(float *)(lVar28 + 0x54);
  fVar59 = *(float *)(lVar28 + 0x58);
  fVar56 = *(float *)(lVar28 + 0x5c);
  fVar45 = *(float *)(lVar28 + 0x60);
  fVar52 = *(float *)(lVar28 + 0x6c);
  fVar51 = *(float *)(lVar28 + 0x70);
  fVar54 = *(float *)(lVar28 + 0x74);
  fVar49 = *(float *)(lVar28 + 0x78);
  if ((int)uVar31 < 9) {
    switch(uVar31) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar45 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar59;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar45 + fVar56 * 0.5) - fVar59 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar56 + fVar45) - fVar59;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar56 + fVar45;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar31 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar32 < 0xad) {
      if ((uVar32 != 3) && (uVar32 != 10)) {
FUN_0354d8fc:
        if (*(uint *)(lVar24 + 0x18) <= uVar34)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar24 + (long)(int)uVar34 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b8cc4(uVar3,0);
        if ((uVar17 & 1) == 0) {
          bVar1 = (int)uVar12 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar59 <= fVar56) && (!bVar1 && uVar31 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar45;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar56 + fVar45;
          }
          goto LAB_0354d9d8;
        }
        if (((uVar23 == 1) || (uVar12 != uVar26)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar45;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar56 + fVar45;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar32,0);
          uStack00000000000000f0 = 0;
        }
        else {
          cVar22 = (char)unaff_x19[0x1e];
          fVar45 = -fVar59;
          if (cVar22 != '\0') {
            fVar45 = fVar59;
          }
          if (*(uint *)(lVar24 + 0x18) <= uVar34)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar14 = (int)*(char *)(lVar24 + (long)(int)uVar34 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000030 & 1)) + iVar14 + -1;
          if (iVar14 < 1) {
            fVar59 = 1.0;
            iVar14 = 1;
          }
          else {
            fVar59 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar32 == 9) {
LAB_0354f76c:
            fVar59 = 1.0 - fVar59;
          }
          else {
            if (uVar32 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar17 = FUN_026b97f8(uVar32,0);
              cVar22 = (char)unaff_x19[0x1e];
              if ((uVar17 & 1) != 0) goto LAB_0354f76c;
            }
            iVar14 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar13;
          }
          fVar59 = ((fVar56 + fVar45) * fVar59) / (float)iVar14;
          if (cVar22 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar59;
            uStack00000000000000f0 =
                 CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                          (float)uStack00000000000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar59;
          }
        }
      }
    }
    else if (((uVar32 != 0xad) && (uVar32 != 0x200b)) && (uVar32 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar31 == 0x20) {
    fVar59 = fVar52 + fVar54;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar31 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar24 + lVar40 * 0x178;
  fVar45 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar59 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar56 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar28 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar13 = *(int *)(lVar24 + lVar40 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0354e05c;
  fVar55 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar12,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar16 = lVar24 + lVar40 * 0x178;
    *(undefined4 *)(lVar16 + 0x84) = 0;
    *(undefined4 *)(lVar16 + 0xac) = 0;
    *(undefined4 *)(lVar16 + 0xd4) = 0x3f800000;
    fVar55 = 1.0;
    break;
  case 1:
    fVar49 = *(float *)(lVar24 + lVar40 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar16 = lVar24 + lVar40 * 0x178;
      fVar54 = (in_stack_000000f8._4_4_ + fVar49) - *(float *)(in_stack_00000078 + 0x230);
      fVar49 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar16 = lVar24 + lVar40 * 0x178;
    fVar54 = fVar54 - fVar52;
    *(float *)(lVar16 + 0x84) = fVar55 + (fVar49 - fVar52) / fVar54;
    *(float *)(lVar16 + 0xac) = fVar55 + (*(float *)(lVar16 + 0x98) - fVar52) / fVar54;
    *(float *)(lVar16 + 0xd4) = fVar55 + (*(float *)(lVar16 + 0xc0) - fVar52) / fVar54;
    fVar55 = fVar55 + (*(float *)(lVar16 + 0xe8) - fVar52) / fVar54;
    break;
  case 2:
    lVar16 = lVar24 + lVar40 * 0x178;
    fVar49 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar54 = (in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar16 + 0x84) = fVar55 + fVar54 / fVar49;
    *(float *)(lVar16 + 0xac) =
         fVar55 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar16 + 0xd4) =
         fVar55 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar55 = fVar55 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar16 = lVar24 + lVar40 * 0x178;
      *(undefined4 *)(lVar16 + 0x88) = 0;
      *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xd8) = 0;
      *(undefined4 *)(lVar16 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar16 = lVar24 + lVar40 * 0x178;
      fVar49 = fVar49 - fVar51;
      fVar54 = fVar55 + (*(float *)(lVar16 + 0x74) - fVar51) / fVar49;
      fVar49 = fVar55 + (*(float *)(lVar16 + 0x9c) - fVar51) / fVar49;
      *(float *)(lVar16 + 0x88) = fVar54;
      *(float *)(lVar16 + 0xb0) = fVar49;
      *(float *)(lVar16 + 0xd8) = fVar54;
      *(float *)(lVar16 + 0x100) = fVar49;
      break;
    case 2:
      lVar16 = lVar24 + lVar40 * 0x178;
      fVar54 = fVar55 + (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar16 + 0x88) = fVar54;
      fVar49 = *(float *)(unaff_x19 + 0x9c);
      fVar52 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar16 + 0xd8) = fVar54;
      fVar54 = fVar55 + (*(float *)(lVar16 + 0x9c) - fVar49) / (fVar52 - fVar49);
      *(float *)(lVar16 + 0xb0) = fVar54;
      *(float *)(lVar16 + 0x100) = fVar54;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar31 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar24 + lVar40 * 0x178;
    fVar54 = *(float *)(lVar16 + 0x15c);
    fVar49 = (1.0 - (*(float *)(lVar16 + 0x88) + *(float *)(lVar16 + 0xb0)) * fVar54) * 0.5;
    fVar52 = fVar55 + *(float *)(lVar16 + 0x88) * fVar54 + fVar49;
    fVar55 = fVar55 + fVar49 + *(float *)(lVar16 + 0xb0) * fVar54;
    *(float *)(lVar16 + 0x84) = fVar52;
    *(float *)(lVar16 + 0xac) = fVar52;
    *(float *)(lVar16 + 0xd4) = fVar55;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar24 + lVar40 * 0x178 + 0xfc) = fVar55;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar24 + lVar40 * 0x178;
    *(undefined4 *)(lVar16 + 0x88) = 0;
    *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar31) {
      lVar16 = lVar24 + lVar40 * 0x178;
      fVar43 = fVar43 - fVar44;
      fVar55 = (*(float *)(lVar16 + 0x74) - fVar44) / fVar43;
      fVar43 = (*(float *)(lVar16 + 0x9c) - fVar44) / fVar43;
      *(float *)(lVar16 + 0x88) = fVar55;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar24 + lVar40 * 0x178;
    fVar55 = (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar16 + 0x88) = fVar55;
    fVar43 = (*(float *)(lVar16 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar16 + 0xb0) = fVar43;
    *(float *)(lVar16 + 0xd8) = fVar43;
    *(float *)(lVar16 + 0x100) = fVar55;
    break;
  case 3:
    if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar24 + lVar40 * 0x178;
    fVar43 = *(float *)(lVar16 + 0x15c);
    fVar54 = (1.0 - (*(float *)(lVar16 + 0x84) + *(float *)(lVar16 + 0xd4)) / fVar43) * 0.5;
    fVar55 = *(float *)(lVar16 + 0x84) / fVar43 + fVar54;
    fVar54 = fVar54 + *(float *)(lVar16 + 0xd4) / fVar43;
    *(float *)(lVar16 + 0x88) = fVar55;
    *(float *)(lVar16 + 0xb0) = fVar54;
    *(float *)(lVar16 + 0x100) = fVar55;
    *(float *)(lVar16 + 0xd8) = fVar54;
  }
  if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar24 + lVar40 * 0x178;
  fVar55 = ABS(fVar41) * *(float *)(lVar16 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar16 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar40 * 0x178 + 400) & 1) != 0)) {
    fVar55 = -fVar55;
  }
  lVar16 = lVar24 + lVar40 * 0x178;
  fVar43 = *(float *)(lVar16 + 0x88);
  fVar49 = *(float *)(lVar16 + 0x84);
  fVar54 = -2.1474836e+09;
  if (fVar49 != INFINITY) {
    fVar54 = (float)(int)fVar49;
  }
  fVar52 = *(float *)(lVar16 + 0xd4);
  fVar51 = *(float *)(lVar16 + 0xd8);
  fVar44 = -2.1474836e+09;
  if (fVar43 != INFINITY) {
    fVar44 = (float)(int)fVar43;
  }
  uVar47 = FUN_03591d3c(fVar49 - fVar54,fVar43 - fVar44);
  *(undefined4 *)(lVar16 + 0x84) = uVar47;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar51 = fVar51 - fVar44;
  *(float *)(lVar16 + 0x88) = fVar55;
  uVar47 = FUN_03591d3c(fVar49 - fVar54,fVar51);
  *(undefined4 *)(lVar24 + lVar40 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar52 = fVar52 - fVar54;
  *(float *)(lVar24 + lVar40 * 0x178 + 0xb0) = fVar55;
  fVar54 = (float)FUN_03591d3c(fVar52,fVar51);
  *(float *)(lVar16 + 0xd4) = fVar54;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar16 + 0xd8) = fVar55;
  uVar47 = FUN_03591d3c(fVar52,fVar43 - fVar44);
  *(undefined4 *)(lVar24 + lVar40 * 0x178 + 0xfc) = uVar47;
  uVar31 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar24 + lVar40 * 0x178 + 0x100) = fVar55;
LAB_0354e05c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar12 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar28 = lVar24 + lVar40 * 0x178;
      *(ulong *)(lVar28 + 0x70) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar28 + 0x70));
      *(float *)(lVar28 + 0x78) = fVar56 + *(float *)(lVar28 + 0x78);
      *(ulong *)(lVar28 + 0x98) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar28 + 0x98));
      *(float *)(lVar28 + 0xa0) = fVar56 + *(float *)(lVar28 + 0xa0);
      *(ulong *)(lVar28 + 0xc0) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar28 + 0xc0));
      *(float *)(lVar28 + 200) = fVar56 + *(float *)(lVar28 + 200);
      *(ulong *)(lVar28 + 0xe8) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar28 + 0xe8));
      *(float *)(lVar28 + 0xf0) = fVar56 + *(float *)(lVar28 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar12 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar31) {
        if (*(uint *)(lVar24 + lVar40 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar31 = *(uint *)(lVar24 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar16 = lVar24 + lVar40 * 0x178;
  *(undefined8 *)(lVar16 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar16 + 0x78) = uVar47;
  if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar16 = lVar24 + lVar40 * 0x178;
  *(undefined8 *)(lVar16 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar16 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar16 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar16 + 0xf0) = uVar47;
  *(undefined1 *)(lVar28 + 0x194) = 0;
LAB_0354e184:
  if (iVar13 == 0) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar30)();
  }
  else if (iVar13 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar40 * 0x178;
  uVar18 = *(undefined8 *)(lVar28 + 0x11c);
  *(undefined8 *)(lVar28 + 0x11c) =
       CONCAT44(fVar59 + (float)((ulong)uVar18 >> 0x20),fVar45 + (float)uVar18);
  *(float *)(lVar28 + 0x124) = fVar56 + *(float *)(lVar28 + 0x124);
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar40 * 0x178;
  *(ulong *)(lVar28 + 0x110) =
       CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar28 + 0x110) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar28 + 0x110));
  *(float *)(lVar28 + 0x118) = fVar56 + *(float *)(lVar28 + 0x118);
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar40 * 0x178;
  *(ulong *)(lVar28 + 0x128) =
       CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar28 + 0x128) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar28 + 0x128));
  *(float *)(lVar28 + 0x130) = fVar56 + *(float *)(lVar28 + 0x130);
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar40 * 0x178;
  *(float *)(lVar28 + 0x134) = fVar45 + *(float *)(lVar28 + 0x134);
  *(ulong *)(lVar28 + 0x138) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar28 + 0x138) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar28 + 0x138));
  lVar28 = *unaff_x22;
  if ((lVar28 == 0) || (lVar16 = *(long *)(lVar28 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  uVar31 = *(uint *)(lVar16 + 0x18);
  if (uVar31 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar16 + lVar40 * 0x178;
  *(float *)(lVar36 + 0x150) = fVar59 + *(float *)(lVar36 + 0x150);
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar36 + 0x140));
  *(ulong *)(lVar36 + 0x148) =
       CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar36 + 0x148));
  if (uVar12 == uVar26) {
    uVar26 = *unaff_x20 - 1;
    if (uVar10 == uVar26) goto LAB_0354e3ec;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar28 + 0x18) <= uVar26)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar36 = (long)(int)uVar26;
    lVar37 = lVar28 + lVar36 * 0x5c;
    fVar54 = fVar59 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar54;
    *(float *)(lVar37 + 0x58) = fVar45 + *(float *)(lVar37 + 0x58);
    if (uVar31 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar47 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar28 = lVar28 + lVar36 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar54;
    *(undefined4 *)(lVar28 + 0x6c) = uVar47;
    lVar28 = *unaff_x22;
    if ((lVar28 == 0) || (lVar16 = *(long *)(lVar28 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar26)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_0354fbf4;
    uVar26 = *(uint *)(lVar16 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar28 + 0x18) <= uVar26)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar16 + lVar36 * 0x5c;
    *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar26 * 0x178 + 0x128);
    *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    uVar26 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar10 == uVar26) {
      lVar28 = *unaff_x22;
      if ((lVar28 == 0) || (lVar16 = *(long *)(lVar28 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar16 + lVar38 * 0x5c;
      fVar54 = fVar59 + *(float *)(lVar36 + 0x54);
      *(ulong *)(lVar36 + 0x4c) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar36 + 0x4c));
      *(float *)(lVar36 + 0x54) = fVar54;
      *(float *)(lVar36 + 0x58) = fVar45 + *(float *)(lVar36 + 0x58);
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar36 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar16 = lVar16 + lVar38 * 0x5c;
      *(float *)(lVar16 + 0x70) = fVar54;
      *(undefined4 *)(lVar16 + 0x6c) = uVar47;
      lVar28 = *unaff_x22;
      if ((lVar28 == 0) || (lVar16 = *(long *)(lVar28 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      uVar26 = *(uint *)(lVar16 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar28 + 0x18) <= uVar26)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar38 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar26 * 0x178 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_026b82c4(uVar32,0);
  if (((((uVar17 & 1) == 0) && (1 < uVar32 - 0x2010)) && (uVar32 != 0xad)) && (uVar32 != 0x2d)) {
    if (bVar5) {
      if (((uVar23 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar32 == 0x2019 || (uVar32 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar23 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar24 + lVar27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b82c4(uVar3,0);
        if ((uVar17 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar23)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(lVar24 + lVar27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b82c4(uVar3,0);
          if ((uVar17 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar23 != 1) {
LAB_0354f144:
        bVar5 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b81f8(uVar32,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b63d8(uVar32,0);
        if (((uVar32 != 0x200b) && ((uVar17 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b82c4(uVar32,0);
      iVar13 = (int)fStack0000000000000124;
      if ((uVar17 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar13 = uVar23 - 2;
    }
    lVar28 = *unaff_x22;
    if (lVar28 == 0) goto LAB_0354fbf4;
    lVar16 = *(long *)(lVar28 + 0x40);
    if (lVar16 == 0) goto LAB_0354fbf4;
    uVar26 = *(uint *)(lVar28 + 0x24);
    iVar14 = *(int *)(lVar16 + 0x18);
    if (iVar14 < (int)(uVar26 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar28 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar28 = *unaff_x22;
      if (lVar28 == 0) goto LAB_0354fbf4;
    }
    lVar28 = *(long *)(lVar28 + 0x40);
    if (lVar28 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar28 + 0x18) <= uVar26)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar28 = lVar28 + (long)(int)uVar26 * 0x18;
    *(long **)(lVar28 + 0x20) = unaff_x19;
    *(float *)(lVar28 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar28 + 0x2c) = iVar13;
    *(int *)(lVar28 + 0x30) = (iVar13 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar28 = unaff_x19[0x6d];
    if (lVar28 == 0) goto LAB_0354fbf4;
    lVar16 = *(long *)(lVar28 + 0x50);
    *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
    if (lVar16 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar16 + lVar38 * 0x5c;
    bVar5 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      in_stack_00000168._4_4_ = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar28 = *unaff_x22;
      if (lVar28 == 0) goto LAB_0354fbf4;
      lVar16 = *(long *)(lVar28 + 0x40);
      if (lVar16 == 0) goto LAB_0354fbf4;
      uVar26 = *(uint *)(lVar28 + 0x24);
      iVar13 = *(int *)(lVar16 + 0x18);
      if (iVar13 < (int)(uVar26 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar28 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar28 = *unaff_x22;
        if (lVar28 == 0) goto LAB_0354fbf4;
      }
      lVar28 = *(long *)(lVar28 + 0x40);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar26)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + (long)(int)uVar26 * 0x18;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      *(float *)(lVar28 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar28 + 0x2c) = uVar10;
      *(uint *)(lVar28 + 0x30) = uVar23 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar28 = unaff_x19[0x6d];
      if (lVar28 == 0) goto LAB_0354fbf4;
      lVar16 = *(long *)(lVar28 + 0x50);
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar38 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
    }
LAB_0354e610:
    bVar5 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  uVar26 = *(uint *)(lVar28 + 0x18);
  if (uVar26 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar28 + lVar40 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0354e660:
      if (uVar26 <= uVar23 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *unaff_x19;
      uVar47 = *(undefined4 *)(lVar28 + lVar27 + -0x330);
      uVar48 = *(undefined4 *)(lVar28 + lVar27 + -0x2f8);
LAB_0354ebc0:
      pcVar30 = *(code **)(lVar16 + 0x8d8);
LAB_0354ebc8:
      (*pcVar30)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar47,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar48);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar28 = *(long *)puVar8;
      }
LAB_0354ec1c:
      fVar42 = 0.0;
      bVar9 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar9 = false;
    }
  }
  else {
    lVar28 = lVar28 + lVar40 * 0x178;
    iVar13 = *(int *)(lVar28 + 0x68);
    *(int *)(lVar28 + 0x16c) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_026b63d8(uVar32,0);
    if ((uVar32 != 0x200b) && ((uVar17 & 1) == 0)) {
      lVar28 = *unaff_x22;
      if ((lVar28 == 0) || (lVar16 = *(long *)(lVar28 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar54 = *(float *)(lVar16 + lVar40 * 0x178 + 0x160);
      if (fVar42 <= fVar54) {
        fVar42 = fVar54;
      }
      if (fStack0000000000000100 <= ABS(fVar55)) {
        fStack0000000000000100 = ABS(fVar55);
      }
      if ((float)iVar13 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *unaff_x22;
          if (lVar28 == 0) goto LAB_0354fbf4;
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar16 + 0x15a8);
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar43 = *(float *)(lVar28 + lVar40 * 0x178 + 0x14c);
      fVar54 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar43 = fVar43 + fVar42 * fVar54;
      fStack000000000000005c = (float)iVar13;
      if (fVar43 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar43;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar32 == 0xd) || ((uVar32 & 0xfffe) == 10)) || ((int)uVar4 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar10 == uVar4) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar32,0);
        if ((uVar17 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar40 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar28 + 0x160);
      fStack0000000000000070 = *(float *)(lVar28 + 0x11c);
      bVar9 = fVar42 != 0.0;
      fVar54 = in_stack_00000080._4_4_;
      if (bVar9) {
        fVar54 = fVar42;
      }
      fVar42 = fVar54;
      uVar58 = *(undefined4 *)(lVar28 + 0x168);
      _bStack000000000000006c = 0;
      fVar54 = fVar55;
      if (bVar9) {
        fVar54 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar54;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        if (uVar10 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar40 * 0x178;
          lVar16 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar28 + 0x128);
          uVar48 = *(undefined4 *)(lVar28 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar10 == uVar34) || ((int)uVar4 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar32,0);
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        lVar16 = lVar40;
        uVar26 = uVar10;
        if (uVar32 == 0x200b || (uVar17 & 1) != 0) {
          lVar16 = (long)(int)uVar4;
          uVar26 = uVar4;
        }
        if (uVar26 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar16 * 0x178;
          uVar47 = *(undefined4 *)(lVar28 + 0x128);
          uVar48 = *(undefined4 *)(lVar28 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        uVar26 = *(uint *)(lVar28 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar17 = FUN_03567ad8(uVar58,*(undefined4 *)(lVar28 + lVar27),0);
      if ((uVar17 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
          if (uVar10 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar40 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar28 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar28 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)puVar8;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar9 = true;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar35 == 0) goto LAB_0354fbf4;
  uVar26 = *(uint *)(lVar28 + lVar40 * 0x178 + 400);
  fVar54 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar26 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar23 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar28 + lVar27 + -0x330);
      fVar59 = *(float *)(lVar28 + lVar27 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar30)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar47,
                 fStack00000000000000a8 * fVar54 + fVar59,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar6 = false;
  }
  else {
    lVar28 = *unaff_x22;
    if ((lVar28 == 0) || (lVar16 = *(long *)(lVar28 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar16 + lVar40 * 0x178 + 0x174) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar16 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar32 == 0xd) || ((uVar32 & 0xfffe) == 10)) || ((int)uVar4 < (int)uVar10)) ||
       (bVar6 || !bVar1)) {
LAB_0354ed84:
      if (!bVar6) goto LAB_0354f250;
    }
    else {
      if (uVar10 == uVar4) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar32,0);
        if ((uVar17 & 1) != 0) goto LAB_0354ed84;
        lVar28 = *unaff_x22;
        if (lVar28 == 0) goto LAB_0354fbf4;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar40 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar28 + 0x60);
      fStack0000000000000040 = *(float *)(lVar28 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar28 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar28 + 0x160);
      fStack000000000000009c = fVar54 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar26 = *unaff_x20;
    if (uVar26 == 1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        uVar26 = *(uint *)(lVar28 + 0x18);
LAB_0354ef0c:
        if (uVar10 < uVar26) {
          lVar28 = lVar28 + lVar40 * 0x178;
          lVar16 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar28 + 0x128);
          fVar59 = *(float *)(lVar28 + 0x14c);
LAB_0354ef24:
          pcVar30 = *(code **)(lVar16 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar10 == uVar34) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar32,0);
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        uVar26 = *(uint *)(lVar28 + 0x18);
        if (uVar32 == 0x200b || (uVar17 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar16 = lVar40;
        if (uVar10 < uVar26) {
LAB_0354f1f8:
          lVar28 = lVar28 + lVar16 * 0x178;
          fVar59 = *(float *)(lVar28 + 0x14c);
          uVar47 = *(undefined4 *)(lVar28 + 0x128);
          pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)uVar26) {
      lVar28 = *unaff_x22;
      if ((lVar28 != 0) && (lVar16 = *(long *)(lVar28 + 0x38), lVar16 != 0)) {
        if (uVar23 < *(uint *)(lVar16 + 0x18)) {
          if (*(float *)(lVar16 + lVar27 + -0x108) == in_stack_00000048._4_4_) {
            fVar43 = *(float *)(lVar16 + lVar27 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_03567bac(fVar59 + fVar43,fStack0000000000000040,0);
            if ((uVar17 & 1) != 0) {
              uVar26 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar28 = *unaff_x22;
            if (lVar28 == 0) goto LAB_0354fbf4;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            uVar26 = *(uint *)(lVar28 + 0x18);
            if ((int)uVar10 <= (int)uVar4) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar16 = (long)(int)uVar4;
            if (uVar4 < uVar26) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar10 < (int)uVar26) {
      iVar13 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = *(long *)(lVar24 + lVar27 + -0x130);
      if (lVar28 == 0) goto LAB_0354fbf4;
      iVar14 = FUN_036d3364(lVar28,0);
      if (iVar13 != iVar14) {
        if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
          uVar26 = *(uint *)(lVar28 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        if (uVar23 - 2 < *(uint *)(lVar28 + 0x18)) {
          lVar16 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar28 + lVar27 + -0x330);
          fVar59 = *(float *)(lVar28 + lVar27 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar6 = true;
  }
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  uVar26 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar26 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar28 + lVar40 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar28 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar7) {
LAB_0354f400:
      if (uVar26 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar40 * 0x178;
      fVar54 = *(float *)(lVar28 + 0x128);
      fVar44 = *(float *)(lVar28 + 0x188);
      uVar15 = *(undefined8 *)(lVar28 + 0x17c);
      fVar56 = *(float *)(lVar28 + 0x184);
      uVar18 = *(undefined8 *)(lVar28 + 0x184);
      fVar52 = *(float *)(lVar28 + 0x18c);
      fVar59 = *(float *)(lVar28 + 0x11c);
      fVar43 = *(float *)(lVar28 + 0x148);
      fVar49 = *(float *)(lVar28 + 0x150);
      in_stack_00000188 = uVar15;
      fStack0000000000000190 = fVar56;
      fStack0000000000000194 = fVar44;
      in_stack_00000198 = fVar52;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar17 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar28 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar17 & 1) == 0) {
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar28);
        }
        fVar54 = fVar54 + (float)in_stack_000017c8;
        fVar59 = fVar59 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar43 = fVar43 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar59 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar59;
        }
        if (fVar49 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar49 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar54) {
          fStack00000000000000d0 = fVar54;
        }
        if (fStack00000000000000d4 <= fVar43) {
          fStack00000000000000d4 = fVar43;
        }
      }
      else {
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar28);
        }
        fVar59 = (fVar59 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar49 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar49;
        }
        if (fStack00000000000000d4 <= fVar43) {
          fStack00000000000000d4 = fVar43;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar59,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar49 - fVar52;
        fStack00000000000000d0 = fVar54 + fVar56;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar43 + fVar44;
        fStack00000000000000e0 = fVar59;
        in_stack_000017c0 = uVar15;
        in_stack_000017c8 = uVar18;
        in_stack_000017d0 = fVar52;
      }
      if (((*unaff_x20 == 1) || (uVar10 == uVar34)) || (((int)uVar4 <= (int)uVar10 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar7 = true;
    }
    else {
      if ((((uVar32 != 0xd) && ((uVar32 & 0xfffe) != 10)) && ((int)uVar10 <= (int)uVar4)) && (bVar1)
         ) {
        if (uVar10 == uVar4) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar32,0);
          if ((uVar17 & 1) != 0) goto LAB_0354f374;
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar8;
        }
        if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
          uVar26 = (uint)*(undefined8 *)(lVar28 + 0x18);
          if (uVar10 < uVar26) {
            lVar16 = *(long *)(lVar16 + 0xb8);
            lVar35 = lVar28 + lVar40 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar35 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar35 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar16 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar16 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar35 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar16 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar16 + 0x15a4);
            uStack00000000000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar7 = false;
    }
  }
  uVar10 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar27 = lVar27 + 0x178;
  bVar1 = (int)uVar10 <= (int)uVar23;
  uVar26 = uVar12;
  uVar23 = uVar23 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar24 = *unaff_x22;
  if (lVar24 != 0) {
    iVar11 = uVar12 + 1;
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar24 + 0x18) = uVar10;
    lVar27 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar11;
    if ((int)uVar10 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar27;
    *(int *)(lVar24 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar24 = unaff_x19[0xdb];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*unaff_x22,*(undefined8 *)(lVar24 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x60), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar24 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar24 = *unaff_x22;
                        if (lVar24 != 0) {
                          lVar28 = 0;
                          lVar27 = 0;
                          do {
                            uVar17 = lVar27 + 1;
                            if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar17) goto LAB_0354d0cc;
                            lVar24 = *(long *)(lVar24 + 0x60);
                            if (lVar24 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar24 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar24 + lVar28 + 0x70,0);
                            lVar24 = unaff_x19[0xe1];
                            if (lVar24 == 0) break;
                            if (*(uint *)(lVar24 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar18 = *(undefined8 *)(lVar24 + lVar27 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar20 = FUN_036d35a8(uVar18,0,0);
                            if ((uVar20 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar24 = *(long *)(*unaff_x22 + 0x60), lVar24 == 0)) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar24 + 0x18) <= uVar17)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar24 + lVar28 + 0x70,1,0);
                              }
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a460c(lVar24,*(undefined8 *)(lVar16 + lVar28 + 0x80),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a4810(lVar24,*(undefined8 *)(lVar16 + lVar28 + 0x98),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a48bc(lVar24,*(undefined8 *)(lVar16 + lVar28 + 0xa0),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a4e24(lVar24,*(undefined8 *)(lVar16 + lVar28 + 0xa8),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                              if ((lVar24 == 0) || (lVar24 = FUN_0359d5ac(lVar24,0), lVar24 == 0))
                              break;
                              FUN_036aa280(lVar24,0);
                            }
                            lVar24 = *unaff_x22;
                            lVar27 = lVar27 + 1;
                            lVar28 = lVar28 + 0x50;
                          } while (lVar24 != 0);
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
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


