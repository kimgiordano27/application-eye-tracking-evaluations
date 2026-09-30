/*
FUNCTION_NAME: UnityEngine.GlobalJavaObjectRef$$.ctor
ENTRY_POINT: 0354a1f8
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


void UnityEngine_GlobalJavaObjectRef___ctor(float param_1,float param_2,float param_3)

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
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  undefined1 uVar19;
  char cVar20;
  undefined4 *puVar21;
  uint in_w9;
  uint uVar22;
  long lVar23;
  float *pfVar24;
  code *pcVar25;
  uint uVar26;
  uint uVar27;
  float *pfVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar34;
  long *unaff_x22;
  uint unaff_w23;
  int iVar35;
  ulong unaff_x24;
  long lVar36;
  long *plVar37;
  uint unaff_w26;
  long lVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float unaff_s8;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  ulong unaff_d11;
  float unaff_s12;
  float fVar54;
  ulong unaff_d13;
  undefined4 uVar55;
  float unaff_s14;
  uint uVar56;
  float fVar57;
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
  
code_r0x0354a1f8:
  fVar42 = unaff_s8 - (float)unaff_d13 * param_1 * (param_3 - param_2);
  *(float *)(unaff_x19 + 200) = fVar42;
  uVar16 = in_stack_000017d8;
  if ((in_stack_000017ec == in_w9) || (unaff_w21 != 0)) {
    *(float *)(unaff_x19 + 200) =
         fVar42 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
  }
LAB_0354a230:
  fVar51 = *(float *)(unaff_x19 + 0x56);
  fVar42 = 0.0;
  fVar40 = (float)unaff_d13;
  if (fVar51 != 0.0) {
    fVar42 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar43 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar42 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar51 * 0.5 - fVar40 * (fVar42 * 0.5 + fVar43));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar42;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar36 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_036cee6c(lVar36,0,0);
    fVar43 = 0.0;
    if ((uVar15 & 1) != 0) {
      lVar36 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar37 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar36 == 0) goto LAB_0354fbf4;
      uVar15 = FUN_03699d3c(lVar36,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar43 = 0.0;
      if ((uVar15 & 1) != 0) {
        lVar36 = *in_stack_00000170;
        if (*(int *)(*plVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar37 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar36 == 0) goto LAB_0354fbf4;
        fVar51 = (float)FUN_0369e060(lVar36,*(undefined4 *)(*(long *)(*plVar37 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar52 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar43 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar43 = fVar43 * fVar51 * fVar52 * 0.25;
        if (fVar51 < in_stack_00000168._4_4_ + fVar43) {
          in_stack_00000168._4_4_ = fVar51 - fVar43;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar36 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_036cee6c(lVar36,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar15 & 1) != 0) {
      lVar36 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar37 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar36 == 0) goto LAB_0354fbf4;
      uVar15 = FUN_03699d3c(lVar36,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar15 & 1) != 0) {
        lVar36 = *in_stack_00000170;
        if (*(int *)(*plVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar37 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar36 == 0) goto LAB_0354fbf4;
        uVar15 = FUN_03699d3c(lVar36,*(undefined4 *)(*(long *)(*plVar37 + 0xb8) + 0xcc),0);
        if ((uVar15 & 1) != 0) {
          lVar36 = *in_stack_00000170;
          if (*(int *)(*plVar37 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar37 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar36 != 0) {
            fVar51 = (float)FUN_0369e060(lVar36,*(undefined4 *)(*(long *)(*plVar37 + 0xb8) + 0x54),0
                                        );
            if ((*in_stack_00000178 != 0) && (*in_stack_00000170 != 0)) {
              fVar52 = *(float *)(*in_stack_00000178 + 0x1a8);
              fVar43 = (float)FUN_0369e060(*in_stack_00000170,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
              fVar43 = fVar43 * fVar51 * fVar52 * 0.25;
              if (fVar51 < in_stack_00000168._4_4_ + fVar43) {
                in_stack_00000168._4_4_ = fVar51 - fVar43;
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
  fVar51 = *(float *)(unaff_x19 + 200);
  fVar52 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar51 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar40 * (unaff_s12 + ((fVar52 - in_stack_00000168._4_4_) - fVar43));
  fVar52 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar57 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s14 + fVar40 * ((float)unaff_d15 + in_stack_00000168._4_4_ + fVar52)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar52 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar57 - fVar40 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar52);
  fVar52 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar47 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar40 * (fVar43 + fVar43 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar52);
  fStack0000000000000104 = fVar51;
  fVar52 = fVar47;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar44 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar52 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar45 = fVar44 * fVar40 * (fVar43 + in_stack_00000168._4_4_ + fVar52);
    fVar52 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar41 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar57 = fVar57 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar44 = fVar44 * fVar40 * (((fVar52 - fVar41) - in_stack_00000168._4_4_) - fVar43);
    fVar41 = fVar51 + fVar45;
    fVar52 = fVar47 + fVar44;
    fVar50 = (fVar45 - fVar44) * 0.5;
    fVar51 = (fVar51 + fVar44) - fVar50;
    fVar47 = (fVar47 + fVar45) - fVar50;
    fStack0000000000000104 = fVar41 - fVar50;
    fVar52 = fVar52 - fVar50;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar44 = 0.0;
    fVar45 = 0.0;
    fVar49 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar50 = fStack0000000000000134;
    fVar41 = fVar57;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar53 = (fVar47 + fVar51) * 0.5;
    fVar54 = (fStack0000000000000134 + fVar57) * 0.5;
    fVar57 = fVar57 - fVar54;
    fStack0000000000000100 = 0.0;
    fVar41 = fVar57;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar53,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar53 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar50 = fStack0000000000000134 - fVar54;
    fVar44 = 0.0;
    fStack0000000000000134 = fVar50;
    fVar51 = (float)FUN_036bdd2c(fVar51 - fVar53,_fStack0000000000000070,0);
    fVar51 = fVar53 + fVar51;
    fVar44 = fVar44 + 0.0;
    fStack0000000000000134 = fVar54 + fStack0000000000000134;
    fVar49 = 0.0;
    fVar47 = (float)FUN_036bdd2c(fVar47 - fVar53,_fStack0000000000000070,0);
    fVar47 = fVar53 + fVar47;
    fVar57 = fVar54 + fVar57;
    fVar49 = fVar49 + 0.0;
    fVar45 = 0.0;
    fVar52 = (float)FUN_036bdd2c(fVar52 - fVar53,_fStack0000000000000070,0);
    fVar52 = fVar53 + fVar52;
    fVar45 = fVar45 + 0.0;
    fVar50 = fVar54 + fVar50;
    fVar41 = fVar54 + fVar41;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar36 = *(long *)(*unaff_x22 + 0x38);
  uVar15 = unaff_d13 & 0xffffffff;
  if (lVar36 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar36 + 0x11c) = fVar51;
  *(float *)(lVar36 + 0x120) = fStack0000000000000134;
  *(float *)(lVar36 + 0x124) = fVar44;
  if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar36 + 0x114) = fVar41;
  *(float *)(lVar36 + 0x110) = fStack0000000000000104;
  *(float *)(lVar36 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar36 + 0x128) = fVar47;
  *(float *)(lVar36 + 300) = fVar57;
  *(float *)(lVar36 + 0x130) = fVar49;
  if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar36 + 0x134) = fVar52;
  *(float *)(lVar36 + 0x138) = fVar50;
  *(float *)(lVar36 + 0x13c) = fVar45;
  if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  uVar11 = *unaff_x20;
  lVar38 = (long)(int)uVar11;
  if (*(uint *)(lVar36 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar36 + lVar38 * unaff_x24;
  *(int *)(lVar23 + 0x140) = (int)unaff_x19[200];
  fVar57 = *(float *)(unaff_x19 + 0x9b);
  uVar18 = (ulong)(uint)fVar57;
  fVar52 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar23 + 0x15c) = (fVar47 - fVar51) / (fVar41 - fStack0000000000000134);
  *(float *)(lVar23 + 0x14c) = (unaff_s14 - fVar57) + fVar52;
  fVar51 = fStack0000000000000124 * fVar40;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar51 = fVar51 / in_stack_00000150;
    fStack0000000000000120 = (fStack0000000000000120 * fVar40) / in_stack_00000150;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar40;
  }
  uVar22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar11 == uVar22)) {
    fStack0000000000000120 = fVar52 + fStack0000000000000120;
    fVar51 = fVar52 + fVar51;
    fVar41 = fStack0000000000000120;
    fVar47 = fVar51;
    if (fVar52 != 0.0) {
      fVar47 = (fVar51 - fVar52) / *(float *)((long)unaff_x19 + 0x404);
      fVar41 = (fStack0000000000000120 - fVar52) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar47 <= fVar51) {
        fVar47 = fVar51;
      }
      if (fStack0000000000000120 <= fVar41) {
        fVar41 = fStack0000000000000120;
      }
    }
    lVar36 = lVar36 + lVar38 * unaff_x24;
    fVar52 = fVar47;
    if (fVar47 <= *(float *)(unaff_x19 + 0x99)) {
      fVar52 = *(float *)(unaff_x19 + 0x99);
    }
    fVar44 = fVar41;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar41) {
      fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar44;
    *(float *)(unaff_x19 + 0x99) = fVar52;
    *(float *)(lVar36 + 0x154) = fVar47;
    *(float *)(lVar36 + 0x158) = fVar41;
    *(float *)(lVar36 + 0x148) = fVar51 - fVar57;
    *(float *)(unaff_x19 + 0x98) = fVar51 - fVar57;
    *(float *)(lVar36 + 0x150) = fStack0000000000000120 - fVar57;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar57;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar52;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar52 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar47 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      in_stack_00000150 = (fVar40 * fVar47) / in_stack_00000150;
      uVar18 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar52 <= in_stack_00000150) {
        fVar52 = in_stack_00000150;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar52;
    }
    if ((float)uVar18 == 0.0) {
      fVar52 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar51) {
        fVar52 = fVar51;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar52;
    }
  }
  else {
    fVar51 = *(float *)(unaff_x19 + 0x99);
    lVar36 = lVar36 + lVar38 * unaff_x24;
    *(float *)(lVar36 + 0x154) = fVar51;
    fVar52 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar51 = fVar51 - fVar57;
    *(float *)(lVar36 + 0x148) = fVar51;
    *(float *)(lVar36 + 0x158) = fVar52;
    *(float *)(unaff_x19 + 0x98) = fVar51;
    fVar52 = fVar52 - fVar57;
    *(float *)(lVar36 + 0x150) = fVar52;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
  }
  lVar36 = *unaff_x22;
  if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0354fbf4;
  uVar56 = *unaff_x20;
  if (*(uint *)(lVar38 + 0x18) <= uVar56)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar38 = lVar38 + (long)(int)uVar56 * unaff_x24;
  *(undefined1 *)(lVar38 + 0x194) = 0;
  uVar26 = *(uint *)(unaff_x19 + 0x4f);
  iVar35 = (int)unaff_x24;
  uVar34 = in_stack_000017ec;
  if (((in_stack_000017ec == 9) ||
      ((((unaff_w21 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)))) ||
     (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar38 + 0x194) = 1;
    pfVar24 = _fStack00000000000000a0;
    pfVar28 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar36 = *(long *)(lVar36 + 0x50);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar28 = (float *)(lVar36 + 0x60);
      pfVar24 = (float *)(lVar36 + 100);
    }
    fVar52 = *pfVar28;
    fVar47 = *pfVar24;
    fVar51 = *(float *)(unaff_x19 + 0x6c);
    fVar57 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar52) - fVar47;
    bVar9 = true;
    if ((fVar51 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar51))) {
      bVar9 = fVar51 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000f8._4_4_ = fVar51;
    }
    fVar51 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar51 = (float)FUN_03776cb4(&stack0x000017a0,0);
      uVar18 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar41 = (float)unaff_d11;
    if (in_stack_000017ec != 0xad) {
      fVar41 = fVar40;
    }
    fVar49 = (float)uVar18;
    fVar45 = 0.0;
    if ((0.0 < fVar49) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar56 = *unaff_x20;
    fVar45 = (*(float *)(unaff_x19 + 0x97) - (fVar50 - fVar49)) + fVar45;
    if (fStack00000000000000c4 < fVar45) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar56;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      in_stack_000017d8 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar53 = *(float *)(unaff_x19 + 0x59);
        if (((fVar53 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar49)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar42 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar45) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar42 <= fVar53) {
            fVar42 = fVar53;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar45 = *(float *)(unaff_x19 + 0x4a);
        uVar18 = (ulong)(uint)fVar45;
        if ((fVar45 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar42 = (fVar49 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar42 <= DAT_00d38b84) {
            fVar42 = DAT_00d38b84;
          }
          fVar51 = (fVar49 - fVar42) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar49;
          fVar42 = DAT_00d38e60;
          if (fVar51 != INFINITY) {
            fVar42 = (float)(int)fVar51 / 20.0;
          }
          if (fVar42 <= fVar45) {
            fVar42 = fVar45;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar36 = *(long *)puVar8;
        }
        lVar38 = *(long *)(lVar36 + 0xb8);
        lVar36 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
          lVar36 = FUN_01a46ff8(lVar36);
        }
        piVar17 = (int *)thunk_FUN_01a59484(lVar38 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar36 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar17 == 0) {
LAB_0354cf2c:
          in_stack_000017d8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar36 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar36 = *(long *)puVar8;
          }
          FUN_0209b778(*(long *)(lVar36 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
          iVar10 = FUN_0358c15c();
LAB_0354b3a0:
          iVar12 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar12;
          in_stack_00000180 = in_stack_00000180 + 1;
          in_stack_000017b8 = iVar10 - 1;
          in_stack_000017d8 = CONCAT44(0x2026,iVar12);
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
        if ((uVar56 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          fVar42 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar42 - fVar50) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar18 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar36 = NEON_rev64(uVar18,4);
          unaff_x19[0x99] = lVar36;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          in_stack_000017d8 = uVar16;
        }
        goto LAB_03549564;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar36 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar15 = FUN_036cee6c(lVar36,0,0);
        if ((uVar15 & 1) != 0) {
          plVar37 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar37 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar37 + 0x528))(plVar37,uVar16,*(undefined8 *)(*plVar37 + 0x530));
          lVar36 = unaff_x19[0x5d];
          if (lVar36 == 0) goto LAB_0354fbf4;
          *(int *)(lVar36 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar36,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar37 = (long *)unaff_x19[0x5d];
          if (plVar37 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar37 + 0x7a8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_0354b0e0:
      in_stack_000017d8 = CONCAT44(3,uVar56);
      goto LAB_03549564;
    }
switchD_0354ad3c_caseD_2:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar57 = ABS(fVar57) + fVar51 * (1.0 - fVar44) * fVar41;
    fVar51 = 1.0;
    if ((uVar26 & 0x18) != 0) {
      fVar51 = DAT_00d38acc;
    }
    fVar41 = fVar51 * in_stack_000000f8._4_4_;
    if (fVar57 <= fVar41) {
LAB_0354b8e4:
      if (in_stack_000017ec == 0xad) {
        if ((*unaff_x22 != 0) && (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar36 + 0x18)) {
            *(undefined1 *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (in_stack_000017ec != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar41,fVar43);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
        }
        uVar56 = *unaff_x20;
        if ((in_stack_00000060 & 1) != 0) {
          *(uint *)(in_stack_00000078 + 0x1f0) = uVar56;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar56;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar36 = *(long *)(unaff_x19[0x6d] + 0x50), lVar36 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000060 = 0;
            *(float *)(lVar36 + 0x60) = fVar52;
            *(float *)(lVar36 + 100) = fVar47;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      lVar36 = *unaff_x22;
      if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0354fbf4;
      uVar56 = *unaff_x20;
      if (uVar56 < *(uint *)(lVar38 + 0x18)) {
        *(undefined1 *)(lVar38 + (long)(int)uVar56 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar56;
        lVar38 = *(long *)(lVar36 + 0x50);
        if (lVar38 != 0) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
            goto LAB_0354b950;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    uVar18 = (ulong)(uint)fVar43;
    if (((char)unaff_x19[0x5b] != '\0') && (uVar56 != *(uint *)(unaff_x19 + 0x93))) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017b8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar36 = *unaff_x22;
        if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar41 = *(float *)(unaff_x19 + 0x9b);
        fVar44 = 0.0;
        if ((0.0 < fVar41) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar44 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar44 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar36 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar36 == 0) goto LAB_0354fbf4;
        fVar41 = *(float *)(unaff_x19 + 0x9b);
        fVar44 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 != 0) {
        uVar29 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar36 + 0x18) <= uVar29) ||
           (uVar4 = uVar29 - 1, *(uint *)(lVar36 + 0x18) <= uVar4))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar18 = (ulong)(uint)(fVar44 + *(float *)(unaff_x19 + 0x97));
        fVar50 = (fVar44 + *(float *)(unaff_x19 + 0x97) + fVar41) -
                 *(float *)(lVar36 + (long)(int)uVar29 * unaff_x24 + 0x158);
        if (((bStack000000000000006c & 1) == 0 &&
             *(short *)(lVar36 + (long)(int)uVar4 * (long)iVar35 + 0x20) == 0xad) &&
           ((fVar50 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar4;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          in_stack_000017d8 = CONCAT44(0x2d,uVar4);
          goto LAB_03549564;
        }
        if (*(short *)(lVar36 + (long)(int)uVar29 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000006c = 1;
          in_stack_000017d8 = uVar16;
          goto LAB_03549564;
        }
        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar41 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar41 <= fVar44) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar18 = (ulong)(uint)fVar44;
            fVar41 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar44 <= fVar41) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_0354b6dc;
LAB_0354fcd0:
            fVar42 = (fVar44 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar42 <= DAT_00d38b84) {
              fVar42 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar44;
            fVar44 = fVar44 - fVar42;
            goto LAB_0354fc60;
          }
LAB_0354fc94:
          fVar42 = fVar57;
          if (0.0 < fVar44) {
            fVar42 = fVar57 / (1.0 - fVar44);
          }
          fVar44 = fVar44 + (fVar57 - fVar51 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar42;
LAB_0354fc24:
          if (fVar41 <= fVar44) {
            fVar44 = fVar41;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar44;
          return;
        }
LAB_0354b6dc:
        lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar36 = *(long *)puVar8;
        }
        iVar10 = *(int *)(*(long *)(lVar36 + 0xb8) + 0xe78);
        if (((iVar10 != iStack000000000000002c) && (iVar10 != -1)) &&
           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar36 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar36 = *(long *)(unaff_x19[0x6d] + 0x38), lVar36 == 0))
          goto LAB_0354fbf4;
          uVar29 = *unaff_x20 - 1;
          if (*(uint *)(lVar36 + 0x18) <= uVar29)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar10;
          if (*(short *)(lVar36 + (long)(int)uVar29 * (long)iVar35 + 0x20) == 0xad) {
            bStack000000000000006c = 0;
            *unaff_x20 = uVar29;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            in_stack_000017d8 = CONCAT44(0x2d,uVar29);
            goto LAB_03549564;
          }
        }
        if (fVar50 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
          FUN_0358cbd4(in_stack_00000050,uVar15,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                       in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
          }
          fVar41 = fStack00000000000000c4;
          if ((char)unaff_x19[0x47] != '\0') {
            fVar41 = *(float *)(unaff_x19 + 0x59);
            if ((fVar41 < *(float *)((long)unaff_x19 + 700)) &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar42 = *(float *)((long)unaff_x19 + 700) +
                       ((fStack0000000000000018 - fVar50) / (float)((int)unaff_x19[0x95] + 1)) /
                       in_stack_00000050;
              if (fVar42 <= fVar41) {
                fVar42 = fVar41;
              }
UnityEngine_AndroidJavaObject___ctor:
              *(float *)((long)unaff_x19 + 700) = fVar42;
              return;
            }
            fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar41 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar44 < fVar41) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fc94;
            fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar18 = (ulong)(uint)fVar44;
            fVar41 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar41 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fcd0;
          }
          switch((int)unaff_x19[0x5c]) {
          case 0:
          case 2:
          case 4:
            goto switchD_0354b88c_caseD_0;
          case 1:
            lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar36 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar38 = *(long *)(lVar36 + 0xb8);
            lVar36 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
              lVar36 = FUN_01a46ff8(lVar36);
            }
            piVar17 = (int *)thunk_FUN_01a59484(lVar38 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar36 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            if (*piVar17 == 0) {
              bStack000000000000006c = 0;
              goto LAB_0354cf2c;
            }
            lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar36 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            FUN_0209b778(*(long *)(lVar36 + 0xb8) + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            memcpy(&stack0x00001018,&stack0x000008b0,0x378);
            iVar10 = FUN_0358c15c();
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
            FUN_0358cbd4(in_stack_00000050,uVar15,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            break;
          case 6:
            lVar36 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_036cee6c(lVar36,0,0);
            if ((uVar15 & 1) != 0) {
              plVar37 = (long *)unaff_x19[0x5d];
              uVar16 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar37 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar37 + 0x528))(plVar37,uVar16,*(undefined8 *)(*plVar37 + 0x530));
              lVar36 = unaff_x19[0x5d];
              if (lVar36 == 0) goto LAB_0354fbf4;
              *(int *)(lVar36 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar36,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar37 = (long *)unaff_x19[0x5d];
              if (plVar37 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar37 + 0x7a8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7b0));
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
      fVar41 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if (fVar44 < fVar41) {
        fVar42 = fVar57 / (1.0 - fVar44);
        if (fVar44 <= 0.0) {
          fVar42 = fVar57;
        }
        fVar44 = fVar44 + (fVar57 - fVar51 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar42;
        goto LAB_0354fc24;
      }
      fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar41 = *(float *)(unaff_x19 + 0x4a);
      if (fVar41 < fVar44) {
        fVar42 = (fVar44 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar42 <= DAT_00d38b84) {
          fVar42 = DAT_00d38b84;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar44;
        fVar44 = fVar44 - fVar42;
LAB_0354fc60:
        fVar51 = fVar44 * 20.0 + 0.5;
        fVar42 = DAT_00d38e60;
        if (fVar51 != INFINITY) {
          fVar42 = (float)(int)fVar51 / 20.0;
        }
        if (fVar42 <= fVar41) {
          fVar42 = fVar41;
        }
LAB_0354d004:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar42;
        return;
      }
    }
    iVar10 = (int)unaff_x19[0x5c];
    if (iVar10 == 1) {
      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar8;
      }
      lVar38 = *(long *)(lVar36 + 0xb8);
      lVar36 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar36 + 0x135) & 1) == 0) {
        lVar36 = FUN_01a46ff8(lVar36);
      }
      piVar17 = (int *)thunk_FUN_01a59484(lVar38 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar36 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar17 == 0) goto LAB_0354cf2c;
      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar8;
      }
      FUN_0209b778(*(long *)(lVar36 + 0xb8) + 0x11f0,&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
      goto LAB_0354b394;
    }
    if (iVar10 != 6) {
      if (iVar10 == 3) {
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
    lVar36 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar15 = FUN_036cee6c(lVar36,0,0);
    if ((uVar15 & 1) != 0) {
      plVar37 = (long *)unaff_x19[0x5d];
      uVar16 = (**(code **)(*unaff_x19 + 0x518))();
      if (plVar37 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar37 + 0x528))(plVar37,uVar16,*(undefined8 *)(*plVar37 + 0x530));
      lVar36 = unaff_x19[0x5d];
      if (lVar36 == 0) goto LAB_0354fbf4;
      *(int *)(lVar36 + 0x400) = (int)unaff_x19[0x80];
      FUN_0357ee30(lVar36,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar37 = (long *)unaff_x19[0x5d];
      if (plVar37 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar37 + 0x7a8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7b0));
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
LAB_0354b4b4:
    in_stack_000017d8 = CONCAT44(3,*unaff_x20);
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar43 = (float)uVar18;
      fVar51 = 0.0;
      if ((0.0 < fVar43) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar51 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar18 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar43)) + fVar51)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar56;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar36 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar15 = FUN_036cee6c(lVar36,0,0);
        if ((uVar15 & 1) != 0) {
          plVar37 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar37 != (long *)0x0) {
            (**(code **)(*plVar37 + 0x528))(plVar37,uVar16,*(undefined8 *)(*plVar37 + 0x530));
            lVar36 = unaff_x19[0x5d];
            if (lVar36 != 0) {
              *(int *)(lVar36 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar36,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar37 = (long *)unaff_x19[0x5d];
              if (plVar37 != (long *)0x0) {
                (**(code **)(*plVar37 + 0x7a8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7b0));
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
        lVar36 = *unaff_x22;
        if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x50), lVar38 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
        *(int *)(lVar36 + 0x20) = *(int *)(lVar36 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b97f8(in_stack_000017ec,0);
      if ((uVar15 & 1) != 0) goto LAB_0354b500;
    }
    if (in_stack_000017ec == 0xa0) {
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x50), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar36 + 0x20) = *(int *)(lVar36 + 0x20) + 1;
    }
LAB_0354ba38:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      iVar10 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar52 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar36 = unaff_x19[0xca];
      fVar43 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar43 = 1.0;
      }
      if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar57 = *(float *)((long)unaff_x19 + 0x404);
      fVar44 = *(float *)(lVar36 + 0x2c);
      fVar47 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
      fVar41 = *_fStack00000000000000a8;
      fVar47 = fVar57 * (fVar51 / (float)iVar10) * fVar52 * fVar43 * fVar44 * fVar47;
      fVar51 = *_fStack00000000000000a0;
      if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
        goto LAB_0354fbf4;
        uVar56 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar36 + 0x18) <= uVar56)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar43 = *(float *)(lVar36 + (long)(int)uVar56 * (long)iVar35 + 0x60);
        iVar10 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar57 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar36 = unaff_x19[0xca];
        fVar52 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar52 = 1.0;
        }
        if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_0354fbf4;
        fVar44 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = *(float *)(lVar36 + 0x2c);
        fVar47 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x50), lVar36 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar41 = *(float *)(lVar36 + 0x60);
        fVar51 = *(float *)(lVar36 + 100);
        fVar47 = fVar44 * (fVar43 / (float)iVar10) * fVar57 * fVar52 * fVar50 * fVar47;
      }
      fVar57 = *(float *)(unaff_x19 + 0x9b);
      fVar43 = 0.0;
      fVar52 = 0.0;
      if ((0.0 < fVar57) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar50 = *(float *)(unaff_x19 + 0x97);
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar44 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar36 = *(long *)(unaff_x19[0xca] + 0x20), lVar36 == 0))
        goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,lVar36,0);
        fVar43 = (float)FUN_03776cb4(&stack0x00001710,0);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar49 = *(float *)(unaff_x19 + 0x6c);
      fVar51 = (fStack000000000000009c - fVar41) - fVar51;
      bVar9 = true;
      if ((fVar49 <= fVar51) && (bVar9 = false, !NAN(fVar49))) {
        bVar9 = fVar49 == -1.0;
      }
      if (!bVar9) {
        fVar51 = fVar49;
      }
      fVar41 = 1.0;
      if ((uVar26 & 0x18) != 0) {
        fVar41 = DAT_00d38acc;
      }
      if (((fVar50 - (fVar45 - fVar57)) + fVar52 < fStack00000000000000c4) &&
         (ABS(fVar44) + fVar47 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar41 * fVar51)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar36 = *(long *)(*(long *)puVar8 + 0xb8);
        memcpy(&stack0x00000538,(void *)(lVar36 + 0x788),0x378);
        FUN_0209b210(lVar36 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar36 = *unaff_x22;
    if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar38 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar56 = *(uint *)(unaff_x19 + 0x95);
    lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar38 + 100) = uVar56;
    *(int *)(lVar38 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017ec || ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) == 0)))) {
      lVar36 = *(long *)(lVar36 + 0x50);
      if (lVar36 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
      if (*(uint *)(lVar36 + 0x18) <= uVar56)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(int *)(lVar36 + (long)(int)uVar56 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar36 = *(long *)(lVar36 + 0x50);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar56)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*(int *)(lVar36 + (long)(int)uVar56 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
    }
    if (in_stack_000017ec == 9) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar42 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar43 = *(float *)(unaff_x19 + 200);
      fVar51 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar51 = fVar40 * fVar42 * fVar51;
      fVar42 = fVar51 * (float)(int)(fVar43 / fVar51);
      uVar18 = (ulong)(uint)fVar42;
      if (fVar42 <= fVar43) {
        fVar42 = fVar43 + fVar51;
      }
LAB_0354c000:
      *(float *)(unaff_x19 + 200) = fVar42;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar43 = 1.0;
        }
        else {
          fVar43 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
        }
        fVar42 = *(float *)(unaff_x19 + 200);
        fVar52 = (float)FUN_03776cb4(&stack0x000017a0,0);
        if (unaff_x19[0x20] != 0) {
          fVar51 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar42 = fVar42 + fVar51 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar40 * (in_stack_00000128 + fVar43 * fVar52) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     in_stack_00000138 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar42;
          goto joined_r0x0354bf48;
        }
        goto LAB_0354fbf4;
      }
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar42 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar40 * in_stack_00000128 +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac))
               );
      uVar18 = (ulong)(uint)fVar42;
      fVar42 = *(float *)(unaff_x19 + 200) - fVar42;
      *(float *)(unaff_x19 + 200) = fVar42;
      if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) {
        fVar51 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar18 = (ulong)(uint)fVar51;
        fVar42 = fVar42 - fVar51;
        goto LAB_0354c000;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar51 = *(float *)(unaff_x19 + 200);
      fVar42 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar42) +
                        fStack00000000000000d4 *
                        (in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar42;
joined_r0x0354bf48:
      if ((in_stack_000017ec == 0x200b) || (uVar18 = (ulong)(uint)fVar51, unaff_w21 != 0)) {
        fVar51 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar18 = (ulong)(uint)fVar51;
        fVar42 = fVar42 + fVar51;
        goto LAB_0354c000;
      }
    }
    lVar36 = *unaff_x22;
    if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0354fbf4;
    uVar56 = *unaff_x20;
    uVar26 = (uint)*(undefined8 *)(lVar38 + 0x18);
    if (uVar26 <= uVar56) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar38 + (long)(int)uVar56 * unaff_x24 + 0x144) = fVar42;
    uVar29 = in_stack_000017ec;
    if ((int)in_stack_000017ec < 0xd) {
      if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
      if (((unaff_w23 & in_stack_000017ec == 0x2d) != 0) ||
         ((float)uVar56 == in_stack_00000080._4_4_)) goto LAB_0354c060;
    }
    else {
      if (1 < in_stack_000017ec - 0x2028) {
        if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
        uVar18 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar56 != in_stack_00000080._4_4_) goto LAB_0354c704;
      }
LAB_0354c060:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar42 = *(float *)(unaff_x19 + 0x99);
        fVar51 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar42 = fVar42 - fVar51;
        if (((fStack0000000000000058 < ABS(fVar42)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar42);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar42;
          *(float *)(unaff_x19 + 0x9b) = fVar42 + *(float *)(unaff_x19 + 0x9b);
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar36 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar36 = *(long *)puVar8;
          }
          lVar38 = *(long *)(lVar36 + 0xb8);
          if (*(int *)(lVar38 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar36 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar38 + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar36 + 0xb8) + 0x788),&stack0x000008b0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar36 + 0xb8) + 0x818,0);
            lVar36 = *(long *)(*(long *)puVar8 + 0xb8);
            *(float *)(lVar36 + 0x7bc) = fVar42 + *(float *)(lVar36 + 0x7bc);
            *(float *)(lVar36 + 0x800) = fVar42 + *(float *)(lVar36 + 0x800);
            memcpy(&stack0x000001c0,(void *)(lVar36 + 0x788),0x378);
            FUN_0209b210(lVar36 + 0x11f0,&stack0x000001c0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar43 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar51 = *(float *)((long)unaff_x19 + 0x4cc) - fVar43;
      fVar42 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar51 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar42 = fVar51;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar42;
      fVar52 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017e4 == '\0') {
        in_stack_000017e8 = fVar42;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017e4 = '\x01';
      }
      lVar36 = *unaff_x22;
      if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x50), lVar38 == 0)) goto LAB_0354fbf4;
      uVar56 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar38 + 0x18) <= uVar56)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = unaff_x19[0x93];
      lVar14 = lVar38 + (long)(int)uVar56 * 0x5c;
      *(int *)(lVar14 + 0x34) = (int)lVar23;
      uVar26 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar23 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar26 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar26;
      *(uint *)(lVar14 + 0x38) = uVar26;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar14 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar10 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar26 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar10 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar10;
      *(int *)(lVar14 + 0x40) = iVar10;
      *(int *)(lVar14 + 0x24) = (*(int *)(lVar14 + 0x3c) - *(int *)(lVar14 + 0x34)) + 1;
      *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar26)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar55 = *(undefined4 *)(lVar36 + (long)(int)uVar26 * (long)iVar35 + 0x11c);
      lVar38 = lVar38 + (long)(int)uVar56 * 0x5c;
      *(float *)(lVar38 + 0x70) = fVar51;
      *(undefined4 *)(lVar38 + 0x6c) = uVar55;
      lVar36 = *unaff_x22;
      if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x50), lVar38 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar52 = fVar52 - fVar43;
      uVar18 = (ulong)(uint)fVar52;
      lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar38 + 0x74) =
           *(undefined4 *)
            (lVar36 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar38 + 0x78) = fVar52;
      lVar36 = *unaff_x22;
      if ((lVar36 == 0) || (lVar23 = *(long *)(lVar36 + 0x50), lVar23 == 0)) goto LAB_0354fbf4;
      lVar14 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar38 = lVar23 + lVar14 * 0x5c;
      *(float *)(lVar38 + 0x44) = *(float *)(lVar38 + 0x74) - fVar40 * in_stack_00000168._4_4_;
      *(float *)(lVar38 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar38 + 0x24) == 1) {
        *(int *)(lVar23 + lVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0))
      goto LAB_0354fbf4;
      lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar26 = (uint)*(undefined8 *)(lVar38 + 0x18);
      if (uVar26 <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(char *)(lVar38 + lVar39 * unaff_x24 + 0x194) == '\0') &&
         (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar26 <= *(uint *)(unaff_x19 + 0x94)))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar14 * 0x5c;
      fVar40 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)
                ) - *(float *)((long)unaff_x19 + 0x2ac));
      fVar42 = -fVar40;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar42 = fVar40;
      }
      *(float *)(lVar23 + 0x58) = *(float *)(lVar38 + lVar39 * unaff_x24 + 0x144) + fVar42;
      *(float *)(lVar23 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar23 + 0x54) = fVar51;
      *(float *)(lVar23 + 0x48) = fStack000000000000005c + (fVar52 - fVar51);
      *(float *)(lVar23 + 0x4c) = fVar52;
      if ((int)in_stack_000017ec < 0x2d) {
        if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar36 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar10 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar10;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar36 != 0) && (*(long *)(lVar36 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar36 + 0x50) + 0x18) <= iVar10) {
              FUN_0358ca18();
              lVar36 = unaff_x19[0x6d];
              if (lVar36 == 0) goto LAB_0354fbf4;
            }
            lVar36 = *(long *)(lVar36 + 0x38);
            if (lVar36 != 0) {
              if (*unaff_x20 < *(uint *)(lVar36 + 0x18)) {
                fVar42 = *(float *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017ec == 0x2029) || (fVar51 = 0.0, in_stack_000017ec == 10)) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar19 = 0;
                  fVar51 = fVar42 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           in_stack_00000050 *
                           (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar51) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017ec == 0x2029) || (fVar51 = 0.0, in_stack_000017ec == 10)) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar19 = 1;
                  fVar51 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar51);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar51;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar19;
                puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar36 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar36 = *(long *)puVar8;
                }
                uVar13 = *(undefined8 *)(*(long *)(lVar36 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar42;
                uVar15 = NEON_rev64(uVar13,4);
                unaff_x19[0x99] = uVar15;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
                bStack0000000000000068 = 1;
                in_stack_00000060 = 1;
                uVar18 = uVar15;
                in_stack_000017d8 = uVar16;
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
          uVar29 = 3;
        }
      }
      else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d)) goto LAB_0354c4a8;
    }
LAB_0354c704:
    uVar56 = *unaff_x20;
    if (uVar26 <= uVar56) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(char *)(lVar38 + (long)(int)uVar56 * unaff_x24 + 0x194) != '\0') {
      lVar38 = lVar38 + (long)(int)uVar56 * unaff_x24;
      uVar18 = *(ulong *)(lVar38 + 0x11c);
      uVar15 = *(ulong *)(in_stack_00000078 + 0x230);
      *(ulong *)(in_stack_00000078 + 0x230) =
           uVar15 ^ (uVar15 ^ uVar18) &
                    ~CONCAT44(-(uint)((float)(uVar15 >> 0x20) < (float)(uVar18 >> 0x20)),
                              -(uint)((float)uVar15 < (float)uVar18));
      uVar15 = *(ulong *)(in_stack_00000078 + 0x238);
      uVar18 = *(ulong *)(lVar38 + 0x128);
      *(ulong *)(in_stack_00000078 + 0x238) =
           uVar15 ^ (uVar15 ^ uVar18) &
                    ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) < (float)(uVar15 >> 0x20)),
                              -(uint)((float)uVar18 < (float)uVar15));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar29 || ((1 << (ulong)(uVar29 & 0x1f) & 0x2c00U) == 0)))) {
      lVar38 = *(long *)(lVar36 + 0x58);
      if (lVar38 == 0) goto LAB_0354fbf4;
      iVar10 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar38 + 0x18) < iVar10) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar36 + 0x58),iVar10,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar36 = *unaff_x22;
        if (lVar36 == 0) goto LAB_0354fbf4;
      }
      lVar38 = *(long *)(lVar36 + 0x58);
      if (lVar38 == 0) goto LAB_0354fbf4;
      uVar26 = *(uint *)(unaff_x19 + 0x96);
      lVar23 = (long)(int)uVar26;
      uVar56 = *(uint *)(lVar38 + 0x18);
      if (uVar56 <= uVar26) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = lVar38 + lVar23 * 0x14;
      fVar51 = *(float *)(lVar14 + 0x30);
      uVar18 = (ulong)(uint)fVar51;
      *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar42 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar51 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar42 = fVar51;
      }
      *(float *)(lVar14 + 0x30) = fVar42;
      uVar29 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar29 == 0 && uVar26 == 0) {
        *(uint *)(lVar38 + (ulong)uVar26 * 0x14 + 0x20) = uVar29;
      }
      else {
        uVar4 = uVar29 - 1;
        if (0 < (int)uVar29) {
          lVar36 = *(long *)(lVar36 + 0x38);
          if (lVar36 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar36 + 0x18) <= uVar4)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (uVar26 != *(uint *)(lVar36 + (ulong)uVar4 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar26 - 1 < uVar56) {
              *(uint *)(lVar38 + 0x20 + (long)(int)(uVar26 - 1) * 0x14 + 4) = uVar4;
              *(uint *)(lVar38 + 0x20 + lVar23 * 0x14) = uVar29;
              goto LAB_0354c780;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
        }
        if ((float)uVar29 == in_stack_00000080._4_4_) {
          *(float *)(lVar38 + lVar23 * 0x14 + 0x24) = in_stack_00000080._4_4_;
        }
      }
    }
LAB_0354c780:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
    if ((unaff_w21 == 0) &&
       (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
        if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
             (0x1d < in_stack_000017ec - 0xa961)) || (uVar15 = FUN_03597a54(0), (uVar15 & 1) != 0))
           && ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
                (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
        goto LAB_0354c904;
        lVar36 = FUN_035978e8(0);
        if ((lVar36 == 0) || (*(long *)(lVar36 + 0x10) == 0)) goto LAB_0354fbf4;
        uVar56 = FUN_0219c130(*(long *)(lVar36 + 0x10),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
          in_stack_000008b0 = in_stack_000017ec;
          if ((uVar56 & 1) == 0) {
LAB_0354cc08:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            bStack0000000000000068 = 0;
            goto LAB_0354cc90;
          }
LAB_0354cb6c:
          if (uVar11 != uVar22 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
          if (unaff_w21 != 0) goto LAB_0354cb88;
          goto LAB_0354cbc0;
        }
        lVar36 = FUN_035978e8(0);
        if (((lVar36 == 0) || (*unaff_x22 == 0)) ||
           (lVar38 = *(long *)(*unaff_x22 + 0x38), lVar38 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20 + 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(long *)(lVar36 + 0x18) == 0) goto LAB_0354fbf4;
        in_stack_000008b0 =
             (uint)*(ushort *)(lVar38 + (long)(int)(*unaff_x20 + 1) * (long)iVar35 + 0x20);
        uVar15 = FUN_0219c130(*(long *)(lVar36 + 0x18),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar56 & 1) != 0) goto LAB_0354cb6c;
        if ((uVar15 & 1) == 0) goto LAB_0354cc08;
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
      *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_0354cc90:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    in_stack_000017d8 = uVar16;
  }
LAB_03549564:
  do {
    unaff_d11 = unaff_d13 & 0xffffffff;
    in_stack_000017b8 = in_stack_000017b8 + 1;
    lVar36 = unaff_x19[0x8f];
    if (lVar36 == 0) goto LAB_0354fbf4;
    if ((int)*(uint *)(lVar36 + 0x18) <= (int)in_stack_000017b8) {
LAB_0354cf48:
      fVar42 = (float)uVar18;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar42 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar51 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar42 < fVar51) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar40 = (*(float *)((long)unaff_x19 + 0x23c) - fVar42) * 0.5;
          if (fVar40 <= DAT_00d38b84) {
            fVar40 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar42;
          fVar40 = (fVar42 + fVar40) * 20.0 + 0.5;
          fVar42 = DAT_00d38e60;
          if (fVar40 != INFINITY) {
            fVar42 = (float)(int)fVar40 / 20.0;
          }
          if (fVar51 <= fVar42) {
            fVar42 = fVar51;
          }
          goto LAB_0354d004;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar16 = FUN_0276793c(in_stack_00000038,0);
        uVar13 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar16,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar13,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar16,0);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar34 == 3)))) {
        (**(code **)(*unaff_x19 + 0x928))();
        goto LAB_0354d0cc;
      }
      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar8;
      }
      plVar37 = (long *)OVRPlugin_Media_TypeInfo;
      lVar36 = **(long **)(lVar36 + 0xb8);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      iVar35 = *(int *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x60), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar36 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_035968e8(lVar36 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar10 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar36 = unaff_x19[0xeb];
      in_stack_000000b8 = (long *)uStack00000000000000f0;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar10 < 0x401) {
        if (iVar10 == 0x100) {
          if (lVar36 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar36 + 0x18) < 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar16 = *(undefined8 *)(lVar36 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar38 = *(long *)(*unaff_x22 + 0x58), lVar38 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar38 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar42 = *(float *)(lVar38 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
          }
          else {
            fVar42 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar36 + 0x2c);
          fVar42 = (0.0 - fVar42) - fStack000000000000001c;
        }
        else if (iVar10 == 0x200) {
          if (lVar36 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fStack00000000000000c4 = (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
          uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar36 + 0x24) +
                            (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x58), lVar36 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar36 = lVar36 + (long)(int)uStack0000000000000034 * 0x14;
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar42 = ((fStack000000000000001c + *(float *)(lVar36 + 0x28) +
                      *(float *)(lVar36 + 0x30)) - fStack0000000000000020) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar42 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                     fStack0000000000000020) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar10 != 0x400) goto LAB_0354d620;
          if (lVar36 == 0) goto LAB_0354fbf4;
          if (*(int *)(lVar36 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar16 = *(undefined8 *)(lVar36 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar38 = *(long *)(*unaff_x22 + 0x58), lVar38 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar38 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            in_stack_000017e8 = *(float *)(lVar38 + (long)(int)uStack0000000000000034 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar36 + 0x20);
          fVar42 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
        }
LAB_0354d610:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar42);
      }
      else if (iVar10 == 0x800) {
        if (lVar36 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar42 = fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar36 + 0x24) +
                              (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar42;
      }
      else {
        if (iVar10 == 0x1000) {
          if (lVar36 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar36 + 0x18) != 1) && (*(int *)(lVar36 + 0x18) != 0)) {
            uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar36 + 0x24) +
                              (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
            fVar42 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
            goto LAB_0354d610;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        if (iVar10 == 0x2000) {
          if (lVar36 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar42 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                         fStack0000000000000020) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar36 + 0x24) +
                                (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5 + fVar42);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
        }
      }
LAB_0354d620:
      lVar36 = FUN_03559490();
      if (lVar36 == 0) goto LAB_0354fbf4;
      FUN_036df824(lVar36,0);
      *(float *)((long)unaff_x19 + 0x6e4) = fVar42;
      uVar55 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar8 = OVRPlugin_Mesh_TypeInfo;
      lVar36 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar8;
      }
      puVar21 = *(undefined4 **)(lVar36 + 0xb8);
      FUN_035683a4(*puVar21,puVar21[1],puVar21[2],puVar21[3],&stack0x000017c0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar36 = *unaff_x22;
      if (lVar36 == 0) goto LAB_0354fbf4;
      uVar11 = *unaff_x20;
      if ((int)uVar11 < 1) {
        iStack00000000000000d8 = 0;
        iVar35 = 0;
        goto LAB_0354f7f4;
      }
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0354fbf4;
      bVar9 = false;
      bVar7 = false;
      bVar5 = false;
      fStack0000000000000124 = 0.0;
      bVar6 = false;
      iStack00000000000000d8 = 0;
      uStack0000000000000030 = 0;
      in_stack_00000168._4_4_ = 0.0;
      fStack000000000000005c = 0.0;
      lVar38 = 0x2e0;
      fVar40 = 0.0;
      fVar51 = 0.0;
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
      uVar22 = 0;
      uVar56 = 1;
      goto LAB_0354d7c0;
    }
    if (*(uint *)(lVar36 + 0x18) <= in_stack_000017b8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_stack_000017ec = *(uint *)(lVar36 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
    if (in_stack_000017ec == 0) goto LAB_0354cf48;
    if (5 < in_stack_00000180) {
      uVar16 = FUN_0276793c(&stack0x000017ec,0);
      uVar13 = FUN_0276793c(&stack0x000017b8,0);
      uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar16,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar16,0);
      in_stack_000017d8 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017ec != 0x3c)) {
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar36 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar36 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar36 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar15 = FUN_03586568();
      if (((uVar15 & 1) != 0) &&
         (in_stack_000017b8 = in_stack_0000179c, uVar34 = in_stack_000017ec,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar36 = *(long *)(unaff_x19[0x6d] + 0x38), lVar36 == 0))
    goto LAB_0354fbf4;
    uVar11 = *unaff_x20;
    if (*(uint *)(lVar36 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = (long)(int)uVar11;
    unaff_w26 = (uint)*(byte *)(lVar36 + lVar23 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar38 = unaff_x19[0x24];
    if ((uint)in_stack_000017d8 == uVar11) {
      in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017ec == 0x2026) {
        *(long *)(lVar36 + lVar23 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar36 = *(long *)(unaff_x19[0x6d] + 0x38), lVar36 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar36 + 0x2c) = 0;
        *(long *)(lVar36 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar36 = *(long *)(unaff_x19[0x6d] + 0x38), lVar36 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(long *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
        goto LAB_0354fbf4;
        uVar11 = *unaff_x20;
        if (*(uint *)(lVar36 + 0x18) <= uVar11)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        unaff_w23 = 1;
        *(int *)(lVar36 + (long)(int)uVar11 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_000017d8 = CONCAT44(3,uVar11 + 1);
      }
      else if (in_stack_000017ec == 3) {
        if ((*in_stack_00000178 == 0) || (lVar14 = FUN_03568ac0(*in_stack_00000178,0), lVar14 == 0))
        goto LAB_0354fbf4;
        FUN_0219b634(lVar14,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar36 + 0x18) <= uVar11)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(ulong *)(lVar36 + lVar23 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008b4,in_stack_000008b0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar11 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + (long)(int)uVar11 * (long)iVar35;
      *(undefined1 *)(lVar36 + 0x194) = 0;
      *(undefined2 *)(lVar36 + 0x20) = 0x200b;
      *(undefined4 *)(lVar36 + 100) = 0;
      *unaff_x20 = uVar11 + 1;
      uVar34 = in_stack_000017ec;
      goto LAB_03549564;
    }
    iVar10 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar10 == 0) {
      uVar11 = *(uint *)((long)unaff_x19 + 0x25c);
      if ((uVar11 >> 4 & 1) == 0) {
        if ((uVar11 >> 3 & 1) == 0) {
          in_stack_00000150 = 1.0;
          if ((uVar11 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_026b812c(in_stack_000017ec,0);
            if ((uVar15 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b8410(in_stack_000017ec,0);
              in_stack_000017ec = uVar11 & 0xffff;
              in_stack_00000150 = fStack0000000000000024;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b8070(in_stack_000017ec,0);
          in_stack_00000150 = 1.0;
          if ((uVar15 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b8594(in_stack_000017ec,0);
            goto LAB_03549968;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b812c(in_stack_000017ec,0);
        in_stack_00000150 = 1.0;
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
          in_stack_00000150 = 1.0;
          in_stack_000017ec = uVar11 & 0xffff;
        }
      }
      iVar10 = *(int *)((long)unaff_x19 + 0x644);
    }
    else {
      in_stack_00000150 = 1.0;
    }
    uVar34 = in_stack_000017ec;
    if (iVar10 == 0) {
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *_iStack00000000000000d8 = *(long *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
      if (*_iStack00000000000000d8 != 0) {
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000178 = *(long *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *in_stack_00000170 = *(long *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
        goto LAB_0354fbf4;
        uVar22 = *unaff_x20;
        uVar11 = *(uint *)(lVar36 + 0x18);
        if (uVar11 <= uVar22) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar36 + (long)(int)uVar22 * unaff_x24 + 0x58);
        if (unaff_w23 == 0) {
LAB_03549a88:
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar42 = *(float *)(unaff_x19 + 0x3d);
          iVar10 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar36 = unaff_x19[0x20];
        }
        else {
          lVar38 = unaff_x19[0x8f];
          if (lVar38 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar38 + 0x18) <= in_stack_000017b8)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if ((*(int *)(lVar38 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
             (uVar22 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
          if (uVar11 <= uVar22 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar42 = *(float *)(lVar36 + (long)(int)(uVar22 - 1) * (long)iVar35 + 0x60);
          iVar10 = FUN_03776950(*in_stack_00000178 + 0x50,0);
          lVar36 = *in_stack_00000178;
        }
        if (lVar36 == 0) goto LAB_0354fbf4;
        fVar40 = (float)FUN_03776960(lVar36 + 0x50,0);
        fVar51 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar51 = 1.0;
        }
        uVar55 = 0;
        fStack0000000000000124 = 0.0;
        if ((unaff_w23 & in_stack_000017ec == 0x2026) == 0) {
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          uVar55 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
        }
        lVar36 = unaff_x19[0xc9];
        if (lVar36 == 0) goto LAB_0354fbf4;
        _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar55);
        if (*(long *)(lVar36 + 0x20) == 0) goto LAB_0354fbf4;
        fVar52 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = *(float *)(lVar36 + 0x2c);
        fVar43 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar57 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar44 = *(float *)((long)unaff_x19 + 0x404);
        fVar41 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        lVar36 = unaff_x19[0x6d];
        if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar38 + 0x2c) = 0;
        fVar51 = ((in_stack_00000150 * fVar42) / (float)iVar10) * fVar40 * fVar51;
        fVar43 = fVar51 * fVar52 * fVar47 * fVar43;
        unaff_d11 = (ulong)(uint)fVar43;
        *(float *)(lVar38 + 0x160) = fVar43;
        uVar11 = *(uint *)(unaff_x19 + 0x24);
        unaff_s14 = fVar51 * fVar57 * fVar44 * fVar41;
        if (uVar11 == 0) {
          in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
          goto LAB_03549e30;
        }
        lVar38 = unaff_x19[0xe1];
        if (lVar38 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar38 + 0x18) <= uVar11)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar38 = *(long *)(lVar38 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar38 == 0) goto LAB_0354fbf4;
        in_stack_00000168._4_4_ = *(float *)(lVar38 + 0x54);
        goto LAB_03549e30;
      }
      goto LAB_03549564;
    }
    if (iVar10 != 1) {
      lVar36 = *unaff_x22;
      unaff_s14 = 0.0;
      unaff_d13 = 0;
      if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
        unaff_d13 = unaff_d11;
      }
      if (lVar36 == 0) goto LAB_0354fbf4;
      _fStack0000000000000120 = 0;
      goto UnityEngine_AndroidJNISafe__ToSByteArray;
    }
    if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_000000b8 = *(long *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
         *(undefined4 *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
    if ((unaff_x19[0xd3] == 0) ||
       (lVar36 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar36 == 0))
    goto LAB_0354fbf4;
    FUN_02215a88(lVar36,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar36 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  } while (lVar36 == 0);
  if (in_stack_000017ec == 0x3c) {
    in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
  }
  else {
    lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar23 = *(long *)puVar8;
    }
    *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0x68);
  }
  if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
  fVar42 = *(float *)(unaff_x19 + 0x3d);
  memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
  iVar10 = FUN_03776950(&stack0x00001730,0);
  if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
  memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
  fVar40 = (float)FUN_03776960(&stack0x00001730,0);
  fVar51 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar51 = 1.0;
  }
  if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
  fVar51 = (fVar42 / (float)iVar10) * fVar40 * fVar51;
  iVar10 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
  fVar42 = *(float *)(unaff_x19 + 0x3d);
  if (iVar10 < 1) {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    iVar10 = FUN_03776950(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar43 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    fVar40 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar40 = 1.0;
    }
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    fVar52 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
    if (*(long *)(lVar36 + 0x20) == 0) goto LAB_0354fbf4;
    FUN_03776e6c(&stack0x000008b0,*(long *)(lVar36 + 0x20),0);
    fVar47 = (float)FUN_03776c9c(&stack0x00001710,0);
    if (*(long *)(lVar36 + 0x20) == 0) goto LAB_0354fbf4;
    fVar41 = *(float *)(lVar36 + 0x2c);
    fVar57 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar44 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar50 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar49 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    unaff_s14 = fVar51 * fVar50 * fVar49 * fVar45;
    fVar40 = (fVar42 / (float)iVar10) * fVar43 * fVar40;
    fVar51 = fVar40 * (fVar52 / fVar47) * fVar41 * fVar57;
    fVar40 = fVar40 / fVar51;
    fVar44 = fVar40 * fVar44;
    fVar42 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
    fVar40 = fVar40 * fVar42;
  }
  else {
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    iVar10 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar40 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (*(long *)(lVar36 + 0x20) == 0) goto LAB_0354fbf4;
    fVar52 = *(float *)(lVar36 + 0x2c);
    fVar43 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar43 = 1.0;
    }
    fVar47 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    fVar44 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar57 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
    if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
    fVar50 = *(float *)((long)unaff_x19 + 0x404);
    fVar41 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
    unaff_s14 = fVar51 * fVar57 * fVar50 * fVar41;
    fVar51 = (fVar42 / (float)iVar10) * fVar40 * fVar43 * fVar52 * fVar47;
    fVar40 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
  }
  unaff_d11 = (ulong)(uint)fVar51;
  *_iStack00000000000000d8 = lVar36;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8,lVar36);
  if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar36 + 0x2c) = 1;
  *(float *)(lVar36 + 0x160) = fVar51;
  *(long *)(lVar36 + 0x40) = *in_stack_000000b8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(long *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar36 = *unaff_x22;
  if ((lVar36 == 0) || (lVar23 = *(long *)(lVar36 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  _fStack0000000000000120 = CONCAT44(fVar44,fVar40);
  in_stack_00000168._4_4_ = 0.0;
  *(int *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
  *(int *)(unaff_x19 + 0x24) = (int)lVar38;
LAB_03549e30:
  unaff_d13 = 0;
  if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
    unaff_d13 = unaff_d11;
  }
UnityEngine_AndroidJNISafe__ToSByteArray:
  lVar36 = *(long *)(lVar36 + 0x38);
  if (lVar36 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar36 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar36 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar36 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar36 = *(long *)(unaff_x19[0x6d] + 0x38), lVar36 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar36 = *(long *)(unaff_x19[0x6d] + 0x38), lVar36 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar36 = *(long *)(unaff_x19[0x6d] + 0x38), lVar36 == 0))
  goto LAB_0354fbf4;
  uVar11 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar36 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + (long)(int)uVar11 * unaff_x24;
  *(undefined4 *)(lVar36 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar36 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar36 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar36 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar36 = *(long *)(unaff_x19[0xc9] + 0x20), lVar36 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar36,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b63d8(in_stack_000017ec,0);
    unaff_w21 = uVar11 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  in_stack_00000138 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    in_stack_00000128 = 0.0;
    unaff_d15 = 0;
    unaff_s12 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar22 = *unaff_x20;
    uVar11 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar22 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar22 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = *(long *)(lVar36 + (long)(int)(uVar22 + 1) * (long)iVar35 + 0x30);
      if ((((lVar36 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar38 = *(long *)(*in_stack_00000178 + 0x128), lVar38 == 0)) ||
         (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar11 | *(int *)(lVar36 + 0x28) << 0x10;
      uVar15 = FUN_0219f8b8(lVar38,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar55 = 0;
      if ((uVar15 & 1) == 0) {
        in_stack_00000128 = 0.0;
        uVar56 = 0;
        unaff_s12 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        in_stack_00000128 = *(float *)(in_stack_00001708 + 0x1c);
        uVar55 = *(undefined4 *)(in_stack_00001708 + 0x20);
        unaff_s12 = *(float *)(in_stack_00001708 + 0x14);
        uVar56 = *(uint *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          in_stack_00000138 = 0.0;
        }
      }
      uVar22 = *unaff_x20;
    }
    else {
      uVar55 = 0;
      in_stack_00000128 = 0.0;
      uVar56 = 0;
      unaff_s12 = 0.0;
    }
    unaff_d15 = (ulong)uVar56;
    if (0 < (int)uVar22) {
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x38), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar22 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = *(long *)(lVar36 + (ulong)(uVar22 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar36 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar38 = *(long *)(*in_stack_00000178 + 0x128), lVar38 == 0 ||
          (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar36 + 0x28) | uVar11 << 0x10;
      uVar15 = FUN_0219f8b8(lVar38,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar15 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (unaff_s12 = (float)FUN_03571cb4(unaff_s12,unaff_d15,in_stack_00000128,uVar55,
                                            *(undefined4 *)(in_stack_00001708 + 0x28),
                                            *(undefined4 *)(in_stack_00001708 + 0x2c),
                                            *(undefined4 *)(in_stack_00001708 + 0x30),
                                            *(undefined4 *)(in_stack_00001708 + 0x34),0),
           in_stack_00001708 == 0)) goto LAB_0354fbf4;
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          in_stack_00000138 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = in_stack_00000128;
  }
  uVar16 = in_stack_000017d8;
  if ((char)unaff_x19[0x1e] != '\0') goto code_r0x0354a1d8;
  goto LAB_0354a230;
LAB_0354d7c0:
  uVar11 = uVar56 - 1;
  if (*(uint *)(lVar36 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x50), lVar23 == 0)) goto LAB_0354fbf4;
  lVar39 = (long)(int)uVar11;
  lVar14 = lVar36 + lVar39 * 0x178;
  uVar26 = *(uint *)(lVar14 + 100);
  if (*(uint *)(lVar23 + 0x18) <= uVar26)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar30 = *(long *)(lVar14 + 0x38);
  lVar33 = (long)(int)uVar26;
  lVar23 = lVar23 + lVar33 * 0x5c;
  uVar34 = *(uint *)(lVar23 + 0x68);
  uVar27 = (uint)*(ushort *)(lVar14 + 0x20);
  uVar29 = *(uint *)(lVar23 + 0x3c);
  iVar2 = *(int *)(lVar23 + 0x20);
  iVar10 = *(int *)(lVar23 + 0x28);
  iVar12 = *(int *)(lVar23 + 0x2c);
  fVar47 = *(float *)(lVar23 + 0x4c);
  uVar4 = *(uint *)(lVar23 + 0x40);
  fVar41 = *(float *)(lVar23 + 0x54);
  fVar43 = *(float *)(lVar23 + 0x58);
  fVar50 = *(float *)(lVar23 + 0x5c);
  fVar45 = *(float *)(lVar23 + 0x60);
  fVar44 = *(float *)(lVar23 + 0x6c);
  fVar49 = *(float *)(lVar23 + 0x70);
  fVar52 = *(float *)(lVar23 + 0x74);
  fVar57 = *(float *)(lVar23 + 0x78);
  if ((int)uVar34 < 9) {
    switch(uVar34) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar45 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar43;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar45 + fVar50 * 0.5) - fVar43 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar50 + fVar45) - fVar43;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar50 + fVar45;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar34 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar27 < 0xad) {
      if ((uVar27 != 3) && (uVar27 != 10)) {
FUN_0354d8fc:
        if (*(uint *)(lVar36 + 0x18) <= uVar29)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar36 + (long)(int)uVar29 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b8cc4(uVar3,0);
        if ((uVar15 & 1) == 0) {
          bVar1 = (int)uVar26 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar43 <= fVar50) && (!bVar1 && uVar34 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar45;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar50 + fVar45;
          }
          goto LAB_0354d9d8;
        }
        if (((uVar56 == 1) || (uVar26 != uVar22)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar45;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar50 + fVar45;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar27,0);
          uStack00000000000000f0 = 0;
        }
        else {
          cVar20 = (char)unaff_x19[0x1e];
          fVar45 = -fVar43;
          if (cVar20 != '\0') {
            fVar45 = fVar43;
          }
          if (*(uint *)(lVar36 + 0x18) <= uVar29)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar12 = (int)*(char *)(lVar36 + (long)(int)uVar29 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000030 & 1)) + iVar12 + -1;
          if (iVar12 < 1) {
            fVar43 = 1.0;
            iVar12 = 1;
          }
          else {
            fVar43 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar27 == 9) {
LAB_0354f76c:
            fVar43 = 1.0 - fVar43;
          }
          else {
            if (uVar27 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar15 = FUN_026b97f8(uVar27,0);
              cVar20 = (char)unaff_x19[0x1e];
              if ((uVar15 & 1) != 0) goto LAB_0354f76c;
            }
            iVar12 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar10;
          }
          fVar43 = ((fVar50 + fVar45) * fVar43) / (float)iVar12;
          if (cVar20 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar43;
            uStack00000000000000f0 =
                 CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                          (float)uStack00000000000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar43;
          }
        }
      }
    }
    else if (((uVar27 != 0xad) && (uVar27 != 0x200b)) && (uVar27 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar34 == 0x20) {
    fVar43 = fVar44 + fVar52;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar34 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar36 + lVar39 * 0x178;
  fVar45 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar43 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar50 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar23 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar10 = *(int *)(lVar36 + lVar39 * 0x178 + 0x2c);
  if (iVar10 != 0) goto LAB_0354e05c;
  fVar40 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar26,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar14 = lVar36 + lVar39 * 0x178;
    *(undefined4 *)(lVar14 + 0x84) = 0;
    *(undefined4 *)(lVar14 + 0xac) = 0;
    *(undefined4 *)(lVar14 + 0xd4) = 0x3f800000;
    fVar40 = 1.0;
    break;
  case 1:
    fVar57 = *(float *)(lVar36 + lVar39 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar14 = lVar36 + lVar39 * 0x178;
      fVar52 = (in_stack_000000f8._4_4_ + fVar57) - *(float *)(in_stack_00000078 + 0x230);
      fVar57 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar14 = lVar36 + lVar39 * 0x178;
    fVar52 = fVar52 - fVar44;
    *(float *)(lVar14 + 0x84) = fVar40 + (fVar57 - fVar44) / fVar52;
    *(float *)(lVar14 + 0xac) = fVar40 + (*(float *)(lVar14 + 0x98) - fVar44) / fVar52;
    *(float *)(lVar14 + 0xd4) = fVar40 + (*(float *)(lVar14 + 0xc0) - fVar44) / fVar52;
    fVar40 = fVar40 + (*(float *)(lVar14 + 0xe8) - fVar44) / fVar52;
    break;
  case 2:
    lVar14 = lVar36 + lVar39 * 0x178;
    fVar57 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar52 = (in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar14 + 0x84) = fVar40 + fVar52 / fVar57;
    *(float *)(lVar14 + 0xac) =
         fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar14 + 0xd4) =
         fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar40 = fVar40 + ((in_stack_000000f8._4_4_ + *(float *)(lVar14 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar14 = lVar36 + lVar39 * 0x178;
      *(undefined4 *)(lVar14 + 0x88) = 0;
      *(undefined4 *)(lVar14 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar14 + 0xd8) = 0;
      *(undefined4 *)(lVar14 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar14 = lVar36 + lVar39 * 0x178;
      fVar57 = fVar57 - fVar49;
      fVar52 = fVar40 + (*(float *)(lVar14 + 0x74) - fVar49) / fVar57;
      fVar57 = fVar40 + (*(float *)(lVar14 + 0x9c) - fVar49) / fVar57;
      *(float *)(lVar14 + 0x88) = fVar52;
      *(float *)(lVar14 + 0xb0) = fVar57;
      *(float *)(lVar14 + 0xd8) = fVar52;
      *(float *)(lVar14 + 0x100) = fVar57;
      break;
    case 2:
      lVar14 = lVar36 + lVar39 * 0x178;
      fVar52 = fVar40 + (*(float *)(lVar14 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar14 + 0x88) = fVar52;
      fVar57 = *(float *)(unaff_x19 + 0x9c);
      fVar44 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar14 + 0xd8) = fVar52;
      fVar52 = fVar40 + (*(float *)(lVar14 + 0x9c) - fVar57) / (fVar44 - fVar57);
      *(float *)(lVar14 + 0xb0) = fVar52;
      *(float *)(lVar14 + 0x100) = fVar52;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar34 = (uint)*(undefined8 *)(lVar36 + 0x18);
    }
    if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar36 + lVar39 * 0x178;
    fVar52 = *(float *)(lVar14 + 0x15c);
    fVar57 = (1.0 - (*(float *)(lVar14 + 0x88) + *(float *)(lVar14 + 0xb0)) * fVar52) * 0.5;
    fVar44 = fVar40 + *(float *)(lVar14 + 0x88) * fVar52 + fVar57;
    fVar40 = fVar40 + fVar57 + *(float *)(lVar14 + 0xb0) * fVar52;
    *(float *)(lVar14 + 0x84) = fVar44;
    *(float *)(lVar14 + 0xac) = fVar44;
    *(float *)(lVar14 + 0xd4) = fVar40;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar36 + lVar39 * 0x178 + 0xfc) = fVar40;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar36 + lVar39 * 0x178;
    *(undefined4 *)(lVar14 + 0x88) = 0;
    *(undefined4 *)(lVar14 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar14 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar14 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar34) {
      lVar14 = lVar36 + lVar39 * 0x178;
      fVar47 = fVar47 - fVar41;
      fVar40 = (*(float *)(lVar14 + 0x74) - fVar41) / fVar47;
      fVar47 = (*(float *)(lVar14 + 0x9c) - fVar41) / fVar47;
      *(float *)(lVar14 + 0x88) = fVar40;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar36 + lVar39 * 0x178;
    fVar40 = (*(float *)(lVar14 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar14 + 0x88) = fVar40;
    fVar47 = (*(float *)(lVar14 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar14 + 0xb0) = fVar47;
    *(float *)(lVar14 + 0xd8) = fVar47;
    *(float *)(lVar14 + 0x100) = fVar40;
    break;
  case 3:
    if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar36 + lVar39 * 0x178;
    fVar47 = *(float *)(lVar14 + 0x15c);
    fVar52 = (1.0 - (*(float *)(lVar14 + 0x84) + *(float *)(lVar14 + 0xd4)) / fVar47) * 0.5;
    fVar40 = *(float *)(lVar14 + 0x84) / fVar47 + fVar52;
    fVar52 = fVar52 + *(float *)(lVar14 + 0xd4) / fVar47;
    *(float *)(lVar14 + 0x88) = fVar40;
    *(float *)(lVar14 + 0xb0) = fVar52;
    *(float *)(lVar14 + 0x100) = fVar40;
    *(float *)(lVar14 + 0xd8) = fVar52;
  }
  if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar14 = lVar36 + lVar39 * 0x178;
  fVar40 = ABS(fVar42) * *(float *)(lVar14 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar14 + 0x5c) == '\0') && ((*(byte *)(lVar36 + lVar39 * 0x178 + 400) & 1) != 0)) {
    fVar40 = -fVar40;
  }
  lVar14 = lVar36 + lVar39 * 0x178;
  fVar47 = *(float *)(lVar14 + 0x88);
  fVar57 = *(float *)(lVar14 + 0x84);
  fVar52 = -2.1474836e+09;
  if (fVar57 != INFINITY) {
    fVar52 = (float)(int)fVar57;
  }
  fVar44 = *(float *)(lVar14 + 0xd4);
  fVar49 = *(float *)(lVar14 + 0xd8);
  fVar41 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar41 = (float)(int)fVar47;
  }
  uVar46 = FUN_03591d3c(fVar57 - fVar52,fVar47 - fVar41);
  *(undefined4 *)(lVar14 + 0x84) = uVar46;
  if (*(uint *)(lVar36 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar49 = fVar49 - fVar41;
  *(float *)(lVar14 + 0x88) = fVar40;
  uVar46 = FUN_03591d3c(fVar57 - fVar52,fVar49);
  *(undefined4 *)(lVar36 + lVar39 * 0x178 + 0xac) = uVar46;
  if (*(uint *)(lVar36 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar44 = fVar44 - fVar52;
  *(float *)(lVar36 + lVar39 * 0x178 + 0xb0) = fVar40;
  fVar52 = (float)FUN_03591d3c(fVar44,fVar49);
  *(float *)(lVar14 + 0xd4) = fVar52;
  if (*(uint *)(lVar36 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar14 + 0xd8) = fVar40;
  uVar46 = FUN_03591d3c(fVar44,fVar47 - fVar41);
  *(undefined4 *)(lVar36 + lVar39 * 0x178 + 0xfc) = uVar46;
  uVar34 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar36 + lVar39 * 0x178 + 0x100) = fVar40;
LAB_0354e05c:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar26 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar23 = lVar36 + lVar39 * 0x178;
      *(ulong *)(lVar23 + 0x70) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar23 + 0x70));
      *(float *)(lVar23 + 0x78) = fVar50 + *(float *)(lVar23 + 0x78);
      *(ulong *)(lVar23 + 0x98) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar23 + 0x98));
      *(float *)(lVar23 + 0xa0) = fVar50 + *(float *)(lVar23 + 0xa0);
      *(ulong *)(lVar23 + 0xc0) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar23 + 0xc0));
      *(float *)(lVar23 + 200) = fVar50 + *(float *)(lVar23 + 200);
      *(ulong *)(lVar23 + 0xe8) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar23 + 0xe8));
      *(float *)(lVar23 + 0xf0) = fVar50 + *(float *)(lVar23 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar26 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar34) {
        if (*(uint *)(lVar36 + lVar39 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar34 = *(uint *)(lVar36 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar14 = lVar36 + lVar39 * 0x178;
  *(undefined8 *)(lVar14 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar14 + 0x78) = uVar46;
  if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar14 = lVar36 + lVar39 * 0x178;
  *(undefined8 *)(lVar14 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar14 + 0xa0) = uVar46;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar14 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar14 + 200) = uVar46;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar14 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar14 + 0xf0) = uVar46;
  *(undefined1 *)(lVar23 + 0x194) = 0;
LAB_0354e184:
  if (iVar10 == 0) {
    pcVar25 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar25)();
  }
  else if (iVar10 == 1) {
    pcVar25 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar39 * 0x178;
  uVar16 = *(undefined8 *)(lVar23 + 0x11c);
  *(undefined8 *)(lVar23 + 0x11c) =
       CONCAT44(fVar43 + (float)((ulong)uVar16 >> 0x20),fVar45 + (float)uVar16);
  *(float *)(lVar23 + 0x124) = fVar50 + *(float *)(lVar23 + 0x124);
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar39 * 0x178;
  *(ulong *)(lVar23 + 0x110) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0x110) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar23 + 0x110));
  *(float *)(lVar23 + 0x118) = fVar50 + *(float *)(lVar23 + 0x118);
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar39 * 0x178;
  *(ulong *)(lVar23 + 0x128) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0x128) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar23 + 0x128));
  *(float *)(lVar23 + 0x130) = fVar50 + *(float *)(lVar23 + 0x130);
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar23 = lVar23 + lVar39 * 0x178;
  *(float *)(lVar23 + 0x134) = fVar45 + *(float *)(lVar23 + 0x134);
  *(ulong *)(lVar23 + 0x138) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x138) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar23 + 0x138));
  lVar23 = *unaff_x22;
  if ((lVar23 == 0) || (lVar14 = *(long *)(lVar23 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  uVar34 = *(uint *)(lVar14 + 0x18);
  if (uVar34 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = lVar14 + lVar39 * 0x178;
  *(float *)(lVar31 + 0x150) = fVar43 + *(float *)(lVar31 + 0x150);
  *(ulong *)(lVar31 + 0x140) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar31 + 0x140) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar31 + 0x140));
  *(ulong *)(lVar31 + 0x148) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar31 + 0x148) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar31 + 0x148));
  if (uVar26 == uVar22) {
    uVar22 = *unaff_x20 - 1;
    if (uVar11 == uVar22) goto LAB_0354e3ec;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar22)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = (long)(int)uVar22;
    lVar32 = lVar23 + lVar31 * 0x5c;
    fVar52 = fVar43 + *(float *)(lVar32 + 0x54);
    *(ulong *)(lVar32 + 0x4c) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0x4c) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar32 + 0x4c));
    *(float *)(lVar32 + 0x54) = fVar52;
    *(float *)(lVar32 + 0x58) = fVar45 + *(float *)(lVar32 + 0x58);
    if (uVar34 <= *(uint *)(lVar32 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar46 = *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar32 + 0x34) * 0x178 + 0x11c);
    lVar23 = lVar23 + lVar31 * 0x5c;
    *(float *)(lVar23 + 0x70) = fVar52;
    *(undefined4 *)(lVar23 + 0x6c) = uVar46;
    lVar23 = *unaff_x22;
    if ((lVar23 == 0) || (lVar14 = *(long *)(lVar23 + 0x50), lVar14 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar14 + 0x18) <= uVar22)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_0354fbf4;
    uVar22 = *(uint *)(lVar14 + lVar31 * 0x5c + 0x40);
    if (*(uint *)(lVar23 + 0x18) <= uVar22)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar14 + lVar31 * 0x5c;
    *(undefined4 *)(lVar14 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar22 * 0x178 + 0x128);
    *(undefined4 *)(lVar14 + 0x78) = *(undefined4 *)(lVar14 + 0x4c);
    uVar22 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar11 == uVar22) {
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar14 = *(long *)(lVar23 + 0x50), lVar14 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= uVar26)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = lVar14 + lVar33 * 0x5c;
      fVar52 = fVar43 + *(float *)(lVar31 + 0x54);
      *(ulong *)(lVar31 + 0x4c) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar31 + 0x4c) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar31 + 0x4c));
      *(float *)(lVar31 + 0x54) = fVar52;
      *(float *)(lVar31 + 0x58) = fVar45 + *(float *)(lVar31 + 0x58);
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar31 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar46 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar31 + 0x34) * 0x178 + 0x11c);
      lVar14 = lVar14 + lVar33 * 0x5c;
      *(float *)(lVar14 + 0x70) = fVar52;
      *(undefined4 *)(lVar14 + 0x6c) = uVar46;
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar14 = *(long *)(lVar23 + 0x50), lVar14 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= uVar26)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      uVar22 = *(uint *)(lVar14 + lVar33 * 0x5c + 0x40);
      if (*(uint *)(lVar23 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = lVar14 + lVar33 * 0x5c;
      *(undefined4 *)(lVar14 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar22 * 0x178 + 0x128);
      *(undefined4 *)(lVar14 + 0x78) = *(undefined4 *)(lVar14 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar15 = FUN_026b82c4(uVar27,0);
  if (((((uVar15 & 1) == 0) && (1 < uVar27 - 0x2010)) && (uVar27 != 0xad)) && (uVar27 != 0x2d)) {
    if (bVar5) {
      if (((uVar56 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar36 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*unaff_x20 && ((uVar27 == 0x2019 || (uVar27 == 0x27)))))) {
        if (*(uint *)(lVar36 + 0x18) <= uVar56 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar36 + lVar38 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b82c4(uVar3,0);
        if ((uVar15 & 1) != 0) {
          if (*(uint *)(lVar36 + 0x18) <= uVar56)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(lVar36 + lVar38 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b82c4(uVar3,0);
          if ((uVar15 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar56 != 1) {
LAB_0354f144:
        bVar5 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b81f8(uVar27,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b63d8(uVar27,0);
        if (((uVar27 != 0x200b) && ((uVar15 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar11 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b82c4(uVar27,0);
      iVar10 = (int)fStack0000000000000124;
      if ((uVar15 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar10 = uVar56 - 2;
    }
    lVar23 = *unaff_x22;
    if (lVar23 == 0) goto LAB_0354fbf4;
    lVar14 = *(long *)(lVar23 + 0x40);
    if (lVar14 == 0) goto LAB_0354fbf4;
    uVar22 = *(uint *)(lVar23 + 0x24);
    iVar12 = *(int *)(lVar14 + 0x18);
    if (iVar12 < (int)(uVar22 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar23 + 0x40),iVar12 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar23 = *unaff_x22;
      if (lVar23 == 0) goto LAB_0354fbf4;
    }
    lVar23 = *(long *)(lVar23 + 0x40);
    if (lVar23 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar22)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar23 + (long)(int)uVar22 * 0x18;
    *(long **)(lVar23 + 0x20) = unaff_x19;
    *(float *)(lVar23 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar23 + 0x2c) = iVar10;
    *(int *)(lVar23 + 0x30) = (iVar10 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar23 = unaff_x19[0x6d];
    if (lVar23 == 0) goto LAB_0354fbf4;
    lVar14 = *(long *)(lVar23 + 0x50);
    *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
    if (lVar14 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar14 + 0x18) <= uVar26)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar14 + lVar33 * 0x5c;
    bVar5 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      in_stack_00000168._4_4_ = (float)uVar11;
    }
    if (uVar11 == *unaff_x20 - 1) {
      lVar23 = *unaff_x22;
      if (lVar23 == 0) goto LAB_0354fbf4;
      lVar14 = *(long *)(lVar23 + 0x40);
      if (lVar14 == 0) goto LAB_0354fbf4;
      uVar22 = *(uint *)(lVar23 + 0x24);
      iVar10 = *(int *)(lVar14 + 0x18);
      if (iVar10 < (int)(uVar22 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar23 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar23 = *unaff_x22;
        if (lVar23 == 0) goto LAB_0354fbf4;
      }
      lVar23 = *(long *)(lVar23 + 0x40);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + (long)(int)uVar22 * 0x18;
      *(long **)(lVar23 + 0x20) = unaff_x19;
      *(float *)(lVar23 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar23 + 0x2c) = uVar11;
      *(uint *)(lVar23 + 0x30) = uVar56 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar23 = unaff_x19[0x6d];
      if (lVar23 == 0) goto LAB_0354fbf4;
      lVar14 = *(long *)(lVar23 + 0x50);
      *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
      if (lVar14 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= uVar26)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = lVar14 + lVar33 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
    }
LAB_0354e610:
    bVar5 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  uVar22 = *(uint *)(lVar23 + 0x18);
  if (uVar22 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar23 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0354e660:
      if (uVar22 <= uVar56 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *unaff_x19;
      uVar46 = *(undefined4 *)(lVar23 + lVar38 + -0x330);
      uVar48 = *(undefined4 *)(lVar23 + lVar38 + -0x2f8);
LAB_0354ebc0:
      pcVar25 = *(code **)(lVar14 + 0x8d8);
LAB_0354ebc8:
      (*pcVar25)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar46,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar48);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *(long *)puVar8;
      }
LAB_0354ec1c:
      fVar51 = 0.0;
      bVar9 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar9 = false;
    }
  }
  else {
    lVar23 = lVar23 + lVar39 * 0x178;
    iVar10 = *(int *)(lVar23 + 0x68);
    *(int *)(lVar23 + 0x16c) = iVar35;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar26)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_026b63d8(uVar27,0);
    if ((uVar27 != 0x200b) && ((uVar15 & 1) == 0)) {
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar14 = *(long *)(lVar23 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar52 = *(float *)(lVar14 + lVar39 * 0x178 + 0x160);
      if (fVar51 <= fVar52) {
        fVar51 = fVar52;
      }
      if (fStack0000000000000100 <= ABS(fVar40)) {
        fStack0000000000000100 = ABS(fVar40);
      }
      if ((float)iVar10 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *unaff_x22;
          if (lVar23 == 0) goto LAB_0354fbf4;
          lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar14 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar14 + 0x15a8);
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar47 = *(float *)(lVar23 + lVar39 * 0x178 + 0x14c);
      fVar52 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar47 = fVar47 + fVar51 * fVar52;
      fStack000000000000005c = (float)iVar10;
      if (fVar47 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar47;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar27 == 0xd) || ((uVar27 & 0xfffe) == 10)) || ((int)uVar4 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar11 == uVar4) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b97f8(uVar27,0);
        if ((uVar15 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar39 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar23 + 0x160);
      fStack0000000000000070 = *(float *)(lVar23 + 0x11c);
      bVar9 = fVar51 != 0.0;
      fVar52 = in_stack_00000080._4_4_;
      if (bVar9) {
        fVar52 = fVar51;
      }
      fVar51 = fVar52;
      uVar55 = *(undefined4 *)(lVar23 + 0x168);
      _bStack000000000000006c = 0;
      fVar52 = fVar40;
      if (bVar9) {
        fVar52 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar52;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        if (uVar11 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + lVar39 * 0x178;
          lVar14 = *unaff_x19;
          uVar46 = *(undefined4 *)(lVar23 + 0x128);
          uVar48 = *(undefined4 *)(lVar23 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar11 == uVar29) || ((int)uVar4 <= (int)uVar11)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b63d8(uVar27,0);
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        lVar14 = lVar39;
        uVar22 = uVar11;
        if (uVar27 == 0x200b || (uVar15 & 1) != 0) {
          lVar14 = (long)(int)uVar4;
          uVar22 = uVar4;
        }
        if (uVar22 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + lVar14 * 0x178;
          uVar46 = *(undefined4 *)(lVar23 + 0x128);
          uVar48 = *(undefined4 *)(lVar23 + 0x160);
          pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        uVar22 = *(uint *)(lVar23 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar11 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar56)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar15 = FUN_03567ad8(uVar55,*(undefined4 *)(lVar23 + lVar38),0);
      if ((uVar15 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          if (uVar11 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar39 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar23 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar23 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar8;
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
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar30 == 0) goto LAB_0354fbf4;
  uVar22 = *(uint *)(lVar23 + lVar39 * 0x178 + 400);
  fVar52 = (float)FUN_03776a30(lVar30 + 0x50,0);
  if ((uVar22 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar56 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar46 = *(undefined4 *)(lVar23 + lVar38 + -0x330);
      fVar43 = *(float *)(lVar23 + lVar38 + -0x30c);
      pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar25)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar46,
                 fStack00000000000000a8 * fVar52 + fVar43,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar6 = false;
  }
  else {
    lVar23 = *unaff_x22;
    if ((lVar23 == 0) || (lVar14 = *(long *)(lVar23 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar14 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar14 + lVar39 * 0x178 + 0x174) = iVar35;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar26)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar14 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar27 == 0xd) || ((uVar27 & 0xfffe) == 10)) || ((int)uVar4 < (int)uVar11)) ||
       (bVar6 || !bVar1)) {
LAB_0354ed84:
      if (!bVar6) goto LAB_0354f250;
    }
    else {
      if (uVar11 == uVar4) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b97f8(uVar27,0);
        if ((uVar15 & 1) != 0) goto LAB_0354ed84;
        lVar23 = *unaff_x22;
        if (lVar23 == 0) goto LAB_0354fbf4;
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar39 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar23 + 0x60);
      fStack0000000000000040 = *(float *)(lVar23 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar23 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar23 + 0x160);
      fStack000000000000009c = fVar52 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar22 = *unaff_x20;
    if (uVar22 == 1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        uVar22 = *(uint *)(lVar23 + 0x18);
LAB_0354ef0c:
        if (uVar11 < uVar22) {
          lVar23 = lVar23 + lVar39 * 0x178;
          lVar14 = *unaff_x19;
          uVar46 = *(undefined4 *)(lVar23 + 0x128);
          fVar43 = *(float *)(lVar23 + 0x14c);
LAB_0354ef24:
          pcVar25 = *(code **)(lVar14 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar11 == uVar29) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b63d8(uVar27,0);
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        uVar22 = *(uint *)(lVar23 + 0x18);
        if (uVar27 == 0x200b || (uVar15 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar14 = lVar39;
        if (uVar11 < uVar22) {
LAB_0354f1f8:
          lVar23 = lVar23 + lVar14 * 0x178;
          fVar43 = *(float *)(lVar23 + 0x14c);
          uVar46 = *(undefined4 *)(lVar23 + 0x128);
          pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar11 < (int)uVar22) {
      lVar23 = *unaff_x22;
      if ((lVar23 != 0) && (lVar14 = *(long *)(lVar23 + 0x38), lVar14 != 0)) {
        if (uVar56 < *(uint *)(lVar14 + 0x18)) {
          if (*(float *)(lVar14 + lVar38 + -0x108) == in_stack_00000048._4_4_) {
            fVar47 = *(float *)(lVar14 + lVar38 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_03567bac(fVar43 + fVar47,fStack0000000000000040,0);
            if ((uVar15 & 1) != 0) {
              uVar22 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar23 = *unaff_x22;
            if (lVar23 == 0) goto LAB_0354fbf4;
          }
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 != 0) {
            uVar22 = *(uint *)(lVar23 + 0x18);
            if ((int)uVar11 <= (int)uVar4) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar14 = (long)(int)uVar4;
            if (uVar4 < uVar22) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar11 < (int)uVar22) {
      iVar10 = FUN_036d3364(lVar30,0);
      if (*(uint *)(lVar36 + 0x18) <= uVar56)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = *(long *)(lVar36 + lVar38 + -0x130);
      if (lVar23 == 0) goto LAB_0354fbf4;
      iVar12 = FUN_036d3364(lVar23,0);
      if (iVar10 != iVar12) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          uVar22 = *(uint *)(lVar23 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
        if (uVar56 - 2 < *(uint *)(lVar23 + 0x18)) {
          lVar14 = *unaff_x19;
          uVar46 = *(undefined4 *)(lVar23 + lVar38 + -0x330);
          fVar43 = *(float *)(lVar23 + lVar38 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar6 = true;
  }
  if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
  uVar22 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar22 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar23 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar26)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar23 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar7) {
LAB_0354f400:
      if (uVar22 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + lVar39 * 0x178;
      fVar52 = *(float *)(lVar23 + 0x128);
      fVar41 = *(float *)(lVar23 + 0x188);
      uVar13 = *(undefined8 *)(lVar23 + 0x17c);
      fVar50 = *(float *)(lVar23 + 0x184);
      uVar16 = *(undefined8 *)(lVar23 + 0x184);
      fVar44 = *(float *)(lVar23 + 0x18c);
      fVar43 = *(float *)(lVar23 + 0x11c);
      fVar47 = *(float *)(lVar23 + 0x148);
      fVar57 = *(float *)(lVar23 + 0x150);
      in_stack_00000188 = uVar13;
      fStack0000000000000190 = fVar50;
      fStack0000000000000194 = fVar41;
      in_stack_00000198 = fVar44;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar15 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar23);
        }
        fVar52 = fVar52 + (float)in_stack_000017c8;
        fVar43 = fVar43 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar47 = fVar47 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar43 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar43;
        }
        if (fVar57 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar57 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar52) {
          fStack00000000000000d0 = fVar52;
        }
        if (fStack00000000000000d4 <= fVar47) {
          fStack00000000000000d4 = fVar47;
        }
      }
      else {
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar23);
        }
        fVar43 = (fVar43 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar57 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar57;
        }
        if (fStack00000000000000d4 <= fVar47) {
          fStack00000000000000d4 = fVar47;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar43,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar57 - fVar44;
        fStack00000000000000d0 = fVar52 + fVar50;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar47 + fVar41;
        fStack00000000000000e0 = fVar43;
        in_stack_000017c0 = uVar13;
        in_stack_000017c8 = uVar16;
        in_stack_000017d0 = fVar44;
      }
      if (((*unaff_x20 == 1) || (uVar11 == uVar29)) || (((int)uVar4 <= (int)uVar11 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar7 = true;
    }
    else {
      if ((((uVar27 != 0xd) && ((uVar27 & 0xfffe) != 10)) && ((int)uVar11 <= (int)uVar4)) && (bVar1)
         ) {
        if (uVar11 == uVar4) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b97f8(uVar27,0);
          if ((uVar15 & 1) != 0) goto LAB_0354f374;
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *(long *)puVar8;
        }
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          uVar22 = (uint)*(undefined8 *)(lVar23 + 0x18);
          if (uVar11 < uVar22) {
            lVar14 = *(long *)(lVar14 + 0xb8);
            lVar30 = lVar23 + lVar39 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar30 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar30 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar14 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar14 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar30 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar14 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar14 + 0x15a4);
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
  uVar11 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar38 = lVar38 + 0x178;
  bVar1 = (int)uVar11 <= (int)uVar56;
  uVar22 = uVar26;
  uVar56 = uVar56 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
code_r0x0354a1d8:
  unaff_s8 = *(float *)(unaff_x19 + 200);
  param_1 = (float)FUN_03776cb4(&stack0x000017a0,0);
  param_2 = *(float *)((long)unaff_x19 + 0x2d4);
  param_3 = 1.0;
  in_w9 = 0x200b;
  goto code_r0x0354a1f8;
LAB_0354f7d0:
  lVar36 = *unaff_x22;
  if (lVar36 != 0) {
    iVar35 = uVar26 + 1;
    plVar37 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar36 + 0x18) = uVar11;
    lVar38 = unaff_x19[0xd4];
    *(int *)(lVar36 + 0x2c) = iVar35;
    if ((int)uVar11 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar36 + 0x1c) = (int)lVar38;
    *(int *)(lVar36 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar36 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar15 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar15 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar36 = unaff_x19[0xdb];
    if (lVar36 != 0) {
      (**(code **)(lVar36 + 0x18))
                (*(undefined8 *)(lVar36 + 0x40),*unaff_x22,*(undefined8 *)(lVar36 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x60), lVar36 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar37 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar36 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar36 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0)) {
        if (*(int *)(lVar36 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0)) {
            if (*(int *)(lVar36 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0)) {
                if (*(int *)(lVar36 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0)) {
                    if (*(int *)(lVar36 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar36 = *unaff_x22;
                        if (lVar36 != 0) {
                          lVar23 = 0;
                          lVar38 = 0;
                          do {
                            uVar15 = lVar38 + 1;
                            if ((long)*(int *)(lVar36 + 0x34) <= (long)uVar15) goto LAB_0354d0cc;
                            lVar36 = *(long *)(lVar36 + 0x60);
                            if (lVar36 == 0) break;
                            if (*(int *)(*plVar37 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar36 + 0x18) <= uVar15)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar36 + lVar23 + 0x70,0);
                            lVar36 = unaff_x19[0xe1];
                            if (lVar36 == 0) break;
                            if (*(uint *)(lVar36 + 0x18) <= uVar15)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar16 = *(undefined8 *)(lVar36 + lVar38 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar18 = FUN_036d35a8(uVar16,0,0);
                            if ((uVar18 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar36 = *(long *)(*unaff_x22 + 0x60), lVar36 == 0)) break;
                                if (*(int *)(*plVar37 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar36 + 0x18) <= uVar15)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar36 + lVar23 + 0x70,1,0);
                              }
                              lVar36 = unaff_x19[0xe1];
                              if (lVar36 == 0) break;
                              if (*(uint *)(lVar36 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar36 = *(long *)(lVar36 + lVar38 * 8 + 0x28);
                              if (lVar36 == 0) break;
                              lVar36 = FUN_0359d5ac(lVar36,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
                              if (*(uint *)(lVar14 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar36 == 0) break;
                              FUN_036a460c(lVar36,*(undefined8 *)(lVar14 + lVar23 + 0x80),0);
                              lVar36 = unaff_x19[0xe1];
                              if (lVar36 == 0) break;
                              if (*(uint *)(lVar36 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar36 = *(long *)(lVar36 + lVar38 * 8 + 0x28);
                              if (lVar36 == 0) break;
                              lVar36 = FUN_0359d5ac(lVar36,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
                              if (*(uint *)(lVar14 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar36 == 0) break;
                              FUN_036a4810(lVar36,*(undefined8 *)(lVar14 + lVar23 + 0x98),0);
                              lVar36 = unaff_x19[0xe1];
                              if (lVar36 == 0) break;
                              if (*(uint *)(lVar36 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar36 = *(long *)(lVar36 + lVar38 * 8 + 0x28);
                              if (lVar36 == 0) break;
                              lVar36 = FUN_0359d5ac(lVar36,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
                              if (*(uint *)(lVar14 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar36 == 0) break;
                              FUN_036a48bc(lVar36,*(undefined8 *)(lVar14 + lVar23 + 0xa0),0);
                              lVar36 = unaff_x19[0xe1];
                              if (lVar36 == 0) break;
                              if (*(uint *)(lVar36 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar36 = *(long *)(lVar36 + lVar38 * 8 + 0x28);
                              if (lVar36 == 0) break;
                              lVar36 = FUN_0359d5ac(lVar36,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
                              if (*(uint *)(lVar14 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar36 == 0) break;
                              FUN_036a4e24(lVar36,*(undefined8 *)(lVar14 + lVar23 + 0xa8),0);
                              lVar36 = unaff_x19[0xe1];
                              if (lVar36 == 0) break;
                              if (*(uint *)(lVar36 + 0x18) <= uVar15)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar36 = *(long *)(lVar36 + lVar38 * 8 + 0x28);
                              if ((lVar36 == 0) || (lVar36 = FUN_0359d5ac(lVar36,0), lVar36 == 0))
                              break;
                              FUN_036aa280(lVar36,0);
                            }
                            lVar36 = *unaff_x22;
                            lVar38 = lVar38 + 1;
                            lVar23 = lVar23 + 0x50;
                          } while (lVar36 != 0);
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


