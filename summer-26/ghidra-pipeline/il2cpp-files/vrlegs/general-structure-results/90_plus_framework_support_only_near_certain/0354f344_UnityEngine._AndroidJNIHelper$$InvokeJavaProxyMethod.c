/*
FUNCTION_NAME: UnityEngine._AndroidJNIHelper$$InvokeJavaProxyMethod
ENTRY_POINT: 0354f344
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_18
*/


void UnityEngine__AndroidJNIHelper__InvokeJavaProxyMethod(undefined **param_1)

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
  long lVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar20;
  uint uVar21;
  uint unaff_w21;
  long lVar22;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar23;
  long lVar24;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w28;
  long unaff_x29;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
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
  uint uStack00000000000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  undefined8 in_stack_00000118;
  uint in_stack_00000120;
  uint uStack0000000000000128;
  undefined8 in_stack_00000130;
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
  
code_r0x0354f344:
  if (*(int *)(*(long *)param_1[0x56] + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_026b97f8(in_stack_00000178,0);
  uVar4 = uStack00000000000000e8;
  uVar5 = uStack0000000000000128;
  if ((uVar11 & 1) == 0) goto LAB_0354f380;
LAB_0354f374:
  bVar6 = false;
  unaff_w24 = in_stack_00000170;
  uVar15 = in_stack_00000180;
LAB_0354f608:
  puVar7 = OVRPlugin_Media_TypeInfo;
  iVar9 = *unaff_x20;
  unaff_w28 = unaff_w28 + 1;
  in_stack_00000170 = unaff_w24 + 1;
  unaff_x26 = unaff_x26 + 0x178;
  if (iVar9 <= (int)unaff_w24) {
    lVar17 = *unaff_x22;
    if (lVar17 == 0) goto LAB_0354fbf4;
    *(int *)(lVar17 + 0x18) = iVar9;
    lVar24 = unaff_x19[0xd4];
    *(uint *)(lVar17 + 0x2c) = uVar15 + 1;
    if (iVar9 < 1 || in_stack_000000d8 == 0) {
      in_stack_000000d8 = 1;
    }
    *(int *)(lVar17 + 0x1c) = (int)lVar24;
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
    lVar22 = 0;
    lVar24 = 0;
    goto LAB_0354f97c;
  }
  if (*(uint *)(unaff_x25 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x50), lVar17 == 0)) goto LAB_0354fbf4;
  unaff_x29 = (long)(int)unaff_w24;
  lVar24 = unaff_x25 + unaff_x29 * unaff_x23;
  in_stack_00000180 = *(uint *)(lVar24 + 100);
  if (*(uint *)(lVar17 + 0x18) <= in_stack_00000180)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = *(long *)(lVar24 + 0x38);
  lVar14 = (long)(int)in_stack_00000180;
  lVar17 = lVar17 + lVar14 * 0x5c;
  uVar21 = *(uint *)(lVar17 + 0x68);
  in_stack_00000178 = (uint)*(ushort *)(lVar24 + 0x20);
  uVar4 = *(uint *)(lVar17 + 0x3c);
  _uStack00000000000000e8 = (long)(int)uVar4;
  iVar2 = *(int *)(lVar17 + 0x20);
  iVar9 = *(int *)(lVar17 + 0x28);
  iVar10 = *(int *)(lVar17 + 0x2c);
  fVar28 = *(float *)(lVar17 + 0x4c);
  uVar5 = *(uint *)(lVar17 + 0x40);
  _uStack0000000000000128 = (long)(int)uVar5;
  fVar27 = *(float *)(lVar17 + 0x54);
  fVar33 = *(float *)(lVar17 + 0x58);
  fVar34 = *(float *)(lVar17 + 0x5c);
  fVar35 = *(float *)(lVar17 + 0x60);
  fVar32 = *(float *)(lVar17 + 0x6c);
  fVar36 = *(float *)(lVar17 + 0x70);
  fVar31 = *(float *)(lVar17 + 0x74);
  fVar29 = *(float *)(lVar17 + 0x78);
  if ((int)uVar21 < 9) {
    switch(uVar21) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar35 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar33;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar35 + fVar34 * 0.5) - fVar33 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar34 + fVar35) - fVar33;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar34 + fVar35;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    in_stack_000000f0 = 0;
  }
  else if (uVar21 == 0x10) {
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
        if ((fVar33 <= fVar34) && (!bVar1 && uVar21 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar35;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar34 + fVar35;
          }
          goto LAB_0354d9d8;
        }
        if (((in_stack_00000170 == 1) || (in_stack_00000180 != uVar15)) ||
           (unaff_w24 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar35;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar34 + fVar35;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
          in_stack_000000f0 = 0;
        }
        else {
          cVar13 = (char)unaff_x19[0x1e];
          fVar35 = -fVar33;
          if (cVar13 != '\0') {
            fVar35 = fVar33;
          }
          if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar4)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar10 = (int)*(char *)(in_stack_000000c8 + _uStack00000000000000e8 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000030 & 1)) + iVar10 + -1;
          if (iVar10 < 1) {
            fVar33 = 1.0;
            iVar10 = 1;
          }
          else {
            fVar33 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (in_stack_00000178 == 9) {
LAB_0354f76c:
            fVar33 = 1.0 - fVar33;
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
          fVar33 = ((fVar34 + fVar35) * fVar33) / (float)iVar10;
          if (cVar13 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar33;
            in_stack_000000f0 =
                 CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                          (float)in_stack_000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar33;
          }
        }
      }
    }
    else if (((in_stack_00000178 != 0xad) && (in_stack_00000178 != 0x200b)) &&
            (in_stack_00000178 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar21 == 0x20) {
    fVar33 = fVar32 + fVar31;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar21 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
  if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar17 = in_stack_000000c8 + unaff_x29 * 0x178;
  fVar35 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar33 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
  fVar34 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
  if (*(char *)(lVar17 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar9 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
  if (iVar9 != 0) goto LAB_0354e05c;
  fVar25 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined4 *)(lVar24 + 0x84) = 0;
    *(undefined4 *)(lVar24 + 0xac) = 0;
    *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
    fVar25 = 1.0;
    break;
  case 1:
    fVar29 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar31 = (in_stack_000000f8._4_4_ + fVar29) - *(float *)(in_stack_00000078 + 0x230);
      fVar29 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar31 = fVar31 - fVar32;
    *(float *)(lVar24 + 0x84) = fVar25 + (fVar29 - fVar32) / fVar31;
    *(float *)(lVar24 + 0xac) = fVar25 + (*(float *)(lVar24 + 0x98) - fVar32) / fVar31;
    *(float *)(lVar24 + 0xd4) = fVar25 + (*(float *)(lVar24 + 0xc0) - fVar32) / fVar31;
    fVar25 = fVar25 + (*(float *)(lVar24 + 0xe8) - fVar32) / fVar31;
    break;
  case 2:
    lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar29 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar31 = (in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar24 + 0x84) = fVar25 + fVar31 / fVar29;
    *(float *)(lVar24 + 0xac) =
         fVar25 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar24 + 0xd4) =
         fVar25 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar25 = fVar25 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar24 + 0x88) = 0;
      *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0xd8) = 0;
      *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar29 = fVar29 - fVar36;
      fVar31 = fVar25 + (*(float *)(lVar24 + 0x74) - fVar36) / fVar29;
      fVar29 = fVar25 + (*(float *)(lVar24 + 0x9c) - fVar36) / fVar29;
      *(float *)(lVar24 + 0x88) = fVar31;
      *(float *)(lVar24 + 0xb0) = fVar29;
      *(float *)(lVar24 + 0xd8) = fVar31;
      *(float *)(lVar24 + 0x100) = fVar29;
      break;
    case 2:
      lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar31 = fVar25 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar24 + 0x88) = fVar31;
      fVar29 = *(float *)(unaff_x19 + 0x9c);
      fVar32 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar24 + 0xd8) = fVar31;
      fVar31 = fVar25 + (*(float *)(lVar24 + 0x9c) - fVar29) / (fVar32 - fVar29);
      *(float *)(lVar24 + 0xb0) = fVar31;
      *(float *)(lVar24 + 0x100) = fVar31;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar21 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    }
    if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar31 = *(float *)(lVar24 + 0x15c);
    fVar29 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar31) * 0.5;
    fVar32 = fVar25 + *(float *)(lVar24 + 0x88) * fVar31 + fVar29;
    fVar25 = fVar25 + fVar29 + *(float *)(lVar24 + 0xb0) * fVar31;
    *(float *)(lVar24 + 0x84) = fVar32;
    *(float *)(lVar24 + 0xac) = fVar32;
    *(float *)(lVar24 + 0xd4) = fVar25;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar25;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined4 *)(lVar24 + 0x88) = 0;
    *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w24 < uVar21) {
      lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar28 = fVar28 - fVar27;
      fVar31 = (*(float *)(lVar24 + 0x74) - fVar27) / fVar28;
      fVar28 = (*(float *)(lVar24 + 0x9c) - fVar27) / fVar28;
      *(float *)(lVar24 + 0x88) = fVar31;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar31 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar24 + 0x88) = fVar31;
    fVar28 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar24 + 0xb0) = fVar28;
    *(float *)(lVar24 + 0xd8) = fVar28;
    *(float *)(lVar24 + 0x100) = fVar31;
    break;
  case 3:
    if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar29 = *(float *)(lVar24 + 0x15c);
    fVar28 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar29) * 0.5;
    fVar31 = *(float *)(lVar24 + 0x84) / fVar29 + fVar28;
    fVar28 = fVar28 + *(float *)(lVar24 + 0xd4) / fVar29;
    *(float *)(lVar24 + 0x88) = fVar31;
    *(float *)(lVar24 + 0xb0) = fVar28;
    *(float *)(lVar24 + 0x100) = fVar31;
    *(float *)(lVar24 + 0xd8) = fVar28;
  }
  if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
  unaff_s14 = fStack0000000000000058 * *(float *)(lVar24 + 0x160) *
              (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar24 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
  fVar28 = *(float *)(lVar24 + 0x88);
  fVar29 = *(float *)(lVar24 + 0x84);
  fVar31 = -2.1474836e+09;
  if (fVar29 != INFINITY) {
    fVar31 = (float)(int)fVar29;
  }
  fVar32 = *(float *)(lVar24 + 0xd4);
  fVar36 = *(float *)(lVar24 + 0xd8);
  fVar27 = -2.1474836e+09;
  if (fVar28 != INFINITY) {
    fVar27 = (float)(int)fVar28;
  }
  uVar26 = FUN_03591d3c(fVar29 - fVar31,fVar28 - fVar27);
  *(undefined4 *)(lVar24 + 0x84) = uVar26;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar36 = fVar36 - fVar27;
  *(float *)(lVar24 + 0x88) = unaff_s14;
  uVar26 = FUN_03591d3c(fVar29 - fVar31,fVar36);
  *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar26;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar32 = fVar32 - fVar31;
  *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
  fVar31 = (float)FUN_03591d3c(fVar32,fVar36);
  *(float *)(lVar24 + 0xd4) = fVar31;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar24 + 0xd8) = unaff_s14;
  uVar26 = FUN_03591d3c(fVar32,fVar28 - fVar27);
  *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar26;
  uVar21 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
  if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
  unaff_x22 = in_stack_00000050;
LAB_0354e05c:
  if (((int)unaff_w24 < (int)unaff_x19[0x65]) &&
     (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar17 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(ulong *)(lVar17 + 0x70) =
           CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar17 + 0x70) >> 0x20),
                    fVar35 + (float)*(undefined8 *)(lVar17 + 0x70));
      *(float *)(lVar17 + 0x78) = fVar34 + *(float *)(lVar17 + 0x78);
      *(ulong *)(lVar17 + 0x98) =
           CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar17 + 0x98) >> 0x20),
                    fVar35 + (float)*(undefined8 *)(lVar17 + 0x98));
      *(float *)(lVar17 + 0xa0) = fVar34 + *(float *)(lVar17 + 0xa0);
      *(ulong *)(lVar17 + 0xc0) =
           CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar17 + 0xc0) >> 0x20),
                    fVar35 + (float)*(undefined8 *)(lVar17 + 0xc0));
      *(float *)(lVar17 + 200) = fVar34 + *(float *)(lVar17 + 200);
      *(ulong *)(lVar17 + 0xe8) =
           CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar17 + 0xe8) >> 0x20),
                    fVar35 + (float)*(undefined8 *)(lVar17 + 0xe8));
      *(float *)(lVar17 + 0xf0) = fVar34 + *(float *)(lVar17 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w24 < uVar21) {
        if (*(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x68) == iStack0000000000000034)
        goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar21 = *(uint *)(in_stack_000000c8 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
  *(undefined8 *)(lVar24 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar24 + 0x78) = uVar26;
  if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
  *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar24 + 0xa0) = uVar26;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar24 + 200) = uVar26;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar24 + 0xf0) = uVar26;
  *(undefined1 *)(lVar17 + 0x194) = 0;
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
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar17 = lVar17 + unaff_x29 * 0x178;
  uVar20 = *(undefined8 *)(lVar17 + 0x11c);
  *(undefined8 *)(lVar17 + 0x11c) =
       CONCAT44(fVar33 + (float)((ulong)uVar20 >> 0x20),fVar35 + (float)uVar20);
  *(float *)(lVar17 + 0x124) = fVar34 + *(float *)(lVar17 + 0x124);
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar17 = lVar17 + unaff_x29 * 0x178;
  *(ulong *)(lVar17 + 0x110) =
       CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar17 + 0x110) >> 0x20),
                fVar35 + (float)*(undefined8 *)(lVar17 + 0x110));
  *(float *)(lVar17 + 0x118) = fVar34 + *(float *)(lVar17 + 0x118);
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar17 = lVar17 + unaff_x29 * 0x178;
  *(ulong *)(lVar17 + 0x128) =
       CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar17 + 0x128) >> 0x20),
                fVar35 + (float)*(undefined8 *)(lVar17 + 0x128));
  *(float *)(lVar17 + 0x130) = fVar34 + *(float *)(lVar17 + 0x130);
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar17 = lVar17 + unaff_x29 * 0x178;
  *(float *)(lVar17 + 0x134) = fVar35 + *(float *)(lVar17 + 0x134);
  *(ulong *)(lVar17 + 0x138) =
       CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar17 + 0x138) >> 0x20),
                fVar33 + (float)*(undefined8 *)(lVar17 + 0x138));
  lVar17 = *unaff_x22;
  if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
  uVar21 = *(uint *)(lVar24 + 0x18);
  if (uVar21 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar18 = lVar24 + unaff_x29 * 0x178;
  *(float *)(lVar18 + 0x150) = fVar33 + *(float *)(lVar18 + 0x150);
  *(ulong *)(lVar18 + 0x140) =
       CONCAT44(fVar35 + (float)((ulong)*(undefined8 *)(lVar18 + 0x140) >> 0x20),
                fVar35 + (float)*(undefined8 *)(lVar18 + 0x140));
  *(ulong *)(lVar18 + 0x148) =
       CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar18 + 0x148) >> 0x20),
                fVar33 + (float)*(undefined8 *)(lVar18 + 0x148));
  if (in_stack_00000180 == uVar15) {
    uVar15 = *in_stack_00000090 - 1;
    if (unaff_w24 == uVar15) goto LAB_0354e3ec;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x50);
    if (lVar17 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar17 + 0x18) <= uVar15)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = (long)(int)uVar15;
    lVar19 = lVar17 + lVar18 * 0x5c;
    fVar31 = fVar33 + *(float *)(lVar19 + 0x54);
    *(ulong *)(lVar19 + 0x4c) =
         CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                  fVar33 + (float)*(undefined8 *)(lVar19 + 0x4c));
    *(float *)(lVar19 + 0x54) = fVar31;
    *(float *)(lVar19 + 0x58) = fVar35 + *(float *)(lVar19 + 0x58);
    if (uVar21 <= *(uint *)(lVar19 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar26 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c);
    lVar17 = lVar17 + lVar18 * 0x5c;
    *(float *)(lVar17 + 0x70) = fVar31;
    *(undefined4 *)(lVar17 + 0x6c) = uVar26;
    lVar17 = *unaff_x22;
    if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x50), lVar24 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= uVar15)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar17 = *(long *)(lVar17 + 0x38);
    if (lVar17 == 0) goto LAB_0354fbf4;
    uVar15 = *(uint *)(lVar24 + lVar18 * 0x5c + 0x40);
    if (*(uint *)(lVar17 + 0x18) <= uVar15)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar24 + lVar18 * 0x5c;
    *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar17 + (long)(int)uVar15 * 0x178 + 0x128);
    *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    uVar15 = *in_stack_00000090 - 1;
LAB_0354e3ec:
    if (unaff_w24 == uVar15) {
      lVar17 = *unaff_x22;
      if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x50), lVar24 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar24 + lVar14 * 0x5c;
      fVar31 = fVar33 + *(float *)(lVar18 + 0x54);
      *(ulong *)(lVar18 + 0x4c) =
           CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20),
                    fVar33 + (float)*(undefined8 *)(lVar18 + 0x4c));
      *(float *)(lVar18 + 0x54) = fVar31;
      *(float *)(lVar18 + 0x58) = fVar35 + *(float *)(lVar18 + 0x58);
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar18 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar26 = *(undefined4 *)(lVar17 + (long)(int)*(uint *)(lVar18 + 0x34) * 0x178 + 0x11c);
      lVar24 = lVar24 + lVar14 * 0x5c;
      *(float *)(lVar24 + 0x70) = fVar31;
      *(undefined4 *)(lVar24 + 0x6c) = uVar26;
      lVar17 = *unaff_x22;
      if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x50), lVar24 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 == 0) goto LAB_0354fbf4;
      uVar15 = *(uint *)(lVar24 + lVar14 * 0x5c + 0x40);
      if (*(uint *)(lVar17 + 0x18) <= uVar15)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + lVar14 * 0x5c;
      *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar17 + (long)(int)uVar15 * 0x178 + 0x128);
      *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_026b82c4(in_stack_00000178,0);
  if (((((uVar11 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) && (in_stack_00000178 != 0xad)) &&
     (in_stack_00000178 != 0x2d)) {
    if ((in_stack_00000118._4_4_ & 1) == 0) {
      if (in_stack_00000170 != 1) {
LAB_0354f144:
        in_stack_00000118._4_4_ = 0;
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
    else if (((in_stack_00000170 != 1) &&
             ((int)unaff_w24 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1))) &&
            (((int)unaff_w24 < *in_stack_00000090 &&
             ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
      if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b82c4(uVar3,0);
      if ((uVar11 & 1) != 0) {
        if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b82c4(uVar3,0);
        if ((uVar11 & 1) != 0) goto LAB_0354e610;
      }
    }
    if (unaff_w24 == *in_stack_00000090 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b82c4(in_stack_00000178,0);
      iVar9 = unaff_w28;
      if ((uVar11 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar9 = unaff_w24 - 1;
    }
    lVar17 = *unaff_x22;
    if (lVar17 == 0) goto LAB_0354fbf4;
    lVar24 = *(long *)(lVar17 + 0x40);
    if (lVar24 == 0) goto LAB_0354fbf4;
    uVar15 = *(uint *)(lVar17 + 0x24);
    iVar10 = *(int *)(lVar24 + 0x18);
    if (iVar10 < (int)(uVar15 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar17 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar17 = *unaff_x22;
      if (lVar17 == 0) goto LAB_0354fbf4;
    }
    lVar17 = *(long *)(lVar17 + 0x40);
    if (lVar17 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar17 + 0x18) <= uVar15)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar17 = lVar17 + (long)(int)uVar15 * 0x18;
    *(long **)(lVar17 + 0x20) = unaff_x19;
    *(uint *)(lVar17 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar17 + 0x2c) = iVar9;
    *(uint *)(lVar17 + 0x30) = (iVar9 - in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar17 = unaff_x19[0x6d];
    if (lVar17 == 0) goto LAB_0354fbf4;
    lVar24 = *(long *)(lVar17 + 0x50);
    *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
    if (lVar24 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar24 + lVar14 * 0x5c;
    in_stack_00000118._4_4_ = 0;
    in_stack_000000d8 = in_stack_000000d8 + 1;
    *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
  }
  else {
    if ((in_stack_00000118._4_4_ & 1) == 0) {
      in_stack_00000168._4_4_ = unaff_w24;
    }
    if (unaff_w24 == *in_stack_00000090 - 1U) {
      lVar17 = *unaff_x22;
      if (lVar17 == 0) goto LAB_0354fbf4;
      lVar24 = *(long *)(lVar17 + 0x40);
      if (lVar24 == 0) goto LAB_0354fbf4;
      uVar15 = *(uint *)(lVar17 + 0x24);
      iVar9 = *(int *)(lVar24 + 0x18);
      if (iVar9 < (int)(uVar15 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar17 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar17 = *unaff_x22;
        if (lVar17 == 0) goto LAB_0354fbf4;
      }
      lVar17 = *(long *)(lVar17 + 0x40);
      if (lVar17 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= uVar15)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = lVar17 + (long)(int)uVar15 * 0x18;
      *(long **)(lVar17 + 0x20) = unaff_x19;
      *(uint *)(lVar17 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar17 + 0x2c) = unaff_w24;
      *(uint *)(lVar17 + 0x30) = in_stack_00000170 - in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar17 = unaff_x19[0x6d];
      if (lVar17 == 0) goto LAB_0354fbf4;
      lVar24 = *(long *)(lVar17 + 0x50);
      *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + lVar14 * 0x5c;
      in_stack_000000d8 = in_stack_000000d8 + 1;
      *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
    }
LAB_0354e610:
    in_stack_00000118._4_4_ = 1;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  uVar15 = *(uint *)(lVar17 + 0x18);
  if (uVar15 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar17 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
      in_stack_00000130._4_4_ = 0;
    }
    else {
LAB_0354e660:
      if (uVar15 <= unaff_w24 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = *unaff_x19;
      uVar26 = *(undefined4 *)(lVar17 + unaff_x26 + -0x330);
      uVar30 = *(undefined4 *)(lVar17 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
      pcVar16 = *(code **)(lVar24 + 0x8d8);
LAB_0354ebc8:
      (*pcVar16)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar26,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar30);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar17 = *(long *)puVar7;
      }
LAB_0354ec1c:
      unaff_s15 = 0.0;
      in_stack_00000130._4_4_ = 0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar17 = lVar17 + unaff_x29 * 0x178;
    iVar9 = *(int *)(lVar17 + 0x68);
    *(undefined4 *)(lVar17 + 0x16c) = in_stack_000017d4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)in_stack_00000180))
       || (((int)unaff_x19[0x5c] == 5 && (iVar9 + 1 != (int)unaff_x19[0x67])))) {
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
      if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar31 = *(float *)(lVar24 + unaff_x29 * 0x178 + 0x160);
      if (unaff_s15 <= fVar31) {
        unaff_s15 = fVar31;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar9 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *unaff_x22;
          if (lVar17 == 0) goto LAB_0354fbf4;
          lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar24 + 0x15a8);
      }
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar28 = *(float *)(lVar17 + unaff_x29 * 0x178 + 0x14c);
      fVar31 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar28 = fVar28 + unaff_s15 * fVar31;
      iStack000000000000005c = iVar9;
      if (fVar28 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar28;
      }
    }
    if ((in_stack_00000130._4_4_ & 1) == 0) {
      in_stack_00000130._4_4_ = 0;
      if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
          ((int)uVar5 < (int)unaff_w24)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (unaff_w24 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b97f8(in_stack_00000178,0);
        if ((uVar11 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = lVar17 + unaff_x29 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar17 + 0x160);
      in_stack_00000070 = *(undefined4 *)(lVar17 + 0x11c);
      bVar8 = unaff_s15 != 0.0;
      fVar31 = in_stack_00000080._4_4_;
      if (bVar8) {
        fVar31 = unaff_s15;
      }
      unaff_s15 = fVar31;
      in_stack_00000088 = *(undefined4 *)(lVar17 + 0x168);
      uStack000000000000006c = 0;
      fVar31 = unaff_s14;
      if (bVar8) {
        fVar31 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar31;
    }
    if (*in_stack_00000090 == 1) {
      if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
        if (unaff_w24 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + unaff_x29 * 0x178;
          lVar24 = *unaff_x19;
          uVar26 = *(undefined4 *)(lVar17 + 0x128);
          uVar30 = *(undefined4 *)(lVar17 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((unaff_w24 == uVar4) || ((int)uVar5 <= (int)unaff_w24)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(in_stack_00000178,0);
      if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
        lVar24 = unaff_x29;
        uVar15 = unaff_w24;
        if (in_stack_00000178 == 0x200b || (uVar11 & 1) != 0) {
          lVar24 = _uStack0000000000000128;
          uVar15 = uVar5;
        }
        if (uVar15 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + lVar24 * 0x178;
          uVar26 = *(undefined4 *)(lVar17 + 0x128);
          uVar30 = *(undefined4 *)(lVar17 + 0x160);
          pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
        uVar15 = *(uint *)(lVar17 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)unaff_w24 < *in_stack_00000090 + -1) {
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar11 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar17 + unaff_x26),0);
      if ((uVar11 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
          if (unaff_w24 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + unaff_x29 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar17 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar17 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar17 = *(long *)puVar7;
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
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar22 == 0) goto LAB_0354fbf4;
  uVar15 = *(uint *)(lVar17 + unaff_x29 * 0x178 + 400);
  fVar31 = (float)FUN_03776a30(lVar22 + 0x50,0);
  if ((uVar15 >> 6 & 1) == 0) {
    if ((in_stack_00000120 & 1) != 0) {
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w24 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar26 = *(undefined4 *)(lVar17 + unaff_x26 + -0x330);
      fVar33 = *(float *)(lVar17 + unaff_x26 + -0x30c);
      pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar16)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar26,
                 in_stack_000000a8 * fVar31 + fVar33,0,in_stack_000000a8,in_stack_000000a8);
    }
LAB_0354f250:
    in_stack_00000120 = 0;
  }
  else {
    lVar17 = *unaff_x22;
    if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= unaff_w24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(lVar24 + unaff_x29 * 0x178 + 0x174) = in_stack_000017d4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)in_stack_00000180))
       || (((int)unaff_x19[0x5c] == 5 &&
           (*(int *)(lVar24 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
        ((int)uVar5 < (int)unaff_w24)) || ((in_stack_00000120 & 1) != 0 || !bVar1)) {
LAB_0354ed84:
      if ((in_stack_00000120 & 1) == 0) goto LAB_0354f250;
    }
    else {
      if (unaff_w24 == uVar5) {
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
      lVar17 = lVar17 + unaff_x29 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar17 + 0x60);
      in_stack_00000040 = *(float *)(lVar17 + 0x14c);
      in_stack_000000a0 = *(undefined4 *)(lVar17 + 0x11c);
      in_stack_000000a8 = *(float *)(lVar17 + 0x160);
      fStack000000000000009c = fVar31 * in_stack_000000a8 + in_stack_00000040;
      uStack0000000000000098 = 0;
    }
    iVar9 = *in_stack_00000090;
    if (iVar9 == 1) {
      if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
        uVar15 = *(uint *)(lVar17 + 0x18);
LAB_0354ef0c:
        if (unaff_w24 < uVar15) {
          lVar17 = lVar17 + unaff_x29 * 0x178;
          lVar24 = *unaff_x19;
          uVar26 = *(undefined4 *)(lVar17 + 0x128);
          fVar33 = *(float *)(lVar17 + 0x14c);
LAB_0354ef24:
          pcVar16 = *(code **)(lVar24 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (unaff_w24 == uVar4) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(in_stack_00000178,0);
      if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
        uVar15 = *(uint *)(lVar17 + 0x18);
        if (in_stack_00000178 == 0x200b || (uVar11 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar24 = unaff_x29;
        if (unaff_w24 < uVar15) {
LAB_0354f1f8:
          lVar17 = lVar17 + lVar24 * 0x178;
          fVar33 = *(float *)(lVar17 + 0x14c);
          uVar26 = *(undefined4 *)(lVar17 + 0x128);
          pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)unaff_w24 < iVar9) {
      lVar17 = *unaff_x22;
      if ((lVar17 != 0) && (lVar24 = *(long *)(lVar17 + 0x38), lVar24 != 0)) {
        if (in_stack_00000170 < *(uint *)(lVar24 + 0x18)) {
          if (*(float *)(lVar24 + unaff_x26 + -0x108) == in_stack_00000048._4_4_) {
            fVar28 = *(float *)(lVar24 + unaff_x26 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_03567bac(fVar33 + fVar28,in_stack_00000040,0);
            if ((uVar11 & 1) != 0) {
              iVar9 = *in_stack_00000090;
              goto LAB_0354f010;
            }
            lVar17 = *unaff_x22;
            if (lVar17 == 0) goto LAB_0354fbf4;
          }
          lVar17 = *(long *)(lVar17 + 0x38);
          if (lVar17 != 0) {
            uVar15 = *(uint *)(lVar17 + 0x18);
            if ((int)unaff_w24 <= (int)uVar5) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar24 = _uStack0000000000000128;
            if (uVar5 < uVar15) goto LAB_0354f1f8;
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
      iVar9 = FUN_036d3364(lVar22,0);
      if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(in_stack_000000c8 + unaff_x26 + -0x130);
      if (lVar17 == 0) goto LAB_0354fbf4;
      iVar10 = FUN_036d3364(lVar17,0);
      if (iVar9 != iVar10) {
        if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
          uVar15 = *(uint *)(lVar17 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 != 0)) {
        if (unaff_w24 - 1 < *(uint *)(lVar17 + 0x18)) {
          lVar24 = *unaff_x19;
          uVar26 = *(undefined4 *)(lVar17 + unaff_x26 + -0x330);
          fVar33 = *(float *)(lVar17 + unaff_x26 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    in_stack_00000120 = 1;
  }
  if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0)) goto LAB_0354fbf4;
  uVar15 = (uint)*(undefined8 *)(lVar17 + 0x18);
  if (uVar15 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  unaff_x20 = in_stack_00000090;
  unaff_x25 = in_stack_000000c8;
  if ((*(byte *)(lVar17 + unaff_x29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    unaff_x23 = 0x178;
    bVar6 = false;
    unaff_w24 = in_stack_00000170;
    uVar15 = in_stack_00000180;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)in_stack_00000180))
       || (((int)unaff_x19[0x5c] == 5 &&
           (*(int *)(lVar17 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      unaff_w21 = 0;
    }
    else {
      unaff_w21 = 1;
    }
    if (!bVar6) {
      if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
          ((int)uVar5 < (int)unaff_w24)) || (unaff_w21 != 1)) goto LAB_0354f374;
      if (unaff_w24 == uVar5) {
        param_1 = &PTR_DAT_03cc0000;
        goto code_r0x0354f344;
      }
LAB_0354f380:
      uStack0000000000000128 = uVar5;
      uStack00000000000000e8 = uVar4;
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar7;
      }
      if ((*unaff_x22 == 0) || (lVar17 = *(long *)(*unaff_x22 + 0x38), lVar17 == 0))
      goto LAB_0354fbf4;
      uVar15 = (uint)*(undefined8 *)(lVar17 + 0x18);
      if (uVar15 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = *(long *)(lVar24 + 0xb8);
      lVar22 = lVar17 + unaff_x29 * 0x178;
      in_stack_000017c8 = *(undefined8 *)(lVar22 + 0x184);
      in_stack_000017c0 = *(undefined8 *)(lVar22 + 0x17c);
      fStack00000000000000e0 = *(float *)(lVar24 + 0x1598);
      fStack00000000000000e4 = *(float *)(lVar24 + 0x159c);
      in_stack_000017d0 = *(float *)(lVar22 + 0x18c);
      fStack00000000000000d0 = *(float *)(lVar24 + 0x15a0);
      fStack00000000000000d4 = *(float *)(lVar24 + 0x15a4);
      uStack00000000000000c0 = 0;
      uVar4 = uStack00000000000000e8;
      uVar5 = uStack0000000000000128;
    }
    uStack0000000000000128 = uVar5;
    uStack00000000000000e8 = uVar4;
    if (uVar15 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar17 = lVar17 + unaff_x29 * 0x178;
    fVar31 = *(float *)(lVar17 + 0x128);
    fVar27 = *(float *)(lVar17 + 0x188);
    uVar23 = *(undefined8 *)(lVar17 + 0x17c);
    fVar34 = *(float *)(lVar17 + 0x184);
    uVar20 = *(undefined8 *)(lVar17 + 0x184);
    fVar32 = *(float *)(lVar17 + 0x18c);
    fVar33 = *(float *)(lVar17 + 0x11c);
    fVar28 = *(float *)(lVar17 + 0x148);
    fVar29 = *(float *)(lVar17 + 0x150);
    in_stack_00000188 = uVar23;
    fStack0000000000000190 = fVar34;
    fStack0000000000000194 = fVar27;
    in_stack_00000198 = fVar32;
    in_stack_000001a0 = in_stack_000017c0;
    in_stack_000001a8 = in_stack_000017c8;
    in_stack_000001b0 = in_stack_000017d0;
    uVar11 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
    lVar17 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar11 & 1) == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar17);
      }
      fVar31 = fVar31 + (float)in_stack_000017c8;
      fVar33 = fVar33 - (float)((ulong)in_stack_000017c0 >> 0x20);
      fVar28 = fVar28 + (float)((ulong)in_stack_000017c8 >> 0x20);
      if (fVar33 <= fStack00000000000000e0) {
        fStack00000000000000e0 = fVar33;
      }
      if (fVar29 - in_stack_000017d0 <= fStack00000000000000e4) {
        fStack00000000000000e4 = fVar29 - in_stack_000017d0;
      }
      if (fStack00000000000000d0 <= fVar31) {
        fStack00000000000000d0 = fVar31;
      }
      if (fStack00000000000000d4 <= fVar28) {
        fStack00000000000000d4 = fVar28;
      }
    }
    else {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar17);
      }
      fVar33 = (fVar33 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
      if (fVar29 <= fStack00000000000000e4) {
        fStack00000000000000e4 = fVar29;
      }
      if (fStack00000000000000d4 <= fVar28) {
        fStack00000000000000d4 = fVar28;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar33,
                 fStack00000000000000d4,uStack00000000000000c0);
      fStack00000000000000e4 = fVar29 - fVar32;
      fStack00000000000000d0 = fVar31 + fVar34;
      uStack00000000000000c0 = 0;
      fStack00000000000000d4 = fVar28 + fVar27;
      fStack00000000000000e0 = fVar33;
      in_stack_000017c0 = uVar23;
      in_stack_000017c8 = uVar20;
      in_stack_000017d0 = fVar32;
    }
    unaff_x23 = 0x178;
    if (((*unaff_x20 == 1) || (unaff_w24 == uStack00000000000000e8)) ||
       (((int)uStack0000000000000128 <= (int)unaff_w24 || ((unaff_w21 & 1) == 0)))) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
      goto LAB_0354f604;
    }
    bVar6 = true;
    unaff_w24 = in_stack_00000170;
    uVar15 = in_stack_00000180;
  }
  goto LAB_0354f608;
  while( true ) {
    lVar17 = *unaff_x22;
    lVar24 = lVar24 + 1;
    lVar22 = lVar22 + 0x50;
    if (lVar17 == 0) break;
LAB_0354f97c:
    uVar11 = lVar24 + 1;
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
    FUN_03596a20(lVar17 + lVar22 + 0x70,0);
    lVar17 = unaff_x19[0xe1];
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar20 = *(undefined8 *)(lVar17 + lVar24 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036d35a8(uVar20,0,0);
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
        FUN_03596b20(lVar17 + lVar22 + 0x70,1,0);
      }
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar24 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a460c(lVar17,*(undefined8 *)(lVar14 + lVar22 + 0x80),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar24 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a4810(lVar17,*(undefined8 *)(lVar14 + lVar22 + 0x98),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar24 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a48bc(lVar17,*(undefined8 *)(lVar14 + lVar22 + 0xa0),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar24 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_0359d5ac(lVar17,0);
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar17 == 0) break;
      FUN_036a4e24(lVar17,*(undefined8 *)(lVar14 + lVar22 + 0xa8),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar17 = *(long *)(lVar17 + lVar24 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = FUN_0359d5ac(lVar17,0), lVar17 == 0)) break;
      FUN_036aa280(lVar17,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


