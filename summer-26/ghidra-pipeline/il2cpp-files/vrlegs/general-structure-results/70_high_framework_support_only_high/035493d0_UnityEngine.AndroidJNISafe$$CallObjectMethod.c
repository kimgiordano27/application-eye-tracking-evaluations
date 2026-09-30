/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$CallObjectMethod
ENTRY_POINT: 035493d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


void UnityEngine_AndroidJNISafe__CallObjectMethod(undefined1 param_1 [16],ulong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  uint in_w8;
  uint uVar25;
  undefined4 *puVar26;
  float *pfVar27;
  long lVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  float *pfVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long *plVar39;
  uint unaff_w26;
  long lVar40;
  undefined4 unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  long lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulong unaff_d11;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
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
  
code_r0x035493d0:
  if (in_w8 == 3) {
    if ((*unaff_x21 == 0) || (lVar20 = FUN_03568ac0(*unaff_x21,0), lVar20 == 0)) goto LAB_0354fbf4;
    FUN_0219b634(lVar20,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w28)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(ulong *)(unaff_x25 + unaff_x29 * unaff_x24 + 0x30) =
         CONCAT44(in_stack_000008b4,in_stack_000008b0);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    unaff_w28 = *(uint *)((long)unaff_x19 + 0x494);
    bVar9 = true;
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
  else {
    bVar9 = true;
  }
LAB_03549510:
  fVar46 = (float)unaff_d11;
  iVar12 = (int)unaff_x24;
  if (((int)unaff_w28 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
    if ((*unaff_x22 != 0) && (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 != 0)) {
      if (unaff_w28 < *(uint *)(lVar20 + 0x18)) {
        lVar20 = lVar20 + (long)(int)unaff_w28 * (long)iVar12;
        *(undefined1 *)(lVar20 + 0x194) = 0;
        *(undefined2 *)(lVar20 + 0x20) = 0x200b;
        *(undefined4 *)(lVar20 + 100) = 0;
        *unaff_x20 = unaff_w28 + 1;
        uVar10 = in_stack_000017ec;
        goto LAB_03549564;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    goto LAB_0354fbf4;
  }
  iVar15 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar15 == 0) {
    uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        fVar44 = 1.0;
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b812c(in_stack_000017ec,0);
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8410(in_stack_000017ec,0);
            in_stack_000017ec = uVar10 & 0xffff;
            fVar44 = fStack0000000000000024;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b8070(in_stack_000017ec,0);
        fVar44 = 1.0;
        if ((uVar19 & 1) != 0) {
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
      uVar19 = FUN_026b812c(in_stack_000017ec,0);
      fVar44 = 1.0;
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
        fVar44 = 1.0;
        in_stack_000017ec = uVar10 & 0xffff;
      }
    }
    iVar15 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar15 != 0) goto LAB_03549594;
LAB_03549978:
    if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *_iStack00000000000000d8 = *(long *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
    uVar10 = in_stack_000017ec;
    if (*_iStack00000000000000d8 == 0) goto LAB_03549564;
    if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *unaff_x21 = *(long *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
    if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000170 = *(long *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
    goto LAB_0354fbf4;
    uVar11 = *unaff_x20;
    uVar10 = *(uint *)(lVar20 + 0x18);
    if (uVar10 <= uVar11) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar20 + (long)(int)uVar11 * unaff_x24 + 0x58);
    if (bVar9) {
      lVar40 = unaff_x19[0x8f];
      if (lVar40 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(int *)(lVar40 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
         (uVar11 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
      if (uVar10 <= uVar11 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      fVar47 = *(float *)(lVar20 + (long)(int)(uVar11 - 1) * (long)iVar12 + 0x60);
      iVar15 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar20 = *unaff_x21;
    }
    else {
LAB_03549a88:
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      fVar47 = *(float *)(unaff_x19 + 0x3d);
      iVar15 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar20 = unaff_x19[0x20];
    }
    if (lVar20 == 0) goto LAB_0354fbf4;
    fVar53 = (float)FUN_03776960(lVar20 + 0x50,0);
    fVar57 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar57 = 1.0;
    }
    uVar14 = 0;
    fStack0000000000000124 = 0.0;
    if (!(bool)(bVar9 & in_stack_000017ec == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      uVar14 = FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar20 = unaff_x19[0xc9];
    if (lVar20 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar14);
    if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
    fVar49 = *(float *)((long)unaff_x19 + 0x404);
    fVar50 = *(float *)(lVar20 + 0x2c);
    fVar46 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_0354fbf4;
    fVar48 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_0354fbf4;
    fVar55 = *(float *)((long)unaff_x19 + 0x404);
    fVar61 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar20 = unaff_x19[0x6d];
    if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar40 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar40 + 0x2c) = 0;
    fVar57 = ((fVar44 * fVar47) / (float)iVar15) * fVar53 * fVar57;
    fVar46 = fVar57 * fVar49 * fVar50 * fVar46;
    *(float *)(lVar40 + 0x160) = fVar46;
    uVar10 = *(uint *)(unaff_x19 + 0x24);
    fVar61 = fVar57 * fVar48 * fVar55 * fVar61;
    if (uVar10 == 0) {
      in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar40 = unaff_x19[0xe1];
      if (lVar40 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = *(long *)(lVar40 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar40 == 0) goto LAB_0354fbf4;
      in_stack_00000168._4_4_ = *(float *)(lVar40 + 0x54);
    }
LAB_03549e30:
    fVar47 = 0.0;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar47 = fVar46;
    }
  }
  else {
    fVar44 = 1.0;
    if (iVar15 == 0) goto LAB_03549978;
LAB_03549594:
    if (iVar15 == 1) {
      if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *in_stack_000000b8 = *(long *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar20 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar20 == 0))
      goto LAB_0354fbf4;
      FUN_02215a88(lVar20,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar20 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
      uVar10 = in_stack_000017ec;
      if (lVar20 == 0) goto LAB_03549564;
      if (in_stack_000017ec == 0x3c) {
        in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar40 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar46 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar15 = FUN_03776950(&stack0x00001730,0);
      if (*unaff_x21 == 0) goto LAB_0354fbf4;
      memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
      fVar57 = (float)FUN_03776960(&stack0x00001730,0);
      fVar47 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar47 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
      fVar47 = (fVar46 / (float)iVar15) * fVar57 * fVar47;
      iVar15 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar46 = *(float *)(unaff_x19 + 0x3d);
      if (iVar15 < 1) {
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        iVar15 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar53 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar57 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar57 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar49 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,*(long *)(lVar20 + 0x20),0);
        fVar50 = (float)FUN_03776c9c(&stack0x00001710,0);
        if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
        fVar55 = *(float *)(lVar20 + 0x2c);
        fVar48 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar58 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar59 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_0354fbf4;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar61 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar61 = fVar47 * fVar59 * fVar62 * fVar61;
        fVar57 = (fVar46 / (float)iVar15) * fVar53 * fVar57;
        fVar46 = fVar57 * (fVar49 / fVar50) * fVar55 * fVar48;
        fVar57 = fVar57 / fVar46;
        fVar58 = fVar57 * fVar58;
        fVar47 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar57 = fVar57 * fVar47;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        iVar15 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar57 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0354fbf4;
        fVar49 = *(float *)(lVar20 + 0x2c);
        fVar53 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar53 = 1.0;
        }
        fVar50 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar58 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar48 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar55 = *(float *)((long)unaff_x19 + 0x404);
        fVar61 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar61 = fVar47 * fVar48 * fVar55 * fVar61;
        fVar46 = (fVar46 / (float)iVar15) * fVar57 * fVar53 * fVar49 * fVar50;
        fVar57 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *_iStack00000000000000d8 = lVar20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (_iStack00000000000000d8,lVar20);
      if ((*unaff_x22 != 0) && (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)(lVar20 + 0x2c) = 1;
          *(float *)(lVar20 + 0x160) = fVar46;
          *(long *)(lVar20 + 0x40) = *in_stack_000000b8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          if ((*unaff_x22 != 0) && (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 != 0)) {
            if (*unaff_x20 < *(uint *)(lVar20 + 0x18)) {
              *(long *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar20 = *unaff_x22;
              if ((lVar20 != 0) && (lVar40 = *(long *)(lVar20 + 0x38), lVar40 != 0)) {
                if (*unaff_x20 < *(uint *)(lVar40 + 0x18)) {
                  _fStack0000000000000120 = CONCAT44(fVar58,fVar57);
                  in_stack_00000168._4_4_ = 0.0;
                  *(int *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24]
                  ;
                  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w27;
                  goto LAB_03549e30;
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
    }
    lVar20 = *unaff_x22;
    fVar61 = 0.0;
    fVar47 = fVar61;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar47 = fVar46;
    }
    if (lVar20 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = 0;
  }
  lVar20 = *(long *)(lVar20 + 0x38);
  if (lVar20 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar20 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar20 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar20 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar20 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)uVar10 * unaff_x24;
  *(undefined4 *)(lVar20 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar20 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar20 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar20 = *(long *)(unaff_x19[0xc9] + 0x20), lVar20 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar20,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b63d8(in_stack_000017ec,0);
    uVar11 = uVar11 & 1;
  }
  else {
    uVar11 = 0;
  }
  fVar57 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fVar53 = 0.0;
    fVar50 = 0.0;
    fVar49 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar25 = *unaff_x20;
    uVar10 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar25 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar25 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = *(long *)(lVar20 + (long)(int)(uVar25 + 1) * (long)iVar12 + 0x30);
      if ((((lVar20 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar40 = *(long *)(*in_stack_00000178 + 0x128), lVar40 == 0)) ||
         (lVar40 = *(long *)(lVar40 + 0x18), lVar40 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar10 | *(int *)(lVar20 + 0x28) << 0x10;
      uVar19 = FUN_0219f8b8(lVar40,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar14 = 0;
      if ((uVar19 & 1) == 0) {
        fVar53 = 0.0;
        fVar50 = 0.0;
        fVar49 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        fVar53 = *(float *)(in_stack_00001708 + 0x1c);
        uVar14 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar49 = *(float *)(in_stack_00001708 + 0x14);
        fVar50 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar57 = 0.0;
        }
      }
      uVar25 = *unaff_x20;
    }
    else {
      uVar14 = 0;
      fVar53 = 0.0;
      fVar50 = 0.0;
      fVar49 = 0.0;
    }
    if (0 < (int)uVar25) {
      if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar25 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = *(long *)(lVar20 + (ulong)(uVar25 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar20 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar40 = *(long *)(*in_stack_00000178 + 0x128), lVar40 == 0 ||
          (lVar40 = *(long *)(lVar40 + 0x18), lVar40 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar20 + 0x28) | uVar10 << 0x10;
      uVar19 = FUN_0219f8b8(lVar40,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar19 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar49 = (float)FUN_03571cb4(fVar49,fVar50,fVar53,uVar14,
                                         *(undefined4 *)(in_stack_00001708 + 0x28),
                                         *(undefined4 *)(in_stack_00001708 + 0x2c),
                                         *(undefined4 *)(in_stack_00001708 + 0x30),
                                         *(undefined4 *)(in_stack_00001708 + 0x34),0),
           in_stack_00001708 == 0)) goto LAB_0354fbf4;
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar57 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fVar53;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar55 = *(float *)(unaff_x19 + 200);
    fVar48 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar55 = fVar55 - fVar47 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar55;
    if ((in_stack_000017ec == 0x200b) || (uVar11 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar55 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar55 = *(float *)(unaff_x19 + 0x56);
  fVar48 = 0.0;
  if (fVar55 != 0.0) {
    fVar48 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar58 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar48 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar55 * 0.5 - fVar47 * (fVar48 * 0.5 + fVar58));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar48;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar20 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar20,0,0);
    fVar58 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar20 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar20 == 0) goto LAB_0354fbf4;
      uVar19 = FUN_03699d3c(lVar20,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar58 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar20 = *in_stack_00000170;
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar20 == 0) goto LAB_0354fbf4;
        fVar55 = (float)FUN_0369e060(lVar20,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar59 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar58 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar58 = fVar58 * fVar55 * fVar59 * 0.25;
        if (fVar55 < in_stack_00000168._4_4_ + fVar58) {
          in_stack_00000168._4_4_ = fVar55 - fVar58;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar20 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar20,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar20 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar20 == 0) goto LAB_0354fbf4;
      uVar19 = FUN_03699d3c(lVar20,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar20 = *in_stack_00000170;
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar20 == 0) goto LAB_0354fbf4;
        uVar19 = FUN_03699d3c(lVar20,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar20 = *in_stack_00000170;
          if (*(int *)(*plVar39 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar20 != 0) {
            fVar55 = (float)FUN_0369e060(lVar20,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0
                                        );
            if ((*in_stack_00000178 != 0) && (*in_stack_00000170 != 0)) {
              fVar59 = *(float *)(*in_stack_00000178 + 0x1a8);
              fVar58 = (float)FUN_0369e060(*in_stack_00000170,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
              fVar58 = fVar58 * fVar55 * fVar59 * 0.25;
              if (fVar55 < in_stack_00000168._4_4_ + fVar58) {
                in_stack_00000168._4_4_ = fVar55 - fVar58;
              }
              goto LAB_0354a568;
            }
          }
          goto LAB_0354fbf4;
        }
      }
    }
    fVar58 = 0.0;
  }
LAB_0354a568:
  fVar55 = *(float *)(unaff_x19 + 200);
  fVar59 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar55 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar47 * (fVar49 + ((fVar59 - in_stack_00000168._4_4_) - fVar58));
  fVar49 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar59 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar61 + fVar47 * (fVar50 + in_stack_00000168._4_4_ + fVar49)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar49 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar59 - fVar47 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar49);
  fVar49 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar50 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar47 * (fVar58 + fVar58 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar49);
  fStack0000000000000104 = fVar55;
  fVar49 = fVar50;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar42 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar49 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar43 = fVar42 * fVar47 * (fVar58 + in_stack_00000168._4_4_ + fVar49);
    fVar49 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar62 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar59 = fVar59 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar42 = fVar42 * fVar47 * (((fVar49 - fVar62) - in_stack_00000168._4_4_) - fVar58);
    fVar62 = fVar55 + fVar43;
    fVar49 = fVar50 + fVar42;
    fVar54 = (fVar43 - fVar42) * 0.5;
    fVar55 = (fVar55 + fVar42) - fVar54;
    fVar50 = (fVar50 + fVar43) - fVar54;
    fStack0000000000000104 = fVar62 - fVar54;
    fVar49 = fVar49 - fVar54;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar52 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar54 = fStack0000000000000134;
    fVar62 = fVar59;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar56 = (fVar50 + fVar55) * 0.5;
    fVar60 = (fStack0000000000000134 + fVar59) * 0.5;
    fVar59 = fVar59 - fVar60;
    fStack0000000000000100 = 0.0;
    fVar62 = fVar59;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar56,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar56 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar54 = fStack0000000000000134 - fVar60;
    fVar42 = 0.0;
    fStack0000000000000134 = fVar54;
    fVar55 = (float)FUN_036bdd2c(fVar55 - fVar56,_fStack0000000000000070,0);
    fVar55 = fVar56 + fVar55;
    fVar42 = fVar42 + 0.0;
    fStack0000000000000134 = fVar60 + fStack0000000000000134;
    fVar52 = 0.0;
    fVar50 = (float)FUN_036bdd2c(fVar50 - fVar56,_fStack0000000000000070,0);
    fVar50 = fVar56 + fVar50;
    fVar59 = fVar60 + fVar59;
    fVar52 = fVar52 + 0.0;
    fVar43 = 0.0;
    fVar49 = (float)FUN_036bdd2c(fVar49 - fVar56,_fStack0000000000000070,0);
    fVar49 = fVar56 + fVar49;
    fVar43 = fVar43 + 0.0;
    fVar54 = fVar60 + fVar54;
    fVar62 = fVar60 + fVar62;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar20 = *(long *)(*unaff_x22 + 0x38);
  unaff_d11 = (ulong)(uint)fVar47;
  if (lVar20 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar20 + 0x11c) = fVar55;
  *(float *)(lVar20 + 0x120) = fStack0000000000000134;
  *(float *)(lVar20 + 0x124) = fVar42;
  if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar20 + 0x114) = fVar62;
  *(float *)(lVar20 + 0x110) = fStack0000000000000104;
  *(float *)(lVar20 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar20 + 0x128) = fVar50;
  *(float *)(lVar20 + 300) = fVar59;
  *(float *)(lVar20 + 0x130) = fVar52;
  if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar20 + 0x134) = fVar49;
  *(float *)(lVar20 + 0x138) = fVar54;
  *(float *)(lVar20 + 0x13c) = fVar43;
  if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  uVar25 = *unaff_x20;
  lVar40 = (long)(int)uVar25;
  if (*(uint *)(lVar20 + 0x18) <= uVar25)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar20 + lVar40 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar59 = *(float *)(unaff_x19 + 0x9b);
  param_2 = (ulong)(uint)fVar59;
  fVar49 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar50 - fVar55) / (fVar62 - fStack0000000000000134);
  *(float *)(lVar28 + 0x14c) = (fVar61 - fVar59) + fVar49;
  fVar50 = fStack0000000000000124 * fVar47;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar50 = fVar50 / fVar44;
    fStack0000000000000120 = (fStack0000000000000120 * fVar47) / fVar44;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar47;
  }
  uVar2 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar11 == 0) || (uVar25 == uVar2)) {
    fStack0000000000000120 = fVar49 + fStack0000000000000120;
    fVar50 = fVar49 + fVar50;
    fVar61 = fStack0000000000000120;
    fVar55 = fVar50;
    if (fVar49 != 0.0) {
      fVar55 = (fVar50 - fVar49) / *(float *)((long)unaff_x19 + 0x404);
      fVar61 = (fStack0000000000000120 - fVar49) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar55 <= fVar50) {
        fVar55 = fVar50;
      }
      if (fStack0000000000000120 <= fVar61) {
        fVar61 = fStack0000000000000120;
      }
    }
    lVar20 = lVar20 + lVar40 * unaff_x24;
    fVar49 = fVar55;
    if (fVar55 <= *(float *)(unaff_x19 + 0x99)) {
      fVar49 = *(float *)(unaff_x19 + 0x99);
    }
    fVar62 = fVar61;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar61) {
      fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar62;
    *(float *)(unaff_x19 + 0x99) = fVar49;
    *(float *)(lVar20 + 0x154) = fVar55;
    *(float *)(lVar20 + 0x158) = fVar61;
    *(float *)(lVar20 + 0x148) = fVar50 - fVar59;
    *(float *)(unaff_x19 + 0x98) = fVar50 - fVar59;
    *(float *)(lVar20 + 0x150) = fStack0000000000000120 - fVar59;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar59;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar49;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar49 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar55 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fVar44 = (fVar47 * fVar55) / fVar44;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar49 <= fVar44) {
        fVar49 = fVar44;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar49;
    }
    if ((float)param_2 == 0.0) {
      fVar44 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar50) {
        fVar44 = fVar50;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar44;
    }
  }
  else {
    fVar44 = *(float *)(unaff_x19 + 0x99);
    lVar20 = lVar20 + lVar40 * unaff_x24;
    *(float *)(lVar20 + 0x154) = fVar44;
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar44 = fVar44 - fVar59;
    *(float *)(lVar20 + 0x148) = fVar44;
    *(float *)(lVar20 + 0x158) = fVar49;
    *(float *)(unaff_x19 + 0x98) = fVar44;
    fVar49 = fVar49 - fVar59;
    *(float *)(lVar20 + 0x150) = fVar49;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar49;
  }
  lVar20 = *unaff_x22;
  if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar40 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar40 + (long)(int)uVar13 * unaff_x24;
  *(undefined1 *)(lVar40 + 0x194) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x4f);
  unaff_x21 = in_stack_00000178;
  uVar10 = in_stack_000017ec;
  if ((in_stack_000017ec == 9) ||
     (((((uVar11 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)) ||
      (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar40 + 0x194) = 1;
    pfVar27 = _fStack00000000000000a0;
    pfVar32 = _fStack00000000000000a8;
    if (bVar9) {
      lVar20 = *(long *)(lVar20 + 0x50);
      if (lVar20 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar20 + 0x60);
      pfVar27 = (float *)(lVar20 + 100);
    }
    fVar49 = *pfVar32;
    fVar50 = *pfVar27;
    fVar44 = *(float *)(unaff_x19 + 0x6c);
    fVar55 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar49) - fVar50;
    bVar8 = true;
    if ((fVar44 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar44))) {
      bVar8 = fVar44 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar44;
    }
    fVar44 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar44 = (float)FUN_03776cb4(&stack0x000017a0,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017ec != 0xad) {
      fVar46 = fVar47;
    }
    fVar42 = (float)param_2;
    fVar62 = 0.0;
    if ((0.0 < fVar42) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar62 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar13 = *unaff_x20;
    fVar62 = (*(float *)(unaff_x19 + 0x97) - (fVar61 - fVar42)) + fVar62;
    if (fStack00000000000000c4 < fVar62) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar17 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar54 = *(float *)(unaff_x19 + 0x59);
        if (((fVar54 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar42)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar46 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar62) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar46 <= fVar54) {
            fVar46 = fVar54;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar62 = *(float *)(unaff_x19 + 0x4a);
        param_2 = (ulong)(uint)fVar62;
        if ((fVar62 < fVar42) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar46 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar46 <= DAT_00d38b84) {
            fVar46 = DAT_00d38b84;
          }
          fVar44 = (fVar42 - fVar46) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar42;
          fVar46 = DAT_00d38e60;
          if (fVar44 != INFINITY) {
            fVar46 = (float)(int)fVar44 / 20.0;
          }
          if (fVar46 <= fVar62) {
            fVar46 = fVar62;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *(long *)puVar7;
        }
        lVar40 = *(long *)(lVar20 + 0xb8);
        lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_01a46ff8(lVar20);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar40 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) {
LAB_0354cf2c:
          in_stack_000017d8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017b8 = 0xffffffff;
        }
        else {
          lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
          iVar12 = FUN_0358c15c();
LAB_0354b3a0:
          iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar15;
          in_stack_00000180 = in_stack_00000180 + 1;
          in_stack_000017b8 = iVar12 - 1;
          in_stack_000017d8 = CONCAT44(0x2026,iVar15);
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
        if ((uVar13 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
          in_stack_000017d8 = uVar17;
        }
        else {
          fVar46 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar46 - fVar61) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_2 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar20 = NEON_rev64(param_2,4);
          unaff_x19[0x99] = lVar20;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        }
        goto LAB_03549564;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar20 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar20,0,0);
        if ((uVar19 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x528))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x530));
          lVar20 = unaff_x19[0x5d];
          if (lVar20 == 0) goto LAB_0354fbf4;
          *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_0354b0e0:
      in_stack_000017d8 = CONCAT44(3,uVar13);
      goto LAB_03549564;
    }
switchD_0354ad3c_caseD_2:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar44 = ABS(fVar55) + fVar44 * (1.0 - fVar59) * fVar46;
    fVar46 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar46 = DAT_00d38acc;
    }
    fVar55 = fVar46 * in_stack_000000f8._4_4_;
    if (fVar44 <= fVar55) {
LAB_0354b8e4:
      if (in_stack_000017ec == 0xad) {
        if ((*unaff_x22 != 0) && (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar20 + 0x18)) {
            *(undefined1 *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (in_stack_000017ec != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar55,fVar58);
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
        if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x50), lVar20 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000060 = 0;
            *(float *)(lVar20 + 0x60) = fVar49;
            *(float *)(lVar20 + 100) = fVar50;
            goto LAB_0354ba38;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      lVar20 = *unaff_x22;
      if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
      uVar13 = *unaff_x20;
      if (uVar13 < *(uint *)(lVar40 + 0x18)) {
        *(undefined1 *)(lVar40 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
        lVar40 = *(long *)(lVar20 + 0x50);
        if (lVar40 != 0) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar40 + 0x18)) {
            lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar40 + 0x2c) = *(int *)(lVar40 + 0x2c) + 1;
            goto LAB_0354b950;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    param_2 = (ulong)(uint)fVar58;
    if (((char)unaff_x19[0x5b] != '\0') && (uVar13 != *(uint *)(unaff_x19 + 0x93))) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017b8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar20 = *unaff_x22;
        if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar55 = *(float *)(unaff_x19 + 0x9b);
        fVar59 = 0.0;
        if ((0.0 < fVar55) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar59 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar59 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar59 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar20 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar20 == 0) goto LAB_0354fbf4;
        fVar55 = *(float *)(unaff_x19 + 0x9b);
        fVar59 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 != 0) {
        uVar34 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar20 + 0x18) <= uVar34) ||
           (uVar31 = uVar34 - 1, *(uint *)(lVar20 + 0x18) <= uVar31))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        param_2 = (ulong)(uint)(fVar59 + *(float *)(unaff_x19 + 0x97));
        fVar61 = (fVar59 + *(float *)(unaff_x19 + 0x97) + fVar55) -
                 *(float *)(lVar20 + (long)(int)uVar34 * unaff_x24 + 0x158);
        if (((bStack000000000000006c & 1) == 0 &&
             *(short *)(lVar20 + (long)(int)uVar31 * (long)iVar12 + 0x20) == 0xad) &&
           ((fVar61 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar31;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          in_stack_000017d8 = CONCAT44(0x2d,uVar31);
          goto LAB_03549564;
        }
        if (*(short *)(lVar20 + (long)(int)uVar34 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000006c = 1;
          goto LAB_03549564;
        }
        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar55 <= fVar59) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
            param_2 = (ulong)(uint)fVar59;
            fVar55 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar59 <= fVar55) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_0354b6dc;
LAB_0354fcd0:
            fVar46 = (fVar59 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar46 <= DAT_00d38b84) {
              fVar46 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar59;
            fVar59 = fVar59 - fVar46;
            goto LAB_0354fc60;
          }
LAB_0354fc94:
          fVar47 = fVar44;
          if (0.0 < fVar59) {
            fVar47 = fVar44 / (1.0 - fVar59);
          }
          fVar59 = fVar59 + (fVar44 - fVar46 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar47;
LAB_0354fc24:
          if (fVar55 <= fVar59) {
            fVar59 = fVar55;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar59;
          return;
        }
LAB_0354b6dc:
        lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *(long *)puVar7;
        }
        iVar15 = *(int *)(*(long *)(lVar20 + 0xb8) + 0xe78);
        if (((iVar15 != iStack000000000000002c) && (iVar15 != -1)) &&
           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
          goto LAB_0354fbf4;
          uVar34 = *unaff_x20 - 1;
          if (*(uint *)(lVar20 + 0x18) <= uVar34)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar15;
          if (*(short *)(lVar20 + (long)(int)uVar34 * (long)iVar12 + 0x20) == 0xad) {
            bStack000000000000006c = 0;
            *unaff_x20 = uVar34;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            in_stack_000017d8 = CONCAT44(0x2d,uVar34);
            goto LAB_03549564;
          }
        }
        if (fVar61 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
          FUN_0358cbd4(in_stack_00000050,unaff_d11,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar57,
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
              fVar46 = *(float *)((long)unaff_x19 + 700) +
                       ((fStack0000000000000018 - fVar61) / (float)((int)unaff_x19[0x95] + 1)) /
                       in_stack_00000050;
              if (fVar46 <= fVar55) {
                fVar46 = fVar55;
              }
UnityEngine_AndroidJavaObject___ctor:
              *(float *)((long)unaff_x19 + 700) = fVar46;
              return;
            }
            fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar59 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fc94;
            fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
            param_2 = (ulong)(uint)fVar59;
            fVar55 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar55 < fVar59) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_0354fcd0;
          }
          switch((int)unaff_x19[0x5c]) {
          case 0:
          case 2:
          case 4:
            goto switchD_0354b88c_caseD_0;
          case 1:
            lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar40 = *(long *)(lVar20 + 0xb8);
            lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
              lVar20 = FUN_01a46ff8(lVar20);
            }
            piVar21 = (int *)thunk_FUN_01a59484(lVar40 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            if (*piVar21 == 0) {
              bStack000000000000006c = 0;
              goto LAB_0354cf2c;
            }
            lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            FUN_0209b778(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            memcpy(&stack0x00001018,&stack0x000008b0,0x378);
            iVar12 = FUN_0358c15c();
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
            FUN_0358cbd4(in_stack_00000050,unaff_d11,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar57,
                         in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            break;
          case 6:
            lVar20 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_036cee6c(lVar20,0,0);
            if ((uVar19 & 1) != 0) {
              plVar39 = (long *)unaff_x19[0x5d];
              uVar17 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
              (**(code **)(*plVar39 + 0x528))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x530));
              lVar20 = unaff_x19[0x5d];
              if (lVar20 == 0) goto LAB_0354fbf4;
              *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
      fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if (fVar59 < fVar55) {
        fVar47 = fVar44 / (1.0 - fVar59);
        if (fVar59 <= 0.0) {
          fVar47 = fVar44;
        }
        fVar59 = fVar59 + (fVar44 - fVar46 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar47;
        goto LAB_0354fc24;
      }
      fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar55 = *(float *)(unaff_x19 + 0x4a);
      if (fVar55 < fVar59) {
        fVar46 = (fVar59 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar46 <= DAT_00d38b84) {
          fVar46 = DAT_00d38b84;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar59;
        fVar59 = fVar59 - fVar46;
LAB_0354fc60:
        fVar44 = fVar59 * 20.0 + 0.5;
        fVar46 = DAT_00d38e60;
        if (fVar44 != INFINITY) {
          fVar46 = (float)(int)fVar44 / 20.0;
        }
        if (fVar46 <= fVar55) {
          fVar46 = fVar55;
        }
LAB_0354d004:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar46;
        return;
      }
    }
    iVar15 = (int)unaff_x19[0x5c];
    if (iVar15 == 1) {
      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *(long *)puVar7;
      }
      lVar40 = *(long *)(lVar20 + 0xb8);
      lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = FUN_01a46ff8(lVar20);
      }
      piVar21 = (int *)thunk_FUN_01a59484(lVar40 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar21 == 0) goto LAB_0354cf2c;
      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *(long *)puVar7;
      }
      FUN_0209b778(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
      goto LAB_0354b394;
    }
    if (iVar15 != 6) {
      if (iVar15 == 3) {
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
    lVar20 = unaff_x19[0x5d];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar19 = FUN_036cee6c(lVar20,0,0);
    if ((uVar19 & 1) != 0) {
      plVar39 = (long *)unaff_x19[0x5d];
      uVar17 = (**(code **)(*unaff_x19 + 0x518))();
      if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar39 + 0x528))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x530));
      lVar20 = unaff_x19[0x5d];
      if (lVar20 == 0) goto LAB_0354fbf4;
      *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
      FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar39 = (long *)unaff_x19[0x5d];
      if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
      (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
LAB_0354b4b4:
    in_stack_000017d8 = CONCAT44(3,*unaff_x20);
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar44 = (float)param_2;
      fVar46 = 0.0;
      if ((0.0 < fVar44) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_2 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar44)) + fVar46)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar20 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar20,0,0);
        if ((uVar19 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar39 != (long *)0x0) {
            (**(code **)(*plVar39 + 0x528))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x530));
            lVar20 = unaff_x19[0x5d];
            if (lVar20 != 0) {
              *(int *)(lVar20 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar20,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
        lVar20 = *unaff_x22;
        if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x50), lVar40 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar40 + 0x2c) = *(int *)(lVar40 + 0x2c) + 1;
        *(int *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b97f8(in_stack_000017ec,0);
      if ((uVar19 & 1) != 0) goto LAB_0354b500;
    }
    if (in_stack_000017ec == 0xa0) {
      if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x50), lVar20 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + 1;
    }
LAB_0354ba38:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (!bVar9)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar46 = *(float *)(unaff_x19 + 0x3d);
      iVar15 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar49 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar20 = unaff_x19[0xca];
      fVar44 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar44 = 1.0;
      }
      if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar55 = *(float *)((long)unaff_x19 + 0x404);
      fVar59 = *(float *)(lVar20 + 0x2c);
      fVar50 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
      fVar58 = *_fStack00000000000000a8;
      fVar50 = fVar55 * (fVar46 / (float)iVar15) * fVar49 * fVar44 * fVar59 * fVar50;
      fVar46 = *_fStack00000000000000a0;
      if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0))
        goto LAB_0354fbf4;
        uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar20 + 0x18) <= uVar13)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar44 = *(float *)(lVar20 + (long)(int)uVar13 * (long)iVar12 + 0x60);
        iVar15 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
        fVar55 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar20 = unaff_x19[0xca];
        fVar49 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar49 = 1.0;
        }
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_0354fbf4;
        fVar59 = *(float *)((long)unaff_x19 + 0x404);
        fVar61 = *(float *)(lVar20 + 0x2c);
        fVar50 = (float)FUN_03776ea8(*(long *)(lVar20 + 0x20),0);
        if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x50), lVar20 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar58 = *(float *)(lVar20 + 0x60);
        fVar46 = *(float *)(lVar20 + 100);
        fVar50 = fVar59 * (fVar44 / (float)iVar15) * fVar55 * fVar49 * fVar61 * fVar50;
      }
      fVar55 = *(float *)(unaff_x19 + 0x9b);
      fVar44 = 0.0;
      fVar49 = 0.0;
      if ((0.0 < fVar55) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar49 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar61 = *(float *)(unaff_x19 + 0x97);
      fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar59 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar20 = *(long *)(unaff_x19[0xca] + 0x20), lVar20 == 0))
        goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,lVar20,0);
        fVar44 = (float)FUN_03776cb4(&stack0x00001710,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar42 = *(float *)(unaff_x19 + 0x6c);
      fVar46 = (fStack000000000000009c - fVar58) - fVar46;
      bVar8 = true;
      if ((fVar42 <= fVar46) && (bVar8 = false, !NAN(fVar42))) {
        bVar8 = fVar42 == -1.0;
      }
      if (!bVar8) {
        fVar46 = fVar42;
      }
      fVar58 = 1.0;
      if ((uVar30 & 0x18) != 0) {
        fVar58 = DAT_00d38acc;
      }
      if (((fVar61 - (fVar62 - fVar55)) + fVar49 < fStack00000000000000c4) &&
         (ABS(fVar59) + fVar50 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar58 * fVar46)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar20 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000538,(void *)(lVar20 + 0x788),0x378);
        FUN_0209b210(lVar20 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar20 = *unaff_x22;
    if (lVar20 == 0) goto LAB_0354fbf4;
    lVar40 = *(long *)(lVar20 + 0x38);
    if (lVar40 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar40 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar13 = *(uint *)(unaff_x19 + 0x95);
    lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar40 + 100) = uVar13;
    *(int *)(lVar40 + 0x68) = (int)unaff_x19[0x96];
    if ((bVar9) ||
       ((in_stack_000017ec < 0xe && ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) != 0)))) {
      lVar20 = *(long *)(lVar20 + 0x50);
      if (lVar20 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*(int *)(lVar20 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
    }
    else {
      lVar20 = *(long *)(lVar20 + 0x50);
      if (lVar20 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
      if (*(uint *)(lVar20 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(int *)(lVar20 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if (in_stack_000017ec == 9) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar46 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar53 = *(float *)(unaff_x19 + 200);
      fVar44 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar46 = fVar47 * fVar46 * fVar44;
      fVar44 = fVar46 * (float)(int)(fVar53 / fVar46);
      param_2 = (ulong)(uint)fVar44;
      if (fVar44 <= fVar53) {
        fVar44 = fVar53 + fVar46;
      }
LAB_0354c000:
      *(float *)(unaff_x19 + 200) = fVar44;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar49 = 1.0;
        }
        else {
          fVar49 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
        }
        fVar44 = *(float *)(unaff_x19 + 200);
        fVar50 = (float)FUN_03776cb4(&stack0x000017a0,0);
        if (unaff_x19[0x20] != 0) {
          fVar46 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar44 = fVar44 + fVar46 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar47 * (fVar53 + fVar49 * fVar50) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     fVar57 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar44;
          goto joined_r0x0354bf48;
        }
        goto LAB_0354fbf4;
      }
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar47 * fVar53 +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + fVar57 + *(float *)(*in_stack_00000178 + 0x1ac)));
      param_2 = (ulong)(uint)fVar44;
      fVar44 = *(float *)(unaff_x19 + 200) - fVar44;
      *(float *)(unaff_x19 + 200) = fVar44;
      if ((in_stack_000017ec == 0x200b) || (uVar11 != 0)) {
        fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        param_2 = (ulong)(uint)fVar46;
        fVar44 = fVar44 - fVar46;
        goto LAB_0354c000;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar46 = *(float *)(unaff_x19 + 200);
      fVar44 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar48) +
                        fStack00000000000000d4 * (fVar57 + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar44;
joined_r0x0354bf48:
      if ((in_stack_000017ec == 0x200b) || (param_2 = (ulong)(uint)fVar46, uVar11 != 0)) {
        fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        param_2 = (ulong)(uint)fVar46;
        fVar44 = fVar44 + fVar46;
        goto LAB_0354c000;
      }
    }
    lVar20 = *unaff_x22;
    if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
    uVar13 = *unaff_x20;
    uVar30 = (uint)*(undefined8 *)(lVar40 + 0x18);
    if (uVar30 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar40 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar44;
    uVar34 = in_stack_000017ec;
    if ((int)in_stack_000017ec < 0xd) {
      if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
      if (((bool)(bVar9 & in_stack_000017ec == 0x2d)) || ((float)uVar13 == in_stack_00000080._4_4_))
      goto LAB_0354c060;
    }
    else {
      if (1 < in_stack_000017ec - 0x2028) {
        if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
        param_2 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar13 != in_stack_00000080._4_4_) goto LAB_0354c704;
      }
LAB_0354c060:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar46 = *(float *)(unaff_x19 + 0x99);
        fVar44 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar46 = fVar46 - fVar44;
        if (((fStack0000000000000058 < ABS(fVar46)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar46);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar46;
          *(float *)(unaff_x19 + 0x9b) = fVar46 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *(long *)puVar7;
          }
          lVar40 = *(long *)(lVar20 + 0xb8);
          if (*(int *)(lVar40 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar40 + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar20 + 0xb8) + 0x788),&stack0x000008b0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar20 + 0xb8) + 0x818,0);
            lVar20 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar20 + 0x7bc) = fVar46 + *(float *)(lVar20 + 0x7bc);
            *(float *)(lVar20 + 0x800) = fVar46 + *(float *)(lVar20 + 0x800);
            memcpy(&stack0x000001c0,(void *)(lVar20 + 0x788),0x378);
            FUN_0209b210(lVar20 + 0x11f0,&stack0x000001c0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar53 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar44 = *(float *)((long)unaff_x19 + 0x4cc) - fVar53;
      fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar44 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar46 = fVar44;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
      fVar49 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017e4 == '\0') {
        in_stack_000017e8 = fVar46;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017e4 = '\x01';
      }
      lVar20 = *unaff_x22;
      if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x50), lVar40 == 0)) goto LAB_0354fbf4;
      uVar13 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar40 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = unaff_x19[0x93];
      lVar33 = lVar40 + (long)(int)uVar13 * 0x5c;
      *(int *)(lVar33 + 0x34) = (int)lVar28;
      uVar30 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar28 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
      *(uint *)(lVar33 + 0x38) = uVar30;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar33 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar15 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar15 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar15;
      *(int *)(lVar33 + 0x40) = iVar15;
      *(int *)(lVar33 + 0x24) = (*(int *)(lVar33 + 0x3c) - *(int *)(lVar33 + 0x34)) + 1;
      *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar14 = *(undefined4 *)(lVar20 + (long)(int)uVar30 * (long)iVar12 + 0x11c);
      lVar40 = lVar40 + (long)(int)uVar13 * 0x5c;
      *(float *)(lVar40 + 0x70) = fVar44;
      *(undefined4 *)(lVar40 + 0x6c) = uVar14;
      lVar20 = *unaff_x22;
      if ((lVar20 == 0) || (lVar40 = *(long *)(lVar20 + 0x50), lVar40 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar49 = fVar49 - fVar53;
      param_2 = (ulong)(uint)fVar49;
      lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar40 + 0x74) =
           *(undefined4 *)
            (lVar20 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar40 + 0x78) = fVar49;
      lVar20 = *unaff_x22;
      if ((lVar20 == 0) || (lVar28 = *(long *)(lVar20 + 0x50), lVar28 == 0)) goto LAB_0354fbf4;
      lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = lVar28 + lVar33 * 0x5c;
      *(float *)(lVar40 + 0x44) = *(float *)(lVar40 + 0x74) - fVar47 * in_stack_00000168._4_4_;
      *(float *)(lVar40 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar40 + 0x24) == 1) {
        *(int *)(lVar28 + lVar33 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar40 = *(long *)(lVar20 + 0x38), lVar40 == 0))
      goto LAB_0354fbf4;
      lVar41 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar30 = (uint)*(undefined8 *)(lVar40 + 0x18);
      if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(char *)(lVar40 + lVar41 * unaff_x24 + 0x194) == '\0') &&
         (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar30 <= *(uint *)(unaff_x19 + 0x94)))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar33 * 0x5c;
      fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + fVar57 + *(float *)(*in_stack_00000178 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar46 = -fVar57;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar46 = fVar57;
      }
      *(float *)(lVar28 + 0x58) = *(float *)(lVar40 + lVar41 * unaff_x24 + 0x144) + fVar46;
      *(float *)(lVar28 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar28 + 0x54) = fVar44;
      *(float *)(lVar28 + 0x48) = fStack000000000000005c + (fVar49 - fVar44);
      *(float *)(lVar28 + 0x4c) = fVar49;
      if ((int)in_stack_000017ec < 0x2d) {
        if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar20 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar12 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar12;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar20 + 0x50) + 0x18) <= iVar12) {
              FUN_0358ca18();
              lVar20 = unaff_x19[0x6d];
              if (lVar20 == 0) goto LAB_0354fbf4;
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (lVar20 != 0) {
              if (*unaff_x20 < *(uint *)(lVar20 + 0x18)) {
                fVar46 = *(float *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017ec == 0x2029) || (fVar44 = 0.0, in_stack_000017ec == 10)) {
                    fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 0;
                  fVar44 = fVar46 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           in_stack_00000050 *
                           (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar44) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017ec == 0x2029) || (fVar44 = 0.0, in_stack_000017ec == 10)) {
                    fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 1;
                  fVar44 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar44);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar44;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar20 = *(long *)puVar7;
                }
                uVar17 = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar46;
                unaff_d11 = NEON_rev64(uVar17,4);
                unaff_x19[0x99] = unaff_d11;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
                bStack0000000000000068 = 1;
                in_stack_00000060 = 1;
                param_2 = unaff_d11;
                unaff_d11 = (ulong)(uint)fVar47;
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
    uVar13 = *unaff_x20;
    if (uVar30 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(char *)(lVar40 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
      lVar40 = lVar40 + (long)(int)uVar13 * unaff_x24;
      uVar22 = *(ulong *)(lVar40 + 0x11c);
      uVar19 = *(ulong *)(in_stack_00000078 + 0x230);
      *(ulong *)(in_stack_00000078 + 0x230) =
           uVar19 ^ (uVar19 ^ uVar22) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar22 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar22));
      uVar19 = *(ulong *)(in_stack_00000078 + 0x238);
      param_2 = *(ulong *)(lVar40 + 0x128);
      *(ulong *)(in_stack_00000078 + 0x238) =
           uVar19 ^ (uVar19 ^ param_2) &
                    ~CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)param_2 < (float)uVar19));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
      lVar40 = *(long *)(lVar20 + 0x58);
      if (lVar40 == 0) goto LAB_0354fbf4;
      iVar15 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar40 + 0x18) < iVar15) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar20 + 0x58),iVar15,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar20 = *unaff_x22;
        if (lVar20 == 0) goto LAB_0354fbf4;
      }
      lVar40 = *(long *)(lVar20 + 0x58);
      if (lVar40 == 0) goto LAB_0354fbf4;
      uVar30 = *(uint *)(unaff_x19 + 0x96);
      lVar28 = (long)(int)uVar30;
      uVar13 = *(uint *)(lVar40 + 0x18);
      if (uVar13 <= uVar30) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = lVar40 + lVar28 * 0x14;
      fVar44 = *(float *)(lVar33 + 0x30);
      param_2 = (ulong)(uint)fVar44;
      *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar44 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar46 = fVar44;
      }
      *(float *)(lVar33 + 0x30) = fVar46;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar34 == 0 && uVar30 == 0) {
        *(uint *)(lVar40 + (ulong)uVar30 * 0x14 + 0x20) = uVar34;
      }
      else {
        uVar31 = uVar34 - 1;
        if (0 < (int)uVar34) {
          lVar20 = *(long *)(lVar20 + 0x38);
          if (lVar20 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar20 + 0x18) <= uVar31)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (uVar30 != *(uint *)(lVar20 + (ulong)uVar31 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar30 - 1 < uVar13) {
              *(uint *)(lVar40 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar31;
              *(uint *)(lVar40 + 0x20 + lVar28 * 0x14) = uVar34;
              goto LAB_0354c780;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
        }
        if ((float)uVar34 == in_stack_00000080._4_4_) {
          *(float *)(lVar40 + lVar28 * 0x14 + 0x24) = in_stack_00000080._4_4_;
        }
      }
    }
LAB_0354c780:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
    if ((uVar11 == 0) &&
       (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
        if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
             (0x1d < in_stack_000017ec - 0xa961)) || (uVar19 = FUN_03597a54(0), (uVar19 & 1) != 0))
           && ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
                (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
        goto LAB_0354c904;
        lVar20 = FUN_035978e8(0);
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) goto LAB_0354fbf4;
        uVar13 = FUN_0219c130(*(long *)(lVar20 + 0x10),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
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
          if (uVar25 != uVar2 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
          if (uVar11 != 0) goto LAB_0354cb88;
          goto LAB_0354cbc0;
        }
        lVar20 = FUN_035978e8(0);
        if (((lVar20 == 0) || (*unaff_x22 == 0)) ||
           (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20 + 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(long *)(lVar20 + 0x18) == 0) goto LAB_0354fbf4;
        in_stack_000008b0 =
             (uint)*(ushort *)(lVar40 + (long)(int)(*unaff_x20 + 1) * (long)iVar12 + 0x20);
        uVar19 = FUN_0219c130(*(long *)(lVar20 + 0x18),&stack0x000008b0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar13 & 1) != 0) goto LAB_0354cb6c;
        if ((uVar19 & 1) == 0) goto LAB_0354cc08;
        if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
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
        if (uVar11 == 0) goto LAB_0354c910;
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
    unaff_d11 = (ulong)(uint)fVar47;
  }
LAB_03549564:
  in_stack_000017b8 = in_stack_000017b8 + 1;
  lVar20 = unaff_x19[0x8f];
  if (lVar20 == 0) goto LAB_0354fbf4;
  if ((int)*(uint *)(lVar20 + 0x18) <= (int)in_stack_000017b8) {
LAB_0354cf48:
    fVar46 = (float)param_2;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar46 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar44 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar46 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
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
        if (fVar44 <= fVar46) {
          fVar46 = fVar44;
        }
        goto LAB_0354d004;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar17 = FUN_0276793c(in_stack_00000038,0);
      uVar18 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar17 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar17,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar18,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar17,0);
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar10 == 3)))) {
      (**(code **)(*unaff_x19 + 0x928))();
      goto LAB_0354d0cc;
    }
    lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *(long *)puVar7;
    }
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
    lVar20 = **(long **)(lVar20 + 0xb8);
    if (lVar20 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    iVar12 = *(int *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x60), lVar20 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar20 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_035968e8(lVar20 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar15 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar20 = unaff_x19[0xeb];
    in_stack_000000b8 = (long *)uStack00000000000000f0;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar15 < 0x401) {
      if (iVar15 == 0x100) {
        if (lVar20 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar20 + 0x18) < 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar17 = *(undefined8 *)(lVar20 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x58), lVar40 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar46 = *(float *)(lVar40 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
        }
        else {
          fVar46 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar20 + 0x2c);
        fVar46 = (0.0 - fVar46) - fStack000000000000001c;
      }
      else if (iVar15 == 0x200) {
        if (lVar20 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fStack00000000000000c4 = (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
        uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar20 + 0x24) +
                          (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x58), lVar20 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar20 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar20 = lVar20 + (long)(int)uStack0000000000000034 * 0x14;
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
          fVar46 = ((fStack000000000000001c + *(float *)(lVar20 + 0x28) + *(float *)(lVar20 + 0x30))
                   - fStack0000000000000020) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
          fVar46 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                   fStack0000000000000020) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar15 != 0x400) goto LAB_0354d620;
        if (lVar20 == 0) goto LAB_0354fbf4;
        if (*(int *)(lVar20 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar17 = *(undefined8 *)(lVar20 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x58), lVar40 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          in_stack_000017e8 = *(float *)(lVar40 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar20 + 0x20);
        fVar46 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
      }
LAB_0354d610:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar46);
    }
    else if (iVar15 == 0x800) {
      if (lVar20 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar46 = fStack0000000000000028 + 0.0 +
               (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar20 + 0x24) +
                            (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar46;
    }
    else {
      if (iVar15 == 0x1000) {
        if (lVar20 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar20 + 0x18) != 1) && (*(int *)(lVar20 + 0x18) != 0)) {
          uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar20 + 0x24) +
                            (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
          fVar46 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
          goto LAB_0354d610;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      if (iVar15 == 0x2000) {
        if (lVar20 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar46 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                       fStack0000000000000020) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar20 + 0x24) +
                              (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5 + fVar46);
        fStack00000000000000c4 =
             fStack0000000000000028 + 0.0 +
             (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
      }
    }
LAB_0354d620:
    lVar20 = FUN_03559490();
    if (lVar20 == 0) goto LAB_0354fbf4;
    FUN_036df824(lVar20,0);
    *(float *)((long)unaff_x19 + 0x6e4) = fVar46;
    uVar14 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar7 = OVRPlugin_Mesh_TypeInfo;
    lVar20 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *(long *)puVar7;
    }
    puVar26 = *(undefined4 **)(lVar20 + 0xb8);
    FUN_035683a4(*puVar26,puVar26[1],puVar26[2],puVar26[3],&stack0x000017c0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar20 = *unaff_x22;
    if (lVar20 == 0) goto LAB_0354fbf4;
    uVar10 = *unaff_x20;
    if ((int)uVar10 < 1) {
      iStack00000000000000d8 = 0;
      iVar12 = 0;
      goto LAB_0354f7f4;
    }
    lVar20 = *(long *)(lVar20 + 0x38);
    if (lVar20 == 0) goto LAB_0354fbf4;
    bVar9 = false;
    bVar6 = false;
    bVar8 = false;
    fStack0000000000000124 = 0.0;
    bVar5 = false;
    iStack00000000000000d8 = 0;
    uStack0000000000000030 = 0;
    in_stack_00000168._4_4_ = 0.0;
    fStack000000000000005c = 0.0;
    lVar40 = 0x2e0;
    fVar47 = 0.0;
    fVar44 = 0.0;
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
    uVar11 = 0;
    uVar25 = 1;
    goto LAB_0354d7c0;
  }
  if (*(uint *)(lVar20 + 0x18) <= in_stack_000017b8)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  in_stack_000017ec = *(uint *)(lVar20 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
  if (in_stack_000017ec == 0) goto LAB_0354cf48;
  if (5 < in_stack_00000180) {
    uVar17 = FUN_0276793c(&stack0x000017ec,0);
    uVar18 = FUN_0276793c(&stack0x000017b8,0);
    uVar17 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar17,
                          *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar18,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
    }
    FUN_0367ae18(uVar17,0);
    in_stack_000017d8 = CONCAT44(3,*unaff_x20);
  }
  if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017ec == 0x3c)) {
    *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    uVar19 = FUN_03586568();
    if (((uVar19 & 1) == 0) ||
       (in_stack_000017b8 = in_stack_0000179c, uVar10 = in_stack_000017ec,
       *(int *)((long)unaff_x19 + 0x644) != 0)) goto LAB_03549378;
    goto LAB_03549564;
  }
  if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar20 + 0x2c);
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar20 + 0x58);
  unaff_x19[0x20] = *(long *)(lVar20 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (unaff_x25 = *(long *)(unaff_x19[0x6d] + 0x38), unaff_x25 == 0))
  goto LAB_0354fbf4;
  unaff_w28 = *unaff_x20;
  if (*(uint *)(unaff_x25 + 0x18) <= unaff_w28)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  unaff_x29 = (long)(int)unaff_w28;
  unaff_w26 = (uint)*(byte *)(unaff_x25 + unaff_x29 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  unaff_w27 = (undefined4)unaff_x19[0x24];
  if ((uint)in_stack_000017d8 != unaff_w28) {
    bVar9 = false;
    goto LAB_03549510;
  }
  in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  in_w8 = in_stack_000017ec;
  if (in_stack_000017ec != 0x2026) goto code_r0x035493d0;
  *(long *)(unaff_x25 + unaff_x29 * unaff_x24 + 0x30) = unaff_x19[0xca];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = lVar20 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar20 + 0x2c) = 0;
  *(long *)(lVar20 + 0x38) = unaff_x19[0xcb];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x38), lVar20 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(long *)(lVar20 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  unaff_w28 = *unaff_x20;
  if (*(uint *)(lVar20 + 0x18) <= unaff_w28)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  bVar9 = true;
  *(int *)(lVar20 + (long)(int)unaff_w28 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  in_stack_000017d8 = CONCAT44(3,unaff_w28 + 1);
  goto LAB_03549510;
LAB_0354d7c0:
  uVar10 = uVar25 - 1;
  if (*(uint *)(lVar20 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x50), lVar28 == 0)) goto LAB_0354fbf4;
  lVar41 = (long)(int)uVar10;
  lVar33 = lVar20 + lVar41 * 0x178;
  uVar2 = *(uint *)(lVar33 + 100);
  if (*(uint *)(lVar28 + 0x18) <= uVar2)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = *(long *)(lVar33 + 0x38);
  lVar38 = (long)(int)uVar2;
  lVar28 = lVar28 + lVar38 * 0x5c;
  uVar13 = *(uint *)(lVar28 + 0x68);
  uVar31 = (uint)*(ushort *)(lVar33 + 0x20);
  uVar30 = *(uint *)(lVar28 + 0x3c);
  iVar3 = *(int *)(lVar28 + 0x20);
  iVar15 = *(int *)(lVar28 + 0x28);
  iVar16 = *(int *)(lVar28 + 0x2c);
  fVar49 = *(float *)(lVar28 + 0x4c);
  uVar34 = *(uint *)(lVar28 + 0x40);
  fVar48 = *(float *)(lVar28 + 0x54);
  fVar57 = *(float *)(lVar28 + 0x58);
  fVar58 = *(float *)(lVar28 + 0x5c);
  fVar59 = *(float *)(lVar28 + 0x60);
  fVar55 = *(float *)(lVar28 + 0x6c);
  fVar61 = *(float *)(lVar28 + 0x70);
  fVar53 = *(float *)(lVar28 + 0x74);
  fVar50 = *(float *)(lVar28 + 0x78);
  if ((int)uVar13 < 9) {
    switch(uVar13) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar59 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar57;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar59 + fVar58 * 0.5) - fVar57 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar58 + fVar59) - fVar57;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar58 + fVar59;
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
    if (uVar31 < 0xad) {
      if ((uVar31 != 3) && (uVar31 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar31 != 0xad) && ((uVar31 != 0x200b && (uVar31 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar20 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar4 = *(undefined2 *)(lVar20 + (long)(int)uVar30 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b8cc4(uVar4,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar57 <= fVar58) && (!bVar1 && uVar13 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar59;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar59;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar25 == 1) || (uVar2 != uVar11)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar59;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar59;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar31,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar59 = -fVar57;
        if (cVar24 != '\0') {
          fVar59 = fVar57;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar30)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar16 = (int)*(char *)(lVar20 + (long)(int)uVar30 * 0x178 + 0x194) +
                 (-iVar3 - (uStack0000000000000030 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar57 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar57 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar31 == 9) {
LAB_0354f76c:
          fVar57 = 1.0 - fVar57;
        }
        else {
          if (uVar31 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar31,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_0354f76c;
          }
          iVar16 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar15;
        }
        fVar57 = ((fVar58 + fVar59) * fVar57) / (float)iVar16;
        if (cVar24 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar57;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar57;
        }
      }
    }
  }
  else if (uVar13 == 0x20) {
    fVar57 = fVar55 + fVar53;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar13 = (uint)*(undefined8 *)(lVar20 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar20 + lVar41 * 0x178;
  fVar59 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar57 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar58 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar28 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar15 = *(int *)(lVar20 + lVar41 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0354e05c;
  fVar47 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar33 = lVar20 + lVar41 * 0x178;
    *(undefined4 *)(lVar33 + 0x84) = 0;
    *(undefined4 *)(lVar33 + 0xac) = 0;
    *(undefined4 *)(lVar33 + 0xd4) = 0x3f800000;
    fVar47 = 1.0;
    break;
  case 1:
    fVar50 = *(float *)(lVar20 + lVar41 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar33 = lVar20 + lVar41 * 0x178;
      fVar53 = (in_stack_000000f8._4_4_ + fVar50) - *(float *)(in_stack_00000078 + 0x230);
      fVar50 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar33 = lVar20 + lVar41 * 0x178;
    fVar53 = fVar53 - fVar55;
    *(float *)(lVar33 + 0x84) = fVar47 + (fVar50 - fVar55) / fVar53;
    *(float *)(lVar33 + 0xac) = fVar47 + (*(float *)(lVar33 + 0x98) - fVar55) / fVar53;
    *(float *)(lVar33 + 0xd4) = fVar47 + (*(float *)(lVar33 + 0xc0) - fVar55) / fVar53;
    fVar47 = fVar47 + (*(float *)(lVar33 + 0xe8) - fVar55) / fVar53;
    break;
  case 2:
    lVar33 = lVar20 + lVar41 * 0x178;
    fVar50 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar53 = (in_stack_000000f8._4_4_ + *(float *)(lVar33 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar33 + 0x84) = fVar47 + fVar53 / fVar50;
    *(float *)(lVar33 + 0xac) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar33 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar33 + 0xd4) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar33 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar47 = fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar33 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar33 = lVar20 + lVar41 * 0x178;
      *(undefined4 *)(lVar33 + 0x88) = 0;
      *(undefined4 *)(lVar33 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar33 + 0xd8) = 0;
      *(undefined4 *)(lVar33 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar33 = lVar20 + lVar41 * 0x178;
      fVar50 = fVar50 - fVar61;
      fVar53 = fVar47 + (*(float *)(lVar33 + 0x74) - fVar61) / fVar50;
      fVar50 = fVar47 + (*(float *)(lVar33 + 0x9c) - fVar61) / fVar50;
      *(float *)(lVar33 + 0x88) = fVar53;
      *(float *)(lVar33 + 0xb0) = fVar50;
      *(float *)(lVar33 + 0xd8) = fVar53;
      *(float *)(lVar33 + 0x100) = fVar50;
      break;
    case 2:
      lVar33 = lVar20 + lVar41 * 0x178;
      fVar53 = fVar47 + (*(float *)(lVar33 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar33 + 0x88) = fVar53;
      fVar50 = *(float *)(unaff_x19 + 0x9c);
      fVar55 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar33 + 0xd8) = fVar53;
      fVar53 = fVar47 + (*(float *)(lVar33 + 0x9c) - fVar50) / (fVar55 - fVar50);
      *(float *)(lVar33 + 0xb0) = fVar53;
      *(float *)(lVar33 + 0x100) = fVar53;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar13 = (uint)*(undefined8 *)(lVar20 + 0x18);
    }
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = lVar20 + lVar41 * 0x178;
    fVar53 = *(float *)(lVar33 + 0x15c);
    fVar50 = (1.0 - (*(float *)(lVar33 + 0x88) + *(float *)(lVar33 + 0xb0)) * fVar53) * 0.5;
    fVar55 = fVar47 + *(float *)(lVar33 + 0x88) * fVar53 + fVar50;
    fVar47 = fVar47 + fVar50 + *(float *)(lVar33 + 0xb0) * fVar53;
    *(float *)(lVar33 + 0x84) = fVar55;
    *(float *)(lVar33 + 0xac) = fVar55;
    *(float *)(lVar33 + 0xd4) = fVar47;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar20 + lVar41 * 0x178 + 0xfc) = fVar47;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = lVar20 + lVar41 * 0x178;
    *(undefined4 *)(lVar33 + 0x88) = 0;
    *(undefined4 *)(lVar33 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar33 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar33 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar13) {
      lVar33 = lVar20 + lVar41 * 0x178;
      fVar49 = fVar49 - fVar48;
      fVar47 = (*(float *)(lVar33 + 0x74) - fVar48) / fVar49;
      fVar49 = (*(float *)(lVar33 + 0x9c) - fVar48) / fVar49;
      *(float *)(lVar33 + 0x88) = fVar47;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = lVar20 + lVar41 * 0x178;
    fVar47 = (*(float *)(lVar33 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar33 + 0x88) = fVar47;
    fVar49 = (*(float *)(lVar33 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar33 + 0xb0) = fVar49;
    *(float *)(lVar33 + 0xd8) = fVar49;
    *(float *)(lVar33 + 0x100) = fVar47;
    break;
  case 3:
    if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = lVar20 + lVar41 * 0x178;
    fVar49 = *(float *)(lVar33 + 0x15c);
    fVar53 = (1.0 - (*(float *)(lVar33 + 0x84) + *(float *)(lVar33 + 0xd4)) / fVar49) * 0.5;
    fVar47 = *(float *)(lVar33 + 0x84) / fVar49 + fVar53;
    fVar53 = fVar53 + *(float *)(lVar33 + 0xd4) / fVar49;
    *(float *)(lVar33 + 0x88) = fVar47;
    *(float *)(lVar33 + 0xb0) = fVar53;
    *(float *)(lVar33 + 0x100) = fVar47;
    *(float *)(lVar33 + 0xd8) = fVar53;
  }
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = lVar20 + lVar41 * 0x178;
  fVar47 = ABS(fVar46) * *(float *)(lVar33 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar33 + 0x5c) == '\0') && ((*(byte *)(lVar20 + lVar41 * 0x178 + 400) & 1) != 0)) {
    fVar47 = -fVar47;
  }
  lVar33 = lVar20 + lVar41 * 0x178;
  fVar49 = *(float *)(lVar33 + 0x88);
  fVar50 = *(float *)(lVar33 + 0x84);
  fVar53 = -2.1474836e+09;
  if (fVar50 != INFINITY) {
    fVar53 = (float)(int)fVar50;
  }
  fVar55 = *(float *)(lVar33 + 0xd4);
  fVar61 = *(float *)(lVar33 + 0xd8);
  fVar48 = -2.1474836e+09;
  if (fVar49 != INFINITY) {
    fVar48 = (float)(int)fVar49;
  }
  uVar45 = FUN_03591d3c(fVar50 - fVar53,fVar49 - fVar48);
  *(undefined4 *)(lVar33 + 0x84) = uVar45;
  if (*(uint *)(lVar20 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar61 = fVar61 - fVar48;
  *(float *)(lVar33 + 0x88) = fVar47;
  uVar45 = FUN_03591d3c(fVar50 - fVar53,fVar61);
  *(undefined4 *)(lVar20 + lVar41 * 0x178 + 0xac) = uVar45;
  if (*(uint *)(lVar20 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar55 = fVar55 - fVar53;
  *(float *)(lVar20 + lVar41 * 0x178 + 0xb0) = fVar47;
  fVar53 = (float)FUN_03591d3c(fVar55,fVar61);
  *(float *)(lVar33 + 0xd4) = fVar53;
  if (*(uint *)(lVar20 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar33 + 0xd8) = fVar47;
  uVar45 = FUN_03591d3c(fVar55,fVar49 - fVar48);
  *(undefined4 *)(lVar20 + lVar41 * 0x178 + 0xfc) = uVar45;
  uVar13 = (uint)*(undefined8 *)(lVar20 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar20 + lVar41 * 0x178 + 0x100) = fVar47;
LAB_0354e05c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar28 = lVar20 + lVar41 * 0x178;
      *(ulong *)(lVar28 + 0x70) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0x70));
      *(float *)(lVar28 + 0x78) = fVar58 + *(float *)(lVar28 + 0x78);
      *(ulong *)(lVar28 + 0x98) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0x98));
      *(float *)(lVar28 + 0xa0) = fVar58 + *(float *)(lVar28 + 0xa0);
      *(ulong *)(lVar28 + 0xc0) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0xc0));
      *(float *)(lVar28 + 200) = fVar58 + *(float *)(lVar28 + 200);
      *(ulong *)(lVar28 + 0xe8) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0xe8));
      *(float *)(lVar28 + 0xf0) = fVar58 + *(float *)(lVar28 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar13) {
        if (*(uint *)(lVar20 + lVar41 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
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
    uVar13 = *(uint *)(lVar20 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar33 = lVar20 + lVar41 * 0x178;
  *(undefined8 *)(lVar33 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar33 + 0x78) = uVar45;
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar33 = lVar20 + lVar41 * 0x178;
  *(undefined8 *)(lVar33 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar33 + 0xa0) = uVar45;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar33 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar33 + 200) = uVar45;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar33 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar33 + 0xf0) = uVar45;
  *(undefined1 *)(lVar28 + 0x194) = 0;
LAB_0354e184:
  if (iVar15 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar29)();
  }
  else if (iVar15 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar41 * 0x178;
  uVar17 = *(undefined8 *)(lVar28 + 0x11c);
  *(undefined8 *)(lVar28 + 0x11c) =
       CONCAT44(fVar57 + (float)((ulong)uVar17 >> 0x20),fVar59 + (float)uVar17);
  *(float *)(lVar28 + 0x124) = fVar58 + *(float *)(lVar28 + 0x124);
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar41 * 0x178;
  *(ulong *)(lVar28 + 0x110) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar28 + 0x110) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar28 + 0x110));
  *(float *)(lVar28 + 0x118) = fVar58 + *(float *)(lVar28 + 0x118);
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar41 * 0x178;
  *(ulong *)(lVar28 + 0x128) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar28 + 0x128) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar28 + 0x128));
  *(float *)(lVar28 + 0x130) = fVar58 + *(float *)(lVar28 + 0x130);
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar28 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar28 = lVar28 + lVar41 * 0x178;
  *(float *)(lVar28 + 0x134) = fVar59 + *(float *)(lVar28 + 0x134);
  *(ulong *)(lVar28 + 0x138) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar28 + 0x138) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar28 + 0x138));
  lVar28 = *unaff_x22;
  if ((lVar28 == 0) || (lVar33 = *(long *)(lVar28 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  uVar13 = *(uint *)(lVar33 + 0x18);
  if (uVar13 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar33 + lVar41 * 0x178;
  *(float *)(lVar36 + 0x150) = fVar57 + *(float *)(lVar36 + 0x150);
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar36 + 0x140));
  *(ulong *)(lVar36 + 0x148) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar36 + 0x148));
  if (uVar2 == uVar11) {
    uVar11 = *unaff_x20 - 1;
    if (uVar10 == uVar11) goto LAB_0354e3ec;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar28 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar36 = (long)(int)uVar11;
    lVar37 = lVar28 + lVar36 * 0x5c;
    fVar53 = fVar57 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar53;
    *(float *)(lVar37 + 0x58) = fVar59 + *(float *)(lVar37 + 0x58);
    if (uVar13 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar45 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar28 = lVar28 + lVar36 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar53;
    *(undefined4 *)(lVar28 + 0x6c) = uVar45;
    lVar28 = *unaff_x22;
    if ((lVar28 == 0) || (lVar33 = *(long *)(lVar28 + 0x50), lVar33 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar33 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_0354fbf4;
    uVar11 = *(uint *)(lVar33 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar28 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = lVar33 + lVar36 * 0x5c;
    *(undefined4 *)(lVar33 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar11 * 0x178 + 0x128);
    *(undefined4 *)(lVar33 + 0x78) = *(undefined4 *)(lVar33 + 0x4c);
    uVar11 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar10 == uVar11) {
      lVar28 = *unaff_x22;
      if ((lVar28 == 0) || (lVar33 = *(long *)(lVar28 + 0x50), lVar33 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar33 + lVar38 * 0x5c;
      fVar53 = fVar57 + *(float *)(lVar36 + 0x54);
      *(ulong *)(lVar36 + 0x4c) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar36 + 0x4c));
      *(float *)(lVar36 + 0x54) = fVar53;
      *(float *)(lVar36 + 0x58) = fVar59 + *(float *)(lVar36 + 0x58);
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar36 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar45 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar33 = lVar33 + lVar38 * 0x5c;
      *(float *)(lVar33 + 0x70) = fVar53;
      *(undefined4 *)(lVar33 + 0x6c) = uVar45;
      lVar28 = *unaff_x22;
      if ((lVar28 == 0) || (lVar33 = *(long *)(lVar28 + 0x50), lVar33 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      uVar11 = *(uint *)(lVar33 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar28 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = lVar33 + lVar38 * 0x5c;
      *(undefined4 *)(lVar33 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar11 * 0x178 + 0x128);
      *(undefined4 *)(lVar33 + 0x78) = *(undefined4 *)(lVar33 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar31,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
    if (bVar8) {
      if (((uVar25 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar20 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
        if (*(uint *)(lVar20 + 0x18) <= uVar25 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar20 + lVar40 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar4,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar20 + 0x18) <= uVar25)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar20 + lVar40 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar4,0);
          if ((uVar19 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar25 != 1) {
LAB_0354f144:
        bVar8 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b81f8(uVar31,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b63d8(uVar31,0);
        if (((uVar31 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b82c4(uVar31,0);
      iVar15 = (int)fStack0000000000000124;
      if ((uVar19 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar15 = uVar25 - 2;
    }
    lVar28 = *unaff_x22;
    if (lVar28 == 0) goto LAB_0354fbf4;
    lVar33 = *(long *)(lVar28 + 0x40);
    if (lVar33 == 0) goto LAB_0354fbf4;
    uVar11 = *(uint *)(lVar28 + 0x24);
    iVar16 = *(int *)(lVar33 + 0x18);
    if (iVar16 < (int)(uVar11 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar28 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar28 = *unaff_x22;
      if (lVar28 == 0) goto LAB_0354fbf4;
    }
    lVar28 = *(long *)(lVar28 + 0x40);
    if (lVar28 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar28 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar28 = lVar28 + (long)(int)uVar11 * 0x18;
    *(long **)(lVar28 + 0x20) = unaff_x19;
    *(float *)(lVar28 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar28 + 0x2c) = iVar15;
    *(int *)(lVar28 + 0x30) = (iVar15 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar28 = unaff_x19[0x6d];
    if (lVar28 == 0) goto LAB_0354fbf4;
    lVar33 = *(long *)(lVar28 + 0x50);
    *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
    if (lVar33 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar33 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = lVar33 + lVar38 * 0x5c;
    bVar8 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar33 + 0x30) = *(int *)(lVar33 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      in_stack_00000168._4_4_ = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar28 = *unaff_x22;
      if (lVar28 == 0) goto LAB_0354fbf4;
      lVar33 = *(long *)(lVar28 + 0x40);
      if (lVar33 == 0) goto LAB_0354fbf4;
      uVar11 = *(uint *)(lVar28 + 0x24);
      iVar15 = *(int *)(lVar33 + 0x18);
      if (iVar15 < (int)(uVar11 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar28 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar28 = *unaff_x22;
        if (lVar28 == 0) goto LAB_0354fbf4;
      }
      lVar28 = *(long *)(lVar28 + 0x40);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + (long)(int)uVar11 * 0x18;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      *(float *)(lVar28 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar28 + 0x2c) = uVar10;
      *(uint *)(lVar28 + 0x30) = uVar25 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar28 = unaff_x19[0x6d];
      if (lVar28 == 0) goto LAB_0354fbf4;
      lVar33 = *(long *)(lVar28 + 0x50);
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
      if (lVar33 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = lVar33 + lVar38 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar33 + 0x30) = *(int *)(lVar33 + 0x30) + 1;
    }
LAB_0354e610:
    bVar8 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  uVar11 = *(uint *)(lVar28 + 0x18);
  if (uVar11 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar28 + lVar41 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0354e660:
      if (uVar11 <= uVar25 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = *unaff_x19;
      uVar45 = *(undefined4 *)(lVar28 + lVar40 + -0x330);
      uVar51 = *(undefined4 *)(lVar28 + lVar40 + -0x2f8);
LAB_0354ebc0:
      pcVar29 = *(code **)(lVar33 + 0x8d8);
LAB_0354ebc8:
      (*pcVar29)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar45,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar51);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar28 = *(long *)puVar7;
      }
LAB_0354ec1c:
      fVar44 = 0.0;
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
    lVar28 = lVar28 + lVar41 * 0x178;
    iVar15 = *(int *)(lVar28 + 0x68);
    *(int *)(lVar28 + 0x16c) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b63d8(uVar31,0);
    if ((uVar31 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar28 = *unaff_x22;
      if ((lVar28 == 0) || (lVar33 = *(long *)(lVar28 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar53 = *(float *)(lVar33 + lVar41 * 0x178 + 0x160);
      if (fVar44 <= fVar53) {
        fVar44 = fVar53;
      }
      if (fStack0000000000000100 <= ABS(fVar47)) {
        fStack0000000000000100 = ABS(fVar47);
      }
      if ((float)iVar15 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *unaff_x22;
          if (lVar28 == 0) goto LAB_0354fbf4;
          lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar33 + 0x15a8);
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar49 = *(float *)(lVar28 + lVar41 * 0x178 + 0x14c);
      fVar53 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar49 = fVar49 + fVar44 * fVar53;
      fStack000000000000005c = (float)iVar15;
      if (fVar49 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar49;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar31,0);
        if ((uVar19 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar41 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar28 + 0x160);
      fStack0000000000000070 = *(float *)(lVar28 + 0x11c);
      bVar9 = fVar44 != 0.0;
      fVar53 = in_stack_00000080._4_4_;
      if (bVar9) {
        fVar53 = fVar44;
      }
      fVar44 = fVar53;
      uVar14 = *(undefined4 *)(lVar28 + 0x168);
      _bStack000000000000006c = 0;
      fVar53 = fVar47;
      if (bVar9) {
        fVar53 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar53;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        if (uVar10 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar41 * 0x178;
          lVar33 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar28 + 0x128);
          uVar51 = *(undefined4 *)(lVar28 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar10 == uVar30) || ((int)uVar34 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar31,0);
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        lVar33 = lVar41;
        uVar11 = uVar10;
        if (uVar31 == 0x200b || (uVar19 & 1) != 0) {
          lVar33 = (long)(int)uVar34;
          uVar11 = uVar34;
        }
        if (uVar11 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar33 * 0x178;
          uVar45 = *(undefined4 *)(lVar28 + 0x128);
          uVar51 = *(undefined4 *)(lVar28 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        uVar11 = *(uint *)(lVar28 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar25)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar19 = FUN_03567ad8(uVar14,*(undefined4 *)(lVar28 + lVar40),0);
      if ((uVar19 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
          if (uVar10 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar41 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar28 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar28 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)puVar7;
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
  uVar11 = *(uint *)(lVar28 + lVar41 * 0x178 + 400);
  fVar53 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar11 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar25 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar45 = *(undefined4 *)(lVar28 + lVar40 + -0x330);
      fVar57 = *(float *)(lVar28 + lVar40 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar29)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar45,
                 fStack00000000000000a8 * fVar53 + fVar57,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar5 = false;
  }
  else {
    lVar28 = *unaff_x22;
    if ((lVar28 == 0) || (lVar33 = *(long *)(lVar28 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar33 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar33 + lVar41 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar33 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
       (bVar5 || !bVar1)) {
LAB_0354ed84:
      if (!bVar5) goto LAB_0354f250;
    }
    else {
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar31,0);
        if ((uVar19 & 1) != 0) goto LAB_0354ed84;
        lVar28 = *unaff_x22;
        if (lVar28 == 0) goto LAB_0354fbf4;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar28 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar41 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar28 + 0x60);
      fStack0000000000000040 = *(float *)(lVar28 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar28 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar28 + 0x160);
      fStack000000000000009c = fVar53 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar11 = *unaff_x20;
    if (uVar11 == 1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        uVar11 = *(uint *)(lVar28 + 0x18);
LAB_0354ef0c:
        if (uVar10 < uVar11) {
          lVar28 = lVar28 + lVar41 * 0x178;
          lVar33 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar28 + 0x128);
          fVar57 = *(float *)(lVar28 + 0x14c);
LAB_0354ef24:
          pcVar29 = *(code **)(lVar33 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar10 == uVar30) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar31,0);
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        uVar11 = *(uint *)(lVar28 + 0x18);
        if (uVar31 == 0x200b || (uVar19 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar33 = lVar41;
        if (uVar10 < uVar11) {
LAB_0354f1f8:
          lVar28 = lVar28 + lVar33 * 0x178;
          fVar57 = *(float *)(lVar28 + 0x14c);
          uVar45 = *(undefined4 *)(lVar28 + 0x128);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)uVar11) {
      lVar28 = *unaff_x22;
      if ((lVar28 != 0) && (lVar33 = *(long *)(lVar28 + 0x38), lVar33 != 0)) {
        if (uVar25 < *(uint *)(lVar33 + 0x18)) {
          if (*(float *)(lVar33 + lVar40 + -0x108) == in_stack_00000048._4_4_) {
            fVar49 = *(float *)(lVar33 + lVar40 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_03567bac(fVar57 + fVar49,fStack0000000000000040,0);
            if ((uVar19 & 1) != 0) {
              uVar11 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar28 = *unaff_x22;
            if (lVar28 == 0) goto LAB_0354fbf4;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            uVar11 = *(uint *)(lVar28 + 0x18);
            if ((int)uVar10 <= (int)uVar34) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar33 = (long)(int)uVar34;
            if (uVar34 < uVar11) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar10 < (int)uVar11) {
      iVar15 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar20 + 0x18) <= uVar25)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = *(long *)(lVar20 + lVar40 + -0x130);
      if (lVar28 == 0) goto LAB_0354fbf4;
      iVar16 = FUN_036d3364(lVar28,0);
      if (iVar15 != iVar16) {
        if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
          uVar11 = *(uint *)(lVar28 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
        if (uVar25 - 2 < *(uint *)(lVar28 + 0x18)) {
          lVar33 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar28 + lVar40 + -0x330);
          fVar57 = *(float *)(lVar28 + lVar40 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar5 = true;
  }
  if ((*unaff_x22 == 0) || (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 == 0)) goto LAB_0354fbf4;
  uVar11 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar11 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar28 + lVar41 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar28 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar6) {
LAB_0354f400:
      if (uVar11 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = lVar28 + lVar41 * 0x178;
      fVar53 = *(float *)(lVar28 + 0x128);
      fVar48 = *(float *)(lVar28 + 0x188);
      uVar18 = *(undefined8 *)(lVar28 + 0x17c);
      fVar58 = *(float *)(lVar28 + 0x184);
      uVar17 = *(undefined8 *)(lVar28 + 0x184);
      fVar55 = *(float *)(lVar28 + 0x18c);
      fVar57 = *(float *)(lVar28 + 0x11c);
      fVar49 = *(float *)(lVar28 + 0x148);
      fVar50 = *(float *)(lVar28 + 0x150);
      in_stack_00000188 = uVar18;
      fStack0000000000000190 = fVar58;
      fStack0000000000000194 = fVar48;
      in_stack_00000198 = fVar55;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar19 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar28 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar19 & 1) == 0) {
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar28);
        }
        fVar53 = fVar53 + (float)in_stack_000017c8;
        fVar57 = fVar57 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar49 = fVar49 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar57 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar57;
        }
        if (fVar50 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar50 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar53) {
          fStack00000000000000d0 = fVar53;
        }
        if (fStack00000000000000d4 <= fVar49) {
          fStack00000000000000d4 = fVar49;
        }
      }
      else {
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar28);
        }
        fVar57 = (fVar57 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar50 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar50;
        }
        if (fStack00000000000000d4 <= fVar49) {
          fStack00000000000000d4 = fVar49;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar57,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar50 - fVar55;
        fStack00000000000000d0 = fVar53 + fVar58;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar49 + fVar48;
        fStack00000000000000e0 = fVar57;
        in_stack_000017c0 = uVar18;
        in_stack_000017c8 = uVar17;
        in_stack_000017d0 = fVar55;
      }
      if (((*unaff_x20 == 1) || (uVar10 == uVar30)) || (((int)uVar34 <= (int)uVar10 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar6 = true;
    }
    else {
      if ((((uVar31 != 0xd) && ((uVar31 & 0xfffe) != 10)) && ((int)uVar10 <= (int)uVar34)) &&
         (bVar1)) {
        if (uVar10 == uVar34) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar31,0);
          if ((uVar19 & 1) != 0) goto LAB_0354f374;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar33 = *(long *)puVar7;
        }
        if ((*unaff_x22 != 0) && (lVar28 = *(long *)(*unaff_x22 + 0x38), lVar28 != 0)) {
          uVar11 = (uint)*(undefined8 *)(lVar28 + 0x18);
          if (uVar10 < uVar11) {
            lVar33 = *(long *)(lVar33 + 0xb8);
            lVar35 = lVar28 + lVar41 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar35 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar35 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar33 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar33 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar35 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar33 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar33 + 0x15a4);
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
  uVar10 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar40 = lVar40 + 0x178;
  bVar1 = (int)uVar10 <= (int)uVar25;
  uVar11 = uVar2;
  uVar25 = uVar25 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar20 = *unaff_x22;
  if (lVar20 != 0) {
    iVar12 = uVar2 + 1;
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar20 + 0x18) = uVar10;
    lVar40 = unaff_x19[0xd4];
    *(int *)(lVar20 + 0x2c) = iVar12;
    if ((int)uVar10 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar20 + 0x1c) = (int)lVar40;
    *(int *)(lVar20 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar20 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar20 = unaff_x19[0xdb];
    if (lVar20 != 0) {
      (**(code **)(lVar20 + 0x18))
                (*(undefined8 *)(lVar20 + 0x40),*unaff_x22,*(undefined8 *)(lVar20 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x60), lVar20 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar20 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar20 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
        if (*(int *)(lVar20 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
            if (*(int *)(lVar20 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
                if (*(int *)(lVar20 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
                    if (*(int *)(lVar20 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar20 = *unaff_x22;
                        if (lVar20 != 0) {
                          lVar28 = 0;
                          lVar40 = 0;
                          do {
                            uVar19 = lVar40 + 1;
                            if ((long)*(int *)(lVar20 + 0x34) <= (long)uVar19) goto LAB_0354d0cc;
                            lVar20 = *(long *)(lVar20 + 0x60);
                            if (lVar20 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar20 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar20 + lVar28 + 0x70,0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar17 = *(undefined8 *)(lVar20 + lVar40 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar22 = FUN_036d35a8(uVar17,0,0);
                            if ((uVar22 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar20 = *(long *)(*unaff_x22 + 0x60), lVar20 == 0)) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar20 + 0x18) <= uVar19)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar20 + lVar28 + 0x70,1,0);
                              }
                              lVar20 = unaff_x19[0xe1];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar20 = *(long *)(lVar20 + lVar40 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_0359d5ac(lVar20,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar33 = *(long *)(*unaff_x22 + 0x60), lVar33 == 0)) break;
                              if (*(uint *)(lVar33 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar20 == 0) break;
                              FUN_036a460c(lVar20,*(undefined8 *)(lVar33 + lVar28 + 0x80),0);
                              lVar20 = unaff_x19[0xe1];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar20 = *(long *)(lVar20 + lVar40 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_0359d5ac(lVar20,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar33 = *(long *)(*unaff_x22 + 0x60), lVar33 == 0)) break;
                              if (*(uint *)(lVar33 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar20 == 0) break;
                              FUN_036a4810(lVar20,*(undefined8 *)(lVar33 + lVar28 + 0x98),0);
                              lVar20 = unaff_x19[0xe1];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar20 = *(long *)(lVar20 + lVar40 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_0359d5ac(lVar20,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar33 = *(long *)(*unaff_x22 + 0x60), lVar33 == 0)) break;
                              if (*(uint *)(lVar33 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar20 == 0) break;
                              FUN_036a48bc(lVar20,*(undefined8 *)(lVar33 + lVar28 + 0xa0),0);
                              lVar20 = unaff_x19[0xe1];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar20 = *(long *)(lVar20 + lVar40 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_0359d5ac(lVar20,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar33 = *(long *)(*unaff_x22 + 0x60), lVar33 == 0)) break;
                              if (*(uint *)(lVar33 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar20 == 0) break;
                              FUN_036a4e24(lVar20,*(undefined8 *)(lVar33 + lVar28 + 0xa8),0);
                              lVar20 = unaff_x19[0xe1];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar20 = *(long *)(lVar20 + lVar40 * 8 + 0x28);
                              if ((lVar20 == 0) || (lVar20 = FUN_0359d5ac(lVar20,0), lVar20 == 0))
                              break;
                              FUN_036aa280(lVar20,0);
                            }
                            lVar20 = *unaff_x22;
                            lVar40 = lVar40 + 1;
                            lVar28 = lVar28 + 0x50;
                          } while (lVar20 != 0);
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


