/*
FUNCTION_NAME: UnityEngine.AndroidJavaObject$$.ctor
ENTRY_POINT: 0354d69c
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


void UnityEngine_AndroidJavaObject___ctor(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  undefined4 *puVar19;
  uint uVar20;
  long lVar21;
  code *pcVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *unaff_x19;
  int *unaff_x20;
  uint uVar30;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar31;
  long *unaff_x25;
  long lVar32;
  long lVar33;
  float fVar34;
  undefined4 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float unaff_s8;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000040;
  float fStack000000000000004c;
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
  int iStack00000000000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000124;
  uint uStack000000000000016c;
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
  
  FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xf1c) = 1;
  puVar11 = OVRPlugin_Mesh_TypeInfo;
  lVar15 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar15 = *(long *)puVar11;
  }
  puVar19 = *(undefined4 **)(lVar15 + 0xb8);
  FUN_035683a4(*puVar19,puVar19[1],puVar19[2],puVar19[3],&stack0x000017c0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar15 = *unaff_x22;
  if (lVar15 == 0) goto LAB_0354fbf4;
  iVar13 = *unaff_x20;
  if (0 < iVar13) {
    lVar15 = *(long *)(lVar15 + 0x38);
    if (lVar15 == 0) goto LAB_0354fbf4;
    bVar12 = false;
    bVar10 = false;
    bVar8 = false;
    iStack0000000000000124 = 0;
    bVar9 = false;
    iStack00000000000000d8 = 0;
    uStack0000000000000030 = 0;
    uStack000000000000016c = 0;
    iStack000000000000005c = 0;
    lVar32 = 0x2e0;
    fVar34 = 0.0;
    fVar47 = 0.0;
    fStack00000000000000d0 = fStack00000000000000e0;
    fStack00000000000000d4 = fStack00000000000000e4;
    fStack0000000000000068 = fStack00000000000000e4;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack000000000000009c = fStack00000000000000e4;
    fStack00000000000000a0 = fStack00000000000000e0;
    fStack0000000000000100 = 0.0;
    fStack0000000000000084 = 0.0;
    fStack000000000000004c = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000040 = 0.0;
    uStack000000000000006c = uStack00000000000000c0;
    fStack0000000000000070 = fStack00000000000000e0;
    uStack0000000000000098 = uStack00000000000000c0;
    uVar20 = 0;
    uVar23 = 1;
LAB_0354d7c0:
    uVar7 = uVar23 - 1;
    if (*(uint *)(lVar15 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x50), lVar21 == 0))
    goto LAB_0354fbf4;
    lVar33 = (long)(int)uVar7;
    lVar25 = lVar15 + lVar33 * 0x178;
    uVar2 = *(uint *)(lVar25 + 100);
    if (*(uint *)(lVar21 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = *(long *)(lVar25 + 0x38);
    lVar29 = (long)(int)uVar2;
    lVar21 = lVar21 + lVar29 * 0x5c;
    uVar30 = *(uint *)(lVar21 + 0x68);
    uVar24 = (uint)*(ushort *)(lVar25 + 0x20);
    uVar5 = *(uint *)(lVar21 + 0x3c);
    iVar3 = *(int *)(lVar21 + 0x20);
    iVar13 = *(int *)(lVar21 + 0x28);
    iVar14 = *(int *)(lVar21 + 0x2c);
    fVar38 = *(float *)(lVar21 + 0x4c);
    uVar6 = *(uint *)(lVar21 + 0x40);
    fVar37 = *(float *)(lVar21 + 0x54);
    fVar43 = *(float *)(lVar21 + 0x58);
    fVar44 = *(float *)(lVar21 + 0x5c);
    fVar45 = *(float *)(lVar21 + 0x60);
    fVar42 = *(float *)(lVar21 + 0x6c);
    fVar46 = *(float *)(lVar21 + 0x70);
    fVar41 = *(float *)(lVar21 + 0x74);
    fVar39 = *(float *)(lVar21 + 0x78);
    if ((int)uVar30 < 9) {
      switch(uVar30) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar45 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar43;
        }
        break;
      case 2:
LAB_0354d968:
        in_stack_000000f8._4_4_ = (fVar45 + fVar44 * 0.5) - fVar43 * 0.5;
        break;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar44 + fVar45) - fVar43;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar44 + fVar45;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      in_stack_000000f0 = 0;
    }
    else if (uVar30 == 0x10) {
switchD_0354d8a4_caseD_8:
      if (uVar24 < 0xad) {
        if ((uVar24 != 3) && (uVar24 != 10)) {
FUN_0354d8fc:
          if (*(uint *)(lVar15 + 0x18) <= uVar5)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar15 + (long)(int)uVar5 * 0x178 + 0x20);
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
          if ((fVar43 <= fVar44) && (!bVar1 && uVar30 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar45;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar44 + fVar45;
            }
            goto LAB_0354d9d8;
          }
          if (((uVar23 == 1) || (uVar2 != uVar20)) || (uVar7 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            in_stack_000000f8._4_4_ = fVar45;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar44 + fVar45;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000030 = FUN_026b97f8(uVar24,0);
            in_stack_000000f0 = 0;
          }
          else {
            cVar18 = (char)unaff_x19[0x1e];
            fVar45 = -fVar43;
            if (cVar18 != '\0') {
              fVar45 = fVar43;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar5)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar14 = (int)*(char *)(lVar15 + (long)(int)uVar5 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000030 & 1)) + iVar14 + -1;
            if (iVar14 < 1) {
              fVar43 = 1.0;
              iVar14 = 1;
            }
            else {
              fVar43 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar24 == 9) {
LAB_0354f76c:
              fVar43 = 1.0 - fVar43;
            }
            else {
              if (uVar24 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar16 = FUN_026b97f8(uVar24,0);
                cVar18 = (char)unaff_x19[0x1e];
                if ((uVar16 & 1) != 0) goto LAB_0354f76c;
              }
              iVar14 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar13;
            }
            fVar43 = ((fVar44 + fVar45) * fVar43) / (float)iVar14;
            if (cVar18 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar43;
              in_stack_000000f0 =
                   CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                            (float)in_stack_000000f0 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar43;
            }
          }
        }
      }
      else if (((uVar24 != 0xad) && (uVar24 != 0x200b)) && (uVar24 != 0x2060)) goto FUN_0354d8fc;
    }
    else if (uVar30 == 0x20) {
      fVar43 = fVar42 + fVar41;
      goto LAB_0354d968;
    }
switchD_0354d8a4_caseD_3:
    uVar30 = (uint)*(undefined8 *)(lVar15 + 0x18);
    if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = lVar15 + lVar33 * 0x178;
    fVar45 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar43 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
    fVar44 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000f0 >> 0x20);
    if (*(char *)(lVar21 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar13 = *(int *)(lVar15 + lVar33 * 0x178 + 0x2c);
    if (iVar13 != 0) goto LAB_0354e05c;
    fVar34 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar25 = lVar15 + lVar33 * 0x178;
      *(undefined4 *)(lVar25 + 0x84) = 0;
      *(undefined4 *)(lVar25 + 0xac) = 0;
      *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
      fVar34 = 1.0;
      break;
    case 1:
      fVar39 = *(float *)(lVar15 + lVar33 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar25 = lVar15 + lVar33 * 0x178;
        fVar41 = (in_stack_000000f8._4_4_ + fVar39) - *(float *)(in_stack_00000078 + 0x230);
        fVar39 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar25 = lVar15 + lVar33 * 0x178;
      fVar41 = fVar41 - fVar42;
      *(float *)(lVar25 + 0x84) = fVar34 + (fVar39 - fVar42) / fVar41;
      *(float *)(lVar25 + 0xac) = fVar34 + (*(float *)(lVar25 + 0x98) - fVar42) / fVar41;
      *(float *)(lVar25 + 0xd4) = fVar34 + (*(float *)(lVar25 + 0xc0) - fVar42) / fVar41;
      fVar34 = fVar34 + (*(float *)(lVar25 + 0xe8) - fVar42) / fVar41;
      break;
    case 2:
      lVar25 = lVar15 + lVar33 * 0x178;
      fVar39 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar41 = (in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar25 + 0x84) = fVar34 + fVar41 / fVar39;
      *(float *)(lVar25 + 0xac) =
           fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar25 + 0xd4) =
           fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar34 = fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar25 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar25 = lVar15 + lVar33 * 0x178;
        *(undefined4 *)(lVar25 + 0x88) = 0;
        *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar25 + 0xd8) = 0;
        *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar25 = lVar15 + lVar33 * 0x178;
        fVar39 = fVar39 - fVar46;
        fVar41 = fVar34 + (*(float *)(lVar25 + 0x74) - fVar46) / fVar39;
        fVar39 = fVar34 + (*(float *)(lVar25 + 0x9c) - fVar46) / fVar39;
        *(float *)(lVar25 + 0x88) = fVar41;
        *(float *)(lVar25 + 0xb0) = fVar39;
        *(float *)(lVar25 + 0xd8) = fVar41;
        *(float *)(lVar25 + 0x100) = fVar39;
        break;
      case 2:
        lVar25 = lVar15 + lVar33 * 0x178;
        fVar41 = fVar34 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar25 + 0x88) = fVar41;
        fVar39 = *(float *)(unaff_x19 + 0x9c);
        fVar42 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar25 + 0xd8) = fVar41;
        fVar41 = fVar34 + (*(float *)(lVar25 + 0x9c) - fVar39) / (fVar42 - fVar39);
        *(float *)(lVar25 + 0xb0) = fVar41;
        *(float *)(lVar25 + 0x100) = fVar41;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar30 = (uint)*(undefined8 *)(lVar15 + 0x18);
      }
      if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar15 + lVar33 * 0x178;
      fVar41 = *(float *)(lVar25 + 0x15c);
      fVar39 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar41) * 0.5;
      fVar42 = fVar34 + *(float *)(lVar25 + 0x88) * fVar41 + fVar39;
      fVar34 = fVar34 + fVar39 + *(float *)(lVar25 + 0xb0) * fVar41;
      *(float *)(lVar25 + 0x84) = fVar42;
      *(float *)(lVar25 + 0xac) = fVar42;
      *(float *)(lVar25 + 0xd4) = fVar34;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(lVar15 + lVar33 * 0x178 + 0xfc) = fVar34;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar15 + lVar33 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0x100) = 0;
      break;
    case 1:
      if (uVar7 < uVar30) {
        lVar25 = lVar15 + lVar33 * 0x178;
        fVar38 = fVar38 - fVar37;
        fVar34 = (*(float *)(lVar25 + 0x74) - fVar37) / fVar38;
        fVar38 = (*(float *)(lVar25 + 0x9c) - fVar37) / fVar38;
        *(float *)(lVar25 + 0x88) = fVar34;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar15 + lVar33 * 0x178;
      fVar34 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar25 + 0x88) = fVar34;
      fVar38 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar25 + 0xb0) = fVar38;
      *(float *)(lVar25 + 0xd8) = fVar38;
      *(float *)(lVar25 + 0x100) = fVar34;
      break;
    case 3:
      if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar15 + lVar33 * 0x178;
      fVar38 = *(float *)(lVar25 + 0x15c);
      fVar41 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar38) * 0.5;
      fVar34 = *(float *)(lVar25 + 0x84) / fVar38 + fVar41;
      fVar41 = fVar41 + *(float *)(lVar25 + 0xd4) / fVar38;
      *(float *)(lVar25 + 0x88) = fVar34;
      *(float *)(lVar25 + 0xb0) = fVar41;
      *(float *)(lVar25 + 0x100) = fVar34;
      *(float *)(lVar25 + 0xd8) = fVar41;
    }
    if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = lVar15 + lVar33 * 0x178;
    fVar34 = ABS(unaff_s8) * *(float *)(lVar25 + 0x160) *
             (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar25 + 0x5c) == '\0') && ((*(byte *)(lVar15 + lVar33 * 0x178 + 400) & 1) != 0))
    {
      fVar34 = -fVar34;
    }
    lVar25 = lVar15 + lVar33 * 0x178;
    fVar38 = *(float *)(lVar25 + 0x88);
    fVar39 = *(float *)(lVar25 + 0x84);
    fVar41 = -2.1474836e+09;
    if (fVar39 != INFINITY) {
      fVar41 = (float)(int)fVar39;
    }
    fVar42 = *(float *)(lVar25 + 0xd4);
    fVar46 = *(float *)(lVar25 + 0xd8);
    fVar37 = -2.1474836e+09;
    if (fVar38 != INFINITY) {
      fVar37 = (float)(int)fVar38;
    }
    uVar35 = FUN_03591d3c(fVar39 - fVar41,fVar38 - fVar37);
    *(undefined4 *)(lVar25 + 0x84) = uVar35;
    if (*(uint *)(lVar15 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar46 = fVar46 - fVar37;
    *(float *)(lVar25 + 0x88) = fVar34;
    uVar35 = FUN_03591d3c(fVar39 - fVar41,fVar46);
    *(undefined4 *)(lVar15 + lVar33 * 0x178 + 0xac) = uVar35;
    if (*(uint *)(lVar15 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar42 = fVar42 - fVar41;
    *(float *)(lVar15 + lVar33 * 0x178 + 0xb0) = fVar34;
    fVar41 = (float)FUN_03591d3c(fVar42,fVar46);
    *(float *)(lVar25 + 0xd4) = fVar41;
    if (*(uint *)(lVar15 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar25 + 0xd8) = fVar34;
    uVar35 = FUN_03591d3c(fVar42,fVar38 - fVar37);
    *(undefined4 *)(lVar15 + lVar33 * 0x178 + 0xfc) = uVar35;
    uVar30 = (uint)*(undefined8 *)(lVar15 + 0x18);
    if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar15 + lVar33 * 0x178 + 0x100) = fVar34;
LAB_0354e05c:
    if (((int)uVar7 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
        lVar21 = lVar15 + lVar33 * 0x178;
        *(ulong *)(lVar21 + 0x70) =
             CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20),
                      fVar45 + (float)*(undefined8 *)(lVar21 + 0x70));
        *(float *)(lVar21 + 0x78) = fVar44 + *(float *)(lVar21 + 0x78);
        *(ulong *)(lVar21 + 0x98) =
             CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar21 + 0x98) >> 0x20),
                      fVar45 + (float)*(undefined8 *)(lVar21 + 0x98));
        *(float *)(lVar21 + 0xa0) = fVar44 + *(float *)(lVar21 + 0xa0);
        *(ulong *)(lVar21 + 0xc0) =
             CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar21 + 0xc0) >> 0x20),
                      fVar45 + (float)*(undefined8 *)(lVar21 + 0xc0));
        *(float *)(lVar21 + 200) = fVar44 + *(float *)(lVar21 + 200);
        *(ulong *)(lVar21 + 0xe8) =
             CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar21 + 0xe8) >> 0x20),
                      fVar45 + (float)*(undefined8 *)(lVar21 + 0xe8));
        *(float *)(lVar21 + 0xf0) = fVar44 + *(float *)(lVar21 + 0xf0);
        goto LAB_0354e184;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar7 < uVar30) {
          if (*(int *)(lVar15 + lVar33 * 0x178 + 0x68) == iStack0000000000000034) goto LAB_0354f0d4;
          goto LAB_0354e0cc;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
LAB_0354e0cc:
    if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar30 = *(uint *)(lVar15 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar25 = lVar15 + lVar33 * 0x178;
    *(undefined8 *)(lVar25 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar25 + 0x78) = uVar35;
    if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar25 = lVar15 + lVar33 * 0x178;
    *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar25 + 0xa0) = uVar35;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar25 + 200) = uVar35;
    uVar35 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar25 + 0xf0) = uVar35;
    *(undefined1 *)(lVar21 + 0x194) = 0;
LAB_0354e184:
    if (iVar13 == 0) {
      pcVar22 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar22)();
    }
    else if (iVar13 == 1) {
      pcVar22 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = lVar21 + lVar33 * 0x178;
    uVar36 = *(undefined8 *)(lVar21 + 0x11c);
    *(undefined8 *)(lVar21 + 0x11c) =
         CONCAT44(fVar43 + (float)((ulong)uVar36 >> 0x20),fVar45 + (float)uVar36);
    *(float *)(lVar21 + 0x124) = fVar44 + *(float *)(lVar21 + 0x124);
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = lVar21 + lVar33 * 0x178;
    *(ulong *)(lVar21 + 0x110) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar21 + 0x110) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar21 + 0x110));
    *(float *)(lVar21 + 0x118) = fVar44 + *(float *)(lVar21 + 0x118);
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = lVar21 + lVar33 * 0x178;
    *(ulong *)(lVar21 + 0x128) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar21 + 0x128) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar21 + 0x128));
    *(float *)(lVar21 + 0x130) = fVar44 + *(float *)(lVar21 + 0x130);
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = lVar21 + lVar33 * 0x178;
    *(float *)(lVar21 + 0x134) = fVar45 + *(float *)(lVar21 + 0x134);
    *(ulong *)(lVar21 + 0x138) =
         CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar21 + 0x138) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar21 + 0x138));
    lVar21 = *unaff_x22;
    if ((lVar21 == 0) || (lVar25 = *(long *)(lVar21 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
    uVar30 = *(uint *)(lVar25 + 0x18);
    if (uVar30 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = lVar25 + lVar33 * 0x178;
    *(float *)(lVar27 + 0x150) = fVar43 + *(float *)(lVar27 + 0x150);
    *(ulong *)(lVar27 + 0x140) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar27 + 0x140) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar27 + 0x140));
    *(ulong *)(lVar27 + 0x148) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x148) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar27 + 0x148));
    if (uVar2 == uVar20) {
      uVar20 = *unaff_x20 - 1;
      if (uVar7 == uVar20) goto LAB_0354e3ec;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x50);
      if (lVar21 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = (long)(int)uVar20;
      lVar28 = lVar21 + lVar27 * 0x5c;
      fVar41 = fVar43 + *(float *)(lVar28 + 0x54);
      *(ulong *)(lVar28 + 0x4c) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0x4c) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar28 + 0x4c));
      *(float *)(lVar28 + 0x54) = fVar41;
      *(float *)(lVar28 + 0x58) = fVar45 + *(float *)(lVar28 + 0x58);
      if (uVar30 <= *(uint *)(lVar28 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar35 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar28 + 0x34) * 0x178 + 0x11c);
      lVar21 = lVar21 + lVar27 * 0x5c;
      *(float *)(lVar21 + 0x70) = fVar41;
      *(undefined4 *)(lVar21 + 0x6c) = uVar35;
      lVar21 = *unaff_x22;
      if ((lVar21 == 0) || (lVar25 = *(long *)(lVar21 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_0354fbf4;
      uVar20 = *(uint *)(lVar25 + lVar27 * 0x5c + 0x40);
      if (*(uint *)(lVar21 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + lVar27 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar21 + (long)(int)uVar20 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
      uVar20 = *unaff_x20 - 1;
LAB_0354e3ec:
      if (uVar7 == uVar20) {
        lVar21 = *unaff_x22;
        if ((lVar21 == 0) || (lVar25 = *(long *)(lVar21 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar25 + lVar29 * 0x5c;
        fVar41 = fVar43 + *(float *)(lVar27 + 0x54);
        *(ulong *)(lVar27 + 0x4c) =
             CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x4c) >> 0x20),
                      fVar43 + (float)*(undefined8 *)(lVar27 + 0x4c));
        *(float *)(lVar27 + 0x54) = fVar41;
        *(float *)(lVar27 + 0x58) = fVar45 + *(float *)(lVar27 + 0x58);
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(lVar27 + 0x34))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar35 = *(undefined4 *)(lVar21 + (long)(int)*(uint *)(lVar27 + 0x34) * 0x178 + 0x11c);
        lVar25 = lVar25 + lVar29 * 0x5c;
        *(float *)(lVar25 + 0x70) = fVar41;
        *(undefined4 *)(lVar25 + 0x6c) = uVar35;
        lVar21 = *unaff_x22;
        if ((lVar21 == 0) || (lVar25 = *(long *)(lVar21 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_0354fbf4;
        uVar20 = *(uint *)(lVar25 + lVar29 * 0x5c + 0x40);
        if (*(uint *)(lVar21 + 0x18) <= uVar20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar25 = lVar25 + lVar29 * 0x5c;
        *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar21 + (long)(int)uVar20 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_026b82c4(uVar24,0);
    if (((((uVar16 & 1) == 0) && (1 < uVar24 - 0x2010)) && (uVar24 != 0xad)) && (uVar24 != 0x2d)) {
      if (bVar8) {
        if (((uVar23 != 1) && ((int)uVar7 < (int)(*(uint *)(lVar15 + 0x18) - 1))) &&
           (((int)uVar7 < *unaff_x20 && ((uVar24 == 0x2019 || (uVar24 == 0x27)))))) {
          if (*(uint *)(lVar15 + 0x18) <= uVar23 - 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar15 + lVar32 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b82c4(uVar4,0);
          if ((uVar16 & 1) != 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar23)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar4 = *(undefined2 *)(lVar15 + lVar32 + -0x148);
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
          bVar8 = false;
          goto LAB_0354e618;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b81f8(uVar24,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b63d8(uVar24,0);
          if (((uVar24 != 0x200b) && ((uVar16 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
        }
      }
      if (uVar7 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b82c4(uVar24,0);
        iVar13 = iStack0000000000000124;
        if ((uVar16 & 1) == 0) goto LAB_0354e93c;
      }
      else {
LAB_0354e93c:
        iVar13 = uVar23 - 2;
      }
      lVar21 = *unaff_x22;
      if (lVar21 == 0) goto LAB_0354fbf4;
      lVar25 = *(long *)(lVar21 + 0x40);
      if (lVar25 == 0) goto LAB_0354fbf4;
      uVar20 = *(uint *)(lVar21 + 0x24);
      iVar14 = *(int *)(lVar25 + 0x18);
      if (iVar14 < (int)(uVar20 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar21 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar21 = *unaff_x22;
        if (lVar21 == 0) goto LAB_0354fbf4;
      }
      lVar21 = *(long *)(lVar21 + 0x40);
      if (lVar21 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = lVar21 + (long)(int)uVar20 * 0x18;
      *(long **)(lVar21 + 0x20) = unaff_x19;
      *(uint *)(lVar21 + 0x28) = uStack000000000000016c;
      *(int *)(lVar21 + 0x2c) = iVar13;
      *(uint *)(lVar21 + 0x30) = (iVar13 - uStack000000000000016c) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar21 = unaff_x19[0x6d];
      if (lVar21 == 0) goto LAB_0354fbf4;
      lVar25 = *(long *)(lVar21 + 0x50);
      *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + lVar29 * 0x5c;
      bVar8 = false;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uStack000000000000016c = uVar7;
      }
      if (uVar7 == *unaff_x20 - 1U) {
        lVar21 = *unaff_x22;
        if (lVar21 == 0) goto LAB_0354fbf4;
        lVar25 = *(long *)(lVar21 + 0x40);
        if (lVar25 == 0) goto LAB_0354fbf4;
        uVar20 = *(uint *)(lVar21 + 0x24);
        iVar13 = *(int *)(lVar25 + 0x18);
        if (iVar13 < (int)(uVar20 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar21 + 0x40),iVar13 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar21 = *unaff_x22;
          if (lVar21 == 0) goto LAB_0354fbf4;
        }
        lVar21 = *(long *)(lVar21 + 0x40);
        if (lVar21 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= uVar20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = lVar21 + (long)(int)uVar20 * 0x18;
        *(long **)(lVar21 + 0x20) = unaff_x19;
        *(uint *)(lVar21 + 0x28) = uStack000000000000016c;
        *(uint *)(lVar21 + 0x2c) = uVar7;
        *(uint *)(lVar21 + 0x30) = uVar23 - uStack000000000000016c;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar21 = unaff_x19[0x6d];
        if (lVar21 == 0) goto LAB_0354fbf4;
        lVar25 = *(long *)(lVar21 + 0x50);
        *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
        if (lVar25 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar25 = lVar25 + lVar29 * 0x5c;
        iStack00000000000000d8 = iStack00000000000000d8 + 1;
        *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
      }
LAB_0354e610:
      bVar8 = true;
    }
LAB_0354e618:
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    uVar20 = *(uint *)(lVar21 + 0x18);
    if (uVar20 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar21 + lVar33 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_0354e660:
        if (uVar20 <= uVar23 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar25 = *unaff_x19;
        uVar35 = *(undefined4 *)(lVar21 + lVar32 + -0x330);
        uVar40 = *(undefined4 *)(lVar21 + lVar32 + -0x2f8);
LAB_0354ebc0:
        pcVar22 = *(code **)(lVar25 + 0x8d8);
LAB_0354ebc8:
        (*pcVar22)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar35,
                   fStack0000000000000104,0,fStack0000000000000084,uVar40);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar11;
        }
LAB_0354ec1c:
        fVar47 = 0.0;
        bVar12 = false;
        fStack0000000000000104 = *(float *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_0354eb28:
        bVar12 = false;
      }
    }
    else {
      lVar21 = lVar21 + lVar33 * 0x178;
      iVar13 = *(int *)(lVar21 + 0x68);
      *(undefined4 *)(lVar21 + 0x16c) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_026b63d8(uVar24,0);
      if ((uVar24 != 0x200b) && ((uVar16 & 1) == 0)) {
        lVar21 = *unaff_x22;
        if ((lVar21 == 0) || (lVar25 = *(long *)(lVar21 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar41 = *(float *)(lVar25 + lVar33 * 0x178 + 0x160);
        if (fVar47 <= fVar41) {
          fVar47 = fVar41;
        }
        if (fStack0000000000000100 <= ABS(fVar34)) {
          fStack0000000000000100 = ABS(fVar34);
        }
        if (iVar13 != iStack000000000000005c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar21 = *unaff_x22;
            if (lVar21 == 0) goto LAB_0354fbf4;
            lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar25 + 0x15a8);
        }
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
        fVar38 = *(float *)(lVar21 + lVar33 * 0x178 + 0x14c);
        fVar41 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar38 = fVar38 + fVar47 * fVar41;
        iStack000000000000005c = iVar13;
        if (fVar38 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar38;
        }
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar24,0);
          if ((uVar16 & 1) != 0) goto LAB_0354eb28;
        }
        if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = lVar21 + lVar33 * 0x178;
        fStack0000000000000084 = *(float *)(lVar21 + 0x160);
        fStack0000000000000070 = *(float *)(lVar21 + 0x11c);
        bVar12 = fVar47 != 0.0;
        fVar41 = fStack0000000000000084;
        if (bVar12) {
          fVar41 = fVar47;
        }
        fVar47 = fVar41;
        in_stack_00000088 = *(undefined4 *)(lVar21 + 0x168);
        uStack000000000000006c = 0;
        fVar41 = fVar34;
        if (bVar12) {
          fVar41 = fStack0000000000000100;
        }
        fStack0000000000000068 = fStack0000000000000104;
        fStack0000000000000100 = fVar41;
      }
      if (*unaff_x20 == 1) {
        if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
          if (uVar7 < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + lVar33 * 0x178;
            lVar25 = *unaff_x19;
            uVar35 = *(undefined4 *)(lVar21 + 0x128);
            uVar40 = *(undefined4 *)(lVar21 + 0x160);
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
        uVar16 = FUN_026b63d8(uVar24,0);
        if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
          lVar25 = lVar33;
          uVar20 = uVar7;
          if (uVar24 == 0x200b || (uVar16 & 1) != 0) {
            lVar25 = (long)(int)uVar6;
            uVar20 = uVar6;
          }
          if (uVar20 < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + lVar25 * 0x178;
            uVar35 = *(undefined4 *)(lVar21 + 0x128);
            uVar40 = *(undefined4 *)(lVar21 + 0x160);
            pcVar22 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354ebc8;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
          uVar20 = *(uint *)(lVar21 + 0x18);
          goto LAB_0354e660;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < *unaff_x20 + -1) {
        if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= uVar23)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar16 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar21 + lVar32),0);
        if ((uVar16 & 1) == 0) {
          if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
            if (uVar7 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + lVar33 * 0x178;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                         *(undefined4 *)(lVar21 + 0x128),fStack0000000000000104,0,
                         fStack0000000000000084,*(undefined4 *)(lVar21 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar21 = *(long *)puVar11;
              }
              goto LAB_0354ec1c;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
      }
      bVar12 = true;
    }
LAB_0354ec38:
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (lVar26 == 0) goto LAB_0354fbf4;
    uVar20 = *(uint *)(lVar21 + lVar33 * 0x178 + 400);
    fVar41 = (float)FUN_03776a30(lVar26 + 0x50,0);
    if ((uVar20 >> 6 & 1) == 0) {
      if (bVar9) {
        if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= uVar23 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar35 = *(undefined4 *)(lVar21 + lVar32 + -0x330);
        fVar43 = *(float *)(lVar21 + lVar32 + -0x30c);
        pcVar22 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
        (*pcVar22)(fStack00000000000000a0,fStack000000000000009c,uStack0000000000000098,uVar35,
                   fStack00000000000000a8 * fVar41 + fVar43,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_0354f250:
      bVar9 = false;
    }
    else {
      lVar21 = *unaff_x22;
      if ((lVar21 == 0) || (lVar25 = *(long *)(lVar21 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)(lVar25 + lVar33 * 0x178 + 0x174) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar25 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
         (bVar9 || !bVar1)) {
LAB_0354ed84:
        if (!bVar9) goto LAB_0354f250;
      }
      else {
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar24,0);
          if ((uVar16 & 1) != 0) goto LAB_0354ed84;
          lVar21 = *unaff_x22;
          if (lVar21 == 0) goto LAB_0354fbf4;
        }
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = lVar21 + lVar33 * 0x178;
        fStack000000000000004c = *(float *)(lVar21 + 0x60);
        fStack0000000000000040 = *(float *)(lVar21 + 0x14c);
        fStack00000000000000a0 = *(float *)(lVar21 + 0x11c);
        fStack00000000000000a8 = *(float *)(lVar21 + 0x160);
        fStack000000000000009c = fVar41 * fStack00000000000000a8 + fStack0000000000000040;
        uStack0000000000000098 = 0;
      }
      iVar13 = *unaff_x20;
      if (iVar13 == 1) {
        if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
          uVar20 = *(uint *)(lVar21 + 0x18);
LAB_0354ef0c:
          if (uVar7 < uVar20) {
            lVar21 = lVar21 + lVar33 * 0x178;
            lVar25 = *unaff_x19;
            uVar35 = *(undefined4 *)(lVar21 + 0x128);
            fVar43 = *(float *)(lVar21 + 0x14c);
LAB_0354ef24:
            pcVar22 = *(code **)(lVar25 + 0x8d8);
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
        uVar16 = FUN_026b63d8(uVar24,0);
        if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
          uVar20 = *(uint *)(lVar21 + 0x18);
          if (uVar24 == 0x200b || (uVar16 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
          lVar25 = lVar33;
          if (uVar7 < uVar20) {
LAB_0354f1f8:
            lVar21 = lVar21 + lVar25 * 0x178;
            fVar43 = *(float *)(lVar21 + 0x14c);
            uVar35 = *(undefined4 *)(lVar21 + 0x128);
            pcVar22 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < iVar13) {
        lVar21 = *unaff_x22;
        if ((lVar21 != 0) && (lVar25 = *(long *)(lVar21 + 0x38), lVar25 != 0)) {
          if (uVar23 < *(uint *)(lVar25 + 0x18)) {
            if (*(float *)(lVar25 + lVar32 + -0x108) == fStack000000000000004c) {
              fVar38 = *(float *)(lVar25 + lVar32 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_03567bac(fVar43 + fVar38,fStack0000000000000040,0);
              if ((uVar16 & 1) != 0) {
                iVar13 = *unaff_x20;
                goto LAB_0354f010;
              }
              lVar21 = *unaff_x22;
              if (lVar21 == 0) goto LAB_0354fbf4;
            }
            lVar21 = *(long *)(lVar21 + 0x38);
            if (lVar21 != 0) {
              uVar20 = *(uint *)(lVar21 + 0x18);
              if ((int)uVar7 <= (int)uVar6) goto LAB_0354f1f0;
LAB_0354f1e0:
              lVar25 = (long)(int)uVar6;
              if (uVar6 < uVar20) goto LAB_0354f1f8;
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
            goto LAB_0354fbf4;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f010:
      if ((int)uVar7 < iVar13) {
        iVar13 = FUN_036d3364(lVar26,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar23)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = *(long *)(lVar15 + lVar32 + -0x130);
        if (lVar21 == 0) goto LAB_0354fbf4;
        iVar14 = FUN_036d3364(lVar21,0);
        if (iVar13 != iVar14) {
          if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
            uVar20 = *(uint *)(lVar21 + 0x18);
            goto LAB_0354ef0c;
          }
          goto LAB_0354fbf4;
        }
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
          if (uVar23 - 2 < *(uint *)(lVar21 + 0x18)) {
            lVar25 = *unaff_x19;
            uVar35 = *(undefined4 *)(lVar21 + lVar32 + -0x330);
            fVar43 = *(float *)(lVar21 + lVar32 + -0x30c);
            goto LAB_0354ef24;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      bVar9 = true;
    }
    if ((*unaff_x22 == 0) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0))
    goto LAB_0354fbf4;
    uVar20 = (uint)*(undefined8 *)(lVar21 + 0x18);
    if (uVar20 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar21 + lVar33 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar10) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
      }
LAB_0354f604:
      bVar10 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar21 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar10) {
LAB_0354f400:
        if (uVar20 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = lVar21 + lVar33 * 0x178;
        fVar41 = *(float *)(lVar21 + 0x128);
        fVar37 = *(float *)(lVar21 + 0x188);
        uVar31 = *(undefined8 *)(lVar21 + 0x17c);
        fVar44 = *(float *)(lVar21 + 0x184);
        uVar36 = *(undefined8 *)(lVar21 + 0x184);
        fVar42 = *(float *)(lVar21 + 0x18c);
        fVar43 = *(float *)(lVar21 + 0x11c);
        fVar38 = *(float *)(lVar21 + 0x148);
        fVar39 = *(float *)(lVar21 + 0x150);
        in_stack_00000188 = uVar31;
        fStack0000000000000190 = fVar44;
        fStack0000000000000194 = fVar37;
        in_stack_00000198 = fVar42;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar16 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar21 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar16 & 1) == 0) {
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar21);
          }
          fVar41 = fVar41 + (float)in_stack_000017c8;
          fVar43 = fVar43 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar38 = fVar38 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar43 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar43;
          }
          if (fVar39 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar39 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar41) {
            fStack00000000000000d0 = fVar41;
          }
          if (fStack00000000000000d4 <= fVar38) {
            fStack00000000000000d4 = fVar38;
          }
        }
        else {
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar21);
          }
          fVar43 = (fVar43 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar39 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar39;
          }
          if (fStack00000000000000d4 <= fVar38) {
            fStack00000000000000d4 = fVar38;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar43,
                     fStack00000000000000d4,uStack00000000000000c0);
          fStack00000000000000e4 = fVar39 - fVar42;
          fStack00000000000000d0 = fVar41 + fVar44;
          uStack00000000000000c0 = 0;
          fStack00000000000000d4 = fVar38 + fVar37;
          fStack00000000000000e0 = fVar43;
          in_stack_000017c0 = uVar31;
          in_stack_000017c8 = uVar36;
          in_stack_000017d0 = fVar42;
        }
        if (((*unaff_x20 == 1) || (uVar7 == uVar5)) || (((int)uVar6 <= (int)uVar7 || (!bVar1)))) {
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                     fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
          goto LAB_0354f604;
        }
        bVar10 = true;
      }
      else {
        if ((((uVar24 != 0xd) && ((uVar24 & 0xfffe) != 10)) && ((int)uVar7 <= (int)uVar6)) &&
           (bVar1)) {
          if (uVar7 == uVar6) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b97f8(uVar24,0);
            if ((uVar16 & 1) != 0) goto LAB_0354f374;
          }
          puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)puVar11;
          }
          if ((*unaff_x22 != 0) && (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 != 0)) {
            uVar20 = (uint)*(undefined8 *)(lVar21 + 0x18);
            if (uVar7 < uVar20) {
              lVar25 = *(long *)(lVar25 + 0xb8);
              lVar26 = lVar21 + lVar33 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar26 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar26 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar25 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar25 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar26 + 0x18c);
              fStack00000000000000d0 = *(float *)(lVar25 + 0x15a0);
              fStack00000000000000d4 = *(float *)(lVar25 + 0x15a4);
              uStack00000000000000c0 = 0;
              goto LAB_0354f400;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
LAB_0354f374:
        bVar10 = false;
      }
    }
    iVar13 = *unaff_x20;
    iStack0000000000000124 = iStack0000000000000124 + 1;
    lVar32 = lVar32 + 0x178;
    bVar1 = iVar13 <= (int)uVar23;
    uVar20 = uVar2;
    uVar23 = uVar23 + 1;
    if (bVar1) goto LAB_0354f7d0;
    goto LAB_0354d7c0;
  }
  iStack00000000000000d8 = 0;
  iVar14 = 0;
LAB_0354f7f4:
  *(int *)(lVar15 + 0x18) = iVar13;
  lVar32 = unaff_x19[0xd4];
  *(int *)(lVar15 + 0x2c) = iVar14;
  if (iVar13 < 1 || iStack00000000000000d8 == 0) {
    iStack00000000000000d8 = 1;
  }
  *(int *)(lVar15 + 0x1c) = (int)lVar32;
  *(int *)(lVar15 + 0x24) = iStack00000000000000d8;
  *(int *)(lVar15 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) {
LAB_0354d0cc:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar15 = unaff_x19[0xdb];
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),*unaff_x22,*(undefined8 *)(lVar15 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar15 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596b20(lVar15 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 != 0)) {
      if (*(int *)(lVar15 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 != 0)) {
          if (*(int *)(lVar15 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 != 0))
            {
              if (*(int *)(lVar15 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar15 = *(long *)(unaff_x19[0x6d] + 0x60), lVar15 != 0)) {
                  if (*(int *)(lVar15 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar15 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      lVar15 = *unaff_x22;
                      if (lVar15 != 0) {
                        lVar21 = 0;
                        lVar32 = 0;
                        do {
                          uVar16 = lVar32 + 1;
                          if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar16) goto LAB_0354d0cc;
                          lVar15 = *(long *)(lVar15 + 0x60);
                          if (lVar15 == 0) break;
                          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar15 + 0x18) <= uVar16)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar15 + lVar21 + 0x70,0);
                          lVar15 = unaff_x19[0xe1];
                          if (lVar15 == 0) break;
                          if (*(uint *)(lVar15 + 0x18) <= uVar16)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar36 = *(undefined8 *)(lVar15 + lVar32 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar17 = FUN_036d35a8(uVar36,0,0);
                          if ((uVar17 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*unaff_x22 == 0) ||
                                 (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
                              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar15 + lVar21 + 0x70,1,0);
                            }
                            lVar15 = unaff_x19[0xe1];
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar15 = *(long *)(lVar15 + lVar32 * 8 + 0x28);
                            if (lVar15 == 0) break;
                            lVar15 = FUN_0359d5ac(lVar15,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar25 = *(long *)(*unaff_x22 + 0x60), lVar25 == 0)) break;
                            if (*(uint *)(lVar25 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar15 == 0) break;
                            FUN_036a460c(lVar15,*(undefined8 *)(lVar25 + lVar21 + 0x80),0);
                            lVar15 = unaff_x19[0xe1];
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar15 = *(long *)(lVar15 + lVar32 * 8 + 0x28);
                            if (lVar15 == 0) break;
                            lVar15 = FUN_0359d5ac(lVar15,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar25 = *(long *)(*unaff_x22 + 0x60), lVar25 == 0)) break;
                            if (*(uint *)(lVar25 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar15 == 0) break;
                            FUN_036a4810(lVar15,*(undefined8 *)(lVar25 + lVar21 + 0x98),0);
                            lVar15 = unaff_x19[0xe1];
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar15 = *(long *)(lVar15 + lVar32 * 8 + 0x28);
                            if (lVar15 == 0) break;
                            lVar15 = FUN_0359d5ac(lVar15,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar25 = *(long *)(*unaff_x22 + 0x60), lVar25 == 0)) break;
                            if (*(uint *)(lVar25 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar15 == 0) break;
                            FUN_036a48bc(lVar15,*(undefined8 *)(lVar25 + lVar21 + 0xa0),0);
                            lVar15 = unaff_x19[0xe1];
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar15 = *(long *)(lVar15 + lVar32 * 8 + 0x28);
                            if (lVar15 == 0) break;
                            lVar15 = FUN_0359d5ac(lVar15,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar25 = *(long *)(*unaff_x22 + 0x60), lVar25 == 0)) break;
                            if (*(uint *)(lVar25 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar15 == 0) break;
                            FUN_036a4e24(lVar15,*(undefined8 *)(lVar25 + lVar21 + 0xa8),0);
                            lVar15 = unaff_x19[0xe1];
                            if (lVar15 == 0) break;
                            if (*(uint *)(lVar15 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar15 = *(long *)(lVar15 + lVar32 * 8 + 0x28);
                            if ((lVar15 == 0) || (lVar15 = FUN_0359d5ac(lVar15,0), lVar15 == 0))
                            break;
                            FUN_036aa280(lVar15,0);
                          }
                          lVar15 = *unaff_x22;
                          lVar32 = lVar32 + 1;
                          lVar21 = lVar21 + 0x50;
                        } while (lVar15 != 0);
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
LAB_0354f7d0:
  lVar15 = *unaff_x22;
  if (lVar15 == 0) goto LAB_0354fbf4;
  iVar14 = uVar2 + 1;
  unaff_x25 = (long *)OVRPlugin_Media_TypeInfo;
  goto LAB_0354f7f4;
}


