/*
FUNCTION_NAME: UnityEngine.AndroidReflection$$.cctor
ENTRY_POINT: 0354f090
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


void UnityEngine_AndroidReflection___cctor(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar22;
  long lVar23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_s14;
  float fVar35;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float in_stack_00000040;
  undefined8 in_stack_00000048;
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
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  undefined4 in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  long in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  uint in_stack_00000120;
  long in_stack_00000128;
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
  
code_r0x0354f090:
  uVar20 = *(uint *)(param_1 + 0x18);
  uVar16 = in_stack_00000170;
LAB_0354e660:
  in_stack_00000170 = uVar16;
  if (in_stack_00000170 - 2 < uVar20) {
    lVar17 = *unaff_x19;
    uVar27 = *(undefined4 *)(param_1 + unaff_x26 + -0x330);
    uVar30 = *(undefined4 *)(param_1 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
    pcVar14 = *(code **)(lVar17 + 0x8d8);
LAB_0354ebc8:
    (*pcVar14)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar27,
               fStack0000000000000104,0,in_stack_00000080._4_4_,uVar30);
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    uVar16 = in_stack_00000170;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar17 = *(long *)puVar7;
    }
LAB_0354ec1c:
    in_stack_00000170 = uVar16;
    fVar35 = 0.0;
    bVar8 = false;
    fStack0000000000000104 = *(float *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
    fStack0000000000000100 = 0.0;
    uVar16 = in_stack_00000170;
    uVar6 = in_stack_00000180;
LAB_0354ec38:
    in_stack_00000170 = uVar16;
    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (in_stack_00000110 == 0) goto LAB_0354fbf4;
    uVar16 = *(uint *)(lVar17 + unaff_x29 * unaff_x23 + 400);
    fVar24 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
    uVar20 = (uint)unaff_x27;
    if ((uVar16 >> 6 & 1) == 0) {
      if ((in_stack_00000120 & 1) != 0) {
        if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar27 = *(undefined4 *)(lVar17 + unaff_x26 + -0x330);
        fVar25 = *(float *)(lVar17 + unaff_x26 + -0x30c);
        pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
        (*pcVar14)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar27,
                   in_stack_000000a8 * fVar24 + fVar25,0,in_stack_000000a8,in_stack_000000a8);
      }
LAB_0354f250:
      in_stack_00000120 = 0;
    }
    else {
      lVar17 = *unaff_x22;
      if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)(lVar23 + unaff_x29 * unaff_x23 + 0x174) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)uVar6)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar23 + unaff_x29 * unaff_x23 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
          ((int)uVar20 < (int)unaff_w24)) || ((in_stack_00000120 & 1) != 0 || !bVar1)) {
LAB_0354ed84:
        if ((in_stack_00000120 & 1) == 0) goto LAB_0354f250;
      }
      else {
        if (unaff_w24 == uVar20) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar11 & 1) != 0) goto LAB_0354ed84;
          lVar17 = *unaff_x22;
          if (lVar17 == 0) goto LAB_0354fbf4;
        }
        lVar17 = *(long *)(lVar17 + 0x38);
        if (lVar17 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar17 = lVar17 + unaff_x29 * unaff_x23;
        in_stack_00000048._4_4_ = *(float *)(lVar17 + 0x60);
        in_stack_00000040 = *(float *)(lVar17 + 0x14c);
        in_stack_000000a0 = *(undefined4 *)(lVar17 + 0x11c);
        in_stack_000000a8 = *(float *)(lVar17 + 0x160);
        fStack000000000000009c = fVar24 * in_stack_000000a8 + in_stack_00000040;
        uStack0000000000000098 = 0;
      }
      iVar9 = *unaff_x20;
      if (iVar9 == 1) {
        if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
          uVar16 = *(uint *)(lVar17 + 0x18);
LAB_0354ef0c:
          if (unaff_w24 < uVar16) {
            lVar17 = lVar17 + unaff_x29 * unaff_x23;
            lVar23 = *unaff_x19;
            uVar27 = *(undefined4 *)(lVar17 + 0x128);
            fVar25 = *(float *)(lVar17 + 0x14c);
LAB_0354ef24:
            pcVar14 = *(code **)(lVar23 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (unaff_w24 == (uint)in_stack_000000e8) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b63d8(in_stack_00000178,0);
        if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
          uVar16 = *(uint *)(lVar17 + 0x18);
          if (in_stack_00000178 == 0x200b || (uVar11 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
          unaff_x27 = unaff_x29;
          if (unaff_w24 < uVar16) {
LAB_0354f1f8:
            lVar17 = lVar17 + unaff_x27 * unaff_x23;
            fVar25 = *(float *)(lVar17 + 0x14c);
            uVar27 = *(undefined4 *)(lVar17 + 0x128);
            pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((int)unaff_w24 < iVar9) {
        lVar17 = *unaff_x22;
        if ((lVar17 != 0) && (lVar23 = *(long *)(lVar17 + 0x38), lVar23 != 0)) {
          if (in_stack_00000170 < *(uint *)(lVar23 + 0x18)) {
            if (*(float *)(lVar23 + unaff_x26 + -0x108) == in_stack_00000048._4_4_) {
              fVar25 = *(float *)(lVar23 + unaff_x26 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_03567bac(in_stack_00000150 + fVar25,in_stack_00000040,0);
              if ((uVar11 & 1) != 0) {
                iVar9 = *unaff_x20;
                goto LAB_0354f010;
              }
              lVar17 = *unaff_x22;
              if (lVar17 == 0) goto LAB_0354fbf4;
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if (lVar17 != 0) {
              uVar16 = *(uint *)(lVar17 + 0x18);
              if ((int)unaff_w24 <= (int)uVar20) goto LAB_0354f1f0;
LAB_0354f1e0:
              if (uVar20 < uVar16) goto LAB_0354f1f8;
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
            goto LAB_0354fbf4;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f010:
      if ((int)unaff_w24 < iVar9) {
        iVar9 = FUN_036d3364(in_stack_00000110,0);
        if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar17 = *(long *)(unaff_x25 + unaff_x26 + -0x130);
        if (lVar17 == 0) goto LAB_0354fbf4;
        iVar10 = FUN_036d3364(lVar17,0);
        if (iVar9 != iVar10) {
          if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
            uVar16 = *(uint *)(lVar17 + 0x18);
            unaff_x20 = in_stack_00000090;
            goto LAB_0354ef0c;
          }
          goto LAB_0354fbf4;
        }
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
          if (in_stack_00000170 - 2 < *(uint *)(lVar17 + 0x18)) {
            lVar23 = *unaff_x19;
            uVar27 = *(undefined4 *)(lVar17 + unaff_x26 + -0x330);
            fVar25 = *(float *)(lVar17 + unaff_x26 + -0x30c);
            unaff_x20 = in_stack_00000090;
            goto LAB_0354ef24;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      in_stack_00000120 = 1;
      unaff_x20 = in_stack_00000090;
    }
    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
    goto LAB_0354fbf4;
    uVar16 = (uint)*(undefined8 *)(lVar17 + 0x18);
    if (uVar16 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar17 + unaff_x29 * unaff_x23 + 0x191) >> 1 & 1) == 0) {
      if ((uStack0000000000000118 & 1) != 0) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
      }
LAB_0354f604:
      uStack0000000000000118 = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)uVar6)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar17 + unaff_x29 * unaff_x23 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
            ((int)unaff_w24 <= (int)uVar20)) && (bVar1)) {
          if (unaff_w24 == uVar20) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b97f8(in_stack_00000178,0);
            if ((uVar11 & 1) != 0) goto LAB_0354f374;
          }
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *(long *)puVar7;
          }
          unaff_x23 = 0x178;
          if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
            uVar16 = (uint)*(undefined8 *)(lVar17 + 0x18);
            if (unaff_w24 < uVar16) {
              lVar23 = *(long *)(lVar23 + 0xb8);
              lVar21 = lVar17 + unaff_x29 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar21 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar21 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar23 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar23 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar21 + 0x18c);
              fStack00000000000000d0 = *(float *)(lVar23 + 0x15a0);
              fStack00000000000000d4 = *(float *)(lVar23 + 0x15a4);
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
        if (uVar16 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar17 = lVar17 + unaff_x29 * unaff_x23;
        fVar25 = *(float *)(lVar17 + 0x128);
        fVar26 = *(float *)(lVar17 + 0x188);
        uVar22 = *(undefined8 *)(lVar17 + 0x17c);
        fVar32 = *(float *)(lVar17 + 0x184);
        uVar19 = *(undefined8 *)(lVar17 + 0x184);
        fVar31 = *(float *)(lVar17 + 0x18c);
        fVar24 = *(float *)(lVar17 + 0x11c);
        fVar28 = *(float *)(lVar17 + 0x148);
        fVar29 = *(float *)(lVar17 + 0x150);
        in_stack_00000188 = uVar22;
        fStack0000000000000190 = fVar32;
        fStack0000000000000194 = fVar26;
        in_stack_00000198 = fVar31;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar11 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar17 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar17);
          }
          fVar25 = fVar25 + (float)in_stack_000017c8;
          fVar24 = fVar24 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar28 = fVar28 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar24 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar24;
          }
          if (fVar29 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar29 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar25) {
            fStack00000000000000d0 = fVar25;
          }
          if (fStack00000000000000d4 <= fVar28) {
            fStack00000000000000d4 = fVar28;
          }
        }
        else {
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar17);
          }
          fVar24 = (fVar24 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar29 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar29;
          }
          if (fStack00000000000000d4 <= fVar28) {
            fStack00000000000000d4 = fVar28;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar24,
                     fStack00000000000000d4,uStack00000000000000c0);
          fStack00000000000000e4 = fVar29 - fVar31;
          fStack00000000000000d0 = fVar25 + fVar32;
          uStack00000000000000c0 = 0;
          fStack00000000000000d4 = fVar28 + fVar26;
          fStack00000000000000e0 = fVar24;
          in_stack_000017c0 = uVar22;
          in_stack_000017c8 = uVar19;
          in_stack_000017d0 = fVar31;
        }
        unaff_x23 = 0x178;
        if (((*unaff_x20 == 1) || (unaff_w24 == (uint)in_stack_000000e8)) ||
           (((int)in_stack_00000128 <= (int)unaff_w24 || (!bVar1)))) {
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
    uVar16 = in_stack_00000170 + 1;
    unaff_x26 = unaff_x26 + 0x178;
    if (iVar9 <= (int)in_stack_00000170) {
      lVar17 = *unaff_x22;
      if (lVar17 == 0) goto LAB_0354fbf4;
      *(int *)(lVar17 + 0x18) = iVar9;
      lVar23 = unaff_x19[0xd4];
      *(uint *)(lVar17 + 0x2c) = uVar6 + 1;
      if (iVar9 < 1 || in_stack_000000d8 == 0) {
        in_stack_000000d8 = 1;
      }
      *(int *)(lVar17 + 0x1c) = (int)lVar23;
      *(int *)(lVar17 + 0x24) = in_stack_000000d8;
      *(int *)(lVar17 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_0354d0cc;
      lVar17 = unaff_x19[0xdb];
      if (lVar17 != 0) {
        (**(code **)(lVar17 + 0x18))
                  (*(undefined8 *)(lVar17 + 0x40),*unaff_x22,*(undefined8 *)(lVar17 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0))
        goto LAB_0354fbf4;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar17 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        FUN_03596b20(lVar17 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar17 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar17 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar17 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar17 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036aa280(unaff_x19[0x74],0);
      lVar17 = *unaff_x22;
      if (lVar17 == 0) goto LAB_0354fbf4;
      lVar21 = 0;
      lVar23 = 0;
      goto LAB_0354f97c;
    }
    if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x50), lVar17 == 0))
    goto LAB_0354fbf4;
    unaff_x29 = (long)(int)in_stack_00000170;
    lVar23 = unaff_x25 + unaff_x29 * unaff_x23;
    in_stack_00000180 = *(uint *)(lVar23 + 100);
    if (*(uint *)(lVar17 + 0x18) <= in_stack_00000180)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_stack_00000110 = *(long *)(lVar23 + 0x38);
    lVar21 = (long)(int)in_stack_00000180;
    lVar17 = lVar17 + lVar21 * 0x5c;
    uVar20 = *(uint *)(lVar17 + 0x68);
    in_stack_00000178 = (uint)*(ushort *)(lVar23 + 0x20);
    uVar4 = *(uint *)(lVar17 + 0x3c);
    in_stack_000000e8 = (long)(int)uVar4;
    iVar2 = *(int *)(lVar17 + 0x20);
    iVar9 = *(int *)(lVar17 + 0x28);
    iVar10 = *(int *)(lVar17 + 0x2c);
    fVar28 = *(float *)(lVar17 + 0x4c);
    uVar5 = *(uint *)(lVar17 + 0x40);
    unaff_x27 = (long)(int)uVar5;
    fVar26 = *(float *)(lVar17 + 0x54);
    fVar24 = *(float *)(lVar17 + 0x58);
    fVar32 = *(float *)(lVar17 + 0x5c);
    fVar33 = *(float *)(lVar17 + 0x60);
    fVar31 = *(float *)(lVar17 + 0x6c);
    fVar34 = *(float *)(lVar17 + 0x70);
    fVar25 = *(float *)(lVar17 + 0x74);
    fVar29 = *(float *)(lVar17 + 0x78);
    if ((int)uVar20 < 9) {
      switch(uVar20) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar33 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar24;
        }
        break;
      case 2:
LAB_0354d968:
        in_stack_000000f8._4_4_ = (fVar33 + fVar32 * 0.5) - fVar24 * 0.5;
        break;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar32 + fVar33) - fVar24;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar32 + fVar33;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      in_stack_000000f0 = 0;
    }
    else if (uVar20 == 0x10) {
switchD_0354d8a4_caseD_8:
      if (in_stack_00000178 < 0xad) {
        if ((in_stack_00000178 != 3) && (in_stack_00000178 != 10)) {
FUN_0354d8fc:
          if (*(uint *)(unaff_x25 + 0x18) <= uVar4)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x20);
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
          if ((fVar24 <= fVar32) && (!bVar1 && uVar20 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar33;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar32 + fVar33;
            }
            goto LAB_0354d9d8;
          }
          if (((uVar16 == 1) || (in_stack_00000180 != uVar6)) ||
             (in_stack_00000170 == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar33;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar32 + fVar33;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
            in_stack_000000f0 = 0;
          }
          else {
            cVar13 = (char)unaff_x19[0x1e];
            fVar33 = -fVar24;
            if (cVar13 != '\0') {
              fVar33 = fVar24;
            }
            if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar4)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar10 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x194) +
                     (-iVar2 - (uStack0000000000000030 & 1)) + iVar10 + -1;
            if (iVar10 < 1) {
              fVar24 = 1.0;
              iVar10 = 1;
            }
            else {
              fVar24 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (in_stack_00000178 == 9) {
LAB_0354f76c:
              fVar24 = 1.0 - fVar24;
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
            fVar24 = ((fVar32 + fVar33) * fVar24) / (float)iVar10;
            if (cVar13 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar24;
              in_stack_000000f0 =
                   CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                            (float)in_stack_000000f0 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar24;
            }
          }
        }
      }
      else if (((in_stack_00000178 != 0xad) && (in_stack_00000178 != 0x200b)) &&
              (in_stack_00000178 != 0x2060)) goto FUN_0354d8fc;
    }
    else if (uVar20 == 0x20) {
      fVar24 = fVar31 + fVar25;
      goto LAB_0354d968;
    }
switchD_0354d8a4_caseD_3:
    uVar20 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar20 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar17 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar32 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    in_stack_00000150 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
    fVar24 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
    if (*(char *)(lVar17 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar9 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
    if (iVar9 != 0) goto LAB_0354e05c;
    fVar33 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar23 + 0x84) = 0;
      *(undefined4 *)(lVar23 + 0xac) = 0;
      *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
      fVar33 = 1.0;
      break;
    case 1:
      fVar29 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar25 = (in_stack_000000f8._4_4_ + fVar29) - *(float *)(in_stack_00000078 + 0x230);
        fVar29 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar25 = fVar25 - fVar31;
      *(float *)(lVar23 + 0x84) = fVar33 + (fVar29 - fVar31) / fVar25;
      *(float *)(lVar23 + 0xac) = fVar33 + (*(float *)(lVar23 + 0x98) - fVar31) / fVar25;
      *(float *)(lVar23 + 0xd4) = fVar33 + (*(float *)(lVar23 + 0xc0) - fVar31) / fVar25;
      fVar33 = fVar33 + (*(float *)(lVar23 + 0xe8) - fVar31) / fVar25;
      break;
    case 2:
      lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar29 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar25 = (in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar23 + 0x84) = fVar33 + fVar25 / fVar29;
      *(float *)(lVar23 + 0xac) =
           fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar23 + 0xd4) =
           fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar33 = fVar33 + ((in_stack_000000f8._4_4_ + *(float *)(lVar23 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
        *(undefined4 *)(lVar23 + 0x88) = 0;
        *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar23 + 0xd8) = 0;
        *(undefined4 *)(lVar23 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar29 = fVar29 - fVar34;
        fVar25 = fVar33 + (*(float *)(lVar23 + 0x74) - fVar34) / fVar29;
        fVar29 = fVar33 + (*(float *)(lVar23 + 0x9c) - fVar34) / fVar29;
        *(float *)(lVar23 + 0x88) = fVar25;
        *(float *)(lVar23 + 0xb0) = fVar29;
        *(float *)(lVar23 + 0xd8) = fVar25;
        *(float *)(lVar23 + 0x100) = fVar29;
        break;
      case 2:
        lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar25 = fVar33 + (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar23 + 0x88) = fVar25;
        fVar29 = *(float *)(unaff_x19 + 0x9c);
        fVar31 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar23 + 0xd8) = fVar25;
        fVar25 = fVar33 + (*(float *)(lVar23 + 0x9c) - fVar29) / (fVar31 - fVar29);
        *(float *)(lVar23 + 0xb0) = fVar25;
        *(float *)(lVar23 + 0x100) = fVar25;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar20 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
      }
      if (uVar20 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar25 = *(float *)(lVar23 + 0x15c);
      fVar29 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar25) * 0.5;
      fVar31 = fVar33 + *(float *)(lVar23 + 0x88) * fVar25 + fVar29;
      fVar33 = fVar33 + fVar29 + *(float *)(lVar23 + 0xb0) * fVar25;
      *(float *)(lVar23 + 0x84) = fVar31;
      *(float *)(lVar23 + 0xac) = fVar31;
      *(float *)(lVar23 + 0xd4) = fVar33;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar33;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar20 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar23 + 0x88) = 0;
      *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0x100) = 0;
      break;
    case 1:
      if (in_stack_00000170 < uVar20) {
        lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar28 = fVar28 - fVar26;
        fVar25 = (*(float *)(lVar23 + 0x74) - fVar26) / fVar28;
        fVar28 = (*(float *)(lVar23 + 0x9c) - fVar26) / fVar28;
        *(float *)(lVar23 + 0x88) = fVar25;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar20 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar25 = (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar23 + 0x88) = fVar25;
      fVar28 = (*(float *)(lVar23 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar23 + 0xb0) = fVar28;
      *(float *)(lVar23 + 0xd8) = fVar28;
      *(float *)(lVar23 + 0x100) = fVar25;
      break;
    case 3:
      if (uVar20 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar29 = *(float *)(lVar23 + 0x15c);
      fVar28 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar29) * 0.5;
      fVar25 = *(float *)(lVar23 + 0x84) / fVar29 + fVar28;
      fVar28 = fVar28 + *(float *)(lVar23 + 0xd4) / fVar29;
      *(float *)(lVar23 + 0x88) = fVar25;
      *(float *)(lVar23 + 0xb0) = fVar28;
      *(float *)(lVar23 + 0x100) = fVar25;
      *(float *)(lVar23 + 0xd8) = fVar28;
    }
    if (uVar20 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
    unaff_s14 = fStack0000000000000058 * *(float *)(lVar23 + 0x160) *
                (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar23 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar28 = *(float *)(lVar23 + 0x88);
    fVar29 = *(float *)(lVar23 + 0x84);
    fVar25 = -2.1474836e+09;
    if (fVar29 != INFINITY) {
      fVar25 = (float)(int)fVar29;
    }
    fVar31 = *(float *)(lVar23 + 0xd4);
    fVar33 = *(float *)(lVar23 + 0xd8);
    fVar26 = -2.1474836e+09;
    if (fVar28 != INFINITY) {
      fVar26 = (float)(int)fVar28;
    }
    uVar27 = FUN_03591d3c(fVar29 - fVar25,fVar28 - fVar26);
    *(undefined4 *)(lVar23 + 0x84) = uVar27;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar33 = fVar33 - fVar26;
    *(float *)(lVar23 + 0x88) = unaff_s14;
    uVar27 = FUN_03591d3c(fVar29 - fVar25,fVar33);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar27;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar31 = fVar31 - fVar25;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
    fVar25 = (float)FUN_03591d3c(fVar31,fVar33);
    *(float *)(lVar23 + 0xd4) = fVar25;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar23 + 0xd8) = unaff_s14;
    uVar27 = FUN_03591d3c(fVar31,fVar28 - fVar26);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar27;
    uVar20 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar20 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
    unaff_x22 = in_stack_00000050;
LAB_0354e05c:
    if (((int)in_stack_00000170 < (int)unaff_x19[0x65]) &&
       (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar20 <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
        lVar17 = in_stack_000000c8 + unaff_x29 * 0x178;
        *(ulong *)(lVar17 + 0x70) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar17 + 0x70) >> 0x20),
                      fVar32 + (float)*(undefined8 *)(lVar17 + 0x70));
        *(float *)(lVar17 + 0x78) = fVar24 + *(float *)(lVar17 + 0x78);
        *(ulong *)(lVar17 + 0x98) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar17 + 0x98) >> 0x20),
                      fVar32 + (float)*(undefined8 *)(lVar17 + 0x98));
        *(float *)(lVar17 + 0xa0) = fVar24 + *(float *)(lVar17 + 0xa0);
        *(ulong *)(lVar17 + 0xc0) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar17 + 0xc0) >> 0x20),
                      fVar32 + (float)*(undefined8 *)(lVar17 + 0xc0));
        *(float *)(lVar17 + 200) = fVar24 + *(float *)(lVar17 + 200);
        *(ulong *)(lVar17 + 0xe8) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar17 + 0xe8) >> 0x20),
                      fVar32 + (float)*(undefined8 *)(lVar17 + 0xe8));
        *(float *)(lVar17 + 0xf0) = fVar24 + *(float *)(lVar17 + 0xf0);
        goto LAB_0354e184;
      }
      if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (in_stack_00000170 < uVar20) {
          if (*(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x68) == iStack0000000000000034)
          goto LAB_0354f0d4;
          goto LAB_0354e0cc;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
LAB_0354e0cc:
    if (uVar20 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar20 = *(uint *)(in_stack_000000c8 + 0x18);
    }
    puVar7 = PTR_DAT_03cbded8;
    uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined8 *)(lVar23 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar23 + 0x78) = uVar27;
    if (uVar20 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    lVar23 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined8 *)(lVar23 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar23 + 0xa0) = uVar27;
    uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar23 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar23 + 200) = uVar27;
    uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar23 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar23 + 0xf0) = uVar27;
    *(undefined1 *)(lVar17 + 0x194) = 0;
LAB_0354e184:
    if (iVar9 == 0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar14)();
    }
    else if (iVar9 == 1) {
      pcVar14 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
      if (in_stack_00000170 < *(uint *)(lVar17 + 0x18)) {
        lVar17 = lVar17 + unaff_x29 * 0x178;
        uVar19 = *(undefined8 *)(lVar17 + 0x11c);
        *(undefined8 *)(lVar17 + 0x11c) =
             CONCAT44(in_stack_00000150 + (float)((ulong)uVar19 >> 0x20),fVar32 + (float)uVar19);
        *(float *)(lVar17 + 0x124) = fVar24 + *(float *)(lVar17 + 0x124);
        if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
          if (in_stack_00000170 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + unaff_x29 * 0x178;
            *(ulong *)(lVar17 + 0x110) =
                 CONCAT44(in_stack_00000150 +
                          (float)((ulong)*(undefined8 *)(lVar17 + 0x110) >> 0x20),
                          fVar32 + (float)*(undefined8 *)(lVar17 + 0x110));
            *(float *)(lVar17 + 0x118) = fVar24 + *(float *)(lVar17 + 0x118);
            if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
              if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar17 = lVar17 + unaff_x29 * 0x178;
              *(ulong *)(lVar17 + 0x128) =
                   CONCAT44(in_stack_00000150 +
                            (float)((ulong)*(undefined8 *)(lVar17 + 0x128) >> 0x20),
                            fVar32 + (float)*(undefined8 *)(lVar17 + 0x128));
              *(float *)(lVar17 + 0x130) = fVar24 + *(float *)(lVar17 + 0x130);
              if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar17 = lVar17 + unaff_x29 * 0x178;
              *(float *)(lVar17 + 0x134) = fVar32 + *(float *)(lVar17 + 0x134);
              *(ulong *)(lVar17 + 0x138) =
                   CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar17 + 0x138) >> 0x20),
                            in_stack_00000150 + (float)*(undefined8 *)(lVar17 + 0x138));
              lVar17 = *unaff_x22;
              if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0x38), lVar23 == 0))
              goto LAB_0354fbf4;
              uVar20 = *(uint *)(lVar23 + 0x18);
              if (uVar20 <= in_stack_00000170)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar15 = lVar23 + unaff_x29 * 0x178;
              *(float *)(lVar15 + 0x150) = in_stack_00000150 + *(float *)(lVar15 + 0x150);
              *(ulong *)(lVar15 + 0x140) =
                   CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar15 + 0x140) >> 0x20),
                            fVar32 + (float)*(undefined8 *)(lVar15 + 0x140));
              *(ulong *)(lVar15 + 0x148) =
                   CONCAT44(in_stack_00000150 +
                            (float)((ulong)*(undefined8 *)(lVar15 + 0x148) >> 0x20),
                            in_stack_00000150 + (float)*(undefined8 *)(lVar15 + 0x148));
              if (in_stack_00000180 == uVar6) {
                uVar20 = *in_stack_00000090 - 1;
                if (in_stack_00000170 == uVar20) goto LAB_0354e3ec;
              }
              else {
                lVar17 = *(long *)(lVar17 + 0x50);
                if (lVar17 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar17 + 0x18) <= uVar6)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar15 = (long)(int)uVar6;
                lVar18 = lVar17 + lVar15 * 0x5c;
                fVar24 = in_stack_00000150 + *(float *)(lVar18 + 0x54);
                *(ulong *)(lVar18 + 0x4c) =
                     CONCAT44(in_stack_00000150 +
                              (float)((ulong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20),
                              in_stack_00000150 + (float)*(undefined8 *)(lVar18 + 0x4c));
                *(float *)(lVar18 + 0x54) = fVar24;
                *(float *)(lVar18 + 0x58) = fVar32 + *(float *)(lVar18 + 0x58);
                if (uVar20 <= *(uint *)(lVar18 + 0x34))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar27 = *(undefined4 *)
                          (lVar23 + (long)(int)*(uint *)(lVar18 + 0x34) * 0x178 + 0x11c);
                lVar17 = lVar17 + lVar15 * 0x5c;
                *(float *)(lVar17 + 0x70) = fVar24;
                *(undefined4 *)(lVar17 + 0x6c) = uVar27;
                lVar17 = *unaff_x22;
                if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0x50), lVar23 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar23 + 0x18) <= uVar6)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar17 = *(long *)(lVar17 + 0x38);
                if (lVar17 == 0) goto LAB_0354fbf4;
                uVar20 = *(uint *)(lVar23 + lVar15 * 0x5c + 0x40);
                if (*(uint *)(lVar17 + 0x18) <= uVar20)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar23 = lVar23 + lVar15 * 0x5c;
                *(undefined4 *)(lVar23 + 0x74) =
                     *(undefined4 *)(lVar17 + (long)(int)uVar20 * 0x178 + 0x128);
                *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
                uVar20 = *in_stack_00000090 - 1;
LAB_0354e3ec:
                if (in_stack_00000170 == uVar20) {
                  lVar17 = *unaff_x22;
                  if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0x50), lVar23 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar23 + 0x18) <= in_stack_00000180)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar15 = lVar23 + lVar21 * 0x5c;
                  fVar24 = in_stack_00000150 + *(float *)(lVar15 + 0x54);
                  *(ulong *)(lVar15 + 0x4c) =
                       CONCAT44(in_stack_00000150 +
                                (float)((ulong)*(undefined8 *)(lVar15 + 0x4c) >> 0x20),
                                in_stack_00000150 + (float)*(undefined8 *)(lVar15 + 0x4c));
                  *(float *)(lVar15 + 0x54) = fVar24;
                  *(float *)(lVar15 + 0x58) = fVar32 + *(float *)(lVar15 + 0x58);
                  lVar17 = *(long *)(lVar17 + 0x38);
                  if (lVar17 == 0) goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar15 + 0x34))
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  uVar27 = *(undefined4 *)
                            (lVar17 + (long)(int)*(uint *)(lVar15 + 0x34) * 0x178 + 0x11c);
                  lVar23 = lVar23 + lVar21 * 0x5c;
                  *(float *)(lVar23 + 0x70) = fVar24;
                  *(undefined4 *)(lVar23 + 0x6c) = uVar27;
                  lVar17 = *unaff_x22;
                  if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0x50), lVar23 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar23 + 0x18) <= in_stack_00000180)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = *(long *)(lVar17 + 0x38);
                  if (lVar17 == 0) goto LAB_0354fbf4;
                  uVar20 = *(uint *)(lVar23 + lVar21 * 0x5c + 0x40);
                  if (*(uint *)(lVar17 + 0x18) <= uVar20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar23 = lVar23 + lVar21 * 0x5c;
                  *(undefined4 *)(lVar23 + 0x74) =
                       *(undefined4 *)(lVar17 + (long)(int)uVar20 * 0x178 + 0x128);
                  *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
                }
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b82c4(in_stack_00000178,0);
              if (((((uVar11 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) &&
                  (in_stack_00000178 != 0xad)) && (in_stack_00000178 != 0x2d)) {
                if ((uStack000000000000011c & 1) == 0) {
                  if (uVar16 != 1) {
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
                    if (((in_stack_00000178 != 0x200b) && ((uVar11 & 1) == 0)) &&
                       (*in_stack_00000090 != 1)) goto LAB_0354f144;
                  }
                }
                else if (((uVar16 != 1) &&
                         ((int)in_stack_00000170 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1)))
                        && (((int)in_stack_00000170 < *in_stack_00000090 &&
                            ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
                  if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170 - 1)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x438);
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_026b82c4(uVar3,0);
                  if ((uVar11 & 1) != 0) {
                    if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar16)
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
                lVar17 = *unaff_x22;
                if (lVar17 == 0) goto LAB_0354fbf4;
                lVar23 = *(long *)(lVar17 + 0x40);
                if (lVar23 == 0) goto LAB_0354fbf4;
                uVar20 = *(uint *)(lVar17 + 0x24);
                iVar10 = *(int *)(lVar23 + 0x18);
                if (iVar10 < (int)(uVar20 + 1)) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff025c((long *)(lVar17 + 0x40),iVar10 + 1,
                               *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                  lVar17 = *unaff_x22;
                  if (lVar17 == 0) goto LAB_0354fbf4;
                }
                lVar17 = *(long *)(lVar17 + 0x40);
                if (lVar17 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar17 + 0x18) <= uVar20)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar17 = lVar17 + (long)(int)uVar20 * 0x18;
                *(long **)(lVar17 + 0x20) = unaff_x19;
                *(uint *)(lVar17 + 0x28) = in_stack_00000168._4_4_;
                *(int *)(lVar17 + 0x2c) = iVar9;
                *(uint *)(lVar17 + 0x30) = (iVar9 - in_stack_00000168._4_4_) + 1;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar17 = unaff_x19[0x6d];
                if (lVar17 == 0) goto LAB_0354fbf4;
                lVar23 = *(long *)(lVar17 + 0x50);
                *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
                if (lVar23 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar23 + 0x18) <= in_stack_00000180)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar23 = lVar23 + lVar21 * 0x5c;
                uStack000000000000011c = 0;
                in_stack_000000d8 = in_stack_000000d8 + 1;
                *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
              }
              else {
                if ((uStack000000000000011c & 1) == 0) {
                  in_stack_00000168._4_4_ = in_stack_00000170;
                }
                if (in_stack_00000170 == *in_stack_00000090 - 1U) {
                  lVar17 = *unaff_x22;
                  if (lVar17 == 0) goto LAB_0354fbf4;
                  lVar23 = *(long *)(lVar17 + 0x40);
                  if (lVar23 == 0) goto LAB_0354fbf4;
                  uVar20 = *(uint *)(lVar17 + 0x24);
                  iVar9 = *(int *)(lVar23 + 0x18);
                  if (iVar9 < (int)(uVar20 + 1)) {
                    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_01ff025c((long *)(lVar17 + 0x40),iVar9 + 1,
                                 *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                    lVar17 = *unaff_x22;
                    if (lVar17 == 0) goto LAB_0354fbf4;
                  }
                  lVar17 = *(long *)(lVar17 + 0x40);
                  if (lVar17 == 0) goto LAB_0354fbf4;
                  if (*(uint *)(lVar17 + 0x18) <= uVar20)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = lVar17 + (long)(int)uVar20 * 0x18;
                  *(long **)(lVar17 + 0x20) = unaff_x19;
                  *(uint *)(lVar17 + 0x28) = in_stack_00000168._4_4_;
                  *(uint *)(lVar17 + 0x2c) = in_stack_00000170;
                  *(uint *)(lVar17 + 0x30) = uVar16 - in_stack_00000168._4_4_;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar17 = unaff_x19[0x6d];
                  if (lVar17 == 0) goto LAB_0354fbf4;
                  lVar23 = *(long *)(lVar17 + 0x50);
                  *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
                  if (lVar23 == 0) goto LAB_0354fbf4;
                  if (*(uint *)(lVar23 + 0x18) <= in_stack_00000180)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar23 = lVar23 + lVar21 * 0x5c;
                  in_stack_000000d8 = in_stack_000000d8 + 1;
                  *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
                }
LAB_0354e610:
                uStack000000000000011c = 1;
              }
LAB_0354e618:
              unaff_x23 = 0x178;
              if ((*unaff_x22 == 0) || (param_1 = *(long *)(*unaff_x22 + 0x38), param_1 == 0))
              goto LAB_0354fbf4;
              uVar20 = *(uint *)(param_1 + 0x18);
              if (uVar20 <= in_stack_00000170)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              unaff_x25 = in_stack_000000c8;
              unaff_w24 = in_stack_00000170;
              in_stack_00000128 = unaff_x27;
              uVar6 = in_stack_00000180;
              if ((*(byte *)(param_1 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
                unaff_x20 = in_stack_00000090;
                if (!bVar8) goto LAB_0354eb28;
                goto LAB_0354e660;
              }
              param_1 = param_1 + unaff_x29 * 0x178;
              iVar9 = *(int *)(param_1 + 0x68);
              *(undefined4 *)(param_1 + 0x16c) = in_stack_000017d4;
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
                lVar17 = *unaff_x22;
                if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0x38), lVar23 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar23 + 0x18) <= in_stack_00000170)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                fVar24 = *(float *)(lVar23 + unaff_x29 * 0x178 + 0x160);
                if (fVar35 <= fVar24) {
                  fVar35 = fVar24;
                }
                if (fStack0000000000000100 <= ABS(unaff_s14)) {
                  fStack0000000000000100 = ABS(unaff_s14);
                }
                if (iVar9 != iStack000000000000005c) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar17 = *unaff_x22;
                    if (lVar17 == 0) goto LAB_0354fbf4;
                    lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  else {
                    lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  fStack0000000000000104 = *(float *)(lVar23 + 0x15a8);
                }
                lVar17 = *(long *)(lVar17 + 0x38);
                if (lVar17 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
                fVar25 = *(float *)(lVar17 + unaff_x29 * 0x178 + 0x14c);
                fVar24 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
                fVar25 = fVar25 + fVar35 * fVar24;
                iStack000000000000005c = iVar9;
                if (fVar25 <= fStack0000000000000104) {
                  fStack0000000000000104 = fVar25;
                }
              }
              if (!bVar8) goto LAB_0354eac4;
              goto LAB_0354eb88;
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
LAB_0354eac4:
  unaff_x23 = 0x178;
  bVar8 = false;
  unaff_x20 = in_stack_00000090;
  if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
      ((int)uVar5 < (int)in_stack_00000170)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
  if (in_stack_00000170 == uVar5) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b97f8(in_stack_00000178,0);
    if ((uVar11 & 1) != 0) {
LAB_0354eb28:
      unaff_x23 = 0x178;
      bVar8 = false;
      unaff_x20 = in_stack_00000090;
      goto LAB_0354ec38;
    }
  }
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar17 = lVar17 + unaff_x29 * 0x178;
  in_stack_00000080._4_4_ = *(float *)(lVar17 + 0x160);
  in_stack_00000070 = *(undefined4 *)(lVar17 + 0x11c);
  bVar8 = fVar35 != 0.0;
  fVar24 = in_stack_00000080._4_4_;
  if (bVar8) {
    fVar24 = fVar35;
  }
  fVar35 = fVar24;
  in_stack_00000088 = *(undefined4 *)(lVar17 + 0x168);
  uStack000000000000006c = 0;
  fVar24 = unaff_s14;
  if (bVar8) {
    fVar24 = fStack0000000000000100;
  }
  fStack0000000000000068 = fStack0000000000000104;
  fStack0000000000000100 = fVar24;
LAB_0354eb88:
  unaff_x23 = 0x178;
  if (*in_stack_00000090 == 1) {
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar23 + unaff_x29 * 0x178;
    lVar17 = *unaff_x19;
    uVar27 = *(undefined4 *)(lVar23 + 0x128);
    uVar30 = *(undefined4 *)(lVar23 + 0x160);
    unaff_x20 = in_stack_00000090;
    in_stack_00000170 = uVar16;
    goto LAB_0354ebc0;
  }
  if ((in_stack_00000170 == uVar4) || ((int)uVar5 <= (int)in_stack_00000170)) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b63d8(in_stack_00000178,0);
    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
    goto LAB_0354fbf4;
    lVar23 = unaff_x29;
    if (in_stack_00000178 == 0x200b || (uVar11 & 1) != 0) {
      lVar23 = unaff_x27;
      in_stack_00000170 = uVar5;
    }
    if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar17 = lVar17 + lVar23 * 0x178;
    uVar27 = *(undefined4 *)(lVar17 + 0x128);
    uVar30 = *(undefined4 *)(lVar17 + 0x160);
    pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
    unaff_x20 = in_stack_00000090;
    in_stack_00000170 = uVar16;
    goto LAB_0354ebc8;
  }
  if (!bVar1) {
    if ((*unaff_x22 == 0) ||
       (param_1 = *(long *)(*unaff_x22 + 0x38), unaff_x20 = in_stack_00000090,
       in_stack_00000170 = uVar16, param_1 == 0)) goto LAB_0354fbf4;
    goto code_r0x0354f090;
  }
  if ((int)in_stack_00000170 < *in_stack_00000090 + -1) {
    if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar17 + 0x18) <= uVar16)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar11 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar17 + unaff_x26),0);
    if ((uVar11 & 1) == 0) goto LAB_0354f62c;
  }
  bVar8 = true;
  unaff_x20 = in_stack_00000090;
  goto LAB_0354ec38;
LAB_0354f62c:
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar17 = lVar17 + unaff_x29 * 0x178;
  (**(code **)(*unaff_x19 + 0x8d8))
            (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
             *(undefined4 *)(lVar17 + 0x128),fStack0000000000000104,0,in_stack_00000080._4_4_,
             *(undefined4 *)(lVar17 + 0x160));
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  unaff_x20 = in_stack_00000090;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar17 = *(long *)puVar7;
  }
  goto LAB_0354ec1c;
  while( true ) {
    lVar17 = *unaff_x22;
    lVar23 = lVar23 + 1;
    lVar21 = lVar21 + 0x50;
    if (lVar17 == 0) break;
LAB_0354f97c:
    uVar11 = lVar23 + 1;
    if ((long)*(int *)(lVar17 + 0x34) <= (long)uVar11) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar17 = *(long *)(lVar17 + 0x60);
    if (lVar17 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar17 + lVar21 + 0x70,0);
    lVar17 = unaff_x19[0xe1];
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar19 = *(undefined8 *)(lVar17 + lVar23 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036d35a8(uVar19,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x60), lVar17 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar11) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar17 + lVar21 + 0x70,1,0);
      }
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar23 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a460c(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0x80),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar23 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a4810(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0x98),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar23 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a48bc(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0xa0),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar23 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a4e24(lVar17,*(undefined8 *)(lVar15 + lVar21 + 0xa8),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar23 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = FUN_0359d5ac(lVar17,0), lVar17 == 0)) break;
      FUN_036aa280(lVar17,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


