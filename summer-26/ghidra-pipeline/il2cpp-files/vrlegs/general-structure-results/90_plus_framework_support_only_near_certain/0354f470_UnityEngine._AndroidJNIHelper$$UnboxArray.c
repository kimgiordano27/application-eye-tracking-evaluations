/*
FUNCTION_NAME: UnityEngine._AndroidJNIHelper$$UnboxArray
ENTRY_POINT: 0354f470
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_17;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_17
*/


void UnityEngine__AndroidJNIHelper__UnboxArray(undefined **param_1,ulong param_2)

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
  long lVar15;
  uint uVar16;
  code *pcVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar22;
  uint uVar23;
  uint unaff_w21;
  long lVar24;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar25;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w28;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float unaff_s8;
  float fVar33;
  float unaff_s9;
  float unaff_s10;
  float fVar34;
  float fVar35;
  float unaff_s11;
  float fVar36;
  float unaff_s12;
  float fVar37;
  float unaff_s13;
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
  undefined8 in_stack_00000118;
  uint in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  float in_stack_00000178;
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
  
code_r0x0354f470:
  lVar14 = *(long *)param_1[0xf6];
  if ((param_2 & 1) == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar14);
    }
    in_stack_00000178 = in_stack_00000178 + (float)in_stack_000017c8;
    fVar34 = unaff_s10 - (float)((ulong)in_stack_000017c0 >> 0x20);
    fVar32 = unaff_s8 + (float)((ulong)in_stack_000017c8 >> 0x20);
    if (fVar34 <= fStack00000000000000e0) {
      fStack00000000000000e0 = fVar34;
    }
    if (unaff_s11 - in_stack_000017d0 <= fStack00000000000000e4) {
      fStack00000000000000e4 = unaff_s11 - in_stack_000017d0;
    }
    if (fStack00000000000000d0 <= in_stack_00000178) {
      fStack00000000000000d0 = in_stack_00000178;
    }
    if (fStack00000000000000d4 <= fVar32) {
      fStack00000000000000d4 = fVar32;
    }
  }
  else {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar14);
    }
    fVar34 = (unaff_s10 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
    if (unaff_s11 <= fStack00000000000000e4) {
      fStack00000000000000e4 = unaff_s11;
    }
    if (fStack00000000000000d4 <= unaff_s8) {
      fStack00000000000000d4 = unaff_s8;
    }
    (**(code **)(*unaff_x19 + 0x8e8))
              (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar34,
               fStack00000000000000d4,uStack00000000000000c0);
    fStack00000000000000e4 = unaff_s11 - unaff_s13;
    in_stack_000017c8 = CONCAT44(unaff_s12,unaff_s14);
    fStack00000000000000d0 = in_stack_00000178 + unaff_s14;
    uStack00000000000000c0 = 0;
    fStack00000000000000d4 = unaff_s8 + unaff_s12;
    fStack00000000000000e0 = fVar34;
    in_stack_000017c0 = unaff_x23;
    in_stack_000017d0 = unaff_s13;
  }
  if ((((*unaff_x20 == 1) || (unaff_w24 == (uint)in_stack_000000e8)) ||
      ((int)in_stack_00000128 <= (int)unaff_w24)) || ((unaff_w21 & 1) == 0)) {
    (**(code **)(*unaff_x19 + 0x8e8))
              (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
               fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    goto LAB_0354f604;
  }
  bVar6 = true;
  unaff_w24 = in_stack_00000170;
  uVar16 = in_stack_00000180;
LAB_0354f608:
  puVar7 = OVRPlugin_Media_TypeInfo;
  iVar9 = *unaff_x20;
  unaff_w28 = unaff_w28 + 1;
  in_stack_00000170 = unaff_w24 + 1;
  unaff_x26 = unaff_x26 + 0x178;
  if (iVar9 <= (int)unaff_w24) {
    lVar14 = *unaff_x22;
    if (lVar14 == 0) goto LAB_0354fbf4;
    *(int *)(lVar14 + 0x18) = iVar9;
    lVar25 = unaff_x19[0xd4];
    *(uint *)(lVar14 + 0x2c) = uVar16 + 1;
    if (iVar9 < 1 || in_stack_000000d8 == 0) {
      in_stack_000000d8 = 1;
    }
    *(int *)(lVar14 + 0x1c) = (int)lVar25;
    *(int *)(lVar14 + 0x24) = in_stack_000000d8;
    *(int *)(lVar14 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_0354d0cc;
    lVar14 = unaff_x19[0xdb];
    if (lVar14 != 0) {
      (**(code **)(lVar14 + 0x18))
                (*(undefined8 *)(lVar14 + 0x40),*unaff_x22,*(undefined8 *)(lVar14 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar14 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar14 + 0x20,1,0);
    }
    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(lVar14 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
    FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x30),0);
    if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(lVar14 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
    FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x48),0);
    if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(lVar14 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
    FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x50),0);
    if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(lVar14 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x58),0);
    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
    FUN_036aa280(unaff_x19[0x74],0);
    lVar14 = *unaff_x22;
    if (lVar14 == 0) goto LAB_0354fbf4;
    lVar24 = 0;
    lVar25 = 0;
    goto LAB_0354f97c;
  }
  if (*(uint *)(unaff_x25 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x50), lVar14 == 0)) goto LAB_0354fbf4;
  lVar24 = (long)(int)unaff_w24;
  lVar25 = unaff_x25 + lVar24 * 0x178;
  in_stack_00000180 = *(uint *)(lVar25 + 100);
  if (*(uint *)(lVar14 + 0x18) <= in_stack_00000180)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar15 = *(long *)(lVar25 + 0x38);
  lVar21 = (long)(int)in_stack_00000180;
  lVar14 = lVar14 + lVar21 * 0x5c;
  uVar23 = *(uint *)(lVar14 + 0x68);
  uVar18 = (uint)*(ushort *)(lVar25 + 0x20);
  uVar4 = *(uint *)(lVar14 + 0x3c);
  in_stack_000000e8 = (long)(int)uVar4;
  iVar2 = *(int *)(lVar14 + 0x20);
  iVar9 = *(int *)(lVar14 + 0x28);
  iVar10 = *(int *)(lVar14 + 0x2c);
  fVar29 = *(float *)(lVar14 + 0x4c);
  uVar5 = *(uint *)(lVar14 + 0x40);
  in_stack_00000128 = (long)(int)uVar5;
  fVar28 = *(float *)(lVar14 + 0x54);
  fVar34 = *(float *)(lVar14 + 0x58);
  fVar35 = *(float *)(lVar14 + 0x5c);
  fVar36 = *(float *)(lVar14 + 0x60);
  fVar33 = *(float *)(lVar14 + 0x6c);
  fVar37 = *(float *)(lVar14 + 0x70);
  fVar32 = *(float *)(lVar14 + 0x74);
  fVar30 = *(float *)(lVar14 + 0x78);
  if ((int)uVar23 < 9) {
    switch(uVar23) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar36 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar34;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar36 + fVar35 * 0.5) - fVar34 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar35 + fVar36) - fVar34;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar35 + fVar36;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    in_stack_000000f0 = 0;
  }
  else if (uVar23 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar18 < 0xad) {
      if ((uVar18 != 3) && (uVar18 != 10)) {
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
        if ((fVar34 <= fVar35) && (!bVar1 && uVar23 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar36;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar35 + fVar36;
          }
          goto LAB_0354d9d8;
        }
        if (((in_stack_00000170 == 1) || (in_stack_00000180 != uVar16)) ||
           (unaff_w24 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar36;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar35 + fVar36;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000030 = FUN_026b97f8(uVar18,0);
          in_stack_000000f0 = 0;
        }
        else {
          cVar13 = (char)unaff_x19[0x1e];
          fVar36 = -fVar34;
          if (cVar13 != '\0') {
            fVar36 = fVar34;
          }
          if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar4)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iVar10 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000030 & 1)) + iVar10 + -1;
          if (iVar10 < 1) {
            fVar34 = 1.0;
            iVar10 = 1;
          }
          else {
            fVar34 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar18 == 9) {
LAB_0354f76c:
            fVar34 = 1.0 - fVar34;
          }
          else {
            if (uVar18 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b97f8(uVar18,0);
              cVar13 = (char)unaff_x19[0x1e];
              if ((uVar11 & 1) != 0) goto LAB_0354f76c;
            }
            iVar10 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar9;
          }
          fVar34 = ((fVar35 + fVar36) * fVar34) / (float)iVar10;
          if (cVar13 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar34;
            in_stack_000000f0 =
                 CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                          (float)in_stack_000000f0 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar34;
          }
        }
      }
    }
    else if (((uVar18 != 0xad) && (uVar18 != 0x200b)) && (uVar18 != 0x2060)) goto FUN_0354d8fc;
  }
  else if (uVar23 == 0x20) {
    fVar34 = fVar33 + fVar32;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar23 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
  if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar14 = in_stack_000000c8 + lVar24 * 0x178;
  fVar36 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar34 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
  fVar35 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
  if (*(char *)(lVar14 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar9 = *(int *)(in_stack_000000c8 + lVar24 * 0x178 + 0x2c);
  if (iVar9 != 0) goto LAB_0354e05c;
  fVar26 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar25 = in_stack_000000c8 + lVar24 * 0x178;
    *(undefined4 *)(lVar25 + 0x84) = 0;
    *(undefined4 *)(lVar25 + 0xac) = 0;
    *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
    fVar26 = 1.0;
    break;
  case 1:
    fVar30 = *(float *)(in_stack_000000c8 + lVar24 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar25 = in_stack_000000c8 + lVar24 * 0x178;
      fVar32 = (in_stack_000000f8._4_4_ + fVar30) - *(float *)(in_stack_00000078 + 0x230);
      fVar30 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar25 = in_stack_000000c8 + lVar24 * 0x178;
    fVar32 = fVar32 - fVar33;
    *(float *)(lVar25 + 0x84) = fVar26 + (fVar30 - fVar33) / fVar32;
    *(float *)(lVar25 + 0xac) = fVar26 + (*(float *)(lVar25 + 0x98) - fVar33) / fVar32;
    *(float *)(lVar25 + 0xd4) = fVar26 + (*(float *)(lVar25 + 0xc0) - fVar33) / fVar32;
    fVar26 = fVar26 + (*(float *)(lVar25 + 0xe8) - fVar33) / fVar32;
    break;
  case 2:
    lVar25 = in_stack_000000c8 + lVar24 * 0x178;
    fVar30 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar32 = (in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar25 + 0x84) = fVar26 + fVar32 / fVar30;
    *(float *)(lVar25 + 0xac) =
         fVar26 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar25 + 0xd4) =
         fVar26 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar26 = fVar26 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar25 = in_stack_000000c8 + lVar24 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0;
      *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar25 = in_stack_000000c8 + lVar24 * 0x178;
      fVar30 = fVar30 - fVar37;
      fVar32 = fVar26 + (*(float *)(lVar25 + 0x74) - fVar37) / fVar30;
      fVar30 = fVar26 + (*(float *)(lVar25 + 0x9c) - fVar37) / fVar30;
      *(float *)(lVar25 + 0x88) = fVar32;
      *(float *)(lVar25 + 0xb0) = fVar30;
      *(float *)(lVar25 + 0xd8) = fVar32;
      *(float *)(lVar25 + 0x100) = fVar30;
      break;
    case 2:
      lVar25 = in_stack_000000c8 + lVar24 * 0x178;
      fVar32 = fVar26 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar25 + 0x88) = fVar32;
      fVar30 = *(float *)(unaff_x19 + 0x9c);
      fVar33 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar25 + 0xd8) = fVar32;
      fVar32 = fVar26 + (*(float *)(lVar25 + 0x9c) - fVar30) / (fVar33 - fVar30);
      *(float *)(lVar25 + 0xb0) = fVar32;
      *(float *)(lVar25 + 0x100) = fVar32;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar23 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    }
    if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = in_stack_000000c8 + lVar24 * 0x178;
    fVar32 = *(float *)(lVar25 + 0x15c);
    fVar30 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar32) * 0.5;
    fVar33 = fVar26 + *(float *)(lVar25 + 0x88) * fVar32 + fVar30;
    fVar26 = fVar26 + fVar30 + *(float *)(lVar25 + 0xb0) * fVar32;
    *(float *)(lVar25 + 0x84) = fVar33;
    *(float *)(lVar25 + 0xac) = fVar33;
    *(float *)(lVar25 + 0xd4) = fVar26;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(in_stack_000000c8 + lVar24 * 0x178 + 0xfc) = fVar26;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = in_stack_000000c8 + lVar24 * 0x178;
    *(undefined4 *)(lVar25 + 0x88) = 0;
    *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w24 < uVar23) {
      lVar25 = in_stack_000000c8 + lVar24 * 0x178;
      fVar29 = fVar29 - fVar28;
      fVar32 = (*(float *)(lVar25 + 0x74) - fVar28) / fVar29;
      fVar29 = (*(float *)(lVar25 + 0x9c) - fVar28) / fVar29;
      *(float *)(lVar25 + 0x88) = fVar32;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = in_stack_000000c8 + lVar24 * 0x178;
    fVar32 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar25 + 0x88) = fVar32;
    fVar29 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar25 + 0xb0) = fVar29;
    *(float *)(lVar25 + 0xd8) = fVar29;
    *(float *)(lVar25 + 0x100) = fVar32;
    break;
  case 3:
    if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = in_stack_000000c8 + lVar24 * 0x178;
    fVar30 = *(float *)(lVar25 + 0x15c);
    fVar29 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar30) * 0.5;
    fVar32 = *(float *)(lVar25 + 0x84) / fVar30 + fVar29;
    fVar29 = fVar29 + *(float *)(lVar25 + 0xd4) / fVar30;
    *(float *)(lVar25 + 0x88) = fVar32;
    *(float *)(lVar25 + 0xb0) = fVar29;
    *(float *)(lVar25 + 0x100) = fVar32;
    *(float *)(lVar25 + 0xd8) = fVar29;
  }
  if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = in_stack_000000c8 + lVar24 * 0x178;
  unaff_s9 = fStack0000000000000058 * *(float *)(lVar25 + 0x160) *
             (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar25 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000c8 + lVar24 * 0x178 + 400) & 1) != 0)) {
    unaff_s9 = -unaff_s9;
  }
  lVar25 = in_stack_000000c8 + lVar24 * 0x178;
  fVar29 = *(float *)(lVar25 + 0x88);
  fVar30 = *(float *)(lVar25 + 0x84);
  fVar32 = -2.1474836e+09;
  if (fVar30 != INFINITY) {
    fVar32 = (float)(int)fVar30;
  }
  fVar33 = *(float *)(lVar25 + 0xd4);
  fVar37 = *(float *)(lVar25 + 0xd8);
  fVar28 = -2.1474836e+09;
  if (fVar29 != INFINITY) {
    fVar28 = (float)(int)fVar29;
  }
  uVar27 = FUN_03591d3c(fVar30 - fVar32,fVar29 - fVar28);
  *(undefined4 *)(lVar25 + 0x84) = uVar27;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar37 = fVar37 - fVar28;
  *(float *)(lVar25 + 0x88) = unaff_s9;
  uVar27 = FUN_03591d3c(fVar30 - fVar32,fVar37);
  *(undefined4 *)(in_stack_000000c8 + lVar24 * 0x178 + 0xac) = uVar27;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar33 = fVar33 - fVar32;
  *(float *)(in_stack_000000c8 + lVar24 * 0x178 + 0xb0) = unaff_s9;
  fVar32 = (float)FUN_03591d3c(fVar33,fVar37);
  *(float *)(lVar25 + 0xd4) = fVar32;
  if (*(uint *)(in_stack_000000c8 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar25 + 0xd8) = unaff_s9;
  uVar27 = FUN_03591d3c(fVar33,fVar29 - fVar28);
  *(undefined4 *)(in_stack_000000c8 + lVar24 * 0x178 + 0xfc) = uVar27;
  uVar23 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
  if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(in_stack_000000c8 + lVar24 * 0x178 + 0x100) = unaff_s9;
  unaff_x22 = in_stack_00000050;
LAB_0354e05c:
  if (((int)unaff_w24 < (int)unaff_x19[0x65]) &&
     (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar14 = in_stack_000000c8 + lVar24 * 0x178;
      *(ulong *)(lVar14 + 0x70) =
           CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar14 + 0x70) >> 0x20),
                    fVar36 + (float)*(undefined8 *)(lVar14 + 0x70));
      *(float *)(lVar14 + 0x78) = fVar35 + *(float *)(lVar14 + 0x78);
      *(ulong *)(lVar14 + 0x98) =
           CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar14 + 0x98) >> 0x20),
                    fVar36 + (float)*(undefined8 *)(lVar14 + 0x98));
      *(float *)(lVar14 + 0xa0) = fVar35 + *(float *)(lVar14 + 0xa0);
      *(ulong *)(lVar14 + 0xc0) =
           CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar14 + 0xc0) >> 0x20),
                    fVar36 + (float)*(undefined8 *)(lVar14 + 0xc0));
      *(float *)(lVar14 + 200) = fVar35 + *(float *)(lVar14 + 200);
      *(ulong *)(lVar14 + 0xe8) =
           CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar14 + 0xe8) >> 0x20),
                    fVar36 + (float)*(undefined8 *)(lVar14 + 0xe8));
      *(float *)(lVar14 + 0xf0) = fVar35 + *(float *)(lVar14 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w24 < uVar23) {
        if (*(int *)(in_stack_000000c8 + lVar24 * 0x178 + 0x68) == iStack0000000000000034)
        goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar23 = *(uint *)(in_stack_000000c8 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar25 = in_stack_000000c8 + lVar24 * 0x178;
  *(undefined8 *)(lVar25 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar25 + 0x78) = uVar27;
  if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar25 = in_stack_000000c8 + lVar24 * 0x178;
  *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 0xa0) = uVar27;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 200) = uVar27;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 0xf0) = uVar27;
  *(undefined1 *)(lVar14 + 0x194) = 0;
LAB_0354e184:
  if (iVar9 == 0) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar17)();
  }
  else if (iVar9 == 1) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar14 = lVar14 + lVar24 * 0x178;
  uVar22 = *(undefined8 *)(lVar14 + 0x11c);
  *(undefined8 *)(lVar14 + 0x11c) =
       CONCAT44(fVar34 + (float)((ulong)uVar22 >> 0x20),fVar36 + (float)uVar22);
  *(float *)(lVar14 + 0x124) = fVar35 + *(float *)(lVar14 + 0x124);
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar14 = lVar14 + lVar24 * 0x178;
  *(ulong *)(lVar14 + 0x110) =
       CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar14 + 0x110) >> 0x20),
                fVar36 + (float)*(undefined8 *)(lVar14 + 0x110));
  *(float *)(lVar14 + 0x118) = fVar35 + *(float *)(lVar14 + 0x118);
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar14 = lVar14 + lVar24 * 0x178;
  *(ulong *)(lVar14 + 0x128) =
       CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar14 + 0x128) >> 0x20),
                fVar36 + (float)*(undefined8 *)(lVar14 + 0x128));
  *(float *)(lVar14 + 0x130) = fVar35 + *(float *)(lVar14 + 0x130);
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar14 = lVar14 + lVar24 * 0x178;
  *(float *)(lVar14 + 0x134) = fVar36 + *(float *)(lVar14 + 0x134);
  *(ulong *)(lVar14 + 0x138) =
       CONCAT44(fVar35 + (float)((ulong)*(undefined8 *)(lVar14 + 0x138) >> 0x20),
                fVar34 + (float)*(undefined8 *)(lVar14 + 0x138));
  lVar14 = *unaff_x22;
  if ((lVar14 == 0) || (lVar25 = *(long *)(lVar14 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  uVar23 = *(uint *)(lVar25 + 0x18);
  if (uVar23 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar19 = lVar25 + lVar24 * 0x178;
  *(float *)(lVar19 + 0x150) = fVar34 + *(float *)(lVar19 + 0x150);
  *(ulong *)(lVar19 + 0x140) =
       CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar19 + 0x140) >> 0x20),
                fVar36 + (float)*(undefined8 *)(lVar19 + 0x140));
  *(ulong *)(lVar19 + 0x148) =
       CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar19 + 0x148) >> 0x20),
                fVar34 + (float)*(undefined8 *)(lVar19 + 0x148));
  if (in_stack_00000180 == uVar16) {
    uVar16 = *in_stack_00000090 - 1;
    if (unaff_w24 == uVar16) goto LAB_0354e3ec;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x50);
    if (lVar14 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar14 + 0x18) <= uVar16)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = (long)(int)uVar16;
    lVar20 = lVar14 + lVar19 * 0x5c;
    fVar32 = fVar34 + *(float *)(lVar20 + 0x54);
    *(ulong *)(lVar20 + 0x4c) =
         CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                  fVar34 + (float)*(undefined8 *)(lVar20 + 0x4c));
    *(float *)(lVar20 + 0x54) = fVar32;
    *(float *)(lVar20 + 0x58) = fVar36 + *(float *)(lVar20 + 0x58);
    if (uVar23 <= *(uint *)(lVar20 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar27 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
    lVar14 = lVar14 + lVar19 * 0x5c;
    *(float *)(lVar14 + 0x70) = fVar32;
    *(undefined4 *)(lVar14 + 0x6c) = uVar27;
    lVar14 = *unaff_x22;
    if ((lVar14 == 0) || (lVar25 = *(long *)(lVar14 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= uVar16)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = *(long *)(lVar14 + 0x38);
    if (lVar14 == 0) goto LAB_0354fbf4;
    uVar16 = *(uint *)(lVar25 + lVar19 * 0x5c + 0x40);
    if (*(uint *)(lVar14 + 0x18) <= uVar16)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = lVar25 + lVar19 * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar14 + (long)(int)uVar16 * 0x178 + 0x128);
    *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    uVar16 = *in_stack_00000090 - 1;
LAB_0354e3ec:
    if (unaff_w24 == uVar16) {
      lVar14 = *unaff_x22;
      if ((lVar14 == 0) || (lVar25 = *(long *)(lVar14 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = lVar25 + lVar21 * 0x5c;
      fVar32 = fVar34 + *(float *)(lVar19 + 0x54);
      *(ulong *)(lVar19 + 0x4c) =
           CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                    fVar34 + (float)*(undefined8 *)(lVar19 + 0x4c));
      *(float *)(lVar19 + 0x54) = fVar32;
      *(float *)(lVar19 + 0x58) = fVar36 + *(float *)(lVar19 + 0x58);
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar19 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar27 = *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar21 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar32;
      *(undefined4 *)(lVar25 + 0x6c) = uVar27;
      lVar14 = *unaff_x22;
      if ((lVar14 == 0) || (lVar25 = *(long *)(lVar14 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_0354fbf4;
      uVar16 = *(uint *)(lVar25 + lVar21 * 0x5c + 0x40);
      if (*(uint *)(lVar14 + 0x18) <= uVar16)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + lVar21 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar14 + (long)(int)uVar16 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_026b82c4(uVar18,0);
  if (((((uVar11 & 1) == 0) && (1 < uVar18 - 0x2010)) && (uVar18 != 0xad)) && (uVar18 != 0x2d)) {
    if ((in_stack_00000118._4_4_ & 1) == 0) {
      if (in_stack_00000170 != 1) {
LAB_0354f144:
        in_stack_00000118._4_4_ = 0;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b81f8(uVar18,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b63d8(uVar18,0);
        if (((uVar18 != 0x200b) && ((uVar11 & 1) == 0)) && (*in_stack_00000090 != 1))
        goto LAB_0354f144;
      }
    }
    else if (((in_stack_00000170 != 1) &&
             ((int)unaff_w24 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1))) &&
            (((int)unaff_w24 < *in_stack_00000090 && ((uVar18 == 0x2019 || (uVar18 == 0x27)))))) {
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
      uVar11 = FUN_026b82c4(uVar18,0);
      iVar9 = unaff_w28;
      if ((uVar11 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar9 = unaff_w24 - 1;
    }
    lVar14 = *unaff_x22;
    if (lVar14 == 0) goto LAB_0354fbf4;
    lVar25 = *(long *)(lVar14 + 0x40);
    if (lVar25 == 0) goto LAB_0354fbf4;
    uVar16 = *(uint *)(lVar14 + 0x24);
    iVar10 = *(int *)(lVar25 + 0x18);
    if (iVar10 < (int)(uVar16 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar14 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar14 = *unaff_x22;
      if (lVar14 == 0) goto LAB_0354fbf4;
    }
    lVar14 = *(long *)(lVar14 + 0x40);
    if (lVar14 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar14 + 0x18) <= uVar16)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar14 = lVar14 + (long)(int)uVar16 * 0x18;
    *(long **)(lVar14 + 0x20) = unaff_x19;
    *(uint *)(lVar14 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar14 + 0x2c) = iVar9;
    *(uint *)(lVar14 + 0x30) = (iVar9 - in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar14 = unaff_x19[0x6d];
    if (lVar14 == 0) goto LAB_0354fbf4;
    lVar25 = *(long *)(lVar14 + 0x50);
    *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
    if (lVar25 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= in_stack_00000180)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = lVar25 + lVar21 * 0x5c;
    in_stack_00000118._4_4_ = 0;
    in_stack_000000d8 = in_stack_000000d8 + 1;
    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
  }
  else {
    if ((in_stack_00000118._4_4_ & 1) == 0) {
      in_stack_00000168._4_4_ = unaff_w24;
    }
    if (unaff_w24 == *in_stack_00000090 - 1U) {
      lVar14 = *unaff_x22;
      if (lVar14 == 0) goto LAB_0354fbf4;
      lVar25 = *(long *)(lVar14 + 0x40);
      if (lVar25 == 0) goto LAB_0354fbf4;
      uVar16 = *(uint *)(lVar14 + 0x24);
      iVar9 = *(int *)(lVar25 + 0x18);
      if (iVar9 < (int)(uVar16 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar14 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar14 = *unaff_x22;
        if (lVar14 == 0) goto LAB_0354fbf4;
      }
      lVar14 = *(long *)(lVar14 + 0x40);
      if (lVar14 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= uVar16)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = lVar14 + (long)(int)uVar16 * 0x18;
      *(long **)(lVar14 + 0x20) = unaff_x19;
      *(uint *)(lVar14 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar14 + 0x2c) = unaff_w24;
      *(uint *)(lVar14 + 0x30) = in_stack_00000170 - in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar14 = unaff_x19[0x6d];
      if (lVar14 == 0) goto LAB_0354fbf4;
      lVar25 = *(long *)(lVar14 + 0x50);
      *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000180)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + lVar21 * 0x5c;
      in_stack_000000d8 = in_stack_000000d8 + 1;
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
LAB_0354e610:
    in_stack_00000118._4_4_ = 1;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  uVar16 = *(uint *)(lVar14 + 0x18);
  if (uVar16 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar14 + lVar24 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
      in_stack_00000130._4_4_ = 0;
    }
    else {
LAB_0354e660:
      if (uVar16 <= unaff_w24 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = *unaff_x19;
      uVar27 = *(undefined4 *)(lVar14 + unaff_x26 + -0x330);
      uVar31 = *(undefined4 *)(lVar14 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
      pcVar17 = *(code **)(lVar25 + 0x8d8);
LAB_0354ebc8:
      (*pcVar17)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar27,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar31);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)puVar7;
      }
LAB_0354ec1c:
      unaff_s15 = 0.0;
      in_stack_00000130._4_4_ = 0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar14 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar14 = lVar14 + lVar24 * 0x178;
    iVar9 = *(int *)(lVar14 + 0x68);
    *(undefined4 *)(lVar14 + 0x16c) = in_stack_000017d4;
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
    uVar11 = FUN_026b63d8(uVar18,0);
    if ((uVar18 != 0x200b) && ((uVar11 & 1) == 0)) {
      lVar14 = *unaff_x22;
      if ((lVar14 == 0) || (lVar25 = *(long *)(lVar14 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar32 = *(float *)(lVar25 + lVar24 * 0x178 + 0x160);
      if (unaff_s15 <= fVar32) {
        unaff_s15 = fVar32;
      }
      if (fStack0000000000000100 <= ABS(unaff_s9)) {
        fStack0000000000000100 = ABS(unaff_s9);
      }
      if (iVar9 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *unaff_x22;
          if (lVar14 == 0) goto LAB_0354fbf4;
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar25 + 0x15a8);
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar29 = *(float *)(lVar14 + lVar24 * 0x178 + 0x14c);
      fVar32 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar29 = fVar29 + unaff_s15 * fVar32;
      iStack000000000000005c = iVar9;
      if (fVar29 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar29;
      }
    }
    if ((in_stack_00000130._4_4_ & 1) == 0) {
      in_stack_00000130._4_4_ = 0;
      if ((((uVar18 == 0xd) || ((uVar18 & 0xfffe) == 10)) || ((int)uVar5 < (int)unaff_w24)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (unaff_w24 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b97f8(uVar18,0);
        if ((uVar11 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = lVar14 + lVar24 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar14 + 0x160);
      in_stack_00000070 = *(undefined4 *)(lVar14 + 0x11c);
      bVar8 = unaff_s15 != 0.0;
      fVar32 = in_stack_00000080._4_4_;
      if (bVar8) {
        fVar32 = unaff_s15;
      }
      unaff_s15 = fVar32;
      in_stack_00000088 = *(undefined4 *)(lVar14 + 0x168);
      uStack000000000000006c = 0;
      fVar32 = unaff_s9;
      if (bVar8) {
        fVar32 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar32;
    }
    if (*in_stack_00000090 == 1) {
      if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
        if (unaff_w24 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + lVar24 * 0x178;
          lVar25 = *unaff_x19;
          uVar27 = *(undefined4 *)(lVar14 + 0x128);
          uVar31 = *(undefined4 *)(lVar14 + 0x160);
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
      uVar11 = FUN_026b63d8(uVar18,0);
      if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
        lVar25 = lVar24;
        uVar16 = unaff_w24;
        if (uVar18 == 0x200b || (uVar11 & 1) != 0) {
          lVar25 = in_stack_00000128;
          uVar16 = uVar5;
        }
        if (uVar16 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + lVar25 * 0x178;
          uVar27 = *(undefined4 *)(lVar14 + 0x128);
          uVar31 = *(undefined4 *)(lVar14 + 0x160);
          pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
        uVar16 = *(uint *)(lVar14 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)unaff_w24 < *in_stack_00000090 + -1) {
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar11 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar14 + unaff_x26),0);
      if ((uVar11 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
          if (unaff_w24 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + lVar24 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar14 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar14 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)puVar7;
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
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar15 == 0) goto LAB_0354fbf4;
  uVar16 = *(uint *)(lVar14 + lVar24 * 0x178 + 400);
  fVar32 = (float)FUN_03776a30(lVar15 + 0x50,0);
  if ((uVar16 >> 6 & 1) == 0) {
    if ((in_stack_00000120 & 1) != 0) {
      if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w24 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar27 = *(undefined4 *)(lVar14 + unaff_x26 + -0x330);
      fVar34 = *(float *)(lVar14 + unaff_x26 + -0x30c);
      pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar17)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar27,
                 in_stack_000000a8 * fVar32 + fVar34,0,in_stack_000000a8,in_stack_000000a8);
    }
LAB_0354f250:
    in_stack_00000120 = 0;
  }
  else {
    lVar14 = *unaff_x22;
    if ((lVar14 == 0) || (lVar25 = *(long *)(lVar14 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= unaff_w24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(lVar25 + lVar24 * 0x178 + 0x174) = in_stack_000017d4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)in_stack_00000180))
       || (((int)unaff_x19[0x5c] == 5 &&
           (*(int *)(lVar25 + lVar24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar18 == 0xd) || ((uVar18 & 0xfffe) == 10)) || ((int)uVar5 < (int)unaff_w24)) ||
       ((in_stack_00000120 & 1) != 0 || !bVar1)) {
LAB_0354ed84:
      if ((in_stack_00000120 & 1) == 0) goto LAB_0354f250;
    }
    else {
      if (unaff_w24 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b97f8(uVar18,0);
        if ((uVar11 & 1) != 0) goto LAB_0354ed84;
        lVar14 = *unaff_x22;
        if (lVar14 == 0) goto LAB_0354fbf4;
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = lVar14 + lVar24 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar14 + 0x60);
      in_stack_00000040 = *(float *)(lVar14 + 0x14c);
      in_stack_000000a0 = *(undefined4 *)(lVar14 + 0x11c);
      in_stack_000000a8 = *(float *)(lVar14 + 0x160);
      fStack000000000000009c = fVar32 * in_stack_000000a8 + in_stack_00000040;
      uStack0000000000000098 = 0;
    }
    iVar9 = *in_stack_00000090;
    if (iVar9 == 1) {
      if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
        uVar16 = *(uint *)(lVar14 + 0x18);
LAB_0354ef0c:
        if (unaff_w24 < uVar16) {
          lVar14 = lVar14 + lVar24 * 0x178;
          lVar25 = *unaff_x19;
          uVar27 = *(undefined4 *)(lVar14 + 0x128);
          fVar34 = *(float *)(lVar14 + 0x14c);
LAB_0354ef24:
          pcVar17 = *(code **)(lVar25 + 0x8d8);
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
      uVar11 = FUN_026b63d8(uVar18,0);
      if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
        uVar16 = *(uint *)(lVar14 + 0x18);
        if (uVar18 == 0x200b || (uVar11 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar25 = lVar24;
        if (unaff_w24 < uVar16) {
LAB_0354f1f8:
          lVar14 = lVar14 + lVar25 * 0x178;
          fVar34 = *(float *)(lVar14 + 0x14c);
          uVar27 = *(undefined4 *)(lVar14 + 0x128);
          pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)unaff_w24 < iVar9) {
      lVar14 = *unaff_x22;
      if ((lVar14 != 0) && (lVar25 = *(long *)(lVar14 + 0x38), lVar25 != 0)) {
        if (in_stack_00000170 < *(uint *)(lVar25 + 0x18)) {
          if (*(float *)(lVar25 + unaff_x26 + -0x108) == in_stack_00000048._4_4_) {
            fVar29 = *(float *)(lVar25 + unaff_x26 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_03567bac(fVar34 + fVar29,in_stack_00000040,0);
            if ((uVar11 & 1) != 0) {
              iVar9 = *in_stack_00000090;
              goto LAB_0354f010;
            }
            lVar14 = *unaff_x22;
            if (lVar14 == 0) goto LAB_0354fbf4;
          }
          lVar14 = *(long *)(lVar14 + 0x38);
          if (lVar14 != 0) {
            uVar16 = *(uint *)(lVar14 + 0x18);
            if ((int)unaff_w24 <= (int)uVar5) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar25 = in_stack_00000128;
            if (uVar5 < uVar16) goto LAB_0354f1f8;
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
      iVar9 = FUN_036d3364(lVar15,0);
      if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *(long *)(in_stack_000000c8 + unaff_x26 + -0x130);
      if (lVar14 == 0) goto LAB_0354fbf4;
      iVar10 = FUN_036d3364(lVar14,0);
      if (iVar9 != iVar10) {
        if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
          uVar16 = *(uint *)(lVar14 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 != 0)) {
        if (unaff_w24 - 1 < *(uint *)(lVar14 + 0x18)) {
          lVar25 = *unaff_x19;
          uVar27 = *(undefined4 *)(lVar14 + unaff_x26 + -0x330);
          fVar34 = *(float *)(lVar14 + unaff_x26 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    in_stack_00000120 = 1;
  }
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  uVar16 = (uint)*(undefined8 *)(lVar14 + 0x18);
  if (uVar16 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  unaff_x20 = in_stack_00000090;
  unaff_x25 = in_stack_000000c8;
  if ((*(byte *)(lVar14 + lVar24 * 0x178 + 0x191) >> 1 & 1) != 0) {
    if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)in_stack_00000180))
       || (((int)unaff_x19[0x5c] == 5 &&
           (*(int *)(lVar14 + lVar24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      unaff_w21 = 0;
    }
    else {
      unaff_w21 = 1;
    }
    if (bVar6) goto LAB_0354f400;
    if ((((uVar18 != 0xd) && ((uVar18 & 0xfffe) != 10)) && ((int)unaff_w24 <= (int)uVar5)) &&
       (unaff_w21 == 1)) {
      if (unaff_w24 != uVar5) goto LAB_0354f380;
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b97f8(uVar18,0);
      if ((uVar11 & 1) == 0) goto LAB_0354f380;
    }
    bVar6 = false;
    unaff_w24 = in_stack_00000170;
    uVar16 = in_stack_00000180;
    goto LAB_0354f608;
  }
  if (bVar6) {
    (**(code **)(*unaff_x19 + 0x8e8))
              (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
               fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
  }
LAB_0354f604:
  bVar6 = false;
  unaff_w24 = in_stack_00000170;
  uVar16 = in_stack_00000180;
  goto LAB_0354f608;
LAB_0354f380:
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar25 = *(long *)puVar7;
  }
  if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x38), lVar14 == 0)) goto LAB_0354fbf4;
  uVar16 = (uint)*(undefined8 *)(lVar14 + 0x18);
  if (uVar16 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = *(long *)(lVar25 + 0xb8);
  lVar15 = lVar14 + lVar24 * 0x178;
  in_stack_000017c8 = *(undefined8 *)(lVar15 + 0x184);
  in_stack_000017c0 = *(undefined8 *)(lVar15 + 0x17c);
  fStack00000000000000e0 = *(float *)(lVar25 + 0x1598);
  fStack00000000000000e4 = *(float *)(lVar25 + 0x159c);
  in_stack_000017d0 = *(float *)(lVar15 + 0x18c);
  fStack00000000000000d0 = *(float *)(lVar25 + 0x15a0);
  fStack00000000000000d4 = *(float *)(lVar25 + 0x15a4);
  uStack00000000000000c0 = 0;
LAB_0354f400:
  if (uVar16 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar14 = lVar14 + lVar24 * 0x178;
  in_stack_00000178 = *(float *)(lVar14 + 0x128);
  unaff_s12 = *(float *)(lVar14 + 0x188);
  unaff_x23 = *(undefined8 *)(lVar14 + 0x17c);
  unaff_s14 = *(float *)(lVar14 + 0x184);
  unaff_s13 = *(float *)(lVar14 + 0x18c);
  unaff_s10 = *(float *)(lVar14 + 0x11c);
  unaff_s8 = *(float *)(lVar14 + 0x148);
  unaff_s11 = *(float *)(lVar14 + 0x150);
  in_stack_00000188 = unaff_x23;
  fStack0000000000000190 = unaff_s14;
  fStack0000000000000194 = unaff_s12;
  in_stack_00000198 = unaff_s13;
  in_stack_000001a0 = in_stack_000017c0;
  in_stack_000001a8 = in_stack_000017c8;
  in_stack_000001b0 = in_stack_000017d0;
  param_2 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
  param_1 = &Photon_Realtime_MonoBehaviourEmpty_<>c__DisplayClass6_0_TypeInfo;
  goto code_r0x0354f470;
  while( true ) {
    lVar14 = *unaff_x22;
    lVar25 = lVar25 + 1;
    lVar24 = lVar24 + 0x50;
    if (lVar14 == 0) break;
LAB_0354f97c:
    uVar11 = lVar25 + 1;
    if ((long)*(int *)(lVar14 + 0x34) <= (long)uVar11) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar14 = *(long *)(lVar14 + 0x60);
    if (lVar14 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar14 + lVar24 + 0x70,0);
    lVar14 = unaff_x19[0xe1];
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar22 = *(undefined8 *)(lVar14 + lVar25 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036d35a8(uVar22,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x60), lVar14 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar11) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar14 + lVar24 + 0x70,1,0);
      }
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *(long *)(lVar14 + lVar25 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_0359d5ac(lVar14,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar14 == 0) break;
      FUN_036a460c(lVar14,*(undefined8 *)(lVar15 + lVar24 + 0x80),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *(long *)(lVar14 + lVar25 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_0359d5ac(lVar14,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar14 == 0) break;
      FUN_036a4810(lVar14,*(undefined8 *)(lVar15 + lVar24 + 0x98),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *(long *)(lVar14 + lVar25 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_0359d5ac(lVar14,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar14 == 0) break;
      FUN_036a48bc(lVar14,*(undefined8 *)(lVar15 + lVar24 + 0xa0),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *(long *)(lVar14 + lVar25 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_0359d5ac(lVar14,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar14 == 0) break;
      FUN_036a4e24(lVar14,*(undefined8 *)(lVar15 + lVar24 + 0xa8),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar14 = *(long *)(lVar14 + lVar25 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = FUN_0359d5ac(lVar14,0), lVar14 == 0)) break;
      FUN_036aa280(lVar14,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


