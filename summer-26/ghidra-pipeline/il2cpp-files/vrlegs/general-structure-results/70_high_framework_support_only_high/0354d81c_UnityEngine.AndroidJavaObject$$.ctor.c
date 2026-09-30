/*
FUNCTION_NAME: UnityEngine.AndroidJavaObject$$.ctor
ENTRY_POINT: 0354d81c
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


void UnityEngine_AndroidJavaObject___ctor(void)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  uint in_w8;
  long lVar11;
  long lVar12;
  uint uVar13;
  long in_x9;
  code *pcVar14;
  long in_x11;
  long lVar15;
  ulong in_x13;
  long in_x14;
  long *unaff_x19;
  long lVar16;
  uint uVar17;
  long *unaff_x22;
  undefined8 uVar18;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
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
  long lStack00000000000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long lStack0000000000000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  uint uStack0000000000000120;
  int iStack0000000000000124;
  long lStack0000000000000128;
  undefined8 in_stack_00000130;
  long lStack0000000000000138;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  uint in_stack_00000178;
  ulong uStack0000000000000180;
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
  
code_r0x0354d81c:
  lStack00000000000000e8 = (long)(int)*(uint *)(in_x9 + 0x3c);
  iVar2 = *(int *)(in_x9 + 0x20);
  iVar6 = *(int *)(in_x9 + 0x28);
  iVar7 = *(int *)(in_x9 + 0x2c);
  fVar23 = *(float *)(in_x9 + 0x4c);
  lStack0000000000000128 = (long)*(int *)(in_x9 + 0x40);
  fVar22 = *(float *)(in_x9 + 0x54);
  fVar28 = *(float *)(in_x9 + 0x58);
  fVar29 = *(float *)(in_x9 + 0x5c);
  fVar30 = *(float *)(in_x9 + 0x60);
  fVar27 = *(float *)(in_x9 + 0x6c);
  fVar31 = *(float *)(in_x9 + 0x70);
  fVar26 = *(float *)(in_x9 + 0x74);
  fVar24 = *(float *)(in_x9 + 0x78);
  lStack0000000000000110 = in_x11;
  lStack0000000000000138 = unaff_x26;
  uStack0000000000000180 = in_x13;
  if ((int)unaff_w25 < 9) {
    switch(unaff_w25) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar30 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar28;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar30 + fVar29 * 0.5) - fVar28 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar29 + fVar30) - fVar28;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar29 + fVar30;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    in_stack_000000f0 = 0;
    unaff_x26 = lStack0000000000000138;
  }
  else if (unaff_w25 == 0x10) {
switchD_0354d8a4_caseD_8:
    if ((int)in_stack_00000178 < 0xad) {
      if ((in_stack_00000178 != 3) && (in_stack_00000178 != 10)) {
FUN_0354d8fc:
        if (in_w8 <= *(uint *)(in_x9 + 0x3c))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(in_stack_000000c8 + lStack00000000000000e8 * unaff_x27 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b8cc4(uVar3,0);
        unaff_x26 = lStack0000000000000138;
        if ((uVar8 & 1) == 0) {
          bVar1 = (int)(uint)uStack0000000000000180 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar28 <= fVar29) && (!bVar1 && unaff_w25 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar30;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar29 + fVar30;
          }
          goto LAB_0354d9d8;
        }
        if (((in_stack_00000170 == 1) || ((uint)uStack0000000000000180 != unaff_w28)) ||
           (unaff_w24 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar30;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar29 + fVar30;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
          in_stack_000000f0 = 0;
        }
        else {
          cVar10 = (char)unaff_x19[0x1e];
          fVar30 = -fVar28;
          if (cVar10 != '\0') {
            fVar30 = fVar28;
          }
          if (*(uint *)(in_stack_000000c8 + 0x18) <= (uint)lStack00000000000000e8)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar7 = (int)*(char *)(in_stack_000000c8 + lStack00000000000000e8 * unaff_x27 + 0x194) +
                  (-iVar2 - (uStack0000000000000030 & 1)) + iVar7 + -1;
          if (iVar7 < 1) {
            fVar28 = 1.0;
            iVar7 = 1;
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
              uVar8 = FUN_026b97f8(in_stack_00000178,0);
              cVar10 = (char)unaff_x19[0x1e];
              if ((uVar8 & 1) != 0) goto LAB_0354f76c;
            }
            iVar7 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar6;
          }
          fVar28 = ((fVar29 + fVar30) * fVar28) / (float)iVar7;
          if (cVar10 == '\0') {
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
  else if (unaff_w25 == 0x20) {
    fVar28 = fVar27 + fVar26;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar13 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
  fVar30 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar28 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
  fVar29 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
  uVar17 = (uint)uStack0000000000000180;
  if (*(char *)(lVar16 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar6 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
  if (iVar6 != 0) goto LAB_0354e05c;
  fVar19 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar17,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined4 *)(lVar11 + 0x84) = 0;
    *(undefined4 *)(lVar11 + 0xac) = 0;
    *(undefined4 *)(lVar11 + 0xd4) = 0x3f800000;
    fVar19 = 1.0;
    break;
  case 1:
    fVar24 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar26 = (in_stack_000000f8._4_4_ + fVar24) - *(float *)(in_stack_00000078 + 0x230);
      fVar24 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar26 = fVar26 - fVar27;
    *(float *)(lVar11 + 0x84) = fVar19 + (fVar24 - fVar27) / fVar26;
    *(float *)(lVar11 + 0xac) = fVar19 + (*(float *)(lVar11 + 0x98) - fVar27) / fVar26;
    *(float *)(lVar11 + 0xd4) = fVar19 + (*(float *)(lVar11 + 0xc0) - fVar27) / fVar26;
    fVar19 = fVar19 + (*(float *)(lVar11 + 0xe8) - fVar27) / fVar26;
    break;
  case 2:
    lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar24 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar26 = (in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar11 + 0x84) = fVar19 + fVar26 / fVar24;
    *(float *)(lVar11 + 0xac) =
         fVar19 + ((in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar11 + 0xd4) =
         fVar19 + ((in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar19 = fVar19 + ((in_stack_000000f8._4_4_ + *(float *)(lVar11 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar11 + 0x88) = 0;
      *(undefined4 *)(lVar11 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0xd8) = 0;
      *(undefined4 *)(lVar11 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar24 = fVar24 - fVar31;
      fVar26 = fVar19 + (*(float *)(lVar11 + 0x74) - fVar31) / fVar24;
      fVar24 = fVar19 + (*(float *)(lVar11 + 0x9c) - fVar31) / fVar24;
      *(float *)(lVar11 + 0x88) = fVar26;
      *(float *)(lVar11 + 0xb0) = fVar24;
      *(float *)(lVar11 + 0xd8) = fVar26;
      *(float *)(lVar11 + 0x100) = fVar24;
      break;
    case 2:
      lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar26 = fVar19 + (*(float *)(lVar11 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar11 + 0x88) = fVar26;
      fVar24 = *(float *)(unaff_x19 + 0x9c);
      fVar27 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar11 + 0xd8) = fVar26;
      fVar26 = fVar19 + (*(float *)(lVar11 + 0x9c) - fVar24) / (fVar27 - fVar24);
      *(float *)(lVar11 + 0xb0) = fVar26;
      *(float *)(lVar11 + 0x100) = fVar26;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar13 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    }
    if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar26 = *(float *)(lVar11 + 0x15c);
    fVar24 = (1.0 - (*(float *)(lVar11 + 0x88) + *(float *)(lVar11 + 0xb0)) * fVar26) * 0.5;
    fVar27 = fVar19 + *(float *)(lVar11 + 0x88) * fVar26 + fVar24;
    fVar19 = fVar19 + fVar24 + *(float *)(lVar11 + 0xb0) * fVar26;
    *(float *)(lVar11 + 0x84) = fVar27;
    *(float *)(lVar11 + 0xac) = fVar27;
    *(float *)(lVar11 + 0xd4) = fVar19;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar19;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined4 *)(lVar11 + 0x88) = 0;
    *(undefined4 *)(lVar11 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar11 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar11 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w24 < uVar13) {
      lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar23 = fVar23 - fVar22;
      fVar26 = (*(float *)(lVar11 + 0x74) - fVar22) / fVar23;
      fVar23 = (*(float *)(lVar11 + 0x9c) - fVar22) / fVar23;
      *(float *)(lVar11 + 0x88) = fVar26;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar26 = (*(float *)(lVar11 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar11 + 0x88) = fVar26;
    fVar23 = (*(float *)(lVar11 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar11 + 0xb0) = fVar23;
    *(float *)(lVar11 + 0xd8) = fVar23;
    *(float *)(lVar11 + 0x100) = fVar26;
    break;
  case 3:
    if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar24 = *(float *)(lVar11 + 0x15c);
    fVar23 = (1.0 - (*(float *)(lVar11 + 0x84) + *(float *)(lVar11 + 0xd4)) / fVar24) * 0.5;
    fVar26 = *(float *)(lVar11 + 0x84) / fVar24 + fVar23;
    fVar23 = fVar23 + *(float *)(lVar11 + 0xd4) / fVar24;
    *(float *)(lVar11 + 0x88) = fVar26;
    *(float *)(lVar11 + 0xb0) = fVar23;
    *(float *)(lVar11 + 0x100) = fVar26;
    *(float *)(lVar11 + 0xd8) = fVar23;
  }
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
  unaff_s14 = fStack0000000000000058 * *(float *)(lVar11 + 0x160) *
              (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar11 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
  fVar23 = *(float *)(lVar11 + 0x88);
  fVar24 = *(float *)(lVar11 + 0x84);
  fVar26 = -2.1474836e+09;
  if (fVar24 != INFINITY) {
    fVar26 = (float)(int)fVar24;
  }
  fVar27 = *(float *)(lVar11 + 0xd4);
  fVar31 = *(float *)(lVar11 + 0xd8);
  fVar22 = -2.1474836e+09;
  if (fVar23 != INFINITY) {
    fVar22 = (float)(int)fVar23;
  }
  uVar20 = FUN_03591d3c(fVar24 - fVar26,fVar23 - fVar22);
  *(undefined4 *)(lVar11 + 0x84) = uVar20;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar31 = fVar31 - fVar22;
  *(float *)(lVar11 + 0x88) = unaff_s14;
  uVar20 = FUN_03591d3c(fVar24 - fVar26,fVar31);
  *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar20;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar27 = fVar27 - fVar26;
  *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
  fVar26 = (float)FUN_03591d3c(fVar27,fVar31);
  *(float *)(lVar11 + 0xd4) = fVar26;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar11 + 0xd8) = unaff_s14;
  uVar20 = FUN_03591d3c(fVar27,fVar23 - fVar22);
  *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar20;
  uVar13 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
  unaff_x22 = in_stack_00000050;
LAB_0354e05c:
  if (((int)unaff_w24 < (int)unaff_x19[0x65]) &&
     (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uStack0000000000000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar16 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(ulong *)(lVar16 + 0x70) =
           CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar16 + 0x70) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar16 + 0x70));
      *(float *)(lVar16 + 0x78) = fVar29 + *(float *)(lVar16 + 0x78);
      *(ulong *)(lVar16 + 0x98) =
           CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar16 + 0x98) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar16 + 0x98));
      *(float *)(lVar16 + 0xa0) = fVar29 + *(float *)(lVar16 + 0xa0);
      *(ulong *)(lVar16 + 0xc0) =
           CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar16 + 0xc0) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar16 + 0xc0));
      *(float *)(lVar16 + 200) = fVar29 + *(float *)(lVar16 + 200);
      *(ulong *)(lVar16 + 0xe8) =
           CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar16 + 0xe8) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar16 + 0xe8));
      *(float *)(lVar16 + 0xf0) = fVar29 + *(float *)(lVar16 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uStack0000000000000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w24 < uVar13) {
        if (*(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x68) == iStack0000000000000034)
        goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar13 = *(uint *)(in_stack_000000c8 + 0x18);
  }
  puVar4 = PTR_DAT_03cbded8;
  uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
  *(undefined8 *)(lVar11 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar11 + 0x78) = uVar20;
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
  lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
  *(undefined8 *)(lVar11 + 0x98) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  *(undefined4 *)(lVar11 + 0xa0) = uVar20;
  uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
  *(undefined8 *)(lVar11 + 0xc0) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  *(undefined4 *)(lVar11 + 200) = uVar20;
  uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
  *(undefined8 *)(lVar11 + 0xe8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  *(undefined4 *)(lVar11 + 0xf0) = uVar20;
  *(undefined1 *)(lVar16 + 0x194) = 0;
LAB_0354e184:
  uVar17 = (uint)uStack0000000000000180;
  if (iVar6 == 0) {
    pcVar14 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar14)();
    unaff_x26 = lStack0000000000000138;
  }
  else {
    unaff_x26 = lStack0000000000000138;
    if (iVar6 == 1) {
      pcVar14 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + unaff_x29 * 0x178;
  uVar21 = *(undefined8 *)(lVar16 + 0x11c);
  *(undefined8 *)(lVar16 + 0x11c) =
       CONCAT44(fVar28 + (float)((ulong)uVar21 >> 0x20),fVar30 + (float)uVar21);
  *(float *)(lVar16 + 0x124) = fVar29 + *(float *)(lVar16 + 0x124);
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + unaff_x29 * 0x178;
  *(ulong *)(lVar16 + 0x110) =
       CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar16 + 0x110) >> 0x20),
                fVar30 + (float)*(undefined8 *)(lVar16 + 0x110));
  *(float *)(lVar16 + 0x118) = fVar29 + *(float *)(lVar16 + 0x118);
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + unaff_x29 * 0x178;
  *(ulong *)(lVar16 + 0x128) =
       CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar16 + 0x128) >> 0x20),
                fVar30 + (float)*(undefined8 *)(lVar16 + 0x128));
  *(float *)(lVar16 + 0x130) = fVar29 + *(float *)(lVar16 + 0x130);
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + unaff_x29 * 0x178;
  *(float *)(lVar16 + 0x134) = fVar30 + *(float *)(lVar16 + 0x134);
  *(ulong *)(lVar16 + 0x138) =
       CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar16 + 0x138) >> 0x20),
                fVar28 + (float)*(undefined8 *)(lVar16 + 0x138));
  lVar16 = *unaff_x22;
  if ((lVar16 == 0) || (lVar11 = *(long *)(lVar16 + 0x38), lVar11 == 0)) goto LAB_0354fbf4;
  uVar13 = *(uint *)(lVar11 + 0x18);
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar15 = lVar11 + unaff_x29 * 0x178;
  *(float *)(lVar15 + 0x150) = fVar28 + *(float *)(lVar15 + 0x150);
  *(ulong *)(lVar15 + 0x140) =
       CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0x140) >> 0x20),
                fVar30 + (float)*(undefined8 *)(lVar15 + 0x140));
  *(ulong *)(lVar15 + 0x148) =
       CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar15 + 0x148) >> 0x20),
                fVar28 + (float)*(undefined8 *)(lVar15 + 0x148));
  if (uVar17 == unaff_w28) {
    uVar13 = *in_stack_00000090 - 1;
    if (unaff_w24 == uVar13) goto LAB_0354e3ec;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x50);
    if (lVar16 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= unaff_w28)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = (long)(int)unaff_w28;
    lVar12 = lVar16 + lVar15 * 0x5c;
    fVar26 = fVar28 + *(float *)(lVar12 + 0x54);
    *(ulong *)(lVar12 + 0x4c) =
         CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar12 + 0x4c) >> 0x20),
                  fVar28 + (float)*(undefined8 *)(lVar12 + 0x4c));
    *(float *)(lVar12 + 0x54) = fVar26;
    *(float *)(lVar12 + 0x58) = fVar30 + *(float *)(lVar12 + 0x58);
    if (uVar13 <= *(uint *)(lVar12 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar20 = *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar12 + 0x34) * 0x178 + 0x11c);
    lVar16 = lVar16 + lVar15 * 0x5c;
    *(float *)(lVar16 + 0x70) = fVar26;
    *(undefined4 *)(lVar16 + 0x6c) = uVar20;
    lVar16 = *unaff_x22;
    if ((lVar16 == 0) || (lVar11 = *(long *)(lVar16 + 0x50), lVar11 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w28)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = *(long *)(lVar16 + 0x38);
    if (lVar16 == 0) goto LAB_0354fbf4;
    uVar13 = *(uint *)(lVar11 + lVar15 * 0x5c + 0x40);
    if (*(uint *)(lVar16 + 0x18) <= uVar13)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar11 = lVar11 + lVar15 * 0x5c;
    *(undefined4 *)(lVar11 + 0x74) = *(undefined4 *)(lVar16 + (long)(int)uVar13 * 0x178 + 0x128);
    *(undefined4 *)(lVar11 + 0x78) = *(undefined4 *)(lVar11 + 0x4c);
    uVar13 = *in_stack_00000090 - 1;
LAB_0354e3ec:
    if (unaff_w24 == uVar13) {
      lVar16 = *unaff_x22;
      if ((lVar16 == 0) || (lVar11 = *(long *)(lVar16 + 0x50), lVar11 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar11 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = lVar11 + in_x14 * 0x5c;
      fVar26 = fVar28 + *(float *)(lVar15 + 0x54);
      *(ulong *)(lVar15 + 0x4c) =
           CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar15 + 0x4c) >> 0x20),
                    fVar28 + (float)*(undefined8 *)(lVar15 + 0x4c));
      *(float *)(lVar15 + 0x54) = fVar26;
      *(float *)(lVar15 + 0x58) = fVar30 + *(float *)(lVar15 + 0x58);
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar15 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar20 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar15 + 0x34) * 0x178 + 0x11c);
      lVar11 = lVar11 + in_x14 * 0x5c;
      *(float *)(lVar11 + 0x70) = fVar26;
      *(undefined4 *)(lVar11 + 0x6c) = uVar20;
      lVar16 = *unaff_x22;
      if ((lVar16 == 0) || (lVar11 = *(long *)(lVar16 + 0x50), lVar11 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar11 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      uVar13 = *(uint *)(lVar11 + in_x14 * 0x5c + 0x40);
      if (*(uint *)(lVar16 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar11 = lVar11 + in_x14 * 0x5c;
      *(undefined4 *)(lVar11 + 0x74) = *(undefined4 *)(lVar16 + (long)(int)uVar13 * 0x178 + 0x128);
      *(undefined4 *)(lVar11 + 0x78) = *(undefined4 *)(lVar11 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_026b82c4(in_stack_00000178,0);
  if (((((uVar8 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) && (in_stack_00000178 != 0xad)) &&
     (in_stack_00000178 != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (in_stack_00000170 != 1) {
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
    else if (((in_stack_00000170 != 1) &&
             ((int)unaff_w24 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1))) &&
            (((int)unaff_w24 < *in_stack_00000090 &&
             ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
      if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_026b82c4(uVar3,0);
      if ((uVar8 & 1) != 0) {
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(in_stack_000000c8 + lStack0000000000000138 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b82c4(uVar3,0);
        unaff_x26 = lStack0000000000000138;
        if ((uVar8 & 1) != 0) goto LAB_0354e610;
      }
    }
    if (unaff_w24 == *in_stack_00000090 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_026b82c4(in_stack_00000178,0);
      iVar6 = iStack0000000000000124;
      if ((uVar8 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar6 = in_stack_00000170 - 2;
    }
    lVar16 = *unaff_x22;
    if (lVar16 == 0) goto LAB_0354fbf4;
    lVar11 = *(long *)(lVar16 + 0x40);
    if (lVar11 == 0) goto LAB_0354fbf4;
    uVar13 = *(uint *)(lVar16 + 0x24);
    iVar7 = *(int *)(lVar11 + 0x18);
    if (iVar7 < (int)(uVar13 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar16 + 0x40),iVar7 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar16 = *unaff_x22;
      if (lVar16 == 0) goto LAB_0354fbf4;
    }
    unaff_x26 = lStack0000000000000138;
    lVar16 = *(long *)(lVar16 + 0x40);
    if (lVar16 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar13)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar16 + (long)(int)uVar13 * 0x18;
    *(long **)(lVar16 + 0x20) = unaff_x19;
    *(uint *)(lVar16 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar16 + 0x2c) = iVar6;
    *(uint *)(lVar16 + 0x30) = (iVar6 - in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar16 = unaff_x19[0x6d];
    if (lVar16 == 0) goto LAB_0354fbf4;
    lVar11 = *(long *)(lVar16 + 0x50);
    uVar17 = (uint)uStack0000000000000180;
    *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
    if (lVar11 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar11 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar11 = lVar11 + in_x14 * 0x5c;
    uStack000000000000011c = 0;
    in_stack_000000d8 = in_stack_000000d8 + 1;
    *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      in_stack_00000168._4_4_ = unaff_w24;
    }
    if (unaff_w24 == *in_stack_00000090 - 1U) {
      lVar16 = *unaff_x22;
      if (lVar16 == 0) goto LAB_0354fbf4;
      lVar11 = *(long *)(lVar16 + 0x40);
      if (lVar11 == 0) goto LAB_0354fbf4;
      uVar13 = *(uint *)(lVar16 + 0x24);
      iVar6 = *(int *)(lVar11 + 0x18);
      if (iVar6 < (int)(uVar13 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar16 + 0x40),iVar6 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar16 = *unaff_x22;
        if (lVar16 == 0) goto LAB_0354fbf4;
      }
      unaff_x26 = lStack0000000000000138;
      lVar16 = *(long *)(lVar16 + 0x40);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + (long)(int)uVar13 * 0x18;
      *(long **)(lVar16 + 0x20) = unaff_x19;
      *(uint *)(lVar16 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar16 + 0x2c) = unaff_w24;
      *(uint *)(lVar16 + 0x30) = in_stack_00000170 - in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar16 = unaff_x19[0x6d];
      if (lVar16 == 0) goto LAB_0354fbf4;
      lVar11 = *(long *)(lVar16 + 0x50);
      uVar17 = (uint)uStack0000000000000180;
      *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
      if (lVar11 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar11 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar11 = lVar11 + in_x14 * 0x5c;
      in_stack_000000d8 = in_stack_000000d8 + 1;
      *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
    }
LAB_0354e610:
    uStack000000000000011c = 1;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  uVar13 = *(uint *)(lVar16 + 0x18);
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar16 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
    lVar11 = lStack0000000000000128;
    if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
      in_stack_00000130._4_4_ = 0;
    }
    else {
LAB_0354e660:
      if (uVar13 <= in_stack_00000170 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *unaff_x19;
      uVar20 = *(undefined4 *)(lVar16 + unaff_x26 + -0x330);
      uVar25 = *(undefined4 *)(lVar16 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
      pcVar14 = *(code **)(lVar15 + 0x8d8);
LAB_0354ebc8:
      (*pcVar14)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar20,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar25);
      puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *(long *)puVar4;
      }
LAB_0354ec1c:
      unaff_s15 = 0.0;
      in_stack_00000130._4_4_ = 0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar16 = lVar16 + unaff_x29 * 0x178;
    iVar6 = *(int *)(lVar16 + 0x68);
    *(undefined4 *)(lVar16 + 0x16c) = in_stack_000017d4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar6 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_026b63d8(in_stack_00000178,0);
    if ((in_stack_00000178 != 0x200b) && ((uVar8 & 1) == 0)) {
      lVar16 = *unaff_x22;
      if ((lVar16 == 0) || (lVar11 = *(long *)(lVar16 + 0x38), lVar11 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar26 = *(float *)(lVar11 + unaff_x29 * 0x178 + 0x160);
      if (unaff_s15 <= fVar26) {
        unaff_s15 = fVar26;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar6 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *unaff_x22;
          if (lVar16 == 0) goto LAB_0354fbf4;
          lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar11 + 0x15a8);
      }
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar23 = *(float *)(lVar16 + unaff_x29 * 0x178 + 0x14c);
      fVar26 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar23 = fVar23 + unaff_s15 * fVar26;
      iStack000000000000005c = iVar6;
      if (fVar23 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar23;
      }
    }
    lVar11 = lStack0000000000000128;
    uVar13 = (uint)lStack0000000000000128;
    if ((in_stack_00000130._4_4_ & 1) == 0) {
      in_stack_00000130._4_4_ = 0;
      if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
          ((int)uVar13 < (int)unaff_w24)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (unaff_w24 == uVar13) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b97f8(in_stack_00000178,0);
        if ((uVar8 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + unaff_x29 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar16 + 0x160);
      in_stack_00000070 = *(undefined4 *)(lVar16 + 0x11c);
      bVar5 = unaff_s15 != 0.0;
      fVar26 = in_stack_00000080._4_4_;
      if (bVar5) {
        fVar26 = unaff_s15;
      }
      unaff_s15 = fVar26;
      in_stack_00000088 = *(undefined4 *)(lVar16 + 0x168);
      uStack000000000000006c = 0;
      fVar26 = unaff_s14;
      if (bVar5) {
        fVar26 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar26;
    }
    if (*in_stack_00000090 == 1) {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (unaff_w24 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + unaff_x29 * 0x178;
        lVar15 = *unaff_x19;
        uVar20 = *(undefined4 *)(lVar16 + 0x128);
        uVar25 = *(undefined4 *)(lVar16 + 0x160);
        goto LAB_0354ebc0;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    if ((unaff_w24 == (uint)lStack00000000000000e8) || ((int)uVar13 <= (int)unaff_w24)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_026b63d8(in_stack_00000178,0);
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      lVar15 = unaff_x29;
      uVar17 = unaff_w24;
      if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) {
        lVar15 = lVar11;
        uVar17 = uVar13;
      }
      if (uVar17 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + lVar15 * 0x178;
        uVar20 = *(undefined4 *)(lVar16 + 0x128);
        uVar25 = *(undefined4 *)(lVar16 + 0x160);
        pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_0354ebc8;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
        uVar13 = *(uint *)(lVar16 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)unaff_w24 < *in_stack_00000090 + -1) {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar8 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar16 + unaff_x26),0);
      unaff_x26 = lStack0000000000000138;
      lVar11 = lStack0000000000000128;
      if ((uVar8 & 1) == 0) {
        if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
        goto LAB_0354fbf4;
        if (unaff_w24 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + unaff_x29 * 0x178;
          (**(code **)(*unaff_x19 + 0x8d8))
                    (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                     *(undefined4 *)(lVar16 + 0x128),fStack0000000000000104,0,
                     in_stack_00000080._4_4_,*(undefined4 *)(lVar16 + 0x160));
          puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          unaff_x26 = lStack0000000000000138;
          lVar11 = lStack0000000000000128;
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar16 = *(long *)puVar4;
            unaff_x26 = lStack0000000000000138;
            lVar11 = lStack0000000000000128;
          }
          goto LAB_0354ec1c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
    in_stack_00000130._4_4_ = 1;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lStack0000000000000110 == 0) goto LAB_0354fbf4;
  uVar13 = *(uint *)(lVar16 + unaff_x29 * 0x178 + 400);
  fVar26 = (float)FUN_03776a30(lStack0000000000000110 + 0x50,0);
  uVar17 = (uint)lVar11;
  unaff_w28 = (uint)uStack0000000000000180;
  if ((uVar13 >> 6 & 1) == 0) {
    if ((uStack0000000000000120 & 1) == 0) {
LAB_0354ed8c:
      unaff_w28 = (uint)uStack0000000000000180;
    }
    else {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000170 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar20 = *(undefined4 *)(lVar16 + unaff_x26 + -0x330);
      fVar28 = *(float *)(lVar16 + unaff_x26 + -0x30c);
      pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar14)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar20,
                 in_stack_000000a8 * fVar26 + fVar28,0,in_stack_000000a8,in_stack_000000a8);
    }
    uStack0000000000000120 = 0;
  }
  else {
    lVar16 = *unaff_x22;
    if ((lVar16 == 0) || (lVar15 = *(long *)(lVar16 + 0x38), lVar15 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(lVar15 + unaff_x29 * 0x178 + 0x174) = in_stack_000017d4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar15 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
        ((int)uVar17 < (int)unaff_w24)) || ((uStack0000000000000120 & 1) != 0 || !bVar1)) {
LAB_0354ed84:
      if ((uStack0000000000000120 & 1) == 0) goto LAB_0354ed8c;
    }
    else {
      if (unaff_w24 == uVar17) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b97f8(in_stack_00000178,0);
        if ((uVar8 & 1) != 0) goto LAB_0354ed84;
        lVar16 = *unaff_x22;
        if (lVar16 == 0) goto LAB_0354fbf4;
      }
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + unaff_x29 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar16 + 0x60);
      in_stack_00000040 = *(float *)(lVar16 + 0x14c);
      in_stack_000000a0 = *(undefined4 *)(lVar16 + 0x11c);
      in_stack_000000a8 = *(float *)(lVar16 + 0x160);
      fStack000000000000009c = fVar26 * in_stack_000000a8 + in_stack_00000040;
      uStack0000000000000098 = 0;
    }
    iVar6 = *in_stack_00000090;
    if (iVar6 == 1) {
      if (*unaff_x22 == 0) goto LAB_0354fbf4;
      lVar16 = *(long *)(*unaff_x22 + 0x38);
      unaff_w28 = (uint)uStack0000000000000180;
      if (lVar16 == 0) goto LAB_0354fbf4;
      uVar13 = *(uint *)(lVar16 + 0x18);
LAB_0354ef0c:
      if (unaff_w24 < uVar13) {
        lVar16 = lVar16 + unaff_x29 * 0x178;
        lVar11 = *unaff_x19;
        uVar20 = *(undefined4 *)(lVar16 + 0x128);
        fVar28 = *(float *)(lVar16 + 0x14c);
LAB_0354ef24:
        pcVar14 = *(code **)(lVar11 + 0x8d8);
        goto LAB_0354f21c;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    if (unaff_w24 == (uint)lStack00000000000000e8) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_026b63d8(in_stack_00000178,0);
      unaff_w28 = (uint)uStack0000000000000180;
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      uVar13 = *(uint *)(lVar16 + 0x18);
      if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
      lVar11 = unaff_x29;
      if (unaff_w24 < uVar13) {
LAB_0354f1f8:
        lVar16 = lVar16 + lVar11 * 0x178;
        fVar28 = *(float *)(lVar16 + 0x14c);
        uVar20 = *(undefined4 *)(lVar16 + 0x128);
        pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_0354f21c;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    if ((int)unaff_w24 < iVar6) {
      lVar16 = *unaff_x22;
      if ((lVar16 == 0) || (lVar15 = *(long *)(lVar16 + 0x38), lVar15 == 0)) goto LAB_0354fbf4;
      if (in_stack_00000170 < *(uint *)(lVar15 + 0x18)) {
        if (*(float *)(lVar15 + unaff_x26 + -0x108) == in_stack_00000048._4_4_) {
          fVar23 = *(float *)(lVar15 + unaff_x26 + -0x1c);
          if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_03567bac(fVar28 + fVar23,in_stack_00000040,0);
          if ((uVar8 & 1) != 0) {
            iVar6 = *in_stack_00000090;
            goto LAB_0354f010;
          }
          lVar16 = *unaff_x22;
          if (lVar16 == 0) goto LAB_0354fbf4;
        }
        lVar16 = *(long *)(lVar16 + 0x38);
        if (lVar16 == 0) goto LAB_0354fbf4;
        uVar13 = *(uint *)(lVar16 + 0x18);
        unaff_w28 = (uint)uStack0000000000000180;
        if ((int)unaff_w24 <= (int)uVar17) goto LAB_0354f1f0;
LAB_0354f1e0:
        if (uVar17 < uVar13) goto LAB_0354f1f8;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
LAB_0354f010:
    if ((int)unaff_w24 < iVar6) {
      iVar6 = FUN_036d3364(lStack0000000000000110,0);
      if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(in_stack_000000c8 + unaff_x26 + -0x130);
      if (lVar16 == 0) goto LAB_0354fbf4;
      iVar7 = FUN_036d3364(lVar16,0);
      if (iVar6 != iVar7) {
        if (*unaff_x22 != 0) {
          lVar16 = *(long *)(*unaff_x22 + 0x38);
          unaff_w28 = (uint)uStack0000000000000180;
          if (lVar16 != 0) {
            uVar13 = *(uint *)(lVar16 + 0x18);
            goto LAB_0354ef0c;
          }
        }
        goto LAB_0354fbf4;
      }
    }
    unaff_w28 = (uint)uStack0000000000000180;
    if (!bVar1) {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (in_stack_00000170 - 2 < *(uint *)(lVar16 + 0x18)) {
        lVar11 = *unaff_x19;
        uVar20 = *(undefined4 *)(lVar16 + unaff_x26 + -0x330);
        fVar28 = *(float *)(lVar16 + unaff_x26 + -0x30c);
        goto LAB_0354ef24;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
    uStack0000000000000120 = 1;
  }
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  uVar13 = (uint)*(undefined8 *)(lVar16 + 0x18);
  if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar16 + unaff_x29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((uStack0000000000000118 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    uStack0000000000000118 = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar16 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
          ((int)unaff_w24 <= (int)uVar17)) && (bVar1)) {
        if (unaff_w24 == uVar17) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar8 & 1) != 0) goto LAB_0354f374;
        }
        puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)puVar4;
        }
        if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
        goto LAB_0354fbf4;
        uVar13 = (uint)*(undefined8 *)(lVar16 + 0x18);
        if (unaff_w24 < uVar13) {
          lVar11 = *(long *)(lVar11 + 0xb8);
          lVar15 = lVar16 + unaff_x29 * 0x178;
          in_stack_000017c8 = *(undefined8 *)(lVar15 + 0x184);
          in_stack_000017c0 = *(undefined8 *)(lVar15 + 0x17c);
          fStack00000000000000e0 = *(float *)(lVar11 + 0x1598);
          fStack00000000000000e4 = *(float *)(lVar11 + 0x159c);
          in_stack_000017d0 = *(float *)(lVar15 + 0x18c);
          fStack00000000000000d0 = *(float *)(lVar11 + 0x15a0);
          fStack00000000000000d4 = *(float *)(lVar11 + 0x15a4);
          uStack00000000000000c0 = 0;
          goto LAB_0354f400;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
LAB_0354f374:
      uStack0000000000000118 = 0;
      unaff_w28 = (uint)uStack0000000000000180;
    }
    else {
LAB_0354f400:
      if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + unaff_x29 * 0x178;
      fVar26 = *(float *)(lVar16 + 0x128);
      fVar22 = *(float *)(lVar16 + 0x188);
      uVar18 = *(undefined8 *)(lVar16 + 0x17c);
      fVar29 = *(float *)(lVar16 + 0x184);
      uVar21 = *(undefined8 *)(lVar16 + 0x184);
      fVar27 = *(float *)(lVar16 + 0x18c);
      fVar28 = *(float *)(lVar16 + 0x11c);
      fVar23 = *(float *)(lVar16 + 0x148);
      fVar24 = *(float *)(lVar16 + 0x150);
      in_stack_00000188 = uVar18;
      fStack0000000000000190 = fVar29;
      fStack0000000000000194 = fVar22;
      in_stack_00000198 = fVar27;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar8 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar16 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar8 & 1) == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
        }
        fVar26 = fVar26 + (float)in_stack_000017c8;
        fVar28 = fVar28 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar23 = fVar23 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar28 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar28;
        }
        if (fVar24 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar24 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar26) {
          fStack00000000000000d0 = fVar26;
        }
        if (fStack00000000000000d4 <= fVar23) {
          fStack00000000000000d4 = fVar23;
        }
      }
      else {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
        }
        fVar28 = (fVar28 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar24 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar24;
        }
        if (fStack00000000000000d4 <= fVar23) {
          fStack00000000000000d4 = fVar23;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar28,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar24 - fVar27;
        fStack00000000000000d0 = fVar26 + fVar29;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar23 + fVar22;
        fStack00000000000000e0 = fVar28;
        in_stack_000017c0 = uVar18;
        in_stack_000017c8 = uVar21;
        in_stack_000017d0 = fVar27;
      }
      if (((*in_stack_00000090 == 1) || (unaff_w24 == (uint)lStack00000000000000e8)) ||
         (((int)lStack0000000000000128 <= (int)unaff_w24 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        unaff_w28 = (uint)uStack0000000000000180;
        goto LAB_0354f604;
      }
      unaff_w28 = (uint)uStack0000000000000180;
      uStack0000000000000118 = 1;
    }
  }
  puVar4 = OVRPlugin_Media_TypeInfo;
  iVar6 = *in_stack_00000090;
  iStack0000000000000124 = iStack0000000000000124 + 1;
  unaff_x26 = unaff_x26 + 0x178;
  if (iVar6 <= (int)in_stack_00000170) {
    lVar16 = *unaff_x22;
    if (lVar16 == 0) goto LAB_0354fbf4;
    *(int *)(lVar16 + 0x18) = iVar6;
    lVar11 = unaff_x19[0xd4];
    *(uint *)(lVar16 + 0x2c) = unaff_w28 + 1;
    if (iVar6 < 1 || in_stack_000000d8 == 0) {
      in_stack_000000d8 = 1;
    }
    *(int *)(lVar16 + 0x1c) = (int)lVar11;
    *(int *)(lVar16 + 0x24) = in_stack_000000d8;
    *(int *)(lVar16 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar8 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar8 & 1) == 0)) goto LAB_0354d0cc;
    lVar16 = unaff_x19[0xdb];
    if (lVar16 != 0) {
      (**(code **)(lVar16 + 0x18))
                (*(undefined8 *)(lVar16 + 0x40),*unaff_x22,*(undefined8 *)(lVar16 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar16 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar16 + 0x20,1,0);
    }
    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(lVar16 + 0x18) != 0) {
      if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(lVar16 + 0x18) != 0) {
        if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
        FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x48),0);
        if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
        goto LAB_0354fbf4;
        if (*(int *)(lVar16 + 0x18) != 0) {
          if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
          FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x50),0);
          if ((unaff_x19[0x6d] == 0) || (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 == 0))
          goto LAB_0354fbf4;
          if (*(int *)(lVar16 + 0x18) != 0) {
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x58),0);
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036aa280(unaff_x19[0x74],0);
            lVar16 = *unaff_x22;
            if (lVar16 == 0) goto LAB_0354fbf4;
            lVar15 = 0;
            lVar11 = 0;
            goto LAB_0354f97c;
          }
        }
      }
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  }
  in_w8 = *(uint *)(in_stack_000000c8 + 0x18);
  if (in_w8 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
  unaff_x29 = (long)(int)in_stack_00000170;
  lVar11 = in_stack_000000c8 + unaff_x29 * 0x178;
  uVar13 = *(uint *)(lVar11 + 100);
  in_x13 = (ulong)uVar13;
  unaff_x27 = 0x178;
  if (*(uint *)(lVar16 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  in_x11 = *(long *)(lVar11 + 0x38);
  in_x14 = (long)(int)uVar13;
  in_x9 = lVar16 + in_x14 * 0x5c;
  unaff_w25 = *(uint *)(in_x9 + 0x68);
  in_stack_00000178 = (uint)*(ushort *)(lVar11 + 0x20);
  unaff_w24 = in_stack_00000170;
  in_stack_00000170 = in_stack_00000170 + 1;
  goto code_r0x0354d81c;
  while( true ) {
    lVar16 = *unaff_x22;
    lVar11 = lVar11 + 1;
    lVar15 = lVar15 + 0x50;
    if (lVar16 == 0) break;
LAB_0354f97c:
    uVar8 = lVar11 + 1;
    if ((long)*(int *)(lVar16 + 0x34) <= (long)uVar8) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar16 = *(long *)(lVar16 + 0x60);
    if (lVar16 == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar16 + lVar15 + 0x70,0);
    lVar16 = unaff_x19[0xe1];
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar21 = *(undefined8 *)(lVar16 + lVar11 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_036d35a8(uVar21,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar8) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar16 + lVar15 + 0x70,1,0);
      }
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(lVar16 + lVar11 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_0359d5ac(lVar16,0);
      if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0)) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar16 == 0) break;
      FUN_036a460c(lVar16,*(undefined8 *)(lVar12 + lVar15 + 0x80),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(lVar16 + lVar11 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_0359d5ac(lVar16,0);
      if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0)) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar16 == 0) break;
      FUN_036a4810(lVar16,*(undefined8 *)(lVar12 + lVar15 + 0x98),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(lVar16 + lVar11 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_0359d5ac(lVar16,0);
      if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0)) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar16 == 0) break;
      FUN_036a48bc(lVar16,*(undefined8 *)(lVar12 + lVar15 + 0xa0),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(lVar16 + lVar11 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_0359d5ac(lVar16,0);
      if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0)) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar16 == 0) break;
      FUN_036a4e24(lVar16,*(undefined8 *)(lVar12 + lVar15 + 0xa8),0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(lVar16 + lVar11 * 8 + 0x28);
      if ((lVar16 == 0) || (lVar16 = FUN_0359d5ac(lVar16,0), lVar16 == 0)) break;
      FUN_036aa280(lVar16,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


