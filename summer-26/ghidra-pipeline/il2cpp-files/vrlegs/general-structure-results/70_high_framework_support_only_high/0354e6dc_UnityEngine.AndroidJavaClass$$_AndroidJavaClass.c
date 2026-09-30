/*
FUNCTION_NAME: UnityEngine.AndroidJavaClass$$_AndroidJavaClass
ENTRY_POINT: 0354e6dc
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


void UnityEngine_AndroidJavaClass___AndroidJavaClass(void)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  uint uVar11;
  uint in_w8;
  long lVar12;
  code *pcVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar21;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s14;
  float unaff_s15;
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
  undefined8 in_stack_00000130;
  long in_stack_00000138;
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
  
  do {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_026b63d8(in_stack_00000178,0);
    if ((in_stack_00000178 != 0x200b) && ((uVar8 & 1) == 0)) {
      lVar12 = *unaff_x22;
      if ((lVar12 == 0) || (lVar16 = *(long *)(lVar12 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar22 = *(float *)(lVar16 + unaff_x29 * unaff_x27 + 0x160);
      if (unaff_s15 <= fVar22) {
        unaff_s15 = fVar22;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (unaff_w23 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar12 = *unaff_x22;
          if (lVar12 == 0) goto LAB_0354fbf4;
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar16 + 0x15a8);
      }
      lVar12 = *(long *)(lVar12 + 0x38);
      if (lVar12 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar28 = *(float *)(lVar12 + unaff_x29 * unaff_x27 + 0x14c);
      fVar22 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar28 = fVar28 + unaff_s15 * fVar22;
      iStack000000000000005c = unaff_w23;
      if (fVar28 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar28;
      }
    }
    uVar15 = (uint)in_stack_00000128;
    uVar11 = in_stack_00000180;
    if ((in_stack_00000130._4_4_ & 1) == 0) {
      in_stack_00000130._4_4_ = 0;
      if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
          ((int)unaff_w24 <= (int)uVar15)) && (((in_w8 ^ 1) & 1) == 0)) {
        if (unaff_w24 == uVar15) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar8 & 1) != 0) goto LAB_0354eb28;
        }
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
        goto LAB_0354fbf4;
        if (unaff_w24 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + unaff_x29 * 0x178;
          in_stack_00000080._4_4_ = *(float *)(lVar12 + 0x160);
          in_stack_00000070 = *(undefined4 *)(lVar12 + 0x11c);
          bVar5 = unaff_s15 != 0.0;
          fVar22 = in_stack_00000080._4_4_;
          if (bVar5) {
            fVar22 = unaff_s15;
          }
          unaff_s15 = fVar22;
          in_stack_00000088 = *(undefined4 *)(lVar12 + 0x168);
          uStack000000000000006c = 0;
          fVar22 = unaff_s14;
          if (bVar5) {
            fVar22 = fStack0000000000000100;
          }
          fStack0000000000000068 = fStack0000000000000104;
          fStack0000000000000100 = fVar22;
          goto LAB_0354eb88;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
    else {
LAB_0354eb88:
      if (*unaff_x20 == 1) {
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
        goto LAB_0354fbf4;
        if (unaff_w24 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + unaff_x29 * 0x178;
          lVar16 = *unaff_x19;
          uVar24 = *(undefined4 *)(lVar12 + 0x128);
          uVar27 = *(undefined4 *)(lVar12 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      if ((unaff_w24 == (uint)in_stack_000000e8) || ((int)uVar15 <= (int)unaff_w24)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b63d8(in_stack_00000178,0);
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
        goto LAB_0354fbf4;
        lVar16 = unaff_x29;
        uVar11 = unaff_w24;
        if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) {
          lVar16 = in_stack_00000128;
          uVar11 = uVar15;
        }
        if (uVar11 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + lVar16 * 0x178;
          uVar24 = *(undefined4 *)(lVar12 + 0x128);
          uVar27 = *(undefined4 *)(lVar12 + 0x160);
          pcVar13 = *(code **)(*unaff_x19 + 0x8d8);
          in_stack_00000138 = unaff_x26;
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      if ((in_w8 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
          uVar11 = *(uint *)(lVar12 + 0x18);
          goto LAB_0354e660;
        }
        goto LAB_0354fbf4;
      }
      if ((int)unaff_w24 < *unaff_x20 + -1) {
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar8 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar12 + unaff_x26),0);
        unaff_x26 = in_stack_00000138;
        if ((uVar8 & 1) == 0) {
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          if (unaff_w24 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + unaff_x29 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar12 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar12 + 0x160));
            puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar12 + 0xe0) != 0) goto LAB_0354ec1c;
            thunk_FUN_01a58e78();
            lVar12 = *(long *)puVar4;
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
      }
      in_stack_00000130._4_4_ = 1;
    }
LAB_0354ec38:
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (in_stack_00000110 == 0) goto LAB_0354fbf4;
    uVar15 = *(uint *)(lVar12 + unaff_x29 * 0x178 + 400);
    fVar22 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
    uVar19 = (uint)in_stack_00000128;
    if ((uVar15 >> 6 & 1) == 0) {
      if ((in_stack_00000120 & 1) != 0) {
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar24 = *(undefined4 *)(lVar12 + unaff_x26 + -0x330);
        fVar28 = *(float *)(lVar12 + unaff_x26 + -0x30c);
        pcVar13 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
        (*pcVar13)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar24,
                   in_stack_000000a8 * fVar22 + fVar28,0,in_stack_000000a8,in_stack_000000a8);
      }
LAB_0354f250:
      in_stack_00000120 = 0;
    }
    else {
      lVar12 = *unaff_x22;
      if ((lVar12 == 0) || (lVar16 = *(long *)(lVar12 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)(lVar16 + unaff_x29 * 0x178 + 0x174) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar16 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
          ((int)uVar19 < (int)unaff_w24)) || ((in_stack_00000120 & 1) != 0 || !bVar5)) {
LAB_0354ed84:
        if ((in_stack_00000120 & 1) == 0) goto LAB_0354f250;
      }
      else {
        if (unaff_w24 == uVar19) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar8 & 1) != 0) goto LAB_0354ed84;
          lVar12 = *unaff_x22;
          if (lVar12 == 0) goto LAB_0354fbf4;
        }
        lVar12 = *(long *)(lVar12 + 0x38);
        if (lVar12 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar12 + 0x18) <= unaff_w24)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar12 = lVar12 + unaff_x29 * 0x178;
        in_stack_00000048._4_4_ = *(float *)(lVar12 + 0x60);
        in_stack_00000040 = *(float *)(lVar12 + 0x14c);
        in_stack_000000a0 = *(undefined4 *)(lVar12 + 0x11c);
        in_stack_000000a8 = *(float *)(lVar12 + 0x160);
        fStack000000000000009c = fVar22 * in_stack_000000a8 + in_stack_00000040;
        uStack0000000000000098 = 0;
      }
      iVar6 = *unaff_x20;
      if (iVar6 == 1) {
        if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
          uVar15 = *(uint *)(lVar12 + 0x18);
LAB_0354ef0c:
          if (unaff_w24 < uVar15) {
            lVar12 = lVar12 + unaff_x29 * 0x178;
            lVar16 = *unaff_x19;
            uVar24 = *(undefined4 *)(lVar12 + 0x128);
            fVar28 = *(float *)(lVar12 + 0x14c);
LAB_0354ef24:
            pcVar13 = *(code **)(lVar16 + 0x8d8);
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
        uVar8 = FUN_026b63d8(in_stack_00000178,0);
        if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
          uVar15 = *(uint *)(lVar12 + 0x18);
          if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
          in_stack_00000128 = unaff_x29;
          if (unaff_w24 < uVar15) {
LAB_0354f1f8:
            lVar12 = lVar12 + in_stack_00000128 * 0x178;
            fVar28 = *(float *)(lVar12 + 0x14c);
            uVar24 = *(undefined4 *)(lVar12 + 0x128);
            pcVar13 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((int)unaff_w24 < iVar6) {
        lVar12 = *unaff_x22;
        if ((lVar12 != 0) && (lVar16 = *(long *)(lVar12 + 0x38), lVar16 != 0)) {
          if (in_stack_00000170 < *(uint *)(lVar16 + 0x18)) {
            if (*(float *)(lVar16 + unaff_x26 + -0x108) == in_stack_00000048._4_4_) {
              fVar28 = *(float *)(lVar16 + unaff_x26 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_03567bac(in_stack_00000150 + fVar28,in_stack_00000040,0);
              if ((uVar8 & 1) != 0) {
                iVar6 = *unaff_x20;
                goto LAB_0354f010;
              }
              lVar12 = *unaff_x22;
              if (lVar12 == 0) goto LAB_0354fbf4;
            }
            lVar12 = *(long *)(lVar12 + 0x38);
            if (lVar12 != 0) {
              uVar15 = *(uint *)(lVar12 + 0x18);
              if ((int)unaff_w24 <= (int)uVar19) goto LAB_0354f1f0;
LAB_0354f1e0:
              if (uVar19 < uVar15) goto LAB_0354f1f8;
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
            goto LAB_0354fbf4;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f010:
      if ((int)unaff_w24 < iVar6) {
        iVar6 = FUN_036d3364(in_stack_00000110,0);
        if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar12 = *(long *)(unaff_x25 + unaff_x26 + -0x130);
        if (lVar12 == 0) goto LAB_0354fbf4;
        iVar7 = FUN_036d3364(lVar12,0);
        if (iVar6 != iVar7) {
          if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
            uVar15 = *(uint *)(lVar12 + 0x18);
            unaff_x20 = in_stack_00000090;
            goto LAB_0354ef0c;
          }
          goto LAB_0354fbf4;
        }
      }
      if (!bVar5) {
        if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
          if (in_stack_00000170 - 2 < *(uint *)(lVar12 + 0x18)) {
            lVar16 = *unaff_x19;
            uVar24 = *(undefined4 *)(lVar12 + unaff_x26 + -0x330);
            fVar28 = *(float *)(lVar12 + unaff_x26 + -0x30c);
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
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
    goto LAB_0354fbf4;
    uVar15 = (uint)*(undefined8 *)(lVar12 + 0x18);
    if (uVar15 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar12 + unaff_x29 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if ((uStack0000000000000118 & 1) != 0) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
      }
LAB_0354f604:
      uStack0000000000000118 = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar12 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
            ((int)unaff_w24 <= (int)uVar19)) && (bVar5)) {
          if (unaff_w24 == uVar19) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar8 = FUN_026b97f8(in_stack_00000178,0);
            if ((uVar8 & 1) != 0) goto LAB_0354f374;
          }
          puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar16 = *(long *)puVar4;
          }
          if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
            uVar15 = (uint)*(undefined8 *)(lVar12 + 0x18);
            if (unaff_w24 < uVar15) {
              lVar16 = *(long *)(lVar16 + 0xb8);
              lVar20 = lVar12 + unaff_x29 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar20 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar20 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar16 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar16 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar20 + 0x18c);
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
        uStack0000000000000118 = 0;
      }
      else {
LAB_0354f400:
        if (uVar15 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar12 = lVar12 + unaff_x29 * 0x178;
        fVar28 = *(float *)(lVar12 + 0x128);
        fVar23 = *(float *)(lVar12 + 0x188);
        uVar21 = *(undefined8 *)(lVar12 + 0x17c);
        fVar30 = *(float *)(lVar12 + 0x184);
        uVar18 = *(undefined8 *)(lVar12 + 0x184);
        fVar29 = *(float *)(lVar12 + 0x18c);
        fVar22 = *(float *)(lVar12 + 0x11c);
        fVar25 = *(float *)(lVar12 + 0x148);
        fVar26 = *(float *)(lVar12 + 0x150);
        in_stack_00000188 = uVar21;
        fStack0000000000000190 = fVar30;
        fStack0000000000000194 = fVar23;
        in_stack_00000198 = fVar29;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar8 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar12 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar8 & 1) == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar12);
          }
          fVar28 = fVar28 + (float)in_stack_000017c8;
          fVar22 = fVar22 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar25 = fVar25 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar22 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar22;
          }
          if (fVar26 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar26 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar28) {
            fStack00000000000000d0 = fVar28;
          }
          if (fStack00000000000000d4 <= fVar25) {
            fStack00000000000000d4 = fVar25;
          }
        }
        else {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar12);
          }
          fVar22 = (fVar22 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar26 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar26;
          }
          if (fStack00000000000000d4 <= fVar25) {
            fStack00000000000000d4 = fVar25;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar22,
                     fStack00000000000000d4,uStack00000000000000c0);
          fStack00000000000000e4 = fVar26 - fVar29;
          fStack00000000000000d0 = fVar28 + fVar30;
          uStack00000000000000c0 = 0;
          fStack00000000000000d4 = fVar25 + fVar23;
          fStack00000000000000e0 = fVar22;
          in_stack_000017c0 = uVar21;
          in_stack_000017c8 = uVar18;
          in_stack_000017d0 = fVar29;
        }
        if (((*unaff_x20 == 1) || (unaff_w24 == (uint)in_stack_000000e8)) ||
           (((int)uVar19 <= (int)unaff_w24 || (!bVar5)))) {
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                     fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
          goto LAB_0354f604;
        }
        uStack0000000000000118 = 1;
      }
    }
    puVar4 = OVRPlugin_Media_TypeInfo;
    iVar6 = *unaff_x20;
    unaff_w28 = unaff_w28 + 1;
    uVar15 = in_stack_00000170 + 1;
    unaff_x26 = unaff_x26 + 0x178;
    if (iVar6 <= (int)in_stack_00000170) {
      lVar12 = *unaff_x22;
      if (lVar12 == 0) goto LAB_0354fbf4;
      *(int *)(lVar12 + 0x18) = iVar6;
      lVar16 = unaff_x19[0xd4];
      *(uint *)(lVar12 + 0x2c) = uVar11 + 1;
      if (iVar6 < 1 || in_stack_000000d8 == 0) {
        in_stack_000000d8 = 1;
      }
      *(int *)(lVar12 + 0x1c) = (int)lVar16;
      *(int *)(lVar12 + 0x24) = in_stack_000000d8;
      *(int *)(lVar12 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar8 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar8 & 1) == 0)) goto LAB_0354d0cc;
      lVar12 = unaff_x19[0xdb];
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),*unaff_x22,*(undefined8 *)(lVar12 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0))
        goto LAB_0354fbf4;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar12 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        FUN_03596b20(lVar12 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar12 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar12 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar12 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar12 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036aa280(unaff_x19[0x74],0);
      lVar12 = *unaff_x22;
      if (lVar12 == 0) goto LAB_0354fbf4;
      lVar20 = 0;
      lVar16 = 0;
      break;
    }
    if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x50), lVar12 == 0))
    goto LAB_0354fbf4;
    unaff_x29 = (long)(int)in_stack_00000170;
    lVar16 = unaff_x25 + unaff_x29 * 0x178;
    in_stack_00000180 = *(uint *)(lVar16 + 100);
    if (*(uint *)(lVar12 + 0x18) <= in_stack_00000180)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_stack_00000110 = *(long *)(lVar16 + 0x38);
    lVar20 = (long)(int)in_stack_00000180;
    lVar12 = lVar12 + lVar20 * 0x5c;
    uVar19 = *(uint *)(lVar12 + 0x68);
    in_stack_00000178 = (uint)*(ushort *)(lVar16 + 0x20);
    uVar3 = *(uint *)(lVar12 + 0x3c);
    in_stack_000000e8 = (long)(int)uVar3;
    iVar1 = *(int *)(lVar12 + 0x20);
    iVar6 = *(int *)(lVar12 + 0x28);
    iVar7 = *(int *)(lVar12 + 0x2c);
    fVar25 = *(float *)(lVar12 + 0x4c);
    in_stack_00000128 = (long)*(int *)(lVar12 + 0x40);
    fVar23 = *(float *)(lVar12 + 0x54);
    fVar22 = *(float *)(lVar12 + 0x58);
    fVar30 = *(float *)(lVar12 + 0x5c);
    fVar31 = *(float *)(lVar12 + 0x60);
    fVar29 = *(float *)(lVar12 + 0x6c);
    fVar32 = *(float *)(lVar12 + 0x70);
    fVar28 = *(float *)(lVar12 + 0x74);
    fVar26 = *(float *)(lVar12 + 0x78);
    if ((int)uVar19 < 9) {
      switch(uVar19) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar31 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar22;
        }
        break;
      case 2:
LAB_0354d968:
        in_stack_000000f8._4_4_ = (fVar31 + fVar30 * 0.5) - fVar22 * 0.5;
        break;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar30 + fVar31) - fVar22;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar30 + fVar31;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      in_stack_000000f0 = 0;
    }
    else if (uVar19 == 0x10) {
switchD_0354d8a4_caseD_8:
      if (in_stack_00000178 < 0xad) {
        if ((in_stack_00000178 != 3) && (in_stack_00000178 != 10)) {
FUN_0354d8fc:
          if (*(uint *)(unaff_x25 + 0x18) <= uVar3)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar2 = *(undefined2 *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b8cc4(uVar2,0);
          if ((uVar8 & 1) == 0) {
            bVar5 = (int)in_stack_00000180 < (int)unaff_x19[0x95];
          }
          else {
            bVar5 = false;
          }
          if ((fVar22 <= fVar30) && (!bVar5 && uVar19 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar31;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar30 + fVar31;
            }
            goto LAB_0354d9d8;
          }
          if (((uVar15 == 1) || (in_stack_00000180 != uVar11)) ||
             (in_stack_00000170 == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar31;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar30 + fVar31;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
            in_stack_000000f0 = 0;
          }
          else {
            cVar10 = (char)unaff_x19[0x1e];
            fVar31 = -fVar22;
            if (cVar10 != '\0') {
              fVar31 = fVar22;
            }
            if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar3)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar7 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x194) +
                    (-iVar1 - (uStack0000000000000030 & 1)) + iVar7 + -1;
            if (iVar7 < 1) {
              fVar22 = 1.0;
              iVar7 = 1;
            }
            else {
              fVar22 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (in_stack_00000178 == 9) {
LAB_0354f76c:
              fVar22 = 1.0 - fVar22;
            }
            else {
              if (in_stack_00000178 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b97f8(in_stack_00000178,0);
                cVar10 = (char)unaff_x19[0x1e];
                if ((uVar8 & 1) != 0) goto LAB_0354f76c;
              }
              iVar7 = (iVar1 - (~uStack0000000000000030 & 1)) + iVar6;
            }
            fVar22 = ((fVar30 + fVar31) * fVar22) / (float)iVar7;
            if (cVar10 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar22;
              in_stack_000000f0 =
                   CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                            (float)in_stack_000000f0 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar22;
            }
          }
        }
      }
      else if (((in_stack_00000178 != 0xad) && (in_stack_00000178 != 0x200b)) &&
              (in_stack_00000178 != 0x2060)) goto FUN_0354d8fc;
    }
    else if (uVar19 == 0x20) {
      fVar22 = fVar29 + fVar28;
      goto LAB_0354d968;
    }
switchD_0354d8a4_caseD_3:
    uVar19 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar19 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar12 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar30 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    in_stack_00000150 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
    fVar22 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
    if (*(char *)(lVar12 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar6 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
    if (iVar6 != 0) goto LAB_0354e05c;
    fVar31 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar16 + 0x84) = 0;
      *(undefined4 *)(lVar16 + 0xac) = 0;
      *(undefined4 *)(lVar16 + 0xd4) = 0x3f800000;
      fVar31 = 1.0;
      break;
    case 1:
      fVar26 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar28 = (in_stack_000000f8._4_4_ + fVar26) - *(float *)(in_stack_00000078 + 0x230);
        fVar26 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar28 = fVar28 - fVar29;
      *(float *)(lVar16 + 0x84) = fVar31 + (fVar26 - fVar29) / fVar28;
      *(float *)(lVar16 + 0xac) = fVar31 + (*(float *)(lVar16 + 0x98) - fVar29) / fVar28;
      *(float *)(lVar16 + 0xd4) = fVar31 + (*(float *)(lVar16 + 0xc0) - fVar29) / fVar28;
      fVar31 = fVar31 + (*(float *)(lVar16 + 0xe8) - fVar29) / fVar28;
      break;
    case 2:
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar26 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar28 = (in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar16 + 0x84) = fVar31 + fVar28 / fVar26;
      *(float *)(lVar16 + 0xac) =
           fVar31 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar16 + 0xd4) =
           fVar31 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar31 = fVar31 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
        *(undefined4 *)(lVar16 + 0x88) = 0;
        *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar16 + 0xd8) = 0;
        *(undefined4 *)(lVar16 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar26 = fVar26 - fVar32;
        fVar28 = fVar31 + (*(float *)(lVar16 + 0x74) - fVar32) / fVar26;
        fVar26 = fVar31 + (*(float *)(lVar16 + 0x9c) - fVar32) / fVar26;
        *(float *)(lVar16 + 0x88) = fVar28;
        *(float *)(lVar16 + 0xb0) = fVar26;
        *(float *)(lVar16 + 0xd8) = fVar28;
        *(float *)(lVar16 + 0x100) = fVar26;
        break;
      case 2:
        lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar28 = fVar31 + (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar16 + 0x88) = fVar28;
        fVar26 = *(float *)(unaff_x19 + 0x9c);
        fVar29 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar16 + 0xd8) = fVar28;
        fVar28 = fVar31 + (*(float *)(lVar16 + 0x9c) - fVar26) / (fVar29 - fVar26);
        *(float *)(lVar16 + 0xb0) = fVar28;
        *(float *)(lVar16 + 0x100) = fVar28;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar19 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
      }
      if (uVar19 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar28 = *(float *)(lVar16 + 0x15c);
      fVar26 = (1.0 - (*(float *)(lVar16 + 0x88) + *(float *)(lVar16 + 0xb0)) * fVar28) * 0.5;
      fVar29 = fVar31 + *(float *)(lVar16 + 0x88) * fVar28 + fVar26;
      fVar31 = fVar31 + fVar26 + *(float *)(lVar16 + 0xb0) * fVar28;
      *(float *)(lVar16 + 0x84) = fVar29;
      *(float *)(lVar16 + 0xac) = fVar29;
      *(float *)(lVar16 + 0xd4) = fVar31;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar31;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar19 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar16 + 0x88) = 0;
      *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0x100) = 0;
      break;
    case 1:
      if (in_stack_00000170 < uVar19) {
        lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar25 = fVar25 - fVar23;
        fVar28 = (*(float *)(lVar16 + 0x74) - fVar23) / fVar25;
        fVar25 = (*(float *)(lVar16 + 0x9c) - fVar23) / fVar25;
        *(float *)(lVar16 + 0x88) = fVar28;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar19 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar28 = (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar16 + 0x88) = fVar28;
      fVar25 = (*(float *)(lVar16 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar16 + 0xb0) = fVar25;
      *(float *)(lVar16 + 0xd8) = fVar25;
      *(float *)(lVar16 + 0x100) = fVar28;
      break;
    case 3:
      if (uVar19 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar26 = *(float *)(lVar16 + 0x15c);
      fVar25 = (1.0 - (*(float *)(lVar16 + 0x84) + *(float *)(lVar16 + 0xd4)) / fVar26) * 0.5;
      fVar28 = *(float *)(lVar16 + 0x84) / fVar26 + fVar25;
      fVar25 = fVar25 + *(float *)(lVar16 + 0xd4) / fVar26;
      *(float *)(lVar16 + 0x88) = fVar28;
      *(float *)(lVar16 + 0xb0) = fVar25;
      *(float *)(lVar16 + 0x100) = fVar28;
      *(float *)(lVar16 + 0xd8) = fVar25;
    }
    if (uVar19 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
    unaff_s14 = fStack0000000000000058 * *(float *)(lVar16 + 0x160) *
                (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar16 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar25 = *(float *)(lVar16 + 0x88);
    fVar26 = *(float *)(lVar16 + 0x84);
    fVar28 = -2.1474836e+09;
    if (fVar26 != INFINITY) {
      fVar28 = (float)(int)fVar26;
    }
    fVar29 = *(float *)(lVar16 + 0xd4);
    fVar31 = *(float *)(lVar16 + 0xd8);
    fVar23 = -2.1474836e+09;
    if (fVar25 != INFINITY) {
      fVar23 = (float)(int)fVar25;
    }
    uVar24 = FUN_03591d3c(fVar26 - fVar28,fVar25 - fVar23);
    *(undefined4 *)(lVar16 + 0x84) = uVar24;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar31 = fVar31 - fVar23;
    *(float *)(lVar16 + 0x88) = unaff_s14;
    uVar24 = FUN_03591d3c(fVar26 - fVar28,fVar31);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar24;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar29 = fVar29 - fVar28;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
    fVar28 = (float)FUN_03591d3c(fVar29,fVar31);
    *(float *)(lVar16 + 0xd4) = fVar28;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar16 + 0xd8) = unaff_s14;
    uVar24 = FUN_03591d3c(fVar29,fVar25 - fVar23);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar24;
    uVar19 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar19 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
    unaff_x22 = in_stack_00000050;
LAB_0354e05c:
    if (((int)in_stack_00000170 < (int)unaff_x19[0x65]) &&
       (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)unaff_x19[0x66] <= (int)in_stack_00000180) || ((int)unaff_x19[0x5c] == 5)) {
        if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
          if (in_stack_00000170 < uVar19) {
            if (*(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x68) == iStack0000000000000034)
            goto LAB_0354f0d4;
            goto LAB_0354e0cc;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354e0cc;
      }
      if (uVar19 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar12 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(ulong *)(lVar12 + 0x70) =
           CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar12 + 0x70));
      *(float *)(lVar12 + 0x78) = fVar22 + *(float *)(lVar12 + 0x78);
      *(ulong *)(lVar12 + 0x98) =
           CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar12 + 0x98));
      *(float *)(lVar12 + 0xa0) = fVar22 + *(float *)(lVar12 + 0xa0);
      *(ulong *)(lVar12 + 0xc0) =
           CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar12 + 0xc0));
      *(float *)(lVar12 + 200) = fVar22 + *(float *)(lVar12 + 200);
      *(ulong *)(lVar12 + 0xe8) =
           CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar12 + 0xe8));
      *(float *)(lVar12 + 0xf0) = fVar22 + *(float *)(lVar12 + 0xf0);
    }
    else {
LAB_0354e0cc:
      if (uVar19 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac();
        DAT_0411f172 = '\x01';
        uVar19 = *(uint *)(in_stack_000000c8 + 0x18);
      }
      puVar4 = PTR_DAT_03cbded8;
      uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined8 *)(lVar16 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      *(undefined4 *)(lVar16 + 0x78) = uVar24;
      if (uVar19 <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined8 *)(lVar16 + 0x98) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
      *(undefined4 *)(lVar16 + 0xa0) = uVar24;
      uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
      *(undefined8 *)(lVar16 + 0xc0) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
      *(undefined4 *)(lVar16 + 200) = uVar24;
      uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
      *(undefined8 *)(lVar16 + 0xe8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
      *(undefined4 *)(lVar16 + 0xf0) = uVar24;
      *(undefined1 *)(lVar12 + 0x194) = 0;
    }
    if (iVar6 == 0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar13)();
    }
    else if (iVar6 == 1) {
      pcVar13 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar12 = lVar12 + unaff_x29 * 0x178;
    uVar18 = *(undefined8 *)(lVar12 + 0x11c);
    *(undefined8 *)(lVar12 + 0x11c) =
         CONCAT44(in_stack_00000150 + (float)((ulong)uVar18 >> 0x20),fVar30 + (float)uVar18);
    *(float *)(lVar12 + 0x124) = fVar22 + *(float *)(lVar12 + 0x124);
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar12 = lVar12 + unaff_x29 * 0x178;
    *(ulong *)(lVar12 + 0x110) =
         CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x110) >> 0x20),
                  fVar30 + (float)*(undefined8 *)(lVar12 + 0x110));
    *(float *)(lVar12 + 0x118) = fVar22 + *(float *)(lVar12 + 0x118);
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar12 = lVar12 + unaff_x29 * 0x178;
    *(ulong *)(lVar12 + 0x128) =
         CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x128) >> 0x20),
                  fVar30 + (float)*(undefined8 *)(lVar12 + 0x128));
    *(float *)(lVar12 + 0x130) = fVar22 + *(float *)(lVar12 + 0x130);
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar12 = lVar12 + unaff_x29 * 0x178;
    *(float *)(lVar12 + 0x134) = fVar30 + *(float *)(lVar12 + 0x134);
    *(ulong *)(lVar12 + 0x138) =
         CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(lVar12 + 0x138) >> 0x20),
                  in_stack_00000150 + (float)*(undefined8 *)(lVar12 + 0x138));
    lVar12 = *unaff_x22;
    if ((lVar12 == 0) || (lVar16 = *(long *)(lVar12 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
    uVar19 = *(uint *)(lVar16 + 0x18);
    if (uVar19 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar16 + unaff_x29 * 0x178;
    *(float *)(lVar14 + 0x150) = in_stack_00000150 + *(float *)(lVar14 + 0x150);
    *(ulong *)(lVar14 + 0x140) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0x140) >> 0x20),
                  fVar30 + (float)*(undefined8 *)(lVar14 + 0x140));
    *(ulong *)(lVar14 + 0x148) =
         CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar14 + 0x148) >> 0x20),
                  in_stack_00000150 + (float)*(undefined8 *)(lVar14 + 0x148));
    if (in_stack_00000180 == uVar11) {
      uVar11 = *in_stack_00000090 - 1;
      if (in_stack_00000170 == uVar11) goto LAB_0354e3ec;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x50);
      if (lVar12 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = (long)(int)uVar11;
      lVar17 = lVar12 + lVar14 * 0x5c;
      fVar22 = in_stack_00000150 + *(float *)(lVar17 + 0x54);
      *(ulong *)(lVar17 + 0x4c) =
           CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                    in_stack_00000150 + (float)*(undefined8 *)(lVar17 + 0x4c));
      *(float *)(lVar17 + 0x54) = fVar22;
      *(float *)(lVar17 + 0x58) = fVar30 + *(float *)(lVar17 + 0x58);
      if (uVar19 <= *(uint *)(lVar17 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar24 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar17 + 0x34) * 0x178 + 0x11c);
      lVar12 = lVar12 + lVar14 * 0x5c;
      *(float *)(lVar12 + 0x70) = fVar22;
      *(undefined4 *)(lVar12 + 0x6c) = uVar24;
      lVar12 = *unaff_x22;
      if ((lVar12 == 0) || (lVar16 = *(long *)(lVar12 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + 0x38);
      if (lVar12 == 0) goto LAB_0354fbf4;
      uVar11 = *(uint *)(lVar16 + lVar14 * 0x5c + 0x40);
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar14 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar12 + (long)(int)uVar11 * 0x178 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      uVar11 = *in_stack_00000090 - 1;
LAB_0354e3ec:
      if (in_stack_00000170 == uVar11) {
        lVar12 = *unaff_x22;
        if ((lVar12 == 0) || (lVar16 = *(long *)(lVar12 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000180)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar14 = lVar16 + lVar20 * 0x5c;
        fVar22 = in_stack_00000150 + *(float *)(lVar14 + 0x54);
        *(ulong *)(lVar14 + 0x4c) =
             CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar14 + 0x4c) >> 0x20),
                      in_stack_00000150 + (float)*(undefined8 *)(lVar14 + 0x4c));
        *(float *)(lVar14 + 0x54) = fVar22;
        *(float *)(lVar14 + 0x58) = fVar30 + *(float *)(lVar14 + 0x58);
        lVar12 = *(long *)(lVar12 + 0x38);
        if (lVar12 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar14 + 0x34))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar24 = *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar14 + 0x34) * 0x178 + 0x11c);
        lVar16 = lVar16 + lVar20 * 0x5c;
        *(float *)(lVar16 + 0x70) = fVar22;
        *(undefined4 *)(lVar16 + 0x6c) = uVar24;
        lVar12 = *unaff_x22;
        if ((lVar12 == 0) || (lVar16 = *(long *)(lVar12 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000180)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar12 = *(long *)(lVar12 + 0x38);
        if (lVar12 == 0) goto LAB_0354fbf4;
        uVar11 = *(uint *)(lVar16 + lVar20 * 0x5c + 0x40);
        if (*(uint *)(lVar12 + 0x18) <= uVar11)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar16 = lVar16 + lVar20 * 0x5c;
        *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar12 + (long)(int)uVar11 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_026b82c4(in_stack_00000178,0);
    if (((((uVar8 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) && (in_stack_00000178 != 0xad)) &&
       (in_stack_00000178 != 0x2d)) {
      if ((uStack000000000000011c & 1) == 0) {
        if (uVar15 != 1) {
LAB_0354f144:
          uStack000000000000011c = 0;
          goto LAB_0354e618;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b81f8(in_stack_00000178,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b63d8(in_stack_00000178,0);
          if (((in_stack_00000178 != 0x200b) && ((uVar8 & 1) == 0)) && (*in_stack_00000090 != 1))
          goto LAB_0354f144;
        }
      }
      else if (((uVar15 != 1) &&
               ((int)in_stack_00000170 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1))) &&
              (((int)in_stack_00000170 < *in_stack_00000090 &&
               ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170 - 1)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar2 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b82c4(uVar2,0);
        if ((uVar8 & 1) != 0) {
          if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar15)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar2 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b82c4(uVar2,0);
          if ((uVar8 & 1) != 0) goto LAB_0354e610;
        }
      }
      if (in_stack_00000170 == *in_stack_00000090 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b82c4(in_stack_00000178,0);
        iVar6 = unaff_w28;
        if ((uVar8 & 1) == 0) goto LAB_0354e93c;
      }
      else {
LAB_0354e93c:
        iVar6 = in_stack_00000170 - 1;
      }
      lVar12 = *unaff_x22;
      if (lVar12 == 0) goto LAB_0354fbf4;
      lVar16 = *(long *)(lVar12 + 0x40);
      if (lVar16 == 0) goto LAB_0354fbf4;
      uVar11 = *(uint *)(lVar12 + 0x24);
      iVar7 = *(int *)(lVar16 + 0x18);
      if (iVar7 < (int)(uVar11 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar12 + 0x40),iVar7 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar12 = *unaff_x22;
        if (lVar12 == 0) goto LAB_0354fbf4;
      }
      lVar12 = *(long *)(lVar12 + 0x40);
      if (lVar12 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = lVar12 + (long)(int)uVar11 * 0x18;
      *(long **)(lVar12 + 0x20) = unaff_x19;
      *(uint *)(lVar12 + 0x28) = in_stack_00000168._4_4_;
      *(int *)(lVar12 + 0x2c) = iVar6;
      *(uint *)(lVar12 + 0x30) = (iVar6 - in_stack_00000168._4_4_) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar12 = unaff_x19[0x6d];
      if (lVar12 == 0) goto LAB_0354fbf4;
      lVar16 = *(long *)(lVar12 + 0x50);
      *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar20 * 0x5c;
      uStack000000000000011c = 0;
      in_stack_000000d8 = in_stack_000000d8 + 1;
      *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
    }
    else {
      if ((uStack000000000000011c & 1) == 0) {
        in_stack_00000168._4_4_ = in_stack_00000170;
      }
      if (in_stack_00000170 == *in_stack_00000090 - 1U) {
        lVar12 = *unaff_x22;
        if (lVar12 == 0) goto LAB_0354fbf4;
        lVar16 = *(long *)(lVar12 + 0x40);
        if (lVar16 == 0) goto LAB_0354fbf4;
        uVar11 = *(uint *)(lVar12 + 0x24);
        iVar6 = *(int *)(lVar16 + 0x18);
        if (iVar6 < (int)(uVar11 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar12 + 0x40),iVar6 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar12 = *unaff_x22;
          if (lVar12 == 0) goto LAB_0354fbf4;
        }
        lVar12 = *(long *)(lVar12 + 0x40);
        if (lVar12 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar12 + 0x18) <= uVar11)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar12 = lVar12 + (long)(int)uVar11 * 0x18;
        *(long **)(lVar12 + 0x20) = unaff_x19;
        *(uint *)(lVar12 + 0x28) = in_stack_00000168._4_4_;
        *(uint *)(lVar12 + 0x2c) = in_stack_00000170;
        *(uint *)(lVar12 + 0x30) = uVar15 - in_stack_00000168._4_4_;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar12 = unaff_x19[0x6d];
        if (lVar12 == 0) goto LAB_0354fbf4;
        lVar16 = *(long *)(lVar12 + 0x50);
        *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
        if (lVar16 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000180)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar16 = lVar16 + lVar20 * 0x5c;
        in_stack_000000d8 = in_stack_000000d8 + 1;
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
      }
LAB_0354e610:
      uStack000000000000011c = 1;
    }
LAB_0354e618:
    if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
    goto LAB_0354fbf4;
    uVar11 = *(uint *)(lVar12 + 0x18);
    if (uVar11 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    unaff_x25 = in_stack_000000c8;
    unaff_w24 = in_stack_00000170;
    if ((*(byte *)(lVar12 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
      unaff_x20 = in_stack_00000090;
      in_stack_00000170 = uVar15;
      if (in_stack_00000130._4_4_ == 0) {
LAB_0354eb28:
        in_stack_00000130._4_4_ = 0;
        uVar11 = in_stack_00000180;
      }
      else {
LAB_0354e660:
        if (uVar11 <= in_stack_00000170 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar16 = *unaff_x19;
        uVar24 = *(undefined4 *)(lVar12 + unaff_x26 + -0x330);
        uVar27 = *(undefined4 *)(lVar12 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
        pcVar13 = *(code **)(lVar16 + 0x8d8);
        in_stack_00000138 = unaff_x26;
LAB_0354ebc8:
        (*pcVar13)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar24,
                   fStack0000000000000104,0,in_stack_00000080._4_4_,uVar27);
        puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar12 = *(long *)puVar4;
        }
LAB_0354ec1c:
        unaff_s15 = 0.0;
        in_stack_00000130._4_4_ = 0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
        unaff_x26 = in_stack_00000138;
        uVar11 = in_stack_00000180;
      }
      goto LAB_0354ec38;
    }
    lVar12 = lVar12 + unaff_x29 * 0x178;
    unaff_w23 = *(int *)(lVar12 + 0x68);
    unaff_x27 = 0x178;
    *(undefined4 *)(lVar12 + 0x16c) = in_stack_000017d4;
    in_stack_00000138 = unaff_x26;
    if ((((int)unaff_x19[0x65] < (int)in_stack_00000170) ||
        ((int)unaff_x19[0x66] < (int)in_stack_00000180)) ||
       (((int)unaff_x19[0x5c] == 5 && (unaff_w23 + 1 != (int)unaff_x19[0x67])))) {
      in_w8 = 0;
      unaff_x20 = in_stack_00000090;
      in_stack_00000170 = uVar15;
    }
    else {
      in_w8 = 1;
      unaff_x20 = in_stack_00000090;
      in_stack_00000170 = uVar15;
    }
  } while( true );
  while( true ) {
    lVar12 = *unaff_x22;
    lVar16 = lVar16 + 1;
    lVar20 = lVar20 + 0x50;
    if (lVar12 == 0) break;
    uVar8 = lVar16 + 1;
    if ((long)*(int *)(lVar12 + 0x34) <= (long)uVar8) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar12 = *(long *)(lVar12 + 0x60);
    if (lVar12 == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar12 + lVar20 + 0x70,0);
    lVar12 = unaff_x19[0xe1];
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar18 = *(undefined8 *)(lVar12 + lVar16 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_036d35a8(uVar18,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0)) break;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar8) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar12 + lVar20 + 0x70,1,0);
      }
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a460c(lVar12,*(undefined8 *)(lVar14 + lVar20 + 0x80),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a4810(lVar12,*(undefined8 *)(lVar14 + lVar20 + 0x98),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a48bc(lVar12,*(undefined8 *)(lVar14 + lVar20 + 0xa0),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a4e24(lVar12,*(undefined8 *)(lVar14 + lVar20 + 0xa8),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x28);
      if ((lVar12 == 0) || (lVar12 = FUN_0359d5ac(lVar12,0), lVar12 == 0)) break;
      FUN_036aa280(lVar12,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


