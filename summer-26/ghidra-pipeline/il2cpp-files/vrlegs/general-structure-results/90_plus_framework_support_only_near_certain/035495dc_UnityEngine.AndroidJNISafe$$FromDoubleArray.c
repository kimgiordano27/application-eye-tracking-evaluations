/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$FromDoubleArray
ENTRY_POINT: 035495dc
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


void UnityEngine_AndroidJNISafe__FromDoubleArray(long param_1,undefined1 param_2 [16],ulong param_3)

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
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  int *piVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  undefined4 *puVar24;
  long lVar25;
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
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  int iVar38;
  ulong unaff_x24;
  long *plVar39;
  uint unaff_w26;
  undefined4 unaff_w27;
  long lVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  ulong uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulong unaff_d11;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
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
  
code_r0x035495dc:
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
         *(undefined4 *)(param_1 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
    if ((unaff_x19[0xd3] != 0) &&
       (lVar17 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar17 != 0)) {
      FUN_02215a88(lVar17,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar17 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
      iVar38 = (int)unaff_x24;
      uVar10 = in_stack_000017ec;
      if (lVar17 == 0) goto LAB_03549564;
      if (in_stack_000017ec == 0x3c) {
        in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar25 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] != 0) {
        fVar51 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00001730,0);
        if (*unaff_x21 != 0) {
          memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
          fVar41 = (float)FUN_03776960(&stack0x00001730,0);
          fVar60 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar60 = 1.0;
          }
          if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
          fVar60 = (fVar51 / (float)iVar11) * fVar41 * fVar60;
          iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
          fVar51 = *(float *)(unaff_x19 + 0x3d);
          if (iVar11 < 1) {
            if (*unaff_x21 == 0) goto LAB_0354fbf4;
            iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
            if (*unaff_x21 == 0) goto LAB_0354fbf4;
            fVar61 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
            fVar41 = fStack0000000000000098;
            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
              fVar41 = 1.0;
            }
            if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
            fVar56 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
            if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0354fbf4;
            FUN_03776e6c(&stack0x000008b0,*(long *)(lVar17 + 0x20),0);
            fVar42 = (float)FUN_03776c9c(&stack0x00001710,0);
            if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0354fbf4;
            fVar57 = *(float *)(lVar17 + 0x2c);
            fVar44 = (float)FUN_03776ea8(*(long *)(lVar17 + 0x20),0);
            if (*unaff_x21 == 0) goto LAB_0354fbf4;
            fVar43 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
            if (*unaff_x21 == 0) goto LAB_0354fbf4;
            fVar55 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
            if (*unaff_x21 == 0) goto LAB_0354fbf4;
            fVar46 = *(float *)((long)unaff_x19 + 0x404);
            fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
            if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
            fVar45 = fVar60 * fVar55 * fVar46 * fVar45;
            fVar41 = (fVar51 / (float)iVar11) * fVar61 * fVar41;
            fVar60 = fVar41 * (fVar56 / fVar42) * fVar57 * fVar44;
            fVar41 = fVar41 / fVar60;
            fVar43 = fVar41 * fVar43;
            fVar51 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
            fVar41 = fVar41 * fVar51;
          }
          else {
            if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
            iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
            if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
            fVar41 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
            if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0354fbf4;
            fVar56 = *(float *)(lVar17 + 0x2c);
            fVar61 = fStack0000000000000098;
            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
              fVar61 = 1.0;
            }
            fVar42 = (float)FUN_03776ea8(*(long *)(lVar17 + 0x20),0);
            if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
            fVar43 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
            if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
            fVar44 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
            if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
            fVar57 = *(float *)((long)unaff_x19 + 0x404);
            fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
            if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
            fVar45 = fVar60 * fVar44 * fVar57 * fVar45;
            fVar60 = (fVar51 / (float)iVar11) * fVar41 * fVar61 * fVar56 * fVar42;
            fVar41 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
          }
          unaff_d11 = (ulong)(uint)fVar60;
          *_iStack00000000000000d8 = lVar17;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (_iStack00000000000000d8,lVar17);
          if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
            if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)(lVar17 + 0x2c) = 1;
            *(float *)(lVar17 + 0x160) = fVar60;
            *(long *)(lVar17 + 0x40) = *in_stack_000000b8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
              if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(long *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar17 = *unaff_x22;
              if ((lVar17 != 0) && (lVar25 = *(long *)(lVar17 + 0x38), lVar25 != 0)) {
                if (*unaff_x20 < *(uint *)(lVar25 + 0x18)) {
                  _fStack0000000000000120 = CONCAT44(fVar43,fVar41);
                  in_stack_00000168._4_4_ = 0.0;
                  *(int *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24]
                  ;
                  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w27;
LAB_03549e30:
                  uVar16 = 0;
                  uVar19 = in_stack_000017d8;
                  if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
                    uVar16 = unaff_d11;
                  }
UnityEngine_AndroidJNISafe__ToSByteArray:
                  lVar17 = *(long *)(lVar17 + 0x38);
                  if (lVar17 == 0) goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
                  *(short *)(lVar17 + 0x20) = (short)in_stack_000017ec;
                  *(int *)(lVar17 + 0x60) = (int)unaff_x19[0x3d];
                  *(undefined4 *)(lVar17 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar17 = *(long *)(unaff_x19[0x6d] + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  *(int *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) =
                       (int)unaff_x19[0x2b];
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar17 = *(long *)(unaff_x19[0x6d] + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  *(undefined4 *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
                       *(undefined4 *)((long)unaff_x19 + 0x15c);
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar17 = *(long *)(unaff_x19[0x6d] + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
                  uVar10 = *unaff_x20;
                  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,
                               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                  if (*(uint *)(lVar17 + 0x18) <= uVar10)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = lVar17 + (long)(int)uVar10 * unaff_x24;
                  *(undefined4 *)(lVar17 + 0x18c) = in_stack_000008c0;
                  *(undefined8 *)(lVar17 + 0x184) = in_stack_000008b8;
                  *(ulong *)(lVar17 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
                  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  *(undefined4 *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
                       *(undefined4 *)((long)unaff_x19 + 0x25c);
                  if ((unaff_x19[0xc9] == 0) ||
                     (lVar17 = *(long *)(unaff_x19[0xc9] + 0x20), lVar17 == 0)) goto LAB_0354fbf4;
                  FUN_03776e6c(&stack0x00000c28,lVar17,0);
                  if ((int)in_stack_000017ec < 0x10000) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar12 = FUN_026b63d8(in_stack_000017ec,0);
                    uVar12 = uVar12 & 1;
                  }
                  else {
                    uVar12 = 0;
                  }
                  fVar51 = *(float *)(unaff_x19 + 0x55);
                  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                    fVar60 = 0.0;
                    fVar61 = 0.0;
                    fVar41 = 0.0;
                  }
                  else {
                    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
                    uVar23 = *unaff_x20;
                    uVar10 = *(uint *)(*_iStack00000000000000d8 + 0x28);
                    if ((int)uVar23 < (int)in_stack_00000080._4_4_) {
                      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= uVar23 + 1)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = *(long *)(lVar17 + (long)(int)(uVar23 + 1) * (long)iVar38 + 0x30);
                      if ((((lVar17 == 0) || (*in_stack_00000178 == 0)) ||
                          (lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0)) ||
                         (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)) goto LAB_0354fbf4;
                      in_stack_000008b0 = uVar10 | *(int *)(lVar17 + 0x28) << 0x10;
                      uVar18 = FUN_0219f8b8(lVar25,&stack0x000008b0,&stack0x00001708,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                      uVar59 = 0;
                      if ((uVar18 & 1) == 0) {
                        fVar60 = 0.0;
                        fVar61 = 0.0;
                        fVar41 = 0.0;
                      }
                      else {
                        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
                        fVar60 = *(float *)(in_stack_00001708 + 0x1c);
                        uVar59 = *(undefined4 *)(in_stack_00001708 + 0x20);
                        fVar41 = *(float *)(in_stack_00001708 + 0x14);
                        fVar61 = *(float *)(in_stack_00001708 + 0x18);
                        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                          fVar51 = 0.0;
                        }
                      }
                      uVar23 = *unaff_x20;
                    }
                    else {
                      uVar59 = 0;
                      fVar60 = 0.0;
                      fVar61 = 0.0;
                      fVar41 = 0.0;
                    }
                    if (0 < (int)uVar23) {
                      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= uVar23 - 1)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = *(long *)(lVar17 + (ulong)(uVar23 - 1) * (unaff_x24 & 0xffffffff) +
                                        0x30);
                      if (((lVar17 == 0) || (*in_stack_00000178 == 0)) ||
                         ((lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0 ||
                          (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)))) goto LAB_0354fbf4;
                      in_stack_000008b0 = *(uint *)(lVar17 + 0x28) | uVar10 << 0x10;
                      uVar18 = FUN_0219f8b8(lVar25,&stack0x000008b0,&stack0x00001708,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                      if ((uVar18 & 1) != 0) {
                        if ((in_stack_00001708 == 0) ||
                           (fVar41 = (float)FUN_03571cb4(fVar41,fVar61,fVar60,uVar59,
                                                         *(undefined4 *)(in_stack_00001708 + 0x28),
                                                         *(undefined4 *)(in_stack_00001708 + 0x2c),
                                                         *(undefined4 *)(in_stack_00001708 + 0x30),
                                                         *(undefined4 *)(in_stack_00001708 + 0x34),0
                                                        ), in_stack_00001708 == 0))
                        goto LAB_0354fbf4;
                        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                          fVar51 = 0.0;
                        }
                      }
                    }
                    *(float *)((long)unaff_x19 + 0x2fc) = fVar60;
                  }
                  fVar56 = (float)uVar16;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    fVar44 = *(float *)(unaff_x19 + 200);
                    fVar42 = (float)FUN_03776cb4(&stack0x000017a0,0);
                    fVar44 = fVar44 - fVar56 * fVar42 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
                    *(float *)(unaff_x19 + 200) = fVar44;
                    if ((in_stack_000017ec == 0x200b) || (uVar12 != 0)) {
                      *(float *)(unaff_x19 + 200) =
                           fVar44 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
                    }
                  }
                  fVar44 = *(float *)(unaff_x19 + 0x56);
                  fVar42 = 0.0;
                  if (fVar44 != 0.0) {
                    fVar42 = (float)FUN_03776c94(&stack0x000017a0,0);
                    fVar57 = (float)FUN_03776ca4(&stack0x000017a0,0);
                    fVar42 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (fVar44 * 0.5 - fVar56 * (fVar42 * 0.5 + fVar57));
                    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar42;
                  }
                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                    lVar17 = *in_stack_00000170;
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar18 = FUN_036cee6c(lVar17,0,0);
                    fVar57 = 0.0;
                    if ((uVar18 & 1) != 0) {
                      lVar17 = *in_stack_00000170;
                      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0
                                  ) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                      if (lVar17 == 0) goto LAB_0354fbf4;
                      uVar18 = FUN_03699d3c(lVar17,*(undefined4 *)
                                                    (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                      fVar57 = 0.0;
                      if ((uVar18 & 1) != 0) {
                        lVar17 = *in_stack_00000170;
                        if (*(int *)(*plVar39 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                        }
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        fVar44 = (float)FUN_0369e060(lVar17,*(undefined4 *)
                                                             (*(long *)(*plVar39 + 0xb8) + 0x54),0);
                        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0))
                        goto LAB_0354fbf4;
                        fVar43 = *(float *)(*in_stack_00000178 + 0x1b0);
                        fVar57 = (float)FUN_0369e060(*in_stack_00000170,
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                        fVar57 = fVar57 * fVar44 * fVar43 * 0.25;
                        if (fVar44 < in_stack_00000168._4_4_ + fVar57) {
                          in_stack_00000168._4_4_ = fVar44 - fVar57;
                        }
                      }
                    }
                    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
                  }
                  else {
                    lVar17 = *in_stack_00000170;
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar18 = FUN_036cee6c(lVar17,0,0);
                    fStack00000000000000d0 = 0.0;
                    if ((uVar18 & 1) != 0) {
                      lVar17 = *in_stack_00000170;
                      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0
                                  ) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                      if (lVar17 == 0) goto LAB_0354fbf4;
                      uVar18 = FUN_03699d3c(lVar17,*(undefined4 *)
                                                    (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                      if ((uVar18 & 1) != 0) {
                        lVar17 = *in_stack_00000170;
                        if (*(int *)(*plVar39 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                        }
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        uVar18 = FUN_03699d3c(lVar17,*(undefined4 *)
                                                      (*(long *)(*plVar39 + 0xb8) + 0xcc),0);
                        if ((uVar18 & 1) != 0) {
                          lVar17 = *in_stack_00000170;
                          if (*(int *)(*plVar39 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                          }
                          if (lVar17 != 0) {
                            fVar44 = (float)FUN_0369e060(lVar17,*(undefined4 *)
                                                                 (*(long *)(*plVar39 + 0xb8) + 0x54)
                                                         ,0);
                            if ((*in_stack_00000178 != 0) && (*in_stack_00000170 != 0)) {
                              fVar43 = *(float *)(*in_stack_00000178 + 0x1a8);
                              fVar57 = (float)FUN_0369e060(*in_stack_00000170,
                                                           *(undefined4 *)
                                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                              fVar57 = fVar57 * fVar44 * fVar43 * 0.25;
                              if (fVar44 < in_stack_00000168._4_4_ + fVar57) {
                                in_stack_00000168._4_4_ = fVar44 - fVar57;
                              }
                              goto LAB_0354a568;
                            }
                          }
                          goto LAB_0354fbf4;
                        }
                      }
                    }
                    fVar57 = 0.0;
                  }
LAB_0354a568:
                  fVar44 = *(float *)(unaff_x19 + 200);
                  fVar43 = (float)FUN_03776ca4(&stack0x000017a0,0);
                  fVar44 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                    fVar56 * (fVar41 + ((fVar43 - in_stack_00000168._4_4_) - fVar57)
                                             );
                  fVar41 = (float)FUN_03776cac(&stack0x000017a0,0);
                  fVar43 = *(float *)((long)unaff_x19 + 0x61c) +
                           ((fVar45 + fVar56 * (fVar61 + in_stack_00000168._4_4_ + fVar41)) -
                           *(float *)(unaff_x19 + 0x9b));
                  fVar41 = (float)FUN_03776c9c(&stack0x000017a0,0);
                  fStack0000000000000134 =
                       fVar43 - fVar56 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar41
                                         );
                  fVar41 = (float)FUN_03776c94(&stack0x000017a0,0);
                  fVar61 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                    fVar56 * (fVar57 + fVar57 +
                                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ +
                                             fVar41);
                  fStack0000000000000104 = fVar44;
                  fVar41 = fVar61;
                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                    fVar46 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
                    fVar41 = (float)FUN_03776cac(&stack0x000017a0,0);
                    fVar47 = fVar46 * fVar56 * (fVar57 + in_stack_00000168._4_4_ + fVar41);
                    fVar41 = (float)FUN_03776cac(&stack0x000017a0,0);
                    fVar55 = (float)FUN_03776c9c(&stack0x000017a0,0);
                    fVar43 = fVar43 + 0.0;
                    fStack0000000000000134 = fStack0000000000000134 + 0.0;
                    fVar46 = fVar46 * fVar56 * (((fVar41 - fVar55) - in_stack_00000168._4_4_) -
                                               fVar57);
                    fVar55 = fVar44 + fVar47;
                    fVar41 = fVar61 + fVar46;
                    fVar53 = (fVar47 - fVar46) * 0.5;
                    fVar44 = (fVar44 + fVar46) - fVar53;
                    fVar61 = (fVar61 + fVar47) - fVar53;
                    fStack0000000000000104 = fVar55 - fVar53;
                    fVar41 = fVar41 - fVar53;
                  }
                  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                    fVar46 = 0.0;
                    fVar47 = 0.0;
                    fVar52 = 0.0;
                    fStack0000000000000100 = 0.0;
                    fVar53 = fStack0000000000000134;
                    fVar55 = fVar43;
                  }
                  else {
                    thunk_FUN_036bc400(_fStack0000000000000070,0);
                    fVar54 = (fVar61 + fVar44) * 0.5;
                    fVar58 = (fStack0000000000000134 + fVar43) * 0.5;
                    fVar43 = fVar43 - fVar58;
                    fStack0000000000000100 = 0.0;
                    fVar55 = fVar43;
                    fStack0000000000000104 =
                         (float)FUN_036bdd2c(fStack0000000000000104 - fVar54,_fStack0000000000000070
                                             ,0);
                    fStack0000000000000104 = fVar54 + fStack0000000000000104;
                    fStack0000000000000100 = fStack0000000000000100 + 0.0;
                    fVar53 = fStack0000000000000134 - fVar58;
                    fVar46 = 0.0;
                    fStack0000000000000134 = fVar53;
                    fVar44 = (float)FUN_036bdd2c(fVar44 - fVar54,_fStack0000000000000070,0);
                    fVar44 = fVar54 + fVar44;
                    fVar46 = fVar46 + 0.0;
                    fStack0000000000000134 = fVar58 + fStack0000000000000134;
                    fVar52 = 0.0;
                    fVar61 = (float)FUN_036bdd2c(fVar61 - fVar54,_fStack0000000000000070,0);
                    fVar61 = fVar54 + fVar61;
                    fVar43 = fVar58 + fVar43;
                    fVar52 = fVar52 + 0.0;
                    fVar47 = 0.0;
                    fVar41 = (float)FUN_036bdd2c(fVar41 - fVar54,_fStack0000000000000070,0);
                    fVar41 = fVar54 + fVar41;
                    fVar47 = fVar47 + 0.0;
                    fVar53 = fVar58 + fVar53;
                    fVar55 = fVar58 + fVar55;
                  }
                  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar17 + 0x11c) = fVar44;
                  *(float *)(lVar17 + 0x120) = fStack0000000000000134;
                  *(float *)(lVar17 + 0x124) = fVar46;
                  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar17 + 0x114) = fVar55;
                  *(float *)(lVar17 + 0x110) = fStack0000000000000104;
                  *(float *)(lVar17 + 0x118) = fStack0000000000000100;
                  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar17 + 0x128) = fVar61;
                  *(float *)(lVar17 + 300) = fVar43;
                  *(float *)(lVar17 + 0x130) = fVar52;
                  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar17 + 0x134) = fVar41;
                  *(float *)(lVar17 + 0x138) = fVar53;
                  *(float *)(lVar17 + 0x13c) = fVar47;
                  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                  goto LAB_0354fbf4;
                  uVar23 = *unaff_x20;
                  lVar25 = (long)(int)uVar23;
                  if (*(uint *)(lVar17 + 0x18) <= uVar23)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar26 = lVar17 + lVar25 * unaff_x24;
                  *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
                  fVar43 = *(float *)(unaff_x19 + 0x9b);
                  param_3 = (ulong)(uint)fVar43;
                  fVar41 = *(float *)((long)unaff_x19 + 0x61c);
                  *(float *)(lVar26 + 0x15c) = (fVar61 - fVar44) / (fVar55 - fStack0000000000000134)
                  ;
                  *(float *)(lVar26 + 0x14c) = (fVar45 - fVar43) + fVar41;
                  fVar61 = fStack0000000000000124 * fVar56;
                  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                    fVar61 = fVar61 / in_stack_00000150;
                    fStack0000000000000120 = (fStack0000000000000120 * fVar56) / in_stack_00000150;
                  }
                  else {
                    fStack0000000000000120 = fStack0000000000000120 * fVar56;
                  }
                  uVar2 = *(uint *)(unaff_x19 + 0x93);
                  if ((uVar12 == 0) || (uVar23 == uVar2)) {
                    fStack0000000000000120 = fVar41 + fStack0000000000000120;
                    fVar61 = fVar41 + fVar61;
                    fVar55 = fStack0000000000000120;
                    fVar44 = fVar61;
                    if (fVar41 != 0.0) {
                      fVar44 = (fVar61 - fVar41) / *(float *)((long)unaff_x19 + 0x404);
                      fVar55 = (fStack0000000000000120 - fVar41) /
                               *(float *)((long)unaff_x19 + 0x404);
                      if (fVar44 <= fVar61) {
                        fVar44 = fVar61;
                      }
                      if (fStack0000000000000120 <= fVar55) {
                        fVar55 = fStack0000000000000120;
                      }
                    }
                    lVar17 = lVar17 + lVar25 * unaff_x24;
                    fVar41 = fVar44;
                    if (fVar44 <= *(float *)(unaff_x19 + 0x99)) {
                      fVar41 = *(float *)(unaff_x19 + 0x99);
                    }
                    fVar45 = fVar55;
                    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar55) {
                      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
                    }
                    *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
                    *(float *)(unaff_x19 + 0x99) = fVar41;
                    *(float *)(lVar17 + 0x154) = fVar44;
                    *(float *)(lVar17 + 0x158) = fVar55;
                    *(float *)(lVar17 + 0x148) = fVar61 - fVar43;
                    *(float *)(unaff_x19 + 0x98) = fVar61 - fVar43;
                    *(float *)(lVar17 + 0x150) = fStack0000000000000120 - fVar43;
                    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar43;
                    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0'))
                    {
                      *(float *)(unaff_x19 + 0x97) = fVar41;
                      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                      fVar41 = *(float *)((long)unaff_x19 + 0x4bc);
                      fVar44 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                      in_stack_00000150 = (fVar56 * fVar44) / in_stack_00000150;
                      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                      if (fVar41 <= in_stack_00000150) {
                        fVar41 = in_stack_00000150;
                      }
                      *(float *)((long)unaff_x19 + 0x4bc) = fVar41;
                    }
                    if ((float)param_3 == 0.0) {
                      fVar41 = *(float *)(in_stack_00000078 + 0x208);
                      if (*(float *)(in_stack_00000078 + 0x208) <= fVar61) {
                        fVar41 = fVar61;
                      }
                      *(float *)(in_stack_00000078 + 0x208) = fVar41;
                    }
                  }
                  else {
                    fVar41 = *(float *)(unaff_x19 + 0x99);
                    lVar17 = lVar17 + lVar25 * unaff_x24;
                    *(float *)(lVar17 + 0x154) = fVar41;
                    fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
                    fVar41 = fVar41 - fVar43;
                    *(float *)(lVar17 + 0x148) = fVar41;
                    *(float *)(lVar17 + 0x158) = fVar61;
                    *(float *)(unaff_x19 + 0x98) = fVar41;
                    fVar61 = fVar61 - fVar43;
                    *(float *)(lVar17 + 0x150) = fVar61;
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar61;
                  }
                  lVar17 = *unaff_x22;
                  if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0))
                  goto LAB_0354fbf4;
                  uVar13 = *unaff_x20;
                  if (*(uint *)(lVar25 + 0x18) <= uVar13)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar25 = lVar25 + (long)(int)uVar13 * unaff_x24;
                  *(undefined1 *)(lVar25 + 0x194) = 0;
                  uVar29 = *(uint *)(unaff_x19 + 0x4f);
                  unaff_x21 = in_stack_00000178;
                  uVar10 = in_stack_000017ec;
                  if (((in_stack_000017ec == 9) ||
                      ((((uVar12 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b))
                       && (in_stack_000017ec != 0xad)))) ||
                     (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
                      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
                    *(undefined1 *)(lVar25 + 0x194) = 1;
                    pfVar27 = _fStack00000000000000a0;
                    pfVar31 = _fStack00000000000000a8;
                    if (unaff_w23 != 0) {
                      lVar17 = *(long *)(lVar17 + 0x50);
                      if (lVar17 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      pfVar31 = (float *)(lVar17 + 0x60);
                      pfVar27 = (float *)(lVar17 + 100);
                    }
                    fVar61 = *pfVar31;
                    fVar44 = *pfVar27;
                    fVar41 = *(float *)(unaff_x19 + 0x6c);
                    fVar43 = *(float *)(unaff_x19 + 200);
                    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar61) - fVar44;
                    bVar9 = true;
                    if ((fVar41 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar41))) {
                      bVar9 = fVar41 == -1.0;
                    }
                    if (!bVar9) {
                      in_stack_000000f8._4_4_ = fVar41;
                    }
                    fVar41 = 0.0;
                    if ((char)unaff_x19[0x1e] == '\0') {
                      fVar41 = (float)FUN_03776cb4(&stack0x000017a0,0);
                      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                    }
                    fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
                    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
                    fVar55 = (float)unaff_d11;
                    if (in_stack_000017ec != 0xad) {
                      fVar55 = fVar56;
                    }
                    fVar47 = (float)param_3;
                    fVar53 = 0.0;
                    if ((0.0 < fVar47) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')
                       ) {
                      fVar53 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                    }
                    uVar13 = *unaff_x20;
                    fVar53 = (*(float *)(unaff_x19 + 0x97) - (fVar46 - fVar47)) + fVar53;
                    if (fStack00000000000000c4 < fVar53) {
                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                        *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                      }
                      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      in_stack_000017d8 = DAT_00d37868;
                      if ((char)unaff_x19[0x47] != '\0') {
                        fVar52 = *(float *)(unaff_x19 + 0x59);
                        if (((fVar52 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar47)) &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar51 = *(float *)((long)unaff_x19 + 700) +
                                   ((fStack0000000000000018 - fVar53) / (float)(int)unaff_x19[0x95])
                                   / in_stack_00000050;
                          if (fVar51 <= fVar52) {
                            fVar51 = fVar52;
                          }
                          goto UnityEngine_AndroidJavaObject___ctor;
                        }
                        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
                        fVar53 = *(float *)(unaff_x19 + 0x4a);
                        param_3 = (ulong)(uint)fVar53;
                        if ((fVar53 < fVar47) &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar51 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                          if (fVar51 <= DAT_00d38b84) {
                            fVar51 = DAT_00d38b84;
                          }
                          fVar60 = (fVar47 - fVar51) * 20.0 + 0.5;
                          *(float *)((long)unaff_x19 + 0x23c) = fVar47;
                          fVar51 = DAT_00d38e60;
                          if (fVar60 != INFINITY) {
                            fVar51 = (float)(int)fVar60 / 20.0;
                          }
                          if (fVar51 <= fVar53) {
                            fVar51 = fVar53;
                          }
                          goto LAB_0354d004;
                        }
                      }
                      switch((int)unaff_x19[0x5c]) {
                      case 1:
                        lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar17 = *(long *)puVar8;
                        }
                        lVar25 = *(long *)(lVar17 + 0xb8);
                        lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                          lVar17 = FUN_01a46ff8(lVar17);
                        }
                        piVar20 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                                            *(long *)(*(long *)(*(long *)(lVar17 + 
                                                  0xc0) + 8) + 0x80) + 0xa0);
                        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*piVar20 == 0) {
LAB_0354cf2c:
                          in_stack_000017d8 = DAT_00d37868;
                          unaff_x20[0] = 0;
                          unaff_x20[1] = 0;
                          unaff_d11 = uVar16;
                          in_stack_000017b8 = 0xffffffff;
                          goto LAB_03549564;
                        }
                        lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar17 = *(long *)puVar8;
                        }
                        FUN_0209b778(*(long *)(lVar17 + 0xb8) + 0x11f0,&stack0x000008b0,
                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                        memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                        iVar11 = FUN_0358c15c();
LAB_0354b3a0:
                        iVar14 = *(int *)((long)unaff_x19 + 0x494) + -1;
                        *(int *)((long)unaff_x19 + 0x494) = iVar14;
                        in_stack_00000180 = in_stack_00000180 + 1;
                        unaff_d11 = uVar16;
                        in_stack_000017b8 = iVar11 - 1;
                        in_stack_000017d8 = CONCAT44(0x2026,iVar14);
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
                          unaff_d11 = uVar16;
                          in_stack_000017b8 = 0xffffffff;
                          goto LAB_03549564;
                        }
                        fVar51 = *(float *)(unaff_x19 + 0x99);
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        in_stack_000017b8 = FUN_0358c15c();
                        if (fVar51 - fVar46 <= fStack00000000000000c4) {
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                          *(undefined4 *)(unaff_x19 + 0x93) =
                               *(undefined4 *)((long)unaff_x19 + 0x494);
                          param_3 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                        0xb8) + 0x15a8);
                          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                          lVar17 = NEON_rev64(param_3,4);
                          unaff_x19[0x99] = lVar17;
                          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
                          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                          unaff_d11 = uVar16;
                          in_stack_000017d8 = uVar19;
                          goto LAB_03549564;
                        }
                        break;
                      case 6:
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        in_stack_000017b8 = FUN_0358c15c();
                        lVar17 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar18 = FUN_036cee6c(lVar17,0,0);
                        if ((uVar18 & 1) != 0) {
                          plVar39 = (long *)unaff_x19[0x5d];
                          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                          (**(code **)(*plVar39 + 0x528))
                                    (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                          lVar17 = unaff_x19[0x5d];
                          if (lVar17 == 0) goto LAB_0354fbf4;
                          *(int *)(lVar17 + 0x400) = (int)unaff_x19[0x80];
                          FUN_0357ee30(lVar17,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                          plVar39 = (long *)unaff_x19[0x5d];
                          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                          (**(code **)(*plVar39 + 0x7a8))
                                    (plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                        }
                      }
LAB_0354b0e0:
                      unaff_d11 = uVar16;
                      in_stack_000017d8 = CONCAT44(3,uVar13);
                      goto LAB_03549564;
                    }
switchD_0354ad3c_caseD_2:
                    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    fVar43 = ABS(fVar43) + fVar41 * (1.0 - fVar45) * fVar55;
                    fVar41 = 1.0;
                    if ((uVar29 & 0x18) != 0) {
                      fVar41 = DAT_00d38acc;
                    }
                    fVar55 = fVar41 * in_stack_000000f8._4_4_;
                    if (fVar55 < fVar43) {
                      param_3 = (ulong)(uint)fVar57;
                      if (((char)unaff_x19[0x5b] == '\0') || (uVar13 == *(uint *)(unaff_x19 + 0x93))
                         ) {
                        if (((char)unaff_x19[0x47] != '\0') &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                          if (fVar45 < fVar55) {
                            fVar51 = fVar43 / (1.0 - fVar45);
                            if (fVar45 <= 0.0) {
                              fVar51 = fVar43;
                            }
                            fVar45 = fVar45 + (fVar43 - fVar41 * (in_stack_000000f8._4_4_ +
                                                                 DAT_00d38cc4)) / fVar51;
                            goto LAB_0354fc24;
                          }
                          fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
                          fVar55 = *(float *)(unaff_x19 + 0x4a);
                          if (fVar55 < fVar45) {
                            fVar51 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar51 <= DAT_00d38b84) {
                              fVar51 = DAT_00d38b84;
                            }
                            *(float *)((long)unaff_x19 + 0x23c) = fVar45;
                            fVar45 = fVar45 - fVar51;
LAB_0354fc60:
                            fVar60 = fVar45 * 20.0 + 0.5;
                            fVar51 = DAT_00d38e60;
                            if (fVar60 != INFINITY) {
                              fVar51 = (float)(int)fVar60 / 20.0;
                            }
                            if (fVar51 <= fVar55) {
                              fVar51 = fVar55;
                            }
LAB_0354d004:
                            *(float *)((long)unaff_x19 + 0x1e4) = fVar51;
                            return;
                          }
                        }
                        iVar11 = (int)unaff_x19[0x5c];
                        if (iVar11 == 1) {
                          lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar17 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar17 = *(long *)puVar8;
                          }
                          lVar25 = *(long *)(lVar17 + 0xb8);
                          lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                            lVar17 = FUN_01a46ff8(lVar17);
                          }
                          piVar20 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                                              *(long *)(*(long *)(*(long *)(lVar17 +
                                                                                           0xc0) + 8
                                                                                 ) + 0x80) + 0xa0);
                          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*piVar20 == 0) goto LAB_0354cf2c;
                          lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar17 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar17 = *(long *)puVar8;
                          }
                          FUN_0209b778(*(long *)(lVar17 + 0xb8) + 0x11f0,&stack0x000008b0,
                                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                          memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
                          goto LAB_0354b394;
                        }
                        if (iVar11 != 6) {
                          if (iVar11 == 3) {
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
                        lVar17 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar18 = FUN_036cee6c(lVar17,0,0);
                        if ((uVar18 & 1) != 0) {
                          plVar39 = (long *)unaff_x19[0x5d];
                          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                          (**(code **)(*plVar39 + 0x528))
                                    (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                          lVar17 = unaff_x19[0x5d];
                          if (lVar17 == 0) goto LAB_0354fbf4;
                          *(int *)(lVar17 + 0x400) = (int)unaff_x19[0x80];
                          FUN_0357ee30(lVar17,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                          plVar39 = (long *)unaff_x19[0x5d];
                          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                          (**(code **)(*plVar39 + 0x7a8))
                                    (plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                        }
LAB_0354b4b4:
                        unaff_d11 = uVar16;
                        in_stack_000017d8 = CONCAT44(3,*unaff_x20);
                        goto LAB_03549564;
                      }
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      in_stack_000017b8 = FUN_0358c15c();
                      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                        lVar17 = *unaff_x22;
                        if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar55 = *(float *)(unaff_x19 + 0x9b);
                        fVar45 = 0.0;
                        if ((0.0 < fVar55) &&
                           (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                          fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                        }
                        fVar45 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                                 *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                                 (fVar45 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                 in_stack_00000050 *
                                 (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
                      }
                      else {
                        lVar17 = unaff_x19[0x6d];
                        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        fVar55 = *(float *)(unaff_x19 + 0x9b);
                        fVar45 = *(float *)(unaff_x19 + 0x58) +
                                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
                      }
                      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar17 = *(long *)(lVar17 + 0x38);
                      if (lVar17 != 0) {
                        uVar33 = *(uint *)((long)unaff_x19 + 0x494);
                        if ((*(uint *)(lVar17 + 0x18) <= uVar33) ||
                           (uVar30 = uVar33 - 1, *(uint *)(lVar17 + 0x18) <= uVar30))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        param_3 = (ulong)(uint)(fVar45 + *(float *)(unaff_x19 + 0x97));
                        fVar46 = (fVar45 + *(float *)(unaff_x19 + 0x97) + fVar55) -
                                 *(float *)(lVar17 + (long)(int)uVar33 * unaff_x24 + 0x158);
                        if (((bStack000000000000006c & 1) == 0 &&
                             *(short *)(lVar17 + (long)(int)uVar30 * (long)iVar38 + 0x20) == 0xad)
                           && ((fVar46 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
                          bStack000000000000006c = 0;
                          *unaff_x20 = uVar30;
                          unaff_d11 = uVar16;
                          in_stack_000017b8 = in_stack_000017b8 - 1;
                          in_stack_000017d8 = CONCAT44(0x2d,uVar30);
                          goto LAB_03549564;
                        }
                        if (*(short *)(lVar17 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad) {
                          bStack000000000000006c = 1;
                          unaff_d11 = uVar16;
                          in_stack_000017d8 = uVar19;
                          goto LAB_03549564;
                        }
                        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
                          fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
                          fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                          if ((fVar55 <= fVar45) ||
                             ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
                            param_3 = (ulong)(uint)fVar45;
                            fVar55 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar45 <= fVar55) ||
                               ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                            goto LAB_0354b6dc;
LAB_0354fcd0:
                            fVar51 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar51 <= DAT_00d38b84) {
                              fVar51 = DAT_00d38b84;
                            }
                            *(float *)((long)unaff_x19 + 0x23c) = fVar45;
                            fVar45 = fVar45 - fVar51;
                            goto LAB_0354fc60;
                          }
LAB_0354fc94:
                          fVar51 = fVar43;
                          if (0.0 < fVar45) {
                            fVar51 = fVar43 / (1.0 - fVar45);
                          }
                          fVar45 = fVar45 + (fVar43 - fVar41 * (in_stack_000000f8._4_4_ +
                                                               DAT_00d38cc4)) / fVar51;
LAB_0354fc24:
                          if (fVar55 <= fVar45) {
                            fVar45 = fVar55;
                          }
                          *(float *)((long)unaff_x19 + 0x2d4) = fVar45;
                          return;
                        }
LAB_0354b6dc:
                        lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar17 = *(long *)puVar8;
                        }
                        iVar11 = *(int *)(*(long *)(lVar17 + 0xb8) + 0xe78);
                        if (((iVar11 != iStack000000000000002c) && (iVar11 != -1)) &&
                           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
                          if (*(int *)(lVar17 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          in_stack_000017b8 = FUN_0358c15c();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar17 = *(long *)(unaff_x19[0x6d] + 0x38), lVar17 == 0))
                          goto LAB_0354fbf4;
                          uVar33 = *unaff_x20 - 1;
                          if (*(uint *)(lVar17 + 0x18) <= uVar33)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          iStack000000000000002c = iVar11;
                          if (*(short *)(lVar17 + (long)(int)uVar33 * (long)iVar38 + 0x20) == 0xad)
                          {
                            bStack000000000000006c = 0;
                            *unaff_x20 = uVar33;
                            unaff_d11 = uVar16;
                            in_stack_000017b8 = in_stack_000017b8 - 1;
                            in_stack_000017d8 = CONCAT44(0x2d,uVar33);
                            goto LAB_03549564;
                          }
                        }
                        if (fVar46 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
                          param_3 = uVar16;
                          FUN_0358cbd4(in_stack_00000050,uVar16,fStack00000000000000d4,
                                       *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                       fStack00000000000000d0,fVar51,in_stack_000000f8._4_4_,
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
                              fVar51 = *(float *)((long)unaff_x19 + 700) +
                                       ((fStack0000000000000018 - fVar46) /
                                       (float)((int)unaff_x19[0x95] + 1)) / in_stack_00000050;
                              if (fVar51 <= fVar55) {
                                fVar51 = fVar55;
                              }
UnityEngine_AndroidJavaObject___ctor:
                              *(float *)((long)unaff_x19 + 700) = fVar51;
                              return;
                            }
                            fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
                            fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                            if ((fVar45 < fVar55) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_0354fc94;
                            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
                            param_3 = (ulong)(uint)fVar45;
                            fVar55 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar55 < fVar45) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_0354fcd0;
                          }
                          switch((int)unaff_x19[0x5c]) {
                          case 0:
                          case 2:
                          case 4:
                            goto switchD_0354b88c_caseD_0;
                          case 1:
                            lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar17 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            }
                            lVar25 = *(long *)(lVar17 + 0xb8);
                            lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                              lVar17 = FUN_01a46ff8(lVar17);
                            }
                            piVar20 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                                                *(long *)(*(long *)(*(long *)(lVar17
                                                                                             + 0xc0)
                                                                                   + 8) + 0x80) +
                                                                0xa0);
                            if (*piVar20 == 0) {
                              bStack000000000000006c = 0;
                              goto LAB_0354cf2c;
                            }
                            lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar17 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            }
                            FUN_0209b778(*(long *)(lVar17 + 0xb8) + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                            iVar11 = FUN_0358c15c();
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
                            param_3 = uVar16;
                            FUN_0358cbd4(in_stack_00000050,uVar16,fStack00000000000000d4,
                                         *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                         fStack00000000000000d0,fVar51,in_stack_000000f8._4_4_,
                                         in_stack_00000048._4_4_);
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                            *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
                            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                            break;
                          case 6:
                            lVar17 = unaff_x19[0x5d];
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar18 = FUN_036cee6c(lVar17,0,0);
                            if ((uVar18 & 1) != 0) {
                              plVar39 = (long *)unaff_x19[0x5d];
                              uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                              if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
                              (**(code **)(*plVar39 + 0x528))
                                        (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                              lVar17 = unaff_x19[0x5d];
                              if (lVar17 == 0) goto LAB_0354fbf4;
                              *(int *)(lVar17 + 0x400) = (int)unaff_x19[0x80];
                              FUN_0357ee30(lVar17,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
                        unaff_d11 = uVar16;
                        in_stack_000017d8 = uVar19;
                        goto LAB_03549564;
                      }
                      goto LAB_0354fbf4;
                    }
LAB_0354b8e4:
                    if (in_stack_000017ec != 0xad) {
                      if (in_stack_000017ec != 9) {
                        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                          (**(code **)(*unaff_x19 + 0x898))(fVar55,fVar57);
                        }
                        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                          (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
                        }
                        uVar13 = *unaff_x20;
                        if ((in_stack_00000060 & 1) != 0) {
                          *(uint *)(in_stack_00000078 + 0x1f0) = uVar13;
                        }
                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
                        if ((unaff_x19[0x6d] != 0) &&
                           (lVar17 = *(long *)(unaff_x19[0x6d] + 0x50), lVar17 != 0)) {
                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar17 + 0x18)) {
                            lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            in_stack_00000060 = 0;
                            *(float *)(lVar17 + 0x60) = fVar61;
                            *(float *)(lVar17 + 100) = fVar44;
                            goto LAB_0354ba38;
                          }
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        }
                        goto LAB_0354fbf4;
                      }
                      lVar17 = *unaff_x22;
                      if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0))
                      goto LAB_0354fbf4;
                      uVar13 = *unaff_x20;
                      if (uVar13 < *(uint *)(lVar25 + 0x18)) {
                        *(undefined1 *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                        lVar25 = *(long *)(lVar17 + 0x50);
                        if (lVar25 != 0) {
                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar25 + 0x18)) {
                            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
                            goto LAB_0354b950;
                          }
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        }
                        goto LAB_0354fbf4;
                      }
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    }
                    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(undefined1 *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
                  }
                  else {
                    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                      fVar61 = (float)param_3;
                      fVar41 = 0.0;
                      if ((0.0 < fVar61) &&
                         (fVar41 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar41 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      param_3 = (ulong)(uint)fStack00000000000000c4;
                      if (fStack00000000000000c4 <
                          (*(float *)(unaff_x19 + 0x97) -
                          (*(float *)((long)unaff_x19 + 0x4cc) - fVar61)) + fVar41) {
                        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                        }
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        in_stack_000017b8 = FUN_0358c15c();
                        lVar17 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar18 = FUN_036cee6c(lVar17,0,0);
                        if ((uVar18 & 1) != 0) {
                          plVar39 = (long *)unaff_x19[0x5d];
                          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                          if (plVar39 != (long *)0x0) {
                            (**(code **)(*plVar39 + 0x528))
                                      (plVar39,uVar19,*(undefined8 *)(*plVar39 + 0x530));
                            lVar17 = unaff_x19[0x5d];
                            if (lVar17 != 0) {
                              *(int *)(lVar17 + 0x400) = (int)unaff_x19[0x80];
                              FUN_0357ee30(lVar17,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
                    if ((((in_stack_000017ec - 0x2007 < 0x23) &&
                         ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x600000001U) != 0))
                        || (in_stack_000017ec - 10 < 2)) || (in_stack_000017ec == 0xa0)) {
LAB_0354b500:
                      if (((in_stack_000017ec != 0xad) && (in_stack_000017ec != 0x200b)) &&
                         (in_stack_000017ec != 0x2060)) {
                        lVar17 = *unaff_x22;
                        if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x50), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
                        *(int *)(lVar17 + 0x20) = *(int *)(lVar17 + 0x20) + 1;
                      }
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar18 = FUN_026b97f8(in_stack_000017ec,0);
                      if ((uVar18 & 1) != 0) goto LAB_0354b500;
                    }
                    if (in_stack_000017ec == 0xa0) {
                      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x50), lVar17 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
                      *(int *)(lVar17 + 0x20) = *(int *)(lVar17 + 0x20) + 1;
                    }
                  }
LAB_0354ba38:
                  if (((int)unaff_x19[0x5c] == 1) &&
                     ((in_stack_000017ec == 0x2d || (unaff_w23 != 1)))) {
                    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                    fVar41 = *(float *)(unaff_x19 + 0x3d);
                    iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                    fVar44 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                    lVar17 = unaff_x19[0xca];
                    fVar61 = fStack0000000000000098;
                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                      fVar61 = 1.0;
                    }
                    if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_0354fbf4;
                    fVar43 = *(float *)((long)unaff_x19 + 0x404);
                    fVar45 = *(float *)(lVar17 + 0x2c);
                    fVar57 = (float)FUN_03776ea8(*(long *)(lVar17 + 0x20),0);
                    fVar55 = *_fStack00000000000000a8;
                    fVar57 = fVar43 * (fVar41 / (float)iVar11) * fVar44 * fVar61 * fVar45 * fVar57;
                    fVar41 = *_fStack00000000000000a0;
                    if ((in_stack_000017ec == 10) &&
                       (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
                      goto LAB_0354fbf4;
                      uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
                      if (*(uint *)(lVar17 + 0x18) <= uVar13)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                      fVar61 = *(float *)(lVar17 + (long)(int)uVar13 * (long)iVar38 + 0x60);
                      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                      fVar43 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                      lVar17 = unaff_x19[0xca];
                      fVar44 = fStack0000000000000098;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar44 = 1.0;
                      }
                      if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_0354fbf4;
                      fVar45 = *(float *)((long)unaff_x19 + 0x404);
                      fVar46 = *(float *)(lVar17 + 0x2c);
                      fVar57 = (float)FUN_03776ea8(*(long *)(lVar17 + 0x20),0);
                      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x50), lVar17 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      fVar55 = *(float *)(lVar17 + 0x60);
                      fVar41 = *(float *)(lVar17 + 100);
                      fVar57 = fVar45 * (fVar61 / (float)iVar11) * fVar43 * fVar44 * fVar46 * fVar57
                      ;
                    }
                    fVar43 = *(float *)(unaff_x19 + 0x9b);
                    fVar61 = 0.0;
                    fVar44 = 0.0;
                    if ((0.0 < fVar43) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')
                       ) {
                      fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                    }
                    fVar46 = *(float *)(unaff_x19 + 0x97);
                    fVar53 = *(float *)((long)unaff_x19 + 0x4cc);
                    fVar45 = *(float *)(unaff_x19 + 200);
                    if ((char)unaff_x19[0x1e] == '\0') {
                      if ((unaff_x19[0xca] == 0) ||
                         (lVar17 = *(long *)(unaff_x19[0xca] + 0x20), lVar17 == 0))
                      goto LAB_0354fbf4;
                      FUN_03776e6c(&stack0x000008b0,lVar17,0);
                      fVar61 = (float)FUN_03776cb4(&stack0x00001710,0);
                    }
                    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    fVar47 = *(float *)(unaff_x19 + 0x6c);
                    fVar41 = (fStack000000000000009c - fVar55) - fVar41;
                    bVar9 = true;
                    if ((fVar47 <= fVar41) && (bVar9 = false, !NAN(fVar47))) {
                      bVar9 = fVar47 == -1.0;
                    }
                    if (!bVar9) {
                      fVar41 = fVar47;
                    }
                    fVar55 = 1.0;
                    if ((uVar29 & 0x18) != 0) {
                      fVar55 = DAT_00d38acc;
                    }
                    if (((fVar46 - (fVar53 - fVar43)) + fVar44 < fStack00000000000000c4) &&
                       (ABS(fVar45) + fVar57 * fVar61 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
                        < fVar55 * fVar41)) {
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0358c4f0();
                      lVar17 = *(long *)(*(long *)puVar8 + 0xb8);
                      memcpy(&stack0x00000538,(void *)(lVar17 + 0x788),0x378);
                      FUN_0209b210(lVar17 + 0x11f0,&stack0x00000538,
                                   *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                    }
                  }
                  lVar17 = *unaff_x22;
                  if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  uVar13 = *(uint *)(unaff_x19 + 0x95);
                  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
                  *(uint *)(lVar25 + 100) = uVar13;
                  *(int *)(lVar25 + 0x68) = (int)unaff_x19[0x96];
                  if (((unaff_w23 & 1) == 0) &&
                     ((0xd < in_stack_000017ec ||
                      ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) == 0)))) {
                    lVar17 = *(long *)(lVar17 + 0x50);
                    if (lVar17 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
                    if (*(uint *)(lVar17 + 0x18) <= uVar13)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(int *)(lVar17 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                  }
                  else {
                    lVar17 = *(long *)(lVar17 + 0x50);
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar17 + 0x18) <= uVar13)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (*(int *)(lVar17 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
                  }
                  if (in_stack_000017ec == 9) {
                    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                    fVar60 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
                    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                    fVar42 = *(float *)(unaff_x19 + 200);
                    fVar41 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
                    fVar60 = fVar56 * fVar60 * fVar41;
                    fVar61 = fVar60 * (float)(int)(fVar42 / fVar60);
                    param_3 = (ulong)(uint)fVar61;
                    if (fVar61 <= fVar42) {
                      fVar61 = fVar42 + fVar60;
                    }
LAB_0354c000:
                    *(float *)(unaff_x19 + 200) = fVar61;
                  }
                  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                    if ((char)unaff_x19[0x1e] == '\0') {
                      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                        fVar42 = 1.0;
                      }
                      else {
                        fVar42 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
                      }
                      fVar61 = *(float *)(unaff_x19 + 200);
                      fVar44 = (float)FUN_03776cb4(&stack0x000017a0,0);
                      if (unaff_x19[0x20] != 0) {
                        fVar41 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                        fVar61 = fVar61 + fVar41 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                   fVar56 * (fVar60 + fVar42 * fVar44) +
                                                   fStack00000000000000d4 *
                                                   (fStack00000000000000d0 +
                                                   fVar51 + *(float *)(unaff_x19[0x20] + 0x1ac)));
                        *(float *)(unaff_x19 + 200) = fVar61;
                        goto joined_r0x0354bf48;
                      }
                      goto LAB_0354fbf4;
                    }
                    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                    fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (*(float *)((long)unaff_x19 + 0x2ac) +
                             fVar56 * fVar60 +
                             fStack00000000000000d4 *
                             (fStack00000000000000d0 +
                             fVar51 + *(float *)(*in_stack_00000178 + 0x1ac)));
                    param_3 = (ulong)(uint)fVar61;
                    fVar61 = *(float *)(unaff_x19 + 200) - fVar61;
                    *(float *)(unaff_x19 + 200) = fVar61;
                    if ((in_stack_000017ec == 0x200b) || (uVar12 != 0)) {
                      fVar60 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
                      param_3 = (ulong)(uint)fVar60;
                      fVar61 = fVar61 - fVar60;
                      goto LAB_0354c000;
                    }
                  }
                  else {
                    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
                    fVar41 = *(float *)(unaff_x19 + 200);
                    fVar61 = fVar41 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      (*(float *)((long)unaff_x19 + 0x2ac) +
                                      (*(float *)(unaff_x19 + 0x56) - fVar42) +
                                      fStack00000000000000d4 *
                                      (fVar51 + *(float *)(*in_stack_00000178 + 0x1ac)));
                    *(float *)(unaff_x19 + 200) = fVar61;
joined_r0x0354bf48:
                    if ((in_stack_000017ec == 0x200b) ||
                       (param_3 = (ulong)(uint)fVar41, uVar12 != 0)) {
                      fVar60 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
                      param_3 = (ulong)(uint)fVar60;
                      fVar61 = fVar61 + fVar60;
                      goto LAB_0354c000;
                    }
                  }
                  lVar17 = *unaff_x22;
                  if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0))
                  goto LAB_0354fbf4;
                  uVar13 = *unaff_x20;
                  uVar29 = (uint)*(undefined8 *)(lVar25 + 0x18);
                  if (uVar29 <= uVar13)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  *(float *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar61;
                  uVar33 = in_stack_000017ec;
                  if ((int)in_stack_000017ec < 0xd) {
                    if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
                    if (((unaff_w23 & in_stack_000017ec == 0x2d) != 0) ||
                       ((float)uVar13 == in_stack_00000080._4_4_)) goto LAB_0354c060;
                  }
                  else {
                    if (1 < in_stack_000017ec - 0x2028) {
                      if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
                      param_3 = 0;
                      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                      if ((float)uVar13 != in_stack_00000080._4_4_) goto LAB_0354c704;
                    }
LAB_0354c060:
                    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                      fVar60 = *(float *)(unaff_x19 + 0x99);
                      fVar41 = *(float *)(unaff_x19 + 0x9a);
                      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      fVar60 = fVar60 - fVar41;
                      if (((fStack0000000000000058 < ABS(fVar60)) &&
                          (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                         (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                        FUN_0358c860(fVar60);
                        *(float *)((long)unaff_x19 + 0x4c4) =
                             *(float *)((long)unaff_x19 + 0x4c4) - fVar60;
                        *(float *)(unaff_x19 + 0x9b) = fVar60 + *(float *)(unaff_x19 + 0x9b);
                        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar17 = *(long *)puVar8;
                        }
                        lVar25 = *(long *)(lVar17 + 0xb8);
                        if (*(int *)(lVar25 + 0x7ac) == (int)unaff_x19[0x95]) {
                          if (*(int *)(lVar17 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                          }
                          FUN_0209b778(lVar25 + 0x11f0,&stack0x000008b0,
                                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          memcpy((void *)(*(long *)(lVar17 + 0xb8) + 0x788),&stack0x000008b0,0x378);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (*(long *)(lVar17 + 0xb8) + 0x818,0);
                          lVar17 = *(long *)(*(long *)puVar8 + 0xb8);
                          *(float *)(lVar17 + 0x7bc) = fVar60 + *(float *)(lVar17 + 0x7bc);
                          *(float *)(lVar17 + 0x800) = fVar60 + *(float *)(lVar17 + 0x800);
                          memcpy(&stack0x000001c0,(void *)(lVar17 + 0x788),0x378);
                          FUN_0209b210(lVar17 + 0x11f0,&stack0x000001c0,
                                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                        }
                      }
                    }
                    fVar61 = *(float *)(unaff_x19 + 0x9b);
                    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                    fVar41 = *(float *)((long)unaff_x19 + 0x4cc) - fVar61;
                    fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
                    if (fVar41 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                      fVar60 = fVar41;
                    }
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar60;
                    fVar42 = *(float *)(unaff_x19 + 0x99);
                    if (in_stack_000017e4 == '\0') {
                      in_stack_000017e8 = fVar60;
                    }
                    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                      in_stack_000017e4 = '\x01';
                    }
                    lVar17 = *unaff_x22;
                    if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x50), lVar25 == 0))
                    goto LAB_0354fbf4;
                    uVar13 = *(uint *)(unaff_x19 + 0x95);
                    if (*(uint *)(lVar25 + 0x18) <= uVar13)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar26 = unaff_x19[0x93];
                    lVar32 = lVar25 + (long)(int)uVar13 * 0x5c;
                    *(int *)(lVar32 + 0x34) = (int)lVar26;
                    uVar29 = *(uint *)(unaff_x19 + 0x93);
                    if ((int)lVar26 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                      uVar29 = *(uint *)((long)unaff_x19 + 0x49c);
                    }
                    *(uint *)((long)unaff_x19 + 0x49c) = uVar29;
                    *(uint *)(lVar32 + 0x38) = uVar29;
                    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
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
                    lVar17 = *(long *)(lVar17 + 0x38);
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar17 + 0x18) <= uVar29)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    uVar59 = *(undefined4 *)(lVar17 + (long)(int)uVar29 * (long)iVar38 + 0x11c);
                    lVar25 = lVar25 + (long)(int)uVar13 * 0x5c;
                    *(float *)(lVar25 + 0x70) = fVar41;
                    *(undefined4 *)(lVar25 + 0x6c) = uVar59;
                    lVar17 = *unaff_x22;
                    if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x50), lVar25 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar17 = *(long *)(lVar17 + 0x38);
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar17 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    fVar42 = fVar42 - fVar61;
                    param_3 = (ulong)(uint)fVar42;
                    lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                    *(undefined4 *)(lVar25 + 0x74) =
                         *(undefined4 *)
                          (lVar17 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 +
                          0x128);
                    *(float *)(lVar25 + 0x78) = fVar42;
                    lVar17 = *unaff_x22;
                    if ((lVar17 == 0) || (lVar26 = *(long *)(lVar17 + 0x50), lVar26 == 0))
                    goto LAB_0354fbf4;
                    lVar32 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar25 = lVar26 + lVar32 * 0x5c;
                    *(float *)(lVar25 + 0x44) =
                         *(float *)(lVar25 + 0x74) - fVar56 * in_stack_00000168._4_4_;
                    *(float *)(lVar25 + 0x5c) = in_stack_000000f8._4_4_;
                    if (*(int *)(lVar25 + 0x24) == 1) {
                      *(int *)(lVar26 + lVar32 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                    }
                    if ((*in_stack_00000178 == 0) ||
                       (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
                    lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                    uVar29 = (uint)*(undefined8 *)(lVar25 + 0x18);
                    if (uVar29 <= *(uint *)((long)unaff_x19 + 0x4a4))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if ((*(char *)(lVar25 + lVar40 * unaff_x24 + 0x194) == '\0') &&
                       (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                       uVar29 <= *(uint *)(unaff_x19 + 0x94)))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar26 = lVar26 + lVar32 * 0x5c;
                    fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (fStack00000000000000d4 *
                              (fStack00000000000000d0 +
                              fVar51 + *(float *)(*in_stack_00000178 + 0x1ac)) -
                             *(float *)((long)unaff_x19 + 0x2ac));
                    fVar51 = -fVar60;
                    if ((char)unaff_x19[0x1e] != '\0') {
                      fVar51 = fVar60;
                    }
                    *(float *)(lVar26 + 0x58) =
                         *(float *)(lVar25 + lVar40 * unaff_x24 + 0x144) + fVar51;
                    *(float *)(lVar26 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                    *(float *)(lVar26 + 0x54) = fVar41;
                    *(float *)(lVar26 + 0x48) = fStack000000000000005c + (fVar42 - fVar41);
                    *(float *)(lVar26 + 0x4c) = fVar42;
                    if ((int)in_stack_000017ec < 0x2d) {
                      if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_0358c4f0();
                        lVar17 = unaff_x19[0x6d];
                        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                        iVar11 = (int)unaff_x19[0x95] + 1;
                        *(int *)(unaff_x19 + 0x95) = iVar11;
                        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x50) != 0)) {
                          if (*(int *)(*(long *)(lVar17 + 0x50) + 0x18) <= iVar11) {
                            FUN_0358ca18();
                            lVar17 = unaff_x19[0x6d];
                            if (lVar17 == 0) goto LAB_0354fbf4;
                          }
                          lVar17 = *(long *)(lVar17 + 0x38);
                          if (lVar17 != 0) {
                            if (*unaff_x20 < *(uint *)(lVar17 + 0x18)) {
                              fVar51 = *(float *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x154
                                                 );
                              if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                if ((in_stack_000017ec == 0x2029) ||
                                   (fVar60 = 0.0, in_stack_000017ec == 10)) {
                                  fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
                                }
                                uVar21 = 0;
                                fVar60 = fVar51 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                         in_stack_00000050 *
                                         (in_stack_00000048._4_4_ +
                                         *(float *)((long)unaff_x19 + 700)) +
                                         fStack00000000000000d4 *
                                         (*(float *)(unaff_x19 + 0x57) + fVar60) +
                                         *(float *)(unaff_x19 + 0x9b);
                              }
                              else {
                                if ((in_stack_000017ec == 0x2029) ||
                                   (fVar60 = 0.0, in_stack_000017ec == 10)) {
                                  fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
                                }
                                uVar21 = 1;
                                fVar60 = *(float *)(unaff_x19 + 0x9b) +
                                         *(float *)(unaff_x19 + 0x58) +
                                         fStack00000000000000d4 *
                                         (*(float *)(unaff_x19 + 0x57) + fVar60);
                              }
                              *(float *)(unaff_x19 + 0x9b) = fVar60;
                              *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar21;
                              puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar17 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar17 = *(long *)puVar8;
                              }
                              uVar15 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
                              *(float *)(unaff_x19 + 0x9a) = fVar51;
                              param_3 = NEON_rev64(uVar15,4);
                              unaff_x19[0x99] = param_3;
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
                      if (in_stack_000017ec == 3) {
                        if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                        in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                        uVar33 = 3;
                      }
                    }
                    else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d))
                    goto LAB_0354c4a8;
                  }
LAB_0354c704:
                  uVar13 = *unaff_x20;
                  if (uVar29 <= uVar13)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (*(char *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
                    lVar25 = lVar25 + (long)(int)uVar13 * unaff_x24;
                    uVar49 = *(ulong *)(lVar25 + 0x11c);
                    uVar18 = *(ulong *)(in_stack_00000078 + 0x230);
                    *(ulong *)(in_stack_00000078 + 0x230) =
                         uVar18 ^ (uVar18 ^ uVar49) &
                                  ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) <
                                                   (float)(uVar49 >> 0x20)),
                                            -(uint)((float)uVar18 < (float)uVar49));
                    uVar18 = *(ulong *)(in_stack_00000078 + 0x238);
                    param_3 = *(ulong *)(lVar25 + 0x128);
                    *(ulong *)(in_stack_00000078 + 0x238) =
                         uVar18 ^ (uVar18 ^ param_3) &
                                  ~CONCAT44(-(uint)((float)(param_3 >> 0x20) <
                                                   (float)(uVar18 >> 0x20)),
                                            -(uint)((float)param_3 < (float)uVar18));
                  }
                  if (((int)unaff_x19[0x5c] == 5) &&
                     ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
                    lVar25 = *(long *)(lVar17 + 0x58);
                    if (lVar25 == 0) goto LAB_0354fbf4;
                    iVar11 = (int)unaff_x19[0x96] + 1;
                    if (*(int *)(lVar25 + 0x18) < iVar11) {
                      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8((long *)(lVar17 + 0x58),iVar11,1,
                                   *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                      lVar17 = *unaff_x22;
                      if (lVar17 == 0) goto LAB_0354fbf4;
                    }
                    lVar25 = *(long *)(lVar17 + 0x58);
                    if (lVar25 == 0) goto LAB_0354fbf4;
                    uVar29 = *(uint *)(unaff_x19 + 0x96);
                    lVar26 = (long)(int)uVar29;
                    uVar13 = *(uint *)(lVar25 + 0x18);
                    if (uVar13 <= uVar29)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar32 = lVar25 + lVar26 * 0x14;
                    fVar60 = *(float *)(lVar32 + 0x30);
                    param_3 = (ulong)(uint)fVar60;
                    *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                    fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
                    if (fVar60 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                      fVar51 = fVar60;
                    }
                    *(float *)(lVar32 + 0x30) = fVar51;
                    uVar33 = *(uint *)((long)unaff_x19 + 0x494);
                    if (uVar33 == 0 && uVar29 == 0) {
                      *(uint *)(lVar25 + (ulong)uVar29 * 0x14 + 0x20) = uVar33;
                    }
                    else {
                      uVar30 = uVar33 - 1;
                      if (0 < (int)uVar33) {
                        lVar17 = *(long *)(lVar17 + 0x38);
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar17 + 0x18) <= uVar30)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (uVar29 != *(uint *)(lVar17 + (ulong)uVar30 * (unaff_x24 & 0xffffffff) +
                                               0x68)) {
                          if (uVar29 - 1 < uVar13) {
                            *(uint *)(lVar25 + 0x20 + (long)(int)(uVar29 - 1) * 0x14 + 4) = uVar30;
                            *(uint *)(lVar25 + 0x20 + lVar26 * 0x14) = uVar33;
                            goto LAB_0354c780;
                          }
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        }
                      }
                      if ((float)uVar33 == in_stack_00000080._4_4_) {
                        *(float *)(lVar25 + lVar26 * 0x14 + 0x24) = in_stack_00000080._4_4_;
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
                     (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) &&
                      (in_stack_000017ec != 0xad)))) {
                    if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
                      if (((((0x2bfd < in_stack_000017ec - 0xac01) &&
                            (0xfd < in_stack_000017ec - 0x1101)) &&
                           (0x1d < in_stack_000017ec - 0xa961)) ||
                          (uVar18 = FUN_03597a54(0), (uVar18 & 1) != 0)) &&
                         ((((0xed < in_stack_000017ec - 0xff01 &&
                            (0x1d < in_stack_000017ec - 0xfe31)) &&
                           (0x717d < in_stack_000017ec - 0x2e81)) &&
                          (0x1fd < in_stack_000017ec - 0xf901)))) goto LAB_0354c904;
                      lVar17 = FUN_035978e8(0);
                      if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) goto LAB_0354fbf4;
                      uVar13 = FUN_0219c130(*(long *)(lVar17 + 0x10),&stack0x000008b0,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                      if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
                        in_stack_000008b0 = in_stack_000017ec;
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
                      lVar17 = FUN_035978e8(0);
                      if (((lVar17 == 0) || (*unaff_x22 == 0)) ||
                         (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
                      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20 + 1)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      if (*(long *)(lVar17 + 0x18) == 0) goto LAB_0354fbf4;
                      in_stack_000008b0 =
                           (uint)*(ushort *)
                                  (lVar25 + (long)(int)(*unaff_x20 + 1) * (long)iVar38 + 0x20);
                      uVar18 = FUN_0219c130(*(long *)(lVar17 + 0x18),&stack0x000008b0,
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
                      if ((bStack000000000000006c & 1) == 0 && in_stack_000017ec == 0xad)
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
                    if (((in_stack_000017ec - 0x2007 < 0x29) &&
                        ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x10000000401U) != 0)
                        ) || ((in_stack_000017ec == 0xa0 || (in_stack_000017ec == 0x2060))))
                    goto LAB_0354c87c;
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
                  unaff_d11 = uVar16;
                  in_stack_000017d8 = uVar19;
LAB_03549564:
                  in_stack_000017b8 = in_stack_000017b8 + 1;
                  lVar17 = unaff_x19[0x8f];
                  if (lVar17 != 0) {
                    if ((int)in_stack_000017b8 < (int)*(uint *)(lVar17 + 0x18)) {
                      if (*(uint *)(lVar17 + 0x18) <= in_stack_000017b8)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      in_stack_000017ec =
                           *(uint *)(lVar17 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
                      if (in_stack_000017ec == 0) goto LAB_0354cf48;
                      if (5 < in_stack_00000180) {
                        uVar19 = FUN_0276793c(&stack0x000017ec,0);
                        uVar15 = FUN_0276793c(&stack0x000017b8,0);
                        uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar19,
                                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar15,0
                                             );
                        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                        }
                        FUN_0367ae18(uVar19,0);
                        in_stack_000017d8 = CONCAT44(3,*unaff_x20);
                      }
                      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') &&
                         (in_stack_000017ec == 0x3c)) goto code_r0x035492f0;
                      if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0))
                      {
                        if (*unaff_x20 < *(uint *)(lVar17 + 0x18)) {
                          lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
                          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar17 + 0x2c);
                          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar17 + 0x58);
                          unaff_x19[0x20] = *(long *)(lVar17 + 0x38);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (unaff_x21);
                          goto LAB_03549378;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
LAB_0354cf48:
                    fVar51 = (float)param_3;
                    if (((char)unaff_x19[0x47] != '\0') &&
                       (fVar51 = DAT_00d389f8,
                       DAT_00d389f8 <
                       *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                      fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
                      fVar60 = *(float *)((long)unaff_x19 + 0x254);
                      if ((fVar51 < fVar60) &&
                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                        if (*(float *)((long)unaff_x19 + 0x2d4) <
                            *(float *)(unaff_x19 + 0x5a) / 100.0) {
                          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                        }
                        fVar41 = (*(float *)((long)unaff_x19 + 0x23c) - fVar51) * 0.5;
                        if (fVar41 <= DAT_00d38b84) {
                          fVar41 = DAT_00d38b84;
                        }
                        *(float *)(unaff_x19 + 0x48) = fVar51;
                        fVar41 = (fVar51 + fVar41) * 20.0 + 0.5;
                        fVar51 = DAT_00d38e60;
                        if (fVar41 != INFINITY) {
                          fVar51 = (float)(int)fVar41 / 20.0;
                        }
                        if (fVar60 <= fVar51) {
                          fVar51 = fVar60;
                        }
                        goto LAB_0354d004;
                      }
                    }
                    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                      uVar19 = FUN_0276793c(in_stack_00000038,0);
                      uVar15 = FUN_0277fa90(_fStack0000000000000040,0);
                      uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar19,
                                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar15,0);
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
                    lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar17 = *(long *)puVar8;
                    }
                    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
                    lVar17 = **(long **)(lVar17 + 0xb8);
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    iVar38 = *(int *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54)
                             << 2;
                    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0))
                    goto LAB_0354fbf4;
                    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    if (*(int *)(lVar17 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    FUN_035968e8(lVar17 + 0x20,0,0);
                    if (DAT_0411f172 == '\0') {
                      FUN_01ab69ac(PTR_DAT_03cbded8);
                      DAT_0411f172 = '\x01';
                    }
                    iVar11 = (int)unaff_x19[0x4e];
                    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                    uStack00000000000000f0 =
                         *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                    lVar17 = unaff_x19[0xeb];
                    in_stack_000000b8 = (long *)uStack00000000000000f0;
                    fStack00000000000000c4 = in_stack_000000f8._4_4_;
                    if (iVar11 < 0x401) {
                      if (iVar11 == 0x100) {
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar17 + 0x18) < 2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar19 = *(undefined8 *)(lVar17 + 0x30);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*unaff_x22 == 0) ||
                             (lVar25 = *(long *)(*unaff_x22 + 0x58), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000034)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fVar51 = *(float *)(lVar25 + (long)(int)uStack0000000000000034 * 0x14 +
                                             0x28);
                        }
                        else {
                          fVar51 = *(float *)(unaff_x19 + 0x97);
                        }
                        fStack00000000000000c4 =
                             fStack0000000000000028 + 0.0 + *(float *)(lVar17 + 0x2c);
                        fVar51 = (0.0 - fVar51) - fStack000000000000001c;
                      }
                      else if (iVar11 == 0x200) {
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        if ((*(int *)(lVar17 + 0x18) == 1) || (*(int *)(lVar17 + 0x18) == 0))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fStack00000000000000c4 =
                             (*(float *)(lVar17 + 0x20) + *(float *)(lVar17 + 0x2c)) * 0.5;
                        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar17 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20)) *
                                          0.5,((float)*(undefined8 *)(lVar17 + 0x24) +
                                              (float)*(undefined8 *)(lVar17 + 0x30)) * 0.5);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*unaff_x22 == 0) ||
                             (lVar17 = *(long *)(*unaff_x22 + 0x58), lVar17 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar17 + 0x18) <= uStack0000000000000034)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar17 = lVar17 + (long)(int)uStack0000000000000034 * 0x14;
                          fStack00000000000000c4 =
                               fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                          fVar51 = ((fStack000000000000001c + *(float *)(lVar17 + 0x28) +
                                    *(float *)(lVar17 + 0x30)) - fStack0000000000000020) * -0.5 +
                                   0.0;
                        }
                        else {
                          fStack00000000000000c4 =
                               fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                          fVar51 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) +
                                    in_stack_000017e8) - fStack0000000000000020) * -0.5 + 0.0;
                        }
                      }
                      else {
                        if (iVar11 != 0x400) goto LAB_0354d620;
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        if (*(int *)(lVar17 + 0x18) == 0)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar19 = *(undefined8 *)(lVar17 + 0x24);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*unaff_x22 == 0) ||
                             (lVar25 = *(long *)(*unaff_x22 + 0x58), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000034)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          in_stack_000017e8 =
                               *(float *)(lVar25 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
                        }
                        fStack00000000000000c4 =
                             fStack0000000000000028 + 0.0 + *(float *)(lVar17 + 0x20);
                        fVar51 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
                      }
LAB_0354d610:
                      in_stack_000000b8 =
                           (long *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,
                                            (float)uVar19 + fVar51);
                    }
                    else if (iVar11 == 0x800) {
                      if (lVar17 == 0) goto LAB_0354fbf4;
                      if ((*(int *)(lVar17 + 0x18) == 1) || (*(int *)(lVar17 + 0x18) == 0))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fVar51 = fStack0000000000000028 + 0.0 +
                               (*(float *)(lVar17 + 0x20) + *(float *)(lVar17 + 0x2c)) * 0.5;
                      in_stack_000000b8 =
                           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar17 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20)
                                            ) * 0.5 + 0.0,
                                            ((float)*(undefined8 *)(lVar17 + 0x24) +
                                            (float)*(undefined8 *)(lVar17 + 0x30)) * 0.5 + 0.0);
                      fStack00000000000000c4 = fVar51;
                    }
                    else {
                      if (iVar11 == 0x1000) {
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        if ((*(int *)(lVar17 + 0x18) != 1) && (*(int *)(lVar17 + 0x18) != 0)) {
                          uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar17 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar17 + 0x24) +
                                                    (float)*(undefined8 *)(lVar17 + 0x30)) * 0.5);
                          fStack00000000000000c4 =
                               fStack0000000000000028 + 0.0 +
                               (*(float *)(lVar17 + 0x20) + *(float *)(lVar17 + 0x2c)) * 0.5;
                          fVar51 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) *
                                         0.5;
                          goto LAB_0354d610;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      if (iVar11 == 0x2000) {
                        if (lVar17 == 0) goto LAB_0354fbf4;
                        if ((*(int *)(lVar17 + 0x18) == 1) || (*(int *)(lVar17 + 0x18) == 0))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar51 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) -
                                        fStack000000000000001c) - fStack0000000000000020) * 0.5;
                        in_stack_000000b8 =
                             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar17 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
                                              ((float)*(undefined8 *)(lVar17 + 0x24) +
                                              (float)*(undefined8 *)(lVar17 + 0x30)) * 0.5 + fVar51)
                        ;
                        fStack00000000000000c4 =
                             fStack0000000000000028 + 0.0 +
                             (*(float *)(lVar17 + 0x20) + *(float *)(lVar17 + 0x2c)) * 0.5;
                      }
                    }
LAB_0354d620:
                    lVar17 = FUN_03559490();
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    FUN_036df824(lVar17,0);
                    *(float *)((long)unaff_x19 + 0x6e4) = fVar51;
                    uVar59 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                    }
                    if (DAT_0412df1c == '\0') {
                      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                      DAT_0412df1c = '\x01';
                    }
                    puVar8 = OVRPlugin_Mesh_TypeInfo;
                    lVar17 = *(long *)OVRPlugin_Mesh_TypeInfo;
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar17 = *(long *)puVar8;
                    }
                    puVar24 = *(undefined4 **)(lVar17 + 0xb8);
                    FUN_035683a4(*puVar24,puVar24[1],puVar24[2],puVar24[3],&stack0x000017c0,
                                 0x4000ffff,0);
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar17 = *unaff_x22;
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    uVar10 = *unaff_x20;
                    if ((int)uVar10 < 1) {
                      iStack00000000000000d8 = 0;
                      iVar38 = 0;
                      goto LAB_0354f7f4;
                    }
                    lVar17 = *(long *)(lVar17 + 0x38);
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    bVar9 = false;
                    bVar7 = false;
                    bVar5 = false;
                    fStack0000000000000124 = 0.0;
                    bVar6 = false;
                    iStack00000000000000d8 = 0;
                    uStack0000000000000030 = 0;
                    in_stack_00000168._4_4_ = 0.0;
                    fStack000000000000005c = 0.0;
                    lVar25 = 0x2e0;
                    fVar41 = 0.0;
                    fVar60 = 0.0;
                    fStack00000000000000d0 = fStack00000000000000e0;
                    fStack00000000000000d4 = fStack00000000000000e4;
                    _bStack0000000000000068 = fStack00000000000000e4;
                    fStack0000000000000104 =
                         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                   0x15a8);
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
                  goto LAB_0354fbf4;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0354fbf4;
code_r0x035492f0:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar16 = FUN_03586568();
  if (((uVar16 & 1) != 0) &&
     (in_stack_000017b8 = in_stack_0000179c, uVar10 = in_stack_000017ec,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x38), lVar17 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  if (*(uint *)(lVar17 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = (long)(int)uVar10;
  unaff_w26 = (uint)*(byte *)(lVar17 + lVar25 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  unaff_w27 = (undefined4)unaff_x19[0x24];
  if ((uint)in_stack_000017d8 == uVar10) {
    in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017ec == 0x2026) {
      *(long *)(lVar17 + lVar25 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x38), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = lVar17 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar17 + 0x2c) = 0;
      *(long *)(lVar17 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x38), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
      goto LAB_0354fbf4;
      uVar10 = *unaff_x20;
      if (*(uint *)(lVar17 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      unaff_w23 = 1;
      *(int *)(lVar17 + (long)(int)uVar10 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017d8 = CONCAT44(3,uVar10 + 1);
    }
    else if (in_stack_000017ec == 3) {
      if ((*unaff_x21 == 0) || (lVar26 = FUN_03568ac0(*unaff_x21,0), lVar26 == 0))
      goto LAB_0354fbf4;
      FUN_0219b634(lVar26,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar17 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(ulong *)(lVar17 + lVar25 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,in_stack_000008b0)
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
  if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar17 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar17 = lVar17 + (long)(int)uVar10 * (long)iVar38;
    *(undefined1 *)(lVar17 + 0x194) = 0;
    *(undefined2 *)(lVar17 + 0x20) = 0x200b;
    *(undefined4 *)(lVar17 + 100) = 0;
    *unaff_x20 = uVar10 + 1;
    uVar10 = in_stack_000017ec;
    goto LAB_03549564;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar11 == 0) {
    uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        in_stack_00000150 = 1.0;
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b812c(in_stack_000017ec,0);
          if ((uVar16 & 1) != 0) {
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
        uVar16 = FUN_026b8070(in_stack_000017ec,0);
        in_stack_00000150 = 1.0;
        if ((uVar16 & 1) != 0) {
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
      uVar16 = FUN_026b812c(in_stack_000017ec,0);
      in_stack_00000150 = 1.0;
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
        in_stack_00000150 = 1.0;
        in_stack_000017ec = uVar10 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
  }
  else {
    in_stack_00000150 = 1.0;
  }
  if (iVar11 != 0) goto LAB_03549594;
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *_iStack00000000000000d8 = *(long *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
  uVar10 = in_stack_000017ec;
  if (*_iStack00000000000000d8 == 0) goto LAB_03549564;
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *unaff_x21 = *(long *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *in_stack_00000170 = *(long *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  uVar12 = *unaff_x20;
  uVar10 = *(uint *)(lVar17 + 0x18);
  if (uVar10 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar17 + (long)(int)uVar12 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 != 0) {
    lVar25 = unaff_x19[0x8f];
    if (lVar25 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= in_stack_000017b8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(int *)(lVar25 + (long)(int)in_stack_000017b8 * 0xc + 0x20) == 10) &&
       (uVar12 != *(uint *)(unaff_x19 + 0x93))) {
      if (uVar10 <= uVar12 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      fVar51 = *(float *)(lVar17 + (long)(int)(uVar12 - 1) * (long)iVar38 + 0x60);
      iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar17 = *unaff_x21;
      goto joined_r0x0354b5c4;
    }
  }
  if (*unaff_x21 == 0) goto LAB_0354fbf4;
  fVar51 = *(float *)(unaff_x19 + 0x3d);
  iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
  lVar17 = unaff_x19[0x20];
joined_r0x0354b5c4:
  if (lVar17 == 0) goto LAB_0354fbf4;
  fVar41 = (float)FUN_03776960(lVar17 + 0x50,0);
  fVar60 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar60 = 1.0;
  }
  uVar59 = 0;
  fStack0000000000000124 = 0.0;
  if ((unaff_w23 & in_stack_000017ec == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_0354fbf4;
    fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_0354fbf4;
    uVar59 = FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar17 = unaff_x19[0xc9];
  if (lVar17 == 0) goto LAB_0354fbf4;
  _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar59);
  if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0354fbf4;
  fVar56 = *(float *)((long)unaff_x19 + 0x404);
  fVar42 = *(float *)(lVar17 + 0x2c);
  fVar61 = (float)FUN_03776ea8(*(long *)(lVar17 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_0354fbf4;
  fVar44 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_0354fbf4;
  fVar57 = *(float *)((long)unaff_x19 + 0x404);
  fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar17 = unaff_x19[0x6d];
  if ((lVar17 == 0) || (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar25 + 0x2c) = 0;
  fVar60 = ((in_stack_00000150 * fVar51) / (float)iVar11) * fVar41 * fVar60;
  fVar61 = fVar60 * fVar56 * fVar42 * fVar61;
  unaff_d11 = (ulong)(uint)fVar61;
  *(float *)(lVar25 + 0x160) = fVar61;
  uVar10 = *(uint *)(unaff_x19 + 0x24);
  fVar45 = fVar60 * fVar44 * fVar57 * fVar45;
  if (uVar10 == 0) {
    in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
    goto LAB_03549e30;
  }
  lVar25 = unaff_x19[0xe1];
  if (lVar25 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = *(long *)(lVar25 + (long)(int)uVar10 * 8 + 0x20);
  if (lVar25 == 0) goto LAB_0354fbf4;
  in_stack_00000168._4_4_ = *(float *)(lVar25 + 0x54);
  goto LAB_03549e30;
LAB_03549594:
  if (iVar11 == 1) {
    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar17 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_000000b8 = *(long *)(lVar17 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x22 == 0) goto LAB_0354fbf4;
    param_1 = *(long *)(*unaff_x22 + 0x38);
    goto code_r0x035495dc;
  }
  lVar17 = *unaff_x22;
  fVar45 = 0.0;
  fVar51 = fVar45;
  if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
    fVar51 = (float)unaff_d11;
  }
  uVar16 = (ulong)(uint)fVar51;
  if (lVar17 == 0) goto LAB_0354fbf4;
  _fStack0000000000000120 = 0;
  uVar19 = in_stack_000017d8;
  goto UnityEngine_AndroidJNISafe__ToSByteArray;
LAB_0354d7c0:
  uVar10 = uVar23 - 1;
  if (*(uint *)(lVar17 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
  lVar40 = (long)(int)uVar10;
  lVar32 = lVar17 + lVar40 * 0x178;
  uVar2 = *(uint *)(lVar32 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar2)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar34 = *(long *)(lVar32 + 0x38);
  lVar37 = (long)(int)uVar2;
  lVar26 = lVar26 + lVar37 * 0x5c;
  uVar13 = *(uint *)(lVar26 + 0x68);
  uVar30 = (uint)*(ushort *)(lVar32 + 0x20);
  uVar29 = *(uint *)(lVar26 + 0x3c);
  iVar3 = *(int *)(lVar26 + 0x20);
  iVar11 = *(int *)(lVar26 + 0x28);
  iVar14 = *(int *)(lVar26 + 0x2c);
  fVar42 = *(float *)(lVar26 + 0x4c);
  uVar33 = *(uint *)(lVar26 + 0x40);
  fVar57 = *(float *)(lVar26 + 0x54);
  fVar61 = *(float *)(lVar26 + 0x58);
  fVar55 = *(float *)(lVar26 + 0x5c);
  fVar45 = *(float *)(lVar26 + 0x60);
  fVar43 = *(float *)(lVar26 + 0x6c);
  fVar46 = *(float *)(lVar26 + 0x70);
  fVar56 = *(float *)(lVar26 + 0x74);
  fVar44 = *(float *)(lVar26 + 0x78);
  if ((int)uVar13 < 9) {
    switch(uVar13) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar45 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar61;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar45 + fVar55 * 0.5) - fVar61 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar55 + fVar45) - fVar61;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar55 + fVar45;
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
      if ((uVar30 != 3) && (uVar30 != 10)) {
FUN_0354d8fc:
        if (*(uint *)(lVar17 + 0x18) <= uVar29)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar17 + (long)(int)uVar29 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b8cc4(uVar4,0);
        if ((uVar16 & 1) == 0) {
          bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar61 <= fVar55) && (!bVar1 && uVar13 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar45;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar55 + fVar45;
          }
          goto LAB_0354d9d8;
        }
        if (((uVar23 == 1) || (uVar2 != uVar12)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar45;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar55 + fVar45;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar30,0);
          uStack00000000000000f0 = 0;
        }
        else {
          cVar22 = (char)unaff_x19[0x1e];
          fVar45 = -fVar61;
          if (cVar22 != '\0') {
            fVar45 = fVar61;
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar29)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar14 = (int)*(char *)(lVar17 + (long)(int)uVar29 * 0x178 + 0x194) +
                   (-iVar3 - (uStack0000000000000030 & 1)) + iVar14 + -1;
          if (iVar14 < 1) {
            fVar61 = 1.0;
            iVar14 = 1;
          }
          else {
            fVar61 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar30 == 9) {
LAB_0354f76c:
            fVar61 = 1.0 - fVar61;
          }
          else {
            if (uVar30 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_026b97f8(uVar30,0);
              cVar22 = (char)unaff_x19[0x1e];
              if ((uVar16 & 1) != 0) goto LAB_0354f76c;
            }
            iVar14 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar11;
          }
          fVar61 = ((fVar55 + fVar45) * fVar61) / (float)iVar14;
          if (cVar22 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar61;
            uStack00000000000000f0 =
                 CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                          (float)uStack00000000000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar61;
          }
        }
      }
    }
    else if (((uVar30 != 0xad) && (uVar30 != 0x200b)) && (uVar30 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar13 == 0x20) {
    fVar61 = fVar43 + fVar56;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar13 = (uint)*(undefined8 *)(lVar17 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar17 + lVar40 * 0x178;
  fVar45 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar61 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar55 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar11 = *(int *)(lVar17 + lVar40 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0354e05c;
  fVar41 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar32 = lVar17 + lVar40 * 0x178;
    *(undefined4 *)(lVar32 + 0x84) = 0;
    *(undefined4 *)(lVar32 + 0xac) = 0;
    *(undefined4 *)(lVar32 + 0xd4) = 0x3f800000;
    fVar41 = 1.0;
    break;
  case 1:
    fVar44 = *(float *)(lVar17 + lVar40 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar32 = lVar17 + lVar40 * 0x178;
      fVar56 = (in_stack_000000f8._4_4_ + fVar44) - *(float *)(in_stack_00000078 + 0x230);
      fVar44 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar32 = lVar17 + lVar40 * 0x178;
    fVar56 = fVar56 - fVar43;
    *(float *)(lVar32 + 0x84) = fVar41 + (fVar44 - fVar43) / fVar56;
    *(float *)(lVar32 + 0xac) = fVar41 + (*(float *)(lVar32 + 0x98) - fVar43) / fVar56;
    *(float *)(lVar32 + 0xd4) = fVar41 + (*(float *)(lVar32 + 0xc0) - fVar43) / fVar56;
    fVar41 = fVar41 + (*(float *)(lVar32 + 0xe8) - fVar43) / fVar56;
    break;
  case 2:
    lVar32 = lVar17 + lVar40 * 0x178;
    fVar44 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar56 = (in_stack_000000f8._4_4_ + *(float *)(lVar32 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar32 + 0x84) = fVar41 + fVar56 / fVar44;
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
      lVar32 = lVar17 + lVar40 * 0x178;
      *(undefined4 *)(lVar32 + 0x88) = 0;
      *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xd8) = 0;
      *(undefined4 *)(lVar32 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar32 = lVar17 + lVar40 * 0x178;
      fVar44 = fVar44 - fVar46;
      fVar56 = fVar41 + (*(float *)(lVar32 + 0x74) - fVar46) / fVar44;
      fVar44 = fVar41 + (*(float *)(lVar32 + 0x9c) - fVar46) / fVar44;
      *(float *)(lVar32 + 0x88) = fVar56;
      *(float *)(lVar32 + 0xb0) = fVar44;
      *(float *)(lVar32 + 0xd8) = fVar56;
      *(float *)(lVar32 + 0x100) = fVar44;
      break;
    case 2:
      lVar32 = lVar17 + lVar40 * 0x178;
      fVar56 = fVar41 + (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar32 + 0x88) = fVar56;
      fVar44 = *(float *)(unaff_x19 + 0x9c);
      fVar43 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar32 + 0xd8) = fVar56;
      fVar56 = fVar41 + (*(float *)(lVar32 + 0x9c) - fVar44) / (fVar43 - fVar44);
      *(float *)(lVar32 + 0xb0) = fVar56;
      *(float *)(lVar32 + 0x100) = fVar56;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar13 = (uint)*(undefined8 *)(lVar17 + 0x18);
    }
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar17 + lVar40 * 0x178;
    fVar56 = *(float *)(lVar32 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar32 + 0x88) + *(float *)(lVar32 + 0xb0)) * fVar56) * 0.5;
    fVar43 = fVar41 + *(float *)(lVar32 + 0x88) * fVar56 + fVar44;
    fVar41 = fVar41 + fVar44 + *(float *)(lVar32 + 0xb0) * fVar56;
    *(float *)(lVar32 + 0x84) = fVar43;
    *(float *)(lVar32 + 0xac) = fVar43;
    *(float *)(lVar32 + 0xd4) = fVar41;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar17 + lVar40 * 0x178 + 0xfc) = fVar41;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar17 + lVar40 * 0x178;
    *(undefined4 *)(lVar32 + 0x88) = 0;
    *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar32 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar32 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar13) {
      lVar32 = lVar17 + lVar40 * 0x178;
      fVar42 = fVar42 - fVar57;
      fVar41 = (*(float *)(lVar32 + 0x74) - fVar57) / fVar42;
      fVar42 = (*(float *)(lVar32 + 0x9c) - fVar57) / fVar42;
      *(float *)(lVar32 + 0x88) = fVar41;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar17 + lVar40 * 0x178;
    fVar41 = (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar32 + 0x88) = fVar41;
    fVar42 = (*(float *)(lVar32 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar32 + 0xb0) = fVar42;
    *(float *)(lVar32 + 0xd8) = fVar42;
    *(float *)(lVar32 + 0x100) = fVar41;
    break;
  case 3:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar17 + lVar40 * 0x178;
    fVar42 = *(float *)(lVar32 + 0x15c);
    fVar56 = (1.0 - (*(float *)(lVar32 + 0x84) + *(float *)(lVar32 + 0xd4)) / fVar42) * 0.5;
    fVar41 = *(float *)(lVar32 + 0x84) / fVar42 + fVar56;
    fVar56 = fVar56 + *(float *)(lVar32 + 0xd4) / fVar42;
    *(float *)(lVar32 + 0x88) = fVar41;
    *(float *)(lVar32 + 0xb0) = fVar56;
    *(float *)(lVar32 + 0x100) = fVar41;
    *(float *)(lVar32 + 0xd8) = fVar56;
  }
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar17 + lVar40 * 0x178;
  fVar41 = ABS(fVar51) * *(float *)(lVar32 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar32 + 0x5c) == '\0') && ((*(byte *)(lVar17 + lVar40 * 0x178 + 400) & 1) != 0)) {
    fVar41 = -fVar41;
  }
  lVar32 = lVar17 + lVar40 * 0x178;
  fVar42 = *(float *)(lVar32 + 0x88);
  fVar44 = *(float *)(lVar32 + 0x84);
  fVar56 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar56 = (float)(int)fVar44;
  }
  fVar43 = *(float *)(lVar32 + 0xd4);
  fVar46 = *(float *)(lVar32 + 0xd8);
  fVar57 = -2.1474836e+09;
  if (fVar42 != INFINITY) {
    fVar57 = (float)(int)fVar42;
  }
  uVar48 = FUN_03591d3c(fVar44 - fVar56,fVar42 - fVar57);
  *(undefined4 *)(lVar32 + 0x84) = uVar48;
  if (*(uint *)(lVar17 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar46 = fVar46 - fVar57;
  *(float *)(lVar32 + 0x88) = fVar41;
  uVar48 = FUN_03591d3c(fVar44 - fVar56,fVar46);
  *(undefined4 *)(lVar17 + lVar40 * 0x178 + 0xac) = uVar48;
  if (*(uint *)(lVar17 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar43 = fVar43 - fVar56;
  *(float *)(lVar17 + lVar40 * 0x178 + 0xb0) = fVar41;
  fVar56 = (float)FUN_03591d3c(fVar43,fVar46);
  *(float *)(lVar32 + 0xd4) = fVar56;
  if (*(uint *)(lVar17 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar32 + 0xd8) = fVar41;
  uVar48 = FUN_03591d3c(fVar43,fVar42 - fVar57);
  *(undefined4 *)(lVar17 + lVar40 * 0x178 + 0xfc) = uVar48;
  uVar13 = (uint)*(undefined8 *)(lVar17 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar17 + lVar40 * 0x178 + 0x100) = fVar41;
LAB_0354e05c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar26 = lVar17 + lVar40 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar55 + *(float *)(lVar26 + 0x78);
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar55 + *(float *)(lVar26 + 0xa0);
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar55 + *(float *)(lVar26 + 200);
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar55 + *(float *)(lVar26 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar13) {
        if (*(uint *)(lVar17 + lVar40 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
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
    uVar13 = *(uint *)(lVar17 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar32 = lVar17 + lVar40 * 0x178;
  *(undefined8 *)(lVar32 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar32 + 0x78) = uVar48;
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar32 = lVar17 + lVar40 * 0x178;
  *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar32 + 0xa0) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar32 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar32 + 200) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar32 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar32 + 0xf0) = uVar48;
  *(undefined1 *)(lVar26 + 0x194) = 0;
LAB_0354e184:
  if (iVar11 == 0) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar28)();
  }
  else if (iVar11 == 1) {
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
       CONCAT44(fVar61 + (float)((ulong)uVar19 >> 0x20),fVar45 + (float)uVar19);
  *(float *)(lVar26 + 0x124) = fVar55 + *(float *)(lVar26 + 0x124);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar40 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar55 + *(float *)(lVar26 + 0x118);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar40 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar55 + *(float *)(lVar26 + 0x130);
  if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar40 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar45 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *unaff_x22;
  if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  uVar13 = *(uint *)(lVar32 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar32 + lVar40 * 0x178;
  *(float *)(lVar35 + 0x150) = fVar61 + *(float *)(lVar35 + 0x150);
  *(ulong *)(lVar35 + 0x140) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar35 + 0x140));
  *(ulong *)(lVar35 + 0x148) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar35 + 0x148));
  if (uVar2 == uVar12) {
    uVar12 = *unaff_x20 - 1;
    if (uVar10 == uVar12) goto LAB_0354e3ec;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar35 = (long)(int)uVar12;
    lVar36 = lVar26 + lVar35 * 0x5c;
    fVar56 = fVar61 + *(float *)(lVar36 + 0x54);
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar56;
    *(float *)(lVar36 + 0x58) = fVar45 + *(float *)(lVar36 + 0x58);
    if (uVar13 <= *(uint *)(lVar36 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar48 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar35 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar56;
    *(undefined4 *)(lVar26 + 0x6c) = uVar48;
    lVar26 = *unaff_x22;
    if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar32 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar32 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar32 + lVar35 * 0x5c;
    *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar12 * 0x178 + 0x128);
    *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
    uVar12 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar10 == uVar12) {
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar32 + lVar37 * 0x5c;
      fVar56 = fVar61 + *(float *)(lVar35 + 0x54);
      *(ulong *)(lVar35 + 0x4c) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar35 + 0x4c));
      *(float *)(lVar35 + 0x54) = fVar56;
      *(float *)(lVar35 + 0x58) = fVar45 + *(float *)(lVar35 + 0x58);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar35 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar48 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar32 = lVar32 + lVar37 * 0x5c;
      *(float *)(lVar32 + 0x70) = fVar56;
      *(undefined4 *)(lVar32 + 0x6c) = uVar48;
      lVar26 = *unaff_x22;
      if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar32 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar32 + lVar37 * 0x5c;
      *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar12 * 0x178 + 0x128);
      *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar16 = FUN_026b82c4(uVar30,0);
  if (((((uVar16 & 1) == 0) && (1 < uVar30 - 0x2010)) && (uVar30 != 0xad)) && (uVar30 != 0x2d)) {
    if (bVar5) {
      if (((uVar23 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar17 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar30 == 0x2019 || (uVar30 == 0x27)))))) {
        if (*(uint *)(lVar17 + 0x18) <= uVar23 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar17 + lVar25 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b82c4(uVar4,0);
        if ((uVar16 & 1) != 0) {
          if (*(uint *)(lVar17 + 0x18) <= uVar23)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar17 + lVar25 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b82c4(uVar4,0);
          if ((uVar16 & 1) != 0) goto LAB_0354e610;
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
      uVar16 = FUN_026b81f8(uVar30,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b63d8(uVar30,0);
        if (((uVar30 != 0x200b) && ((uVar16 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b82c4(uVar30,0);
      iVar11 = (int)fStack0000000000000124;
      if ((uVar16 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar11 = uVar23 - 2;
    }
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
      FUN_01ff025c((long *)(lVar26 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
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
    *(int *)(lVar26 + 0x2c) = iVar11;
    *(int *)(lVar26 + 0x30) = (iVar11 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar26 = unaff_x19[0x6d];
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar32 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar32 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar32 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar32 + lVar37 * 0x5c;
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
      iVar11 = *(int *)(lVar32 + 0x18);
      if (iVar11 < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
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
      lVar32 = lVar32 + lVar37 * 0x5c;
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
      uVar48 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      uVar50 = *(undefined4 *)(lVar26 + lVar25 + -0x2f8);
LAB_0354ebc0:
      pcVar28 = *(code **)(lVar32 + 0x8d8);
LAB_0354ebc8:
      (*pcVar28)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar48,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar50);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar8;
      }
LAB_0354ec1c:
      fVar60 = 0.0;
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
    iVar11 = *(int *)(lVar26 + 0x68);
    *(int *)(lVar26 + 0x16c) = iVar38;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
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
      if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar56 = *(float *)(lVar32 + lVar40 * 0x178 + 0x160);
      if (fVar60 <= fVar56) {
        fVar60 = fVar56;
      }
      if (fStack0000000000000100 <= ABS(fVar41)) {
        fStack0000000000000100 = ABS(fVar41);
      }
      if ((float)iVar11 != fStack000000000000005c) {
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
      fVar42 = *(float *)(lVar26 + lVar40 * 0x178 + 0x14c);
      fVar56 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar42 = fVar42 + fVar60 * fVar56;
      fStack000000000000005c = (float)iVar11;
      if (fVar42 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar42;
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
        uVar16 = FUN_026b97f8(uVar30,0);
        if ((uVar16 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar40 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar26 + 0x160);
      fStack0000000000000070 = *(float *)(lVar26 + 0x11c);
      bVar9 = fVar60 != 0.0;
      fVar56 = in_stack_00000080._4_4_;
      if (bVar9) {
        fVar56 = fVar60;
      }
      fVar60 = fVar56;
      uVar59 = *(undefined4 *)(lVar26 + 0x168);
      _bStack000000000000006c = 0;
      fVar56 = fVar41;
      if (bVar9) {
        fVar56 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar56;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        if (uVar10 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar40 * 0x178;
          lVar32 = *unaff_x19;
          uVar48 = *(undefined4 *)(lVar26 + 0x128);
          uVar50 = *(undefined4 *)(lVar26 + 0x160);
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
      uVar16 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        lVar32 = lVar40;
        uVar12 = uVar10;
        if (uVar30 == 0x200b || (uVar16 & 1) != 0) {
          lVar32 = (long)(int)uVar33;
          uVar12 = uVar33;
        }
        if (uVar12 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar32 * 0x178;
          uVar48 = *(undefined4 *)(lVar26 + 0x128);
          uVar50 = *(undefined4 *)(lVar26 + 0x160);
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
      uVar16 = FUN_03567ad8(uVar59,*(undefined4 *)(lVar26 + lVar25),0);
      if ((uVar16 & 1) == 0) {
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
  if (lVar34 == 0) goto LAB_0354fbf4;
  uVar12 = *(uint *)(lVar26 + lVar40 * 0x178 + 400);
  fVar56 = (float)FUN_03776a30(lVar34 + 0x50,0);
  if ((uVar12 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar23 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar48 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      fVar61 = *(float *)(lVar26 + lVar25 + -0x30c);
      pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar28)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar48,
                 fStack00000000000000a8 * fVar56 + fVar61,0,fStack00000000000000a8,
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
    *(int *)(lVar32 + lVar40 * 0x178 + 0x174) = iVar38;
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
        uVar16 = FUN_026b97f8(uVar30,0);
        if ((uVar16 & 1) != 0) goto LAB_0354ed84;
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
      fStack000000000000009c = fVar56 * fStack00000000000000a8 + fStack0000000000000040;
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
          uVar48 = *(undefined4 *)(lVar26 + 0x128);
          fVar61 = *(float *)(lVar26 + 0x14c);
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
      uVar16 = FUN_026b63d8(uVar30,0);
      if ((*unaff_x22 != 0) && (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 != 0)) {
        uVar12 = *(uint *)(lVar26 + 0x18);
        if (uVar30 == 0x200b || (uVar16 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar32 = lVar40;
        if (uVar10 < uVar12) {
LAB_0354f1f8:
          lVar26 = lVar26 + lVar32 * 0x178;
          fVar61 = *(float *)(lVar26 + 0x14c);
          uVar48 = *(undefined4 *)(lVar26 + 0x128);
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
          if (*(float *)(lVar32 + lVar25 + -0x108) == in_stack_00000048._4_4_) {
            fVar42 = *(float *)(lVar32 + lVar25 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_03567bac(fVar61 + fVar42,fStack0000000000000040,0);
            if ((uVar16 & 1) != 0) {
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
      iVar11 = FUN_036d3364(lVar34,0);
      if (*(uint *)(lVar17 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar17 + lVar25 + -0x130);
      if (lVar26 == 0) goto LAB_0354fbf4;
      iVar14 = FUN_036d3364(lVar26,0);
      if (iVar11 != iVar14) {
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
          uVar48 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
          fVar61 = *(float *)(lVar26 + lVar25 + -0x30c);
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
      fVar56 = *(float *)(lVar26 + 0x128);
      fVar57 = *(float *)(lVar26 + 0x188);
      uVar15 = *(undefined8 *)(lVar26 + 0x17c);
      fVar55 = *(float *)(lVar26 + 0x184);
      uVar19 = *(undefined8 *)(lVar26 + 0x184);
      fVar43 = *(float *)(lVar26 + 0x18c);
      fVar61 = *(float *)(lVar26 + 0x11c);
      fVar42 = *(float *)(lVar26 + 0x148);
      fVar44 = *(float *)(lVar26 + 0x150);
      in_stack_00000188 = uVar15;
      fStack0000000000000190 = fVar55;
      fStack0000000000000194 = fVar57;
      in_stack_00000198 = fVar43;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar16 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar16 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar56 = fVar56 + (float)in_stack_000017c8;
        fVar61 = fVar61 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar42 = fVar42 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar61 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar61;
        }
        if (fVar44 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar44 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar56) {
          fStack00000000000000d0 = fVar56;
        }
        if (fStack00000000000000d4 <= fVar42) {
          fStack00000000000000d4 = fVar42;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar61 = (fVar61 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar44 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar44;
        }
        if (fStack00000000000000d4 <= fVar42) {
          fStack00000000000000d4 = fVar42;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar61,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar44 - fVar43;
        fStack00000000000000d0 = fVar56 + fVar55;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar42 + fVar57;
        fStack00000000000000e0 = fVar61;
        in_stack_000017c0 = uVar15;
        in_stack_000017c8 = uVar19;
        in_stack_000017d0 = fVar43;
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
          uVar16 = FUN_026b97f8(uVar30,0);
          if ((uVar16 & 1) != 0) goto LAB_0354f374;
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
            lVar34 = lVar26 + lVar40 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar34 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar34 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar32 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar32 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar34 + 0x18c);
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
  lVar25 = lVar25 + 0x178;
  bVar1 = (int)uVar10 <= (int)uVar23;
  uVar12 = uVar2;
  uVar23 = uVar23 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar17 = *unaff_x22;
  if (lVar17 != 0) {
    iVar38 = uVar2 + 1;
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar17 + 0x18) = uVar10;
    lVar25 = unaff_x19[0xd4];
    *(int *)(lVar17 + 0x2c) = iVar38;
    if ((int)uVar10 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar17 + 0x1c) = (int)lVar25;
    *(int *)(lVar17 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar17 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar17 = unaff_x19[0xdb];
    if (lVar17 != 0) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),*unaff_x22,*(undefined8 *)(lVar17 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar17 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar17 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
        if (*(int *)(lVar17 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
            if (*(int *)(lVar17 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
                if (*(int *)(lVar17 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
                    if (*(int *)(lVar17 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar17 = *unaff_x22;
                        if (lVar17 != 0) {
                          lVar26 = 0;
                          lVar25 = 0;
                          do {
                            uVar16 = lVar25 + 1;
                            if ((long)*(int *)(lVar17 + 0x34) <= (long)uVar16) goto LAB_0354d0cc;
                            lVar17 = *(long *)(lVar17 + 0x60);
                            if (lVar17 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar17 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar17 + lVar26 + 0x70,0);
                            lVar17 = unaff_x19[0xe1];
                            if (lVar17 == 0) break;
                            if (*(uint *)(lVar17 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar19 = *(undefined8 *)(lVar17 + lVar25 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar18 = FUN_036d35a8(uVar19,0,0);
                            if ((uVar18 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0)) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar17 + 0x18) <= uVar16)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar17 + lVar26 + 0x70,1,0);
                              }
                              lVar17 = unaff_x19[0xe1];
                              if (lVar17 == 0) break;
                              if (*(uint *)(lVar17 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar17 = *(long *)(lVar17 + lVar25 * 8 + 0x28);
                              if (lVar17 == 0) break;
                              lVar17 = FUN_0359d5ac(lVar17,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar17 == 0) break;
                              FUN_036a460c(lVar17,*(undefined8 *)(lVar32 + lVar26 + 0x80),0);
                              lVar17 = unaff_x19[0xe1];
                              if (lVar17 == 0) break;
                              if (*(uint *)(lVar17 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar17 = *(long *)(lVar17 + lVar25 * 8 + 0x28);
                              if (lVar17 == 0) break;
                              lVar17 = FUN_0359d5ac(lVar17,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar17 == 0) break;
                              FUN_036a4810(lVar17,*(undefined8 *)(lVar32 + lVar26 + 0x98),0);
                              lVar17 = unaff_x19[0xe1];
                              if (lVar17 == 0) break;
                              if (*(uint *)(lVar17 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar17 = *(long *)(lVar17 + lVar25 * 8 + 0x28);
                              if (lVar17 == 0) break;
                              lVar17 = FUN_0359d5ac(lVar17,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar17 == 0) break;
                              FUN_036a48bc(lVar17,*(undefined8 *)(lVar32 + lVar26 + 0xa0),0);
                              lVar17 = unaff_x19[0xe1];
                              if (lVar17 == 0) break;
                              if (*(uint *)(lVar17 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar17 = *(long *)(lVar17 + lVar25 * 8 + 0x28);
                              if (lVar17 == 0) break;
                              lVar17 = FUN_0359d5ac(lVar17,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar32 = *(long *)(*unaff_x22 + 0x60), lVar32 == 0)) break;
                              if (*(uint *)(lVar32 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar17 == 0) break;
                              FUN_036a4e24(lVar17,*(undefined8 *)(lVar32 + lVar26 + 0xa8),0);
                              lVar17 = unaff_x19[0xe1];
                              if (lVar17 == 0) break;
                              if (*(uint *)(lVar17 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar17 = *(long *)(lVar17 + lVar25 * 8 + 0x28);
                              if ((lVar17 == 0) || (lVar17 = FUN_0359d5ac(lVar17,0), lVar17 == 0))
                              break;
                              FUN_036aa280(lVar17,0);
                            }
                            lVar17 = *unaff_x22;
                            lVar25 = lVar25 + 1;
                            lVar26 = lVar26 + 0x50;
                          } while (lVar17 != 0);
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


