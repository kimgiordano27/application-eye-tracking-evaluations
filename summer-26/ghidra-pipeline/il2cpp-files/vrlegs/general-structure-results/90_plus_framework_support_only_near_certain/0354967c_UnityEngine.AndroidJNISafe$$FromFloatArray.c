/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$FromFloatArray
ENTRY_POINT: 0354967c
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


void UnityEngine_AndroidJNISafe__FromFloatArray(undefined1 param_1 [16],ulong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  int *piVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  float *pfVar27;
  code *pcVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar39;
  uint unaff_w26;
  undefined4 unaff_w27;
  long lVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  ulong uVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulong unaff_d11;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
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
  
code_r0x0354967c:
  uVar17 = FUN_026b812c(unaff_w25,0);
  unaff_w25 = in_stack_000017ec;
  if ((uVar17 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b8410(in_stack_000017ec,0);
    unaff_w25 = uVar10 & 0xffff;
    in_stack_00000150 = fStack0000000000000024;
  }
LAB_03549970:
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  iVar14 = (int)unaff_x24;
  if (iVar11 != 0) goto LAB_03549594;
LAB_03549978:
  if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
    if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
      *_iStack00000000000000d8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
      uVar10 = unaff_w25;
      if (*_iStack00000000000000d8 == 0) goto LAB_03549564;
      if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
          *unaff_x21 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
          if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
            if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
              *in_stack_00000170 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
              goto LAB_0354fbf4;
              uVar12 = *unaff_x20;
              uVar10 = *(uint *)(lVar24 + 0x18);
              if (uVar10 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(undefined4 *)(unaff_x19 + 0x24) =
                   *(undefined4 *)(lVar24 + (long)(int)uVar12 * unaff_x24 + 0x58);
              if (unaff_w23 == 0) {
LAB_03549a88:
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                fVar57 = *(float *)(unaff_x19 + 0x3d);
                iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
                lVar24 = unaff_x19[0x20];
              }
              else {
                lVar34 = unaff_x19[0x8f];
                if (lVar34 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar34 + 0x18) <= in_stack_000017b8)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if ((*(int *)(lVar34 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
                   (uVar12 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
                if (uVar10 <= uVar12 - 1)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                fVar57 = *(float *)(lVar24 + (long)(int)(uVar12 - 1) * (long)iVar14 + 0x60);
                iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
                lVar24 = *unaff_x21;
              }
              if (lVar24 == 0) goto LAB_0354fbf4;
              fVar41 = (float)FUN_03776960(lVar24 + 0x50,0);
              fVar50 = fStack0000000000000098;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar50 = 1.0;
              }
              uVar42 = 0;
              fStack0000000000000124 = 0.0;
              if ((unaff_w23 & unaff_w25 == 0x2026) == 0) {
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                if (*unaff_x21 == 0) goto LAB_0354fbf4;
                uVar42 = FUN_037769c0(*unaff_x21 + 0x50,0);
              }
              lVar24 = unaff_x19[0xc9];
              if (lVar24 != 0) {
                _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar42);
                if (*(long *)(lVar24 + 0x20) != 0) {
                  fVar58 = *(float *)((long)unaff_x19 + 0x404);
                  fVar60 = *(float *)(lVar24 + 0x2c);
                  fVar43 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
                  if (*unaff_x21 != 0) {
                    fVar44 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                    if (*unaff_x21 != 0) {
                      fVar61 = *(float *)((long)unaff_x19 + 0x404);
                      fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                      lVar24 = unaff_x19[0x6d];
                      if ((lVar24 != 0) && (lVar34 = *(long *)(lVar24 + 0x38), lVar34 != 0)) {
                        if (*(uint *)(lVar34 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar34 = lVar34 + (long)(int)*unaff_x20 * unaff_x24;
                        *(undefined4 *)(lVar34 + 0x2c) = 0;
                        fVar50 = ((in_stack_00000150 * fVar57) / (float)iVar11) * fVar41 * fVar50;
                        fVar43 = fVar50 * fVar58 * fVar60 * fVar43;
                        unaff_d11 = (ulong)(uint)fVar43;
                        *(float *)(lVar34 + 0x160) = fVar43;
                        uVar10 = *(uint *)(unaff_x19 + 0x24);
                        fVar45 = fVar50 * fVar44 * fVar61 * fVar45;
                        if (uVar10 == 0) {
                          in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
                        }
                        else {
                          lVar34 = unaff_x19[0xe1];
                          if (lVar34 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar34 + 0x18) <= uVar10)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar34 = *(long *)(lVar34 + (long)(int)uVar10 * 8 + 0x20);
                          if (lVar34 == 0) goto LAB_0354fbf4;
                          in_stack_00000168._4_4_ = *(float *)(lVar34 + 0x54);
                        }
LAB_03549e30:
                        uVar17 = 0;
                        uVar19 = in_stack_000017d8;
                        if (unaff_w25 != 3 && unaff_w25 != 0xad) {
                          uVar17 = unaff_d11;
                        }
UnityEngine_AndroidJNISafe__ToSByteArray:
                        lVar24 = *(long *)(lVar24 + 0x38);
                        if (lVar24 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
                        *(short *)(lVar24 + 0x20) = (short)unaff_w25;
                        *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
                        *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) =
                             (int)unaff_x19[0x2b];
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
                             *(undefined4 *)((long)unaff_x19 + 0x15c);
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
                        goto LAB_0354fbf4;
                        uVar10 = *unaff_x20;
                        FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,
                                     *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                        if (*(uint *)(lVar24 + 0x18) <= uVar10)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar24 = lVar24 + (long)(int)uVar10 * unaff_x24;
                        *(undefined4 *)(lVar24 + 0x18c) = in_stack_000008c0;
                        *(undefined8 *)(lVar24 + 0x184) = in_stack_000008b8;
                        *(ulong *)(lVar24 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
                        if ((*unaff_x22 == 0) ||
                           (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
                             *(undefined4 *)((long)unaff_x19 + 0x25c);
                        if ((unaff_x19[0xc9] == 0) ||
                           (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
                        goto LAB_0354fbf4;
                        FUN_03776e6c(&stack0x00000c28,lVar24,0);
                        if ((int)unaff_w25 < 0x10000) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar12 = FUN_026b63d8(unaff_w25,0);
                          uVar12 = uVar12 & 1;
                        }
                        else {
                          uVar12 = 0;
                        }
                        fVar57 = *(float *)(unaff_x19 + 0x55);
                        *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                        if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                          fVar50 = 0.0;
                          fVar43 = 0.0;
                          fVar41 = 0.0;
                        }
                        else {
                          if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
                          uVar23 = *unaff_x20;
                          uVar10 = *(uint *)(*_iStack00000000000000d8 + 0x28);
                          if ((int)uVar23 < (int)in_stack_00000080._4_4_) {
                            if ((*unaff_x22 == 0) ||
                               (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar24 + 0x18) <= uVar23 + 1)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar24 = *(long *)(lVar24 + (long)(int)(uVar23 + 1) * (long)iVar14 +
                                              0x30);
                            if ((((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
                                (lVar34 = *(long *)(*in_stack_00000178 + 0x128), lVar34 == 0)) ||
                               (lVar34 = *(long *)(lVar34 + 0x18), lVar34 == 0)) goto LAB_0354fbf4;
                            in_stack_000008b0 = uVar10 | *(int *)(lVar24 + 0x28) << 0x10;
                            uVar18 = FUN_0219f8b8(lVar34,&stack0x000008b0,&stack0x00001708,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                            uVar42 = 0;
                            if ((uVar18 & 1) == 0) {
                              fVar50 = 0.0;
                              fVar43 = 0.0;
                              fVar41 = 0.0;
                            }
                            else {
                              if (in_stack_00001708 == 0) goto LAB_0354fbf4;
                              fVar50 = *(float *)(in_stack_00001708 + 0x1c);
                              uVar42 = *(undefined4 *)(in_stack_00001708 + 0x20);
                              fVar41 = *(float *)(in_stack_00001708 + 0x14);
                              fVar43 = *(float *)(in_stack_00001708 + 0x18);
                              if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                                fVar57 = 0.0;
                              }
                            }
                            uVar23 = *unaff_x20;
                          }
                          else {
                            uVar42 = 0;
                            fVar50 = 0.0;
                            fVar43 = 0.0;
                            fVar41 = 0.0;
                          }
                          if (0 < (int)uVar23) {
                            if ((*unaff_x22 == 0) ||
                               (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar24 + 0x18) <= uVar23 - 1)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar24 = *(long *)(lVar24 + (ulong)(uVar23 - 1) *
                                                        (unaff_x24 & 0xffffffff) + 0x30);
                            if (((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
                               ((lVar34 = *(long *)(*in_stack_00000178 + 0x128), lVar34 == 0 ||
                                (lVar34 = *(long *)(lVar34 + 0x18), lVar34 == 0))))
                            goto LAB_0354fbf4;
                            in_stack_000008b0 = *(uint *)(lVar24 + 0x28) | uVar10 << 0x10;
                            uVar18 = FUN_0219f8b8(lVar34,&stack0x000008b0,&stack0x00001708,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                            if ((uVar18 & 1) != 0) {
                              if ((in_stack_00001708 == 0) ||
                                 (fVar41 = (float)FUN_03571cb4(fVar41,fVar43,fVar50,uVar42,
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x28),
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x2c),
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x30),
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x34),0),
                                 in_stack_00001708 == 0)) goto LAB_0354fbf4;
                              if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                                fVar57 = 0.0;
                              }
                            }
                          }
                          *(float *)((long)unaff_x19 + 0x2fc) = fVar50;
                        }
                        fVar58 = (float)uVar17;
                        if ((char)unaff_x19[0x1e] != '\0') {
                          fVar44 = *(float *)(unaff_x19 + 200);
                          fVar60 = (float)FUN_03776cb4(&stack0x000017a0,0);
                          fVar44 = fVar44 - fVar58 * fVar60 * (1.0 - *(float *)((long)unaff_x19 +
                                                                               0x2d4));
                          *(float *)(unaff_x19 + 200) = fVar44;
                          if ((unaff_w25 == 0x200b) || (uVar12 != 0)) {
                            *(float *)(unaff_x19 + 200) =
                                 fVar44 - fStack00000000000000d4 *
                                          *(float *)((long)unaff_x19 + 0x2b4);
                          }
                        }
                        fVar44 = *(float *)(unaff_x19 + 0x56);
                        fVar60 = 0.0;
                        if (fVar44 != 0.0) {
                          fVar60 = (float)FUN_03776c94(&stack0x000017a0,0);
                          fVar61 = (float)FUN_03776ca4(&stack0x000017a0,0);
                          fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (fVar44 * 0.5 - fVar58 * (fVar60 * 0.5 + fVar61));
                          *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar60;
                        }
                        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                           ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                          lVar24 = *in_stack_00000170;
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar18 = FUN_036cee6c(lVar24,0,0);
                          fVar61 = 0.0;
                          if ((uVar18 & 1) != 0) {
                            lVar24 = *in_stack_00000170;
                            if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                            if (lVar24 == 0) goto LAB_0354fbf4;
                            uVar18 = FUN_03699d3c(lVar24,*(undefined4 *)
                                                          (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                            fVar61 = 0.0;
                            if ((uVar18 & 1) != 0) {
                              lVar24 = *in_stack_00000170;
                              if (*(int *)(*plVar39 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                              }
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              fVar44 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                                                   (*(long *)(*plVar39 + 0xb8) +
                                                                   0x54),0);
                              if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0))
                              goto LAB_0354fbf4;
                              fVar55 = *(float *)(*in_stack_00000178 + 0x1b0);
                              fVar61 = (float)FUN_0369e060(*in_stack_00000170,
                                                           *(undefined4 *)
                                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                              fVar61 = fVar61 * fVar44 * fVar55 * 0.25;
                              if (fVar44 < in_stack_00000168._4_4_ + fVar61) {
                                in_stack_00000168._4_4_ = fVar44 - fVar61;
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
                          uVar18 = FUN_036cee6c(lVar24,0,0);
                          fStack00000000000000d0 = 0.0;
                          if ((uVar18 & 1) != 0) {
                            lVar24 = *in_stack_00000170;
                            if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                            if (lVar24 == 0) goto LAB_0354fbf4;
                            uVar18 = FUN_03699d3c(lVar24,*(undefined4 *)
                                                          (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                            if ((uVar18 & 1) != 0) {
                              lVar24 = *in_stack_00000170;
                              if (*(int *)(*plVar39 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                              }
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              uVar18 = FUN_03699d3c(lVar24,*(undefined4 *)
                                                            (*(long *)(*plVar39 + 0xb8) + 0xcc),0);
                              if ((uVar18 & 1) != 0) {
                                lVar24 = *in_stack_00000170;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  plVar39 = (long *)
                                            OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                }
                                if (lVar24 != 0) {
                                  fVar44 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                                                       (*(long *)(*plVar39 + 0xb8) +
                                                                       0x54),0);
                                  if ((*in_stack_00000178 != 0) && (*in_stack_00000170 != 0)) {
                                    fVar55 = *(float *)(*in_stack_00000178 + 0x1a8);
                                    fVar61 = (float)FUN_0369e060(*in_stack_00000170,
                                                                 *(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                    fVar61 = fVar61 * fVar44 * fVar55 * 0.25;
                                    if (fVar44 < in_stack_00000168._4_4_ + fVar61) {
                                      in_stack_00000168._4_4_ = fVar44 - fVar61;
                                    }
                                    goto LAB_0354a568;
                                  }
                                }
                                goto LAB_0354fbf4;
                              }
                            }
                          }
                          fVar61 = 0.0;
                        }
LAB_0354a568:
                        fVar44 = *(float *)(unaff_x19 + 200);
                        fVar55 = (float)FUN_03776ca4(&stack0x000017a0,0);
                        fVar44 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                          fVar58 * (fVar41 + ((fVar55 - in_stack_00000168._4_4_) -
                                                             fVar61));
                        fVar41 = (float)FUN_03776cac(&stack0x000017a0,0);
                        fVar55 = *(float *)((long)unaff_x19 + 0x61c) +
                                 ((fVar45 + fVar58 * (fVar43 + in_stack_00000168._4_4_ + fVar41)) -
                                 *(float *)(unaff_x19 + 0x9b));
                        fVar41 = (float)FUN_03776c9c(&stack0x000017a0,0);
                        fStack0000000000000134 =
                             fVar55 - fVar58 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ +
                                               fVar41);
                        fVar41 = (float)FUN_03776c94(&stack0x000017a0,0);
                        fVar43 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                          fVar58 * (fVar61 + fVar61 +
                                                   in_stack_00000168._4_4_ + in_stack_00000168._4_4_
                                                   + fVar41);
                        fStack0000000000000104 = fVar44;
                        fVar41 = fVar43;
                        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                           ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                          fVar47 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
                          fVar41 = (float)FUN_03776cac(&stack0x000017a0,0);
                          fVar48 = fVar47 * fVar58 * (fVar61 + in_stack_00000168._4_4_ + fVar41);
                          fVar41 = (float)FUN_03776cac(&stack0x000017a0,0);
                          fVar46 = (float)FUN_03776c9c(&stack0x000017a0,0);
                          fVar55 = fVar55 + 0.0;
                          fStack0000000000000134 = fStack0000000000000134 + 0.0;
                          fVar47 = fVar47 * fVar58 * (((fVar41 - fVar46) - in_stack_00000168._4_4_)
                                                     - fVar61);
                          fVar46 = fVar44 + fVar48;
                          fVar41 = fVar43 + fVar47;
                          fVar54 = (fVar48 - fVar47) * 0.5;
                          fVar44 = (fVar44 + fVar47) - fVar54;
                          fVar43 = (fVar43 + fVar48) - fVar54;
                          fStack0000000000000104 = fVar46 - fVar54;
                          fVar41 = fVar41 - fVar54;
                        }
                        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                          fVar47 = 0.0;
                          fVar48 = 0.0;
                          fVar53 = 0.0;
                          fStack0000000000000100 = 0.0;
                          fVar54 = fStack0000000000000134;
                          fVar46 = fVar55;
                        }
                        else {
                          thunk_FUN_036bc400(_fStack0000000000000070,0);
                          fVar56 = (fVar43 + fVar44) * 0.5;
                          fVar59 = (fStack0000000000000134 + fVar55) * 0.5;
                          fVar55 = fVar55 - fVar59;
                          fStack0000000000000100 = 0.0;
                          fVar46 = fVar55;
                          fStack0000000000000104 =
                               (float)FUN_036bdd2c(fStack0000000000000104 - fVar56,
                                                   _fStack0000000000000070,0);
                          fStack0000000000000104 = fVar56 + fStack0000000000000104;
                          fStack0000000000000100 = fStack0000000000000100 + 0.0;
                          fVar54 = fStack0000000000000134 - fVar59;
                          fVar47 = 0.0;
                          fStack0000000000000134 = fVar54;
                          fVar44 = (float)FUN_036bdd2c(fVar44 - fVar56,_fStack0000000000000070,0);
                          fVar44 = fVar56 + fVar44;
                          fVar47 = fVar47 + 0.0;
                          fStack0000000000000134 = fVar59 + fStack0000000000000134;
                          fVar53 = 0.0;
                          fVar43 = (float)FUN_036bdd2c(fVar43 - fVar56,_fStack0000000000000070,0);
                          fVar43 = fVar56 + fVar43;
                          fVar55 = fVar59 + fVar55;
                          fVar53 = fVar53 + 0.0;
                          fVar48 = 0.0;
                          fVar41 = (float)FUN_036bdd2c(fVar41 - fVar56,_fStack0000000000000070,0);
                          fVar41 = fVar56 + fVar41;
                          fVar48 = fVar48 + 0.0;
                          fVar54 = fVar59 + fVar54;
                          fVar46 = fVar59 + fVar46;
                        }
                        if ((*unaff_x22 == 0) ||
                           (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar24 + 0x11c) = fVar44;
                        *(float *)(lVar24 + 0x120) = fStack0000000000000134;
                        *(float *)(lVar24 + 0x124) = fVar47;
                        if ((*unaff_x22 == 0) ||
                           (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar24 + 0x114) = fVar46;
                        *(float *)(lVar24 + 0x110) = fStack0000000000000104;
                        *(float *)(lVar24 + 0x118) = fStack0000000000000100;
                        if ((*unaff_x22 == 0) ||
                           (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar24 + 0x128) = fVar43;
                        *(float *)(lVar24 + 300) = fVar55;
                        *(float *)(lVar24 + 0x130) = fVar53;
                        if ((*unaff_x22 == 0) ||
                           (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar24 + 0x134) = fVar41;
                        *(float *)(lVar24 + 0x138) = fVar54;
                        *(float *)(lVar24 + 0x13c) = fVar48;
                        if ((*unaff_x22 == 0) ||
                           (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
                        uVar23 = *unaff_x20;
                        lVar34 = (long)(int)uVar23;
                        if (*(uint *)(lVar24 + 0x18) <= uVar23)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar26 = lVar24 + lVar34 * unaff_x24;
                        *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
                        fVar55 = *(float *)(unaff_x19 + 0x9b);
                        param_2 = (ulong)(uint)fVar55;
                        fVar41 = *(float *)((long)unaff_x19 + 0x61c);
                        *(float *)(lVar26 + 0x15c) =
                             (fVar43 - fVar44) / (fVar46 - fStack0000000000000134);
                        *(float *)(lVar26 + 0x14c) = (fVar45 - fVar55) + fVar41;
                        fVar43 = fStack0000000000000124 * fVar58;
                        if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                          fVar43 = fVar43 / in_stack_00000150;
                          fStack0000000000000120 =
                               (fStack0000000000000120 * fVar58) / in_stack_00000150;
                        }
                        else {
                          fStack0000000000000120 = fStack0000000000000120 * fVar58;
                        }
                        uVar2 = *(uint *)(unaff_x19 + 0x93);
                        if ((uVar12 == 0) || (uVar23 == uVar2)) {
                          fStack0000000000000120 = fVar41 + fStack0000000000000120;
                          fVar43 = fVar41 + fVar43;
                          fVar45 = fStack0000000000000120;
                          fVar44 = fVar43;
                          if (fVar41 != 0.0) {
                            fVar44 = (fVar43 - fVar41) / *(float *)((long)unaff_x19 + 0x404);
                            fVar45 = (fStack0000000000000120 - fVar41) /
                                     *(float *)((long)unaff_x19 + 0x404);
                            if (fVar44 <= fVar43) {
                              fVar44 = fVar43;
                            }
                            if (fStack0000000000000120 <= fVar45) {
                              fVar45 = fStack0000000000000120;
                            }
                          }
                          lVar24 = lVar24 + lVar34 * unaff_x24;
                          fVar41 = fVar44;
                          if (fVar44 <= *(float *)(unaff_x19 + 0x99)) {
                            fVar41 = *(float *)(unaff_x19 + 0x99);
                          }
                          fVar46 = fVar45;
                          if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar45) {
                            fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
                          }
                          *(float *)((long)unaff_x19 + 0x4cc) = fVar46;
                          *(float *)(unaff_x19 + 0x99) = fVar41;
                          *(float *)(lVar24 + 0x154) = fVar44;
                          *(float *)(lVar24 + 0x158) = fVar45;
                          *(float *)(lVar24 + 0x148) = fVar43 - fVar55;
                          *(float *)(unaff_x19 + 0x98) = fVar43 - fVar55;
                          *(float *)(lVar24 + 0x150) = fStack0000000000000120 - fVar55;
                          *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar55;
                          if (((int)unaff_x19[0x95] == 0) ||
                             (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                            *(float *)(unaff_x19 + 0x97) = fVar41;
                            if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                            fVar41 = *(float *)((long)unaff_x19 + 0x4bc);
                            fVar44 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                            in_stack_00000150 = (fVar58 * fVar44) / in_stack_00000150;
                            param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                            if (fVar41 <= in_stack_00000150) {
                              fVar41 = in_stack_00000150;
                            }
                            *(float *)((long)unaff_x19 + 0x4bc) = fVar41;
                          }
                          if ((float)param_2 == 0.0) {
                            fVar41 = *(float *)(in_stack_00000078 + 0x208);
                            if (*(float *)(in_stack_00000078 + 0x208) <= fVar43) {
                              fVar41 = fVar43;
                            }
                            *(float *)(in_stack_00000078 + 0x208) = fVar41;
                          }
                        }
                        else {
                          fVar41 = *(float *)(unaff_x19 + 0x99);
                          lVar24 = lVar24 + lVar34 * unaff_x24;
                          *(float *)(lVar24 + 0x154) = fVar41;
                          fVar43 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar41 = fVar41 - fVar55;
                          *(float *)(lVar24 + 0x148) = fVar41;
                          *(float *)(lVar24 + 0x158) = fVar43;
                          *(float *)(unaff_x19 + 0x98) = fVar41;
                          fVar43 = fVar43 - fVar55;
                          *(float *)(lVar24 + 0x150) = fVar43;
                          *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
                        }
                        lVar24 = *unaff_x22;
                        if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0))
                        goto LAB_0354fbf4;
                        uVar13 = *unaff_x20;
                        if (*(uint *)(lVar34 + 0x18) <= uVar13)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar34 = lVar34 + (long)(int)uVar13 * unaff_x24;
                        *(undefined1 *)(lVar34 + 0x194) = 0;
                        uVar29 = *(uint *)(unaff_x19 + 0x4f);
                        unaff_x21 = in_stack_00000178;
                        uVar10 = unaff_w25;
                        if ((unaff_w25 == 9) ||
                           (((((uVar12 == 0 && (unaff_w25 != 3)) && (unaff_w25 != 0x200b)) &&
                             (unaff_w25 != 0xad)) ||
                            (((unaff_w25 == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
                             (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                          *(undefined1 *)(lVar34 + 0x194) = 1;
                          pfVar27 = _fStack00000000000000a0;
                          pfVar31 = _fStack00000000000000a8;
                          if (unaff_w23 != 0) {
                            lVar24 = *(long *)(lVar24 + 0x50);
                            if (lVar24 == 0) goto LAB_0354fbf4;
                            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            pfVar31 = (float *)(lVar24 + 0x60);
                            pfVar27 = (float *)(lVar24 + 100);
                          }
                          fVar43 = *pfVar31;
                          fVar44 = *pfVar27;
                          fVar41 = *(float *)(unaff_x19 + 0x6c);
                          fVar45 = *(float *)(unaff_x19 + 200);
                          in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar43) - fVar44;
                          bVar9 = true;
                          if ((fVar41 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar41)))
                          {
                            bVar9 = fVar41 == -1.0;
                          }
                          if (!bVar9) {
                            in_stack_000000f8._4_4_ = fVar41;
                          }
                          fVar41 = 0.0;
                          if ((char)unaff_x19[0x1e] == '\0') {
                            fVar41 = (float)FUN_03776cb4(&stack0x000017a0,0);
                            param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                          }
                          fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
                          fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar55 = (float)unaff_d11;
                          if (unaff_w25 != 0xad) {
                            fVar55 = fVar58;
                          }
                          fVar48 = (float)param_2;
                          fVar54 = 0.0;
                          if ((0.0 < fVar48) &&
                             (fVar54 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar54 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          uVar13 = *unaff_x20;
                          fVar54 = (*(float *)(unaff_x19 + 0x97) - (fVar47 - fVar48)) + fVar54;
                          if (fStack00000000000000c4 < fVar54) {
                            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                              *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                            }
                            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            in_stack_000017d8 = DAT_00d37868;
                            if ((char)unaff_x19[0x47] != '\0') {
                              fVar53 = *(float *)(unaff_x19 + 0x59);
                              if (((fVar53 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar48))
                                 && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar57 = *(float *)((long)unaff_x19 + 700) +
                                         ((fStack0000000000000018 - fVar54) /
                                         (float)(int)unaff_x19[0x95]) / in_stack_00000050;
                                if (fVar57 <= fVar53) {
                                  fVar57 = fVar53;
                                }
                                goto UnityEngine_AndroidJavaObject___ctor;
                              }
                              fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
                              fVar54 = *(float *)(unaff_x19 + 0x4a);
                              param_2 = (ulong)(uint)fVar54;
                              if ((fVar54 < fVar48) &&
                                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar57 = (fVar48 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                if (fVar57 <= DAT_00d38b84) {
                                  fVar57 = DAT_00d38b84;
                                }
                                fVar50 = (fVar48 - fVar57) * 20.0 + 0.5;
                                *(float *)((long)unaff_x19 + 0x23c) = fVar48;
                                fVar57 = DAT_00d38e60;
                                if (fVar50 != INFINITY) {
                                  fVar57 = (float)(int)fVar50 / 20.0;
                                }
                                if (fVar57 <= fVar54) {
                                  fVar57 = fVar54;
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
                              lVar34 = *(long *)(lVar24 + 0xb8);
                              lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                                lVar24 = FUN_01a46ff8(lVar24);
                              }
                              piVar20 = (int *)thunk_FUN_01a59484(lVar34 + 0x11f0,
                                                                  *(long *)(*(long *)(*(long *)(
                                                  lVar24 + 0xc0) + 8) + 0x80) + 0xa0);
                              puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*piVar20 == 0) {
LAB_0354cf2c:
                                in_stack_000017d8 = DAT_00d37868;
                                unaff_x20[0] = 0;
                                unaff_x20[1] = 0;
                                unaff_d11 = uVar17;
                                in_stack_000017b8 = 0xffffffff;
                                goto LAB_03549564;
                              }
                              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar24 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar24 = *(long *)puVar8;
                              }
                              FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008b0,
                                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                              memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                              iVar11 = FUN_0358c15c();
LAB_0354b3a0:
                              iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
                              *(int *)((long)unaff_x19 + 0x494) = iVar15;
                              in_stack_00000180 = in_stack_00000180 + 1;
                              unaff_d11 = uVar17;
                              in_stack_000017b8 = iVar11 - 1;
                              in_stack_000017d8 = CONCAT44(0x2026,iVar15);
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
                              if ((uVar13 == 0) || ((int)in_stack_000017b8 < 0)) {
                                *unaff_x20 = 0;
                                unaff_d11 = uVar17;
                                in_stack_000017b8 = 0xffffffff;
                                goto LAB_03549564;
                              }
                              fVar57 = *(float *)(unaff_x19 + 0x99);
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017b8 = FUN_0358c15c();
                              if (fVar57 - fVar47 <= fStack00000000000000c4) {
                                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                *(undefined4 *)(unaff_x19 + 0x93) =
                                     *(undefined4 *)((long)unaff_x19 + 0x494);
                                param_2 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 200) =
                                     *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                lVar24 = NEON_rev64(param_2,4);
                                unaff_x19[0x99] = lVar24;
                                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
                                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                unaff_d11 = uVar17;
                                in_stack_000017d8 = uVar19;
                                goto LAB_03549564;
                              }
                              break;
                            case 6:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017b8 = FUN_0358c15c();
                              lVar24 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar18 = FUN_036cee6c(lVar24,0,0);
                              if ((uVar18 & 1) != 0) {
                                plVar39 = (long *)unaff_x19[0x5d];
                                uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar39 + 0x528))
                                          (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                                lVar24 = unaff_x19[0x5d];
                                if (lVar24 == 0) goto LAB_0354fbf4;
                                *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar39 = (long *)unaff_x19[0x5d];
                                if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar39 + 0x7a8))
                                          (plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                              }
                            }
LAB_0354b0e0:
                            unaff_d11 = uVar17;
                            in_stack_000017d8 = CONCAT44(3,uVar13);
                            goto LAB_03549564;
                          }
switchD_0354ad3c_caseD_2:
                          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          fVar45 = ABS(fVar45) + fVar41 * (1.0 - fVar46) * fVar55;
                          fVar41 = 1.0;
                          if ((uVar29 & 0x18) != 0) {
                            fVar41 = DAT_00d38acc;
                          }
                          fVar55 = fVar41 * in_stack_000000f8._4_4_;
                          if (fVar55 < fVar45) {
                            param_2 = (ulong)(uint)fVar61;
                            if (((char)unaff_x19[0x5b] == '\0') ||
                               (uVar13 == *(uint *)(unaff_x19 + 0x93))) {
                              if (((char)unaff_x19[0x47] != '\0') &&
                                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                if (fVar46 < fVar55) {
                                  fVar57 = fVar45 / (1.0 - fVar46);
                                  if (fVar46 <= 0.0) {
                                    fVar57 = fVar45;
                                  }
                                  fVar46 = fVar46 + (fVar45 - fVar41 * (in_stack_000000f8._4_4_ +
                                                                       DAT_00d38cc4)) / fVar57;
                                  goto LAB_0354fc24;
                                }
                                fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
                                fVar55 = *(float *)(unaff_x19 + 0x4a);
                                if (fVar55 < fVar46) {
                                  fVar57 = (fVar46 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                  if (fVar57 <= DAT_00d38b84) {
                                    fVar57 = DAT_00d38b84;
                                  }
                                  *(float *)((long)unaff_x19 + 0x23c) = fVar46;
                                  fVar46 = fVar46 - fVar57;
LAB_0354fc60:
                                  fVar50 = fVar46 * 20.0 + 0.5;
                                  fVar57 = DAT_00d38e60;
                                  if (fVar50 != INFINITY) {
                                    fVar57 = (float)(int)fVar50 / 20.0;
                                  }
                                  if (fVar57 <= fVar55) {
                                    fVar57 = fVar55;
                                  }
LAB_0354d004:
                                  *(float *)((long)unaff_x19 + 0x1e4) = fVar57;
                                  return;
                                }
                              }
                              iVar11 = (int)unaff_x19[0x5c];
                              if (iVar11 == 1) {
                                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar24 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar24 = *(long *)puVar8;
                                }
                                lVar34 = *(long *)(lVar24 + 0xb8);
                                lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                                  lVar24 = FUN_01a46ff8(lVar24);
                                }
                                piVar20 = (int *)thunk_FUN_01a59484(lVar34 + 0x11f0,
                                                                    *(long *)(*(long *)(*(long *)(
                                                  lVar24 + 0xc0) + 8) + 0x80) + 0xa0);
                                puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*piVar20 == 0) goto LAB_0354cf2c;
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
                              if (iVar11 != 6) {
                                if (iVar11 == 3) {
                                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0)
                                  {
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
                              uVar18 = FUN_036cee6c(lVar24,0,0);
                              if ((uVar18 & 1) != 0) {
                                plVar39 = (long *)unaff_x19[0x5d];
                                uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar39 + 0x528))
                                          (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                                lVar24 = unaff_x19[0x5d];
                                if (lVar24 == 0) goto LAB_0354fbf4;
                                *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar39 = (long *)unaff_x19[0x5d];
                                if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar39 + 0x7a8))
                                          (plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                              }
LAB_0354b4b4:
                              unaff_d11 = uVar17;
                              in_stack_000017d8 = CONCAT44(3,*unaff_x20);
                              goto LAB_03549564;
                            }
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            in_stack_000017b8 = FUN_0358c15c();
                            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                              lVar24 = *unaff_x22;
                              if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0))
                              goto LAB_0354fbf4;
                              if (*(uint *)(lVar34 + 0x18) <= *unaff_x20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              fVar55 = *(float *)(unaff_x19 + 0x9b);
                              fVar46 = 0.0;
                              if ((0.0 < fVar55) &&
                                 (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a)
                                ;
                              }
                              fVar46 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                                       *(float *)(lVar34 + (long)(int)*unaff_x20 * unaff_x24 + 0x154
                                                 ) + (fVar46 - *(float *)((long)unaff_x19 + 0x4cc))
                                       + in_stack_00000050 *
                                         (in_stack_00000048._4_4_ +
                                         *(float *)((long)unaff_x19 + 700));
                            }
                            else {
                              lVar24 = unaff_x19[0x6d];
                              *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              fVar55 = *(float *)(unaff_x19 + 0x9b);
                              fVar46 = *(float *)(unaff_x19 + 0x58) +
                                       fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
                            }
                            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            lVar24 = *(long *)(lVar24 + 0x38);
                            if (lVar24 != 0) {
                              uVar33 = *(uint *)((long)unaff_x19 + 0x494);
                              if ((*(uint *)(lVar24 + 0x18) <= uVar33) ||
                                 (uVar30 = uVar33 - 1, *(uint *)(lVar24 + 0x18) <= uVar30))
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              param_2 = (ulong)(uint)(fVar46 + *(float *)(unaff_x19 + 0x97));
                              fVar47 = (fVar46 + *(float *)(unaff_x19 + 0x97) + fVar55) -
                                       *(float *)(lVar24 + (long)(int)uVar33 * unaff_x24 + 0x158);
                              if (((bStack000000000000006c & 1) == 0 &&
                                   *(short *)(lVar24 + (long)(int)uVar30 * (long)iVar14 + 0x20) ==
                                   0xad) &&
                                 ((fVar47 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0))))
                              {
                                bStack000000000000006c = 0;
                                *unaff_x20 = uVar30;
                                unaff_d11 = uVar17;
                                in_stack_000017b8 = in_stack_000017b8 - 1;
                                in_stack_000017d8 = CONCAT44(0x2d,uVar30);
                                goto LAB_03549564;
                              }
                              if (*(short *)(lVar24 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad)
                              {
                                bStack000000000000006c = 1;
                                unaff_d11 = uVar17;
                                in_stack_000017d8 = uVar19;
                                goto LAB_03549564;
                              }
                              if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
                                fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
                                fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                if ((fVar55 <= fVar46) ||
                                   ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                                  fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
                                  param_2 = (ulong)(uint)fVar46;
                                  fVar55 = *(float *)(unaff_x19 + 0x4a);
                                  if ((fVar46 <= fVar55) ||
                                     ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                                  goto LAB_0354b6dc;
LAB_0354fcd0:
                                  fVar57 = (fVar46 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                  if (fVar57 <= DAT_00d38b84) {
                                    fVar57 = DAT_00d38b84;
                                  }
                                  *(float *)((long)unaff_x19 + 0x23c) = fVar46;
                                  fVar46 = fVar46 - fVar57;
                                  goto LAB_0354fc60;
                                }
LAB_0354fc94:
                                fVar57 = fVar45;
                                if (0.0 < fVar46) {
                                  fVar57 = fVar45 / (1.0 - fVar46);
                                }
                                fVar46 = fVar46 + (fVar45 - fVar41 * (in_stack_000000f8._4_4_ +
                                                                     DAT_00d38cc4)) / fVar57;
LAB_0354fc24:
                                if (fVar55 <= fVar46) {
                                  fVar46 = fVar55;
                                }
                                *(float *)((long)unaff_x19 + 0x2d4) = fVar46;
                                return;
                              }
LAB_0354b6dc:
                              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar24 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar24 = *(long *)puVar8;
                              }
                              iVar11 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
                              if (((iVar11 != iStack000000000000002c) && (iVar11 != -1)) &&
                                 (((bStack0000000000000068 ^ 1) & 1) == 0)) {
                                if (*(int *)(lVar24 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                in_stack_000017b8 = FUN_0358c15c();
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
                                goto LAB_0354fbf4;
                                uVar33 = *unaff_x20 - 1;
                                if (*(uint *)(lVar24 + 0x18) <= uVar33)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                iStack000000000000002c = iVar11;
                                if (*(short *)(lVar24 + (long)(int)uVar33 * (long)iVar14 + 0x20) ==
                                    0xad) {
                                  bStack000000000000006c = 0;
                                  *unaff_x20 = uVar33;
                                  unaff_d11 = uVar17;
                                  in_stack_000017b8 = in_stack_000017b8 - 1;
                                  in_stack_000017d8 = CONCAT44(0x2d,uVar33);
                                  goto LAB_03549564;
                                }
                              }
                              if (fVar47 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
                                param_2 = uVar17;
                                FUN_0358cbd4(in_stack_00000050,uVar17,fStack00000000000000d4,
                                             *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                             fStack00000000000000d0,fVar57,in_stack_000000f8._4_4_,
                                             in_stack_00000048._4_4_);
                              }
                              else {
                                if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                  *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                }
                                fVar55 = fStack00000000000000c4;
                                if ((char)unaff_x19[0x47] != '\0') {
                                  fVar55 = *(float *)(unaff_x19 + 0x59);
                                  if ((fVar55 < *(float *)((long)unaff_x19 + 700)) &&
                                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                    fVar57 = *(float *)((long)unaff_x19 + 700) +
                                             ((fStack0000000000000018 - fVar47) /
                                             (float)((int)unaff_x19[0x95] + 1)) / in_stack_00000050;
                                    if (fVar57 <= fVar55) {
                                      fVar57 = fVar55;
                                    }
UnityEngine_AndroidJavaObject___ctor:
                                    *(float *)((long)unaff_x19 + 700) = fVar57;
                                    return;
                                  }
                                  fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
                                  fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                  if ((fVar46 < fVar55) &&
                                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                  goto LAB_0354fc94;
                                  fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
                                  param_2 = (ulong)(uint)fVar46;
                                  fVar55 = *(float *)(unaff_x19 + 0x4a);
                                  if ((fVar55 < fVar46) &&
                                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
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
                                  lVar34 = *(long *)(lVar24 + 0xb8);
                                  lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                  if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                                    lVar24 = FUN_01a46ff8(lVar24);
                                  }
                                  piVar20 = (int *)thunk_FUN_01a59484(lVar34 + 0x11f0,
                                                                      *(long *)(*(long *)(*(long *)(
                                                  lVar24 + 0xc0) + 8) + 0x80) + 0xa0);
                                  if (*piVar20 == 0) {
                                    bStack000000000000006c = 0;
                                    goto LAB_0354cf2c;
                                  }
                                  lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (*(int *)(lVar24 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  }
                                  FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008b0,
                                               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                  memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                                  iVar11 = FUN_0358c15c();
                                  bStack000000000000006c = 0;
                                  goto LAB_0354b3a0;
                                case 3:
                                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0)
                                  {
                                    thunk_FUN_01a58e78();
                                  }
                                  in_stack_000017b8 = FUN_0358c15c();
                                  bStack000000000000006c = 0;
                                  goto LAB_0354b0e0;
                                case 5:
                                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                  param_2 = uVar17;
                                  FUN_0358cbd4(in_stack_00000050,uVar17,fStack00000000000000d4,
                                               *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                               fStack00000000000000d0,fVar57,in_stack_000000f8._4_4_
                                               ,in_stack_00000048._4_4_);
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
                                  uVar18 = FUN_036cee6c(lVar24,0,0);
                                  if ((uVar18 & 1) != 0) {
                                    plVar39 = (long *)unaff_x19[0x5d];
                                    uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                                    if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                                    (**(code **)(*plVar39 + 0x528))
                                              (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                                    lVar24 = unaff_x19[0x5d];
                                    if (lVar24 == 0) goto LAB_0354fbf4;
                                    *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
                                    FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                    plVar39 = (long *)unaff_x19[0x5d];
                                    if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                                    (**(code **)(*plVar39 + 0x7a8))
                                              (plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
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
LAB_0354c6b4:
                              bStack0000000000000068 = 1;
                              in_stack_00000060 = 1;
                              unaff_d11 = uVar17;
                              in_stack_000017d8 = uVar19;
                              goto LAB_03549564;
                            }
                            goto LAB_0354fbf4;
                          }
LAB_0354b8e4:
                          if (unaff_w25 != 0xad) {
                            if (unaff_w25 != 9) {
                              if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                                (**(code **)(*unaff_x19 + 0x898))(fVar55,fVar61);
                              }
                              else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
                              }
                              uVar13 = *unaff_x20;
                              if ((in_stack_00000060 & 1) != 0) {
                                *(uint *)(in_stack_00000078 + 0x1f0) = uVar13;
                              }
                              *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                              *(int *)((long)unaff_x19 + 0x4ac) =
                                   *(int *)((long)unaff_x19 + 0x4ac) + 1;
                              if ((unaff_x19[0x6d] != 0) &&
                                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 != 0)) {
                                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar24 + 0x18)) {
                                  lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                  in_stack_00000060 = 0;
                                  *(float *)(lVar24 + 0x60) = fVar43;
                                  *(float *)(lVar24 + 100) = fVar44;
                                  goto LAB_0354ba38;
                                }
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              }
                              goto LAB_0354fbf4;
                            }
                            lVar24 = *unaff_x22;
                            if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0))
                            goto LAB_0354fbf4;
                            uVar13 = *unaff_x20;
                            if (uVar13 < *(uint *)(lVar34 + 0x18)) {
                              *(undefined1 *)(lVar34 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
                              *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                              lVar34 = *(long *)(lVar24 + 0x50);
                              if (lVar34 != 0) {
                                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar34 + 0x18)) {
                                  lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                  *(int *)(lVar34 + 0x2c) = *(int *)(lVar34 + 0x2c) + 1;
                                  goto LAB_0354b950;
                                }
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              }
                              goto LAB_0354fbf4;
                            }
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          }
                          if ((*unaff_x22 == 0) ||
                             (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
                        }
                        else {
                          if (((unaff_w25 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                            fVar43 = (float)param_2;
                            fVar41 = 0.0;
                            if ((0.0 < fVar43) &&
                               (fVar41 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                              fVar41 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                            }
                            param_2 = (ulong)(uint)fStack00000000000000c4;
                            if (fStack00000000000000c4 <
                                (*(float *)(unaff_x19 + 0x97) -
                                (*(float *)((long)unaff_x19 + 0x4cc) - fVar43)) + fVar41) {
                              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                              }
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017b8 = FUN_0358c15c();
                              lVar24 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar18 = FUN_036cee6c(lVar24,0,0);
                              if ((uVar18 & 1) != 0) {
                                plVar39 = (long *)unaff_x19[0x5d];
                                uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar39 != (long *)0x0) {
                                  (**(code **)(*plVar39 + 0x528))
                                            (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                                  lVar24 = unaff_x19[0x5d];
                                  if (lVar24 != 0) {
                                    *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
                                    FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                    plVar39 = (long *)unaff_x19[0x5d];
                                    if (plVar39 != (long *)0x0) {
                                      (**(code **)(*plVar39 + 0x7a8))
                                                (plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
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
                          if ((((unaff_w25 - 0x2007 < 0x23) &&
                               ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x600000001U) != 0))
                              || (unaff_w25 - 10 < 2)) || (unaff_w25 == 0xa0)) {
LAB_0354b500:
                            if (((unaff_w25 != 0xad) && (unaff_w25 != 0x200b)) &&
                               (unaff_w25 != 0x2060)) {
                              lVar24 = *unaff_x22;
                              if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x50), lVar34 == 0))
                              goto LAB_0354fbf4;
                              if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              *(int *)(lVar34 + 0x2c) = *(int *)(lVar34 + 0x2c) + 1;
                              *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
                            }
                          }
                          else {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar18 = FUN_026b97f8(unaff_w25,0);
                            if ((uVar18 & 1) != 0) goto LAB_0354b500;
                          }
                          if (unaff_w25 == 0xa0) {
                            if ((*unaff_x22 == 0) ||
                               (lVar24 = *(long *)(*unaff_x22 + 0x50), lVar24 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
                            *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
                          }
                        }
LAB_0354ba38:
                        if (((int)unaff_x19[0x5c] == 1) && ((unaff_w25 == 0x2d || (unaff_w23 != 1)))
                           ) {
                          if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                          fVar41 = *(float *)(unaff_x19 + 0x3d);
                          iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                          if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                          fVar44 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                          lVar24 = unaff_x19[0xca];
                          fVar43 = fStack0000000000000098;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar43 = 1.0;
                          }
                          if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_0354fbf4;
                          fVar61 = *(float *)((long)unaff_x19 + 0x404);
                          fVar46 = *(float *)(lVar24 + 0x2c);
                          fVar45 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
                          fVar55 = *_fStack00000000000000a8;
                          fVar45 = fVar61 * (fVar41 / (float)iVar11) * fVar44 * fVar43 * fVar46 *
                                   fVar45;
                          fVar41 = *_fStack00000000000000a0;
                          if ((unaff_w25 == 10) &&
                             (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                            if ((*unaff_x22 == 0) ||
                               (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
                            goto LAB_0354fbf4;
                            uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
                            if (*(uint *)(lVar24 + 0x18) <= uVar13)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                            fVar43 = *(float *)(lVar24 + (long)(int)uVar13 * (long)iVar14 + 0x60);
                            iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                            fVar61 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                            lVar24 = unaff_x19[0xca];
                            fVar44 = fStack0000000000000098;
                            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                              fVar44 = 1.0;
                            }
                            if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_0354fbf4;
                            fVar46 = *(float *)((long)unaff_x19 + 0x404);
                            fVar47 = *(float *)(lVar24 + 0x2c);
                            fVar45 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
                            if ((*unaff_x22 == 0) ||
                               (lVar24 = *(long *)(*unaff_x22 + 0x50), lVar24 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            fVar55 = *(float *)(lVar24 + 0x60);
                            fVar41 = *(float *)(lVar24 + 100);
                            fVar45 = fVar46 * (fVar43 / (float)iVar11) * fVar61 * fVar44 * fVar47 *
                                     fVar45;
                          }
                          fVar61 = *(float *)(unaff_x19 + 0x9b);
                          fVar43 = 0.0;
                          fVar44 = 0.0;
                          if ((0.0 < fVar61) &&
                             (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          fVar47 = *(float *)(unaff_x19 + 0x97);
                          fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar46 = *(float *)(unaff_x19 + 200);
                          if ((char)unaff_x19[0x1e] == '\0') {
                            if ((unaff_x19[0xca] == 0) ||
                               (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
                            goto LAB_0354fbf4;
                            FUN_03776e6c(&stack0x000008b0,lVar24,0);
                            fVar43 = (float)FUN_03776cb4(&stack0x00001710,0);
                          }
                          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          fVar48 = *(float *)(unaff_x19 + 0x6c);
                          fVar41 = (fStack000000000000009c - fVar55) - fVar41;
                          bVar9 = true;
                          if ((fVar48 <= fVar41) && (bVar9 = false, !NAN(fVar48))) {
                            bVar9 = fVar48 == -1.0;
                          }
                          if (!bVar9) {
                            fVar41 = fVar48;
                          }
                          fVar55 = 1.0;
                          if ((uVar29 & 0x18) != 0) {
                            fVar55 = DAT_00d38acc;
                          }
                          if (((fVar47 - (fVar54 - fVar61)) + fVar44 < fStack00000000000000c4) &&
                             (ABS(fVar46) +
                              fVar45 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                              fVar55 * fVar41)) {
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                            lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
                            memcpy(&stack0x00000538,(void *)(lVar24 + 0x788),0x378);
                            FUN_0209b210(lVar24 + 0x11f0,&stack0x00000538,
                                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                          }
                        }
                        lVar24 = *unaff_x22;
                        if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar34 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar13 = *(uint *)(unaff_x19 + 0x95);
                        lVar34 = lVar34 + (long)(int)*unaff_x20 * unaff_x24;
                        *(uint *)(lVar34 + 100) = uVar13;
                        *(int *)(lVar34 + 0x68) = (int)unaff_x19[0x96];
                        if (((unaff_w23 & 1) == 0) &&
                           ((0xd < unaff_w25 || ((1 << (ulong)(unaff_w25 & 0x1f) & 0x2c00U) == 0))))
                        {
                          lVar24 = *(long *)(lVar24 + 0x50);
                          if (lVar24 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
                          if (*(uint *)(lVar24 + 0x18) <= uVar13)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *(int *)(lVar24 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                        }
                        else {
                          lVar24 = *(long *)(lVar24 + 0x50);
                          if (lVar24 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar24 + 0x18) <= uVar13)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          if (*(int *)(lVar24 + (long)(int)uVar13 * 0x5c + 0x24) == 1)
                          goto LAB_0354bde0;
                        }
                        if (unaff_w25 == 9) {
                          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                          fVar50 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
                          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                          fVar60 = *(float *)(unaff_x19 + 200);
                          fVar41 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
                          fVar50 = fVar58 * fVar50 * fVar41;
                          fVar43 = fVar50 * (float)(int)(fVar60 / fVar50);
                          param_2 = (ulong)(uint)fVar43;
                          if (fVar43 <= fVar60) {
                            fVar43 = fVar60 + fVar50;
                          }
LAB_0354c000:
                          *(float *)(unaff_x19 + 200) = fVar43;
                        }
                        else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                          if ((char)unaff_x19[0x1e] == '\0') {
                            if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                              fVar60 = 1.0;
                            }
                            else {
                              fVar60 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
                            }
                            fVar43 = *(float *)(unaff_x19 + 200);
                            fVar44 = (float)FUN_03776cb4(&stack0x000017a0,0);
                            if (unaff_x19[0x20] != 0) {
                              fVar41 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                              fVar43 = fVar43 + fVar41 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                         fVar58 * (fVar50 + fVar60 * fVar44) +
                                                         fStack00000000000000d4 *
                                                         (fStack00000000000000d0 +
                                                         fVar57 + *(float *)(unaff_x19[0x20] + 0x1ac
                                                                            )));
                              *(float *)(unaff_x19 + 200) = fVar43;
                              goto joined_r0x0354bf48;
                            }
                            goto LAB_0354fbf4;
                          }
                          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                          fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fVar58 * fVar50 +
                                   fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   fVar57 + *(float *)(*in_stack_00000178 + 0x1ac)));
                          param_2 = (ulong)(uint)fVar43;
                          fVar43 = *(float *)(unaff_x19 + 200) - fVar43;
                          *(float *)(unaff_x19 + 200) = fVar43;
                          if ((unaff_w25 == 0x200b) || (uVar12 != 0)) {
                            fVar50 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
                            param_2 = (ulong)(uint)fVar50;
                            fVar43 = fVar43 - fVar50;
                            goto LAB_0354c000;
                          }
                        }
                        else {
                          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                          fVar41 = *(float *)(unaff_x19 + 200);
                          fVar43 = fVar41 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                            (*(float *)((long)unaff_x19 + 0x2ac) +
                                            (*(float *)(unaff_x19 + 0x56) - fVar60) +
                                            fStack00000000000000d4 *
                                            (fVar57 + *(float *)(*in_stack_00000178 + 0x1ac)));
                          *(float *)(unaff_x19 + 200) = fVar43;
joined_r0x0354bf48:
                          if ((unaff_w25 == 0x200b) || (param_2 = (ulong)(uint)fVar41, uVar12 != 0))
                          {
                            fVar50 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
                            param_2 = (ulong)(uint)fVar50;
                            fVar43 = fVar43 + fVar50;
                            goto LAB_0354c000;
                          }
                        }
                        lVar24 = *unaff_x22;
                        if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0))
                        goto LAB_0354fbf4;
                        uVar13 = *unaff_x20;
                        uVar29 = (uint)*(undefined8 *)(lVar34 + 0x18);
                        if (uVar29 <= uVar13)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(float *)(lVar34 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar43;
                        uVar33 = unaff_w25;
                        if ((int)unaff_w25 < 0xd) {
                          if ((unaff_w25 - 10 < 2) || (unaff_w25 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
                          if (((unaff_w23 & unaff_w25 == 0x2d) != 0) ||
                             ((float)uVar13 == in_stack_00000080._4_4_)) goto LAB_0354c060;
                        }
                        else {
                          if (1 < unaff_w25 - 0x2028) {
                            if (unaff_w25 != 0xd) goto LAB_0354c6e8;
                            param_2 = 0;
                            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                            if ((float)uVar13 != in_stack_00000080._4_4_) goto LAB_0354c704;
                          }
LAB_0354c060:
                          if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                            fVar50 = *(float *)(unaff_x19 + 0x99);
                            fVar41 = *(float *)(unaff_x19 + 0x9a);
                            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            fVar50 = fVar50 - fVar41;
                            if (((fStack0000000000000058 < ABS(fVar50)) &&
                                (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                               (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                              FUN_0358c860(fVar50);
                              *(float *)((long)unaff_x19 + 0x4c4) =
                                   *(float *)((long)unaff_x19 + 0x4c4) - fVar50;
                              *(float *)(unaff_x19 + 0x9b) = fVar50 + *(float *)(unaff_x19 + 0x9b);
                              puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar24 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar24 = *(long *)puVar8;
                              }
                              lVar34 = *(long *)(lVar24 + 0xb8);
                              if (*(int *)(lVar34 + 0x7ac) == (int)unaff_x19[0x95]) {
                                if (*(int *)(lVar24 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar34 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                }
                                FUN_0209b778(lVar34 + 0x11f0,&stack0x000008b0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000008b0,
                                       0x378);
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (*(long *)(lVar24 + 0xb8) + 0x818,0);
                                lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
                                *(float *)(lVar24 + 0x7bc) = fVar50 + *(float *)(lVar24 + 0x7bc);
                                *(float *)(lVar24 + 0x800) = fVar50 + *(float *)(lVar24 + 0x800);
                                memcpy(&stack0x000001c0,(void *)(lVar24 + 0x788),0x378);
                                FUN_0209b210(lVar24 + 0x11f0,&stack0x000001c0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                              }
                            }
                          }
                          fVar43 = *(float *)(unaff_x19 + 0x9b);
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                          fVar41 = *(float *)((long)unaff_x19 + 0x4cc) - fVar43;
                          fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
                          if (fVar41 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                            fVar50 = fVar41;
                          }
                          *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
                          fVar60 = *(float *)(unaff_x19 + 0x99);
                          if (in_stack_000017e4 == '\0') {
                            in_stack_000017e8 = fVar50;
                          }
                          if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                             (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                              ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                            in_stack_000017e4 = '\x01';
                          }
                          lVar24 = *unaff_x22;
                          if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x50), lVar34 == 0))
                          goto LAB_0354fbf4;
                          uVar13 = *(uint *)(unaff_x19 + 0x95);
                          if (*(uint *)(lVar34 + 0x18) <= uVar13)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar26 = unaff_x19[0x93];
                          lVar32 = lVar34 + (long)(int)uVar13 * 0x5c;
                          *(int *)(lVar32 + 0x34) = (int)lVar26;
                          uVar29 = *(uint *)(unaff_x19 + 0x93);
                          if ((int)lVar26 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                            uVar29 = *(uint *)((long)unaff_x19 + 0x49c);
                          }
                          *(uint *)((long)unaff_x19 + 0x49c) = uVar29;
                          *(uint *)(lVar32 + 0x38) = uVar29;
                          *(undefined4 *)(unaff_x19 + 0x94) =
                               *(undefined4 *)((long)unaff_x19 + 0x494);
                          *(undefined4 *)(lVar32 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                          iVar11 = *(int *)((long)unaff_x19 + 0x49c);
                          if ((int)uVar29 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                            iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
                          }
                          *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
                          *(int *)(lVar32 + 0x40) = iVar11;
                          *(int *)(lVar32 + 0x24) =
                               (*(int *)(lVar32 + 0x3c) - *(int *)(lVar32 + 0x34)) + 1;
                          *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                          lVar24 = *(long *)(lVar24 + 0x38);
                          if (lVar24 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar24 + 0x18) <= uVar29)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar42 = *(undefined4 *)
                                    (lVar24 + (long)(int)uVar29 * (long)iVar14 + 0x11c);
                          lVar34 = lVar34 + (long)(int)uVar13 * 0x5c;
                          *(float *)(lVar34 + 0x70) = fVar41;
                          *(undefined4 *)(lVar34 + 0x6c) = uVar42;
                          lVar24 = *unaff_x22;
                          if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x50), lVar34 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar24 = *(long *)(lVar24 + 0x38);
                          if (lVar24 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fVar60 = fVar60 - fVar43;
                          param_2 = (ulong)(uint)fVar60;
                          lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                          *(undefined4 *)(lVar34 + 0x74) =
                               *(undefined4 *)
                                (lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24
                                + 0x128);
                          *(float *)(lVar34 + 0x78) = fVar60;
                          lVar24 = *unaff_x22;
                          if ((lVar24 == 0) || (lVar26 = *(long *)(lVar24 + 0x50), lVar26 == 0))
                          goto LAB_0354fbf4;
                          lVar32 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                          if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar34 = lVar26 + lVar32 * 0x5c;
                          *(float *)(lVar34 + 0x44) =
                               *(float *)(lVar34 + 0x74) - fVar58 * in_stack_00000168._4_4_;
                          *(float *)(lVar34 + 0x5c) = in_stack_000000f8._4_4_;
                          if (*(int *)(lVar34 + 0x24) == 1) {
                            *(int *)(lVar26 + lVar32 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                          }
                          if ((*in_stack_00000178 == 0) ||
                             (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0)) goto LAB_0354fbf4;
                          lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                          uVar29 = (uint)*(undefined8 *)(lVar34 + 0x18);
                          if (uVar29 <= *(uint *)((long)unaff_x19 + 0x4a4))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          if ((*(char *)(lVar34 + lVar40 * unaff_x24 + 0x194) == '\0') &&
                             (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                             uVar29 <= *(uint *)(unaff_x19 + 0x94)))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar26 = lVar26 + lVar32 * 0x5c;
                          fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (fStack00000000000000d4 *
                                    (fStack00000000000000d0 +
                                    fVar57 + *(float *)(*in_stack_00000178 + 0x1ac)) -
                                   *(float *)((long)unaff_x19 + 0x2ac));
                          fVar57 = -fVar50;
                          if ((char)unaff_x19[0x1e] != '\0') {
                            fVar57 = fVar50;
                          }
                          *(float *)(lVar26 + 0x58) =
                               *(float *)(lVar34 + lVar40 * unaff_x24 + 0x144) + fVar57;
                          *(float *)(lVar26 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                          *(float *)(lVar26 + 0x54) = fVar41;
                          *(float *)(lVar26 + 0x48) = fStack000000000000005c + (fVar60 - fVar41);
                          *(float *)(lVar26 + 0x4c) = fVar60;
                          if ((int)unaff_w25 < 0x2d) {
                            if (unaff_w25 - 10 < 2) {
LAB_0354c4a8:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_0358c4f0();
                              lVar24 = unaff_x19[0x6d];
                              *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                              iVar11 = (int)unaff_x19[0x95] + 1;
                              *(int *)(unaff_x19 + 0x95) = iVar11;
                              *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                              if ((lVar24 != 0) && (*(long *)(lVar24 + 0x50) != 0)) {
                                if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar11) {
                                  FUN_0358ca18();
                                  lVar24 = unaff_x19[0x6d];
                                  if (lVar24 == 0) goto LAB_0354fbf4;
                                }
                                lVar24 = *(long *)(lVar24 + 0x38);
                                if (lVar24 != 0) {
                                  if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
                                    fVar57 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 +
                                                       0x154);
                                    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                      if ((unaff_w25 == 0x2029) || (fVar50 = 0.0, unaff_w25 == 10))
                                      {
                                        fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                                      }
                                      uVar21 = 0;
                                      fVar50 = fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc))
                                               + in_stack_00000050 *
                                                 (in_stack_00000048._4_4_ +
                                                 *(float *)((long)unaff_x19 + 700)) +
                                               fStack00000000000000d4 *
                                               (*(float *)(unaff_x19 + 0x57) + fVar50) +
                                               *(float *)(unaff_x19 + 0x9b);
                                    }
                                    else {
                                      if ((unaff_w25 == 0x2029) || (fVar50 = 0.0, unaff_w25 == 10))
                                      {
                                        fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                                      }
                                      uVar21 = 1;
                                      fVar50 = *(float *)(unaff_x19 + 0x9b) +
                                               *(float *)(unaff_x19 + 0x58) +
                                               fStack00000000000000d4 *
                                               (*(float *)(unaff_x19 + 0x57) + fVar50);
                                    }
                                    *(float *)(unaff_x19 + 0x9b) = fVar50;
                                    *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar21;
                                    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar24 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar24 = *(long *)puVar8;
                                    }
                                    uVar16 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
                                    *(float *)(unaff_x19 + 0x9a) = fVar57;
                                    param_2 = NEON_rev64(uVar16,4);
                                    unaff_x19[0x99] = param_2;
                                    *(float *)(unaff_x19 + 200) =
                                         *(float *)(unaff_x19 + 0x81) + 0.0 +
                                         *(float *)((long)unaff_x19 + 0x40c);
                                    FUN_0358c4f0();
                                    FUN_0358c4f0();
                                    *(int *)((long)unaff_x19 + 0x494) =
                                         *(int *)((long)unaff_x19 + 0x494) + 1;
                                    goto LAB_0354c6b4;
                                  }
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                }
                              }
                              goto LAB_0354fbf4;
                            }
                            if (unaff_w25 == 3) {
                              if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                              in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                              uVar33 = 3;
                            }
                          }
                          else if ((unaff_w25 - 0x2028 < 2) || (unaff_w25 == 0x2d))
                          goto LAB_0354c4a8;
                        }
LAB_0354c704:
                        uVar13 = *unaff_x20;
                        if (uVar29 <= uVar13)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (*(char *)(lVar34 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
                          lVar34 = lVar34 + (long)(int)uVar13 * unaff_x24;
                          uVar51 = *(ulong *)(lVar34 + 0x11c);
                          uVar18 = *(ulong *)(in_stack_00000078 + 0x230);
                          *(ulong *)(in_stack_00000078 + 0x230) =
                               uVar18 ^ (uVar18 ^ uVar51) &
                                        ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) <
                                                         (float)(uVar51 >> 0x20)),
                                                  -(uint)((float)uVar18 < (float)uVar51));
                          uVar18 = *(ulong *)(in_stack_00000078 + 0x238);
                          param_2 = *(ulong *)(lVar34 + 0x128);
                          *(ulong *)(in_stack_00000078 + 0x238) =
                               uVar18 ^ (uVar18 ^ param_2) &
                                        ~CONCAT44(-(uint)((float)(param_2 >> 0x20) <
                                                         (float)(uVar18 >> 0x20)),
                                                  -(uint)((float)param_2 < (float)uVar18));
                        }
                        if (((int)unaff_x19[0x5c] == 5) &&
                           ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
                          lVar34 = *(long *)(lVar24 + 0x58);
                          if (lVar34 == 0) goto LAB_0354fbf4;
                          iVar11 = (int)unaff_x19[0x96] + 1;
                          if (*(int *)(lVar34 + 0x18) < iVar11) {
                            if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_01ff02b8((long *)(lVar24 + 0x58),iVar11,1,
                                         *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                            lVar24 = *unaff_x22;
                            if (lVar24 == 0) goto LAB_0354fbf4;
                          }
                          lVar34 = *(long *)(lVar24 + 0x58);
                          if (lVar34 == 0) goto LAB_0354fbf4;
                          uVar29 = *(uint *)(unaff_x19 + 0x96);
                          lVar26 = (long)(int)uVar29;
                          uVar13 = *(uint *)(lVar34 + 0x18);
                          if (uVar13 <= uVar29)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar32 = lVar34 + lVar26 * 0x14;
                          fVar50 = *(float *)(lVar32 + 0x30);
                          param_2 = (ulong)(uint)fVar50;
                          *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                          fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
                          if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                            fVar57 = fVar50;
                          }
                          *(float *)(lVar32 + 0x30) = fVar57;
                          uVar33 = *(uint *)((long)unaff_x19 + 0x494);
                          if (uVar33 == 0 && uVar29 == 0) {
                            *(uint *)(lVar34 + (ulong)uVar29 * 0x14 + 0x20) = uVar33;
                          }
                          else {
                            uVar30 = uVar33 - 1;
                            if (0 < (int)uVar33) {
                              lVar24 = *(long *)(lVar24 + 0x38);
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              if (*(uint *)(lVar24 + 0x18) <= uVar30)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (uVar29 != *(uint *)(lVar24 + (ulong)uVar30 *
                                                               (unaff_x24 & 0xffffffff) + 0x68)) {
                                if (uVar29 - 1 < uVar13) {
                                  *(uint *)(lVar34 + 0x20 + (long)(int)(uVar29 - 1) * 0x14 + 4) =
                                       uVar30;
                                  *(uint *)(lVar34 + 0x20 + lVar26 * 0x14) = uVar33;
                                  goto LAB_0354c780;
                                }
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              }
                            }
                            if ((float)uVar33 == in_stack_00000080._4_4_) {
                              *(float *)(lVar34 + lVar26 * 0x14 + 0x24) = in_stack_00000080._4_4_;
                            }
                          }
                        }
LAB_0354c780:
                        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (((char)unaff_x19[0x5b] == '\0') &&
                           ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                            ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                        goto LAB_0354cc90;
                        if ((uVar12 == 0) &&
                           (((unaff_w25 != 0x2d && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad))))
                        {
                          if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
                            if (((((0x2bfd < unaff_w25 - 0xac01) && (0xfd < unaff_w25 - 0x1101)) &&
                                 (0x1d < unaff_w25 - 0xa961)) ||
                                (uVar18 = FUN_03597a54(0), (uVar18 & 1) != 0)) &&
                               ((((0xed < unaff_w25 - 0xff01 && (0x1d < unaff_w25 - 0xfe31)) &&
                                 (0x717d < unaff_w25 - 0x2e81)) && (0x1fd < unaff_w25 - 0xf901))))
                            goto LAB_0354c904;
                            lVar24 = FUN_035978e8(0);
                            if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_0354fbf4;
                            uVar13 = FUN_0219c130(*(long *)(lVar24 + 0x10),&stack0x000008b0,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                            if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
                              in_stack_000008b0 = unaff_w25;
                              if ((uVar13 & 1) == 0) {
LAB_0354cc08:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                FUN_0358c4f0();
                                bStack0000000000000068 = 0;
                                goto LAB_0354cc90;
                              }
LAB_0354cb6c:
                              if (uVar23 != uVar2 || ((bStack0000000000000068 ^ 0xff) & 1) != 0)
                              goto LAB_0354cc90;
                              if (uVar12 != 0) goto LAB_0354cb88;
                              goto LAB_0354cbc0;
                            }
                            lVar24 = FUN_035978e8(0);
                            if (((lVar24 == 0) || (*unaff_x22 == 0)) ||
                               (lVar34 = *(long *)(*unaff_x22 + 0x38), lVar34 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar34 + 0x18) <= *unaff_x20 + 1)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (*(long *)(lVar24 + 0x18) == 0) goto LAB_0354fbf4;
                            in_stack_000008b0 =
                                 (uint)*(ushort *)
                                        (lVar34 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20)
                            ;
                            uVar18 = FUN_0219c130(*(long *)(lVar24 + 0x18),&stack0x000008b0,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                            if ((uVar13 & 1) != 0) goto LAB_0354cb6c;
                            if ((uVar18 & 1) == 0) goto LAB_0354cc08;
                            if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
                            if (uVar12 != 0) {
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
                            if ((bStack000000000000006c & 1) == 0 && unaff_w25 == 0xad)
                            goto LAB_0354cb88;
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
                            if (uVar12 == 0) goto LAB_0354c910;
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
                          if (((unaff_w25 - 0x2007 < 0x29) &&
                              ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x10000000401U) != 0))
                             || ((unaff_w25 == 0xa0 || (unaff_w25 == 0x2060)))) goto LAB_0354c87c;
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
                        unaff_d11 = uVar17;
                        in_stack_000017d8 = uVar19;
LAB_03549564:
                        in_stack_000017b8 = in_stack_000017b8 + 1;
                        lVar24 = unaff_x19[0x8f];
                        if (lVar24 != 0) {
                          if ((int)in_stack_000017b8 < (int)*(uint *)(lVar24 + 0x18)) {
                            if (*(uint *)(lVar24 + 0x18) <= in_stack_000017b8)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            unaff_w25 = *(uint *)(lVar24 + (long)(int)in_stack_000017b8 * 0xc + 0x20
                                                 );
                            if (unaff_w25 == 0) goto LAB_0354cf48;
                            if (5 < in_stack_00000180) {
                              uVar19 = FUN_0276793c(&stack0x000017ec,0);
                              uVar16 = FUN_0276793c(&stack0x000017b8,0);
                              uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,
                                                    uVar19,*(undefined8 *)
                                                            OVRPlugin_OVRP_1_42_0_TypeInfo,uVar16,0)
                              ;
                              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                              }
                              FUN_0367ae18(uVar19,0);
                              in_stack_000017d8 = CONCAT44(3,*unaff_x20);
                            }
                            if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (unaff_w25 == 0x3c))
                            goto code_r0x035492f0;
                            if ((*unaff_x22 != 0) &&
                               (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
                              if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
                                lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
                                *(undefined4 *)((long)unaff_x19 + 0x644) =
                                     *(undefined4 *)(lVar24 + 0x2c);
                                *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
                                unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (unaff_x21);
                                goto LAB_03549378;
                              }
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            }
                            goto LAB_0354fbf4;
                          }
LAB_0354cf48:
                          fVar57 = (float)param_2;
                          if (((char)unaff_x19[0x47] != '\0') &&
                             (fVar57 = DAT_00d389f8,
                             DAT_00d389f8 <
                             *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                            fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
                            fVar50 = *(float *)((long)unaff_x19 + 0x254);
                            if ((fVar57 < fVar50) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                              if (*(float *)((long)unaff_x19 + 0x2d4) <
                                  *(float *)(unaff_x19 + 0x5a) / 100.0) {
                                *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                              }
                              fVar41 = (*(float *)((long)unaff_x19 + 0x23c) - fVar57) * 0.5;
                              if (fVar41 <= DAT_00d38b84) {
                                fVar41 = DAT_00d38b84;
                              }
                              *(float *)(unaff_x19 + 0x48) = fVar57;
                              fVar41 = (fVar57 + fVar41) * 20.0 + 0.5;
                              fVar57 = DAT_00d38e60;
                              if (fVar41 != INFINITY) {
                                fVar57 = (float)(int)fVar41 / 20.0;
                              }
                              if (fVar50 <= fVar57) {
                                fVar57 = fVar50;
                              }
                              goto LAB_0354d004;
                            }
                          }
                          *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                          if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                            uVar19 = FUN_0276793c(in_stack_00000038,0);
                            uVar16 = FUN_0277fa90(_fStack0000000000000040,0);
                            uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,
                                                  uVar19,*(undefined8 *)
                                                          OVRPlugin_OVRP_1_3_0_TypeInfo,uVar16,0);
                            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                            }
                            FUN_0367a6ec(uVar19,0);
                          }
                          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar10 == 3)))) {
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
                          iVar11 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 +
                                           0x54) << 2;
                          if ((*unaff_x22 == 0) ||
                             (lVar24 = *(long *)(*unaff_x22 + 0x60), lVar24 == 0))
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
                          iVar14 = (int)unaff_x19[0x4e];
                          in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                          uStack00000000000000f0 =
                               *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                          lVar24 = unaff_x19[0xeb];
                          in_stack_000000b8 = (long *)uStack00000000000000f0;
                          fStack00000000000000c4 = in_stack_000000f8._4_4_;
                          if (iVar14 < 0x401) {
                            if (iVar14 == 0x100) {
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              if (*(uint *)(lVar24 + 0x18) < 2)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              uVar19 = *(undefined8 *)(lVar24 + 0x30);
                              if ((int)unaff_x19[0x5c] == 5) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar34 = *(long *)(*unaff_x22 + 0x58), lVar34 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000034)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                fVar57 = *(float *)(lVar34 + (long)(int)uStack0000000000000034 *
                                                             0x14 + 0x28);
                              }
                              else {
                                fVar57 = *(float *)(unaff_x19 + 0x97);
                              }
                              fStack00000000000000c4 =
                                   fStack0000000000000028 + 0.0 + *(float *)(lVar24 + 0x2c);
                              fVar57 = (0.0 - fVar57) - fStack000000000000001c;
                            }
                            else if (iVar14 == 0x200) {
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              fStack00000000000000c4 =
                                   (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
                              uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar24 + 0x24) +
                                                (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
                              if ((int)unaff_x19[0x5c] == 5) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar24 = *(long *)(*unaff_x22 + 0x58), lVar24 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000034)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar24 = lVar24 + (long)(int)uStack0000000000000034 * 0x14;
                                fStack00000000000000c4 =
                                     fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                                fVar57 = ((fStack000000000000001c + *(float *)(lVar24 + 0x28) +
                                          *(float *)(lVar24 + 0x30)) - fStack0000000000000020) *
                                         -0.5 + 0.0;
                              }
                              else {
                                fStack00000000000000c4 =
                                     fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                                fVar57 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) +
                                          in_stack_000017e8) - fStack0000000000000020) * -0.5 + 0.0;
                              }
                            }
                            else {
                              if (iVar14 != 0x400) goto LAB_0354d620;
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              if (*(int *)(lVar24 + 0x18) == 0)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              uVar19 = *(undefined8 *)(lVar24 + 0x24);
                              if ((int)unaff_x19[0x5c] == 5) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar34 = *(long *)(*unaff_x22 + 0x58), lVar34 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000034)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                in_stack_000017e8 =
                                     *(float *)(lVar34 + (long)(int)uStack0000000000000034 * 0x14 +
                                               0x30);
                              }
                              fStack00000000000000c4 =
                                   fStack0000000000000028 + 0.0 + *(float *)(lVar24 + 0x20);
                              fVar57 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
                            }
LAB_0354d610:
                            in_stack_000000b8 =
                                 (long *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,
                                                  (float)uVar19 + fVar57);
                          }
                          else if (iVar14 == 0x800) {
                            if (lVar24 == 0) goto LAB_0354fbf4;
                            if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            fVar57 = fStack0000000000000028 + 0.0 +
                                     (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
                            in_stack_000000b8 =
                                 (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >>
                                                         0x20)) * 0.5 + 0.0,
                                                  ((float)*(undefined8 *)(lVar24 + 0x24) +
                                                  (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0
                                                 );
                            fStack00000000000000c4 = fVar57;
                          }
                          else {
                            if (iVar14 == 0x1000) {
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0))
                              {
                                uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >>
                                                         0x20)) * 0.5,
                                                  ((float)*(undefined8 *)(lVar24 + 0x24) +
                                                  (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
                                fStack00000000000000c4 =
                                     fStack0000000000000028 + 0.0 +
                                     (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
                                fVar57 = 0.0 - ((fStack000000000000001c +
                                                 *(float *)(unaff_x19 + 0x9d) +
                                                *(float *)(unaff_x19 + 0x9c)) -
                                               fStack0000000000000020) * 0.5;
                                goto LAB_0354d610;
                              }
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            }
                            if (iVar14 == 0x2000) {
                              if (lVar24 == 0) goto LAB_0354fbf4;
                              if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              fVar57 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) -
                                              fStack000000000000001c) - fStack0000000000000020) *
                                             0.5;
                              in_stack_000000b8 =
                                   (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >>
                                                           0x20)) * 0.5 + 0.0,
                                                    ((float)*(undefined8 *)(lVar24 + 0x24) +
                                                    (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 +
                                                    fVar57);
                              fStack00000000000000c4 =
                                   fStack0000000000000028 + 0.0 +
                                   (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
                            }
                          }
LAB_0354d620:
                          lVar24 = FUN_03559490();
                          if (lVar24 == 0) goto LAB_0354fbf4;
                          FUN_036df824(lVar24,0);
                          *(float *)((long)unaff_x19 + 0x6e4) = fVar57;
                          uVar42 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
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
                          FUN_035683a4(*puVar25,puVar25[1],puVar25[2],puVar25[3],&stack0x000017c0,
                                       0x4000ffff,0);
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
                          lVar34 = 0x2e0;
                          fVar41 = 0.0;
                          fVar50 = 0.0;
                          fStack00000000000000d0 = fStack00000000000000e0;
                          fStack00000000000000d4 = fStack00000000000000e4;
                          _bStack0000000000000068 = fStack00000000000000e4;
                          fStack0000000000000104 =
                               *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                         + 0x15a8);
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
                          uVar12 = 0;
                          uVar23 = 1;
                          goto LAB_0354d7c0;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_0354fbf4;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  }
  goto LAB_0354fbf4;
code_r0x035492f0:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar17 = FUN_03586568();
  if (((uVar17 & 1) != 0) &&
     (in_stack_000017b8 = in_stack_0000179c, uVar10 = unaff_w25,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar34 = (long)(int)uVar10;
  unaff_w26 = (uint)*(byte *)(lVar24 + lVar34 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  unaff_w27 = (undefined4)unaff_x19[0x24];
  if ((uint)in_stack_000017d8 == uVar10) {
    unaff_w25 = (uint)((ulong)in_stack_000017d8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (unaff_w25 == 0x2026) {
      *(long *)(lVar24 + lVar34 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
      in_stack_000017d8 = CONCAT44(3,uVar10 + 1);
    }
    else if (unaff_w25 == 3) {
      if ((*unaff_x21 == 0) || (lVar26 = FUN_03568ac0(*unaff_x21,0), lVar26 == 0))
      goto LAB_0354fbf4;
      FUN_0219b634(lVar26,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar24 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(ulong *)(lVar24 + lVar34 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,in_stack_000008b0)
      ;
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
  if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x324)) && (unaff_w25 != 3)) {
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar24 + (long)(int)uVar10 * (long)iVar14;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined2 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *unaff_x20 = uVar10 + 1;
    uVar10 = unaff_w25;
    goto LAB_03549564;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar11 == 0) {
    uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        in_stack_00000150 = 1.0;
        if ((uVar10 >> 5 & 1) == 0) goto LAB_03549970;
        in_stack_000017ec = unaff_w25;
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto code_r0x0354967c;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b8070(unaff_w25,0);
      in_stack_00000150 = 1.0;
      if ((uVar17 & 1) == 0) goto LAB_03549970;
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_026b8594(unaff_w25,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b812c(unaff_w25,0);
      in_stack_00000150 = 1.0;
      if ((uVar17 & 1) == 0) goto LAB_03549970;
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_026b8410(unaff_w25,0);
    }
    in_stack_00000150 = 1.0;
    unaff_w25 = uVar10 & 0xffff;
    goto LAB_03549970;
  }
  in_stack_00000150 = 1.0;
  if (iVar11 == 0) goto LAB_03549978;
LAB_03549594:
  if (iVar11 == 1) {
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
    uVar10 = unaff_w25;
    if (lVar24 != 0) {
      if (unaff_w25 == 0x3c) {
        unaff_w25 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar34 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar34 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar11 = FUN_03776950(&stack0x00001730,0);
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
      fVar41 = (float)FUN_03776960(&stack0x00001730,0);
      fVar50 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar50 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
      fVar50 = (fVar57 / (float)iVar11) * fVar41 * fVar50;
      iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      if (iVar11 < 1) {
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar43 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar41 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar41 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar58 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,*(long *)(lVar24 + 0x20),0);
        fVar60 = (float)FUN_03776c9c(&stack0x00001710,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_0354fbf4;
        fVar61 = *(float *)(lVar24 + 0x2c);
        fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar55 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar46 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar47 = *(float *)((long)unaff_x19 + 0x404);
        fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar45 = fVar50 * fVar46 * fVar47 * fVar45;
        fVar41 = (fVar57 / (float)iVar11) * fVar43 * fVar41;
        fVar50 = fVar41 * (fVar58 / fVar60) * fVar61 * fVar44;
        fVar41 = fVar41 / fVar50;
        fVar55 = fVar41 * fVar55;
        fVar57 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar41 = fVar41 * fVar57;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar41 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)(lVar24 + 0x2c);
        fVar43 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar43 = 1.0;
        }
        fVar60 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar55 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar44 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar61 = *(float *)((long)unaff_x19 + 0x404);
        fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar45 = fVar50 * fVar44 * fVar61 * fVar45;
        fVar50 = (fVar57 / (float)iVar11) * fVar41 * fVar43 * fVar58 * fVar60;
        fVar41 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      unaff_d11 = (ulong)(uint)fVar50;
      *_iStack00000000000000d8 = lVar24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (_iStack00000000000000d8,lVar24);
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 1;
      *(float *)(lVar24 + 0x160) = fVar50;
      *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar24 = *unaff_x22;
      if ((lVar24 == 0) || (lVar34 = *(long *)(lVar24 + 0x38), lVar34 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar34 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      _fStack0000000000000120 = CONCAT44(fVar55,fVar41);
      in_stack_00000168._4_4_ = 0.0;
      *(int *)(lVar34 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(undefined4 *)(unaff_x19 + 0x24) = unaff_w27;
      goto LAB_03549e30;
    }
    goto LAB_03549564;
  }
  lVar24 = *unaff_x22;
  fVar45 = 0.0;
  fVar57 = fVar45;
  if (unaff_w25 != 3 && unaff_w25 != 0xad) {
    fVar57 = (float)unaff_d11;
  }
  uVar17 = (ulong)(uint)fVar57;
  if (lVar24 == 0) goto LAB_0354fbf4;
  _fStack0000000000000120 = 0;
  uVar19 = in_stack_000017d8;
  goto UnityEngine_AndroidJNISafe__ToSByteArray;
LAB_0354d7c0:
  uVar10 = uVar23 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
  lVar40 = (long)(int)uVar10;
  lVar32 = lVar24 + lVar40 * 0x178;
  uVar2 = *(uint *)(lVar32 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar2)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = *(long *)(lVar32 + 0x38);
  lVar38 = (long)(int)uVar2;
  lVar26 = lVar26 + lVar38 * 0x5c;
  uVar13 = *(uint *)(lVar26 + 0x68);
  uVar30 = (uint)*(ushort *)(lVar32 + 0x20);
  uVar29 = *(uint *)(lVar26 + 0x3c);
  iVar3 = *(int *)(lVar26 + 0x20);
  iVar14 = *(int *)(lVar26 + 0x28);
  iVar15 = *(int *)(lVar26 + 0x2c);
  fVar60 = *(float *)(lVar26 + 0x4c);
  uVar33 = *(uint *)(lVar26 + 0x40);
  fVar45 = *(float *)(lVar26 + 0x54);
  fVar43 = *(float *)(lVar26 + 0x58);
  fVar55 = *(float *)(lVar26 + 0x5c);
  fVar46 = *(float *)(lVar26 + 0x60);
  fVar61 = *(float *)(lVar26 + 0x6c);
  fVar47 = *(float *)(lVar26 + 0x70);
  fVar58 = *(float *)(lVar26 + 0x74);
  fVar44 = *(float *)(lVar26 + 0x78);
  if ((int)uVar13 < 9) {
    switch(uVar13) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar46 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar43;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar46 + fVar55 * 0.5) - fVar43 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar55 + fVar46) - fVar43;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar55 + fVar46;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar13 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar30 < 0xad) {
      if ((uVar30 != 3) && (uVar30 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar30 != 0xad) && ((uVar30 != 0x200b && (uVar30 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar24 + 0x18) <= uVar29)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar29 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b8cc4(uVar4,0);
      if ((uVar17 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar43 <= fVar55) && (!bVar1 && uVar13 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar55 + fVar46;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar23 == 1) || (uVar2 != uVar12)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar55 + fVar46;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar30,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar22 = (char)unaff_x19[0x1e];
        fVar46 = -fVar43;
        if (cVar22 != '\0') {
          fVar46 = fVar43;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar29)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar15 = (int)*(char *)(lVar24 + (long)(int)uVar29 * 0x178 + 0x194) +
                 (-iVar3 - (uStack0000000000000030 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar43 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar43 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar30 == 9) {
LAB_0354f76c:
          fVar43 = 1.0 - fVar43;
        }
        else {
          if (uVar30 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b97f8(uVar30,0);
            cVar22 = (char)unaff_x19[0x1e];
            if ((uVar17 & 1) != 0) goto LAB_0354f76c;
          }
          iVar15 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar14;
        }
        fVar43 = ((fVar55 + fVar46) * fVar43) / (float)iVar15;
        if (cVar22 == '\0') {
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
  else if (uVar13 == 0x20) {
    fVar43 = fVar61 + fVar58;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar13 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar24 + lVar40 * 0x178;
  fVar46 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar43 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar55 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar14 = *(int *)(lVar24 + lVar40 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0354e05c;
  fVar41 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar32 = lVar24 + lVar40 * 0x178;
    *(undefined4 *)(lVar32 + 0x84) = 0;
    *(undefined4 *)(lVar32 + 0xac) = 0;
    *(undefined4 *)(lVar32 + 0xd4) = 0x3f800000;
    fVar41 = 1.0;
    break;
  case 1:
    fVar44 = *(float *)(lVar24 + lVar40 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar32 = lVar24 + lVar40 * 0x178;
      fVar58 = (in_stack_000000f8._4_4_ + fVar44) - *(float *)(in_stack_00000078 + 0x230);
      fVar44 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar32 = lVar24 + lVar40 * 0x178;
    fVar58 = fVar58 - fVar61;
    *(float *)(lVar32 + 0x84) = fVar41 + (fVar44 - fVar61) / fVar58;
    *(float *)(lVar32 + 0xac) = fVar41 + (*(float *)(lVar32 + 0x98) - fVar61) / fVar58;
    *(float *)(lVar32 + 0xd4) = fVar41 + (*(float *)(lVar32 + 0xc0) - fVar61) / fVar58;
    fVar41 = fVar41 + (*(float *)(lVar32 + 0xe8) - fVar61) / fVar58;
    break;
  case 2:
    lVar32 = lVar24 + lVar40 * 0x178;
    fVar44 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar58 = (in_stack_000000f8._4_4_ + *(float *)(lVar32 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar32 + 0x84) = fVar41 + fVar58 / fVar44;
    *(float *)(lVar32 + 0xac) =
         fVar41 + ((in_stack_000000f8._4_4_ + *(float *)(lVar32 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar32 + 0xd4) =
         fVar41 + ((in_stack_000000f8._4_4_ + *(float *)(lVar32 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar41 = fVar41 + ((in_stack_000000f8._4_4_ + *(float *)(lVar32 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar32 = lVar24 + lVar40 * 0x178;
      *(undefined4 *)(lVar32 + 0x88) = 0;
      *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xd8) = 0;
      *(undefined4 *)(lVar32 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar32 = lVar24 + lVar40 * 0x178;
      fVar44 = fVar44 - fVar47;
      fVar58 = fVar41 + (*(float *)(lVar32 + 0x74) - fVar47) / fVar44;
      fVar44 = fVar41 + (*(float *)(lVar32 + 0x9c) - fVar47) / fVar44;
      *(float *)(lVar32 + 0x88) = fVar58;
      *(float *)(lVar32 + 0xb0) = fVar44;
      *(float *)(lVar32 + 0xd8) = fVar58;
      *(float *)(lVar32 + 0x100) = fVar44;
      break;
    case 2:
      lVar32 = lVar24 + lVar40 * 0x178;
      fVar58 = fVar41 + (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar32 + 0x88) = fVar58;
      fVar44 = *(float *)(unaff_x19 + 0x9c);
      fVar61 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar32 + 0xd8) = fVar58;
      fVar58 = fVar41 + (*(float *)(lVar32 + 0x9c) - fVar44) / (fVar61 - fVar44);
      *(float *)(lVar32 + 0xb0) = fVar58;
      *(float *)(lVar32 + 0x100) = fVar58;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar13 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar24 + lVar40 * 0x178;
    fVar58 = *(float *)(lVar32 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar32 + 0x88) + *(float *)(lVar32 + 0xb0)) * fVar58) * 0.5;
    fVar61 = fVar41 + *(float *)(lVar32 + 0x88) * fVar58 + fVar44;
    fVar41 = fVar41 + fVar44 + *(float *)(lVar32 + 0xb0) * fVar58;
    *(float *)(lVar32 + 0x84) = fVar61;
    *(float *)(lVar32 + 0xac) = fVar61;
    *(float *)(lVar32 + 0xd4) = fVar41;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar24 + lVar40 * 0x178 + 0xfc) = fVar41;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar24 + lVar40 * 0x178;
    *(undefined4 *)(lVar32 + 0x88) = 0;
    *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar32 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar32 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar13) {
      lVar32 = lVar24 + lVar40 * 0x178;
      fVar60 = fVar60 - fVar45;
      fVar41 = (*(float *)(lVar32 + 0x74) - fVar45) / fVar60;
      fVar60 = (*(float *)(lVar32 + 0x9c) - fVar45) / fVar60;
      *(float *)(lVar32 + 0x88) = fVar41;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar24 + lVar40 * 0x178;
    fVar41 = (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar32 + 0x88) = fVar41;
    fVar60 = (*(float *)(lVar32 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar32 + 0xb0) = fVar60;
    *(float *)(lVar32 + 0xd8) = fVar60;
    *(float *)(lVar32 + 0x100) = fVar41;
    break;
  case 3:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar24 + lVar40 * 0x178;
    fVar60 = *(float *)(lVar32 + 0x15c);
    fVar58 = (1.0 - (*(float *)(lVar32 + 0x84) + *(float *)(lVar32 + 0xd4)) / fVar60) * 0.5;
    fVar41 = *(float *)(lVar32 + 0x84) / fVar60 + fVar58;
    fVar58 = fVar58 + *(float *)(lVar32 + 0xd4) / fVar60;
    *(float *)(lVar32 + 0x88) = fVar41;
    *(float *)(lVar32 + 0xb0) = fVar58;
    *(float *)(lVar32 + 0x100) = fVar41;
    *(float *)(lVar32 + 0xd8) = fVar58;
  }
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar24 + lVar40 * 0x178;
  fVar41 = ABS(fVar57) * *(float *)(lVar32 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar32 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar40 * 0x178 + 400) & 1) != 0)) {
    fVar41 = -fVar41;
  }
  lVar32 = lVar24 + lVar40 * 0x178;
  fVar60 = *(float *)(lVar32 + 0x88);
  fVar44 = *(float *)(lVar32 + 0x84);
  fVar58 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar58 = (float)(int)fVar44;
  }
  fVar61 = *(float *)(lVar32 + 0xd4);
  fVar47 = *(float *)(lVar32 + 0xd8);
  fVar45 = -2.1474836e+09;
  if (fVar60 != INFINITY) {
    fVar45 = (float)(int)fVar60;
  }
  uVar49 = FUN_03591d3c(fVar44 - fVar58,fVar60 - fVar45);
  *(undefined4 *)(lVar32 + 0x84) = uVar49;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar47 = fVar47 - fVar45;
  *(float *)(lVar32 + 0x88) = fVar41;
  uVar49 = FUN_03591d3c(fVar44 - fVar58,fVar47);
  *(undefined4 *)(lVar24 + lVar40 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar61 = fVar61 - fVar58;
  *(float *)(lVar24 + lVar40 * 0x178 + 0xb0) = fVar41;
  fVar58 = (float)FUN_03591d3c(fVar61,fVar47);
  *(float *)(lVar32 + 0xd4) = fVar58;
  if (*(uint *)(lVar24 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar32 + 0xd8) = fVar41;
  uVar49 = FUN_03591d3c(fVar61,fVar60 - fVar45);
  *(undefined4 *)(lVar24 + lVar40 * 0x178 + 0xfc) = uVar49;
  uVar13 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar24 + lVar40 * 0x178 + 0x100) = fVar41;
LAB_0354e05c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar26 = lVar24 + lVar40 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar55 + *(float *)(lVar26 + 0x78);
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar55 + *(float *)(lVar26 + 0xa0);
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar55 + *(float *)(lVar26 + 200);
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar55 + *(float *)(lVar26 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar13) {
        if (*(uint *)(lVar24 + lVar40 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar13 = *(uint *)(lVar24 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar32 = lVar24 + lVar40 * 0x178;
  *(undefined8 *)(lVar32 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar32 + 0x78) = uVar49;
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar32 = lVar24 + lVar40 * 0x178;
  *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar32 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar32 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar32 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar32 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar32 + 0xf0) = uVar49;
  *(undefined1 *)(lVar26 + 0x194) = 0;
LAB_0354e184:
  if (iVar14 == 0) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar28)();
  }
  else if (iVar14 == 1) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar40 * 0x178;
  uVar19 = *(undefined8 *)(lVar26 + 0x11c);
  *(undefined8 *)(lVar26 + 0x11c) =
       CONCAT44(fVar43 + (float)((ulong)uVar19 >> 0x20),fVar46 + (float)uVar19);
  *(float *)(lVar26 + 0x124) = fVar55 + *(float *)(lVar26 + 0x124);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar40 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar55 + *(float *)(lVar26 + 0x118);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar40 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar55 + *(float *)(lVar26 + 0x130);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar40 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar46 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *unaff_x22;
  if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  uVar13 = *(uint *)(lVar32 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar32 + lVar40 * 0x178;
  *(float *)(lVar36 + 0x150) = fVar43 + *(float *)(lVar36 + 0x150);
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar36 + 0x140));
  *(ulong *)(lVar36 + 0x148) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar36 + 0x148));
  if (uVar2 == uVar12) {
    uVar12 = *unaff_x20 - 1;
    if (uVar10 == uVar12) goto LAB_0354e3ec;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar36 = (long)(int)uVar12;
    lVar37 = lVar26 + lVar36 * 0x5c;
    fVar58 = fVar43 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar58;
    *(float *)(lVar37 + 0x58) = fVar46 + *(float *)(lVar37 + 0x58);
    if (uVar13 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar49 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar36 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar58;
    *(undefined4 *)(lVar26 + 0x6c) = uVar49;
    lVar26 = *unaff_x22;
    if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar32 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar32 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar32 + lVar36 * 0x5c;
    *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar12 * 0x178 + 0x128);
    *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
    uVar12 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar10 == uVar12) {
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar32 + lVar38 * 0x5c;
      fVar58 = fVar43 + *(float *)(lVar36 + 0x54);
      *(ulong *)(lVar36 + 0x4c) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar36 + 0x4c));
      *(float *)(lVar36 + 0x54) = fVar58;
      *(float *)(lVar36 + 0x58) = fVar46 + *(float *)(lVar36 + 0x58);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar36 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar49 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar32 = lVar32 + lVar38 * 0x5c;
      *(float *)(lVar32 + 0x70) = fVar58;
      *(undefined4 *)(lVar32 + 0x6c) = uVar49;
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar32 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar32 + lVar38 * 0x5c;
      *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar12 * 0x178 + 0x128);
      *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_026b82c4(uVar30,0);
  if (((((uVar17 & 1) == 0) && (1 < uVar30 - 0x2010)) && (uVar30 != 0xad)) && (uVar30 != 0x2d)) {
    if (bVar5) {
      if (((uVar23 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar30 == 0x2019 || (uVar30 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar23 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar24 + lVar34 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b82c4(uVar4,0);
        if ((uVar17 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar23)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar24 + lVar34 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b82c4(uVar4,0);
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
      uVar17 = FUN_026b81f8(uVar30,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b63d8(uVar30,0);
        if (((uVar30 != 0x200b) && ((uVar17 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b82c4(uVar30,0);
      iVar14 = (int)fStack0000000000000124;
      if ((uVar17 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar14 = uVar23 - 2;
    }
    lVar26 = *unaff_x22;
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar32 = *(long *)(lVar26 + 0x40);
    if (lVar32 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar26 + 0x24);
    iVar15 = *(int *)(lVar32 + 0x18);
    if (iVar15 < (int)(uVar12 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar26 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar26 = *unaff_x22;
      if (lVar26 == 0) goto LAB_0354fbf4;
    }
    lVar26 = *(long *)(lVar26 + 0x40);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = lVar26 + (long)(int)uVar12 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(float *)(lVar26 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar26 + 0x2c) = iVar14;
    *(int *)(lVar26 + 0x30) = (iVar14 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar26 = unaff_x19[0x6d];
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar32 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar32 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar32 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar32 + lVar38 * 0x5c;
    bVar5 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      in_stack_00000168._4_4_ = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar26 = *unaff_x22;
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar32 = *(long *)(lVar26 + 0x40);
      if (lVar32 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar26 + 0x24);
      iVar14 = *(int *)(lVar32 + 0x18);
      if (iVar14 < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar26 = *unaff_x22;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + (long)(int)uVar12 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(float *)(lVar26 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar26 + 0x2c) = uVar10;
      *(uint *)(lVar26 + 0x30) = uVar23 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar26 = unaff_x19[0x6d];
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar32 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar32 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar32 + lVar38 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
    }
LAB_0354e610:
    bVar5 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar12 = *(uint *)(lVar26 + 0x18);
  if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar40 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0354e660:
      if (uVar12 <= uVar23 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = *unaff_x19;
      uVar49 = *(undefined4 *)(lVar26 + lVar34 + -0x330);
      uVar52 = *(undefined4 *)(lVar26 + lVar34 + -0x2f8);
LAB_0354ebc0:
      pcVar28 = *(code **)(lVar32 + 0x8d8);
LAB_0354ebc8:
      (*pcVar28)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar49,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar52);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar8;
      }
LAB_0354ec1c:
      fVar50 = 0.0;
      bVar9 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar9 = false;
    }
  }
  else {
    lVar26 = lVar26 + lVar40 * 0x178;
    iVar14 = *(int *)(lVar26 + 0x68);
    *(int *)(lVar26 + 0x16c) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_026b63d8(uVar30,0);
    if ((uVar30 != 0x200b) && ((uVar17 & 1) == 0)) {
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar58 = *(float *)(lVar32 + lVar40 * 0x178 + 0x160);
      if (fVar50 <= fVar58) {
        fVar50 = fVar58;
      }
      if (fStack0000000000000100 <= ABS(fVar41)) {
        fStack0000000000000100 = ABS(fVar41);
      }
      if ((float)iVar14 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *unaff_x22;
          if (lVar26 == 0) goto LAB_0354fbf4;
          lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar32 + 0x15a8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar60 = *(float *)(lVar26 + lVar40 * 0x178 + 0x14c);
      fVar58 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar60 = fVar60 + fVar50 * fVar58;
      fStack000000000000005c = (float)iVar14;
      if (fVar60 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar60;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar30,0);
        if ((uVar17 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar40 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar26 + 0x160);
      fStack0000000000000070 = *(float *)(lVar26 + 0x11c);
      bVar9 = fVar50 != 0.0;
      fVar58 = in_stack_00000080._4_4_;
      if (bVar9) {
        fVar58 = fVar50;
      }
      fVar50 = fVar58;
      uVar42 = *(undefined4 *)(lVar26 + 0x168);
      _bStack000000000000006c = 0;
      fVar58 = fVar41;
      if (bVar9) {
        fVar58 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar58;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        if (uVar10 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar40 * 0x178;
          lVar32 = *unaff_x19;
          uVar49 = *(undefined4 *)(lVar26 + 0x128);
          uVar52 = *(undefined4 *)(lVar26 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar10 == uVar29) || ((int)uVar33 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        lVar32 = lVar40;
        uVar12 = uVar10;
        if (uVar30 == 0x200b || (uVar17 & 1) != 0) {
          lVar32 = (long)(int)uVar33;
          uVar12 = uVar33;
        }
        if (uVar12 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar32 * 0x178;
          uVar49 = *(undefined4 *)(lVar26 + 0x128);
          uVar52 = *(undefined4 *)(lVar26 + 0x160);
          pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar12 = *(uint *)(lVar26 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar17 = FUN_03567ad8(uVar42,*(undefined4 *)(lVar26 + lVar34),0);
      if ((uVar17 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          if (uVar10 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar40 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar26 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar26 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar26 = *(long *)puVar8;
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
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar35 == 0) goto LAB_0354fbf4;
  uVar12 = *(uint *)(lVar26 + lVar40 * 0x178 + 400);
  fVar58 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar12 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar23 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar49 = *(undefined4 *)(lVar26 + lVar34 + -0x330);
      fVar43 = *(float *)(lVar26 + lVar34 + -0x30c);
      pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar28)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar49,
                 fStack00000000000000a8 * fVar58 + fVar43,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar6 = false;
  }
  else {
    lVar26 = *unaff_x22;
    if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar32 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar32 + lVar40 * 0x178 + 0x174) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar32 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar30 == 0xd) || ((uVar30 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
       (bVar6 || !bVar1)) {
LAB_0354ed84:
      if (!bVar6) goto LAB_0354f250;
    }
    else {
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b97f8(uVar30,0);
        if ((uVar17 & 1) != 0) goto LAB_0354ed84;
        lVar26 = *unaff_x22;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar40 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar26 + 0x60);
      fStack0000000000000040 = *(float *)(lVar26 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar26 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar26 + 0x160);
      fStack000000000000009c = fVar58 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar12 = *unaff_x20;
    if (uVar12 == 1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar12 = *(uint *)(lVar26 + 0x18);
LAB_0354ef0c:
        if (uVar10 < uVar12) {
          lVar26 = lVar26 + lVar40 * 0x178;
          lVar32 = *unaff_x19;
          uVar49 = *(undefined4 *)(lVar26 + 0x128);
          fVar43 = *(float *)(lVar26 + 0x14c);
LAB_0354ef24:
          pcVar28 = *(code **)(lVar32 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar10 == uVar29) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar12 = *(uint *)(lVar26 + 0x18);
        if (uVar30 == 0x200b || (uVar17 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar32 = lVar40;
        if (uVar10 < uVar12) {
LAB_0354f1f8:
          lVar26 = lVar26 + lVar32 * 0x178;
          fVar43 = *(float *)(lVar26 + 0x14c);
          uVar49 = *(undefined4 *)(lVar26 + 0x128);
          pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)uVar12) {
      lVar26 = *unaff_x22;
      if ((lVar26 != 0) && (lVar32 = *(long *)(lVar26 + 0x38), lVar32 != 0)) {
        if (uVar23 < *(uint *)(lVar32 + 0x18)) {
          if (*(float *)(lVar32 + lVar34 + -0x108) == in_stack_00000048._4_4_) {
            fVar60 = *(float *)(lVar32 + lVar34 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_03567bac(fVar43 + fVar60,fStack0000000000000040,0);
            if ((uVar17 & 1) != 0) {
              uVar12 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar26 = *unaff_x22;
            if (lVar26 == 0) goto LAB_0354fbf4;
          }
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 != 0) {
            uVar12 = *(uint *)(lVar26 + 0x18);
            if ((int)uVar10 <= (int)uVar33) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar32 = (long)(int)uVar33;
            if (uVar33 < uVar12) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar10 < (int)uVar12) {
      iVar14 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar24 + lVar34 + -0x130);
      if (lVar26 == 0) goto LAB_0354fbf4;
      iVar15 = FUN_036d3364(lVar26,0);
      if (iVar14 != iVar15) {
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          uVar12 = *(uint *)(lVar26 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        if (uVar23 - 2 < *(uint *)(lVar26 + 0x18)) {
          lVar32 = *unaff_x19;
          uVar49 = *(undefined4 *)(lVar26 + lVar34 + -0x330);
          fVar43 = *(float *)(lVar26 + lVar34 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar6 = true;
  }
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar12 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar40 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar7) {
LAB_0354f400:
      if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar40 * 0x178;
      fVar58 = *(float *)(lVar26 + 0x128);
      fVar45 = *(float *)(lVar26 + 0x188);
      uVar16 = *(undefined8 *)(lVar26 + 0x17c);
      fVar55 = *(float *)(lVar26 + 0x184);
      uVar19 = *(undefined8 *)(lVar26 + 0x184);
      fVar61 = *(float *)(lVar26 + 0x18c);
      fVar43 = *(float *)(lVar26 + 0x11c);
      fVar60 = *(float *)(lVar26 + 0x148);
      fVar44 = *(float *)(lVar26 + 0x150);
      in_stack_00000188 = uVar16;
      fStack0000000000000190 = fVar55;
      fStack0000000000000194 = fVar45;
      in_stack_00000198 = fVar61;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar17 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar17 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar58 = fVar58 + (float)in_stack_000017c8;
        fVar43 = fVar43 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar60 = fVar60 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar43 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar43;
        }
        if (fVar44 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar44 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar58) {
          fStack00000000000000d0 = fVar58;
        }
        if (fStack00000000000000d4 <= fVar60) {
          fStack00000000000000d4 = fVar60;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar43 = (fVar43 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar44 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar44;
        }
        if (fStack00000000000000d4 <= fVar60) {
          fStack00000000000000d4 = fVar60;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar43,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar44 - fVar61;
        fStack00000000000000d0 = fVar58 + fVar55;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar60 + fVar45;
        fStack00000000000000e0 = fVar43;
        in_stack_000017c0 = uVar16;
        in_stack_000017c8 = uVar19;
        in_stack_000017d0 = fVar61;
      }
      if (((*unaff_x20 == 1) || (uVar10 == uVar29)) || (((int)uVar33 <= (int)uVar10 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar7 = true;
    }
    else {
      if ((((uVar30 != 0xd) && ((uVar30 & 0xfffe) != 10)) && ((int)uVar10 <= (int)uVar33)) &&
         (bVar1)) {
        if (uVar10 == uVar33) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar30,0);
          if ((uVar17 & 1) != 0) goto LAB_0354f374;
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar8;
        }
        if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
          uVar12 = (uint)*(undefined8 *)(lVar26 + 0x18);
          if (uVar10 < uVar12) {
            lVar32 = *(long *)(lVar32 + 0xb8);
            lVar35 = lVar26 + lVar40 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar35 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar35 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar32 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar32 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar35 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar32 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar32 + 0x15a4);
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
  lVar34 = lVar34 + 0x178;
  bVar1 = (int)uVar10 <= (int)uVar23;
  uVar12 = uVar2;
  uVar23 = uVar23 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar24 = *unaff_x22;
  if (lVar24 != 0) {
    iVar11 = uVar2 + 1;
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar24 + 0x18) = uVar10;
    lVar34 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar11;
    if ((int)uVar10 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar34;
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
                          lVar26 = 0;
                          lVar34 = 0;
                          do {
                            uVar17 = lVar34 + 1;
                            if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar17) goto LAB_0354d0cc;
                            lVar24 = *(long *)(lVar24 + 0x60);
                            if (lVar24 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar24 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar24 + lVar26 + 0x70,0);
                            lVar24 = unaff_x19[0xe1];
                            if (lVar24 == 0) break;
                            if (*(uint *)(lVar24 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar19 = *(undefined8 *)(lVar24 + lVar34 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar18 = FUN_036d35a8(uVar19,0,0);
                            if ((uVar18 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar24 = *(long *)(*unaff_x22 + 0x60), lVar24 == 0)) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar24 + 0x18) <= uVar17)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar24 + lVar26 + 0x70,1,0);
                              }
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar34 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a460c(lVar24,*(undefined8 *)(lVar32 + lVar26 + 0x80),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar34 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a4810(lVar24,*(undefined8 *)(lVar32 + lVar26 + 0x98),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar34 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a48bc(lVar24,*(undefined8 *)(lVar32 + lVar26 + 0xa0),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar34 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_0359d5ac(lVar24,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar24 == 0) break;
                              FUN_036a4e24(lVar24,*(undefined8 *)(lVar32 + lVar26 + 0xa8),0);
                              lVar24 = unaff_x19[0xe1];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar24 = *(long *)(lVar24 + lVar34 * 8 + 0x28);
                              if ((lVar24 == 0) || (lVar24 = FUN_0359d5ac(lVar24,0), lVar24 == 0))
                              break;
                              FUN_036aa280(lVar24,0);
                            }
                            lVar24 = *unaff_x22;
                            lVar34 = lVar34 + 1;
                            lVar26 = lVar26 + 0x50;
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


