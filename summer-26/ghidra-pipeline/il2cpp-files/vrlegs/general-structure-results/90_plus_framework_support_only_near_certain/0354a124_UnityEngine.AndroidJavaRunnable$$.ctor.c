/*
FUNCTION_NAME: UnityEngine.AndroidJavaRunnable$$.ctor
ENTRY_POINT: 0354a124
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


void UnityEngine_AndroidJavaRunnable___ctor(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  undefined1 uVar18;
  char cVar19;
  uint uVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  code *pcVar25;
  uint uVar26;
  float *pfVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  uint unaff_w23;
  int iVar33;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar34;
  uint unaff_w26;
  long lVar35;
  long lVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float unaff_s8;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  ulong unaff_d11;
  uint uVar52;
  ulong unaff_d12;
  float fVar53;
  ulong unaff_d13;
  uint uVar54;
  ulong unaff_d14;
  uint uVar55;
  float fVar56;
  ulong unaff_d15;
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
  float in_stack_00000128;
  float fStack0000000000000134;
  float in_stack_00000138;
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
  uint uVar57;
  uint in_stack_000017ec;
  
code_r0x0354a124:
  if ((((param_1 == 0) || (*in_stack_00000178 == 0)) ||
      (lVar22 = *(long *)(*in_stack_00000178 + 0x128), lVar22 == 0)) ||
     (lVar22 = *(long *)(lVar22 + 0x18), lVar22 == 0)) goto LAB_0354fbf4;
  uVar20 = *(uint *)(param_1 + 0x28) | unaff_w25 << 0x10;
  uVar14 = FUN_0219f8b8(lVar22,&stack0x000008b0,&stack0x00001708,
                        *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
  if ((uVar14 & 1) != 0) {
    if ((in_stack_00001708 == 0) ||
       (unaff_d12 = FUN_03571cb4(unaff_d12,unaff_d15,in_stack_00000128,unaff_d14,
                                 *(undefined4 *)(in_stack_00001708 + 0x28),
                                 *(undefined4 *)(in_stack_00001708 + 0x2c),
                                 *(undefined4 *)(in_stack_00001708 + 0x30),
                                 *(undefined4 *)(in_stack_00001708 + 0x34),0),
       in_stack_00001708 == 0)) goto LAB_0354fbf4;
    if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
      in_stack_00000138 = 0.0;
    }
  }
LAB_0354a1c4:
  *(float *)((long)unaff_x19 + 0x2fc) = in_stack_00000128;
  uVar15 = in_stack_000017d8;
LAB_0354a1d0:
  fVar46 = (float)unaff_d13;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar47 = *(float *)(unaff_x19 + 200);
    fVar39 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar47 = fVar47 - fVar46 * fVar39 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar47;
    if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar47 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar47 = *(float *)(unaff_x19 + 0x56);
  fVar39 = 0.0;
  if (fVar47 != 0.0) {
    fVar39 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar40 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar39 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar47 * 0.5 - fVar46 * (fVar39 * 0.5 + fVar40));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar39;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar22 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036cee6c(lVar22,0,0);
    fVar40 = 0.0;
    if ((uVar14 & 1) != 0) {
      lVar22 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar34 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar14 = FUN_03699d3c(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar40 = 0.0;
      if ((uVar14 & 1) != 0) {
        lVar22 = *in_stack_00000170;
        if (*(int *)(*plVar34 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar34 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar22 == 0) goto LAB_0354fbf4;
        fVar47 = (float)FUN_0369e060(lVar22,*(undefined4 *)(*(long *)(*plVar34 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar50 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar40 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar40 = fVar40 * fVar47 * fVar50 * 0.25;
        if (fVar47 < in_stack_00000168._4_4_ + fVar40) {
          in_stack_00000168._4_4_ = fVar47 - fVar40;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar22 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036cee6c(lVar22,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar14 & 1) != 0) {
      lVar22 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar34 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar14 = FUN_03699d3c(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar14 & 1) != 0) {
        lVar22 = *in_stack_00000170;
        if (*(int *)(*plVar34 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar34 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar22 == 0) goto LAB_0354fbf4;
        uVar14 = FUN_03699d3c(lVar22,*(undefined4 *)(*(long *)(*plVar34 + 0xb8) + 0xcc),0);
        if ((uVar14 & 1) != 0) {
          lVar22 = *in_stack_00000170;
          if (*(int *)(*plVar34 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar34 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar22 != 0) {
            fVar47 = (float)FUN_0369e060(lVar22,*(undefined4 *)(*(long *)(*plVar34 + 0xb8) + 0x54),0
                                        );
            if ((*in_stack_00000178 != 0) && (*in_stack_00000170 != 0)) {
              fVar50 = *(float *)(*in_stack_00000178 + 0x1a8);
              fVar40 = (float)FUN_0369e060(*in_stack_00000170,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
              fVar40 = fVar40 * fVar47 * fVar50 * 0.25;
              if (fVar47 < in_stack_00000168._4_4_ + fVar40) {
                in_stack_00000168._4_4_ = fVar47 - fVar40;
              }
              goto LAB_0354a568;
            }
          }
          goto LAB_0354fbf4;
        }
      }
    }
    fVar40 = 0.0;
  }
LAB_0354a568:
  fVar47 = *(float *)(unaff_x19 + 200);
  fVar50 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar47 = fVar47 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar46 * ((float)unaff_d12 + ((fVar50 - in_stack_00000168._4_4_) - fVar40));
  fVar50 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar56 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s8 + fVar46 * ((float)unaff_d15 + in_stack_00000168._4_4_ + fVar50)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar50 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar56 - fVar46 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar50);
  fVar50 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar44 = fVar47 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar46 * (fVar40 + fVar40 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar50);
  fStack0000000000000104 = fVar47;
  fVar50 = fVar44;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar41 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar50 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar42 = fVar41 * fVar46 * (fVar40 + in_stack_00000168._4_4_ + fVar50);
    fVar50 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar37 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar56 = fVar56 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar41 = fVar41 * fVar46 * (((fVar50 - fVar37) - in_stack_00000168._4_4_) - fVar40);
    fVar37 = fVar47 + fVar42;
    fVar50 = fVar44 + fVar41;
    fVar49 = (fVar42 - fVar41) * 0.5;
    fVar47 = (fVar47 + fVar41) - fVar49;
    fVar44 = (fVar44 + fVar42) - fVar49;
    fStack0000000000000104 = fVar37 - fVar49;
    fVar50 = fVar50 - fVar49;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar41 = 0.0;
    fVar42 = 0.0;
    fVar48 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar49 = fStack0000000000000134;
    fVar37 = fVar56;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar51 = (fVar44 + fVar47) * 0.5;
    fVar53 = (fStack0000000000000134 + fVar56) * 0.5;
    fVar56 = fVar56 - fVar53;
    fStack0000000000000100 = 0.0;
    fVar37 = fVar56;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar51,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar51 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar49 = fStack0000000000000134 - fVar53;
    fVar41 = 0.0;
    fStack0000000000000134 = fVar49;
    fVar47 = (float)FUN_036bdd2c(fVar47 - fVar51,_fStack0000000000000070,0);
    fVar47 = fVar51 + fVar47;
    fVar41 = fVar41 + 0.0;
    fStack0000000000000134 = fVar53 + fStack0000000000000134;
    fVar48 = 0.0;
    fVar44 = (float)FUN_036bdd2c(fVar44 - fVar51,_fStack0000000000000070,0);
    fVar44 = fVar51 + fVar44;
    fVar56 = fVar53 + fVar56;
    fVar48 = fVar48 + 0.0;
    fVar42 = 0.0;
    fVar50 = (float)FUN_036bdd2c(fVar50 - fVar51,_fStack0000000000000070,0);
    fVar50 = fVar51 + fVar50;
    fVar42 = fVar42 + 0.0;
    fVar49 = fVar53 + fVar49;
    fVar37 = fVar53 + fVar37;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar22 = *(long *)(*unaff_x22 + 0x38);
  uVar14 = unaff_d13 & 0xffffffff;
  if (lVar22 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x11c) = fVar47;
  *(float *)(lVar22 + 0x120) = fStack0000000000000134;
  *(float *)(lVar22 + 0x124) = fVar41;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x114) = fVar37;
  *(float *)(lVar22 + 0x110) = fStack0000000000000104;
  *(float *)(lVar22 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x128) = fVar44;
  *(float *)(lVar22 + 300) = fVar56;
  *(float *)(lVar22 + 0x130) = fVar48;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x134) = fVar50;
  *(float *)(lVar22 + 0x138) = fVar49;
  *(float *)(lVar22 + 0x13c) = fVar42;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  lVar35 = (long)(int)uVar10;
  if (*(uint *)(lVar22 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar22 + lVar35 * unaff_x24;
  *(int *)(lVar23 + 0x140) = (int)unaff_x19[200];
  fVar56 = *(float *)(unaff_x19 + 0x9b);
  uVar17 = (ulong)(uint)fVar56;
  fVar50 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar23 + 0x15c) = (fVar44 - fVar47) / (fVar37 - fStack0000000000000134);
  *(float *)(lVar23 + 0x14c) = (unaff_s8 - fVar56) + fVar50;
  fVar47 = fStack0000000000000124 * fVar46;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar47 = fVar47 / in_stack_00000150;
    fStack0000000000000120 = (fStack0000000000000120 * fVar46) / in_stack_00000150;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar46;
  }
  uVar52 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar10 == uVar52)) {
    fStack0000000000000120 = fVar50 + fStack0000000000000120;
    fVar47 = fVar50 + fVar47;
    fVar37 = fStack0000000000000120;
    fVar44 = fVar47;
    if (fVar50 != 0.0) {
      fVar44 = (fVar47 - fVar50) / *(float *)((long)unaff_x19 + 0x404);
      fVar37 = (fStack0000000000000120 - fVar50) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar44 <= fVar47) {
        fVar44 = fVar47;
      }
      if (fStack0000000000000120 <= fVar37) {
        fVar37 = fStack0000000000000120;
      }
    }
    lVar22 = lVar22 + lVar35 * unaff_x24;
    fVar50 = fVar44;
    if (fVar44 <= *(float *)(unaff_x19 + 0x99)) {
      fVar50 = *(float *)(unaff_x19 + 0x99);
    }
    fVar41 = fVar37;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar37) {
      fVar41 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar41;
    *(float *)(unaff_x19 + 0x99) = fVar50;
    *(float *)(lVar22 + 0x154) = fVar44;
    *(float *)(lVar22 + 0x158) = fVar37;
    *(float *)(lVar22 + 0x148) = fVar47 - fVar56;
    *(float *)(unaff_x19 + 0x98) = fVar47 - fVar56;
    *(float *)(lVar22 + 0x150) = fStack0000000000000120 - fVar56;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar56;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar50;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar44 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      in_stack_00000150 = (fVar46 * fVar44) / in_stack_00000150;
      uVar17 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar50 <= in_stack_00000150) {
        fVar50 = in_stack_00000150;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar50;
    }
    if ((float)uVar17 == 0.0) {
      fVar50 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar47) {
        fVar50 = fVar47;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar50;
    }
  }
  else {
    fVar47 = *(float *)(unaff_x19 + 0x99);
    lVar22 = lVar22 + lVar35 * unaff_x24;
    *(float *)(lVar22 + 0x154) = fVar47;
    fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar47 = fVar47 - fVar56;
    *(float *)(lVar22 + 0x148) = fVar47;
    *(float *)(lVar22 + 0x158) = fVar50;
    *(float *)(unaff_x19 + 0x98) = fVar47;
    fVar50 = fVar50 - fVar56;
    *(float *)(lVar22 + 0x150) = fVar50;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
  }
  lVar22 = *unaff_x22;
  if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  uVar54 = *unaff_x20;
  if (*(uint *)(lVar35 + 0x18) <= uVar54)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar35 + (long)(int)uVar54 * unaff_x24;
  *(undefined1 *)(lVar35 + 0x194) = 0;
  uVar55 = *(uint *)(unaff_x19 + 0x4f);
  iVar33 = (int)unaff_x24;
  uVar57 = in_stack_000017ec;
  if (((in_stack_000017ec == 9) ||
      ((((unaff_w21 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)))) ||
     (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar35 + 0x194) = 1;
    pfVar24 = _fStack00000000000000a0;
    pfVar27 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar27 = (float *)(lVar22 + 0x60);
      pfVar24 = (float *)(lVar22 + 100);
    }
    fVar50 = *pfVar27;
    fVar44 = *pfVar24;
    fVar47 = *(float *)(unaff_x19 + 0x6c);
    fVar56 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar50) - fVar44;
    bVar8 = true;
    if ((fVar47 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar47))) {
      bVar8 = fVar47 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar47;
    }
    fVar47 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar47 = (float)FUN_03776cb4(&stack0x000017a0,0);
      uVar17 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar41 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar37 = (float)unaff_d11;
    if (in_stack_000017ec != 0xad) {
      fVar37 = fVar46;
    }
    fVar48 = (float)uVar17;
    fVar42 = 0.0;
    if ((0.0 < fVar48) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar42 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar54 = *unaff_x20;
    fVar42 = (*(float *)(unaff_x19 + 0x97) - (fVar49 - fVar48)) + fVar42;
    if (fStack00000000000000c4 < fVar42) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar54;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      in_stack_000017d8 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar51 = *(float *)(unaff_x19 + 0x59);
        if (((fVar51 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar48)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar46 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar42) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar46 <= fVar51) {
            fVar46 = fVar51;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar42 = *(float *)(unaff_x19 + 0x4a);
        uVar17 = (ulong)(uint)fVar42;
        if ((fVar42 < fVar48) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar46 = (fVar48 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar46 <= DAT_00d38b84) {
            fVar46 = DAT_00d38b84;
          }
          fVar39 = (fVar48 - fVar46) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar48;
          fVar46 = DAT_00d38e60;
          if (fVar39 != INFINITY) {
            fVar46 = (float)(int)fVar39 / 20.0;
          }
          if (fVar46 <= fVar42) {
            fVar46 = fVar42;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar7;
        }
        lVar35 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = FUN_01a46ff8(lVar22);
        }
        piVar16 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar16 == 0) {
LAB_0354cf2c:
          in_stack_000017d8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
          iVar9 = FUN_0358c15c();
LAB_0354b3a0:
          iVar11 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar11;
          in_stack_00000180 = in_stack_00000180 + 1;
          in_stack_000017b8 = iVar9 - 1;
          in_stack_000017d8 = CONCAT44(0x2026,iVar11);
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
        if ((uVar54 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          fVar46 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar46 - fVar49) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar17 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar22 = NEON_rev64(uVar17,4);
          unaff_x19[0x99] = lVar22;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          in_stack_000017d8 = uVar15;
        }
        goto LAB_03549564;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar14 = FUN_036cee6c(lVar22,0,0);
        if ((uVar14 & 1) != 0) {
          plVar34 = (long *)unaff_x19[0x5d];
          uVar15 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar34 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar34 + 0x528))(plVar34,uVar15,*(undefined8 *)(*plVar34 + 0x530));
          lVar22 = unaff_x19[0x5d];
          if (lVar22 == 0) goto LAB_0354fbf4;
          *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar34 = (long *)unaff_x19[0x5d];
          if (plVar34 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar34 + 0x7a8))(plVar34,0,0,*(undefined8 *)(*plVar34 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_0354b0e0:
      in_stack_000017d8 = CONCAT44(3,uVar54);
      goto LAB_03549564;
    }
switchD_0354ad3c_caseD_2:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar56 = ABS(fVar56) + fVar47 * (1.0 - fVar41) * fVar37;
    fVar47 = 1.0;
    if ((uVar55 & 0x18) != 0) {
      fVar47 = DAT_00d38acc;
    }
    fVar37 = fVar47 * in_stack_000000f8._4_4_;
    if (fVar56 <= fVar37) {
LAB_0354b8e4:
      if (in_stack_000017ec == 0xad) {
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
            *(undefined1 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (in_stack_000017ec != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar37,fVar40);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
        }
        uVar54 = *unaff_x20;
        if ((in_stack_00000060 & 1) != 0) {
          *(uint *)(in_stack_00000078 + 0x1f0) = uVar54;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar54;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x50), lVar22 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000060 = 0;
            *(float *)(lVar22 + 0x60) = fVar50;
            *(float *)(lVar22 + 100) = fVar44;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
      uVar54 = *unaff_x20;
      if (uVar54 < *(uint *)(lVar35 + 0x18)) {
        *(undefined1 *)(lVar35 + (long)(int)uVar54 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar54;
        lVar35 = *(long *)(lVar22 + 0x50);
        if (lVar35 != 0) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar35 + 0x18)) {
            lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar35 + 0x2c) = *(int *)(lVar35 + 0x2c) + 1;
            goto LAB_0354b950;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    uVar17 = (ulong)(uint)fVar40;
    if (((char)unaff_x19[0x5b] != '\0') && (uVar54 != *(uint *)(unaff_x19 + 0x93))) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017b8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar22 = *unaff_x22;
        if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar35 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar37 = *(float *)(unaff_x19 + 0x9b);
        fVar41 = 0.0;
        if ((0.0 < fVar37) && (fVar41 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar41 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar41 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar35 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar41 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar22 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar22 == 0) goto LAB_0354fbf4;
        fVar37 = *(float *)(unaff_x19 + 0x9b);
        fVar41 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 != 0) {
        uVar28 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar22 + 0x18) <= uVar28) ||
           (uVar26 = uVar28 - 1, *(uint *)(lVar22 + 0x18) <= uVar26))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar17 = (ulong)(uint)(fVar41 + *(float *)(unaff_x19 + 0x97));
        fVar49 = (fVar41 + *(float *)(unaff_x19 + 0x97) + fVar37) -
                 *(float *)(lVar22 + (long)(int)uVar28 * unaff_x24 + 0x158);
        if (((bStack000000000000006c & 1) == 0 &&
             *(short *)(lVar22 + (long)(int)uVar26 * (long)iVar33 + 0x20) == 0xad) &&
           ((fVar49 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar26;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          in_stack_000017d8 = CONCAT44(0x2d,uVar26);
          goto LAB_03549564;
        }
        if (*(short *)(lVar22 + (long)(int)uVar28 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000006c = 1;
          in_stack_000017d8 = uVar15;
          goto LAB_03549564;
        }
        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar41 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar37 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar37 <= fVar41) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar41 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar17 = (ulong)(uint)fVar41;
            fVar37 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar41 <= fVar37) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_0354b6dc;
LAB_0354fcd0:
            fVar46 = (fVar41 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar46 <= DAT_00d38b84) {
              fVar46 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar41;
            fVar41 = fVar41 - fVar46;
            goto LAB_0354fc60;
          }
LAB_0354fc94:
          fVar46 = fVar56;
          if (0.0 < fVar41) {
            fVar46 = fVar56 / (1.0 - fVar41);
          }
          fVar41 = fVar41 + (fVar56 - fVar47 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
LAB_0354fc24:
          if (fVar37 <= fVar41) {
            fVar41 = fVar37;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar41;
          return;
        }
LAB_0354b6dc:
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar7;
        }
        iVar9 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
        if (((iVar9 != iStack000000000000002c) && (iVar9 != -1)) &&
           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
          goto LAB_0354fbf4;
          uVar28 = *unaff_x20 - 1;
          if (*(uint *)(lVar22 + 0x18) <= uVar28)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar9;
          if (*(short *)(lVar22 + (long)(int)uVar28 * (long)iVar33 + 0x20) == 0xad) {
            bStack000000000000006c = 0;
            *unaff_x20 = uVar28;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            in_stack_000017d8 = CONCAT44(0x2d,uVar28);
            goto LAB_03549564;
          }
        }
        if (fVar49 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
          FUN_0358cbd4(in_stack_00000050,uVar14,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                       in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
          }
          fVar37 = fStack00000000000000c4;
          if ((char)unaff_x19[0x47] != '\0') {
            fVar37 = *(float *)(unaff_x19 + 0x59);
            if ((fVar37 < *(float *)((long)unaff_x19 + 700)) &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar46 = *(float *)((long)unaff_x19 + 700) +
                       ((fStack0000000000000018 - fVar49) / (float)((int)unaff_x19[0x95] + 1)) /
                       in_stack_00000050;
              if (fVar46 <= fVar37) {
                fVar46 = fVar37;
              }
UnityEngine_AndroidJavaObject___ctor:
              *(float *)((long)unaff_x19 + 700) = fVar46;
              return;
            }
            fVar41 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar37 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar41 < fVar37) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fc94;
            fVar41 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar17 = (ulong)(uint)fVar41;
            fVar37 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar37 < fVar41) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fcd0;
          }
          switch((int)unaff_x19[0x5c]) {
          case 0:
          case 2:
          case 4:
            goto switchD_0354b88c_caseD_0;
          case 1:
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar35 = *(long *)(lVar22 + 0xb8);
            lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
              lVar22 = FUN_01a46ff8(lVar22);
            }
            piVar16 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            if (*piVar16 == 0) {
              bStack000000000000006c = 0;
              goto LAB_0354cf2c;
            }
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            memcpy(&stack0x00001018,&stack0x000008b0,0x378);
            iVar9 = FUN_0358c15c();
            bStack000000000000006c = 0;
            goto LAB_0354b3a0;
          case 3:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017b8 = FUN_0358c15c();
            bStack000000000000006c = 0;
            goto LAB_0354b0e0;
          case 5:
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
            FUN_0358cbd4(in_stack_00000050,uVar14,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            break;
          case 6:
            lVar22 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_036cee6c(lVar22,0,0);
            if ((uVar14 & 1) != 0) {
              plVar34 = (long *)unaff_x19[0x5d];
              uVar15 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar34 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar34 + 0x528))(plVar34,uVar15,*(undefined8 *)(*plVar34 + 0x530));
              lVar22 = unaff_x19[0x5d];
              if (lVar22 == 0) goto LAB_0354fbf4;
              *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar34 = (long *)unaff_x19[0x5d];
              if (plVar34 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar34 + 0x7a8))(plVar34,0,0,*(undefined8 *)(*plVar34 + 0x7b0));
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
      fVar37 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if (fVar41 < fVar37) {
        fVar46 = fVar56 / (1.0 - fVar41);
        if (fVar41 <= 0.0) {
          fVar46 = fVar56;
        }
        fVar41 = fVar41 + (fVar56 - fVar47 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
        goto LAB_0354fc24;
      }
      fVar41 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar37 = *(float *)(unaff_x19 + 0x4a);
      if (fVar37 < fVar41) {
        fVar46 = (fVar41 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar46 <= DAT_00d38b84) {
          fVar46 = DAT_00d38b84;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar41;
        fVar41 = fVar41 - fVar46;
LAB_0354fc60:
        fVar39 = fVar41 * 20.0 + 0.5;
        fVar46 = DAT_00d38e60;
        if (fVar39 != INFINITY) {
          fVar46 = (float)(int)fVar39 / 20.0;
        }
        if (fVar46 <= fVar37) {
          fVar46 = fVar37;
        }
LAB_0354d004:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar46;
        return;
      }
    }
    iVar9 = (int)unaff_x19[0x5c];
    if (iVar9 == 1) {
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar7;
      }
      lVar35 = *(long *)(lVar22 + 0xb8);
      lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = FUN_01a46ff8(lVar22);
      }
      piVar16 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar16 == 0) goto LAB_0354cf2c;
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar7;
      }
      FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
      goto LAB_0354b394;
    }
    if (iVar9 != 6) {
      if (iVar9 == 3) {
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
    lVar22 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar14 = FUN_036cee6c(lVar22,0,0);
    if ((uVar14 & 1) != 0) {
      plVar34 = (long *)unaff_x19[0x5d];
      uVar15 = (**(code **)(*unaff_x19 + 0x518))();
      if (plVar34 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar34 + 0x528))(plVar34,uVar15,*(undefined8 *)(*plVar34 + 0x530));
      lVar22 = unaff_x19[0x5d];
      if (lVar22 == 0) goto LAB_0354fbf4;
      *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
      FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar34 = (long *)unaff_x19[0x5d];
      if (plVar34 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar34 + 0x7a8))(plVar34,0,0,*(undefined8 *)(*plVar34 + 0x7b0));
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
LAB_0354b4b4:
    in_stack_000017d8 = CONCAT44(3,*unaff_x20);
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar40 = (float)uVar17;
      fVar47 = 0.0;
      if ((0.0 < fVar40) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar17 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar40)) + fVar47)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar54;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar14 = FUN_036cee6c(lVar22,0,0);
        if ((uVar14 & 1) != 0) {
          plVar34 = (long *)unaff_x19[0x5d];
          uVar15 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar34 != (long *)0x0) {
            (**(code **)(*plVar34 + 0x528))(plVar34,uVar15,*(undefined8 *)(*plVar34 + 0x530));
            lVar22 = unaff_x19[0x5d];
            if (lVar22 != 0) {
              *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar34 = (long *)unaff_x19[0x5d];
              if (plVar34 != (long *)0x0) {
                (**(code **)(*plVar34 + 0x7a8))(plVar34,0,0,*(undefined8 *)(*plVar34 + 0x7b0));
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
        lVar22 = *unaff_x22;
        if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x50), lVar35 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar35 + 0x2c) = *(int *)(lVar35 + 0x2c) + 1;
        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b97f8(in_stack_000017ec,0);
      if ((uVar14 & 1) != 0) goto LAB_0354b500;
    }
    if (in_stack_000017ec == 0xa0) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x50), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    }
LAB_0354ba38:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar47 = *(float *)(unaff_x19 + 0x3d);
      iVar9 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar50 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar22 = unaff_x19[0xca];
      fVar40 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar40 = 1.0;
      }
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar56 = *(float *)((long)unaff_x19 + 0x404);
      fVar41 = *(float *)(lVar22 + 0x2c);
      fVar44 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
      fVar37 = *_fStack00000000000000a8;
      fVar44 = fVar56 * (fVar47 / (float)iVar9) * fVar50 * fVar40 * fVar41 * fVar44;
      fVar47 = *_fStack00000000000000a0;
      if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        uVar54 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar54)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar40 = *(float *)(lVar22 + (long)(int)uVar54 * (long)iVar33 + 0x60);
        iVar9 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar56 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar22 = unaff_x19[0xca];
        fVar50 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar50 = 1.0;
        }
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0354fbf4;
        fVar41 = *(float *)((long)unaff_x19 + 0x404);
        fVar49 = *(float *)(lVar22 + 0x2c);
        fVar44 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x50), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar37 = *(float *)(lVar22 + 0x60);
        fVar47 = *(float *)(lVar22 + 100);
        fVar44 = fVar41 * (fVar40 / (float)iVar9) * fVar56 * fVar50 * fVar49 * fVar44;
      }
      fVar56 = *(float *)(unaff_x19 + 0x9b);
      fVar40 = 0.0;
      fVar50 = 0.0;
      if ((0.0 < fVar56) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar50 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar49 = *(float *)(unaff_x19 + 0x97);
      fVar42 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar41 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar22 = *(long *)(unaff_x19[0xca] + 0x20), lVar22 == 0))
        goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,lVar22,0);
        fVar40 = (float)FUN_03776cb4(&stack0x00001710,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar48 = *(float *)(unaff_x19 + 0x6c);
      fVar47 = (fStack000000000000009c - fVar37) - fVar47;
      bVar8 = true;
      if ((fVar48 <= fVar47) && (bVar8 = false, !NAN(fVar48))) {
        bVar8 = fVar48 == -1.0;
      }
      if (!bVar8) {
        fVar47 = fVar48;
      }
      fVar37 = 1.0;
      if ((uVar55 & 0x18) != 0) {
        fVar37 = DAT_00d38acc;
      }
      if (((fVar49 - (fVar42 - fVar56)) + fVar50 < fStack00000000000000c4) &&
         (ABS(fVar41) + fVar44 * fVar40 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar37 * fVar47)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar22 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000538,(void *)(lVar22 + 0x788),0x378);
        FUN_0209b210(lVar22 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar22 = *unaff_x22;
    if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar35 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar54 = *(uint *)(unaff_x19 + 0x95);
    lVar35 = lVar35 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar35 + 100) = uVar54;
    *(int *)(lVar35 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017ec || ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) == 0)))) {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
      if (*(uint *)(lVar22 + 0x18) <= uVar54)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(int *)(lVar22 + (long)(int)uVar54 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar54)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*(int *)(lVar22 + (long)(int)uVar54 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
    }
    if (in_stack_000017ec == 9) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar39 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar40 = *(float *)(unaff_x19 + 200);
      fVar47 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar47 = fVar46 * fVar39 * fVar47;
      fVar39 = fVar47 * (float)(int)(fVar40 / fVar47);
      uVar17 = (ulong)(uint)fVar39;
      if (fVar39 <= fVar40) {
        fVar39 = fVar40 + fVar47;
      }
LAB_0354c000:
      *(float *)(unaff_x19 + 200) = fVar39;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar40 = 1.0;
        }
        else {
          fVar40 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
        }
        fVar39 = *(float *)(unaff_x19 + 200);
        fVar50 = (float)FUN_03776cb4(&stack0x000017a0,0);
        if (unaff_x19[0x20] != 0) {
          fVar47 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar39 = fVar39 + fVar47 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar46 * (in_stack_00000128 + fVar40 * fVar50) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     in_stack_00000138 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar39;
          goto joined_r0x0354bf48;
        }
        goto LAB_0354fbf4;
      }
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar39 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar46 * in_stack_00000128 +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac))
               );
      uVar17 = (ulong)(uint)fVar39;
      fVar39 = *(float *)(unaff_x19 + 200) - fVar39;
      *(float *)(unaff_x19 + 200) = fVar39;
      if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) {
        fVar47 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar17 = (ulong)(uint)fVar47;
        fVar39 = fVar39 - fVar47;
        goto LAB_0354c000;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar47 = *(float *)(unaff_x19 + 200);
      fVar39 = fVar47 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar39) +
                        fStack00000000000000d4 *
                        (in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar39;
joined_r0x0354bf48:
      if ((in_stack_000017ec == 0x200b) || (uVar17 = (ulong)(uint)fVar47, unaff_w21 != 0)) {
        fVar47 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar17 = (ulong)(uint)fVar47;
        fVar39 = fVar39 + fVar47;
        goto LAB_0354c000;
      }
    }
    lVar22 = *unaff_x22;
    if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
    uVar54 = *unaff_x20;
    uVar55 = (uint)*(undefined8 *)(lVar35 + 0x18);
    if (uVar55 <= uVar54) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar35 + (long)(int)uVar54 * unaff_x24 + 0x144) = fVar39;
    uVar28 = in_stack_000017ec;
    if ((int)in_stack_000017ec < 0xd) {
      if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
      if (((unaff_w23 & in_stack_000017ec == 0x2d) != 0) ||
         ((float)uVar54 == in_stack_00000080._4_4_)) goto LAB_0354c060;
    }
    else {
      if (1 < in_stack_000017ec - 0x2028) {
        if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
        uVar17 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar54 != in_stack_00000080._4_4_) goto LAB_0354c704;
      }
LAB_0354c060:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar39 = *(float *)(unaff_x19 + 0x99);
        fVar47 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar39 = fVar39 - fVar47;
        if (((fStack0000000000000058 < ABS(fVar39)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar39);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar39;
          *(float *)(unaff_x19 + 0x9b) = fVar39 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)puVar7;
          }
          lVar35 = *(long *)(lVar22 + 0xb8);
          if (*(int *)(lVar35 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar35 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar35 + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x000008b0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar22 + 0xb8) + 0x818,0);
            lVar22 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar22 + 0x7bc) = fVar39 + *(float *)(lVar22 + 0x7bc);
            *(float *)(lVar22 + 0x800) = fVar39 + *(float *)(lVar22 + 0x800);
            memcpy(&stack0x000001c0,(void *)(lVar22 + 0x788),0x378);
            FUN_0209b210(lVar22 + 0x11f0,&stack0x000001c0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar40 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar47 = *(float *)((long)unaff_x19 + 0x4cc) - fVar40;
      fVar39 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar47 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar39 = fVar47;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar39;
      fVar50 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017e4 == '\0') {
        in_stack_000017e8 = fVar39;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017e4 = '\x01';
      }
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x50), lVar35 == 0)) goto LAB_0354fbf4;
      uVar54 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar35 + 0x18) <= uVar54)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = unaff_x19[0x93];
      lVar13 = lVar35 + (long)(int)uVar54 * 0x5c;
      *(int *)(lVar13 + 0x34) = (int)lVar23;
      uVar55 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar23 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar55 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar55;
      *(uint *)(lVar13 + 0x38) = uVar55;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar13 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar9 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar55 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar9 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar9;
      *(int *)(lVar13 + 0x40) = iVar9;
      *(int *)(lVar13 + 0x24) = (*(int *)(lVar13 + 0x3c) - *(int *)(lVar13 + 0x34)) + 1;
      *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar55)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar38 = *(undefined4 *)(lVar22 + (long)(int)uVar55 * (long)iVar33 + 0x11c);
      lVar35 = lVar35 + (long)(int)uVar54 * 0x5c;
      *(float *)(lVar35 + 0x70) = fVar47;
      *(undefined4 *)(lVar35 + 0x6c) = uVar38;
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x50), lVar35 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar50 = fVar50 - fVar40;
      uVar17 = (ulong)(uint)fVar50;
      lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar35 + 0x74) =
           *(undefined4 *)
            (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar35 + 0x78) = fVar50;
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x50), lVar23 == 0)) goto LAB_0354fbf4;
      lVar13 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar23 + lVar13 * 0x5c;
      *(float *)(lVar35 + 0x44) = *(float *)(lVar35 + 0x74) - fVar46 * in_stack_00000168._4_4_;
      *(float *)(lVar35 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar35 + 0x24) == 1) {
        *(int *)(lVar23 + lVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar35 = *(long *)(lVar22 + 0x38), lVar35 == 0))
      goto LAB_0354fbf4;
      lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar55 = (uint)*(undefined8 *)(lVar35 + 0x18);
      if (uVar55 <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(char *)(lVar35 + lVar36 * unaff_x24 + 0x194) == '\0') &&
         (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar55 <= *(uint *)(unaff_x19 + 0x94)))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar13 * 0x5c;
      fVar39 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)
                ) - *(float *)((long)unaff_x19 + 0x2ac));
      fVar46 = -fVar39;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar46 = fVar39;
      }
      *(float *)(lVar23 + 0x58) = *(float *)(lVar35 + lVar36 * unaff_x24 + 0x144) + fVar46;
      *(float *)(lVar23 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar23 + 0x54) = fVar47;
      *(float *)(lVar23 + 0x48) = fStack000000000000005c + (fVar50 - fVar47);
      *(float *)(lVar23 + 0x4c) = fVar50;
      if ((int)in_stack_000017ec < 0x2d) {
        if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar22 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar9 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar9;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar22 != 0) && (*(long *)(lVar22 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar9) {
              FUN_0358ca18();
              lVar22 = unaff_x19[0x6d];
              if (lVar22 == 0) goto LAB_0354fbf4;
            }
            lVar22 = *(long *)(lVar22 + 0x38);
            if (lVar22 != 0) {
              if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
                fVar46 = *(float *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017ec == 0x2029) || (fVar39 = 0.0, in_stack_000017ec == 10)) {
                    fVar39 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar18 = 0;
                  fVar39 = fVar46 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           in_stack_00000050 *
                           (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar39) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017ec == 0x2029) || (fVar39 = 0.0, in_stack_000017ec == 10)) {
                    fVar39 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar18 = 1;
                  fVar39 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar39);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar39;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar18;
                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar22 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar22 = *(long *)puVar7;
                }
                uVar12 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar46;
                uVar14 = NEON_rev64(uVar12,4);
                unaff_x19[0x99] = uVar14;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
                bStack0000000000000068 = 1;
                in_stack_00000060 = 1;
                uVar17 = uVar14;
                in_stack_000017d8 = uVar15;
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
          uVar28 = 3;
        }
      }
      else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d)) goto LAB_0354c4a8;
    }
LAB_0354c704:
    uVar54 = *unaff_x20;
    if (uVar55 <= uVar54) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(char *)(lVar35 + (long)(int)uVar54 * unaff_x24 + 0x194) != '\0') {
      lVar35 = lVar35 + (long)(int)uVar54 * unaff_x24;
      uVar17 = *(ulong *)(lVar35 + 0x11c);
      uVar14 = *(ulong *)(in_stack_00000078 + 0x230);
      *(ulong *)(in_stack_00000078 + 0x230) =
           uVar14 ^ (uVar14 ^ uVar17) &
                    ~CONCAT44(-(uint)((float)(uVar14 >> 0x20) < (float)(uVar17 >> 0x20)),
                              -(uint)((float)uVar14 < (float)uVar17));
      uVar14 = *(ulong *)(in_stack_00000078 + 0x238);
      uVar17 = *(ulong *)(lVar35 + 0x128);
      *(ulong *)(in_stack_00000078 + 0x238) =
           uVar14 ^ (uVar14 ^ uVar17) &
                    ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar14 >> 0x20)),
                              -(uint)((float)uVar17 < (float)uVar14));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar28 || ((1 << (ulong)(uVar28 & 0x1f) & 0x2c00U) == 0)))) {
      lVar35 = *(long *)(lVar22 + 0x58);
      if (lVar35 == 0) goto LAB_0354fbf4;
      iVar9 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar35 + 0x18) < iVar9) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar22 + 0x58),iVar9,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar22 = *unaff_x22;
        if (lVar22 == 0) goto LAB_0354fbf4;
      }
      lVar35 = *(long *)(lVar22 + 0x58);
      if (lVar35 == 0) goto LAB_0354fbf4;
      uVar55 = *(uint *)(unaff_x19 + 0x96);
      lVar23 = (long)(int)uVar55;
      uVar54 = *(uint *)(lVar35 + 0x18);
      if (uVar54 <= uVar55) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = lVar35 + lVar23 * 0x14;
      fVar39 = *(float *)(lVar13 + 0x30);
      uVar17 = (ulong)(uint)fVar39;
      *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar39 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar46 = fVar39;
      }
      *(float *)(lVar13 + 0x30) = fVar46;
      uVar28 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar28 == 0 && uVar55 == 0) {
        *(uint *)(lVar35 + (ulong)uVar55 * 0x14 + 0x20) = uVar28;
      }
      else {
        uVar26 = uVar28 - 1;
        if (0 < (int)uVar28) {
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar22 + 0x18) <= uVar26)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (uVar55 != *(uint *)(lVar22 + (ulong)uVar26 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar55 - 1 < uVar54) {
              *(uint *)(lVar35 + 0x20 + (long)(int)(uVar55 - 1) * 0x14 + 4) = uVar26;
              *(uint *)(lVar35 + 0x20 + lVar23 * 0x14) = uVar28;
              goto LAB_0354c780;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
        }
        if ((float)uVar28 == in_stack_00000080._4_4_) {
          *(float *)(lVar35 + lVar23 * 0x14 + 0x24) = in_stack_00000080._4_4_;
        }
      }
    }
LAB_0354c780:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
    if ((unaff_w21 == 0) &&
       (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
        if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
             (0x1d < in_stack_000017ec - 0xa961)) || (uVar14 = FUN_03597a54(0), (uVar14 & 1) != 0))
           && ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
                (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
        goto LAB_0354c904;
        lVar22 = FUN_035978e8(0);
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0354fbf4;
        uVar54 = FUN_0219c130(*(long *)(lVar22 + 0x10),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
          uVar20 = in_stack_000017ec;
          if ((uVar54 & 1) == 0) {
LAB_0354cc08:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            bStack0000000000000068 = 0;
            goto LAB_0354cc90;
          }
LAB_0354cb6c:
          if (uVar10 != uVar52 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
          if (unaff_w21 != 0) goto LAB_0354cb88;
          goto LAB_0354cbc0;
        }
        lVar22 = FUN_035978e8(0);
        if (((lVar22 == 0) || (*unaff_x22 == 0)) ||
           (lVar35 = *(long *)(*unaff_x22 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar35 + 0x18) <= *unaff_x20 + 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(long *)(lVar22 + 0x18) == 0) goto LAB_0354fbf4;
        uVar20 = (uint)*(ushort *)(lVar35 + (long)(int)(*unaff_x20 + 1) * (long)iVar33 + 0x20);
        uVar14 = FUN_0219c130(*(long *)(lVar22 + 0x18),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar54 & 1) != 0) goto LAB_0354cb6c;
        if ((uVar14 & 1) == 0) goto LAB_0354cc08;
        if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
        if (unaff_w21 != 0) {
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
        if (unaff_w21 == 0) goto LAB_0354c910;
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
      *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_0354cc90:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    in_stack_000017d8 = uVar15;
  }
LAB_03549564:
  do {
    unaff_d11 = unaff_d13 & 0xffffffff;
    in_stack_000017b8 = in_stack_000017b8 + 1;
    lVar22 = unaff_x19[0x8f];
    if (lVar22 == 0) goto LAB_0354fbf4;
    if ((int)*(uint *)(lVar22 + 0x18) <= (int)in_stack_000017b8) {
LAB_0354cf48:
      fVar46 = (float)uVar17;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar46 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar39 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar46 < fVar39) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar47 = (*(float *)((long)unaff_x19 + 0x23c) - fVar46) * 0.5;
          if (fVar47 <= DAT_00d38b84) {
            fVar47 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar46;
          fVar47 = (fVar46 + fVar47) * 20.0 + 0.5;
          fVar46 = DAT_00d38e60;
          if (fVar47 != INFINITY) {
            fVar46 = (float)(int)fVar47 / 20.0;
          }
          if (fVar39 <= fVar46) {
            fVar46 = fVar39;
          }
          goto LAB_0354d004;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar15 = FUN_0276793c(in_stack_00000038,0);
        uVar12 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar15 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar15,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar15,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar57 == 3)))) {
        (**(code **)(*unaff_x19 + 0x928))();
        goto LAB_0354d0cc;
      }
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar7;
      }
      plVar34 = (long *)OVRPlugin_Media_TypeInfo;
      lVar22 = **(long **)(lVar22 + 0xb8);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      iVar33 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x60), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_035968e8(lVar22 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar9 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar22 = unaff_x19[0xeb];
      in_stack_000000b8 = (long *)uStack00000000000000f0;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar9 < 0x401) {
        if (iVar9 == 0x100) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar22 + 0x18) < 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar15 = *(undefined8 *)(lVar22 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar35 = *(long *)(*unaff_x22 + 0x58), lVar35 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar35 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar46 = *(float *)(lVar35 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
          }
          else {
            fVar46 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar22 + 0x2c);
          fVar46 = (0.0 - fVar46) - fStack000000000000001c;
        }
        else if (iVar9 == 0x200) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fStack00000000000000c4 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
          uVar15 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar22 + 0x24) +
                            (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x58), lVar22 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar22 = lVar22 + (long)(int)uStack0000000000000034 * 0x14;
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar46 = ((fStack000000000000001c + *(float *)(lVar22 + 0x28) +
                      *(float *)(lVar22 + 0x30)) - fStack0000000000000020) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar46 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                     fStack0000000000000020) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar9 != 0x400) goto LAB_0354d620;
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*(int *)(lVar22 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar15 = *(undefined8 *)(lVar22 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar35 = *(long *)(*unaff_x22 + 0x58), lVar35 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar35 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            in_stack_000017e8 = *(float *)(lVar35 + (long)(int)uStack0000000000000034 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar22 + 0x20);
          fVar46 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
        }
LAB_0354d610:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,(float)uVar15 + fVar46);
      }
      else if (iVar9 == 0x800) {
        if (lVar22 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar46 = fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar22 + 0x24) +
                              (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar46;
      }
      else {
        if (iVar9 == 0x1000) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar22 + 0x18) != 1) && (*(int *)(lVar22 + 0x18) != 0)) {
            uVar15 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar22 + 0x24) +
                              (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            fVar46 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
            goto LAB_0354d610;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        if (iVar9 == 0x2000) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar46 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                         fStack0000000000000020) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar22 + 0x24) +
                                (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + fVar46);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        }
      }
LAB_0354d620:
      lVar22 = FUN_03559490();
      if (lVar22 == 0) goto LAB_0354fbf4;
      FUN_036df824(lVar22,0);
      *(float *)((long)unaff_x19 + 0x6e4) = fVar46;
      uVar38 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar7 = OVRPlugin_Mesh_TypeInfo;
      lVar22 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar7;
      }
      puVar21 = *(undefined4 **)(lVar22 + 0xb8);
      FUN_035683a4(*puVar21,puVar21[1],puVar21[2],puVar21[3],&stack0x000017c0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar22 = *unaff_x22;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar20 = *unaff_x20;
      if ((int)uVar20 < 1) {
        iStack00000000000000d8 = 0;
        iVar33 = 0;
        goto LAB_0354f7f4;
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0354fbf4;
      bVar8 = false;
      bVar6 = false;
      bVar4 = false;
      fStack0000000000000124 = 0.0;
      bVar5 = false;
      iStack00000000000000d8 = 0;
      uStack0000000000000030 = 0;
      in_stack_00000168._4_4_ = 0.0;
      fStack000000000000005c = 0.0;
      lVar35 = 0x2e0;
      fVar47 = 0.0;
      fVar39 = 0.0;
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
      uVar10 = 0;
      uVar52 = 1;
      goto LAB_0354d7c0;
    }
    if (*(uint *)(lVar22 + 0x18) <= in_stack_000017b8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_stack_000017ec = *(uint *)(lVar22 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
    if (in_stack_000017ec == 0) goto LAB_0354cf48;
    if (5 < in_stack_00000180) {
      uVar15 = FUN_0276793c(&stack0x000017ec,0);
      uVar12 = FUN_0276793c(&stack0x000017b8,0);
      uVar15 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar15,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar15,0);
      in_stack_000017d8 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017ec != 0x3c)) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar22 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar22 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar22 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar14 = FUN_03586568();
      if (((uVar14 & 1) != 0) &&
         (in_stack_000017b8 = in_stack_0000179c, uVar57 = in_stack_000017ec,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    uVar10 = *unaff_x20;
    if (*(uint *)(lVar22 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = (long)(int)uVar10;
    unaff_w26 = (uint)*(byte *)(lVar22 + lVar23 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar35 = unaff_x19[0x24];
    if ((uint)in_stack_000017d8 == uVar10) {
      in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017ec == 0x2026) {
        *(long *)(lVar22 + lVar23 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar22 + 0x2c) = 0;
        *(long *)(lVar22 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        uVar10 = *unaff_x20;
        if (*(uint *)(lVar22 + 0x18) <= uVar10)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        unaff_w23 = 1;
        *(int *)(lVar22 + (long)(int)uVar10 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_000017d8 = CONCAT44(3,uVar10 + 1);
      }
      else if (in_stack_000017ec == 3) {
        if ((*in_stack_00000178 == 0) || (lVar13 = FUN_03568ac0(*in_stack_00000178,0), lVar13 == 0))
        goto LAB_0354fbf4;
        FUN_0219b634(lVar13,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar22 + 0x18) <= uVar10)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(ulong *)(lVar22 + lVar23 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,uVar20);
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
    if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar22 + (long)(int)uVar10 * (long)iVar33;
      *(undefined1 *)(lVar22 + 0x194) = 0;
      *(undefined2 *)(lVar22 + 0x20) = 0x200b;
      *(undefined4 *)(lVar22 + 100) = 0;
      *unaff_x20 = uVar10 + 1;
      uVar57 = in_stack_000017ec;
      goto LAB_03549564;
    }
    iVar9 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar9 == 0) {
      uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
      if ((uVar10 >> 4 & 1) == 0) {
        if ((uVar10 >> 3 & 1) == 0) {
          in_stack_00000150 = 1.0;
          if ((uVar10 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b812c(in_stack_000017ec,0);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = FUN_026b8410(in_stack_000017ec,0);
              in_stack_000017ec = uVar10 & 0xffff;
              in_stack_00000150 = fStack0000000000000024;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b8070(in_stack_000017ec,0);
          in_stack_00000150 = 1.0;
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8594(in_stack_000017ec,0);
            goto LAB_03549968;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b812c(in_stack_000017ec,0);
        in_stack_00000150 = 1.0;
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
          in_stack_00000150 = 1.0;
          in_stack_000017ec = uVar10 & 0xffff;
        }
      }
      iVar9 = *(int *)((long)unaff_x19 + 0x644);
    }
    else {
      in_stack_00000150 = 1.0;
    }
    uVar57 = in_stack_000017ec;
    if (iVar9 == 0) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *_iStack00000000000000d8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
      if (*_iStack00000000000000d8 != 0) {
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000178 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000170 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        uVar52 = *unaff_x20;
        uVar10 = *(uint *)(lVar22 + 0x18);
        if (uVar10 <= uVar52) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar22 + (long)(int)uVar52 * unaff_x24 + 0x58);
        if (unaff_w23 == 0) {
LAB_03549a88:
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar46 = *(float *)(unaff_x19 + 0x3d);
          iVar9 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar22 = unaff_x19[0x20];
        }
        else {
          lVar35 = unaff_x19[0x8f];
          if (lVar35 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar35 + 0x18) <= in_stack_000017b8)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if ((*(int *)(lVar35 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
             (uVar52 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
          if (uVar10 <= uVar52 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar46 = *(float *)(lVar22 + (long)(int)(uVar52 - 1) * (long)iVar33 + 0x60);
          iVar9 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar22 = *in_stack_00000178;
        }
        if (lVar22 == 0) goto LAB_0354fbf4;
        fVar47 = (float)FUN_03776960(lVar22 + 0x50,0);
        fVar39 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar39 = 1.0;
        }
        uVar38 = 0;
        fStack0000000000000124 = 0.0;
        if ((unaff_w23 & in_stack_000017ec == 0x2026) == 0) {
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          uVar38 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
        }
        lVar22 = unaff_x19[0xc9];
        if (lVar22 == 0) goto LAB_0354fbf4;
        _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar38);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
        fVar50 = *(float *)((long)unaff_x19 + 0x404);
        fVar44 = *(float *)(lVar22 + 0x2c);
        fVar40 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar56 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar41 = *(float *)((long)unaff_x19 + 0x404);
        fVar37 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        lVar22 = unaff_x19[0x6d];
        if ((lVar22 == 0) || (lVar35 = *(long *)(lVar22 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar35 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar35 = lVar35 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar35 + 0x2c) = 0;
        fVar39 = ((in_stack_00000150 * fVar46) / (float)iVar9) * fVar47 * fVar39;
        fVar40 = fVar39 * fVar50 * fVar44 * fVar40;
        unaff_d11 = (ulong)(uint)fVar40;
        *(float *)(lVar35 + 0x160) = fVar40;
        uVar10 = *(uint *)(unaff_x19 + 0x24);
        unaff_s8 = fVar39 * fVar56 * fVar41 * fVar37;
        if (uVar10 == 0) {
          in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
          goto LAB_03549e30;
        }
        lVar35 = unaff_x19[0xe1];
        if (lVar35 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar35 + 0x18) <= uVar10)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar35 = *(long *)(lVar35 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar35 == 0) goto LAB_0354fbf4;
        in_stack_00000168._4_4_ = *(float *)(lVar35 + 0x54);
        goto LAB_03549e30;
      }
      goto LAB_03549564;
    }
    if (iVar9 != 1) {
      lVar22 = *unaff_x22;
      unaff_s8 = 0.0;
      unaff_d13 = 0;
      if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
        unaff_d13 = unaff_d11;
      }
      if (lVar22 == 0) goto LAB_0354fbf4;
      _fStack0000000000000120 = 0;
      goto UnityEngine_AndroidJNISafe__ToSByteArray;
    }
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_000000b8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
         *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
    if ((unaff_x19[0xd3] == 0) ||
       (lVar22 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar22 == 0))
    goto LAB_0354fbf4;
    FUN_02215a88(lVar22,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar22 = CONCAT44(in_stack_000008b4,uVar20);
  } while (lVar22 == 0);
  if (in_stack_000017ec == 0x3c) {
    in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
  }
  else {
    lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar23 = *(long *)puVar7;
    }
    *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0x68);
  }
  if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
  fVar46 = *(float *)(unaff_x19 + 0x3d);
  memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
  iVar9 = FUN_03776950(&stack0x00001730,0);
  if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
  memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
  fVar47 = (float)FUN_03776960(&stack0x00001730,0);
  fVar39 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar39 = 1.0;
  }
  if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
  fVar39 = (fVar46 / (float)iVar9) * fVar47 * fVar39;
  iVar9 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
  fVar46 = *(float *)(unaff_x19 + 0x3d);
  if (iVar9 < 1) {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    iVar9 = FUN_03776950(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar40 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    fVar47 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar47 = 1.0;
    }
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    fVar50 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
    if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
    FUN_03776e6c(&stack0x000008b0,*(long *)(lVar22 + 0x20),0);
    fVar44 = (float)FUN_03776c9c(&stack0x00001710,0);
    if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
    fVar37 = *(float *)(lVar22 + 0x2c);
    fVar56 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar41 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar49 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar48 = *(float *)((long)unaff_x19 + 0x404);
    fVar42 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    unaff_s8 = fVar39 * fVar49 * fVar48 * fVar42;
    fVar47 = (fVar46 / (float)iVar9) * fVar40 * fVar47;
    fVar39 = fVar47 * (fVar50 / fVar44) * fVar37 * fVar56;
    fVar47 = fVar47 / fVar39;
    fVar41 = fVar47 * fVar41;
    fVar46 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
    fVar47 = fVar47 * fVar46;
  }
  else {
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    iVar9 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar47 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
    fVar50 = *(float *)(lVar22 + 0x2c);
    fVar40 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar40 = 1.0;
    }
    fVar44 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    fVar41 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar56 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar49 = *(float *)((long)unaff_x19 + 0x404);
    fVar37 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    unaff_s8 = fVar39 * fVar56 * fVar49 * fVar37;
    fVar39 = (fVar46 / (float)iVar9) * fVar47 * fVar40 * fVar50 * fVar44;
    fVar47 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
  }
  unaff_d11 = (ulong)(uint)fVar39;
  *_iStack00000000000000d8 = lVar22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8,lVar22);
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar22 + 0x2c) = 1;
  *(float *)(lVar22 + 0x160) = fVar39;
  *(long *)(lVar22 + 0x40) = *in_stack_000000b8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar22 = *unaff_x22;
  if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  _fStack0000000000000120 = CONCAT44(fVar41,fVar47);
  in_stack_00000168._4_4_ = 0.0;
  *(int *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
  *(int *)(unaff_x19 + 0x24) = (int)lVar35;
LAB_03549e30:
  unaff_d13 = 0;
  if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
    unaff_d13 = unaff_d11;
  }
UnityEngine_AndroidJNISafe__ToSByteArray:
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar22 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)uVar10 * unaff_x24;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar22 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar22 + 0x17c) = CONCAT44(in_stack_000008b4,uVar20);
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar22,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b63d8(in_stack_000017ec,0);
    unaff_w21 = uVar10 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  in_stack_00000138 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) != '\0') goto code_r0x03549fe8;
  in_stack_00000128 = 0.0;
  unaff_d15 = 0;
  unaff_d12 = 0;
  uVar15 = in_stack_000017d8;
  goto LAB_0354a1d0;
LAB_0354d7c0:
  uVar20 = uVar52 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x50), lVar23 == 0)) goto LAB_0354fbf4;
  lVar36 = (long)(int)uVar20;
  lVar13 = lVar22 + lVar36 * 0x178;
  uVar54 = *(uint *)(lVar13 + 100);
  if (*(uint *)(lVar23 + 0x18) <= uVar54)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar29 = *(long *)(lVar13 + 0x38);
  lVar32 = (long)(int)uVar54;
  lVar23 = lVar23 + lVar32 * 0x5c;
  uVar55 = *(uint *)(lVar23 + 0x68);
  uVar26 = (uint)*(ushort *)(lVar13 + 0x20);
  uVar57 = *(uint *)(lVar23 + 0x3c);
  iVar2 = *(int *)(lVar23 + 0x20);
  iVar9 = *(int *)(lVar23 + 0x28);
  iVar11 = *(int *)(lVar23 + 0x2c);
  fVar44 = *(float *)(lVar23 + 0x4c);
  uVar28 = *(uint *)(lVar23 + 0x40);
  fVar37 = *(float *)(lVar23 + 0x54);
  fVar40 = *(float *)(lVar23 + 0x58);
  fVar49 = *(float *)(lVar23 + 0x5c);
  fVar42 = *(float *)(lVar23 + 0x60);
  fVar41 = *(float *)(lVar23 + 0x6c);
  fVar48 = *(float *)(lVar23 + 0x70);
  fVar50 = *(float *)(lVar23 + 0x74);
  fVar56 = *(float *)(lVar23 + 0x78);
  if ((int)uVar55 < 9) {
    switch(uVar55) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar42 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar40;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar42 + fVar49 * 0.5) - fVar40 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar49 + fVar42) - fVar40;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar49 + fVar42;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar55 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar26 < 0xad) {
      if ((uVar26 != 3) && (uVar26 != 10)) {
FUN_0354d8fc:
        if (*(uint *)(lVar22 + 0x18) <= uVar57)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar22 + (long)(int)uVar57 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8cc4(uVar3,0);
        if ((uVar14 & 1) == 0) {
          bVar1 = (int)uVar54 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar40 <= fVar49) && (!bVar1 && uVar55 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar42;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar49 + fVar42;
          }
          goto LAB_0354d9d8;
        }
        if (((uVar52 == 1) || (uVar54 != uVar10)) || (uVar20 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar42;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar49 + fVar42;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar26,0);
          uStack00000000000000f0 = 0;
        }
        else {
          cVar19 = (char)unaff_x19[0x1e];
          fVar42 = -fVar40;
          if (cVar19 != '\0') {
            fVar42 = fVar40;
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar57)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar11 = (int)*(char *)(lVar22 + (long)(int)uVar57 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000030 & 1)) + iVar11 + -1;
          if (iVar11 < 1) {
            fVar40 = 1.0;
            iVar11 = 1;
          }
          else {
            fVar40 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar26 == 9) {
LAB_0354f76c:
            fVar40 = 1.0 - fVar40;
          }
          else {
            if (uVar26 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b97f8(uVar26,0);
              cVar19 = (char)unaff_x19[0x1e];
              if ((uVar14 & 1) != 0) goto LAB_0354f76c;
            }
            iVar11 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar9;
          }
          fVar40 = ((fVar49 + fVar42) * fVar40) / (float)iVar11;
          if (cVar19 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar40;
            uStack00000000000000f0 =
                 CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                          (float)uStack00000000000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar40;
          }
        }
      }
    }
    else if (((uVar26 != 0xad) && (uVar26 != 0x200b)) && (uVar26 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar55 == 0x20) {
    fVar40 = fVar41 + fVar50;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar55 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar22 + lVar36 * 0x178;
  fVar42 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar40 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar49 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar23 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar9 = *(int *)(lVar22 + lVar36 * 0x178 + 0x2c);
  if (iVar9 != 0) goto LAB_0354e05c;
  fVar47 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar54,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar13 = lVar22 + lVar36 * 0x178;
    *(undefined4 *)(lVar13 + 0x84) = 0;
    *(undefined4 *)(lVar13 + 0xac) = 0;
    *(undefined4 *)(lVar13 + 0xd4) = 0x3f800000;
    fVar47 = 1.0;
    break;
  case 1:
    fVar56 = *(float *)(lVar22 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar13 = lVar22 + lVar36 * 0x178;
      fVar50 = (in_stack_000000f8._4_4_ + fVar56) - *(float *)(in_stack_00000078 + 0x230);
      fVar56 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar13 = lVar22 + lVar36 * 0x178;
    fVar50 = fVar50 - fVar41;
    *(float *)(lVar13 + 0x84) = fVar47 + (fVar56 - fVar41) / fVar50;
    *(float *)(lVar13 + 0xac) = fVar47 + (*(float *)(lVar13 + 0x98) - fVar41) / fVar50;
    *(float *)(lVar13 + 0xd4) = fVar47 + (*(float *)(lVar13 + 0xc0) - fVar41) / fVar50;
    fVar47 = fVar47 + (*(float *)(lVar13 + 0xe8) - fVar41) / fVar50;
    break;
  case 2:
    lVar13 = lVar22 + lVar36 * 0x178;
    fVar56 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar50 = (in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar13 + 0x84) = fVar47 + fVar50 / fVar56;
    *(float *)(lVar13 + 0xac) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar13 + 0xd4) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar47 = fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar13 = lVar22 + lVar36 * 0x178;
      *(undefined4 *)(lVar13 + 0x88) = 0;
      *(undefined4 *)(lVar13 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar13 + 0xd8) = 0;
      *(undefined4 *)(lVar13 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar13 = lVar22 + lVar36 * 0x178;
      fVar56 = fVar56 - fVar48;
      fVar50 = fVar47 + (*(float *)(lVar13 + 0x74) - fVar48) / fVar56;
      fVar56 = fVar47 + (*(float *)(lVar13 + 0x9c) - fVar48) / fVar56;
      *(float *)(lVar13 + 0x88) = fVar50;
      *(float *)(lVar13 + 0xb0) = fVar56;
      *(float *)(lVar13 + 0xd8) = fVar50;
      *(float *)(lVar13 + 0x100) = fVar56;
      break;
    case 2:
      lVar13 = lVar22 + lVar36 * 0x178;
      fVar50 = fVar47 + (*(float *)(lVar13 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar13 + 0x88) = fVar50;
      fVar56 = *(float *)(unaff_x19 + 0x9c);
      fVar41 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar13 + 0xd8) = fVar50;
      fVar50 = fVar47 + (*(float *)(lVar13 + 0x9c) - fVar56) / (fVar41 - fVar56);
      *(float *)(lVar13 + 0xb0) = fVar50;
      *(float *)(lVar13 + 0x100) = fVar50;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar55 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar13 = lVar22 + lVar36 * 0x178;
    fVar50 = *(float *)(lVar13 + 0x15c);
    fVar56 = (1.0 - (*(float *)(lVar13 + 0x88) + *(float *)(lVar13 + 0xb0)) * fVar50) * 0.5;
    fVar41 = fVar47 + *(float *)(lVar13 + 0x88) * fVar50 + fVar56;
    fVar47 = fVar47 + fVar56 + *(float *)(lVar13 + 0xb0) * fVar50;
    *(float *)(lVar13 + 0x84) = fVar41;
    *(float *)(lVar13 + 0xac) = fVar41;
    *(float *)(lVar13 + 0xd4) = fVar47;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar22 + lVar36 * 0x178 + 0xfc) = fVar47;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar13 = lVar22 + lVar36 * 0x178;
    *(undefined4 *)(lVar13 + 0x88) = 0;
    *(undefined4 *)(lVar13 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar13 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar13 + 0x100) = 0;
    break;
  case 1:
    if (uVar20 < uVar55) {
      lVar13 = lVar22 + lVar36 * 0x178;
      fVar44 = fVar44 - fVar37;
      fVar47 = (*(float *)(lVar13 + 0x74) - fVar37) / fVar44;
      fVar44 = (*(float *)(lVar13 + 0x9c) - fVar37) / fVar44;
      *(float *)(lVar13 + 0x88) = fVar47;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar13 = lVar22 + lVar36 * 0x178;
    fVar47 = (*(float *)(lVar13 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar13 + 0x88) = fVar47;
    fVar44 = (*(float *)(lVar13 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar13 + 0xb0) = fVar44;
    *(float *)(lVar13 + 0xd8) = fVar44;
    *(float *)(lVar13 + 0x100) = fVar47;
    break;
  case 3:
    if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar13 = lVar22 + lVar36 * 0x178;
    fVar44 = *(float *)(lVar13 + 0x15c);
    fVar50 = (1.0 - (*(float *)(lVar13 + 0x84) + *(float *)(lVar13 + 0xd4)) / fVar44) * 0.5;
    fVar47 = *(float *)(lVar13 + 0x84) / fVar44 + fVar50;
    fVar50 = fVar50 + *(float *)(lVar13 + 0xd4) / fVar44;
    *(float *)(lVar13 + 0x88) = fVar47;
    *(float *)(lVar13 + 0xb0) = fVar50;
    *(float *)(lVar13 + 0x100) = fVar47;
    *(float *)(lVar13 + 0xd8) = fVar50;
  }
  if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar13 = lVar22 + lVar36 * 0x178;
  fVar47 = ABS(fVar46) * *(float *)(lVar13 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar13 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar47 = -fVar47;
  }
  lVar13 = lVar22 + lVar36 * 0x178;
  fVar44 = *(float *)(lVar13 + 0x88);
  fVar56 = *(float *)(lVar13 + 0x84);
  fVar50 = -2.1474836e+09;
  if (fVar56 != INFINITY) {
    fVar50 = (float)(int)fVar56;
  }
  fVar41 = *(float *)(lVar13 + 0xd4);
  fVar48 = *(float *)(lVar13 + 0xd8);
  fVar37 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar37 = (float)(int)fVar44;
  }
  uVar43 = FUN_03591d3c(fVar56 - fVar50,fVar44 - fVar37);
  *(undefined4 *)(lVar13 + 0x84) = uVar43;
  if (*(uint *)(lVar22 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar48 = fVar48 - fVar37;
  *(float *)(lVar13 + 0x88) = fVar47;
  uVar43 = FUN_03591d3c(fVar56 - fVar50,fVar48);
  *(undefined4 *)(lVar22 + lVar36 * 0x178 + 0xac) = uVar43;
  if (*(uint *)(lVar22 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar41 = fVar41 - fVar50;
  *(float *)(lVar22 + lVar36 * 0x178 + 0xb0) = fVar47;
  fVar50 = (float)FUN_03591d3c(fVar41,fVar48);
  *(float *)(lVar13 + 0xd4) = fVar50;
  if (*(uint *)(lVar22 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar13 + 0xd8) = fVar47;
  uVar43 = FUN_03591d3c(fVar41,fVar44 - fVar37);
  *(undefined4 *)(lVar22 + lVar36 * 0x178 + 0xfc) = uVar43;
  uVar55 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar22 + lVar36 * 0x178 + 0x100) = fVar47;
LAB_0354e05c:
  if (((int)uVar20 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar54 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar23 = lVar22 + lVar36 * 0x178;
      *(ulong *)(lVar23 + 0x70) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                    fVar42 + (float)*(undefined8 *)(lVar23 + 0x70));
      *(float *)(lVar23 + 0x78) = fVar49 + *(float *)(lVar23 + 0x78);
      *(ulong *)(lVar23 + 0x98) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                    fVar42 + (float)*(undefined8 *)(lVar23 + 0x98));
      *(float *)(lVar23 + 0xa0) = fVar49 + *(float *)(lVar23 + 0xa0);
      *(ulong *)(lVar23 + 0xc0) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                    fVar42 + (float)*(undefined8 *)(lVar23 + 0xc0));
      *(float *)(lVar23 + 200) = fVar49 + *(float *)(lVar23 + 200);
      *(ulong *)(lVar23 + 0xe8) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                    fVar42 + (float)*(undefined8 *)(lVar23 + 0xe8));
      *(float *)(lVar23 + 0xf0) = fVar49 + *(float *)(lVar23 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar54 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar20 < uVar55) {
        if (*(uint *)(lVar22 + lVar36 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar55 = *(uint *)(lVar22 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar43 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar13 = lVar22 + lVar36 * 0x178;
  *(undefined8 *)(lVar13 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar13 + 0x78) = uVar43;
  if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar43 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar13 = lVar22 + lVar36 * 0x178;
  *(undefined8 *)(lVar13 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar13 + 0xa0) = uVar43;
  uVar43 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar13 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar13 + 200) = uVar43;
  uVar43 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar13 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar13 + 0xf0) = uVar43;
  *(undefined1 *)(lVar23 + 0x194) = 0;
LAB_0354e184:
  if (iVar9 == 0) {
    pcVar25 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar25)();
  }
  else if (iVar9 == 1) {
    pcVar25 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar36 * 0x178;
  uVar15 = *(undefined8 *)(lVar23 + 0x11c);
  *(undefined8 *)(lVar23 + 0x11c) =
       CONCAT44(fVar40 + (float)((ulong)uVar15 >> 0x20),fVar42 + (float)uVar15);
  *(float *)(lVar23 + 0x124) = fVar49 + *(float *)(lVar23 + 0x124);
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar36 * 0x178;
  *(ulong *)(lVar23 + 0x110) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0x110) >> 0x20),
                fVar42 + (float)*(undefined8 *)(lVar23 + 0x110));
  *(float *)(lVar23 + 0x118) = fVar49 + *(float *)(lVar23 + 0x118);
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar36 * 0x178;
  *(ulong *)(lVar23 + 0x128) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0x128) >> 0x20),
                fVar42 + (float)*(undefined8 *)(lVar23 + 0x128));
  *(float *)(lVar23 + 0x130) = fVar49 + *(float *)(lVar23 + 0x130);
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar36 * 0x178;
  *(float *)(lVar23 + 0x134) = fVar42 + *(float *)(lVar23 + 0x134);
  *(ulong *)(lVar23 + 0x138) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar23 + 0x138) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar23 + 0x138));
  lVar23 = *unaff_x22;
  if ((lVar23 == 0) || (lVar13 = *(long *)(lVar23 + 0x38), lVar13 == 0)) goto LAB_0354fbf4;
  uVar55 = *(uint *)(lVar13 + 0x18);
  if (uVar55 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar30 = lVar13 + lVar36 * 0x178;
  *(float *)(lVar30 + 0x150) = fVar40 + *(float *)(lVar30 + 0x150);
  *(ulong *)(lVar30 + 0x140) =
       CONCAT44(fVar42 + (float)((ulong)*(undefined8 *)(lVar30 + 0x140) >> 0x20),
                fVar42 + (float)*(undefined8 *)(lVar30 + 0x140));
  *(ulong *)(lVar30 + 0x148) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar30 + 0x148) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar30 + 0x148));
  if (uVar54 == uVar10) {
    uVar10 = *unaff_x20 - 1;
    if (uVar20 == uVar10) goto LAB_0354e3ec;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar30 = (long)(int)uVar10;
    lVar31 = lVar23 + lVar30 * 0x5c;
    fVar50 = fVar40 + *(float *)(lVar31 + 0x54);
    *(ulong *)(lVar31 + 0x4c) =
         CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar31 + 0x4c) >> 0x20),
                  fVar40 + (float)*(undefined8 *)(lVar31 + 0x4c));
    *(float *)(lVar31 + 0x54) = fVar50;
    *(float *)(lVar31 + 0x58) = fVar42 + *(float *)(lVar31 + 0x58);
    if (uVar55 <= *(uint *)(lVar31 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar43 = *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar31 + 0x34) * 0x178 + 0x11c);
    lVar23 = lVar23 + lVar30 * 0x5c;
    *(float *)(lVar23 + 0x70) = fVar50;
    *(undefined4 *)(lVar23 + 0x6c) = uVar43;
    lVar23 = *unaff_x22;
    if ((lVar23 == 0) || (lVar13 = *(long *)(lVar23 + 0x50), lVar13 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar13 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_0354fbf4;
    uVar10 = *(uint *)(lVar13 + lVar30 * 0x5c + 0x40);
    if (*(uint *)(lVar23 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar13 = lVar13 + lVar30 * 0x5c;
    *(undefined4 *)(lVar13 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar10 * 0x178 + 0x128);
    *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar13 + 0x4c);
    uVar10 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar20 == uVar10) {
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar13 = *(long *)(lVar23 + 0x50), lVar13 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar13 + 0x18) <= uVar54)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar30 = lVar13 + lVar32 * 0x5c;
      fVar50 = fVar40 + *(float *)(lVar30 + 0x54);
      *(ulong *)(lVar30 + 0x4c) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar30 + 0x4c) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar30 + 0x4c));
      *(float *)(lVar30 + 0x54) = fVar50;
      *(float *)(lVar30 + 0x58) = fVar42 + *(float *)(lVar30 + 0x58);
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar30 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar43 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar30 + 0x34) * 0x178 + 0x11c);
      lVar13 = lVar13 + lVar32 * 0x5c;
      *(float *)(lVar13 + 0x70) = fVar50;
      *(undefined4 *)(lVar13 + 0x6c) = uVar43;
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar13 = *(long *)(lVar23 + 0x50), lVar13 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar13 + 0x18) <= uVar54)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      uVar10 = *(uint *)(lVar13 + lVar32 * 0x5c + 0x40);
      if (*(uint *)(lVar23 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = lVar13 + lVar32 * 0x5c;
      *(undefined4 *)(lVar13 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar10 * 0x178 + 0x128);
      *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar13 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar14 = FUN_026b82c4(uVar26,0);
  if (((((uVar14 & 1) == 0) && (1 < uVar26 - 0x2010)) && (uVar26 != 0xad)) && (uVar26 != 0x2d)) {
    if (bVar4) {
      if (((uVar52 != 1) && ((int)uVar20 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar20 < (int)*unaff_x20 && ((uVar26 == 0x2019 || (uVar26 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar52 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar22 + lVar35 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b82c4(uVar3,0);
        if ((uVar14 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar52)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(lVar22 + lVar35 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b82c4(uVar3,0);
          if ((uVar14 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar52 != 1) {
LAB_0354f144:
        bVar4 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b81f8(uVar26,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b63d8(uVar26,0);
        if (((uVar26 != 0x200b) && ((uVar14 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar20 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b82c4(uVar26,0);
      iVar9 = (int)fStack0000000000000124;
      if ((uVar14 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar9 = uVar52 - 2;
    }
    lVar23 = *unaff_x22;
    if (lVar23 == 0) goto LAB_0354fbf4;
    lVar13 = *(long *)(lVar23 + 0x40);
    if (lVar13 == 0) goto LAB_0354fbf4;
    uVar10 = *(uint *)(lVar23 + 0x24);
    iVar11 = *(int *)(lVar13 + 0x18);
    if (iVar11 < (int)(uVar10 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar23 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar23 = *unaff_x22;
      if (lVar23 == 0) goto LAB_0354fbf4;
    }
    lVar23 = *(long *)(lVar23 + 0x40);
    if (lVar23 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar23 + (long)(int)uVar10 * 0x18;
    *(long **)(lVar23 + 0x20) = unaff_x19;
    *(float *)(lVar23 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar23 + 0x2c) = iVar9;
    *(int *)(lVar23 + 0x30) = (iVar9 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar23 = unaff_x19[0x6d];
    if (lVar23 == 0) goto LAB_0354fbf4;
    lVar13 = *(long *)(lVar23 + 0x50);
    *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
    if (lVar13 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar13 + 0x18) <= uVar54)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar13 = lVar13 + lVar32 * 0x5c;
    bVar4 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
  }
  else {
    if (!bVar4) {
      in_stack_00000168._4_4_ = (float)uVar20;
    }
    if (uVar20 == *unaff_x20 - 1) {
      lVar23 = *unaff_x22;
      if (lVar23 == 0) goto LAB_0354fbf4;
      lVar13 = *(long *)(lVar23 + 0x40);
      if (lVar13 == 0) goto LAB_0354fbf4;
      uVar10 = *(uint *)(lVar23 + 0x24);
      iVar9 = *(int *)(lVar13 + 0x18);
      if (iVar9 < (int)(uVar10 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar23 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar23 = *unaff_x22;
        if (lVar23 == 0) goto LAB_0354fbf4;
      }
      lVar23 = *(long *)(lVar23 + 0x40);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + (long)(int)uVar10 * 0x18;
      *(long **)(lVar23 + 0x20) = unaff_x19;
      *(float *)(lVar23 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar23 + 0x2c) = uVar20;
      *(uint *)(lVar23 + 0x30) = uVar52 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar23 = unaff_x19[0x6d];
      if (lVar23 == 0) goto LAB_0354fbf4;
      lVar13 = *(long *)(lVar23 + 0x50);
      *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
      if (lVar13 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar13 + 0x18) <= uVar54)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = lVar13 + lVar32 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
    }
LAB_0354e610:
    bVar4 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  uVar10 = *(uint *)(lVar23 + 0x18);
  if (uVar10 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar23 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar8) {
LAB_0354e660:
      if (uVar10 <= uVar52 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = *unaff_x19;
      uVar43 = *(undefined4 *)(lVar23 + lVar35 + -0x330);
      uVar45 = *(undefined4 *)(lVar23 + lVar35 + -0x2f8);
LAB_0354ebc0:
      pcVar25 = *(code **)(lVar13 + 0x8d8);
LAB_0354ebc8:
      (*pcVar25)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar43,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar45);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *(long *)puVar7;
      }
LAB_0354ec1c:
      fVar39 = 0.0;
      bVar8 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar8 = false;
    }
  }
  else {
    lVar23 = lVar23 + lVar36 * 0x178;
    iVar9 = *(int *)(lVar23 + 0x68);
    *(int *)(lVar23 + 0x16c) = iVar33;
    if ((((int)unaff_x19[0x65] < (int)uVar20) || ((int)unaff_x19[0x66] < (int)uVar54)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar9 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b63d8(uVar26,0);
    if ((uVar26 != 0x200b) && ((uVar14 & 1) == 0)) {
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar13 = *(long *)(lVar23 + 0x38), lVar13 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar13 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar50 = *(float *)(lVar13 + lVar36 * 0x178 + 0x160);
      if (fVar39 <= fVar50) {
        fVar39 = fVar50;
      }
      if (fStack0000000000000100 <= ABS(fVar47)) {
        fStack0000000000000100 = ABS(fVar47);
      }
      if ((float)iVar9 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *unaff_x22;
          if (lVar23 == 0) goto LAB_0354fbf4;
          lVar13 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar13 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar13 + 0x15a8);
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar44 = *(float *)(lVar23 + lVar36 * 0x178 + 0x14c);
      fVar50 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar44 = fVar44 + fVar39 * fVar50;
      fStack000000000000005c = (float)iVar9;
      if (fVar44 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar44;
      }
    }
    if (!bVar8) {
      bVar8 = false;
      if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar28 < (int)uVar20)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar20 == uVar28) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(uVar26,0);
        if ((uVar14 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar36 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar23 + 0x160);
      fStack0000000000000070 = *(float *)(lVar23 + 0x11c);
      bVar8 = fVar39 != 0.0;
      fVar50 = in_stack_00000080._4_4_;
      if (bVar8) {
        fVar50 = fVar39;
      }
      fVar39 = fVar50;
      uVar38 = *(undefined4 *)(lVar23 + 0x168);
      _bStack000000000000006c = 0;
      fVar50 = fVar47;
      if (bVar8) {
        fVar50 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar50;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        if (uVar20 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + lVar36 * 0x178;
          lVar13 = *unaff_x19;
          uVar43 = *(undefined4 *)(lVar23 + 0x128);
          uVar45 = *(undefined4 *)(lVar23 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar20 == uVar57) || ((int)uVar28 <= (int)uVar20)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b63d8(uVar26,0);
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        lVar13 = lVar36;
        uVar10 = uVar20;
        if (uVar26 == 0x200b || (uVar14 & 1) != 0) {
          lVar13 = (long)(int)uVar28;
          uVar10 = uVar28;
        }
        if (uVar10 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + lVar13 * 0x178;
          uVar43 = *(undefined4 *)(lVar23 + 0x128);
          uVar45 = *(undefined4 *)(lVar23 + 0x160);
          pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        uVar10 = *(uint *)(lVar23 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar20 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar52)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar14 = FUN_03567ad8(uVar38,*(undefined4 *)(lVar23 + lVar35),0);
      if ((uVar14 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          if (uVar20 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar36 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar23 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar23 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar7;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar8 = true;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar29 == 0) goto LAB_0354fbf4;
  uVar10 = *(uint *)(lVar23 + lVar36 * 0x178 + 400);
  fVar50 = (float)FUN_03776a30(lVar29 + 0x50,0);
  if ((uVar10 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar52 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar43 = *(undefined4 *)(lVar23 + lVar35 + -0x330);
      fVar40 = *(float *)(lVar23 + lVar35 + -0x30c);
      pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar25)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar43,
                 fStack00000000000000a8 * fVar50 + fVar40,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar5 = false;
  }
  else {
    lVar23 = *unaff_x22;
    if ((lVar23 == 0) || (lVar13 = *(long *)(lVar23 + 0x38), lVar13 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar13 + 0x18) <= uVar20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar13 + lVar36 * 0x178 + 0x174) = iVar33;
    if ((((int)unaff_x19[0x65] < (int)uVar20) || ((int)unaff_x19[0x66] < (int)uVar54)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar13 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar28 < (int)uVar20)) ||
       (bVar5 || !bVar1)) {
LAB_0354ed84:
      if (!bVar5) goto LAB_0354f250;
    }
    else {
      if (uVar20 == uVar28) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(uVar26,0);
        if ((uVar14 & 1) != 0) goto LAB_0354ed84;
        lVar23 = *unaff_x22;
        if (lVar23 == 0) goto LAB_0354fbf4;
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar36 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar23 + 0x60);
      fStack0000000000000040 = *(float *)(lVar23 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar23 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar23 + 0x160);
      fStack000000000000009c = fVar50 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar10 = *unaff_x20;
    if (uVar10 == 1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        uVar10 = *(uint *)(lVar23 + 0x18);
LAB_0354ef0c:
        if (uVar20 < uVar10) {
          lVar23 = lVar23 + lVar36 * 0x178;
          lVar13 = *unaff_x19;
          uVar43 = *(undefined4 *)(lVar23 + 0x128);
          fVar40 = *(float *)(lVar23 + 0x14c);
LAB_0354ef24:
          pcVar25 = *(code **)(lVar13 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar20 == uVar57) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b63d8(uVar26,0);
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        uVar10 = *(uint *)(lVar23 + 0x18);
        if (uVar26 == 0x200b || (uVar14 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar13 = lVar36;
        if (uVar20 < uVar10) {
LAB_0354f1f8:
          lVar23 = lVar23 + lVar13 * 0x178;
          fVar40 = *(float *)(lVar23 + 0x14c);
          uVar43 = *(undefined4 *)(lVar23 + 0x128);
          pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar20 < (int)uVar10) {
      lVar23 = *unaff_x22;
      if ((lVar23 != 0) && (lVar13 = *(long *)(lVar23 + 0x38), lVar13 != 0)) {
        if (uVar52 < *(uint *)(lVar13 + 0x18)) {
          if (*(float *)(lVar13 + lVar35 + -0x108) == in_stack_00000048._4_4_) {
            fVar44 = *(float *)(lVar13 + lVar35 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_03567bac(fVar40 + fVar44,fStack0000000000000040,0);
            if ((uVar14 & 1) != 0) {
              uVar10 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar23 = *unaff_x22;
            if (lVar23 == 0) goto LAB_0354fbf4;
          }
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 != 0) {
            uVar10 = *(uint *)(lVar23 + 0x18);
            if ((int)uVar20 <= (int)uVar28) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar13 = (long)(int)uVar28;
            if (uVar28 < uVar10) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar20 < (int)uVar10) {
      iVar9 = FUN_036d3364(lVar29,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar52)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = *(long *)(lVar22 + lVar35 + -0x130);
      if (lVar23 == 0) goto LAB_0354fbf4;
      iVar11 = FUN_036d3364(lVar23,0);
      if (iVar9 != iVar11) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          uVar10 = *(uint *)(lVar23 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        if (uVar52 - 2 < *(uint *)(lVar23 + 0x18)) {
          lVar13 = *unaff_x19;
          uVar43 = *(undefined4 *)(lVar23 + lVar35 + -0x330);
          fVar40 = *(float *)(lVar23 + lVar35 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar5 = true;
  }
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  uVar10 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar10 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar23 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar20) || ((int)unaff_x19[0x66] < (int)uVar54)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar23 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar6) {
LAB_0354f400:
      if (uVar10 <= uVar20) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar36 * 0x178;
      fVar50 = *(float *)(lVar23 + 0x128);
      fVar37 = *(float *)(lVar23 + 0x188);
      uVar12 = *(undefined8 *)(lVar23 + 0x17c);
      fVar49 = *(float *)(lVar23 + 0x184);
      uVar15 = *(undefined8 *)(lVar23 + 0x184);
      fVar41 = *(float *)(lVar23 + 0x18c);
      fVar40 = *(float *)(lVar23 + 0x11c);
      fVar44 = *(float *)(lVar23 + 0x148);
      fVar56 = *(float *)(lVar23 + 0x150);
      in_stack_00000188 = uVar12;
      fStack0000000000000190 = fVar49;
      fStack0000000000000194 = fVar37;
      in_stack_00000198 = fVar41;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar14 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar14 & 1) == 0) {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar23);
        }
        fVar50 = fVar50 + (float)in_stack_000017c8;
        fVar40 = fVar40 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar44 = fVar44 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar40 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar40;
        }
        if (fVar56 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar56 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar50) {
          fStack00000000000000d0 = fVar50;
        }
        if (fStack00000000000000d4 <= fVar44) {
          fStack00000000000000d4 = fVar44;
        }
      }
      else {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar23);
        }
        fVar40 = (fVar40 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar56 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar56;
        }
        if (fStack00000000000000d4 <= fVar44) {
          fStack00000000000000d4 = fVar44;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar40,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar56 - fVar41;
        fStack00000000000000d0 = fVar50 + fVar49;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar44 + fVar37;
        fStack00000000000000e0 = fVar40;
        in_stack_000017c0 = uVar12;
        in_stack_000017c8 = uVar15;
        in_stack_000017d0 = fVar41;
      }
      if (((*unaff_x20 == 1) || (uVar20 == uVar57)) || (((int)uVar28 <= (int)uVar20 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar6 = true;
    }
    else {
      if ((((uVar26 != 0xd) && ((uVar26 & 0xfffe) != 10)) && ((int)uVar20 <= (int)uVar28)) &&
         (bVar1)) {
        if (uVar20 == uVar28) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b97f8(uVar26,0);
          if ((uVar14 & 1) != 0) goto LAB_0354f374;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar7;
        }
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          uVar10 = (uint)*(undefined8 *)(lVar23 + 0x18);
          if (uVar20 < uVar10) {
            lVar13 = *(long *)(lVar13 + 0xb8);
            lVar29 = lVar23 + lVar36 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar29 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar29 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar13 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar13 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar29 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar13 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar13 + 0x15a4);
            uStack00000000000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar6 = false;
    }
  }
  uVar20 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar35 = lVar35 + 0x178;
  bVar1 = (int)uVar20 <= (int)uVar52;
  uVar10 = uVar54;
  uVar52 = uVar52 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
code_r0x03549fe8:
  if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  unaff_w25 = *(uint *)(*_iStack00000000000000d8 + 0x28);
  if ((int)uVar10 < (int)in_stack_00000080._4_4_) {
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar10 + 1)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = *(long *)(lVar22 + (long)(int)(uVar10 + 1) * (long)iVar33 + 0x30);
    if ((((lVar22 == 0) || (*in_stack_00000178 == 0)) ||
        (lVar35 = *(long *)(*in_stack_00000178 + 0x128), lVar35 == 0)) ||
       (lVar35 = *(long *)(lVar35 + 0x18), lVar35 == 0)) goto LAB_0354fbf4;
    uVar20 = unaff_w25 | *(int *)(lVar22 + 0x28) << 0x10;
    uVar14 = FUN_0219f8b8(lVar35,&stack0x000008b0,&stack0x00001708,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    uVar54 = 0;
    if ((uVar14 & 1) == 0) {
      in_stack_00000128 = 0.0;
      uVar55 = 0;
      uVar52 = 0;
    }
    else {
      if (in_stack_00001708 == 0) goto LAB_0354fbf4;
      in_stack_00000128 = *(float *)(in_stack_00001708 + 0x1c);
      uVar54 = *(uint *)(in_stack_00001708 + 0x20);
      uVar52 = *(uint *)(in_stack_00001708 + 0x14);
      uVar55 = *(uint *)(in_stack_00001708 + 0x18);
      if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
        in_stack_00000138 = 0.0;
      }
    }
    uVar10 = *unaff_x20;
  }
  else {
    uVar54 = 0;
    in_stack_00000128 = 0.0;
    uVar55 = 0;
    uVar52 = 0;
  }
  unaff_d15 = (ulong)uVar55;
  unaff_d14 = (ulong)uVar54;
  unaff_d12 = (ulong)uVar52;
  if (0 < (int)uVar10) goto code_r0x0354a100;
  goto LAB_0354a1c4;
code_r0x0354a100:
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= uVar10 - 1)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  param_1 = *(long *)(lVar22 + (ulong)(uVar10 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
  goto code_r0x0354a124;
LAB_0354f7d0:
  lVar22 = *unaff_x22;
  if (lVar22 != 0) {
    iVar33 = uVar54 + 1;
    plVar34 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar22 + 0x18) = uVar20;
    lVar35 = unaff_x19[0xd4];
    *(int *)(lVar22 + 0x2c) = iVar33;
    if ((int)uVar20 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar35;
    *(int *)(lVar22 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar14 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar14 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar22 = unaff_x19[0xdb];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*unaff_x22,*(undefined8 *)(lVar22 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x60), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar34 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar22 = *unaff_x22;
                        if (lVar22 != 0) {
                          lVar23 = 0;
                          lVar35 = 0;
                          do {
                            uVar14 = lVar35 + 1;
                            if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar14) goto LAB_0354d0cc;
                            lVar22 = *(long *)(lVar22 + 0x60);
                            if (lVar22 == 0) break;
                            if (*(int *)(*plVar34 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar14)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar22 + lVar23 + 0x70,0);
                            lVar22 = unaff_x19[0xe1];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar14)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar15 = *(undefined8 *)(lVar22 + lVar35 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar17 = FUN_036d35a8(uVar15,0,0);
                            if ((uVar17 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar22 = *(long *)(*unaff_x22 + 0x60), lVar22 == 0)) break;
                                if (*(int *)(*plVar34 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar22 + 0x18) <= uVar14)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar22 + lVar23 + 0x70,1,0);
                              }
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar35 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a460c(lVar22,*(undefined8 *)(lVar13 + lVar23 + 0x80),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar35 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a4810(lVar22,*(undefined8 *)(lVar13 + lVar23 + 0x98),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar35 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a48bc(lVar22,*(undefined8 *)(lVar13 + lVar23 + 0xa0),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar35 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a4e24(lVar22,*(undefined8 *)(lVar13 + lVar23 + 0xa8),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar14)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar35 * 8 + 0x28);
                              if ((lVar22 == 0) || (lVar22 = FUN_0359d5ac(lVar22,0), lVar22 == 0))
                              break;
                              FUN_036aa280(lVar22,0);
                            }
                            lVar22 = *unaff_x22;
                            lVar35 = lVar35 + 1;
                            lVar23 = lVar23 + 0x50;
                          } while (lVar22 != 0);
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


