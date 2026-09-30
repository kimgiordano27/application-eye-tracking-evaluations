/*
FUNCTION_NAME: FUN_0354d8fc
ENTRY_POINT: 0354d8fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_18
*/


void FUN_0354d8fc(void)

{
  bool bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  uint in_w8;
  long lVar10;
  long lVar11;
  uint uVar12;
  code *pcVar13;
  long lVar14;
  long in_x14;
  long *unaff_x19;
  int unaff_w20;
  long lVar15;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar16;
  uint unaff_w24;
  uint uVar17;
  uint unaff_w25;
  uint uVar18;
  long unaff_x27;
  uint unaff_w28;
  uint uVar19;
  long unaff_x29;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float in_s3;
  float fVar27;
  float in_s4;
  float in_s5;
  undefined4 uVar28;
  float unaff_s8;
  float fVar29;
  float unaff_s9;
  float unaff_s10;
  float fVar30;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar31;
  float unaff_s15;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  float fStack0000000000000058;
  int iStack000000000000005c;
  long lStack0000000000000060;
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
  uint uStack0000000000000120;
  int iStack0000000000000124;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
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
  
  uVar17 = unaff_w24;
  fVar22 = in_s5;
code_r0x0354d8fc:
  fStack0000000000000038 = fVar22;
  lStack0000000000000060 = in_x14;
  if ((uint)in_stack_000000e8 < in_w8) {
    uVar2 = *(undefined2 *)(in_stack_000000c8 + in_stack_000000e8 * unaff_x27 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_026b8cc4(uVar2,0);
    if ((uVar7 & 1) == 0) {
      bVar1 = (int)in_stack_00000180 < (int)unaff_x19[0x95];
    }
    else {
      bVar1 = false;
    }
    uVar12 = in_stack_00000170;
    if ((unaff_s10 <= unaff_s11) && (!bVar1 && unaff_w25 >> 4 == 0)) {
      in_x14 = lStack0000000000000060;
      in_stack_000000f8._4_4_ = unaff_s12;
      fVar22 = fStack0000000000000038;
      if ((char)unaff_x19[0x1e] == '\0') goto LAB_0354d9d8;
      in_stack_000000f8._4_4_ = unaff_s11 + unaff_s12;
      goto LAB_0354d9d8;
    }
    uVar19 = unaff_w28;
    if (((in_stack_00000170 == 1) || (in_stack_00000180 != unaff_w28)) ||
       (uVar17 == *(uint *)((long)unaff_x19 + 0x324))) {
      in_stack_000000f8._4_4_ = unaff_s12;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = unaff_s11 + unaff_s12;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
      in_stack_000000f0 = 0;
      in_x14 = lStack0000000000000060;
      fVar22 = fStack0000000000000038;
      uVar18 = in_stack_00000180;
    }
    else {
      cVar9 = (char)unaff_x19[0x1e];
      fVar22 = -unaff_s10;
      if (cVar9 != '\0') {
        fVar22 = unaff_s10;
      }
      if (*(uint *)(in_stack_000000c8 + 0x18) <= (uint)in_stack_000000e8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      iVar5 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * unaff_x27 + 0x194) +
              (-unaff_w21 - (uStack0000000000000030 & 1)) + unaff_w23 + -1;
      if (iVar5 < 1) {
        fVar23 = 1.0;
        iVar5 = 1;
      }
      else {
        fVar23 = *(float *)((long)unaff_x19 + 0x2dc);
      }
      if (in_stack_00000178 == 9) {
LAB_0354f76c:
        fVar23 = 1.0 - fVar23;
      }
      else {
        if (in_stack_00000178 != 0xa0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_026b97f8(in_stack_00000178,0);
          cVar9 = (char)unaff_x19[0x1e];
          if ((uVar7 & 1) != 0) goto LAB_0354f76c;
        }
        iVar5 = (unaff_w21 - (~uStack0000000000000030 & 1)) + unaff_w20;
      }
      fVar23 = ((unaff_s11 + fVar22) * fVar23) / (float)iVar5;
      in_x14 = lStack0000000000000060;
      fVar22 = fStack0000000000000038;
      if (cVar9 == '\0') {
        in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar23;
        in_stack_000000f0 =
             CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,(float)in_stack_000000f0 + 0.0
                     );
        uVar18 = in_stack_00000180;
      }
      else {
        in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar23;
        uVar18 = in_stack_00000180;
      }
    }
switchD_0354d8a4_caseD_3:
    unaff_w28 = uVar18;
    in_stack_00000170 = uVar12;
    uVar12 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar25 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar23 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
    fVar24 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
    if (*(char *)(lVar15 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar5 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
    if (iVar5 != 0) goto LAB_0354e05c;
    lStack0000000000000060 = in_x14;
    fVar20 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)unaff_w28,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar10 + 0x84) = 0;
      *(undefined4 *)(lVar10 + 0xac) = 0;
      *(undefined4 *)(lVar10 + 0xd4) = 0x3f800000;
      fVar20 = 1.0;
      break;
    case 1:
      fVar22 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar22 = (in_stack_000000f8._4_4_ + fVar22) - *(float *)(in_stack_00000078 + 0x230);
        fVar27 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar27 = unaff_s8 - unaff_s9;
      *(float *)(lVar10 + 0x84) = fVar20 + (fVar22 - unaff_s9) / fVar27;
      *(float *)(lVar10 + 0xac) = fVar20 + (*(float *)(lVar10 + 0x98) - unaff_s9) / fVar27;
      *(float *)(lVar10 + 0xd4) = fVar20 + (*(float *)(lVar10 + 0xc0) - unaff_s9) / fVar27;
      fVar20 = fVar20 + (*(float *)(lVar10 + 0xe8) - unaff_s9) / fVar27;
      break;
    case 2:
      lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar27 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar22 = (in_stack_000000f8._4_4_ + *(float *)(lVar10 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar10 + 0x84) = fVar20 + fVar22 / fVar27;
      *(float *)(lVar10 + 0xac) =
           fVar20 + ((in_stack_000000f8._4_4_ + *(float *)(lVar10 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar10 + 0xd4) =
           fVar20 + ((in_stack_000000f8._4_4_ + *(float *)(lVar10 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar20 = fVar20 + ((in_stack_000000f8._4_4_ + *(float *)(lVar10 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
        *(undefined4 *)(lVar10 + 0x88) = 0;
        *(undefined4 *)(lVar10 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar10 + 0xd8) = 0;
        *(undefined4 *)(lVar10 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar27 = fVar20 + (*(float *)(lVar10 + 0x74) - unaff_s13) / (fVar22 - unaff_s13);
        fVar22 = fVar20 + (*(float *)(lVar10 + 0x9c) - unaff_s13) / (fVar22 - unaff_s13);
        *(float *)(lVar10 + 0x88) = fVar27;
        *(float *)(lVar10 + 0xb0) = fVar22;
        *(float *)(lVar10 + 0xd8) = fVar27;
        *(float *)(lVar10 + 0x100) = fVar22;
        break;
      case 2:
        lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar22 = fVar20 + (*(float *)(lVar10 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar10 + 0x88) = fVar22;
        fVar27 = *(float *)(unaff_x19 + 0x9c);
        fVar31 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar10 + 0xd8) = fVar22;
        fVar22 = fVar20 + (*(float *)(lVar10 + 0x9c) - fVar27) / (fVar31 - fVar27);
        *(float *)(lVar10 + 0xb0) = fVar22;
        *(float *)(lVar10 + 0x100) = fVar22;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar12 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
      }
      if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar22 = *(float *)(lVar10 + 0x15c);
      fVar27 = (1.0 - (*(float *)(lVar10 + 0x88) + *(float *)(lVar10 + 0xb0)) * fVar22) * 0.5;
      fVar31 = fVar20 + *(float *)(lVar10 + 0x88) * fVar22 + fVar27;
      fVar20 = fVar20 + fVar27 + *(float *)(lVar10 + 0xb0) * fVar22;
      *(float *)(lVar10 + 0x84) = fVar31;
      *(float *)(lVar10 + 0xac) = fVar31;
      *(float *)(lVar10 + 0xd4) = fVar20;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar20;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar10 + 0x88) = 0;
      *(undefined4 *)(lVar10 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar10 + 0x100) = 0;
      break;
    case 1:
      if (uVar17 < uVar12) {
        lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
        fVar22 = (*(float *)(lVar10 + 0x74) - in_s3) / (in_s4 - in_s3);
        fVar20 = (*(float *)(lVar10 + 0x9c) - in_s3) / (in_s4 - in_s3);
        *(float *)(lVar10 + 0x88) = fVar22;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar22 = (*(float *)(lVar10 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar10 + 0x88) = fVar22;
      fVar20 = (*(float *)(lVar10 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar10 + 0xb0) = fVar20;
      *(float *)(lVar10 + 0xd8) = fVar20;
      *(float *)(lVar10 + 0x100) = fVar22;
      break;
    case 3:
      if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar27 = *(float *)(lVar10 + 0x15c);
      fVar20 = (1.0 - (*(float *)(lVar10 + 0x84) + *(float *)(lVar10 + 0xd4)) / fVar27) * 0.5;
      fVar22 = *(float *)(lVar10 + 0x84) / fVar27 + fVar20;
      fVar20 = fVar20 + *(float *)(lVar10 + 0xd4) / fVar27;
      *(float *)(lVar10 + 0x88) = fVar22;
      *(float *)(lVar10 + 0xb0) = fVar20;
      *(float *)(lVar10 + 0x100) = fVar22;
      *(float *)(lVar10 + 0xd8) = fVar20;
    }
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
    unaff_s14 = fStack0000000000000058 * *(float *)(lVar10 + 0x160) *
                (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar10 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar20 = *(float *)(lVar10 + 0x88);
    fVar27 = *(float *)(lVar10 + 0x84);
    fVar22 = -2.1474836e+09;
    if (fVar27 != INFINITY) {
      fVar22 = (float)(int)fVar27;
    }
    fVar29 = *(float *)(lVar10 + 0xd4);
    fVar30 = *(float *)(lVar10 + 0xd8);
    fVar31 = -2.1474836e+09;
    if (fVar20 != INFINITY) {
      fVar31 = (float)(int)fVar20;
    }
    uVar21 = FUN_03591d3c(fVar27 - fVar22,fVar20 - fVar31);
    *(undefined4 *)(lVar10 + 0x84) = uVar21;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar30 = fVar30 - fVar31;
    *(float *)(lVar10 + 0x88) = unaff_s14;
    uVar21 = FUN_03591d3c(fVar27 - fVar22,fVar30);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar21;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar29 = fVar29 - fVar22;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
    fVar22 = (float)FUN_03591d3c(fVar29,fVar30);
    *(float *)(lVar10 + 0xd4) = fVar22;
    if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar10 + 0xd8) = unaff_s14;
    uVar21 = FUN_03591d3c(fVar29,fVar20 - fVar31);
    *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar21;
    uVar12 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
    in_x14 = lStack0000000000000060;
    unaff_x22 = in_stack_00000050;
LAB_0354e05c:
    if (((int)uVar17 < (int)unaff_x19[0x65]) &&
       (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)unaff_w28 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
        lVar15 = in_stack_000000c8 + unaff_x29 * 0x178;
        *(ulong *)(lVar15 + 0x70) =
             CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                      fVar25 + (float)*(undefined8 *)(lVar15 + 0x70));
        *(float *)(lVar15 + 0x78) = fVar24 + *(float *)(lVar15 + 0x78);
        *(ulong *)(lVar15 + 0x98) =
             CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                      fVar25 + (float)*(undefined8 *)(lVar15 + 0x98));
        *(float *)(lVar15 + 0xa0) = fVar24 + *(float *)(lVar15 + 0xa0);
        *(ulong *)(lVar15 + 0xc0) =
             CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0xc0) >> 0x20),
                      fVar25 + (float)*(undefined8 *)(lVar15 + 0xc0));
        *(float *)(lVar15 + 200) = fVar24 + *(float *)(lVar15 + 200);
        *(ulong *)(lVar15 + 0xe8) =
             CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20),
                      fVar25 + (float)*(undefined8 *)(lVar15 + 0xe8));
        *(float *)(lVar15 + 0xf0) = fVar24 + *(float *)(lVar15 + 0xf0);
        goto LAB_0354e184;
      }
      if (((int)unaff_w28 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar17 < uVar12) {
          if (*(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x68) == iStack0000000000000034)
          goto LAB_0354f0d4;
          goto LAB_0354e0cc;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
LAB_0354e0cc:
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar12 = *(uint *)(in_stack_000000c8 + 0x18);
    }
    puVar3 = PTR_DAT_03cbded8;
    uVar21 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined8 *)(lVar10 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar10 + 0x78) = uVar21;
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar21 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1);
    lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined8 *)(lVar10 + 0x98) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    *(undefined4 *)(lVar10 + 0xa0) = uVar21;
    uVar21 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1);
    *(undefined8 *)(lVar10 + 0xc0) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    *(undefined4 *)(lVar10 + 200) = uVar21;
    uVar21 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1);
    *(undefined8 *)(lVar10 + 0xe8) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    *(undefined4 *)(lVar10 + 0xf0) = uVar21;
    *(undefined1 *)(lVar15 + 0x194) = 0;
LAB_0354e184:
    if (iVar5 == 0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar13)();
    }
    else if (iVar5 == 1) {
      pcVar13 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    uVar26 = *(undefined8 *)(lVar15 + 0x11c);
    *(undefined8 *)(lVar15 + 0x11c) =
         CONCAT44(fVar23 + (float)((ulong)uVar26 >> 0x20),fVar25 + (float)uVar26);
    *(float *)(lVar15 + 0x124) = fVar24 + *(float *)(lVar15 + 0x124);
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    *(ulong *)(lVar15 + 0x110) =
         CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0x110) >> 0x20),
                  fVar25 + (float)*(undefined8 *)(lVar15 + 0x110));
    *(float *)(lVar15 + 0x118) = fVar24 + *(float *)(lVar15 + 0x118);
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    *(ulong *)(lVar15 + 0x128) =
         CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0x128) >> 0x20),
                  fVar25 + (float)*(undefined8 *)(lVar15 + 0x128));
    *(float *)(lVar15 + 0x130) = fVar24 + *(float *)(lVar15 + 0x130);
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar15 = lVar15 + unaff_x29 * 0x178;
    *(float *)(lVar15 + 0x134) = fVar25 + *(float *)(lVar15 + 0x134);
    *(ulong *)(lVar15 + 0x138) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar15 + 0x138) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(lVar15 + 0x138));
    lVar15 = *unaff_x22;
    if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x38), lVar10 == 0)) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar10 + 0x18);
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar10 + unaff_x29 * 0x178;
    *(float *)(lVar14 + 0x150) = fVar23 + *(float *)(lVar14 + 0x150);
    *(ulong *)(lVar14 + 0x140) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar14 + 0x140) >> 0x20),
                  fVar25 + (float)*(undefined8 *)(lVar14 + 0x140));
    *(ulong *)(lVar14 + 0x148) =
         CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar14 + 0x148) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(lVar14 + 0x148));
    if (unaff_w28 == uVar19) {
      uVar12 = *in_stack_00000090 - 1;
      if (uVar17 == uVar12) goto LAB_0354e3ec;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x50);
      if (lVar15 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar19)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = (long)(int)uVar19;
      lVar11 = lVar15 + lVar14 * 0x5c;
      fVar22 = fVar23 + *(float *)(lVar11 + 0x54);
      *(ulong *)(lVar11 + 0x4c) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar11 + 0x4c) >> 0x20),
                    fVar23 + (float)*(undefined8 *)(lVar11 + 0x4c));
      *(float *)(lVar11 + 0x54) = fVar22;
      *(float *)(lVar11 + 0x58) = fVar25 + *(float *)(lVar11 + 0x58);
      if (uVar12 <= *(uint *)(lVar11 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar21 = *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar11 + 0x34) * 0x178 + 0x11c);
      lVar15 = lVar15 + lVar14 * 0x5c;
      *(float *)(lVar15 + 0x70) = fVar22;
      *(undefined4 *)(lVar15 + 0x6c) = uVar21;
      lVar15 = *unaff_x22;
      if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x50), lVar10 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar10 + 0x18) <= uVar19)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + 0x38);
      if (lVar15 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar10 + lVar14 * 0x5c + 0x40);
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar10 = lVar10 + lVar14 * 0x5c;
      *(undefined4 *)(lVar10 + 0x74) = *(undefined4 *)(lVar15 + (long)(int)uVar12 * 0x178 + 0x128);
      *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(lVar10 + 0x4c);
      uVar12 = *in_stack_00000090 - 1;
LAB_0354e3ec:
      if (uVar17 == uVar12) {
        lVar15 = *unaff_x22;
        if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x50), lVar10 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w28)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar14 = lVar10 + in_x14 * 0x5c;
        fVar22 = fVar23 + *(float *)(lVar14 + 0x54);
        *(ulong *)(lVar14 + 0x4c) =
             CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar14 + 0x4c) >> 0x20),
                      fVar23 + (float)*(undefined8 *)(lVar14 + 0x4c));
        *(float *)(lVar14 + 0x54) = fVar22;
        *(float *)(lVar14 + 0x58) = fVar25 + *(float *)(lVar14 + 0x58);
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar14 + 0x34))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar21 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar14 + 0x34) * 0x178 + 0x11c);
        lVar10 = lVar10 + in_x14 * 0x5c;
        *(float *)(lVar10 + 0x70) = fVar22;
        *(undefined4 *)(lVar10 + 0x6c) = uVar21;
        lVar15 = *unaff_x22;
        if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x50), lVar10 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w28)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        uVar12 = *(uint *)(lVar10 + in_x14 * 0x5c + 0x40);
        if (*(uint *)(lVar15 + 0x18) <= uVar12)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar10 = lVar10 + in_x14 * 0x5c;
        *(undefined4 *)(lVar10 + 0x74) = *(undefined4 *)(lVar15 + (long)(int)uVar12 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(lVar10 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_026b82c4(in_stack_00000178,0);
    if (((((uVar7 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) && (in_stack_00000178 != 0xad)) &&
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
        uVar7 = FUN_026b81f8(in_stack_00000178,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_026b63d8(in_stack_00000178,0);
          if (((in_stack_00000178 != 0x200b) && ((uVar7 & 1) == 0)) && (*in_stack_00000090 != 1))
          goto LAB_0354f144;
        }
      }
      else if (((in_stack_00000170 != 1) &&
               ((int)uVar17 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1))) &&
              (((int)uVar17 < *in_stack_00000090 &&
               ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar2 = *(undefined2 *)(in_stack_000000c8 + in_stack_00000138 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_026b82c4(uVar2,0);
        if ((uVar7 & 1) != 0) {
          if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar2 = *(undefined2 *)(in_stack_000000c8 + in_stack_00000138 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_026b82c4(uVar2,0);
          if ((uVar7 & 1) != 0) goto LAB_0354e610;
        }
      }
      if (uVar17 == *in_stack_00000090 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_026b82c4(in_stack_00000178,0);
        iVar5 = iStack0000000000000124;
        if ((uVar7 & 1) == 0) goto LAB_0354e93c;
      }
      else {
LAB_0354e93c:
        iVar5 = in_stack_00000170 - 2;
      }
      lVar15 = *unaff_x22;
      if (lVar15 == 0) goto LAB_0354fbf4;
      lVar10 = *(long *)(lVar15 + 0x40);
      if (lVar10 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar15 + 0x24);
      iVar6 = *(int *)(lVar10 + 0x18);
      if (iVar6 < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar15 + 0x40),iVar6 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar15 = *unaff_x22;
        if (lVar15 == 0) goto LAB_0354fbf4;
      }
      lVar15 = *(long *)(lVar15 + 0x40);
      if (lVar15 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = lVar15 + (long)(int)uVar12 * 0x18;
      *(long **)(lVar15 + 0x20) = unaff_x19;
      *(uint *)(lVar15 + 0x28) = in_stack_00000168._4_4_;
      *(int *)(lVar15 + 0x2c) = iVar5;
      *(uint *)(lVar15 + 0x30) = (iVar5 - in_stack_00000168._4_4_) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar15 = unaff_x19[0x6d];
      if (lVar15 == 0) goto LAB_0354fbf4;
      lVar10 = *(long *)(lVar15 + 0x50);
      *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
      if (lVar10 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w28)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar10 = lVar10 + in_x14 * 0x5c;
      uStack000000000000011c = 0;
      in_stack_000000d8 = in_stack_000000d8 + 1;
      *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
    }
    else {
      if ((uStack000000000000011c & 1) == 0) {
        in_stack_00000168._4_4_ = uVar17;
      }
      if (uVar17 == *in_stack_00000090 - 1U) {
        lVar15 = *unaff_x22;
        if (lVar15 == 0) goto LAB_0354fbf4;
        lVar10 = *(long *)(lVar15 + 0x40);
        if (lVar10 == 0) goto LAB_0354fbf4;
        uVar12 = *(uint *)(lVar15 + 0x24);
        iVar5 = *(int *)(lVar10 + 0x18);
        if (iVar5 < (int)(uVar12 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar15 + 0x40),iVar5 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar15 = *unaff_x22;
          if (lVar15 == 0) goto LAB_0354fbf4;
        }
        lVar15 = *(long *)(lVar15 + 0x40);
        if (lVar15 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= uVar12)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = lVar15 + (long)(int)uVar12 * 0x18;
        *(long **)(lVar15 + 0x20) = unaff_x19;
        *(uint *)(lVar15 + 0x28) = in_stack_00000168._4_4_;
        *(uint *)(lVar15 + 0x2c) = uVar17;
        *(uint *)(lVar15 + 0x30) = in_stack_00000170 - in_stack_00000168._4_4_;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar15 = unaff_x19[0x6d];
        if (lVar15 == 0) goto LAB_0354fbf4;
        lVar10 = *(long *)(lVar15 + 0x50);
        *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
        if (lVar10 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w28)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar10 = lVar10 + in_x14 * 0x5c;
        in_stack_000000d8 = in_stack_000000d8 + 1;
        *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
      }
LAB_0354e610:
      uStack000000000000011c = 1;
    }
LAB_0354e618:
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar15 + 0x18);
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar19 = (uint)in_stack_000000e8;
    uVar18 = (uint)in_stack_00000128;
    if ((*(byte *)(lVar15 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
      if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
        in_stack_00000130._4_4_ = 0;
      }
      else {
LAB_0354e660:
        if (uVar12 <= in_stack_00000170 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar10 = *unaff_x19;
        uVar21 = *(undefined4 *)(lVar15 + in_stack_00000138 + -0x330);
        uVar28 = *(undefined4 *)(lVar15 + in_stack_00000138 + -0x2f8);
LAB_0354ebc0:
        pcVar13 = *(code **)(lVar10 + 0x8d8);
LAB_0354ebc8:
        (*pcVar13)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar21,
                   fStack0000000000000104,0,in_stack_00000080._4_4_,uVar28);
        puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar3;
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
      iVar5 = *(int *)(lVar15 + 0x68);
      *(undefined4 *)(lVar15 + 0x16c) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)uVar17) || ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar5 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_026b63d8(in_stack_00000178,0);
      if ((in_stack_00000178 != 0x200b) && ((uVar7 & 1) == 0)) {
        lVar15 = *unaff_x22;
        if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x38), lVar10 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar10 + 0x18) <= uVar17)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar22 = *(float *)(lVar10 + unaff_x29 * 0x178 + 0x160);
        if (unaff_s15 <= fVar22) {
          unaff_s15 = fVar22;
        }
        if (fStack0000000000000100 <= ABS(unaff_s14)) {
          fStack0000000000000100 = ABS(unaff_s14);
        }
        if (iVar5 != iStack000000000000005c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar15 = *unaff_x22;
            if (lVar15 == 0) goto LAB_0354fbf4;
            lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar10 + 0x15a8);
        }
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= uVar17)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
        fVar24 = *(float *)(lVar15 + unaff_x29 * 0x178 + 0x14c);
        fVar22 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar24 = fVar24 + unaff_s15 * fVar22;
        iStack000000000000005c = iVar5;
        if (fVar24 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar24;
        }
      }
      if ((in_stack_00000130._4_4_ & 1) == 0) {
        in_stack_00000130._4_4_ = 0;
        if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
            ((int)uVar18 < (int)uVar17)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
        if (uVar17 == uVar18) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar7 & 1) != 0) goto LAB_0354eb28;
        }
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= uVar17)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = lVar15 + unaff_x29 * 0x178;
        in_stack_00000080._4_4_ = *(float *)(lVar15 + 0x160);
        in_stack_00000070 = *(undefined4 *)(lVar15 + 0x11c);
        bVar4 = unaff_s15 != 0.0;
        fVar22 = in_stack_00000080._4_4_;
        if (bVar4) {
          fVar22 = unaff_s15;
        }
        unaff_s15 = fVar22;
        in_stack_00000088 = *(undefined4 *)(lVar15 + 0x168);
        uStack000000000000006c = 0;
        fVar22 = unaff_s14;
        if (bVar4) {
          fVar22 = fStack0000000000000100;
        }
        fStack0000000000000068 = fStack0000000000000104;
        fStack0000000000000100 = fVar22;
      }
      if (*in_stack_00000090 == 1) {
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          if (uVar17 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + unaff_x29 * 0x178;
            lVar10 = *unaff_x19;
            uVar21 = *(undefined4 *)(lVar15 + 0x128);
            uVar28 = *(undefined4 *)(lVar15 + 0x160);
            goto LAB_0354ebc0;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((uVar17 == uVar19) || ((int)uVar18 <= (int)uVar17)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_026b63d8(in_stack_00000178,0);
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          lVar10 = unaff_x29;
          uVar12 = uVar17;
          if (in_stack_00000178 == 0x200b || (uVar7 & 1) != 0) {
            lVar10 = in_stack_00000128;
            uVar12 = uVar18;
          }
          if (uVar12 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + lVar10 * 0x178;
            uVar21 = *(undefined4 *)(lVar15 + 0x128);
            uVar28 = *(undefined4 *)(lVar15 + 0x160);
            pcVar13 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354ebc8;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          uVar12 = *(uint *)(lVar15 + 0x18);
          goto LAB_0354e660;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar17 < *in_stack_00000090 + -1) {
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar7 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar15 + in_stack_00000138),0);
        if ((uVar7 & 1) == 0) {
          if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
            if (uVar17 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + unaff_x29 * 0x178;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                         *(undefined4 *)(lVar15 + 0x128),fStack0000000000000104,0,
                         in_stack_00000080._4_4_,*(undefined4 *)(lVar15 + 0x160));
              puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = *(long *)puVar3;
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
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar15 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (in_stack_00000110 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar15 + unaff_x29 * 0x178 + 400);
    fVar22 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
    if ((uVar12 >> 6 & 1) == 0) {
      if ((uStack0000000000000120 & 1) != 0) {
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000170 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar21 = *(undefined4 *)(lVar15 + in_stack_00000138 + -0x330);
        fVar23 = *(float *)(lVar15 + in_stack_00000138 + -0x30c);
        pcVar13 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
        (*pcVar13)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar21,
                   in_stack_000000a8 * fVar22 + fVar23,0,in_stack_000000a8,in_stack_000000a8);
      }
LAB_0354f250:
      uStack0000000000000120 = 0;
    }
    else {
      lVar15 = *unaff_x22;
      if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x38), lVar10 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar10 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)(lVar10 + unaff_x29 * 0x178 + 0x174) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)uVar17) || ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar10 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
          ((int)uVar18 < (int)uVar17)) || ((uStack0000000000000120 & 1) != 0 || !bVar1)) {
LAB_0354ed84:
        if ((uStack0000000000000120 & 1) == 0) goto LAB_0354f250;
      }
      else {
        if (uVar17 == uVar18) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_026b97f8(in_stack_00000178,0);
          if ((uVar7 & 1) != 0) goto LAB_0354ed84;
          lVar15 = *unaff_x22;
          if (lVar15 == 0) goto LAB_0354fbf4;
        }
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar15 + 0x18) <= uVar17)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = lVar15 + unaff_x29 * 0x178;
        in_stack_00000048._4_4_ = *(float *)(lVar15 + 0x60);
        in_stack_00000040 = *(float *)(lVar15 + 0x14c);
        in_stack_000000a0 = *(undefined4 *)(lVar15 + 0x11c);
        in_stack_000000a8 = *(float *)(lVar15 + 0x160);
        fStack000000000000009c = fVar22 * in_stack_000000a8 + in_stack_00000040;
        uStack0000000000000098 = 0;
      }
      iVar5 = *in_stack_00000090;
      if (iVar5 == 1) {
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          uVar12 = *(uint *)(lVar15 + 0x18);
LAB_0354ef0c:
          if (uVar17 < uVar12) {
            lVar15 = lVar15 + unaff_x29 * 0x178;
            lVar10 = *unaff_x19;
            uVar21 = *(undefined4 *)(lVar15 + 0x128);
            fVar23 = *(float *)(lVar15 + 0x14c);
LAB_0354ef24:
            pcVar13 = *(code **)(lVar10 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (uVar17 == uVar19) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_026b63d8(in_stack_00000178,0);
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          uVar12 = *(uint *)(lVar15 + 0x18);
          if (in_stack_00000178 == 0x200b || (uVar7 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
          in_stack_00000128 = unaff_x29;
          if (uVar17 < uVar12) {
LAB_0354f1f8:
            lVar15 = lVar15 + in_stack_00000128 * 0x178;
            fVar23 = *(float *)(lVar15 + 0x14c);
            uVar21 = *(undefined4 *)(lVar15 + 0x128);
            pcVar13 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar17 < iVar5) {
        lVar15 = *unaff_x22;
        if ((lVar15 != 0) && (lVar10 = *(long *)(lVar15 + 0x38), lVar10 != 0)) {
          if (in_stack_00000170 < *(uint *)(lVar10 + 0x18)) {
            if (*(float *)(lVar10 + in_stack_00000138 + -0x108) == in_stack_00000048._4_4_) {
              fVar24 = *(float *)(lVar10 + in_stack_00000138 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = FUN_03567bac(fVar23 + fVar24,in_stack_00000040,0);
              if ((uVar7 & 1) != 0) {
                iVar5 = *in_stack_00000090;
                goto LAB_0354f010;
              }
              lVar15 = *unaff_x22;
              if (lVar15 == 0) goto LAB_0354fbf4;
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 != 0) {
              uVar12 = *(uint *)(lVar15 + 0x18);
              if ((int)uVar17 <= (int)uVar18) goto LAB_0354f1f0;
LAB_0354f1e0:
              if (uVar18 < uVar12) goto LAB_0354f1f8;
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
            goto LAB_0354fbf4;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f010:
      if ((int)uVar17 < iVar5) {
        iVar5 = FUN_036d3364(in_stack_00000110,0);
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = *(long *)(in_stack_000000c8 + in_stack_00000138 + -0x130);
        if (lVar15 == 0) goto LAB_0354fbf4;
        iVar6 = FUN_036d3364(lVar15,0);
        if (iVar5 != iVar6) {
          if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
            uVar12 = *(uint *)(lVar15 + 0x18);
            goto LAB_0354ef0c;
          }
          goto LAB_0354fbf4;
        }
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
          if (in_stack_00000170 - 2 < *(uint *)(lVar15 + 0x18)) {
            lVar10 = *unaff_x19;
            uVar21 = *(undefined4 *)(lVar15 + in_stack_00000138 + -0x330);
            fVar23 = *(float *)(lVar15 + in_stack_00000138 + -0x30c);
            goto LAB_0354ef24;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      uStack0000000000000120 = 1;
    }
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 == 0))
    goto LAB_0354fbf4;
    uVar12 = (uint)*(undefined8 *)(lVar15 + 0x18);
    if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar15 + unaff_x29 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if ((uStack0000000000000118 & 1) != 0) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
      }
LAB_0354f604:
      uStack0000000000000118 = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar17) || ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar15 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
            ((int)uVar17 <= (int)uVar18)) && (bVar1)) {
          if (uVar17 == uVar18) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = FUN_026b97f8(in_stack_00000178,0);
            if ((uVar7 & 1) != 0) goto LAB_0354f374;
          }
          puVar3 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar10 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar10 = *(long *)puVar3;
          }
          if ((*unaff_x22 != 0) && (lVar15 = *(long *)(*unaff_x22 + 0x38), lVar15 != 0)) {
            uVar12 = (uint)*(undefined8 *)(lVar15 + 0x18);
            if (uVar17 < uVar12) {
              lVar10 = *(long *)(lVar10 + 0xb8);
              lVar14 = lVar15 + unaff_x29 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar14 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar14 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar10 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar10 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar14 + 0x18c);
              fStack00000000000000d0 = *(float *)(lVar10 + 0x15a0);
              fStack00000000000000d4 = *(float *)(lVar10 + 0x15a4);
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
        if (uVar12 <= uVar17) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar15 = lVar15 + unaff_x29 * 0x178;
        fVar23 = *(float *)(lVar15 + 0x128);
        fVar20 = *(float *)(lVar15 + 0x188);
        uVar16 = *(undefined8 *)(lVar15 + 0x17c);
        fVar31 = *(float *)(lVar15 + 0x184);
        uVar26 = *(undefined8 *)(lVar15 + 0x184);
        fVar27 = *(float *)(lVar15 + 0x18c);
        fVar22 = *(float *)(lVar15 + 0x11c);
        fVar24 = *(float *)(lVar15 + 0x148);
        fVar25 = *(float *)(lVar15 + 0x150);
        in_stack_00000188 = uVar16;
        fStack0000000000000190 = fVar31;
        fStack0000000000000194 = fVar20;
        in_stack_00000198 = fVar27;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar7 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar15 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar7 & 1) == 0) {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar15);
          }
          fVar23 = fVar23 + (float)in_stack_000017c8;
          fVar22 = fVar22 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar24 = fVar24 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar22 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar22;
          }
          if (fVar25 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar25 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar23) {
            fStack00000000000000d0 = fVar23;
          }
          if (fStack00000000000000d4 <= fVar24) {
            fStack00000000000000d4 = fVar24;
          }
        }
        else {
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar15);
          }
          fVar22 = (fVar22 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar25 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar25;
          }
          if (fStack00000000000000d4 <= fVar24) {
            fStack00000000000000d4 = fVar24;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar22,
                     fStack00000000000000d4,uStack00000000000000c0);
          fStack00000000000000e4 = fVar25 - fVar27;
          fStack00000000000000d0 = fVar23 + fVar31;
          uStack00000000000000c0 = 0;
          fStack00000000000000d4 = fVar24 + fVar20;
          fStack00000000000000e0 = fVar22;
          in_stack_000017c0 = uVar16;
          in_stack_000017c8 = uVar26;
          in_stack_000017d0 = fVar27;
        }
        if (((*in_stack_00000090 == 1) || (uVar17 == uVar19)) ||
           (((int)uVar18 <= (int)uVar17 || (!bVar1)))) {
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                     fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
          goto LAB_0354f604;
        }
        uStack0000000000000118 = 1;
      }
    }
    puVar3 = OVRPlugin_Media_TypeInfo;
    iVar5 = *in_stack_00000090;
    iStack0000000000000124 = iStack0000000000000124 + 1;
    uVar12 = in_stack_00000170 + 1;
    in_stack_00000138 = in_stack_00000138 + 0x178;
    if (iVar5 <= (int)in_stack_00000170) {
      lVar15 = *unaff_x22;
      if (lVar15 == 0) goto LAB_0354fbf4;
      *(int *)(lVar15 + 0x18) = iVar5;
      lVar10 = unaff_x19[0xd4];
      *(uint *)(lVar15 + 0x2c) = unaff_w28 + 1;
      if (iVar5 < 1 || in_stack_000000d8 == 0) {
        in_stack_000000d8 = 1;
      }
      *(int *)(lVar15 + 0x1c) = (int)lVar10;
      *(int *)(lVar15 + 0x24) = in_stack_000000d8;
      *(int *)(lVar15 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar7 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar7 & 1) == 0)) goto LAB_0354d0cc;
      lVar15 = unaff_x19[0xdb];
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 0x18))
                  (*(undefined8 *)(lVar15 + 0x40),*unaff_x22,*(undefined8 *)(lVar15 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0))
        goto LAB_0354fbf4;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
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
      lVar14 = 0;
      lVar10 = 0;
      goto LAB_0354f97c;
    }
    in_w8 = *(uint *)(in_stack_000000c8 + 0x18);
    if (in_w8 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x50), lVar15 == 0))
    goto LAB_0354fbf4;
    unaff_x29 = (long)(int)in_stack_00000170;
    lVar10 = in_stack_000000c8 + unaff_x29 * 0x178;
    in_stack_00000180 = *(uint *)(lVar10 + 100);
    unaff_x27 = 0x178;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000180)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    in_stack_00000110 = *(long *)(lVar10 + 0x38);
    in_x14 = (long)(int)in_stack_00000180;
    lVar15 = lVar15 + in_x14 * 0x5c;
    unaff_w25 = *(uint *)(lVar15 + 0x68);
    in_stack_00000178 = (uint)*(ushort *)(lVar10 + 0x20);
    in_stack_000000e8 = (long)*(int *)(lVar15 + 0x3c);
    unaff_w21 = *(int *)(lVar15 + 0x20);
    unaff_w20 = *(int *)(lVar15 + 0x28);
    unaff_w23 = *(int *)(lVar15 + 0x2c);
    in_s4 = *(float *)(lVar15 + 0x4c);
    in_stack_00000128 = (long)*(int *)(lVar15 + 0x40);
    in_s3 = *(float *)(lVar15 + 0x54);
    unaff_s10 = *(float *)(lVar15 + 0x58);
    unaff_s11 = *(float *)(lVar15 + 0x5c);
    unaff_s12 = *(float *)(lVar15 + 0x60);
    unaff_s9 = *(float *)(lVar15 + 0x6c);
    unaff_s13 = *(float *)(lVar15 + 0x70);
    unaff_s8 = *(float *)(lVar15 + 0x74);
    fVar22 = *(float *)(lVar15 + 0x78);
    uVar17 = in_stack_00000170;
    uVar19 = unaff_w28;
    if ((int)unaff_w25 < 9) {
      uVar18 = in_stack_00000180;
      switch(unaff_w25) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = unaff_s12 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - unaff_s10;
        }
        break;
      case 2:
        goto LAB_0354d968;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (unaff_s11 + unaff_s12) - unaff_s10;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = unaff_s11 + unaff_s12;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      in_stack_00000170 = uVar12;
      in_stack_000000f0 = 0;
      uVar19 = unaff_w28;
      uVar12 = in_stack_00000170;
      uVar18 = in_stack_00000180;
      goto switchD_0354d8a4_caseD_3;
    }
    if (unaff_w25 != 0x10) {
      uVar18 = in_stack_00000180;
      if (unaff_w25 == 0x20) {
        unaff_s10 = unaff_s9 + unaff_s8;
LAB_0354d968:
        in_stack_000000f8._4_4_ = (unaff_s12 + unaff_s11 * 0.5) - unaff_s10 * 0.5;
        goto LAB_0354d9d8;
      }
      goto switchD_0354d8a4_caseD_3;
    }
switchD_0354d8a4_caseD_8:
    in_stack_00000170 = uVar12;
    if (0xac < in_stack_00000178) {
      uVar18 = in_stack_00000180;
      if ((in_stack_00000178 != 0xad) &&
         ((uVar18 = in_stack_00000180, in_stack_00000178 != 0x200b &&
          (uVar18 = in_stack_00000180, in_stack_00000178 != 0x2060)))) goto code_r0x0354d8fc;
      goto switchD_0354d8a4_caseD_3;
    }
    uVar18 = in_stack_00000180;
    if ((in_stack_00000178 == 3) || (uVar18 = in_stack_00000180, in_stack_00000178 == 10))
    goto switchD_0354d8a4_caseD_3;
    goto code_r0x0354d8fc;
  }
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
  while( true ) {
    lVar15 = *unaff_x22;
    lVar10 = lVar10 + 1;
    lVar14 = lVar14 + 0x50;
    if (lVar15 == 0) break;
LAB_0354f97c:
    uVar7 = lVar10 + 1;
    if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar7) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x60);
    if (lVar15 == 0) break;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar15 + lVar14 + 0x70,0);
    lVar15 = unaff_x19[0xe1];
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar26 = *(undefined8 *)(lVar15 + lVar10 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_036d35a8(uVar26,0,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        FUN_03596b20(lVar15 + lVar14 + 0x70,1,0);
      }
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar10 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x60), lVar11 == 0)) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a460c(lVar15,*(undefined8 *)(lVar11 + lVar14 + 0x80),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar10 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x60), lVar11 == 0)) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a4810(lVar15,*(undefined8 *)(lVar11 + lVar14 + 0x98),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar10 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x60), lVar11 == 0)) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a48bc(lVar15,*(undefined8 *)(lVar11 + lVar14 + 0xa0),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar10 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_0359d5ac(lVar15,0);
      if ((*unaff_x22 == 0) || (lVar11 = *(long *)(*unaff_x22 + 0x60), lVar11 == 0)) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar15 == 0) break;
      FUN_036a4e24(lVar15,*(undefined8 *)(lVar11 + lVar14 + 0xa8),0);
      lVar15 = unaff_x19[0xe1];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar15 = *(long *)(lVar15 + lVar10 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_0359d5ac(lVar15,0), lVar15 == 0)) break;
      FUN_036aa280(lVar15,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


