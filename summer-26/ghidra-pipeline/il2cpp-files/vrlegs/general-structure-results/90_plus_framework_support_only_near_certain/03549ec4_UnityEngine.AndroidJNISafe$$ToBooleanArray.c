/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$ToBooleanArray
ENTRY_POINT: 03549ec4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_AndroidJNISafe__ToBooleanArray(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong uVar19;
  undefined1 uVar20;
  char cVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  long in_x9;
  long lVar25;
  long lVar26;
  float *pfVar27;
  code *pcVar28;
  uint in_w10;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar37;
  long *plVar38;
  uint unaff_w26;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  ulong unaff_d11;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  ulong unaff_d13;
  float unaff_s14;
  undefined4 uVar57;
  float fVar58;
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
  uint uVar59;
  uint in_stack_000017ec;
  
code_r0x03549ec4:
  if (in_w10 <= (uint)in_x9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(param_1 + in_x9 * unaff_x24 + 0x170) = *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
  goto LAB_0354fbf4;
  uVar9 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar37 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + (long)(int)uVar9 * unaff_x24;
  *(undefined4 *)(lVar37 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar37 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar37 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar37 = *(long *)(unaff_x19[0xc9] + 0x20), lVar37 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar37,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_026b63d8(in_stack_000017ec,0);
    uVar9 = uVar9 & 1;
  }
  else {
    uVar9 = 0;
  }
  fVar40 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  iVar10 = (int)unaff_x24;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fVar41 = 0.0;
    fVar58 = 0.0;
    fVar54 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar22 = *unaff_x20;
    uVar24 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar22 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar22 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = *(long *)(lVar37 + (long)(int)(uVar22 + 1) * (long)iVar10 + 0x30);
      if ((((lVar37 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0)) ||
         (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar24 | *(int *)(lVar37 + 0x28) << 0x10;
      uVar16 = FUN_0219f8b8(lVar25,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar57 = 0;
      if ((uVar16 & 1) == 0) {
        fVar41 = 0.0;
        fVar58 = 0.0;
        fVar54 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        fVar41 = *(float *)(in_stack_00001708 + 0x1c);
        uVar57 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar54 = *(float *)(in_stack_00001708 + 0x14);
        fVar58 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar40 = 0.0;
        }
      }
      uVar22 = *unaff_x20;
    }
    else {
      uVar57 = 0;
      fVar41 = 0.0;
      fVar58 = 0.0;
      fVar54 = 0.0;
    }
    if (0 < (int)uVar22) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar22 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = *(long *)(lVar37 + (ulong)(uVar22 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar37 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0 ||
          (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar37 + 0x28) | uVar24 << 0x10;
      uVar16 = FUN_0219f8b8(lVar25,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar16 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar54 = (float)FUN_03571cb4(fVar54,fVar58,fVar41,uVar57,
                                         *(undefined4 *)(in_stack_00001708 + 0x28),
                                         *(undefined4 *)(in_stack_00001708 + 0x2c),
                                         *(undefined4 *)(in_stack_00001708 + 0x30),
                                         *(undefined4 *)(in_stack_00001708 + 0x34),0),
           in_stack_00001708 == 0)) goto LAB_0354fbf4;
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar40 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fVar41;
  }
  fVar53 = (float)unaff_d13;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar48 = *(float *)(unaff_x19 + 200);
    fVar42 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar48 = fVar48 - fVar53 * fVar42 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar48;
    if ((in_stack_000017ec == 0x200b) || (uVar9 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar48 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar48 = *(float *)(unaff_x19 + 0x56);
  fVar42 = 0.0;
  if (fVar48 != 0.0) {
    fVar42 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar43 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar42 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar48 * 0.5 - fVar53 * (fVar42 * 0.5 + fVar43));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar42;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar37 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036cee6c(lVar37,0,0);
    fVar43 = 0.0;
    if ((uVar16 & 1) != 0) {
      lVar37 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar37 == 0) goto LAB_0354fbf4;
      uVar16 = FUN_03699d3c(lVar37,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar43 = 0.0;
      if ((uVar16 & 1) != 0) {
        lVar37 = *in_stack_00000170;
        if (*(int *)(*plVar38 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar37 == 0) goto LAB_0354fbf4;
        fVar48 = (float)FUN_0369e060(lVar37,*(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar51 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar43 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar43 = fVar43 * fVar48 * fVar51 * 0.25;
        if (fVar48 < in_stack_00000168._4_4_ + fVar43) {
          in_stack_00000168._4_4_ = fVar48 - fVar43;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar37 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036cee6c(lVar37,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar16 & 1) != 0) {
      lVar37 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar37 == 0) goto LAB_0354fbf4;
      uVar16 = FUN_03699d3c(lVar37,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar16 & 1) != 0) {
        lVar37 = *in_stack_00000170;
        if (*(int *)(*plVar38 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar37 == 0) goto LAB_0354fbf4;
        uVar16 = FUN_03699d3c(lVar37,*(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0xcc),0);
        if ((uVar16 & 1) != 0) {
          lVar37 = *in_stack_00000170;
          if (*(int *)(*plVar38 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar37 != 0) {
            fVar48 = (float)FUN_0369e060(lVar37,*(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0x54),0
                                        );
            if ((*in_stack_00000178 != 0) && (*in_stack_00000170 != 0)) {
              fVar51 = *(float *)(*in_stack_00000178 + 0x1a8);
              fVar43 = (float)FUN_0369e060(*in_stack_00000170,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
              fVar43 = fVar43 * fVar48 * fVar51 * 0.25;
              if (fVar48 < in_stack_00000168._4_4_ + fVar43) {
                in_stack_00000168._4_4_ = fVar48 - fVar43;
              }
              goto LAB_0354a568;
            }
          }
          goto LAB_0354fbf4;
        }
      }
    }
    fVar43 = 0.0;
  }
LAB_0354a568:
  fVar48 = *(float *)(unaff_x19 + 200);
  fVar51 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar48 = fVar48 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar53 * (fVar54 + ((fVar51 - in_stack_00000168._4_4_) - fVar43));
  fVar54 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar51 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s14 + fVar53 * (fVar58 + in_stack_00000168._4_4_ + fVar54)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar54 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar51 - fVar53 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar54);
  fVar54 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar58 = fVar48 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar53 * (fVar43 + fVar43 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar54);
  fStack0000000000000104 = fVar48;
  fVar54 = fVar58;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar44 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar54 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar45 = fVar44 * fVar53 * (fVar43 + in_stack_00000168._4_4_ + fVar54);
    fVar54 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar55 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar51 = fVar51 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar44 = fVar44 * fVar53 * (((fVar54 - fVar55) - in_stack_00000168._4_4_) - fVar43);
    fVar55 = fVar48 + fVar45;
    fVar54 = fVar58 + fVar44;
    fVar50 = (fVar45 - fVar44) * 0.5;
    fVar48 = (fVar48 + fVar44) - fVar50;
    fVar58 = (fVar58 + fVar45) - fVar50;
    fStack0000000000000104 = fVar55 - fVar50;
    fVar54 = fVar54 - fVar50;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar44 = 0.0;
    fVar45 = 0.0;
    fVar49 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar50 = fStack0000000000000134;
    fVar55 = fVar51;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar52 = (fVar58 + fVar48) * 0.5;
    fVar56 = (fStack0000000000000134 + fVar51) * 0.5;
    fVar51 = fVar51 - fVar56;
    fStack0000000000000100 = 0.0;
    fVar55 = fVar51;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar52,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar52 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar50 = fStack0000000000000134 - fVar56;
    fVar44 = 0.0;
    fStack0000000000000134 = fVar50;
    fVar48 = (float)FUN_036bdd2c(fVar48 - fVar52,_fStack0000000000000070,0);
    fVar48 = fVar52 + fVar48;
    fVar44 = fVar44 + 0.0;
    fStack0000000000000134 = fVar56 + fStack0000000000000134;
    fVar49 = 0.0;
    fVar58 = (float)FUN_036bdd2c(fVar58 - fVar52,_fStack0000000000000070,0);
    fVar58 = fVar52 + fVar58;
    fVar51 = fVar56 + fVar51;
    fVar49 = fVar49 + 0.0;
    fVar45 = 0.0;
    fVar54 = (float)FUN_036bdd2c(fVar54 - fVar52,_fStack0000000000000070,0);
    fVar54 = fVar52 + fVar54;
    fVar45 = fVar45 + 0.0;
    fVar50 = fVar56 + fVar50;
    fVar55 = fVar56 + fVar55;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar37 = *(long *)(*unaff_x22 + 0x38);
  uVar16 = unaff_d13 & 0xffffffff;
  if (lVar37 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x11c) = fVar48;
  *(float *)(lVar37 + 0x120) = fStack0000000000000134;
  *(float *)(lVar37 + 0x124) = fVar44;
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x114) = fVar55;
  *(float *)(lVar37 + 0x110) = fStack0000000000000104;
  *(float *)(lVar37 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x128) = fVar58;
  *(float *)(lVar37 + 300) = fVar51;
  *(float *)(lVar37 + 0x130) = fVar49;
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x134) = fVar54;
  *(float *)(lVar37 + 0x138) = fVar50;
  *(float *)(lVar37 + 0x13c) = fVar45;
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  uVar24 = *unaff_x20;
  lVar25 = (long)(int)uVar24;
  if (*(uint *)(lVar37 + 0x18) <= uVar24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar37 + lVar25 * unaff_x24;
  *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
  fVar51 = *(float *)(unaff_x19 + 0x9b);
  uVar19 = (ulong)(uint)fVar51;
  fVar54 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar26 + 0x15c) = (fVar58 - fVar48) / (fVar55 - fStack0000000000000134);
  *(float *)(lVar26 + 0x14c) = (unaff_s14 - fVar51) + fVar54;
  fVar58 = fStack0000000000000124 * fVar53;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar58 = fVar58 / in_stack_00000150;
    fStack0000000000000120 = (fStack0000000000000120 * fVar53) / in_stack_00000150;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar53;
  }
  uVar22 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar9 == 0) || (uVar24 == uVar22)) {
    fStack0000000000000120 = fVar54 + fStack0000000000000120;
    fVar58 = fVar54 + fVar58;
    fVar55 = fStack0000000000000120;
    fVar48 = fVar58;
    if (fVar54 != 0.0) {
      fVar48 = (fVar58 - fVar54) / *(float *)((long)unaff_x19 + 0x404);
      fVar55 = (fStack0000000000000120 - fVar54) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar48 <= fVar58) {
        fVar48 = fVar58;
      }
      if (fStack0000000000000120 <= fVar55) {
        fVar55 = fStack0000000000000120;
      }
    }
    lVar37 = lVar37 + lVar25 * unaff_x24;
    fVar54 = fVar48;
    if (fVar48 <= *(float *)(unaff_x19 + 0x99)) {
      fVar54 = *(float *)(unaff_x19 + 0x99);
    }
    fVar44 = fVar55;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar55) {
      fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar44;
    *(float *)(unaff_x19 + 0x99) = fVar54;
    *(float *)(lVar37 + 0x154) = fVar48;
    *(float *)(lVar37 + 0x158) = fVar55;
    *(float *)(lVar37 + 0x148) = fVar58 - fVar51;
    *(float *)(unaff_x19 + 0x98) = fVar58 - fVar51;
    *(float *)(lVar37 + 0x150) = fStack0000000000000120 - fVar51;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar51;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar54;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar54 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar48 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      in_stack_00000150 = (fVar53 * fVar48) / in_stack_00000150;
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar54 <= in_stack_00000150) {
        fVar54 = in_stack_00000150;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar54;
    }
    if ((float)uVar19 == 0.0) {
      fVar54 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar58) {
        fVar54 = fVar58;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar54;
    }
  }
  else {
    fVar54 = *(float *)(unaff_x19 + 0x99);
    lVar37 = lVar37 + lVar25 * unaff_x24;
    *(float *)(lVar37 + 0x154) = fVar54;
    fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar54 = fVar54 - fVar51;
    *(float *)(lVar37 + 0x148) = fVar54;
    *(float *)(lVar37 + 0x158) = fVar58;
    *(float *)(unaff_x19 + 0x98) = fVar54;
    fVar58 = fVar58 - fVar51;
    *(float *)(lVar37 + 0x150) = fVar58;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar58;
  }
  lVar37 = *unaff_x22;
  if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  uVar11 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)uVar11 * unaff_x24;
  *(undefined1 *)(lVar25 + 0x194) = 0;
  uVar29 = *(uint *)(unaff_x19 + 0x4f);
  uVar59 = in_stack_000017ec;
  if (((in_stack_000017ec == 9) ||
      ((((uVar9 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)))) ||
     (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar25 + 0x194) = 1;
    pfVar27 = _fStack00000000000000a0;
    pfVar31 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar37 + 0x60);
      pfVar27 = (float *)(lVar37 + 100);
    }
    fVar58 = *pfVar31;
    fVar48 = *pfVar27;
    fVar54 = *(float *)(unaff_x19 + 0x6c);
    fVar51 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar58) - fVar48;
    bVar8 = true;
    if ((fVar54 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar54))) {
      bVar8 = fVar54 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar54;
    }
    fVar54 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar54 = (float)FUN_03776cb4(&stack0x000017a0,0);
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar55 = (float)unaff_d11;
    if (in_stack_000017ec != 0xad) {
      fVar55 = fVar53;
    }
    fVar49 = (float)uVar19;
    fVar45 = 0.0;
    if ((0.0 < fVar49) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar11 = *unaff_x20;
    fVar45 = (*(float *)(unaff_x19 + 0x97) - (fVar50 - fVar49)) + fVar45;
    if (fStack00000000000000c4 < fVar45) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar11;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar17 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar52 = *(float *)(unaff_x19 + 0x59);
        if (((fVar52 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar49)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar40 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar45) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar40 <= fVar52) {
            fVar40 = fVar52;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar45 = *(float *)(unaff_x19 + 0x4a);
        uVar19 = (ulong)(uint)fVar45;
        if ((fVar45 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar40 = (fVar49 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar40 <= DAT_00d38b84) {
            fVar40 = DAT_00d38b84;
          }
          fVar41 = (fVar49 - fVar40) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar49;
          fVar40 = DAT_00d38e60;
          if (fVar41 != INFINITY) {
            fVar40 = (float)(int)fVar41 / 20.0;
          }
          if (fVar40 <= fVar45) {
            fVar40 = fVar45;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar37 = *(long *)puVar7;
        }
        lVar25 = *(long *)(lVar37 + 0xb8);
        lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
          lVar37 = FUN_01a46ff8(lVar37);
        }
        piVar18 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar37 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar18 == 0) {
LAB_0354cf2c:
          uVar17 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar37 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar37 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar37 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
          iVar12 = FUN_0358c15c();
LAB_0354b3a0:
          iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          in_stack_00000180 = in_stack_00000180 + 1;
          in_stack_000017b8 = iVar12 - 1;
          uVar17 = CONCAT44(0x2026,iVar13);
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
        if ((uVar11 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          fVar40 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar40 - fVar50) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar19 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar37 = NEON_rev64(uVar19,4);
          unaff_x19[0x99] = lVar37;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          uVar17 = in_stack_000017d8;
        }
        goto LAB_03549564;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar37 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar16 = FUN_036cee6c(lVar37,0,0);
        if ((uVar16 & 1) != 0) {
          plVar38 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar38 + 0x528))(plVar38,uVar17,*(undefined8 *)(*plVar38 + 0x530));
          lVar37 = unaff_x19[0x5d];
          if (lVar37 == 0) goto LAB_0354fbf4;
          *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar38 = (long *)unaff_x19[0x5d];
          if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_0354b0e0:
      uVar17 = CONCAT44(3,uVar11);
      goto LAB_03549564;
    }
switchD_0354ad3c_caseD_2:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar51 = ABS(fVar51) + fVar54 * (1.0 - fVar44) * fVar55;
    fVar54 = 1.0;
    if ((uVar29 & 0x18) != 0) {
      fVar54 = DAT_00d38acc;
    }
    fVar55 = fVar54 * in_stack_000000f8._4_4_;
    if (fVar51 <= fVar55) {
LAB_0354b8e4:
      if (in_stack_000017ec == 0xad) {
        if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        if (*unaff_x20 < *(uint *)(lVar37 + 0x18)) {
          *(undefined1 *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
          goto LAB_0354ba38;
        }
      }
      else if (in_stack_000017ec == 9) {
        lVar37 = *unaff_x22;
        if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
        uVar11 = *unaff_x20;
        if (uVar11 < *(uint *)(lVar25 + 0x18)) {
          *(undefined1 *)(lVar25 + (long)(int)uVar11 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar11;
          lVar25 = *(long *)(lVar37 + 0x50);
          if (lVar25 == 0) goto LAB_0354fbf4;
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
            goto LAB_0354b950;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar55,fVar43);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
        }
        uVar11 = *unaff_x20;
        if ((in_stack_00000060 & 1) != 0) {
          *(uint *)(in_stack_00000078 + 0x1f0) = uVar11;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar11;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x50), lVar37 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar37 + 0x18)) {
          lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          in_stack_00000060 = 0;
          *(float *)(lVar37 + 0x60) = fVar58;
          *(float *)(lVar37 + 100) = fVar48;
          goto LAB_0354ba38;
        }
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    uVar19 = (ulong)(uint)fVar43;
    if (((char)unaff_x19[0x5b] != '\0') && (uVar11 != *(uint *)(unaff_x19 + 0x93))) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017b8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar37 = *unaff_x22;
        if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar55 = *(float *)(unaff_x19 + 0x9b);
        fVar44 = 0.0;
        if ((0.0 < fVar55) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar44 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar44 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar37 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar37 == 0) goto LAB_0354fbf4;
        fVar55 = *(float *)(unaff_x19 + 0x9b);
        fVar44 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if ((uVar32 < *(uint *)(lVar37 + 0x18)) &&
         (uVar30 = uVar32 - 1, uVar30 < *(uint *)(lVar37 + 0x18))) {
        uVar19 = (ulong)(uint)(fVar44 + *(float *)(unaff_x19 + 0x97));
        fVar50 = (fVar44 + *(float *)(unaff_x19 + 0x97) + fVar55) -
                 *(float *)(lVar37 + (long)(int)uVar32 * unaff_x24 + 0x158);
        if (((bStack000000000000006c & 1) == 0 &&
             *(short *)(lVar37 + (long)(int)uVar30 * (long)iVar10 + 0x20) == 0xad) &&
           ((fVar50 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar30;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          uVar17 = CONCAT44(0x2d,uVar30);
          goto LAB_03549564;
        }
        if (*(short *)(lVar37 + (long)(int)uVar32 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000006c = 1;
          uVar17 = in_stack_000017d8;
          goto LAB_03549564;
        }
        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar55 <= fVar44) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar19 = (ulong)(uint)fVar44;
            fVar55 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar44 <= fVar55) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_0354b6dc;
LAB_0354fcd0:
            fVar40 = (fVar44 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar40 <= DAT_00d38b84) {
              fVar40 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar44;
            fVar44 = fVar44 - fVar40;
            goto LAB_0354fc60;
          }
LAB_0354fc94:
          fVar40 = fVar51;
          if (0.0 < fVar44) {
            fVar40 = fVar51 / (1.0 - fVar44);
          }
          fVar44 = fVar44 + (fVar51 - fVar54 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar40;
LAB_0354fc24:
          if (fVar55 <= fVar44) {
            fVar44 = fVar55;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar44;
          return;
        }
LAB_0354b6dc:
        lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar37 = *(long *)puVar7;
        }
        iVar12 = *(int *)(*(long *)(lVar37 + 0xb8) + 0xe78);
        if (((iVar12 != iStack000000000000002c) && (iVar12 != -1)) &&
           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar37 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
          goto LAB_0354fbf4;
          uVar32 = *unaff_x20 - 1;
          if (*(uint *)(lVar37 + 0x18) <= uVar32)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar12;
          if (*(short *)(lVar37 + (long)(int)uVar32 * (long)iVar10 + 0x20) == 0xad) {
            bStack000000000000006c = 0;
            *unaff_x20 = uVar32;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            uVar17 = CONCAT44(0x2d,uVar32);
            goto LAB_03549564;
          }
        }
        if (fVar50 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
          FUN_0358cbd4(in_stack_00000050,uVar16,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar40,
                       in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
          }
          fVar55 = fStack00000000000000c4;
          if ((char)unaff_x19[0x47] != '\0') {
            fVar55 = *(float *)(unaff_x19 + 0x59);
            if ((fVar55 < *(float *)((long)unaff_x19 + 700)) &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar40 = *(float *)((long)unaff_x19 + 700) +
                       ((fStack0000000000000018 - fVar50) / (float)((int)unaff_x19[0x95] + 1)) /
                       in_stack_00000050;
              if (fVar40 <= fVar55) {
                fVar40 = fVar55;
              }
UnityEngine_AndroidJavaObject___ctor:
              *(float *)((long)unaff_x19 + 700) = fVar40;
              return;
            }
            fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar44 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fc94;
            fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar19 = (ulong)(uint)fVar44;
            fVar55 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar55 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fcd0;
          }
          switch((int)unaff_x19[0x5c]) {
          case 0:
          case 2:
          case 4:
            goto switchD_0354b88c_caseD_0;
          case 1:
            lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar25 = *(long *)(lVar37 + 0xb8);
            lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
              lVar37 = FUN_01a46ff8(lVar37);
            }
            piVar18 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar37 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            if (*piVar18 != 0) {
              lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar37 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar37 + 0xb8) + 0x11f0,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              memcpy(&stack0x00001018,&stack0x000008b0,0x378);
              iVar12 = FUN_0358c15c();
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
            FUN_0358cbd4(in_stack_00000050,uVar16,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar40,
                         in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            break;
          case 6:
            lVar37 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_036cee6c(lVar37,0,0);
            if ((uVar16 & 1) != 0) {
              plVar38 = (long *)unaff_x19[0x5d];
              uVar17 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar38 + 0x528))(plVar38,uVar17,*(undefined8 *)(*plVar38 + 0x530));
              lVar37 = unaff_x19[0x5d];
              if (lVar37 == 0) goto LAB_0354fbf4;
              *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar38 = (long *)unaff_x19[0x5d];
              if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
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
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    if (((char)unaff_x19[0x47] != '\0') &&
       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
      fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if (fVar44 < fVar55) {
        fVar40 = fVar51 / (1.0 - fVar44);
        if (fVar44 <= 0.0) {
          fVar40 = fVar51;
        }
        fVar44 = fVar44 + (fVar51 - fVar54 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar40;
        goto LAB_0354fc24;
      }
      fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar55 = *(float *)(unaff_x19 + 0x4a);
      if (fVar55 < fVar44) {
        fVar40 = (fVar44 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar40 <= DAT_00d38b84) {
          fVar40 = DAT_00d38b84;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar44;
        fVar44 = fVar44 - fVar40;
LAB_0354fc60:
        fVar41 = fVar44 * 20.0 + 0.5;
        fVar40 = DAT_00d38e60;
        if (fVar41 != INFINITY) {
          fVar40 = (float)(int)fVar41 / 20.0;
        }
        if (fVar40 <= fVar55) {
          fVar40 = fVar55;
        }
LAB_0354d004:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar40;
        return;
      }
    }
    iVar12 = (int)unaff_x19[0x5c];
    if (iVar12 == 1) {
      lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar37 = *(long *)puVar7;
      }
      lVar25 = *(long *)(lVar37 + 0xb8);
      lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
        lVar37 = FUN_01a46ff8(lVar37);
      }
      piVar18 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar37 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar18 != 0) {
        lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar37 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar37 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
        goto LAB_0354b394;
      }
      goto LAB_0354cf2c;
    }
    if (iVar12 != 6) {
      if (iVar12 == 3) {
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
    lVar37 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar16 = FUN_036cee6c(lVar37,0,0);
    if ((uVar16 & 1) != 0) {
      plVar38 = (long *)unaff_x19[0x5d];
      uVar17 = (**(code **)(*unaff_x19 + 0x518))();
      if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar38 + 0x528))(plVar38,uVar17,*(undefined8 *)(*plVar38 + 0x530));
      lVar37 = unaff_x19[0x5d];
      if (lVar37 == 0) goto LAB_0354fbf4;
      *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
      FUN_0357ee30(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar38 = (long *)unaff_x19[0x5d];
      if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
LAB_0354b4b4:
    uVar17 = CONCAT44(3,*unaff_x20);
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar58 = (float)uVar19;
      fVar54 = 0.0;
      if ((0.0 < fVar58) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar54 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar19 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar58)) + fVar54)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar11;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar37 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar16 = FUN_036cee6c(lVar37,0,0);
        if ((uVar16 & 1) != 0) {
          plVar38 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar38 != (long *)0x0) {
            (**(code **)(*plVar38 + 0x528))(plVar38,uVar17,*(undefined8 *)(*plVar38 + 0x530));
            lVar37 = unaff_x19[0x5d];
            if (lVar37 != 0) {
              *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar38 = (long *)unaff_x19[0x5d];
              if (plVar38 != (long *)0x0) {
                (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
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
        lVar37 = *unaff_x22;
        if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
        *(int *)(lVar37 + 0x20) = *(int *)(lVar37 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b97f8(in_stack_000017ec,0);
      if ((uVar16 & 1) != 0) goto LAB_0354b500;
    }
    if (in_stack_000017ec == 0xa0) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x50), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar37 + 0x20) = *(int *)(lVar37 + 0x20) + 1;
    }
LAB_0354ba38:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar54 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar48 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar37 = unaff_x19[0xca];
      fVar58 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar58 = 1.0;
      }
      if ((lVar37 == 0) || (*(long *)(lVar37 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar51 = *(float *)((long)unaff_x19 + 0x404);
      fVar44 = *(float *)(lVar37 + 0x2c);
      fVar43 = (float)FUN_03776ea8(*(long *)(lVar37 + 0x20),0);
      fVar55 = *_fStack00000000000000a8;
      fVar43 = fVar51 * (fVar54 / (float)iVar12) * fVar48 * fVar58 * fVar44 * fVar43;
      fVar54 = *_fStack00000000000000a0;
      if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        uVar11 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar37 + 0x18) <= uVar11)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)(lVar37 + (long)(int)uVar11 * (long)iVar10 + 0x60);
        iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar51 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar37 = unaff_x19[0xca];
        fVar48 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar48 = 1.0;
        }
        if ((lVar37 == 0) || (*(long *)(lVar37 + 0x20) == 0)) goto LAB_0354fbf4;
        fVar44 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = *(float *)(lVar37 + 0x2c);
        fVar43 = (float)FUN_03776ea8(*(long *)(lVar37 + 0x20),0);
        if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x50), lVar37 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar55 = *(float *)(lVar37 + 0x60);
        fVar54 = *(float *)(lVar37 + 100);
        fVar43 = fVar44 * (fVar58 / (float)iVar12) * fVar51 * fVar48 * fVar50 * fVar43;
      }
      fVar51 = *(float *)(unaff_x19 + 0x9b);
      fVar58 = 0.0;
      fVar48 = 0.0;
      if ((0.0 < fVar51) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar50 = *(float *)(unaff_x19 + 0x97);
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar44 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar37 = *(long *)(unaff_x19[0xca] + 0x20), lVar37 == 0))
        goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,lVar37,0);
        fVar58 = (float)FUN_03776cb4(&stack0x00001710,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar49 = *(float *)(unaff_x19 + 0x6c);
      fVar54 = (fStack000000000000009c - fVar55) - fVar54;
      bVar8 = true;
      if ((fVar49 <= fVar54) && (bVar8 = false, !NAN(fVar49))) {
        bVar8 = fVar49 == -1.0;
      }
      if (!bVar8) {
        fVar54 = fVar49;
      }
      fVar55 = 1.0;
      if ((uVar29 & 0x18) != 0) {
        fVar55 = DAT_00d38acc;
      }
      if (((fVar50 - (fVar45 - fVar51)) + fVar48 < fStack00000000000000c4) &&
         (ABS(fVar44) + fVar43 * fVar58 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar55 * fVar54)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar37 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000538,(void *)(lVar37 + 0x788),0x378);
        FUN_0209b210(lVar37 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar37 = *unaff_x22;
    if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar11 = *(uint *)(unaff_x19 + 0x95);
    lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar25 + 100) = uVar11;
    *(int *)(lVar25 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017ec || ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) == 0)))) {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
      if (*(uint *)(lVar37 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(int *)(lVar37 + (long)(int)uVar11 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*(int *)(lVar37 + (long)(int)uVar11 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
    }
    if (in_stack_000017ec == 9) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar41 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar42 = *(float *)(unaff_x19 + 200);
      fVar54 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar41 = fVar53 * fVar41 * fVar54;
      fVar58 = fVar41 * (float)(int)(fVar42 / fVar41);
      uVar19 = (ulong)(uint)fVar58;
      if (fVar58 <= fVar42) {
        fVar58 = fVar42 + fVar41;
      }
LAB_0354c000:
      *(float *)(unaff_x19 + 200) = fVar58;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar42 = 1.0;
        }
        else {
          fVar42 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
        }
        fVar58 = *(float *)(unaff_x19 + 200);
        fVar48 = (float)FUN_03776cb4(&stack0x000017a0,0);
        if (unaff_x19[0x20] != 0) {
          fVar54 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar58 = fVar58 + fVar54 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar53 * (fVar41 + fVar42 * fVar48) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     fVar40 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar58;
          goto joined_r0x0354bf48;
        }
        goto LAB_0354fbf4;
      }
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar53 * fVar41 +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + fVar40 + *(float *)(*in_stack_00000178 + 0x1ac)));
      uVar19 = (ulong)(uint)fVar58;
      fVar58 = *(float *)(unaff_x19 + 200) - fVar58;
      *(float *)(unaff_x19 + 200) = fVar58;
      if ((in_stack_000017ec == 0x200b) || (uVar9 != 0)) {
        fVar41 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar19 = (ulong)(uint)fVar41;
        fVar58 = fVar58 - fVar41;
        goto LAB_0354c000;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar54 = *(float *)(unaff_x19 + 200);
      fVar58 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar42) +
                        fStack00000000000000d4 * (fVar40 + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar58;
joined_r0x0354bf48:
      if ((in_stack_000017ec == 0x200b) || (uVar19 = (ulong)(uint)fVar54, uVar9 != 0)) {
        fVar41 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar19 = (ulong)(uint)fVar41;
        fVar58 = fVar58 + fVar41;
        goto LAB_0354c000;
      }
    }
    lVar37 = *unaff_x22;
    if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
    uVar11 = *unaff_x20;
    uVar29 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar29 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar25 + (long)(int)uVar11 * unaff_x24 + 0x144) = fVar58;
    uVar32 = in_stack_000017ec;
    if ((int)in_stack_000017ec < 0xd) {
      if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
      if (((unaff_w23 & in_stack_000017ec == 0x2d) != 0) ||
         ((float)uVar11 == in_stack_00000080._4_4_)) goto LAB_0354c060;
    }
    else {
      if (1 < in_stack_000017ec - 0x2028) {
        if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
        uVar19 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar11 != in_stack_00000080._4_4_) goto LAB_0354c704;
      }
LAB_0354c060:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar41 = *(float *)(unaff_x19 + 0x99);
        fVar54 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar41 = fVar41 - fVar54;
        if (((fStack0000000000000058 < ABS(fVar41)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar41);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar41;
          *(float *)(unaff_x19 + 0x9b) = fVar41 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar37 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar37 = *(long *)puVar7;
          }
          lVar25 = *(long *)(lVar37 + 0xb8);
          if (*(int *)(lVar25 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar25 + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar37 + 0xb8) + 0x788),&stack0x000008b0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar37 + 0xb8) + 0x818,0);
            lVar37 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar37 + 0x7bc) = fVar41 + *(float *)(lVar37 + 0x7bc);
            *(float *)(lVar37 + 0x800) = fVar41 + *(float *)(lVar37 + 0x800);
            memcpy(&stack0x000001c0,(void *)(lVar37 + 0x788),0x378);
            FUN_0209b210(lVar37 + 0x11f0,&stack0x000001c0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar58 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar54 = *(float *)((long)unaff_x19 + 0x4cc) - fVar58;
      fVar41 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar54 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar41 = fVar54;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar41;
      fVar42 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017e4 == '\0') {
        in_stack_000017e8 = fVar41;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017e4 = '\x01';
      }
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
      uVar11 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar25 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = unaff_x19[0x93];
      lVar15 = lVar25 + (long)(int)uVar11 * 0x5c;
      *(int *)(lVar15 + 0x34) = (int)lVar26;
      uVar29 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar26 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar29 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar29;
      *(uint *)(lVar15 + 0x38) = uVar29;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar15 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar12 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar29 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
      *(int *)(lVar15 + 0x40) = iVar12;
      *(int *)(lVar15 + 0x24) = (*(int *)(lVar15 + 0x3c) - *(int *)(lVar15 + 0x34)) + 1;
      *(undefined4 *)(lVar15 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar29)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar57 = *(undefined4 *)(lVar37 + (long)(int)uVar29 * (long)iVar10 + 0x11c);
      lVar25 = lVar25 + (long)(int)uVar11 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar54;
      *(undefined4 *)(lVar25 + 0x6c) = uVar57;
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar42 = fVar42 - fVar58;
      uVar19 = (ulong)(uint)fVar42;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) =
           *(undefined4 *)
            (lVar37 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar25 + 0x78) = fVar42;
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar26 = *(long *)(lVar37 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
      lVar15 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar26 + lVar15 * 0x5c;
      *(float *)(lVar25 + 0x44) = *(float *)(lVar25 + 0x74) - fVar53 * in_stack_00000168._4_4_;
      *(float *)(lVar25 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar25 + 0x24) == 1) {
        *(int *)(lVar26 + lVar15 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar29 = (uint)*(undefined8 *)(lVar25 + 0x18);
      if (uVar29 <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(char *)(lVar25 + lVar39 * unaff_x24 + 0x194) == '\0') &&
         (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar29 <= *(uint *)(unaff_x19 + 0x94)))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar15 * 0x5c;
      fVar41 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + fVar40 + *(float *)(*in_stack_00000178 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar40 = -fVar41;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar40 = fVar41;
      }
      *(float *)(lVar26 + 0x58) = *(float *)(lVar25 + lVar39 * unaff_x24 + 0x144) + fVar40;
      *(float *)(lVar26 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar26 + 0x54) = fVar54;
      *(float *)(lVar26 + 0x48) = fStack000000000000005c + (fVar42 - fVar54);
      *(float *)(lVar26 + 0x4c) = fVar42;
      if ((int)in_stack_000017ec < 0x2d) {
        if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar37 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar12 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar12;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar37 == 0) || (*(long *)(lVar37 + 0x50) == 0)) goto LAB_0354fbf4;
          if (*(int *)(*(long *)(lVar37 + 0x50) + 0x18) <= iVar12) {
            FUN_0358ca18();
            lVar37 = unaff_x19[0x6d];
            if (lVar37 == 0) goto LAB_0354fbf4;
          }
          lVar37 = *(long *)(lVar37 + 0x38);
          if (lVar37 == 0) goto LAB_0354fbf4;
          if (*unaff_x20 < *(uint *)(lVar37 + 0x18)) {
            fVar40 = *(float *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
              if ((in_stack_000017ec == 0x2029) || (fVar41 = 0.0, in_stack_000017ec == 10)) {
                fVar41 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar20 = 0;
              fVar41 = fVar40 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       in_stack_00000050 *
                       (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar41) +
                       *(float *)(unaff_x19 + 0x9b);
            }
            else {
              if ((in_stack_000017ec == 0x2029) || (fVar41 = 0.0, in_stack_000017ec == 10)) {
                fVar41 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar20 = 1;
              fVar41 = *(float *)(unaff_x19 + 0x9b) +
                       *(float *)(unaff_x19 + 0x58) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar41);
            }
            *(float *)(unaff_x19 + 0x9b) = fVar41;
            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar20;
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar37 = *(long *)puVar7;
            }
            uVar17 = *(undefined8 *)(*(long *)(lVar37 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x9a) = fVar40;
            uVar16 = NEON_rev64(uVar17,4);
            unaff_x19[0x99] = uVar16;
            *(float *)(unaff_x19 + 200) =
                 *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
            FUN_0358c4f0();
            FUN_0358c4f0();
            *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
            bStack0000000000000068 = 1;
            in_stack_00000060 = 1;
            uVar19 = uVar16;
            uVar17 = in_stack_000017d8;
            goto LAB_03549564;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        if (in_stack_000017ec == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
          in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar32 = 3;
        }
      }
      else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d)) goto LAB_0354c4a8;
    }
LAB_0354c704:
    uVar11 = *unaff_x20;
    if (uVar29 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(char *)(lVar25 + (long)(int)uVar11 * unaff_x24 + 0x194) != '\0') {
      lVar25 = lVar25 + (long)(int)uVar11 * unaff_x24;
      uVar19 = *(ulong *)(lVar25 + 0x11c);
      uVar16 = *(ulong *)(in_stack_00000078 + 0x230);
      *(ulong *)(in_stack_00000078 + 0x230) =
           uVar16 ^ (uVar16 ^ uVar19) &
                    ~CONCAT44(-(uint)((float)(uVar16 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar16 < (float)uVar19));
      uVar16 = *(ulong *)(in_stack_00000078 + 0x238);
      uVar19 = *(ulong *)(lVar25 + 0x128);
      *(ulong *)(in_stack_00000078 + 0x238) =
           uVar16 ^ (uVar16 ^ uVar19) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar16 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar16));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
      lVar25 = *(long *)(lVar37 + 0x58);
      if (lVar25 == 0) goto LAB_0354fbf4;
      iVar12 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar25 + 0x18) < iVar12) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar37 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar37 = *unaff_x22;
        if (lVar37 == 0) goto LAB_0354fbf4;
      }
      lVar25 = *(long *)(lVar37 + 0x58);
      if (lVar25 == 0) goto LAB_0354fbf4;
      uVar29 = *(uint *)(unaff_x19 + 0x96);
      lVar26 = (long)(int)uVar29;
      uVar11 = *(uint *)(lVar25 + 0x18);
      if (uVar11 <= uVar29) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = lVar25 + lVar26 * 0x14;
      fVar41 = *(float *)(lVar15 + 0x30);
      uVar19 = (ulong)(uint)fVar41;
      *(undefined4 *)(lVar15 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar40 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar41 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar40 = fVar41;
      }
      *(float *)(lVar15 + 0x30) = fVar40;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar32 == 0 && uVar29 == 0) {
        *(uint *)(lVar25 + (ulong)uVar29 * 0x14 + 0x20) = uVar32;
      }
      else {
        uVar30 = uVar32 - 1;
        if (0 < (int)uVar32) {
          lVar37 = *(long *)(lVar37 + 0x38);
          if (lVar37 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar37 + 0x18) <= uVar30)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (uVar29 != *(uint *)(lVar37 + (ulong)uVar30 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar29 - 1 < uVar11) {
              *(uint *)(lVar25 + 0x20 + (long)(int)(uVar29 - 1) * 0x14 + 4) = uVar30;
              *(uint *)(lVar25 + 0x20 + lVar26 * 0x14) = uVar32;
              goto LAB_0354c780;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
        }
        if ((float)uVar32 == in_stack_00000080._4_4_) {
          *(float *)(lVar25 + lVar26 * 0x14 + 0x24) = in_stack_00000080._4_4_;
        }
      }
    }
LAB_0354c780:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
    if ((uVar9 == 0) &&
       (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
        if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
             (0x1d < in_stack_000017ec - 0xa961)) || (uVar16 = FUN_03597a54(0), (uVar16 & 1) != 0))
           && ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
                (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
        goto LAB_0354c904;
        lVar37 = FUN_035978e8(0);
        if ((lVar37 == 0) || (*(long *)(lVar37 + 0x10) == 0)) goto LAB_0354fbf4;
        uVar11 = FUN_0219c130(*(long *)(lVar37 + 0x10),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
          in_stack_000008b0 = in_stack_000017ec;
          if ((uVar11 & 1) == 0) {
LAB_0354cc08:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            bStack0000000000000068 = 0;
            goto LAB_0354cc90;
          }
LAB_0354cb6c:
          if (uVar24 != uVar22 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
          if (uVar9 != 0) goto LAB_0354cb88;
          goto LAB_0354cbc0;
        }
        lVar37 = FUN_035978e8(0);
        if (((lVar37 == 0) || (*unaff_x22 == 0)) ||
           (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20 + 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(long *)(lVar37 + 0x18) == 0) goto LAB_0354fbf4;
        in_stack_000008b0 =
             (uint)*(ushort *)(lVar25 + (long)(int)(*unaff_x20 + 1) * (long)iVar10 + 0x20);
        uVar16 = FUN_0219c130(*(long *)(lVar37 + 0x18),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar11 & 1) != 0) goto LAB_0354cb6c;
        if ((uVar16 & 1) == 0) goto LAB_0354cc08;
        if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
        if (uVar9 != 0) {
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
        if (uVar9 == 0) goto LAB_0354c910;
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
    uVar17 = in_stack_000017d8;
  }
LAB_03549564:
  do {
    unaff_d11 = unaff_d13 & 0xffffffff;
    in_stack_000017b8 = in_stack_000017b8 + 1;
    lVar37 = unaff_x19[0x8f];
    if (lVar37 == 0) goto LAB_0354fbf4;
    if ((int)*(uint *)(lVar37 + 0x18) <= (int)in_stack_000017b8) {
LAB_0354cf48:
      fVar40 = (float)uVar19;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar40 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar40 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar41 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar40 < fVar41) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar54 = (*(float *)((long)unaff_x19 + 0x23c) - fVar40) * 0.5;
          if (fVar54 <= DAT_00d38b84) {
            fVar54 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar40;
          fVar54 = (fVar40 + fVar54) * 20.0 + 0.5;
          fVar40 = DAT_00d38e60;
          if (fVar54 != INFINITY) {
            fVar40 = (float)(int)fVar54 / 20.0;
          }
          if (fVar41 <= fVar40) {
            fVar40 = fVar41;
          }
          goto LAB_0354d004;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar17 = FUN_0276793c(in_stack_00000038,0);
        uVar14 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar17 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar17,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar14,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar17,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar59 == 3)))) {
        (**(code **)(*unaff_x19 + 0x928))();
        goto LAB_0354d0cc;
      }
      lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar37 = *(long *)puVar7;
      }
      plVar38 = (long *)OVRPlugin_Media_TypeInfo;
      lVar37 = **(long **)(lVar37 + 0xb8);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      iVar10 = *(int *)(lVar37 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x60), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar37 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_035968e8(lVar37 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar12 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar37 = unaff_x19[0xeb];
      in_stack_000000b8 = (long *)uStack00000000000000f0;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar12 < 0x401) {
        if (iVar12 == 0x100) {
          if (lVar37 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar37 + 0x18) < 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar17 = *(undefined8 *)(lVar37 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x58), lVar25 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar40 = *(float *)(lVar25 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
          }
          else {
            fVar40 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar37 + 0x2c);
          fVar40 = (0.0 - fVar40) - fStack000000000000001c;
        }
        else if (iVar12 == 0x200) {
          if (lVar37 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fStack00000000000000c4 = (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
          uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar37 + 0x24) +
                            (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x58), lVar37 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar37 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar37 = lVar37 + (long)(int)uStack0000000000000034 * 0x14;
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar40 = ((fStack000000000000001c + *(float *)(lVar37 + 0x28) +
                      *(float *)(lVar37 + 0x30)) - fStack0000000000000020) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar40 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                     fStack0000000000000020) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar12 != 0x400) goto LAB_0354d620;
          if (lVar37 == 0) goto LAB_0354fbf4;
          if (*(int *)(lVar37 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar17 = *(undefined8 *)(lVar37 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x58), lVar25 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            in_stack_000017e8 = *(float *)(lVar25 + (long)(int)uStack0000000000000034 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar37 + 0x20);
          fVar40 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
        }
LAB_0354d610:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar40);
      }
      else if (iVar12 == 0x800) {
        if (lVar37 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar40 = fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar37 + 0x24) +
                              (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar40;
      }
      else {
        if (iVar12 == 0x1000) {
          if (lVar37 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar37 + 0x18) != 1) && (*(int *)(lVar37 + 0x18) != 0)) {
            uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar37 + 0x24) +
                              (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
            fVar40 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
            goto LAB_0354d610;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        if (iVar12 == 0x2000) {
          if (lVar37 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar40 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                         fStack0000000000000020) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar37 + 0x24) +
                                (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5 + fVar40);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
        }
      }
LAB_0354d620:
      lVar37 = FUN_03559490();
      if (lVar37 == 0) goto LAB_0354fbf4;
      FUN_036df824(lVar37,0);
      *(float *)((long)unaff_x19 + 0x6e4) = fVar40;
      uVar57 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar7 = OVRPlugin_Mesh_TypeInfo;
      lVar37 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar37 = *(long *)puVar7;
      }
      puVar23 = *(undefined4 **)(lVar37 + 0xb8);
      FUN_035683a4(*puVar23,puVar23[1],puVar23[2],puVar23[3],&stack0x000017c0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar37 = *unaff_x22;
      if (lVar37 == 0) goto LAB_0354fbf4;
      uVar9 = *unaff_x20;
      if ((int)uVar9 < 1) {
        iStack00000000000000d8 = 0;
        iVar10 = 0;
        goto LAB_0354f7f4;
      }
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      bVar8 = false;
      bVar6 = false;
      bVar4 = false;
      fStack0000000000000124 = 0.0;
      bVar5 = false;
      iStack00000000000000d8 = 0;
      uStack0000000000000030 = 0;
      in_stack_00000168._4_4_ = 0.0;
      fStack000000000000005c = 0.0;
      lVar25 = 0x2e0;
      fVar54 = 0.0;
      fVar41 = 0.0;
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
      uVar24 = 0;
      uVar22 = 1;
      goto LAB_0354d7c0;
    }
    if (*(uint *)(lVar37 + 0x18) <= in_stack_000017b8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_stack_000017ec = *(uint *)(lVar37 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
    if (in_stack_000017ec == 0) goto LAB_0354cf48;
    if (5 < in_stack_00000180) {
      uVar17 = FUN_0276793c(&stack0x000017ec,0);
      uVar14 = FUN_0276793c(&stack0x000017b8,0);
      uVar17 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar17,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar14,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar17,0);
      uVar17 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017ec != 0x3c)) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar37 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar37 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar37 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar16 = FUN_03586568();
      if (((uVar16 & 1) != 0) &&
         (in_stack_000017b8 = in_stack_0000179c, uVar59 = in_stack_000017ec,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
    goto LAB_0354fbf4;
    uVar9 = *unaff_x20;
    if (*(uint *)(lVar37 + 0x18) <= uVar9)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = (long)(int)uVar9;
    unaff_w26 = (uint)*(byte *)(lVar37 + lVar26 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar25 = unaff_x19[0x24];
    if ((uint)uVar17 == uVar9) {
      in_stack_000017ec = (uint)((ulong)uVar17 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017ec == 0x2026) {
        *(long *)(lVar37 + lVar26 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar37 + 0x2c) = 0;
        *(long *)(lVar37 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        uVar9 = *unaff_x20;
        if (*(uint *)(lVar37 + 0x18) <= uVar9)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        unaff_w23 = 1;
        *(int *)(lVar37 + (long)(int)uVar9 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        uVar17 = CONCAT44(3,uVar9 + 1);
      }
      else if (in_stack_000017ec == 3) {
        if ((*in_stack_00000178 == 0) || (lVar15 = FUN_03568ac0(*in_stack_00000178,0), lVar15 == 0))
        goto LAB_0354fbf4;
        FUN_0219b634(lVar15,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar37 + 0x18) <= uVar9)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(ulong *)(lVar37 + lVar26 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008b4,in_stack_000008b0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar9 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar9 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + (long)(int)uVar9 * (long)iVar10;
      *(undefined1 *)(lVar37 + 0x194) = 0;
      *(undefined2 *)(lVar37 + 0x20) = 0x200b;
      *(undefined4 *)(lVar37 + 100) = 0;
      *unaff_x20 = uVar9 + 1;
      uVar59 = in_stack_000017ec;
      goto LAB_03549564;
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 == 0) {
      uVar9 = *(uint *)((long)unaff_x19 + 0x25c);
      if ((uVar9 >> 4 & 1) == 0) {
        if ((uVar9 >> 3 & 1) == 0) {
          in_stack_00000150 = 1.0;
          if ((uVar9 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b812c(in_stack_000017ec,0);
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_026b8410(in_stack_000017ec,0);
              in_stack_000017ec = uVar9 & 0xffff;
              in_stack_00000150 = fStack0000000000000024;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b8070(in_stack_000017ec,0);
          in_stack_00000150 = 1.0;
          if ((uVar16 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_026b8594(in_stack_000017ec,0);
            goto LAB_03549968;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b812c(in_stack_000017ec,0);
        in_stack_00000150 = 1.0;
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
          in_stack_00000150 = 1.0;
          in_stack_000017ec = uVar9 & 0xffff;
        }
      }
      iVar12 = *(int *)((long)unaff_x19 + 0x644);
    }
    else {
      in_stack_00000150 = 1.0;
    }
    uVar59 = in_stack_000017ec;
    if (iVar12 == 0) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *_iStack00000000000000d8 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
      if (*_iStack00000000000000d8 != 0) {
        if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000178 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
        if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000170 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
        goto LAB_0354fbf4;
        uVar24 = *unaff_x20;
        uVar9 = *(uint *)(lVar37 + 0x18);
        if (uVar9 <= uVar24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar37 + (long)(int)uVar24 * unaff_x24 + 0x58);
        if (unaff_w23 == 0) {
LAB_03549a88:
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar40 = *(float *)(unaff_x19 + 0x3d);
          iVar10 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar37 = unaff_x19[0x20];
        }
        else {
          lVar25 = unaff_x19[0x8f];
          if (lVar25 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar25 + 0x18) <= in_stack_000017b8)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if ((*(int *)(lVar25 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
             (uVar24 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
          if (uVar9 <= uVar24 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar40 = *(float *)(lVar37 + (long)(int)(uVar24 - 1) * (long)iVar10 + 0x60);
          iVar10 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar37 = *in_stack_00000178;
        }
        if (lVar37 == 0) goto LAB_0354fbf4;
        fVar54 = (float)FUN_03776960(lVar37 + 0x50,0);
        fVar41 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar41 = 1.0;
        }
        uVar57 = 0;
        fStack0000000000000124 = 0.0;
        if ((unaff_w23 & in_stack_000017ec == 0x2026) == 0) {
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          uVar57 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
        }
        lVar37 = unaff_x19[0xc9];
        if (lVar37 == 0) goto LAB_0354fbf4;
        _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar57);
        if (*(long *)(lVar37 + 0x20) == 0) goto LAB_0354fbf4;
        fVar53 = *(float *)((long)unaff_x19 + 0x404);
        fVar42 = *(float *)(lVar37 + 0x2c);
        fVar58 = (float)FUN_03776ea8(*(long *)(lVar37 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar48 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar51 = *(float *)((long)unaff_x19 + 0x404);
        fVar43 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        lVar37 = unaff_x19[0x6d];
        if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar25 + 0x2c) = 0;
        fVar41 = ((in_stack_00000150 * fVar40) / (float)iVar10) * fVar54 * fVar41;
        fVar58 = fVar41 * fVar53 * fVar42 * fVar58;
        unaff_d11 = (ulong)(uint)fVar58;
        *(float *)(lVar25 + 0x160) = fVar58;
        uVar9 = *(uint *)(unaff_x19 + 0x24);
        unaff_s14 = fVar41 * fVar48 * fVar51 * fVar43;
        if (uVar9 == 0) {
          in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
          goto LAB_03549e30;
        }
        lVar25 = unaff_x19[0xe1];
        if (lVar25 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= uVar9)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar25 = *(long *)(lVar25 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar25 == 0) goto LAB_0354fbf4;
        in_stack_00000168._4_4_ = *(float *)(lVar25 + 0x54);
        goto LAB_03549e30;
      }
      goto LAB_03549564;
    }
    if (iVar12 != 1) {
      lVar37 = *unaff_x22;
      unaff_s14 = 0.0;
      unaff_d13 = 0;
      if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
        unaff_d13 = unaff_d11;
      }
      if (lVar37 == 0) goto LAB_0354fbf4;
      _fStack0000000000000120 = 0;
      goto UnityEngine_AndroidJNISafe__ToSByteArray;
    }
    if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_000000b8 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
         *(undefined4 *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
    if ((unaff_x19[0xd3] == 0) ||
       (lVar37 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar37 == 0))
    goto LAB_0354fbf4;
    FUN_02215a88(lVar37,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar37 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  } while (lVar37 == 0);
  if (in_stack_000017ec == 0x3c) {
    in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
  }
  else {
    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar26 = *(long *)puVar7;
    }
    *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
  }
  if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
  fVar40 = *(float *)(unaff_x19 + 0x3d);
  memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
  iVar10 = FUN_03776950(&stack0x00001730,0);
  if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
  memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
  fVar54 = (float)FUN_03776960(&stack0x00001730,0);
  fVar41 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar41 = 1.0;
  }
  if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
  fVar41 = (fVar40 / (float)iVar10) * fVar54 * fVar41;
  iVar10 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
  fVar40 = *(float *)(unaff_x19 + 0x3d);
  if (iVar10 < 1) {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    iVar10 = FUN_03776950(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar58 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    fVar54 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar54 = 1.0;
    }
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    fVar53 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
    if (*(long *)(lVar37 + 0x20) == 0) goto LAB_0354fbf4;
    FUN_03776e6c(&stack0x000008b0,*(long *)(lVar37 + 0x20),0);
    fVar42 = (float)FUN_03776c9c(&stack0x00001710,0);
    if (*(long *)(lVar37 + 0x20) == 0) goto LAB_0354fbf4;
    fVar43 = *(float *)(lVar37 + 0x2c);
    fVar48 = (float)FUN_03776ea8(*(long *)(lVar37 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar51 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar55 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar50 = *(float *)((long)unaff_x19 + 0x404);
    fVar44 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    unaff_s14 = fVar41 * fVar55 * fVar50 * fVar44;
    fVar54 = (fVar40 / (float)iVar10) * fVar58 * fVar54;
    fVar41 = fVar54 * (fVar53 / fVar42) * fVar43 * fVar48;
    fVar54 = fVar54 / fVar41;
    fVar51 = fVar54 * fVar51;
    fVar40 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
    fVar54 = fVar54 * fVar40;
  }
  else {
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    iVar10 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar54 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (*(long *)(lVar37 + 0x20) == 0) goto LAB_0354fbf4;
    fVar53 = *(float *)(lVar37 + 0x2c);
    fVar58 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar58 = 1.0;
    }
    fVar42 = (float)FUN_03776ea8(*(long *)(lVar37 + 0x20),0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    fVar51 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar48 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar55 = *(float *)((long)unaff_x19 + 0x404);
    fVar43 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    unaff_s14 = fVar41 * fVar48 * fVar55 * fVar43;
    fVar41 = (fVar40 / (float)iVar10) * fVar54 * fVar58 * fVar53 * fVar42;
    fVar54 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
  }
  unaff_d11 = (ulong)(uint)fVar41;
  *_iStack00000000000000d8 = lVar37;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8,lVar37);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar37 + 0x2c) = 1;
  *(float *)(lVar37 + 0x160) = fVar41;
  *(long *)(lVar37 + 0x40) = *in_stack_000000b8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar37 = *unaff_x22;
  if ((lVar37 == 0) || (lVar26 = *(long *)(lVar37 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  _fStack0000000000000120 = CONCAT44(fVar51,fVar54);
  in_stack_00000168._4_4_ = 0.0;
  *(int *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
  *(int *)(unaff_x19 + 0x24) = (int)lVar25;
LAB_03549e30:
  unaff_d13 = 0;
  if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
    unaff_d13 = unaff_d11;
  }
UnityEngine_AndroidJNISafe__ToSByteArray:
  lVar37 = *(long *)(lVar37 + 0x38);
  if (lVar37 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar37 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar37 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar37 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (param_1 = *(long *)(unaff_x19[0x6d] + 0x38), param_1 == 0))
  goto LAB_0354fbf4;
  in_x9 = (long)(int)*unaff_x20;
  in_w10 = *(uint *)(param_1 + 0x18);
  in_stack_000017d8 = uVar17;
  goto code_r0x03549ec4;
LAB_0354d7c0:
  uVar9 = uVar22 - 1;
  if (*(uint *)(lVar37 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
  lVar39 = (long)(int)uVar9;
  lVar15 = lVar37 + lVar39 * 0x178;
  uVar11 = *(uint *)(lVar15 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = *(long *)(lVar15 + 0x38);
  lVar36 = (long)(int)uVar11;
  lVar26 = lVar26 + lVar36 * 0x5c;
  uVar29 = *(uint *)(lVar26 + 0x68);
  uVar30 = (uint)*(ushort *)(lVar15 + 0x20);
  uVar59 = *(uint *)(lVar26 + 0x3c);
  iVar2 = *(int *)(lVar26 + 0x20);
  iVar12 = *(int *)(lVar26 + 0x28);
  iVar13 = *(int *)(lVar26 + 0x2c);
  fVar42 = *(float *)(lVar26 + 0x4c);
  uVar32 = *(uint *)(lVar26 + 0x40);
  fVar43 = *(float *)(lVar26 + 0x54);
  fVar58 = *(float *)(lVar26 + 0x58);
  fVar55 = *(float *)(lVar26 + 0x5c);
  fVar44 = *(float *)(lVar26 + 0x60);
  fVar51 = *(float *)(lVar26 + 0x6c);
  fVar50 = *(float *)(lVar26 + 0x70);
  fVar53 = *(float *)(lVar26 + 0x74);
  fVar48 = *(float *)(lVar26 + 0x78);
  if ((int)uVar29 < 9) {
    switch(uVar29) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar44 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar58;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar44 + fVar55 * 0.5) - fVar58 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar55 + fVar44) - fVar58;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar55 + fVar44;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar29 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar30 < 0xad) {
      if ((uVar30 != 3) && (uVar30 != 10)) {
FUN_0354d8fc:
        if (*(uint *)(lVar37 + 0x18) <= uVar59)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar37 + (long)(int)uVar59 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b8cc4(uVar3,0);
        if ((uVar16 & 1) == 0) {
          bVar1 = (int)uVar11 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar58 <= fVar55) && (!bVar1 && uVar29 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar44;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar55 + fVar44;
          }
          goto LAB_0354d9d8;
        }
        if (((uVar22 == 1) || (uVar11 != uVar24)) || (uVar9 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar44;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar55 + fVar44;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar30,0);
          uStack00000000000000f0 = 0;
        }
        else {
          cVar21 = (char)unaff_x19[0x1e];
          fVar44 = -fVar58;
          if (cVar21 != '\0') {
            fVar44 = fVar58;
          }
          if (*(uint *)(lVar37 + 0x18) <= uVar59)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar13 = (int)*(char *)(lVar37 + (long)(int)uVar59 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000030 & 1)) + iVar13 + -1;
          if (iVar13 < 1) {
            fVar58 = 1.0;
            iVar13 = 1;
          }
          else {
            fVar58 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar30 == 9) {
LAB_0354f76c:
            fVar58 = 1.0 - fVar58;
          }
          else {
            if (uVar30 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_026b97f8(uVar30,0);
              cVar21 = (char)unaff_x19[0x1e];
              if ((uVar16 & 1) != 0) goto LAB_0354f76c;
            }
            iVar13 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar12;
          }
          fVar58 = ((fVar55 + fVar44) * fVar58) / (float)iVar13;
          if (cVar21 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar58;
            uStack00000000000000f0 =
                 CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                          (float)uStack00000000000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar58;
          }
        }
      }
    }
    else if (((uVar30 != 0xad) && (uVar30 != 0x200b)) && (uVar30 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar29 == 0x20) {
    fVar58 = fVar51 + fVar53;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar29 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar37 + lVar39 * 0x178;
  fVar44 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar58 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar55 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar12 = *(int *)(lVar37 + lVar39 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_0354e05c;
  fVar54 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar11,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar15 = lVar37 + lVar39 * 0x178;
    *(undefined4 *)(lVar15 + 0x84) = 0;
    *(undefined4 *)(lVar15 + 0xac) = 0;
    *(undefined4 *)(lVar15 + 0xd4) = 0x3f800000;
    fVar54 = 1.0;
    break;
  case 1:
    fVar48 = *(float *)(lVar37 + lVar39 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar15 = lVar37 + lVar39 * 0x178;
      fVar53 = (in_stack_000000f8._4_4_ + fVar48) - *(float *)(in_stack_00000078 + 0x230);
      fVar48 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar15 = lVar37 + lVar39 * 0x178;
    fVar53 = fVar53 - fVar51;
    *(float *)(lVar15 + 0x84) = fVar54 + (fVar48 - fVar51) / fVar53;
    *(float *)(lVar15 + 0xac) = fVar54 + (*(float *)(lVar15 + 0x98) - fVar51) / fVar53;
    *(float *)(lVar15 + 0xd4) = fVar54 + (*(float *)(lVar15 + 0xc0) - fVar51) / fVar53;
    fVar54 = fVar54 + (*(float *)(lVar15 + 0xe8) - fVar51) / fVar53;
    break;
  case 2:
    lVar15 = lVar37 + lVar39 * 0x178;
    fVar48 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar53 = (in_stack_000000f8._4_4_ + *(float *)(lVar15 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar15 + 0x84) = fVar54 + fVar53 / fVar48;
    *(float *)(lVar15 + 0xac) =
         fVar54 + ((in_stack_000000f8._4_4_ + *(float *)(lVar15 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar15 + 0xd4) =
         fVar54 + ((in_stack_000000f8._4_4_ + *(float *)(lVar15 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar54 = fVar54 + ((in_stack_000000f8._4_4_ + *(float *)(lVar15 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar15 = lVar37 + lVar39 * 0x178;
      *(undefined4 *)(lVar15 + 0x88) = 0;
      *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar15 + 0xd8) = 0;
      *(undefined4 *)(lVar15 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar15 = lVar37 + lVar39 * 0x178;
      fVar48 = fVar48 - fVar50;
      fVar53 = fVar54 + (*(float *)(lVar15 + 0x74) - fVar50) / fVar48;
      fVar48 = fVar54 + (*(float *)(lVar15 + 0x9c) - fVar50) / fVar48;
      *(float *)(lVar15 + 0x88) = fVar53;
      *(float *)(lVar15 + 0xb0) = fVar48;
      *(float *)(lVar15 + 0xd8) = fVar53;
      *(float *)(lVar15 + 0x100) = fVar48;
      break;
    case 2:
      lVar15 = lVar37 + lVar39 * 0x178;
      fVar53 = fVar54 + (*(float *)(lVar15 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar15 + 0x88) = fVar53;
      fVar48 = *(float *)(unaff_x19 + 0x9c);
      fVar51 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar15 + 0xd8) = fVar53;
      fVar53 = fVar54 + (*(float *)(lVar15 + 0x9c) - fVar48) / (fVar51 - fVar48);
      *(float *)(lVar15 + 0xb0) = fVar53;
      *(float *)(lVar15 + 0x100) = fVar53;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar29 = (uint)*(undefined8 *)(lVar37 + 0x18);
    }
    if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar37 + lVar39 * 0x178;
    fVar53 = *(float *)(lVar15 + 0x15c);
    fVar48 = (1.0 - (*(float *)(lVar15 + 0x88) + *(float *)(lVar15 + 0xb0)) * fVar53) * 0.5;
    fVar51 = fVar54 + *(float *)(lVar15 + 0x88) * fVar53 + fVar48;
    fVar54 = fVar54 + fVar48 + *(float *)(lVar15 + 0xb0) * fVar53;
    *(float *)(lVar15 + 0x84) = fVar51;
    *(float *)(lVar15 + 0xac) = fVar51;
    *(float *)(lVar15 + 0xd4) = fVar54;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar37 + lVar39 * 0x178 + 0xfc) = fVar54;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar37 + lVar39 * 0x178;
    *(undefined4 *)(lVar15 + 0x88) = 0;
    *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar15 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar15 + 0x100) = 0;
    break;
  case 1:
    if (uVar9 < uVar29) {
      lVar15 = lVar37 + lVar39 * 0x178;
      fVar42 = fVar42 - fVar43;
      fVar54 = (*(float *)(lVar15 + 0x74) - fVar43) / fVar42;
      fVar42 = (*(float *)(lVar15 + 0x9c) - fVar43) / fVar42;
      *(float *)(lVar15 + 0x88) = fVar54;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar37 + lVar39 * 0x178;
    fVar54 = (*(float *)(lVar15 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar15 + 0x88) = fVar54;
    fVar42 = (*(float *)(lVar15 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar15 + 0xb0) = fVar42;
    *(float *)(lVar15 + 0xd8) = fVar42;
    *(float *)(lVar15 + 0x100) = fVar54;
    break;
  case 3:
    if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar37 + lVar39 * 0x178;
    fVar42 = *(float *)(lVar15 + 0x15c);
    fVar53 = (1.0 - (*(float *)(lVar15 + 0x84) + *(float *)(lVar15 + 0xd4)) / fVar42) * 0.5;
    fVar54 = *(float *)(lVar15 + 0x84) / fVar42 + fVar53;
    fVar53 = fVar53 + *(float *)(lVar15 + 0xd4) / fVar42;
    *(float *)(lVar15 + 0x88) = fVar54;
    *(float *)(lVar15 + 0xb0) = fVar53;
    *(float *)(lVar15 + 0x100) = fVar54;
    *(float *)(lVar15 + 0xd8) = fVar53;
  }
  if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar15 = lVar37 + lVar39 * 0x178;
  fVar54 = ABS(fVar40) * *(float *)(lVar15 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar15 + 0x5c) == '\0') && ((*(byte *)(lVar37 + lVar39 * 0x178 + 400) & 1) != 0)) {
    fVar54 = -fVar54;
  }
  lVar15 = lVar37 + lVar39 * 0x178;
  fVar42 = *(float *)(lVar15 + 0x88);
  fVar48 = *(float *)(lVar15 + 0x84);
  fVar53 = -2.1474836e+09;
  if (fVar48 != INFINITY) {
    fVar53 = (float)(int)fVar48;
  }
  fVar51 = *(float *)(lVar15 + 0xd4);
  fVar50 = *(float *)(lVar15 + 0xd8);
  fVar43 = -2.1474836e+09;
  if (fVar42 != INFINITY) {
    fVar43 = (float)(int)fVar42;
  }
  uVar46 = FUN_03591d3c(fVar48 - fVar53,fVar42 - fVar43);
  *(undefined4 *)(lVar15 + 0x84) = uVar46;
  if (*(uint *)(lVar37 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar50 = fVar50 - fVar43;
  *(float *)(lVar15 + 0x88) = fVar54;
  uVar46 = FUN_03591d3c(fVar48 - fVar53,fVar50);
  *(undefined4 *)(lVar37 + lVar39 * 0x178 + 0xac) = uVar46;
  if (*(uint *)(lVar37 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar51 = fVar51 - fVar53;
  *(float *)(lVar37 + lVar39 * 0x178 + 0xb0) = fVar54;
  fVar53 = (float)FUN_03591d3c(fVar51,fVar50);
  *(float *)(lVar15 + 0xd4) = fVar53;
  if (*(uint *)(lVar37 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar15 + 0xd8) = fVar54;
  uVar46 = FUN_03591d3c(fVar51,fVar42 - fVar43);
  *(undefined4 *)(lVar37 + lVar39 * 0x178 + 0xfc) = uVar46;
  uVar29 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar37 + lVar39 * 0x178 + 0x100) = fVar54;
LAB_0354e05c:
  if (((int)uVar9 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar11 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar26 = lVar37 + lVar39 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar55 + *(float *)(lVar26 + 0x78);
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar55 + *(float *)(lVar26 + 0xa0);
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar55 + *(float *)(lVar26 + 200);
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar55 + *(float *)(lVar26 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar11 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar9 < uVar29) {
        if (*(uint *)(lVar37 + lVar39 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar29 = *(uint *)(lVar37 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar15 = lVar37 + lVar39 * 0x178;
  *(undefined8 *)(lVar15 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar15 + 0x78) = uVar46;
  if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar15 = lVar37 + lVar39 * 0x178;
  *(undefined8 *)(lVar15 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar15 + 0xa0) = uVar46;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar15 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar15 + 200) = uVar46;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar15 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar15 + 0xf0) = uVar46;
  *(undefined1 *)(lVar26 + 0x194) = 0;
LAB_0354e184:
  if (iVar12 == 0) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar28)();
  }
  else if (iVar12 == 1) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar39 * 0x178;
  uVar17 = *(undefined8 *)(lVar26 + 0x11c);
  *(undefined8 *)(lVar26 + 0x11c) =
       CONCAT44(fVar58 + (float)((ulong)uVar17 >> 0x20),fVar44 + (float)uVar17);
  *(float *)(lVar26 + 0x124) = fVar55 + *(float *)(lVar26 + 0x124);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar39 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar55 + *(float *)(lVar26 + 0x118);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar39 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar55 + *(float *)(lVar26 + 0x130);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar39 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar44 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *unaff_x22;
  if ((lVar26 == 0) || (lVar15 = *(long *)(lVar26 + 0x38), lVar15 == 0)) goto LAB_0354fbf4;
  uVar29 = *(uint *)(lVar15 + 0x18);
  if (uVar29 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar34 = lVar15 + lVar39 * 0x178;
  *(float *)(lVar34 + 0x150) = fVar58 + *(float *)(lVar34 + 0x150);
  *(ulong *)(lVar34 + 0x140) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar34 + 0x140));
  *(ulong *)(lVar34 + 0x148) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar34 + 0x148));
  if (uVar11 == uVar24) {
    uVar24 = *unaff_x20 - 1;
    if (uVar9 == uVar24) goto LAB_0354e3ec;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar34 = (long)(int)uVar24;
    lVar35 = lVar26 + lVar34 * 0x5c;
    fVar53 = fVar58 + *(float *)(lVar35 + 0x54);
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar58 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar53;
    *(float *)(lVar35 + 0x58) = fVar44 + *(float *)(lVar35 + 0x58);
    if (uVar29 <= *(uint *)(lVar35 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar46 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar34 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar53;
    *(undefined4 *)(lVar26 + 0x6c) = uVar46;
    lVar26 = *unaff_x22;
    if ((lVar26 == 0) || (lVar15 = *(long *)(lVar26 + 0x50), lVar15 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_0354fbf4;
    uVar24 = *(uint *)(lVar15 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + lVar34 * 0x5c;
    *(undefined4 *)(lVar15 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar24 * 0x178 + 0x128);
    *(undefined4 *)(lVar15 + 0x78) = *(undefined4 *)(lVar15 + 0x4c);
    uVar24 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar9 == uVar24) {
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar15 = *(long *)(lVar26 + 0x50), lVar15 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar34 = lVar15 + lVar36 * 0x5c;
      fVar53 = fVar58 + *(float *)(lVar34 + 0x54);
      *(ulong *)(lVar34 + 0x4c) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar34 + 0x4c));
      *(float *)(lVar34 + 0x54) = fVar53;
      *(float *)(lVar34 + 0x58) = fVar44 + *(float *)(lVar34 + 0x58);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar34 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar46 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar15 = lVar15 + lVar36 * 0x5c;
      *(float *)(lVar15 + 0x70) = fVar53;
      *(undefined4 *)(lVar15 + 0x6c) = uVar46;
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar15 = *(long *)(lVar26 + 0x50), lVar15 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar24 = *(uint *)(lVar15 + lVar36 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = lVar15 + lVar36 * 0x5c;
      *(undefined4 *)(lVar15 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar24 * 0x178 + 0x128);
      *(undefined4 *)(lVar15 + 0x78) = *(undefined4 *)(lVar15 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar16 = FUN_026b82c4(uVar30,0);
  if (((((uVar16 & 1) == 0) && (1 < uVar30 - 0x2010)) && (uVar30 != 0xad)) && (uVar30 != 0x2d)) {
    if (bVar4) {
      if (((uVar22 != 1) && ((int)uVar9 < (int)(*(uint *)(lVar37 + 0x18) - 1))) &&
         (((int)uVar9 < (int)*unaff_x20 && ((uVar30 == 0x2019 || (uVar30 == 0x27)))))) {
        if (*(uint *)(lVar37 + 0x18) <= uVar22 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar37 + lVar25 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b82c4(uVar3,0);
        if ((uVar16 & 1) != 0) {
          if (*(uint *)(lVar37 + 0x18) <= uVar22)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(lVar37 + lVar25 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b82c4(uVar3,0);
          if ((uVar16 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar22 != 1) {
LAB_0354f144:
        bVar4 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b81f8(uVar30,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b63d8(uVar30,0);
        if (((uVar30 != 0x200b) && ((uVar16 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar9 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b82c4(uVar30,0);
      iVar12 = (int)fStack0000000000000124;
      if ((uVar16 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar12 = uVar22 - 2;
    }
    lVar26 = *unaff_x22;
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar15 = *(long *)(lVar26 + 0x40);
    if (lVar15 == 0) goto LAB_0354fbf4;
    uVar24 = *(uint *)(lVar26 + 0x24);
    iVar13 = *(int *)(lVar15 + 0x18);
    if (iVar13 < (int)(uVar24 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar26 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar26 = *unaff_x22;
      if (lVar26 == 0) goto LAB_0354fbf4;
    }
    lVar26 = *(long *)(lVar26 + 0x40);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = lVar26 + (long)(int)uVar24 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(float *)(lVar26 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar26 + 0x2c) = iVar12;
    *(int *)(lVar26 + 0x30) = (iVar12 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar26 = unaff_x19[0x6d];
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar15 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar15 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + lVar36 * 0x5c;
    bVar4 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
  }
  else {
    if (!bVar4) {
      in_stack_00000168._4_4_ = (float)uVar9;
    }
    if (uVar9 == *unaff_x20 - 1) {
      lVar26 = *unaff_x22;
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar15 = *(long *)(lVar26 + 0x40);
      if (lVar15 == 0) goto LAB_0354fbf4;
      uVar24 = *(uint *)(lVar26 + 0x24);
      iVar12 = *(int *)(lVar15 + 0x18);
      if (iVar12 < (int)(uVar24 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar12 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar26 = *unaff_x22;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + (long)(int)uVar24 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(float *)(lVar26 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar26 + 0x2c) = uVar9;
      *(uint *)(lVar26 + 0x30) = uVar22 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar26 = unaff_x19[0x6d];
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar15 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar15 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = lVar15 + lVar36 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
    }
LAB_0354e610:
    bVar4 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar24 = *(uint *)(lVar26 + 0x18);
  if (uVar24 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar8) {
LAB_0354e660:
      if (uVar24 <= uVar22 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *unaff_x19;
      uVar46 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      uVar47 = *(undefined4 *)(lVar26 + lVar25 + -0x2f8);
LAB_0354ebc0:
      pcVar28 = *(code **)(lVar15 + 0x8d8);
LAB_0354ebc8:
      (*pcVar28)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar46,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar47);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar7;
      }
LAB_0354ec1c:
      fVar41 = 0.0;
      bVar8 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar8 = false;
    }
  }
  else {
    lVar26 = lVar26 + lVar39 * 0x178;
    iVar12 = *(int *)(lVar26 + 0x68);
    *(int *)(lVar26 + 0x16c) = iVar10;
    if ((((int)unaff_x19[0x65] < (int)uVar9) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar12 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_026b63d8(uVar30,0);
    if ((uVar30 != 0x200b) && ((uVar16 & 1) == 0)) {
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar15 = *(long *)(lVar26 + 0x38), lVar15 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar53 = *(float *)(lVar15 + lVar39 * 0x178 + 0x160);
      if (fVar41 <= fVar53) {
        fVar41 = fVar53;
      }
      if (fStack0000000000000100 <= ABS(fVar54)) {
        fStack0000000000000100 = ABS(fVar54);
      }
      if ((float)iVar12 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *unaff_x22;
          if (lVar26 == 0) goto LAB_0354fbf4;
          lVar15 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar15 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar15 + 0x15a8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar42 = *(float *)(lVar26 + lVar39 * 0x178 + 0x14c);
      fVar53 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar42 = fVar42 + fVar41 * fVar53;
      fStack000000000000005c = (float)iVar12;
      if (fVar42 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar42;
      }
    }
    if (!bVar8) {
      bVar8 = false;
      if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar32 < (int)uVar9)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar9 == uVar32) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b97f8(uVar30,0);
        if ((uVar16 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar39 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar26 + 0x160);
      fStack0000000000000070 = *(float *)(lVar26 + 0x11c);
      bVar8 = fVar41 != 0.0;
      fVar53 = in_stack_00000080._4_4_;
      if (bVar8) {
        fVar53 = fVar41;
      }
      fVar41 = fVar53;
      uVar57 = *(undefined4 *)(lVar26 + 0x168);
      _bStack000000000000006c = 0;
      fVar53 = fVar54;
      if (bVar8) {
        fVar53 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar53;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        if (uVar9 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar39 * 0x178;
          lVar15 = *unaff_x19;
          uVar46 = *(undefined4 *)(lVar26 + 0x128);
          uVar47 = *(undefined4 *)(lVar26 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar9 == uVar59) || ((int)uVar32 <= (int)uVar9)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        lVar15 = lVar39;
        uVar24 = uVar9;
        if (uVar30 == 0x200b || (uVar16 & 1) != 0) {
          lVar15 = (long)(int)uVar32;
          uVar24 = uVar32;
        }
        if (uVar24 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar15 * 0x178;
          uVar46 = *(undefined4 *)(lVar26 + 0x128);
          uVar47 = *(undefined4 *)(lVar26 + 0x160);
          pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar24 = *(uint *)(lVar26 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar9 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar16 = FUN_03567ad8(uVar57,*(undefined4 *)(lVar26 + lVar25),0);
      if ((uVar16 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          if (uVar9 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar39 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar26 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar26 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar26 = *(long *)puVar7;
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
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar9)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar33 == 0) goto LAB_0354fbf4;
  uVar24 = *(uint *)(lVar26 + lVar39 * 0x178 + 400);
  fVar53 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar24 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar22 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar46 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      fVar58 = *(float *)(lVar26 + lVar25 + -0x30c);
      pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar28)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar46,
                 fStack00000000000000a8 * fVar53 + fVar58,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar5 = false;
  }
  else {
    lVar26 = *unaff_x22;
    if ((lVar26 == 0) || (lVar15 = *(long *)(lVar26 + 0x38), lVar15 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar9)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar15 + lVar39 * 0x178 + 0x174) = iVar10;
    if ((((int)unaff_x19[0x65] < (int)uVar9) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar15 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar32 < (int)uVar9)) ||
       (bVar5 || !bVar1)) {
LAB_0354ed84:
      if (!bVar5) goto LAB_0354f250;
    }
    else {
      if (uVar9 == uVar32) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b97f8(uVar30,0);
        if ((uVar16 & 1) != 0) goto LAB_0354ed84;
        lVar26 = *unaff_x22;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar39 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar26 + 0x60);
      fStack0000000000000040 = *(float *)(lVar26 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar26 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar26 + 0x160);
      fStack000000000000009c = fVar53 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar24 = *unaff_x20;
    if (uVar24 == 1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar24 = *(uint *)(lVar26 + 0x18);
LAB_0354ef0c:
        if (uVar9 < uVar24) {
          lVar26 = lVar26 + lVar39 * 0x178;
          lVar15 = *unaff_x19;
          uVar46 = *(undefined4 *)(lVar26 + 0x128);
          fVar58 = *(float *)(lVar26 + 0x14c);
LAB_0354ef24:
          pcVar28 = *(code **)(lVar15 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar9 == uVar59) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar24 = *(uint *)(lVar26 + 0x18);
        if (uVar30 == 0x200b || (uVar16 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar15 = lVar39;
        if (uVar9 < uVar24) {
LAB_0354f1f8:
          lVar26 = lVar26 + lVar15 * 0x178;
          fVar58 = *(float *)(lVar26 + 0x14c);
          uVar46 = *(undefined4 *)(lVar26 + 0x128);
          pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar9 < (int)uVar24) {
      lVar26 = *unaff_x22;
      if ((lVar26 != 0) && (lVar15 = *(long *)(lVar26 + 0x38), lVar15 != 0)) {
        if (uVar22 < *(uint *)(lVar15 + 0x18)) {
          if (*(float *)(lVar15 + lVar25 + -0x108) == in_stack_00000048._4_4_) {
            fVar42 = *(float *)(lVar15 + lVar25 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_03567bac(fVar58 + fVar42,fStack0000000000000040,0);
            if ((uVar16 & 1) != 0) {
              uVar24 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar26 = *unaff_x22;
            if (lVar26 == 0) goto LAB_0354fbf4;
          }
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 != 0) {
            uVar24 = *(uint *)(lVar26 + 0x18);
            if ((int)uVar9 <= (int)uVar32) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar15 = (long)(int)uVar32;
            if (uVar32 < uVar24) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar9 < (int)uVar24) {
      iVar12 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar37 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar37 + lVar25 + -0x130);
      if (lVar26 == 0) goto LAB_0354fbf4;
      iVar13 = FUN_036d3364(lVar26,0);
      if (iVar12 != iVar13) {
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          uVar24 = *(uint *)(lVar26 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        if (uVar22 - 2 < *(uint *)(lVar26 + 0x18)) {
          lVar15 = *unaff_x19;
          uVar46 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
          fVar58 = *(float *)(lVar26 + lVar25 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar5 = true;
  }
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar24 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar24 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar9) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar6) {
LAB_0354f400:
      if (uVar24 <= uVar9) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar39 * 0x178;
      fVar53 = *(float *)(lVar26 + 0x128);
      fVar43 = *(float *)(lVar26 + 0x188);
      uVar14 = *(undefined8 *)(lVar26 + 0x17c);
      fVar55 = *(float *)(lVar26 + 0x184);
      uVar17 = *(undefined8 *)(lVar26 + 0x184);
      fVar51 = *(float *)(lVar26 + 0x18c);
      fVar58 = *(float *)(lVar26 + 0x11c);
      fVar42 = *(float *)(lVar26 + 0x148);
      fVar48 = *(float *)(lVar26 + 0x150);
      in_stack_00000188 = uVar14;
      fStack0000000000000190 = fVar55;
      fStack0000000000000194 = fVar43;
      in_stack_00000198 = fVar51;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar16 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar16 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar53 = fVar53 + (float)in_stack_000017c8;
        fVar58 = fVar58 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar42 = fVar42 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar58 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar58;
        }
        if (fVar48 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar48 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar53) {
          fStack00000000000000d0 = fVar53;
        }
        if (fStack00000000000000d4 <= fVar42) {
          fStack00000000000000d4 = fVar42;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar58 = (fVar58 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar48 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar48;
        }
        if (fStack00000000000000d4 <= fVar42) {
          fStack00000000000000d4 = fVar42;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar58,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar48 - fVar51;
        fStack00000000000000d0 = fVar53 + fVar55;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar42 + fVar43;
        fStack00000000000000e0 = fVar58;
        in_stack_000017c0 = uVar14;
        in_stack_000017c8 = uVar17;
        in_stack_000017d0 = fVar51;
      }
      if (((*unaff_x20 == 1) || (uVar9 == uVar59)) || (((int)uVar32 <= (int)uVar9 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar6 = true;
    }
    else {
      if ((((uVar30 != 0xd) && ((uVar30 & 0xfffe) != 10)) && ((int)uVar9 <= (int)uVar32)) && (bVar1)
         ) {
        if (uVar9 == uVar32) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar30,0);
          if ((uVar16 & 1) != 0) goto LAB_0354f374;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar7;
        }
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          uVar24 = (uint)*(undefined8 *)(lVar26 + 0x18);
          if (uVar9 < uVar24) {
            lVar15 = *(long *)(lVar15 + 0xb8);
            lVar33 = lVar26 + lVar39 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar33 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar33 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar15 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar15 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar33 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar15 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar15 + 0x15a4);
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
  uVar9 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar25 = lVar25 + 0x178;
  bVar1 = (int)uVar9 <= (int)uVar22;
  uVar24 = uVar11;
  uVar22 = uVar22 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar37 = *unaff_x22;
  if (lVar37 != 0) {
    iVar10 = uVar11 + 1;
    plVar38 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar37 + 0x18) = uVar9;
    lVar25 = unaff_x19[0xd4];
    *(int *)(lVar37 + 0x2c) = iVar10;
    if ((int)uVar9 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar37 + 0x1c) = (int)lVar25;
    *(int *)(lVar37 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar37 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar37 = unaff_x19[0xdb];
    if (lVar37 != 0) {
      (**(code **)(lVar37 + 0x18))
                (*(undefined8 *)(lVar37 + 0x40),*unaff_x22,*(undefined8 *)(lVar37 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x60), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar38 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar37 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar37 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
        if (*(int *)(lVar37 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
            if (*(int *)(lVar37 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
                if (*(int *)(lVar37 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
                    if (*(int *)(lVar37 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar37 = *unaff_x22;
                        if (lVar37 != 0) {
                          lVar26 = 0;
                          lVar25 = 0;
                          do {
                            uVar16 = lVar25 + 1;
                            if ((long)*(int *)(lVar37 + 0x34) <= (long)uVar16) goto LAB_0354d0cc;
                            lVar37 = *(long *)(lVar37 + 0x60);
                            if (lVar37 == 0) break;
                            if (*(int *)(*plVar38 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar37 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar37 + lVar26 + 0x70,0);
                            lVar37 = unaff_x19[0xe1];
                            if (lVar37 == 0) break;
                            if (*(uint *)(lVar37 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar17 = *(undefined8 *)(lVar37 + lVar25 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar19 = FUN_036d35a8(uVar17,0,0);
                            if ((uVar19 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar37 = *(long *)(*unaff_x22 + 0x60), lVar37 == 0)) break;
                                if (*(int *)(*plVar38 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar37 + 0x18) <= uVar16)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar37 + lVar26 + 0x70,1,0);
                              }
                              lVar37 = unaff_x19[0xe1];
                              if (lVar37 == 0) break;
                              if (*(uint *)(lVar37 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar37 = *(long *)(lVar37 + lVar25 * 8 + 0x28);
                              if (lVar37 == 0) break;
                              lVar37 = FUN_0359d5ac(lVar37,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar37 == 0) break;
                              FUN_036a460c(lVar37,*(undefined8 *)(lVar15 + lVar26 + 0x80),0);
                              lVar37 = unaff_x19[0xe1];
                              if (lVar37 == 0) break;
                              if (*(uint *)(lVar37 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar37 = *(long *)(lVar37 + lVar25 * 8 + 0x28);
                              if (lVar37 == 0) break;
                              lVar37 = FUN_0359d5ac(lVar37,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar37 == 0) break;
                              FUN_036a4810(lVar37,*(undefined8 *)(lVar15 + lVar26 + 0x98),0);
                              lVar37 = unaff_x19[0xe1];
                              if (lVar37 == 0) break;
                              if (*(uint *)(lVar37 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar37 = *(long *)(lVar37 + lVar25 * 8 + 0x28);
                              if (lVar37 == 0) break;
                              lVar37 = FUN_0359d5ac(lVar37,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar37 == 0) break;
                              FUN_036a48bc(lVar37,*(undefined8 *)(lVar15 + lVar26 + 0xa0),0);
                              lVar37 = unaff_x19[0xe1];
                              if (lVar37 == 0) break;
                              if (*(uint *)(lVar37 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar37 = *(long *)(lVar37 + lVar25 * 8 + 0x28);
                              if (lVar37 == 0) break;
                              lVar37 = FUN_0359d5ac(lVar37,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar37 == 0) break;
                              FUN_036a4e24(lVar37,*(undefined8 *)(lVar15 + lVar26 + 0xa8),0);
                              lVar37 = unaff_x19[0xe1];
                              if (lVar37 == 0) break;
                              if (*(uint *)(lVar37 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar37 = *(long *)(lVar37 + lVar25 * 8 + 0x28);
                              if ((lVar37 == 0) || (lVar37 = FUN_0359d5ac(lVar37,0), lVar37 == 0))
                              break;
                              FUN_036aa280(lVar37,0);
                            }
                            lVar37 = *unaff_x22;
                            lVar25 = lVar25 + 1;
                            lVar26 = lVar26 + 0x50;
                          } while (lVar37 != 0);
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


