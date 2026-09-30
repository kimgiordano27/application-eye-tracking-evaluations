/*
FUNCTION_NAME: UnityEngine.AndroidReflection$$GetFieldClass
ENTRY_POINT: 0354eea0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_18
*/


void UnityEngine_AndroidReflection__GetFieldClass(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar21;
  uint uVar22;
  uint unaff_w21;
  long lVar23;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar24;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float unaff_s11;
  float fVar39;
  float fVar40;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  long *in_stack_00000050;
  float fStack0000000000000058;
  int iStack000000000000005c;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  int *in_stack_00000090;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  long in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  uint uStack00000000000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  int iStack0000000000000128;
  undefined8 in_stack_00000130;
  float in_stack_00000150;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  uint in_stack_00000178;
  uint in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined4 in_stack_000017d4;
  
code_r0x0354eea0:
  if (unaff_w24 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + unaff_x29 * unaff_x23;
    fVar25 = *(float *)(param_1 + 0x60);
    fVar29 = *(float *)(param_1 + 0x14c);
    uVar30 = *(undefined4 *)(param_1 + 0x11c);
    fVar26 = *(float *)(param_1 + 0x160);
    fVar27 = unaff_s11 * fVar26;
LAB_0354eee8:
    iVar9 = *unaff_x20;
    if (iVar9 == 1) {
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
      goto LAB_0354fbf4;
      uVar14 = *(uint *)(lVar15 + 0x18);
LAB_0354ef0c:
      if (uVar14 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = lVar15 + unaff_x29 * unaff_x23;
      lVar19 = *unaff_x19;
      uVar32 = *(undefined4 *)(lVar15 + 0x128);
      fVar28 = *(float *)(lVar15 + 0x14c);
LAB_0354ef24:
      pcVar16 = *(code **)(lVar19 + 0x8d8);
    }
    else {
      if (unaff_w24 == uStack00000000000000e8) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b63d8(in_stack_00000178,0);
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
        goto LAB_0354fbf4;
        uVar14 = *(uint *)(lVar15 + 0x18);
        if (in_stack_00000178 == 0x200b || (uVar11 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar19 = unaff_x29;
        if (uVar14 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      else {
        if (iVar9 <= (int)unaff_w24) {
LAB_0354f010:
          if ((int)unaff_w24 < iVar9) {
            iVar9 = FUN_036d3364(in_stack_00000110,0);
            if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar15 = *(long *)(unaff_x25 + unaff_x26 + -0x130);
            if (lVar15 == 0) goto LAB_0354fbf4;
            iVar10 = FUN_036d3364(lVar15,0);
            if (iVar9 != iVar10) {
              if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
                uVar14 = *(uint *)(lVar15 + 0x18);
                unaff_x20 = in_stack_00000090;
                goto LAB_0354ef0c;
              }
              goto LAB_0354fbf4;
            }
          }
          if ((unaff_w21 & 1) != 0) {
            bVar6 = true;
            unaff_x20 = in_stack_00000090;
            uVar14 = in_stack_00000180;
            goto LAB_0354f254;
          }
          if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
            if (in_stack_00000170 - 2 < *(uint *)(lVar15 + 0x18)) {
              lVar19 = *unaff_x19;
              uVar32 = *(undefined4 *)(lVar15 + unaff_x26 + -0x330);
              fVar28 = *(float *)(lVar15 + unaff_x26 + -0x30c);
              unaff_x20 = in_stack_00000090;
              goto LAB_0354ef24;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        lVar15 = *unaff_x22;
        if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(float *)(lVar19 + unaff_x26 + -0x108) == fVar25) {
          fVar28 = *(float *)(lVar19 + unaff_x26 + -0x1c);
          if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_03567bac(in_stack_00000150 + fVar28,fVar29,0);
          if ((uVar11 & 1) != 0) {
            iVar9 = *unaff_x20;
            goto LAB_0354f010;
          }
          lVar15 = *unaff_x22;
          if (lVar15 == 0) goto LAB_0354fbf4;
        }
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        uVar14 = *(uint *)(lVar15 + 0x18);
        if ((int)unaff_w24 <= (int)(uint)unaff_x27) goto LAB_0354f1f0;
LAB_0354f1e0:
        lVar19 = unaff_x27;
        if (uVar14 <= (uint)unaff_x27)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      lVar15 = lVar15 + lVar19 * unaff_x23;
      fVar28 = *(float *)(lVar15 + 0x14c);
      uVar32 = *(undefined4 *)(lVar15 + 0x128);
      pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
    }
LAB_0354f21c:
    (*pcVar16)(uVar30,fVar27 + fVar29,0,uVar32,unaff_s11 * fVar26 + fVar28,0,fVar26,fVar26);
    uVar18 = in_stack_00000170;
LAB_0354f250:
    in_stack_00000170 = uVar18;
    bVar6 = false;
    uVar14 = in_stack_00000180;
LAB_0354f254:
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    uVar18 = (uint)*(undefined8 *)(lVar15 + 0x18);
    if (uVar18 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar15 + unaff_x29 * unaff_x23 + 0x191) >> 1 & 1) == 0) {
      if ((uStack0000000000000118 & 1) != 0) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
      }
LAB_0354f604:
      uStack0000000000000118 = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)uVar14)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar15 + unaff_x29 * unaff_x23 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
            ((int)unaff_w24 <= (int)(uint)unaff_x27)) && (bVar1)) {
          if (unaff_w24 == (uint)unaff_x27) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b97f8(in_stack_00000178,0);
            if ((uVar11 & 1) != 0) goto LAB_0354f374;
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar7;
          }
          unaff_x23 = 0x178;
          if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
            uVar18 = (uint)*(undefined8 *)(lVar15 + 0x18);
            if (unaff_w24 < uVar18) {
              lVar19 = *(long *)(lVar19 + 0xb8);
              lVar23 = lVar15 + unaff_x29 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar23 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar23 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar19 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar19 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar23 + 0x18c);
              fStack00000000000000d0 = *(float *)(lVar19 + 0x15a0);
              fStack00000000000000d4 = *(float *)(lVar19 + 0x15a4);
              uStack00000000000000c0 = 0;
              goto LAB_0354f400;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
LAB_0354f374:
        uStack0000000000000118 = 0;
      }
      else {
LAB_0354f400:
        if (uVar18 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = lVar15 + unaff_x29 * unaff_x23;
        fVar36 = *(float *)(lVar15 + 0x128);
        fVar31 = *(float *)(lVar15 + 0x188);
        uVar24 = *(undefined8 *)(lVar15 + 0x17c);
        fVar38 = *(float *)(lVar15 + 0x184);
        uVar21 = *(undefined8 *)(lVar15 + 0x184);
        fVar37 = *(float *)(lVar15 + 0x18c);
        fVar28 = *(float *)(lVar15 + 0x11c);
        fVar33 = *(float *)(lVar15 + 0x148);
        fVar34 = *(float *)(lVar15 + 0x150);
        in_stack_00000188 = uVar24;
        fStack0000000000000190 = fVar38;
        fStack0000000000000194 = fVar31;
        in_stack_00000198 = fVar37;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar11 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar15 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar15);
          }
          fVar36 = fVar36 + (float)in_stack_000017c8;
          fVar28 = fVar28 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar33 = fVar33 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar28 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar28;
          }
          if (fVar34 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar34 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar36) {
            fStack00000000000000d0 = fVar36;
          }
          if (fStack00000000000000d4 <= fVar33) {
            fStack00000000000000d4 = fVar33;
          }
        }
        else {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar15);
          }
          fVar28 = (fVar28 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar34 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar34;
          }
          if (fStack00000000000000d4 <= fVar33) {
            fStack00000000000000d4 = fVar33;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar28,
                     fStack00000000000000d4,uStack00000000000000c0);
          fStack00000000000000e4 = fVar34 - fVar37;
          fStack00000000000000d0 = fVar36 + fVar38;
          uStack00000000000000c0 = 0;
          fStack00000000000000d4 = fVar33 + fVar31;
          fStack00000000000000e0 = fVar28;
          in_stack_000017c0 = uVar24;
          in_stack_000017c8 = uVar21;
          in_stack_000017d0 = fVar37;
        }
        unaff_x23 = 0x178;
        if (((*unaff_x20 == 1) || (unaff_w24 == uStack00000000000000e8)) ||
           ((iStack0000000000000128 <= (int)unaff_w24 || (!bVar1)))) {
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                     fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
          goto LAB_0354f604;
        }
        uStack0000000000000118 = 1;
      }
    }
    puVar7 = OVRPlugin_Media_TypeInfo;
    iVar9 = *unaff_x20;
    unaff_w28 = unaff_w28 + 1;
    uVar18 = in_stack_00000170 + 1;
    unaff_x26 = unaff_x26 + 0x178;
    if (iVar9 <= (int)in_stack_00000170) {
      lVar15 = *unaff_x22;
      if (lVar15 == 0) goto LAB_0354fbf4;
      *(int *)(lVar15 + 0x18) = iVar9;
      lVar19 = unaff_x19[0xd4];
      *(uint *)(lVar15 + 0x2c) = uVar14 + 1;
      if (iVar9 < 1 || in_stack_000000d8 == 0) {
        in_stack_000000d8 = 1;
      }
      *(int *)(lVar15 + 0x1c) = (int)lVar19;
      *(int *)(lVar15 + 0x24) = in_stack_000000d8;
      *(int *)(lVar15 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_0354d0cc;
      lVar15 = unaff_x19[0xdb];
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 0x18))
                  (*(undefined8 *)(lVar15 + 0x40),*unaff_x22,*(undefined8 *)(lVar15 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0))
        goto LAB_0354fbf4;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar15 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        FUN_03596b20(lVar15 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036aa280(unaff_x19[0x74],0);
      lVar15 = *unaff_x22;
      if (lVar15 == 0) goto LAB_0354fbf4;
      lVar23 = 0;
      lVar19 = 0;
      goto LAB_0354f97c;
    }
    if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x50), lVar15 == 0))
    goto LAB_0354fbf4;
    unaff_x29 = (long)(int)in_stack_00000170;
    lVar19 = unaff_x25 + unaff_x29 * unaff_x23;
    in_stack_00000180 = *(uint *)(lVar19 + 100);
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000180)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_stack_00000110 = *(long *)(lVar19 + 0x38);
    lVar23 = (long)(int)in_stack_00000180;
    lVar15 = lVar15 + lVar23 * 0x5c;
    uVar22 = *(uint *)(lVar15 + 0x68);
    in_stack_00000178 = (uint)*(ushort *)(lVar19 + 0x20);
    uVar4 = *(uint *)(lVar15 + 0x3c);
    _uStack00000000000000e8 = (long)(int)uVar4;
    iVar2 = *(int *)(lVar15 + 0x20);
    iVar9 = *(int *)(lVar15 + 0x28);
    iVar10 = *(int *)(lVar15 + 0x2c);
    fVar33 = *(float *)(lVar15 + 0x4c);
    uVar5 = *(uint *)(lVar15 + 0x40);
    unaff_x27 = (long)(int)uVar5;
    fVar31 = *(float *)(lVar15 + 0x54);
    fVar28 = *(float *)(lVar15 + 0x58);
    fVar38 = *(float *)(lVar15 + 0x5c);
    fVar39 = *(float *)(lVar15 + 0x60);
    fVar37 = *(float *)(lVar15 + 0x6c);
    fVar40 = *(float *)(lVar15 + 0x70);
    fVar36 = *(float *)(lVar15 + 0x74);
    fVar34 = *(float *)(lVar15 + 0x78);
    if ((int)uVar22 < 9) {
      switch(uVar22) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar39 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar28;
        }
        break;
      case 2:
LAB_0354d968:
        in_stack_000000f8._4_4_ = (fVar39 + fVar38 * 0.5) - fVar28 * 0.5;
        break;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar38 + fVar39) - fVar28;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar38 + fVar39;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      in_stack_000000f0 = 0;
    }
    else if (uVar22 == 0x10) {
switchD_0354d8a4_caseD_8:
      if (in_stack_00000178 < 0xad) {
        if ((in_stack_00000178 != 3) && (in_stack_00000178 != 10)) {
FUN_0354d8fc:
          if (*(uint *)(unaff_x25 + 0x18) <= uVar4)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(in_stack_000000c8 + _uStack00000000000000e8 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8cc4(uVar3,0);
          if ((uVar11 & 1) == 0) {
            bVar1 = (int)in_stack_00000180 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar28 <= fVar38) && (!bVar1 && uVar22 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar39;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar38 + fVar39;
            }
            goto LAB_0354d9d8;
          }
          if (((uVar18 == 1) || (in_stack_00000180 != uVar14)) ||
             (in_stack_00000170 == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar39;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar38 + fVar39;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
            in_stack_000000f0 = 0;
          }
          else {
            cVar13 = (char)unaff_x19[0x1e];
            fVar39 = -fVar28;
            if (cVar13 != '\0') {
              fVar39 = fVar28;
            }
            if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar4)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar10 = (int)*(char *)(in_stack_000000c8 + _uStack00000000000000e8 * 0x178 + 0x194) +
                     (-iVar2 - (uStack0000000000000030 & 1)) + iVar10 + -1;
            if (iVar10 < 1) {
              fVar28 = 1.0;
              iVar10 = 1;
            }
            else {
              fVar28 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (in_stack_00000178 == 9) {
LAB_0354f76c:
              fVar28 = 1.0 - fVar28;
            }
            else {
              if (in_stack_00000178 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b97f8(in_stack_00000178,0);
                cVar13 = (char)unaff_x19[0x1e];
                if ((uVar11 & 1) != 0) goto LAB_0354f76c;
              }
              iVar10 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar9;
            }
            fVar28 = ((fVar38 + fVar39) * fVar28) / (float)iVar10;
            if (cVar13 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar28;
              in_stack_000000f0 =
                   CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                            (float)in_stack_000000f0 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar28;
            }
          }
        }
      }
      else if (((in_stack_00000178 != 0xad) && (in_stack_00000178 != 0x200b)) &&
              (in_stack_00000178 != 0x2060)) goto FUN_0354d8fc;
    }
    else if (uVar22 == 0x20) {
      fVar28 = fVar37 + fVar36;
      goto LAB_0354d968;
    }
switchD_0354d8a4_caseD_3:
    uVar22 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar22 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar38 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    in_stack_00000150 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
    fVar28 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
    if (*(char *)(lVar15 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar9 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
    if (iVar9 != 0) goto LAB_0354e05c;
    fVar39 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar19 + 0x84) = 0;
      *(undefined4 *)(lVar19 + 0xac) = 0;
      *(undefined4 *)(lVar19 + 0xd4) = 0x3f800000;
      fVar39 = 1.0;
      break;
    case 1:
      fVar34 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar36 = (in_stack_000000f8._4_4_ + fVar34) - *(float *)(in_stack_00000078 + 0x230);
        fVar34 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar36 = fVar36 - fVar37;
      *(float *)(lVar19 + 0x84) = fVar39 + (fVar34 - fVar37) / fVar36;
      *(float *)(lVar19 + 0xac) = fVar39 + (*(float *)(lVar19 + 0x98) - fVar37) / fVar36;
      *(float *)(lVar19 + 0xd4) = fVar39 + (*(float *)(lVar19 + 0xc0) - fVar37) / fVar36;
      fVar39 = fVar39 + (*(float *)(lVar19 + 0xe8) - fVar37) / fVar36;
      break;
    case 2:
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar34 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar36 = (in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar19 + 0x84) = fVar39 + fVar36 / fVar34;
      *(float *)(lVar19 + 0xac) =
           fVar39 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar19 + 0xd4) =
           fVar39 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar39 = fVar39 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
        *(undefined4 *)(lVar19 + 0x88) = 0;
        *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar19 + 0xd8) = 0;
        *(undefined4 *)(lVar19 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar34 = fVar34 - fVar40;
        fVar36 = fVar39 + (*(float *)(lVar19 + 0x74) - fVar40) / fVar34;
        fVar34 = fVar39 + (*(float *)(lVar19 + 0x9c) - fVar40) / fVar34;
        *(float *)(lVar19 + 0x88) = fVar36;
        *(float *)(lVar19 + 0xb0) = fVar34;
        *(float *)(lVar19 + 0xd8) = fVar36;
        *(float *)(lVar19 + 0x100) = fVar34;
        break;
      case 2:
        lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar36 = fVar39 + (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar19 + 0x88) = fVar36;
        fVar34 = *(float *)(unaff_x19 + 0x9c);
        fVar37 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar19 + 0xd8) = fVar36;
        fVar36 = fVar39 + (*(float *)(lVar19 + 0x9c) - fVar34) / (fVar37 - fVar34);
        *(float *)(lVar19 + 0xb0) = fVar36;
        *(float *)(lVar19 + 0x100) = fVar36;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar22 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
      }
      if (uVar22 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar36 = *(float *)(lVar19 + 0x15c);
      fVar34 = (1.0 - (*(float *)(lVar19 + 0x88) + *(float *)(lVar19 + 0xb0)) * fVar36) * 0.5;
      fVar37 = fVar39 + *(float *)(lVar19 + 0x88) * fVar36 + fVar34;
      fVar39 = fVar39 + fVar34 + *(float *)(lVar19 + 0xb0) * fVar36;
      *(float *)(lVar19 + 0x84) = fVar37;
      *(float *)(lVar19 + 0xac) = fVar37;
      *(float *)(lVar19 + 0xd4) = fVar39;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar39;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar22 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar19 + 0x88) = 0;
      *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0x100) = 0;
      break;
    case 1:
      if (in_stack_00000170 < uVar22) {
        lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar33 = fVar33 - fVar31;
        fVar36 = (*(float *)(lVar19 + 0x74) - fVar31) / fVar33;
        fVar33 = (*(float *)(lVar19 + 0x9c) - fVar31) / fVar33;
        *(float *)(lVar19 + 0x88) = fVar36;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar22 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar36 = (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar19 + 0x88) = fVar36;
      fVar33 = (*(float *)(lVar19 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar19 + 0xb0) = fVar33;
      *(float *)(lVar19 + 0xd8) = fVar33;
      *(float *)(lVar19 + 0x100) = fVar36;
      break;
    case 3:
      if (uVar22 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar34 = *(float *)(lVar19 + 0x15c);
      fVar33 = (1.0 - (*(float *)(lVar19 + 0x84) + *(float *)(lVar19 + 0xd4)) / fVar34) * 0.5;
      fVar36 = *(float *)(lVar19 + 0x84) / fVar34 + fVar33;
      fVar33 = fVar33 + *(float *)(lVar19 + 0xd4) / fVar34;
      *(float *)(lVar19 + 0x88) = fVar36;
      *(float *)(lVar19 + 0xb0) = fVar33;
      *(float *)(lVar19 + 0x100) = fVar36;
      *(float *)(lVar19 + 0xd8) = fVar33;
    }
    if (uVar22 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    unaff_s14 = fStack0000000000000058 * *(float *)(lVar19 + 0x160) *
                (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar19 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar33 = *(float *)(lVar19 + 0x88);
    fVar34 = *(float *)(lVar19 + 0x84);
    fVar36 = -2.1474836e+09;
    if (fVar34 != INFINITY) {
      fVar36 = (float)(int)fVar34;
    }
    fVar37 = *(float *)(lVar19 + 0xd4);
    fVar39 = *(float *)(lVar19 + 0xd8);
    fVar31 = -2.1474836e+09;
    if (fVar33 != INFINITY) {
      fVar31 = (float)(int)fVar33;
    }
    uVar32 = FUN_03591d3c(fVar34 - fVar36,fVar33 - fVar31);
    *(undefined4 *)(lVar19 + 0x84) = uVar32;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar39 = fVar39 - fVar31;
    *(float *)(lVar19 + 0x88) = unaff_s14;
    uVar32 = FUN_03591d3c(fVar34 - fVar36,fVar39);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar32;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar37 = fVar37 - fVar36;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
    fVar36 = (float)FUN_03591d3c(fVar37,fVar39);
    *(float *)(lVar19 + 0xd4) = fVar36;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar19 + 0xd8) = unaff_s14;
    uVar32 = FUN_03591d3c(fVar37,fVar33 - fVar31);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar32;
    uVar22 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar22 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
    unaff_x22 = in_stack_00000050;
LAB_0354e05c:
    if (((int)in_stack_00000170 < (int)unaff_x19[0x65]) &&
       (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar22 <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
        lVar15 = in_stack_000000c8 + unaff_x29 * 0x178;
        *(ulong *)(lVar15 + 0x70) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar15 + 0x70));
        *(float *)(lVar15 + 0x78) = fVar28 + *(float *)(lVar15 + 0x78);
        *(ulong *)(lVar15 + 0x98) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar15 + 0x98));
        *(float *)(lVar15 + 0xa0) = fVar28 + *(float *)(lVar15 + 0xa0);
        *(ulong *)(lVar15 + 0xc0) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar15 + 0xc0) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar15 + 0xc0));
        *(float *)(lVar15 + 200) = fVar28 + *(float *)(lVar15 + 200);
        *(ulong *)(lVar15 + 0xe8) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20),
                      fVar38 + (float)*(undefined8 *)(lVar15 + 0xe8));
        *(float *)(lVar15 + 0xf0) = fVar28 + *(float *)(lVar15 + 0xf0);
        goto LAB_0354e184;
      }
      if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (in_stack_00000170 < uVar22) {
          if (*(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x68) == iStack0000000000000034)
          goto LAB_0354f0d4;
          goto LAB_0354e0cc;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
LAB_0354e0cc:
    if (uVar22 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar22 = *(uint *)(in_stack_000000c8 + 0x18);
    }
    puVar7 = PTR_DAT_03cbded8;
    uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined8 *)(lVar19 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar19 + 0x78) = uVar32;
    if (uVar22 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined8 *)(lVar19 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar19 + 0xa0) = uVar32;
    uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar19 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar19 + 200) = uVar32;
    uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar19 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar19 + 0xf0) = uVar32;
    *(undefined1 *)(lVar15 + 0x194) = 0;
LAB_0354e184:
    if (iVar9 == 0) {
      pcVar16 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar16)();
    }
    else if (iVar9 == 1) {
      pcVar16 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    uVar21 = *(undefined8 *)(lVar15 + 0x11c);
    *(undefined8 *)(lVar15 + 0x11c) =
         CONCAT44(in_stack_00000150 + (float)((ulong)uVar21 >> 0x20),fVar38 + (float)uVar21);
    *(float *)(lVar15 + 0x124) = fVar28 + *(float *)(lVar15 + 0x124);
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    *(ulong *)(lVar15 + 0x110) =
         CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar15 + 0x110) >> 0x20),
                  fVar38 + (float)*(undefined8 *)(lVar15 + 0x110));
    *(float *)(lVar15 + 0x118) = fVar28 + *(float *)(lVar15 + 0x118);
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    *(ulong *)(lVar15 + 0x128) =
         CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar15 + 0x128) >> 0x20),
                  fVar38 + (float)*(undefined8 *)(lVar15 + 0x128));
    *(float *)(lVar15 + 0x130) = fVar28 + *(float *)(lVar15 + 0x130);
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    *(float *)(lVar15 + 0x134) = fVar38 + *(float *)(lVar15 + 0x134);
    *(ulong *)(lVar15 + 0x138) =
         CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar15 + 0x138) >> 0x20),
                  in_stack_00000150 + (float)*(undefined8 *)(lVar15 + 0x138));
    lVar15 = *unaff_x22;
    if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
    uVar22 = *(uint *)(lVar19 + 0x18);
    if (uVar22 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar17 = lVar19 + unaff_x29 * 0x178;
    *(float *)(lVar17 + 0x150) = in_stack_00000150 + *(float *)(lVar17 + 0x150);
    *(ulong *)(lVar17 + 0x140) =
         CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar17 + 0x140) >> 0x20),
                  fVar38 + (float)*(undefined8 *)(lVar17 + 0x140));
    *(ulong *)(lVar17 + 0x148) =
         CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar17 + 0x148) >> 0x20),
                  in_stack_00000150 + (float)*(undefined8 *)(lVar17 + 0x148));
    if (in_stack_00000180 == uVar14) {
      uVar14 = *in_stack_00000090 - 1;
      if (in_stack_00000170 == uVar14) goto LAB_0354e3ec;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x50);
      if (lVar15 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = (long)(int)uVar14;
      lVar20 = lVar15 + lVar17 * 0x5c;
      fVar28 = in_stack_00000150 + *(float *)(lVar20 + 0x54);
      *(ulong *)(lVar20 + 0x4c) =
           CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                    in_stack_00000150 + (float)*(undefined8 *)(lVar20 + 0x4c));
      *(float *)(lVar20 + 0x54) = fVar28;
      *(float *)(lVar20 + 0x58) = fVar38 + *(float *)(lVar20 + 0x58);
      if (uVar22 <= *(uint *)(lVar20 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar32 = *(undefined4 *)(lVar19 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
      lVar15 = lVar15 + lVar17 * 0x5c;
      *(float *)(lVar15 + 0x70) = fVar28;
      *(undefined4 *)(lVar15 + 0x6c) = uVar32;
      lVar15 = *unaff_x22;
      if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x50), lVar19 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar19 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + 0x38);
      if (lVar15 == 0) goto LAB_0354fbf4;
      uVar14 = *(uint *)(lVar19 + lVar17 * 0x5c + 0x40);
      if (*(uint *)(lVar15 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = lVar19 + lVar17 * 0x5c;
      *(undefined4 *)(lVar19 + 0x74) = *(undefined4 *)(lVar15 + (long)(int)uVar14 * 0x178 + 0x128);
      *(undefined4 *)(lVar19 + 0x78) = *(undefined4 *)(lVar19 + 0x4c);
      uVar14 = *in_stack_00000090 - 1;
LAB_0354e3ec:
      if (in_stack_00000170 == uVar14) {
        lVar15 = *unaff_x22;
        if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x50), lVar19 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000180)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar17 = lVar19 + lVar23 * 0x5c;
        fVar28 = in_stack_00000150 + *(float *)(lVar17 + 0x54);
        *(ulong *)(lVar17 + 0x4c) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                      in_stack_00000150 + (float)*(undefined8 *)(lVar17 + 0x4c));
        *(float *)(lVar17 + 0x54) = fVar28;
        *(float *)(lVar17 + 0x58) = fVar38 + *(float *)(lVar17 + 0x58);
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar17 + 0x34))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar32 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar17 + 0x34) * 0x178 + 0x11c);
        lVar19 = lVar19 + lVar23 * 0x5c;
        *(float *)(lVar19 + 0x70) = fVar28;
        *(undefined4 *)(lVar19 + 0x6c) = uVar32;
        lVar15 = *unaff_x22;
        if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x50), lVar19 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000180)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        uVar14 = *(uint *)(lVar19 + lVar23 * 0x5c + 0x40);
        if (*(uint *)(lVar15 + 0x18) <= uVar14)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar19 = lVar19 + lVar23 * 0x5c;
        *(undefined4 *)(lVar19 + 0x74) = *(undefined4 *)(lVar15 + (long)(int)uVar14 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar19 + 0x78) = *(undefined4 *)(lVar19 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b82c4(in_stack_00000178,0);
    if (((((uVar11 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) && (in_stack_00000178 != 0xad))
       && (in_stack_00000178 != 0x2d)) {
      if ((uStack000000000000011c & 1) == 0) {
        if (uVar18 != 1) {
LAB_0354f144:
          uStack000000000000011c = 0;
          goto LAB_0354e618;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b81f8(in_stack_00000178,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b63d8(in_stack_00000178,0);
          if (((in_stack_00000178 != 0x200b) && ((uVar11 & 1) == 0)) && (*in_stack_00000090 != 1))
          goto LAB_0354f144;
        }
      }
      else if (((uVar18 != 1) &&
               ((int)in_stack_00000170 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1))) &&
              (((int)in_stack_00000170 < *in_stack_00000090 &&
               ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170 - 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b82c4(uVar3,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar18)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b82c4(uVar3,0);
          if ((uVar11 & 1) != 0) goto LAB_0354e610;
        }
      }
      if (in_stack_00000170 == *in_stack_00000090 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b82c4(in_stack_00000178,0);
        iVar9 = unaff_w28;
        if ((uVar11 & 1) == 0) goto LAB_0354e93c;
      }
      else {
LAB_0354e93c:
        iVar9 = in_stack_00000170 - 1;
      }
      lVar15 = *unaff_x22;
      if (lVar15 == 0) goto LAB_0354fbf4;
      lVar19 = *(long *)(lVar15 + 0x40);
      if (lVar19 == 0) goto LAB_0354fbf4;
      uVar14 = *(uint *)(lVar15 + 0x24);
      iVar10 = *(int *)(lVar19 + 0x18);
      if (iVar10 < (int)(uVar14 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar15 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar15 = *unaff_x22;
        if (lVar15 == 0) goto LAB_0354fbf4;
      }
      lVar15 = *(long *)(lVar15 + 0x40);
      if (lVar15 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = lVar15 + (long)(int)uVar14 * 0x18;
      *(long **)(lVar15 + 0x20) = unaff_x19;
      *(uint *)(lVar15 + 0x28) = in_stack_00000168._4_4_;
      *(int *)(lVar15 + 0x2c) = iVar9;
      *(uint *)(lVar15 + 0x30) = (iVar9 - in_stack_00000168._4_4_) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar15 = unaff_x19[0x6d];
      if (lVar15 == 0) goto LAB_0354fbf4;
      lVar19 = *(long *)(lVar15 + 0x50);
      *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
      if (lVar19 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = lVar19 + lVar23 * 0x5c;
      uStack000000000000011c = 0;
      in_stack_000000d8 = in_stack_000000d8 + 1;
      *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
    }
    else {
      if ((uStack000000000000011c & 1) == 0) {
        in_stack_00000168._4_4_ = in_stack_00000170;
      }
      if (in_stack_00000170 == *in_stack_00000090 - 1U) {
        lVar15 = *unaff_x22;
        if (lVar15 == 0) goto LAB_0354fbf4;
        lVar19 = *(long *)(lVar15 + 0x40);
        if (lVar19 == 0) goto LAB_0354fbf4;
        uVar14 = *(uint *)(lVar15 + 0x24);
        iVar9 = *(int *)(lVar19 + 0x18);
        if (iVar9 < (int)(uVar14 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar15 + 0x40),iVar9 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar15 = *unaff_x22;
          if (lVar15 == 0) goto LAB_0354fbf4;
        }
        lVar15 = *(long *)(lVar15 + 0x40);
        if (lVar15 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= uVar14)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = lVar15 + (long)(int)uVar14 * 0x18;
        *(long **)(lVar15 + 0x20) = unaff_x19;
        *(uint *)(lVar15 + 0x28) = in_stack_00000168._4_4_;
        *(uint *)(lVar15 + 0x2c) = in_stack_00000170;
        *(uint *)(lVar15 + 0x30) = uVar18 - in_stack_00000168._4_4_;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar15 = unaff_x19[0x6d];
        if (lVar15 == 0) goto LAB_0354fbf4;
        lVar19 = *(long *)(lVar15 + 0x50);
        *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
        if (lVar19 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000180)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar19 = lVar19 + lVar23 * 0x5c;
        in_stack_000000d8 = in_stack_000000d8 + 1;
        *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
      }
LAB_0354e610:
      uStack000000000000011c = 1;
    }
LAB_0354e618:
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    uVar14 = *(uint *)(lVar15 + 0x18);
    if (uVar14 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar15 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
      if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
        in_stack_00000130._4_4_ = 0;
      }
      else {
LAB_0354e660:
        if (uVar14 <= in_stack_00000170 - 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar19 = *unaff_x19;
        uVar32 = *(undefined4 *)(lVar15 + unaff_x26 + -0x330);
        uVar35 = *(undefined4 *)(lVar15 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
        pcVar16 = *(code **)(lVar19 + 0x8d8);
LAB_0354ebc8:
        (*pcVar16)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar32,
                   fStack0000000000000104,0,in_stack_00000080._4_4_,uVar35);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar7;
        }
LAB_0354ec1c:
        unaff_s15 = 0.0;
        in_stack_00000130._4_4_ = 0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar15 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
    }
    else {
      lVar15 = lVar15 + unaff_x29 * 0x178;
      iVar9 = *(int *)(lVar15 + 0x68);
      *(undefined4 *)(lVar15 + 0x16c) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)in_stack_00000170) ||
          ((int)unaff_x19[0x66] < (int)in_stack_00000180)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar9 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(in_stack_00000178,0);
      if ((in_stack_00000178 != 0x200b) && ((uVar11 & 1) == 0)) {
        lVar15 = *unaff_x22;
        if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar28 = *(float *)(lVar19 + unaff_x29 * 0x178 + 0x160);
        if (unaff_s15 <= fVar28) {
          unaff_s15 = fVar28;
        }
        if (fStack0000000000000100 <= ABS(unaff_s14)) {
          fStack0000000000000100 = ABS(unaff_s14);
        }
        if (iVar9 != iStack000000000000005c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar15 = *unaff_x22;
            if (lVar15 == 0) goto LAB_0354fbf4;
            lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar19 + 0x15a8);
        }
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
        fVar36 = *(float *)(lVar15 + unaff_x29 * 0x178 + 0x14c);
        fVar28 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar36 = fVar36 + unaff_s15 * fVar28;
        iStack000000000000005c = iVar9;
        if (fVar36 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar36;
        }
      }
      if ((in_stack_00000130._4_4_ & 1) == 0) {
        in_stack_00000130._4_4_ = 0;
        if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
            ((int)uVar5 < (int)in_stack_00000170)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
        if (in_stack_00000170 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar11 & 1) != 0) goto LAB_0354eb28;
        }
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = lVar15 + unaff_x29 * 0x178;
        in_stack_00000080._4_4_ = *(float *)(lVar15 + 0x160);
        in_stack_00000070 = *(undefined4 *)(lVar15 + 0x11c);
        bVar8 = unaff_s15 != 0.0;
        fVar28 = in_stack_00000080._4_4_;
        if (bVar8) {
          fVar28 = unaff_s15;
        }
        unaff_s15 = fVar28;
        in_stack_00000088 = *(undefined4 *)(lVar15 + 0x168);
        uStack000000000000006c = 0;
        fVar28 = unaff_s14;
        if (bVar8) {
          fVar28 = fStack0000000000000100;
        }
        fStack0000000000000068 = fStack0000000000000104;
        fStack0000000000000100 = fVar28;
      }
      if (*in_stack_00000090 == 1) {
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          if (in_stack_00000170 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + unaff_x29 * 0x178;
            lVar19 = *unaff_x19;
            uVar32 = *(undefined4 *)(lVar15 + 0x128);
            uVar35 = *(undefined4 *)(lVar15 + 0x160);
            goto LAB_0354ebc0;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((in_stack_00000170 == uVar4) || ((int)uVar5 <= (int)in_stack_00000170)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b63d8(in_stack_00000178,0);
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          lVar19 = unaff_x29;
          uVar14 = in_stack_00000170;
          if (in_stack_00000178 == 0x200b || (uVar11 & 1) != 0) {
            lVar19 = unaff_x27;
            uVar14 = uVar5;
          }
          if (uVar14 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + lVar19 * 0x178;
            uVar32 = *(undefined4 *)(lVar15 + 0x128);
            uVar35 = *(undefined4 *)(lVar15 + 0x160);
            pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354ebc8;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          uVar14 = *(uint *)(lVar15 + 0x18);
          goto LAB_0354e660;
        }
        goto LAB_0354fbf4;
      }
      if ((int)in_stack_00000170 < *in_stack_00000090 + -1) {
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= uVar18)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar11 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar15 + unaff_x26),0);
        if ((uVar11 & 1) == 0) {
          if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
            if (in_stack_00000170 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + unaff_x29 * 0x178;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                         *(undefined4 *)(lVar15 + 0x128),fStack0000000000000104,0,
                         in_stack_00000080._4_4_,*(undefined4 *)(lVar15 + 0x160));
              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = *(long *)puVar7;
              }
              goto LAB_0354ec1c;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
      }
      in_stack_00000130._4_4_ = 1;
    }
LAB_0354ec38:
    unaff_x23 = 0x178;
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (in_stack_00000110 == 0) goto LAB_0354fbf4;
    uVar14 = *(uint *)(lVar15 + unaff_x29 * 0x178 + 400);
    unaff_s11 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
    unaff_x25 = in_stack_000000c8;
    unaff_w24 = in_stack_00000170;
    _iStack0000000000000128 = unaff_x27;
    if ((uVar14 >> 6 & 1) != 0) {
      lVar15 = *unaff_x22;
      if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)(lVar19 + unaff_x29 * 0x178 + 0x174) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)in_stack_00000170) ||
          ((int)unaff_x19[0x66] < (int)in_stack_00000180)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar19 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        unaff_w21 = 0;
      }
      else {
        unaff_w21 = 1;
      }
      if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
          ((int)in_stack_00000170 <= (int)uVar5)) && (!bVar6 && unaff_w21 == 1)) {
        if (in_stack_00000170 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar11 & 1) != 0) goto LAB_0354ed84;
          lVar15 = *unaff_x22;
          if (lVar15 == 0) goto LAB_0354fbf4;
        }
        param_1 = *(long *)(lVar15 + 0x38);
        unaff_x20 = in_stack_00000090;
        in_stack_00000170 = uVar18;
        if (param_1 == 0) goto LAB_0354fbf4;
        goto code_r0x0354eea0;
      }
LAB_0354ed84:
      unaff_x20 = in_stack_00000090;
      in_stack_00000170 = uVar18;
      if (bVar6) goto LAB_0354eee8;
      goto LAB_0354f250;
    }
    unaff_x20 = in_stack_00000090;
    if (bVar6) goto code_r0x0354ec80;
    goto LAB_0354f250;
  }
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
code_r0x0354ec80:
  if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170 - 1)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar32 = *(undefined4 *)(lVar15 + unaff_x26 + -0x330);
  fVar28 = *(float *)(lVar15 + unaff_x26 + -0x30c);
  pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
  in_stack_00000170 = uVar18;
  goto LAB_0354f21c;
  while( true ) {
    lVar15 = *unaff_x22;
    lVar19 = lVar19 + 1;
    lVar23 = lVar23 + 0x50;
    if (lVar15 == 0) break;
LAB_0354f97c:
    uVar11 = lVar19 + 1;
    if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar11) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x60);
    if (lVar15 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar15 + lVar23 + 0x70,0);
    lVar15 = unaff_x19[0xe1];
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar21 = *(undefined8 *)(lVar15 + lVar19 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036d35a8(uVar21,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar11)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        FUN_03596b20(lVar15 + lVar23 + 0x70,1,0);
      }
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a460c(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0x80),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a4810(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0x98),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a48bc(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0xa0),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a4e24(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0xa8),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_0359d5ac(lVar15,0), lVar15 == 0)) break;
      FUN_036aa280(lVar15,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


