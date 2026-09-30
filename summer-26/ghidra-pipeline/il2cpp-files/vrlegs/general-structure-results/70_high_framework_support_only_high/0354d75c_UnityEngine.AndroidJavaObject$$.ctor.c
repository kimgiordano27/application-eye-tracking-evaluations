/*
FUNCTION_NAME: UnityEngine.AndroidJavaObject$$.ctor
ENTRY_POINT: 0354d75c
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


void UnityEngine_AndroidJavaObject___ctor
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  code *pcVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *unaff_x19;
  int *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar25;
  long unaff_x25;
  long unaff_x26;
  uint unaff_w28;
  long lVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000040;
  float fStack000000000000004c;
  float fStack0000000000000058;
  int iStack000000000000005c;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  long in_stack_00000078;
  float fStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  uint uStack0000000000000120;
  int iStack0000000000000124;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000168;
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
  
  fVar27 = 0.0;
  fVar40 = 0.0;
  fStack0000000000000104 = *(float *)(*(long *)(param_1 + 0xb8) + 0x15a8);
  fStack0000000000000100 = 0.0;
  fStack0000000000000084 = 0.0;
  fStack000000000000004c = 0.0;
  fStack00000000000000a8 = 0.0;
  fStack0000000000000040 = 0.0;
  uStack000000000000006c = uStack00000000000000c0;
  uStack0000000000000098 = uStack00000000000000c0;
  uVar18 = 1;
  fStack0000000000000068 = param_3;
  fStack0000000000000070 = param_4;
  fStack000000000000009c = param_3;
  fStack00000000000000a0 = param_4;
  fStack00000000000000d0 = param_4;
  fStack00000000000000d4 = param_3;
LAB_0354d7c0:
  uVar7 = uVar18 - 1;
  if (*(uint *)(unaff_x25 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x50), lVar16 == 0)) goto LAB_0354fbf4;
  lVar26 = (long)(int)uVar7;
  lVar20 = unaff_x25 + lVar26 * unaff_x23;
  uVar2 = *(uint *)(lVar20 + 100);
  if (*(uint *)(lVar16 + 0x18) <= uVar2)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = *(long *)(lVar20 + 0x38);
  lVar24 = (long)(int)uVar2;
  lVar16 = lVar16 + lVar24 * 0x5c;
  uVar15 = *(uint *)(lVar16 + 0x68);
  uVar19 = (uint)*(ushort *)(lVar20 + 0x20);
  uVar5 = *(uint *)(lVar16 + 0x3c);
  iVar3 = *(int *)(lVar16 + 0x20);
  iVar10 = *(int *)(lVar16 + 0x28);
  iVar11 = *(int *)(lVar16 + 0x2c);
  fVar31 = *(float *)(lVar16 + 0x4c);
  uVar6 = *(uint *)(lVar16 + 0x40);
  fVar30 = *(float *)(lVar16 + 0x54);
  fVar36 = *(float *)(lVar16 + 0x58);
  fVar37 = *(float *)(lVar16 + 0x5c);
  fVar38 = *(float *)(lVar16 + 0x60);
  fVar35 = *(float *)(lVar16 + 0x6c);
  fVar39 = *(float *)(lVar16 + 0x70);
  fVar34 = *(float *)(lVar16 + 0x74);
  fVar32 = *(float *)(lVar16 + 0x78);
  if ((int)uVar15 < 9) {
    switch(uVar15) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar38 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar36;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar38 + fVar37 * 0.5) - fVar36 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar37 + fVar38) - fVar36;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar37 + fVar38;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    in_stack_000000f0 = 0;
  }
  else if (uVar15 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar19 < 0xad) {
      if ((uVar19 != 3) && (uVar19 != 10)) {
FUN_0354d8fc:
        if (*(uint *)(unaff_x25 + 0x18) <= uVar5)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(unaff_x25 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b8cc4(uVar4,0);
        if ((uVar12 & 1) == 0) {
          bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar36 <= fVar37) && (!bVar1 && uVar15 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar38;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar37 + fVar38;
          }
          goto LAB_0354d9d8;
        }
        if (((uVar18 == 1) || (uVar2 != unaff_w28)) || (uVar7 == *(uint *)((long)unaff_x19 + 0x324))
           ) {
          in_stack_000000f8._4_4_ = fVar38;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar37 + fVar38;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar19,0);
          in_stack_000000f0 = 0;
        }
        else {
          cVar14 = (char)unaff_x19[0x1e];
          fVar38 = -fVar36;
          if (cVar14 != '\0') {
            fVar38 = fVar36;
          }
          if (*(uint *)(unaff_x25 + 0x18) <= uVar5)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar11 = (int)*(char *)(unaff_x25 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar3 - (uStack0000000000000030 & 1)) + iVar11 + -1;
          if (iVar11 < 1) {
            fVar36 = 1.0;
            iVar11 = 1;
          }
          else {
            fVar36 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar19 == 9) {
LAB_0354f76c:
            fVar36 = 1.0 - fVar36;
          }
          else {
            if (uVar19 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b97f8(uVar19,0);
              cVar14 = (char)unaff_x19[0x1e];
              if ((uVar12 & 1) != 0) goto LAB_0354f76c;
            }
            iVar11 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar10;
          }
          fVar36 = ((fVar37 + fVar38) * fVar36) / (float)iVar11;
          if (cVar14 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar36;
            in_stack_000000f0 =
                 CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                          (float)in_stack_000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar36;
          }
        }
      }
    }
    else if (((uVar19 != 0xad) && (uVar19 != 0x200b)) && (uVar19 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar15 == 0x20) {
    fVar36 = fVar35 + fVar34;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar15 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = unaff_x25 + lVar26 * 0x178;
  fVar38 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar36 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
  fVar37 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
  if (*(char *)(lVar16 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar10 = *(int *)(unaff_x25 + lVar26 * 0x178 + 0x2c);
  if (iVar10 != 0) goto LAB_0354e05c;
  fVar27 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar20 = unaff_x25 + lVar26 * 0x178;
    *(undefined4 *)(lVar20 + 0x84) = 0;
    *(undefined4 *)(lVar20 + 0xac) = 0;
    *(undefined4 *)(lVar20 + 0xd4) = 0x3f800000;
    fVar27 = 1.0;
    break;
  case 1:
    fVar32 = *(float *)(unaff_x25 + lVar26 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar20 = unaff_x25 + lVar26 * 0x178;
      fVar34 = (in_stack_000000f8._4_4_ + fVar32) - *(float *)(in_stack_00000078 + 0x230);
      fVar32 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar20 = unaff_x25 + lVar26 * 0x178;
    fVar34 = fVar34 - fVar35;
    *(float *)(lVar20 + 0x84) = fVar27 + (fVar32 - fVar35) / fVar34;
    *(float *)(lVar20 + 0xac) = fVar27 + (*(float *)(lVar20 + 0x98) - fVar35) / fVar34;
    *(float *)(lVar20 + 0xd4) = fVar27 + (*(float *)(lVar20 + 0xc0) - fVar35) / fVar34;
    fVar27 = fVar27 + (*(float *)(lVar20 + 0xe8) - fVar35) / fVar34;
    break;
  case 2:
    lVar20 = unaff_x25 + lVar26 * 0x178;
    fVar32 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar34 = (in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar20 + 0x84) = fVar27 + fVar34 / fVar32;
    *(float *)(lVar20 + 0xac) =
         fVar27 + ((in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar20 + 0xd4) =
         fVar27 + ((in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar27 = fVar27 + ((in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar20 = unaff_x25 + lVar26 * 0x178;
      *(undefined4 *)(lVar20 + 0x88) = 0;
      *(undefined4 *)(lVar20 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar20 + 0xd8) = 0;
      *(undefined4 *)(lVar20 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar20 = unaff_x25 + lVar26 * 0x178;
      fVar32 = fVar32 - fVar39;
      fVar34 = fVar27 + (*(float *)(lVar20 + 0x74) - fVar39) / fVar32;
      fVar32 = fVar27 + (*(float *)(lVar20 + 0x9c) - fVar39) / fVar32;
      *(float *)(lVar20 + 0x88) = fVar34;
      *(float *)(lVar20 + 0xb0) = fVar32;
      *(float *)(lVar20 + 0xd8) = fVar34;
      *(float *)(lVar20 + 0x100) = fVar32;
      break;
    case 2:
      lVar20 = unaff_x25 + lVar26 * 0x178;
      fVar34 = fVar27 + (*(float *)(lVar20 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar20 + 0x88) = fVar34;
      fVar32 = *(float *)(unaff_x19 + 0x9c);
      fVar35 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar20 + 0xd8) = fVar34;
      fVar34 = fVar27 + (*(float *)(lVar20 + 0x9c) - fVar32) / (fVar35 - fVar32);
      *(float *)(lVar20 + 0xb0) = fVar34;
      *(float *)(lVar20 + 0x100) = fVar34;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar15 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
    }
    if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar20 = unaff_x25 + lVar26 * 0x178;
    fVar34 = *(float *)(lVar20 + 0x15c);
    fVar32 = (1.0 - (*(float *)(lVar20 + 0x88) + *(float *)(lVar20 + 0xb0)) * fVar34) * 0.5;
    fVar35 = fVar27 + *(float *)(lVar20 + 0x88) * fVar34 + fVar32;
    fVar27 = fVar27 + fVar32 + *(float *)(lVar20 + 0xb0) * fVar34;
    *(float *)(lVar20 + 0x84) = fVar35;
    *(float *)(lVar20 + 0xac) = fVar35;
    *(float *)(lVar20 + 0xd4) = fVar27;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(unaff_x25 + lVar26 * 0x178 + 0xfc) = fVar27;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar20 = unaff_x25 + lVar26 * 0x178;
    *(undefined4 *)(lVar20 + 0x88) = 0;
    *(undefined4 *)(lVar20 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar20 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar20 + 0x100) = 0;
    break;
  case 1:
    if (uVar7 < uVar15) {
      lVar20 = unaff_x25 + lVar26 * 0x178;
      fVar31 = fVar31 - fVar30;
      fVar27 = (*(float *)(lVar20 + 0x74) - fVar30) / fVar31;
      fVar31 = (*(float *)(lVar20 + 0x9c) - fVar30) / fVar31;
      *(float *)(lVar20 + 0x88) = fVar27;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar20 = unaff_x25 + lVar26 * 0x178;
    fVar27 = (*(float *)(lVar20 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar20 + 0x88) = fVar27;
    fVar31 = (*(float *)(lVar20 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar20 + 0xb0) = fVar31;
    *(float *)(lVar20 + 0xd8) = fVar31;
    *(float *)(lVar20 + 0x100) = fVar27;
    break;
  case 3:
    if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar20 = unaff_x25 + lVar26 * 0x178;
    fVar31 = *(float *)(lVar20 + 0x15c);
    fVar34 = (1.0 - (*(float *)(lVar20 + 0x84) + *(float *)(lVar20 + 0xd4)) / fVar31) * 0.5;
    fVar27 = *(float *)(lVar20 + 0x84) / fVar31 + fVar34;
    fVar34 = fVar34 + *(float *)(lVar20 + 0xd4) / fVar31;
    *(float *)(lVar20 + 0x88) = fVar27;
    *(float *)(lVar20 + 0xb0) = fVar34;
    *(float *)(lVar20 + 0x100) = fVar27;
    *(float *)(lVar20 + 0xd8) = fVar34;
  }
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar20 = unaff_x25 + lVar26 * 0x178;
  fVar27 = fStack0000000000000058 * *(float *)(lVar20 + 0x160) *
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar20 + 0x5c) == '\0') && ((*(byte *)(unaff_x25 + lVar26 * 0x178 + 400) & 1) != 0)
     ) {
    fVar27 = -fVar27;
  }
  lVar20 = unaff_x25 + lVar26 * 0x178;
  fVar31 = *(float *)(lVar20 + 0x88);
  fVar32 = *(float *)(lVar20 + 0x84);
  fVar34 = -2.1474836e+09;
  if (fVar32 != INFINITY) {
    fVar34 = (float)(int)fVar32;
  }
  fVar35 = *(float *)(lVar20 + 0xd4);
  fVar39 = *(float *)(lVar20 + 0xd8);
  fVar30 = -2.1474836e+09;
  if (fVar31 != INFINITY) {
    fVar30 = (float)(int)fVar31;
  }
  uVar28 = FUN_03591d3c(fVar32 - fVar34,fVar31 - fVar30);
  *(undefined4 *)(lVar20 + 0x84) = uVar28;
  if (*(uint *)(unaff_x25 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar39 = fVar39 - fVar30;
  *(float *)(lVar20 + 0x88) = fVar27;
  uVar28 = FUN_03591d3c(fVar32 - fVar34,fVar39);
  *(undefined4 *)(unaff_x25 + lVar26 * 0x178 + 0xac) = uVar28;
  if (*(uint *)(unaff_x25 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar35 = fVar35 - fVar34;
  *(float *)(unaff_x25 + lVar26 * 0x178 + 0xb0) = fVar27;
  fVar34 = (float)FUN_03591d3c(fVar35,fVar39);
  *(float *)(lVar20 + 0xd4) = fVar34;
  if (*(uint *)(unaff_x25 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar20 + 0xd8) = fVar27;
  uVar28 = FUN_03591d3c(fVar35,fVar31 - fVar30);
  *(undefined4 *)(unaff_x25 + lVar26 * 0x178 + 0xfc) = uVar28;
  uVar15 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(unaff_x25 + lVar26 * 0x178 + 0x100) = fVar27;
LAB_0354e05c:
  if (((int)uVar7 < (int)unaff_x19[0x65]) && (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))
     ) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar16 = unaff_x25 + lVar26 * 0x178;
      *(ulong *)(lVar16 + 0x70) =
           CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar16 + 0x70) >> 0x20),
                    fVar38 + (float)*(undefined8 *)(lVar16 + 0x70));
      *(float *)(lVar16 + 0x78) = fVar37 + *(float *)(lVar16 + 0x78);
      *(ulong *)(lVar16 + 0x98) =
           CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar16 + 0x98) >> 0x20),
                    fVar38 + (float)*(undefined8 *)(lVar16 + 0x98));
      *(float *)(lVar16 + 0xa0) = fVar37 + *(float *)(lVar16 + 0xa0);
      *(ulong *)(lVar16 + 0xc0) =
           CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar16 + 0xc0) >> 0x20),
                    fVar38 + (float)*(undefined8 *)(lVar16 + 0xc0));
      *(float *)(lVar16 + 200) = fVar37 + *(float *)(lVar16 + 200);
      *(ulong *)(lVar16 + 0xe8) =
           CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar16 + 0xe8) >> 0x20),
                    fVar38 + (float)*(undefined8 *)(lVar16 + 0xe8));
      *(float *)(lVar16 + 0xf0) = fVar37 + *(float *)(lVar16 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar7 < uVar15) {
        if (*(int *)(unaff_x25 + lVar26 * 0x178 + 0x68) == iStack0000000000000034)
        goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar15 = *(uint *)(unaff_x25 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar20 = unaff_x25 + lVar26 * 0x178;
  *(undefined8 *)(lVar20 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar20 + 0x78) = uVar28;
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar20 = unaff_x25 + lVar26 * 0x178;
  *(undefined8 *)(lVar20 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar20 + 0xa0) = uVar28;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar20 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar20 + 200) = uVar28;
  uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar20 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar20 + 0xf0) = uVar28;
  *(undefined1 *)(lVar16 + 0x194) = 0;
LAB_0354e184:
  if (iVar10 == 0) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar17)();
  }
  else if (iVar10 == 1) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + lVar26 * 0x178;
  uVar29 = *(undefined8 *)(lVar16 + 0x11c);
  *(undefined8 *)(lVar16 + 0x11c) =
       CONCAT44(fVar36 + (float)((ulong)uVar29 >> 0x20),fVar38 + (float)uVar29);
  *(float *)(lVar16 + 0x124) = fVar37 + *(float *)(lVar16 + 0x124);
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + lVar26 * 0x178;
  *(ulong *)(lVar16 + 0x110) =
       CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar16 + 0x110) >> 0x20),
                fVar38 + (float)*(undefined8 *)(lVar16 + 0x110));
  *(float *)(lVar16 + 0x118) = fVar37 + *(float *)(lVar16 + 0x118);
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + lVar26 * 0x178;
  *(ulong *)(lVar16 + 0x128) =
       CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar16 + 0x128) >> 0x20),
                fVar38 + (float)*(undefined8 *)(lVar16 + 0x128));
  *(float *)(lVar16 + 0x130) = fVar37 + *(float *)(lVar16 + 0x130);
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar16 = lVar16 + lVar26 * 0x178;
  *(float *)(lVar16 + 0x134) = fVar38 + *(float *)(lVar16 + 0x134);
  *(ulong *)(lVar16 + 0x138) =
       CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar16 + 0x138) >> 0x20),
                fVar36 + (float)*(undefined8 *)(lVar16 + 0x138));
  lVar16 = *unaff_x22;
  if ((lVar16 == 0) || (lVar20 = *(long *)(lVar16 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
  uVar15 = *(uint *)(lVar20 + 0x18);
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar20 + lVar26 * 0x178;
  *(float *)(lVar22 + 0x150) = fVar36 + *(float *)(lVar22 + 0x150);
  *(ulong *)(lVar22 + 0x140) =
       CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar22 + 0x140) >> 0x20),
                fVar38 + (float)*(undefined8 *)(lVar22 + 0x140));
  *(ulong *)(lVar22 + 0x148) =
       CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar22 + 0x148) >> 0x20),
                fVar36 + (float)*(undefined8 *)(lVar22 + 0x148));
  if (uVar2 == unaff_w28) {
    uVar15 = *unaff_x20 - 1;
    if (uVar7 == uVar15) goto LAB_0354e3ec;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x50);
    if (lVar16 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= unaff_w28)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = (long)(int)unaff_w28;
    lVar23 = lVar16 + lVar22 * 0x5c;
    fVar34 = fVar36 + *(float *)(lVar23 + 0x54);
    *(ulong *)(lVar23 + 0x4c) =
         CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar23 + 0x4c) >> 0x20),
                  fVar36 + (float)*(undefined8 *)(lVar23 + 0x4c));
    *(float *)(lVar23 + 0x54) = fVar34;
    *(float *)(lVar23 + 0x58) = fVar38 + *(float *)(lVar23 + 0x58);
    if (uVar15 <= *(uint *)(lVar23 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar28 = *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar23 + 0x34) * 0x178 + 0x11c);
    lVar16 = lVar16 + lVar22 * 0x5c;
    *(float *)(lVar16 + 0x70) = fVar34;
    *(undefined4 *)(lVar16 + 0x6c) = uVar28;
    lVar16 = *unaff_x22;
    if ((lVar16 == 0) || (lVar20 = *(long *)(lVar16 + 0x50), lVar20 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar20 + 0x18) <= unaff_w28)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = *(long *)(lVar16 + 0x38);
    if (lVar16 == 0) goto LAB_0354fbf4;
    uVar15 = *(uint *)(lVar20 + lVar22 * 0x5c + 0x40);
    if (*(uint *)(lVar16 + 0x18) <= uVar15)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar20 = lVar20 + lVar22 * 0x5c;
    *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar16 + (long)(int)uVar15 * 0x178 + 0x128);
    *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x4c);
    uVar15 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar7 == uVar15) {
      lVar16 = *unaff_x22;
      if ((lVar16 == 0) || (lVar20 = *(long *)(lVar16 + 0x50), lVar20 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar20 + lVar24 * 0x5c;
      fVar34 = fVar36 + *(float *)(lVar22 + 0x54);
      *(ulong *)(lVar22 + 0x4c) =
           CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20),
                    fVar36 + (float)*(undefined8 *)(lVar22 + 0x4c));
      *(float *)(lVar22 + 0x54) = fVar34;
      *(float *)(lVar22 + 0x58) = fVar38 + *(float *)(lVar22 + 0x58);
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar22 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar28 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar22 + 0x34) * 0x178 + 0x11c);
      lVar20 = lVar20 + lVar24 * 0x5c;
      *(float *)(lVar20 + 0x70) = fVar34;
      *(undefined4 *)(lVar20 + 0x6c) = uVar28;
      lVar16 = *unaff_x22;
      if ((lVar16 == 0) || (lVar20 = *(long *)(lVar16 + 0x50), lVar20 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      uVar15 = *(uint *)(lVar20 + lVar24 * 0x5c + 0x40);
      if (*(uint *)(lVar16 + 0x18) <= uVar15)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = lVar20 + lVar24 * 0x5c;
      *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar16 + (long)(int)uVar15 * 0x178 + 0x128);
      *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = FUN_026b82c4(uVar19,0);
  if (((((uVar12 & 1) == 0) && (1 < uVar19 - 0x2010)) && (uVar19 != 0xad)) && (uVar19 != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (uVar18 != 1) {
LAB_0354f144:
        uStack000000000000011c = 0;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b81f8(uVar19,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b63d8(uVar19,0);
        if (((uVar19 != 0x200b) && ((uVar12 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    else if (((uVar18 != 1) && ((int)uVar7 < (int)(*(uint *)(unaff_x25 + 0x18) - 1))) &&
            (((int)uVar7 < *unaff_x20 && ((uVar19 == 0x2019 || (uVar19 == 0x27)))))) {
      if (*(uint *)(unaff_x25 + 0x18) <= uVar18 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar4 = *(undefined2 *)(unaff_x25 + unaff_x26 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b82c4(uVar4,0);
      if ((uVar12 & 1) != 0) {
        if (*(uint *)(unaff_x25 + 0x18) <= uVar18)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(unaff_x25 + unaff_x26 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b82c4(uVar4,0);
        if ((uVar12 & 1) != 0) goto LAB_0354e610;
      }
    }
    if (uVar7 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b82c4(uVar19,0);
      iVar10 = iStack0000000000000124;
      if ((uVar12 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar10 = uVar18 - 2;
    }
    lVar16 = *unaff_x22;
    if (lVar16 == 0) goto LAB_0354fbf4;
    lVar20 = *(long *)(lVar16 + 0x40);
    if (lVar20 == 0) goto LAB_0354fbf4;
    uVar15 = *(uint *)(lVar16 + 0x24);
    iVar11 = *(int *)(lVar20 + 0x18);
    if (iVar11 < (int)(uVar15 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar16 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar16 = *unaff_x22;
      if (lVar16 == 0) goto LAB_0354fbf4;
    }
    lVar16 = *(long *)(lVar16 + 0x40);
    if (lVar16 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar16 + 0x18) <= uVar15)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar16 = lVar16 + (long)(int)uVar15 * 0x18;
    *(long **)(lVar16 + 0x20) = unaff_x19;
    *(uint *)(lVar16 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar16 + 0x2c) = iVar10;
    *(uint *)(lVar16 + 0x30) = (iVar10 - in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar16 = unaff_x19[0x6d];
    if (lVar16 == 0) goto LAB_0354fbf4;
    lVar20 = *(long *)(lVar16 + 0x50);
    *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
    if (lVar20 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar20 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar20 = lVar20 + lVar24 * 0x5c;
    uStack000000000000011c = 0;
    in_stack_000000d8 = in_stack_000000d8 + 1;
    *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      in_stack_00000168._4_4_ = uVar7;
    }
    if (uVar7 == *unaff_x20 - 1U) {
      lVar16 = *unaff_x22;
      if (lVar16 == 0) goto LAB_0354fbf4;
      lVar20 = *(long *)(lVar16 + 0x40);
      if (lVar20 == 0) goto LAB_0354fbf4;
      uVar15 = *(uint *)(lVar16 + 0x24);
      iVar10 = *(int *)(lVar20 + 0x18);
      if (iVar10 < (int)(uVar15 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar16 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar16 = *unaff_x22;
        if (lVar16 == 0) goto LAB_0354fbf4;
      }
      lVar16 = *(long *)(lVar16 + 0x40);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar15)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + (long)(int)uVar15 * 0x18;
      *(long **)(lVar16 + 0x20) = unaff_x19;
      *(uint *)(lVar16 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar16 + 0x2c) = uVar7;
      *(uint *)(lVar16 + 0x30) = uVar18 - in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar16 = unaff_x19[0x6d];
      if (lVar16 == 0) goto LAB_0354fbf4;
      lVar20 = *(long *)(lVar16 + 0x50);
      *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
      if (lVar20 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = lVar20 + lVar24 * 0x5c;
      in_stack_000000d8 = in_stack_000000d8 + 1;
      *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
    }
LAB_0354e610:
    uStack000000000000011c = 1;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  uVar15 = *(uint *)(lVar16 + 0x18);
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar16 + lVar26 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
      in_stack_00000130._4_4_ = 0;
    }
    else {
LAB_0354e660:
      if (uVar15 <= uVar18 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar20 = *unaff_x19;
      uVar28 = *(undefined4 *)(lVar16 + unaff_x26 + -0x330);
      uVar33 = *(undefined4 *)(lVar16 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
      pcVar17 = *(code **)(lVar20 + 0x8d8);
LAB_0354ebc8:
      (*pcVar17)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar28,
                 fStack0000000000000104,0,fStack0000000000000084,uVar33);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *(long *)puVar8;
      }
LAB_0354ec1c:
      fVar40 = 0.0;
      in_stack_00000130._4_4_ = 0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar16 = lVar16 + lVar26 * 0x178;
    iVar10 = *(int *)(lVar16 + 0x68);
    *(undefined4 *)(lVar16 + 0x16c) = in_stack_000017d4;
    if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(uVar19,0);
    if ((uVar19 != 0x200b) && ((uVar12 & 1) == 0)) {
      lVar16 = *unaff_x22;
      if ((lVar16 == 0) || (lVar20 = *(long *)(lVar16 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar34 = *(float *)(lVar20 + lVar26 * 0x178 + 0x160);
      if (fVar40 <= fVar34) {
        fVar40 = fVar34;
      }
      if (fStack0000000000000100 <= ABS(fVar27)) {
        fStack0000000000000100 = ABS(fVar27);
      }
      if (iVar10 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *unaff_x22;
          if (lVar16 == 0) goto LAB_0354fbf4;
          lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar20 + 0x15a8);
      }
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar31 = *(float *)(lVar16 + lVar26 * 0x178 + 0x14c);
      fVar34 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar31 = fVar31 + fVar40 * fVar34;
      iStack000000000000005c = iVar10;
      if (fVar31 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar31;
      }
    }
    if ((in_stack_00000130._4_4_ & 1) == 0) {
      in_stack_00000130._4_4_ = 0;
      if ((((uVar19 == 0xd) || ((uVar19 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar7 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(uVar19,0);
        if ((uVar12 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar26 * 0x178;
      fStack0000000000000084 = *(float *)(lVar16 + 0x160);
      fStack0000000000000070 = *(float *)(lVar16 + 0x11c);
      bVar9 = fVar40 != 0.0;
      fVar34 = fStack0000000000000084;
      if (bVar9) {
        fVar34 = fVar40;
      }
      fVar40 = fVar34;
      in_stack_00000088 = *(undefined4 *)(lVar16 + 0x168);
      uStack000000000000006c = 0;
      fVar34 = fVar27;
      if (bVar9) {
        fVar34 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar34;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
        if (uVar7 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + lVar26 * 0x178;
          lVar20 = *unaff_x19;
          uVar28 = *(undefined4 *)(lVar16 + 0x128);
          uVar33 = *(undefined4 *)(lVar16 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar7 == uVar5) || ((int)uVar6 <= (int)uVar7)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(uVar19,0);
      if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
        lVar20 = lVar26;
        uVar15 = uVar7;
        if (uVar19 == 0x200b || (uVar12 & 1) != 0) {
          lVar20 = (long)(int)uVar6;
          uVar15 = uVar6;
        }
        if (uVar15 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + lVar20 * 0x178;
          uVar28 = *(undefined4 *)(lVar16 + 0x128);
          uVar33 = *(undefined4 *)(lVar16 + 0x160);
          pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
        uVar15 = *(uint *)(lVar16 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar7 < *unaff_x20 + -1) {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar18)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar12 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar16 + unaff_x26),0);
      if ((uVar12 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
          if (uVar7 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + lVar26 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar16 + 0x128),fStack0000000000000104,0,
                       fStack0000000000000084,*(undefined4 *)(lVar16 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar16 = *(long *)puVar8;
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
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar16 + 0x18) <= uVar7)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar21 == 0) goto LAB_0354fbf4;
  uVar15 = *(uint *)(lVar16 + lVar26 * 0x178 + 400);
  fVar34 = (float)FUN_03776a30(lVar21 + 0x50,0);
  if ((uVar15 >> 6 & 1) == 0) {
    if ((uStack0000000000000120 & 1) != 0) {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar18 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar28 = *(undefined4 *)(lVar16 + unaff_x26 + -0x330);
      fVar36 = *(float *)(lVar16 + unaff_x26 + -0x30c);
      pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar17)(fStack00000000000000a0,fStack000000000000009c,uStack0000000000000098,uVar28,
                 fStack00000000000000a8 * fVar34 + fVar36,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    uStack0000000000000120 = 0;
  }
  else {
    lVar16 = *unaff_x22;
    if ((lVar16 == 0) || (lVar20 = *(long *)(lVar16 + 0x38), lVar20 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar20 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(lVar20 + lVar26 * 0x178 + 0x174) = in_stack_000017d4;
    if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar20 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar19 == 0xd) || ((uVar19 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
       ((uStack0000000000000120 & 1) != 0 || !bVar1)) {
LAB_0354ed84:
      if ((uStack0000000000000120 & 1) == 0) goto LAB_0354f250;
    }
    else {
      if (uVar7 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(uVar19,0);
        if ((uVar12 & 1) != 0) goto LAB_0354ed84;
        lVar16 = *unaff_x22;
        if (lVar16 == 0) goto LAB_0354fbf4;
      }
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar16 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar26 * 0x178;
      fStack000000000000004c = *(float *)(lVar16 + 0x60);
      fStack0000000000000040 = *(float *)(lVar16 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar16 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar16 + 0x160);
      fStack000000000000009c = fVar34 * fStack00000000000000a8 + fStack0000000000000040;
      uStack0000000000000098 = 0;
    }
    iVar10 = *unaff_x20;
    if (iVar10 == 1) {
      if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
        uVar15 = *(uint *)(lVar16 + 0x18);
LAB_0354ef0c:
        if (uVar7 < uVar15) {
          lVar16 = lVar16 + lVar26 * 0x178;
          lVar20 = *unaff_x19;
          uVar28 = *(undefined4 *)(lVar16 + 0x128);
          fVar36 = *(float *)(lVar16 + 0x14c);
LAB_0354ef24:
          pcVar17 = *(code **)(lVar20 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar7 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(uVar19,0);
      if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
        uVar15 = *(uint *)(lVar16 + 0x18);
        if (uVar19 == 0x200b || (uVar12 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar20 = lVar26;
        if (uVar7 < uVar15) {
LAB_0354f1f8:
          lVar16 = lVar16 + lVar20 * 0x178;
          fVar36 = *(float *)(lVar16 + 0x14c);
          uVar28 = *(undefined4 *)(lVar16 + 0x128);
          pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar7 < iVar10) {
      lVar16 = *unaff_x22;
      if ((lVar16 != 0) && (lVar20 = *(long *)(lVar16 + 0x38), lVar20 != 0)) {
        if (uVar18 < *(uint *)(lVar20 + 0x18)) {
          if (*(float *)(lVar20 + unaff_x26 + -0x108) == fStack000000000000004c) {
            fVar31 = *(float *)(lVar20 + unaff_x26 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_03567bac(fVar36 + fVar31,fStack0000000000000040,0);
            if ((uVar12 & 1) != 0) {
              iVar10 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar16 = *unaff_x22;
            if (lVar16 == 0) goto LAB_0354fbf4;
          }
          lVar16 = *(long *)(lVar16 + 0x38);
          if (lVar16 != 0) {
            uVar15 = *(uint *)(lVar16 + 0x18);
            if ((int)uVar7 <= (int)uVar6) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar20 = (long)(int)uVar6;
            if (uVar6 < uVar15) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar7 < iVar10) {
      iVar10 = FUN_036d3364(lVar21,0);
      if (*(uint *)(unaff_x25 + 0x18) <= uVar18)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = *(long *)(unaff_x25 + unaff_x26 + -0x130);
      if (lVar16 == 0) goto LAB_0354fbf4;
      iVar11 = FUN_036d3364(lVar16,0);
      if (iVar10 != iVar11) {
        if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
          uVar15 = *(uint *)(lVar16 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
        if (uVar18 - 2 < *(uint *)(lVar16 + 0x18)) {
          lVar20 = *unaff_x19;
          uVar28 = *(undefined4 *)(lVar16 + unaff_x26 + -0x330);
          fVar36 = *(float *)(lVar16 + unaff_x26 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    uStack0000000000000120 = 1;
  }
  if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 == 0)) goto LAB_0354fbf4;
  uVar15 = (uint)*(undefined8 *)(lVar16 + 0x18);
  if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar16 + lVar26 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((uStack0000000000000118 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    uStack0000000000000118 = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar16 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      if ((((uVar19 != 0xd) && ((uVar19 & 0xfffe) != 10)) && ((int)uVar7 <= (int)uVar6)) && (bVar1))
      {
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b97f8(uVar19,0);
          if ((uVar12 & 1) != 0) goto LAB_0354f374;
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *(long *)puVar8;
        }
        if ((*unaff_x22 != 0) && (lVar16 = *(long *)(*unaff_x22 + 0x38), lVar16 != 0)) {
          uVar15 = (uint)*(undefined8 *)(lVar16 + 0x18);
          if (uVar7 < uVar15) {
            lVar20 = *(long *)(lVar20 + 0xb8);
            lVar21 = lVar16 + lVar26 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar21 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar21 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar20 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar20 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar21 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar20 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar20 + 0x15a4);
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
      if (uVar15 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar16 = lVar16 + lVar26 * 0x178;
      fVar34 = *(float *)(lVar16 + 0x128);
      fVar30 = *(float *)(lVar16 + 0x188);
      uVar25 = *(undefined8 *)(lVar16 + 0x17c);
      fVar37 = *(float *)(lVar16 + 0x184);
      uVar29 = *(undefined8 *)(lVar16 + 0x184);
      fVar35 = *(float *)(lVar16 + 0x18c);
      fVar36 = *(float *)(lVar16 + 0x11c);
      fVar31 = *(float *)(lVar16 + 0x148);
      fVar32 = *(float *)(lVar16 + 0x150);
      in_stack_00000188 = uVar25;
      fStack0000000000000190 = fVar37;
      fStack0000000000000194 = fVar30;
      in_stack_00000198 = fVar35;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar12 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar16 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar12 & 1) == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
        }
        fVar34 = fVar34 + (float)in_stack_000017c8;
        fVar36 = fVar36 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar31 = fVar31 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar36 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar36;
        }
        if (fVar32 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar32 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar34) {
          fStack00000000000000d0 = fVar34;
        }
        if (fStack00000000000000d4 <= fVar31) {
          fStack00000000000000d4 = fVar31;
        }
      }
      else {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
        }
        fVar36 = (fVar36 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar32 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar32;
        }
        fVar38 = fStack00000000000000d4;
        if (fStack00000000000000d4 <= fVar31) {
          fVar38 = fVar31;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar36,
                   fVar38,uStack00000000000000c0);
        fStack00000000000000e4 = fVar32 - fVar35;
        fStack00000000000000d0 = fVar34 + fVar37;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar31 + fVar30;
        fStack00000000000000e0 = fVar36;
        in_stack_000017c0 = uVar25;
        in_stack_000017c8 = uVar29;
        in_stack_000017d0 = fVar35;
      }
      if (((*unaff_x20 == 1) || (uVar7 == uVar5)) || (((int)uVar6 <= (int)uVar7 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      uStack0000000000000118 = 1;
    }
  }
  puVar8 = OVRPlugin_Media_TypeInfo;
  unaff_x23 = 0x178;
  iVar10 = *unaff_x20;
  iStack0000000000000124 = iStack0000000000000124 + 1;
  unaff_x26 = unaff_x26 + 0x178;
  bVar1 = iVar10 <= (int)uVar18;
  uVar18 = uVar18 + 1;
  unaff_w28 = uVar2;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar16 = *unaff_x22;
  if (lVar16 != 0) {
    *(int *)(lVar16 + 0x18) = iVar10;
    lVar20 = unaff_x19[0xd4];
    *(uint *)(lVar16 + 0x2c) = uVar2 + 1;
    if (iVar10 < 1 || in_stack_000000d8 == 0) {
      in_stack_000000d8 = 1;
    }
    *(int *)(lVar16 + 0x1c) = (int)lVar20;
    *(int *)(lVar16 + 0x24) = in_stack_000000d8;
    *(int *)(lVar16 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar16 = unaff_x19[0xdb];
    if (lVar16 != 0) {
      (**(code **)(lVar16 + 0x18))
                (*(undefined8 *)(lVar16 + 0x40),*unaff_x22,*(undefined8 *)(lVar16 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar16 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar16 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
        if (*(int *)(lVar16 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
            if (*(int *)(lVar16 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
                if (*(int *)(lVar16 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0)) {
                    if (*(int *)(lVar16 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar16 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar16 = *unaff_x22;
                        if (lVar16 != 0) {
                          lVar26 = 0;
                          lVar20 = 0;
                          do {
                            uVar12 = lVar20 + 1;
                            if ((long)*(int *)(lVar16 + 0x34) <= (long)uVar12) goto LAB_0354d0cc;
                            lVar16 = *(long *)(lVar16 + 0x60);
                            if (lVar16 == 0) break;
                            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar16 + 0x18) <= uVar12)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar16 + lVar26 + 0x70,0);
                            lVar16 = unaff_x19[0xe1];
                            if (lVar16 == 0) break;
                            if (*(uint *)(lVar16 + 0x18) <= uVar12)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar29 = *(undefined8 *)(lVar16 + lVar20 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar13 = FUN_036d35a8(uVar29,0,0);
                            if ((uVar13 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar16 + 0x18) <= uVar12)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar16 + lVar26 + 0x70,1,0);
                              }
                              lVar16 = unaff_x19[0xe1];
                              if (lVar16 == 0) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar16 = *(long *)(lVar16 + lVar20 * 8 + 0x28);
                              if (lVar16 == 0) break;
                              lVar16 = FUN_0359d5ac(lVar16,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar21 = *(long *)(*unaff_x22 + 0x60), lVar21 == 0)) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar16 == 0) break;
                              FUN_036a460c(lVar16,*(undefined8 *)(lVar21 + lVar26 + 0x80),0);
                              lVar16 = unaff_x19[0xe1];
                              if (lVar16 == 0) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar16 = *(long *)(lVar16 + lVar20 * 8 + 0x28);
                              if (lVar16 == 0) break;
                              lVar16 = FUN_0359d5ac(lVar16,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar21 = *(long *)(*unaff_x22 + 0x60), lVar21 == 0)) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar16 == 0) break;
                              FUN_036a4810(lVar16,*(undefined8 *)(lVar21 + lVar26 + 0x98),0);
                              lVar16 = unaff_x19[0xe1];
                              if (lVar16 == 0) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar16 = *(long *)(lVar16 + lVar20 * 8 + 0x28);
                              if (lVar16 == 0) break;
                              lVar16 = FUN_0359d5ac(lVar16,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar21 = *(long *)(*unaff_x22 + 0x60), lVar21 == 0)) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar16 == 0) break;
                              FUN_036a48bc(lVar16,*(undefined8 *)(lVar21 + lVar26 + 0xa0),0);
                              lVar16 = unaff_x19[0xe1];
                              if (lVar16 == 0) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar16 = *(long *)(lVar16 + lVar20 * 8 + 0x28);
                              if (lVar16 == 0) break;
                              lVar16 = FUN_0359d5ac(lVar16,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar21 = *(long *)(*unaff_x22 + 0x60), lVar21 == 0)) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar16 == 0) break;
                              FUN_036a4e24(lVar16,*(undefined8 *)(lVar21 + lVar26 + 0xa8),0);
                              lVar16 = unaff_x19[0xe1];
                              if (lVar16 == 0) break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar12)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar16 = *(long *)(lVar16 + lVar20 * 8 + 0x28);
                              if ((lVar16 == 0) || (lVar16 = FUN_0359d5ac(lVar16,0), lVar16 == 0))
                              break;
                              FUN_036aa280(lVar16,0);
                            }
                            lVar16 = *unaff_x22;
                            lVar20 = lVar20 + 1;
                            lVar26 = lVar26 + 0x50;
                          } while (lVar16 != 0);
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


