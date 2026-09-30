/*
FUNCTION_NAME: UnityEngine.AndroidJavaProxy$$.cctor
ENTRY_POINT: 0354d24c
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


void UnityEngine_AndroidJavaProxy___cctor
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

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
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  char cVar19;
  undefined4 *puVar20;
  uint uVar21;
  long lVar22;
  code *pcVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long *unaff_x19;
  int *unaff_x20;
  uint uVar31;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar32;
  long *unaff_x25;
  long lVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
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
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  undefined8 uStack00000000000000b8;
  undefined4 in_stack_000000c0;
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
  
  fStack00000000000000c4 =
       in_stack_00000028 + 0.0 + (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x2c)) * 0.5;
  fVar35 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - in_stack_00000018._4_4_) -
                 in_stack_00000020) * 0.5;
  uStack00000000000000b8 =
       CONCAT44(((float)((ulong)param_4 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20)) * 0.5 + 0.0,
                ((float)param_4 + (float)*(undefined8 *)(param_1 + 0x30)) * 0.5 + fVar35);
  lVar16 = FUN_03559490();
  if (lVar16 == 0) goto LAB_0354fbf4;
  FUN_036df824(lVar16,0);
  *(float *)((long)unaff_x19 + 0x6e4) = fVar35;
  uVar13 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
  }
  if (*(char *)(unaff_x21 + 0xf1c) == '\0') {
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xf1c) = 1;
  }
  puVar11 = OVRPlugin_Mesh_TypeInfo;
  lVar16 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar16 = *(long *)puVar11;
  }
  puVar20 = *(undefined4 **)(lVar16 + 0xb8);
  FUN_035683a4(*puVar20,puVar20[1],puVar20[2],puVar20[3],&stack0x000017c0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar16 = *unaff_x22;
  if (lVar16 == 0) goto LAB_0354fbf4;
  iVar14 = *unaff_x20;
  if (0 < iVar14) {
    lVar16 = *(long *)(lVar16 + 0x38);
    if (lVar16 == 0) goto LAB_0354fbf4;
    bVar12 = false;
    bVar10 = false;
    bVar8 = false;
    iStack0000000000000124 = 0;
    bVar9 = false;
    iStack00000000000000d8 = 0;
    uStack0000000000000030 = 0;
    uStack000000000000016c = 0;
    iStack000000000000005c = 0;
    lVar33 = 0x2e0;
    fVar36 = 0.0;
    fVar49 = 0.0;
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
    uStack000000000000006c = in_stack_000000c0;
    fStack0000000000000070 = fStack00000000000000e0;
    uStack0000000000000098 = in_stack_000000c0;
    uVar21 = 0;
    uVar24 = 1;
LAB_0354d7c0:
    uVar7 = uVar24 - 1;
    if (*(uint *)(lVar16 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x50), lVar22 == 0))
    goto LAB_0354fbf4;
    lVar34 = (long)(int)uVar7;
    lVar26 = lVar16 + lVar34 * 0x178;
    uVar2 = *(uint *)(lVar26 + 100);
    if (*(uint *)(lVar22 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = *(long *)(lVar26 + 0x38);
    lVar30 = (long)(int)uVar2;
    lVar22 = lVar22 + lVar30 * 0x5c;
    uVar31 = *(uint *)(lVar22 + 0x68);
    uVar25 = (uint)*(ushort *)(lVar26 + 0x20);
    uVar5 = *(uint *)(lVar22 + 0x3c);
    iVar3 = *(int *)(lVar22 + 0x20);
    iVar14 = *(int *)(lVar22 + 0x28);
    iVar15 = *(int *)(lVar22 + 0x2c);
    fVar40 = *(float *)(lVar22 + 0x4c);
    uVar6 = *(uint *)(lVar22 + 0x40);
    fVar39 = *(float *)(lVar22 + 0x54);
    fVar45 = *(float *)(lVar22 + 0x58);
    fVar46 = *(float *)(lVar22 + 0x5c);
    fVar47 = *(float *)(lVar22 + 0x60);
    fVar44 = *(float *)(lVar22 + 0x6c);
    fVar48 = *(float *)(lVar22 + 0x70);
    fVar43 = *(float *)(lVar22 + 0x74);
    fVar41 = *(float *)(lVar22 + 0x78);
    if ((int)uVar31 < 9) {
      switch(uVar31) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar47 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar45;
        }
        break;
      case 2:
LAB_0354d968:
        in_stack_000000f8._4_4_ = (fVar47 + fVar46 * 0.5) - fVar45 * 0.5;
        break;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar46 + fVar47) - fVar45;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar46 + fVar47;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      in_stack_000000f0 = 0;
    }
    else if (uVar31 == 0x10) {
switchD_0354d8a4_caseD_8:
      if (uVar25 < 0xad) {
        if ((uVar25 != 3) && (uVar25 != 10)) {
FUN_0354d8fc:
          if (*(uint *)(lVar16 + 0x18) <= uVar5)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar16 + (long)(int)uVar5 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b8cc4(uVar4,0);
          if ((uVar17 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar45 <= fVar46) && (!bVar1 && uVar31 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar47;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar46 + fVar47;
            }
            goto LAB_0354d9d8;
          }
          if (((uVar24 == 1) || (uVar2 != uVar21)) || (uVar7 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            in_stack_000000f8._4_4_ = fVar47;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar46 + fVar47;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000030 = FUN_026b97f8(uVar25,0);
            in_stack_000000f0 = 0;
          }
          else {
            cVar19 = (char)unaff_x19[0x1e];
            fVar47 = -fVar45;
            if (cVar19 != '\0') {
              fVar47 = fVar45;
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar5)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar15 = (int)*(char *)(lVar16 + (long)(int)uVar5 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000030 & 1)) + iVar15 + -1;
            if (iVar15 < 1) {
              fVar45 = 1.0;
              iVar15 = 1;
            }
            else {
              fVar45 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar25 == 9) {
LAB_0354f76c:
              fVar45 = 1.0 - fVar45;
            }
            else {
              if (uVar25 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar17 = FUN_026b97f8(uVar25,0);
                cVar19 = (char)unaff_x19[0x1e];
                if ((uVar17 & 1) != 0) goto LAB_0354f76c;
              }
              iVar15 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar14;
            }
            fVar45 = ((fVar46 + fVar47) * fVar45) / (float)iVar15;
            if (cVar19 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar45;
              in_stack_000000f0 =
                   CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                            (float)in_stack_000000f0 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar45;
            }
          }
        }
      }
      else if (((uVar25 != 0xad) && (uVar25 != 0x200b)) && (uVar25 != 0x2060)) goto FUN_0354d8fc;
    }
    else if (uVar31 == 0x20) {
      fVar45 = fVar44 + fVar43;
      goto LAB_0354d968;
    }
switchD_0354d8a4_caseD_3:
    uVar31 = (uint)*(undefined8 *)(lVar16 + 0x18);
    if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar16 + lVar34 * 0x178;
    fVar47 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar45 = (float)uStack00000000000000b8 + (float)in_stack_000000f0;
    fVar46 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
             (float)((ulong)in_stack_000000f0 >> 0x20);
    if (*(char *)(lVar22 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar14 = *(int *)(lVar16 + lVar34 * 0x178 + 0x2c);
    if (iVar14 != 0) goto LAB_0354e05c;
    fVar36 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar26 = lVar16 + lVar34 * 0x178;
      *(undefined4 *)(lVar26 + 0x84) = 0;
      *(undefined4 *)(lVar26 + 0xac) = 0;
      *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
      fVar36 = 1.0;
      break;
    case 1:
      fVar41 = *(float *)(lVar16 + lVar34 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar26 = lVar16 + lVar34 * 0x178;
        fVar43 = (in_stack_000000f8._4_4_ + fVar41) - *(float *)(in_stack_00000078 + 0x230);
        fVar41 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar26 = lVar16 + lVar34 * 0x178;
      fVar43 = fVar43 - fVar44;
      *(float *)(lVar26 + 0x84) = fVar36 + (fVar41 - fVar44) / fVar43;
      *(float *)(lVar26 + 0xac) = fVar36 + (*(float *)(lVar26 + 0x98) - fVar44) / fVar43;
      *(float *)(lVar26 + 0xd4) = fVar36 + (*(float *)(lVar26 + 0xc0) - fVar44) / fVar43;
      fVar36 = fVar36 + (*(float *)(lVar26 + 0xe8) - fVar44) / fVar43;
      break;
    case 2:
      lVar26 = lVar16 + lVar34 * 0x178;
      fVar41 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar43 = (in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar26 + 0x84) = fVar36 + fVar43 / fVar41;
      *(float *)(lVar26 + 0xac) =
           fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar26 + 0xd4) =
           fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar36 = fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar26 = lVar16 + lVar34 * 0x178;
        *(undefined4 *)(lVar26 + 0x88) = 0;
        *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar26 + 0xd8) = 0;
        *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar26 = lVar16 + lVar34 * 0x178;
        fVar41 = fVar41 - fVar48;
        fVar43 = fVar36 + (*(float *)(lVar26 + 0x74) - fVar48) / fVar41;
        fVar41 = fVar36 + (*(float *)(lVar26 + 0x9c) - fVar48) / fVar41;
        *(float *)(lVar26 + 0x88) = fVar43;
        *(float *)(lVar26 + 0xb0) = fVar41;
        *(float *)(lVar26 + 0xd8) = fVar43;
        *(float *)(lVar26 + 0x100) = fVar41;
        break;
      case 2:
        lVar26 = lVar16 + lVar34 * 0x178;
        fVar43 = fVar36 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar26 + 0x88) = fVar43;
        fVar41 = *(float *)(unaff_x19 + 0x9c);
        fVar44 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar26 + 0xd8) = fVar43;
        fVar43 = fVar36 + (*(float *)(lVar26 + 0x9c) - fVar41) / (fVar44 - fVar41);
        *(float *)(lVar26 + 0xb0) = fVar43;
        *(float *)(lVar26 + 0x100) = fVar43;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar31 = (uint)*(undefined8 *)(lVar16 + 0x18);
      }
      if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar16 + lVar34 * 0x178;
      fVar43 = *(float *)(lVar26 + 0x15c);
      fVar41 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar43) * 0.5;
      fVar44 = fVar36 + *(float *)(lVar26 + 0x88) * fVar43 + fVar41;
      fVar36 = fVar36 + fVar41 + *(float *)(lVar26 + 0xb0) * fVar43;
      *(float *)(lVar26 + 0x84) = fVar44;
      *(float *)(lVar26 + 0xac) = fVar44;
      *(float *)(lVar26 + 0xd4) = fVar36;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(lVar16 + lVar34 * 0x178 + 0xfc) = fVar36;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar16 + lVar34 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0x100) = 0;
      break;
    case 1:
      if (uVar7 < uVar31) {
        lVar26 = lVar16 + lVar34 * 0x178;
        fVar40 = fVar40 - fVar39;
        fVar36 = (*(float *)(lVar26 + 0x74) - fVar39) / fVar40;
        fVar40 = (*(float *)(lVar26 + 0x9c) - fVar39) / fVar40;
        *(float *)(lVar26 + 0x88) = fVar36;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar16 + lVar34 * 0x178;
      fVar36 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar36;
      fVar40 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar26 + 0xb0) = fVar40;
      *(float *)(lVar26 + 0xd8) = fVar40;
      *(float *)(lVar26 + 0x100) = fVar36;
      break;
    case 3:
      if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar16 + lVar34 * 0x178;
      fVar40 = *(float *)(lVar26 + 0x15c);
      fVar43 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar40) * 0.5;
      fVar36 = *(float *)(lVar26 + 0x84) / fVar40 + fVar43;
      fVar43 = fVar43 + *(float *)(lVar26 + 0xd4) / fVar40;
      *(float *)(lVar26 + 0x88) = fVar36;
      *(float *)(lVar26 + 0xb0) = fVar43;
      *(float *)(lVar26 + 0x100) = fVar36;
      *(float *)(lVar26 + 0xd8) = fVar43;
    }
    if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = lVar16 + lVar34 * 0x178;
    fVar36 = ABS(fVar35) * *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar16 + lVar34 * 0x178 + 400) & 1) != 0))
    {
      fVar36 = -fVar36;
    }
    lVar26 = lVar16 + lVar34 * 0x178;
    fVar40 = *(float *)(lVar26 + 0x88);
    fVar41 = *(float *)(lVar26 + 0x84);
    fVar43 = -2.1474836e+09;
    if (fVar41 != INFINITY) {
      fVar43 = (float)(int)fVar41;
    }
    fVar44 = *(float *)(lVar26 + 0xd4);
    fVar48 = *(float *)(lVar26 + 0xd8);
    fVar39 = -2.1474836e+09;
    if (fVar40 != INFINITY) {
      fVar39 = (float)(int)fVar40;
    }
    uVar37 = FUN_03591d3c(fVar41 - fVar43,fVar40 - fVar39);
    *(undefined4 *)(lVar26 + 0x84) = uVar37;
    if (*(uint *)(lVar16 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar48 = fVar48 - fVar39;
    *(float *)(lVar26 + 0x88) = fVar36;
    uVar37 = FUN_03591d3c(fVar41 - fVar43,fVar48);
    *(undefined4 *)(lVar16 + lVar34 * 0x178 + 0xac) = uVar37;
    if (*(uint *)(lVar16 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar44 = fVar44 - fVar43;
    *(float *)(lVar16 + lVar34 * 0x178 + 0xb0) = fVar36;
    fVar43 = (float)FUN_03591d3c(fVar44,fVar48);
    *(float *)(lVar26 + 0xd4) = fVar43;
    if (*(uint *)(lVar16 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar26 + 0xd8) = fVar36;
    uVar37 = FUN_03591d3c(fVar44,fVar40 - fVar39);
    *(undefined4 *)(lVar16 + lVar34 * 0x178 + 0xfc) = uVar37;
    uVar31 = (uint)*(undefined8 *)(lVar16 + 0x18);
    if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar16 + lVar34 * 0x178 + 0x100) = fVar36;
LAB_0354e05c:
    if (((int)uVar7 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
        lVar22 = lVar16 + lVar34 * 0x178;
        *(ulong *)(lVar22 + 0x70) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar22 + 0x70) >> 0x20),
                      fVar47 + (float)*(undefined8 *)(lVar22 + 0x70));
        *(float *)(lVar22 + 0x78) = fVar46 + *(float *)(lVar22 + 0x78);
        *(ulong *)(lVar22 + 0x98) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar22 + 0x98) >> 0x20),
                      fVar47 + (float)*(undefined8 *)(lVar22 + 0x98));
        *(float *)(lVar22 + 0xa0) = fVar46 + *(float *)(lVar22 + 0xa0);
        *(ulong *)(lVar22 + 0xc0) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20),
                      fVar47 + (float)*(undefined8 *)(lVar22 + 0xc0));
        *(float *)(lVar22 + 200) = fVar46 + *(float *)(lVar22 + 200);
        *(ulong *)(lVar22 + 0xe8) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar22 + 0xe8) >> 0x20),
                      fVar47 + (float)*(undefined8 *)(lVar22 + 0xe8));
        *(float *)(lVar22 + 0xf0) = fVar46 + *(float *)(lVar22 + 0xf0);
        goto LAB_0354e184;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar7 < uVar31) {
          if (*(int *)(lVar16 + lVar34 * 0x178 + 0x68) == iStack0000000000000034) goto LAB_0354f0d4;
          goto LAB_0354e0cc;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
LAB_0354e0cc:
    if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar31 = *(uint *)(lVar16 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar26 = lVar16 + lVar34 * 0x178;
    *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar26 + 0x78) = uVar37;
    if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar26 = lVar16 + lVar34 * 0x178;
    *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar26 + 0xa0) = uVar37;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar26 + 200) = uVar37;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar26 + 0xf0) = uVar37;
    *(undefined1 *)(lVar22 + 0x194) = 0;
LAB_0354e184:
    if (iVar14 == 0) {
      pcVar23 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar23)();
    }
    else if (iVar14 == 1) {
      pcVar23 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + lVar34 * 0x178;
    uVar38 = *(undefined8 *)(lVar22 + 0x11c);
    *(undefined8 *)(lVar22 + 0x11c) =
         CONCAT44(fVar45 + (float)((ulong)uVar38 >> 0x20),fVar47 + (float)uVar38);
    *(float *)(lVar22 + 0x124) = fVar46 + *(float *)(lVar22 + 0x124);
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + lVar34 * 0x178;
    *(ulong *)(lVar22 + 0x110) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar22 + 0x110) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar22 + 0x110));
    *(float *)(lVar22 + 0x118) = fVar46 + *(float *)(lVar22 + 0x118);
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + lVar34 * 0x178;
    *(ulong *)(lVar22 + 0x128) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar22 + 0x128) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar22 + 0x128));
    *(float *)(lVar22 + 0x130) = fVar46 + *(float *)(lVar22 + 0x130);
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + lVar34 * 0x178;
    *(float *)(lVar22 + 0x134) = fVar47 + *(float *)(lVar22 + 0x134);
    *(ulong *)(lVar22 + 0x138) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar22 + 0x138) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar22 + 0x138));
    lVar22 = *unaff_x22;
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
    uVar31 = *(uint *)(lVar26 + 0x18);
    if (uVar31 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar28 = lVar26 + lVar34 * 0x178;
    *(float *)(lVar28 + 0x150) = fVar45 + *(float *)(lVar28 + 0x150);
    *(ulong *)(lVar28 + 0x140) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar28 + 0x140) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar28 + 0x140));
    *(ulong *)(lVar28 + 0x148) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x148) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar28 + 0x148));
    if (uVar2 == uVar21) {
      uVar21 = *unaff_x20 - 1;
      if (uVar7 == uVar21) goto LAB_0354e3ec;
    }
    else {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar21)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar28 = (long)(int)uVar21;
      lVar29 = lVar22 + lVar28 * 0x5c;
      fVar43 = fVar45 + *(float *)(lVar29 + 0x54);
      *(ulong *)(lVar29 + 0x4c) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0x4c) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar29 + 0x4c));
      *(float *)(lVar29 + 0x54) = fVar43;
      *(float *)(lVar29 + 0x58) = fVar47 + *(float *)(lVar29 + 0x58);
      if (uVar31 <= *(uint *)(lVar29 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar37 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar29 + 0x34) * 0x178 + 0x11c);
      lVar22 = lVar22 + lVar28 * 0x5c;
      *(float *)(lVar22 + 0x70) = fVar43;
      *(undefined4 *)(lVar22 + 0x6c) = uVar37;
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar21)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar21 = *(uint *)(lVar26 + lVar28 * 0x5c + 0x40);
      if (*(uint *)(lVar22 + 0x18) <= uVar21)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar28 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar22 + (long)(int)uVar21 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
      uVar21 = *unaff_x20 - 1;
LAB_0354e3ec:
      if (uVar7 == uVar21) {
        lVar22 = *unaff_x22;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar26 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar28 = lVar26 + lVar30 * 0x5c;
        fVar43 = fVar45 + *(float *)(lVar28 + 0x54);
        *(ulong *)(lVar28 + 0x4c) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x4c) >> 0x20),
                      fVar45 + (float)*(undefined8 *)(lVar28 + 0x4c));
        *(float *)(lVar28 + 0x54) = fVar43;
        *(float *)(lVar28 + 0x58) = fVar47 + *(float *)(lVar28 + 0x58);
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(lVar28 + 0x34))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar37 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar28 + 0x34) * 0x178 + 0x11c);
        lVar26 = lVar26 + lVar30 * 0x5c;
        *(float *)(lVar26 + 0x70) = fVar43;
        *(undefined4 *)(lVar26 + 0x6c) = uVar37;
        lVar22 = *unaff_x22;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar26 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_0354fbf4;
        uVar21 = *(uint *)(lVar26 + lVar30 * 0x5c + 0x40);
        if (*(uint *)(lVar22 + 0x18) <= uVar21)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar26 = lVar26 + lVar30 * 0x5c;
        *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar22 + (long)(int)uVar21 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_026b82c4(uVar25,0);
    if (((((uVar17 & 1) == 0) && (1 < uVar25 - 0x2010)) && (uVar25 != 0xad)) && (uVar25 != 0x2d)) {
      if (bVar8) {
        if (((uVar24 != 1) && ((int)uVar7 < (int)(*(uint *)(lVar16 + 0x18) - 1))) &&
           (((int)uVar7 < *unaff_x20 && ((uVar25 == 0x2019 || (uVar25 == 0x27)))))) {
          if (*(uint *)(lVar16 + 0x18) <= uVar24 - 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar16 + lVar33 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b82c4(uVar4,0);
          if ((uVar17 & 1) != 0) {
            if (*(uint *)(lVar16 + 0x18) <= uVar24)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar4 = *(undefined2 *)(lVar16 + lVar33 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b82c4(uVar4,0);
            if ((uVar17 & 1) != 0) goto LAB_0354e610;
          }
        }
      }
      else {
        if (uVar24 != 1) {
LAB_0354f144:
          bVar8 = false;
          goto LAB_0354e618;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b81f8(uVar25,0);
        if ((uVar17 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b63d8(uVar25,0);
          if (((uVar25 != 0x200b) && ((uVar17 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
        }
      }
      if (uVar7 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_026b82c4(uVar25,0);
        iVar14 = iStack0000000000000124;
        if ((uVar17 & 1) == 0) goto LAB_0354e93c;
      }
      else {
LAB_0354e93c:
        iVar14 = uVar24 - 2;
      }
      lVar22 = *unaff_x22;
      if (lVar22 == 0) goto LAB_0354fbf4;
      lVar26 = *(long *)(lVar22 + 0x40);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar21 = *(uint *)(lVar22 + 0x24);
      iVar15 = *(int *)(lVar26 + 0x18);
      if (iVar15 < (int)(uVar21 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar22 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar22 = *unaff_x22;
        if (lVar22 == 0) goto LAB_0354fbf4;
      }
      lVar22 = *(long *)(lVar22 + 0x40);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar21)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar22 + (long)(int)uVar21 * 0x18;
      *(long **)(lVar22 + 0x20) = unaff_x19;
      *(uint *)(lVar22 + 0x28) = uStack000000000000016c;
      *(int *)(lVar22 + 0x2c) = iVar14;
      *(uint *)(lVar22 + 0x30) = (iVar14 - uStack000000000000016c) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar22 = unaff_x19[0x6d];
      if (lVar22 == 0) goto LAB_0354fbf4;
      lVar26 = *(long *)(lVar22 + 0x50);
      *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar30 * 0x5c;
      bVar8 = false;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uStack000000000000016c = uVar7;
      }
      if (uVar7 == *unaff_x20 - 1U) {
        lVar22 = *unaff_x22;
        if (lVar22 == 0) goto LAB_0354fbf4;
        lVar26 = *(long *)(lVar22 + 0x40);
        if (lVar26 == 0) goto LAB_0354fbf4;
        uVar21 = *(uint *)(lVar22 + 0x24);
        iVar14 = *(int *)(lVar26 + 0x18);
        if (iVar14 < (int)(uVar21 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar22 + 0x40),iVar14 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar22 = *unaff_x22;
          if (lVar22 == 0) goto LAB_0354fbf4;
        }
        lVar22 = *(long *)(lVar22 + 0x40);
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= uVar21)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = lVar22 + (long)(int)uVar21 * 0x18;
        *(long **)(lVar22 + 0x20) = unaff_x19;
        *(uint *)(lVar22 + 0x28) = uStack000000000000016c;
        *(uint *)(lVar22 + 0x2c) = uVar7;
        *(uint *)(lVar22 + 0x30) = uVar24 - uStack000000000000016c;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar22 = unaff_x19[0x6d];
        if (lVar22 == 0) goto LAB_0354fbf4;
        lVar26 = *(long *)(lVar22 + 0x50);
        *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
        if (lVar26 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar26 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar26 = lVar26 + lVar30 * 0x5c;
        iStack00000000000000d8 = iStack00000000000000d8 + 1;
        *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
      }
LAB_0354e610:
      bVar8 = true;
    }
LAB_0354e618:
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    uVar21 = *(uint *)(lVar22 + 0x18);
    if (uVar21 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar22 + lVar34 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_0354e660:
        if (uVar21 <= uVar24 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar26 = *unaff_x19;
        uVar37 = *(undefined4 *)(lVar22 + lVar33 + -0x330);
        uVar42 = *(undefined4 *)(lVar22 + lVar33 + -0x2f8);
LAB_0354ebc0:
        pcVar23 = *(code **)(lVar26 + 0x8d8);
LAB_0354ebc8:
        (*pcVar23)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar37,
                   fStack0000000000000104,0,fStack0000000000000084,uVar42);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar11;
        }
LAB_0354ec1c:
        fVar49 = 0.0;
        bVar12 = false;
        fStack0000000000000104 = *(float *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_0354eb28:
        bVar12 = false;
      }
    }
    else {
      lVar22 = lVar22 + lVar34 * 0x178;
      iVar14 = *(int *)(lVar22 + 0x68);
      *(undefined4 *)(lVar22 + 0x16c) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_026b63d8(uVar25,0);
      if ((uVar25 != 0x200b) && ((uVar17 & 1) == 0)) {
        lVar22 = *unaff_x22;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar26 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar43 = *(float *)(lVar26 + lVar34 * 0x178 + 0x160);
        if (fVar49 <= fVar43) {
          fVar49 = fVar43;
        }
        if (fStack0000000000000100 <= ABS(fVar36)) {
          fStack0000000000000100 = ABS(fVar36);
        }
        if (iVar14 != iStack000000000000005c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *unaff_x22;
            if (lVar22 == 0) goto LAB_0354fbf4;
            lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar26 + 0x15a8);
        }
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
        fVar40 = *(float *)(lVar22 + lVar34 * 0x178 + 0x14c);
        fVar43 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar40 = fVar40 + fVar49 * fVar43;
        iStack000000000000005c = iVar14;
        if (fVar40 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar40;
        }
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar25,0);
          if ((uVar17 & 1) != 0) goto LAB_0354eb28;
        }
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = lVar22 + lVar34 * 0x178;
        fStack0000000000000084 = *(float *)(lVar22 + 0x160);
        fStack0000000000000070 = *(float *)(lVar22 + 0x11c);
        bVar12 = fVar49 != 0.0;
        fVar43 = fStack0000000000000084;
        if (bVar12) {
          fVar43 = fVar49;
        }
        fVar49 = fVar43;
        uVar13 = *(undefined4 *)(lVar22 + 0x168);
        uStack000000000000006c = 0;
        fVar43 = fVar36;
        if (bVar12) {
          fVar43 = fStack0000000000000100;
        }
        fStack0000000000000068 = fStack0000000000000104;
        fStack0000000000000100 = fVar43;
      }
      if (*unaff_x20 == 1) {
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          if (uVar7 < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + lVar34 * 0x178;
            lVar26 = *unaff_x19;
            uVar37 = *(undefined4 *)(lVar22 + 0x128);
            uVar42 = *(undefined4 *)(lVar22 + 0x160);
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
        uVar17 = FUN_026b63d8(uVar25,0);
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          lVar26 = lVar34;
          uVar21 = uVar7;
          if (uVar25 == 0x200b || (uVar17 & 1) != 0) {
            lVar26 = (long)(int)uVar6;
            uVar21 = uVar6;
          }
          if (uVar21 < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + lVar26 * 0x178;
            uVar37 = *(undefined4 *)(lVar22 + 0x128);
            uVar42 = *(undefined4 *)(lVar22 + 0x160);
            pcVar23 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354ebc8;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          uVar21 = *(uint *)(lVar22 + 0x18);
          goto LAB_0354e660;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < *unaff_x20 + -1) {
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= uVar24)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar17 = FUN_03567ad8(uVar13,*(undefined4 *)(lVar22 + lVar33),0);
        if ((uVar17 & 1) == 0) {
          if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
            if (uVar7 < *(uint *)(lVar22 + 0x18)) {
              lVar22 = lVar22 + lVar34 * 0x178;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                         *(undefined4 *)(lVar22 + 0x128),fStack0000000000000104,0,
                         fStack0000000000000084,*(undefined4 *)(lVar22 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar22 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar22 = *(long *)puVar11;
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
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (lVar27 == 0) goto LAB_0354fbf4;
    uVar21 = *(uint *)(lVar22 + lVar34 * 0x178 + 400);
    fVar43 = (float)FUN_03776a30(lVar27 + 0x50,0);
    if ((uVar21 >> 6 & 1) == 0) {
      if (bVar9) {
        if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= uVar24 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar37 = *(undefined4 *)(lVar22 + lVar33 + -0x330);
        fVar45 = *(float *)(lVar22 + lVar33 + -0x30c);
        pcVar23 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
        (*pcVar23)(fStack00000000000000a0,fStack000000000000009c,uStack0000000000000098,uVar37,
                   fStack00000000000000a8 * fVar43 + fVar45,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_0354f250:
      bVar9 = false;
    }
    else {
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)(lVar26 + lVar34 * 0x178 + 0x174) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar26 + lVar34 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
         (bVar9 || !bVar1)) {
LAB_0354ed84:
        if (!bVar9) goto LAB_0354f250;
      }
      else {
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b97f8(uVar25,0);
          if ((uVar17 & 1) != 0) goto LAB_0354ed84;
          lVar22 = *unaff_x22;
          if (lVar22 == 0) goto LAB_0354fbf4;
        }
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = lVar22 + lVar34 * 0x178;
        fStack000000000000004c = *(float *)(lVar22 + 0x60);
        fStack0000000000000040 = *(float *)(lVar22 + 0x14c);
        fStack00000000000000a0 = *(float *)(lVar22 + 0x11c);
        fStack00000000000000a8 = *(float *)(lVar22 + 0x160);
        fStack000000000000009c = fVar43 * fStack00000000000000a8 + fStack0000000000000040;
        uStack0000000000000098 = 0;
      }
      iVar14 = *unaff_x20;
      if (iVar14 == 1) {
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          uVar21 = *(uint *)(lVar22 + 0x18);
LAB_0354ef0c:
          if (uVar7 < uVar21) {
            lVar22 = lVar22 + lVar34 * 0x178;
            lVar26 = *unaff_x19;
            uVar37 = *(undefined4 *)(lVar22 + 0x128);
            fVar45 = *(float *)(lVar22 + 0x14c);
LAB_0354ef24:
            pcVar23 = *(code **)(lVar26 + 0x8d8);
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
        uVar17 = FUN_026b63d8(uVar25,0);
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          uVar21 = *(uint *)(lVar22 + 0x18);
          if (uVar25 == 0x200b || (uVar17 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
          lVar26 = lVar34;
          if (uVar7 < uVar21) {
LAB_0354f1f8:
            lVar22 = lVar22 + lVar26 * 0x178;
            fVar45 = *(float *)(lVar22 + 0x14c);
            uVar37 = *(undefined4 *)(lVar22 + 0x128);
            pcVar23 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < iVar14) {
        lVar22 = *unaff_x22;
        if ((lVar22 != 0) && (lVar26 = *(long *)(lVar22 + 0x38), lVar26 != 0)) {
          if (uVar24 < *(uint *)(lVar26 + 0x18)) {
            if (*(float *)(lVar26 + lVar33 + -0x108) == fStack000000000000004c) {
              fVar40 = *(float *)(lVar26 + lVar33 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar17 = FUN_03567bac(fVar45 + fVar40,fStack0000000000000040,0);
              if ((uVar17 & 1) != 0) {
                iVar14 = *unaff_x20;
                goto LAB_0354f010;
              }
              lVar22 = *unaff_x22;
              if (lVar22 == 0) goto LAB_0354fbf4;
            }
            lVar22 = *(long *)(lVar22 + 0x38);
            if (lVar22 != 0) {
              uVar21 = *(uint *)(lVar22 + 0x18);
              if ((int)uVar7 <= (int)uVar6) goto LAB_0354f1f0;
LAB_0354f1e0:
              lVar26 = (long)(int)uVar6;
              if (uVar6 < uVar21) goto LAB_0354f1f8;
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
            goto LAB_0354fbf4;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f010:
      if ((int)uVar7 < iVar14) {
        iVar14 = FUN_036d3364(lVar27,0);
        if (*(uint *)(lVar16 + 0x18) <= uVar24)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = *(long *)(lVar16 + lVar33 + -0x130);
        if (lVar22 == 0) goto LAB_0354fbf4;
        iVar15 = FUN_036d3364(lVar22,0);
        if (iVar14 != iVar15) {
          if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
            uVar21 = *(uint *)(lVar22 + 0x18);
            goto LAB_0354ef0c;
          }
          goto LAB_0354fbf4;
        }
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          if (uVar24 - 2 < *(uint *)(lVar22 + 0x18)) {
            lVar26 = *unaff_x19;
            uVar37 = *(undefined4 *)(lVar22 + lVar33 + -0x330);
            fVar45 = *(float *)(lVar22 + lVar33 + -0x30c);
            goto LAB_0354ef24;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      bVar9 = true;
    }
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    uVar21 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar21 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar22 + lVar34 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar10) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,in_stack_000000c0);
      }
LAB_0354f604:
      bVar10 = false;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar22 + lVar34 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar10) {
LAB_0354f400:
        if (uVar21 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar22 = lVar22 + lVar34 * 0x178;
        fVar43 = *(float *)(lVar22 + 0x128);
        fVar39 = *(float *)(lVar22 + 0x188);
        uVar32 = *(undefined8 *)(lVar22 + 0x17c);
        fVar46 = *(float *)(lVar22 + 0x184);
        uVar38 = *(undefined8 *)(lVar22 + 0x184);
        fVar44 = *(float *)(lVar22 + 0x18c);
        fVar45 = *(float *)(lVar22 + 0x11c);
        fVar40 = *(float *)(lVar22 + 0x148);
        fVar41 = *(float *)(lVar22 + 0x150);
        in_stack_00000188 = uVar32;
        fStack0000000000000190 = fVar46;
        fStack0000000000000194 = fVar39;
        in_stack_00000198 = fVar44;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar17 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar22 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar17 & 1) == 0) {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar22);
          }
          fVar43 = fVar43 + (float)in_stack_000017c8;
          fVar45 = fVar45 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar40 = fVar40 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar45 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar45;
          }
          if (fVar41 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar41 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar43) {
            fStack00000000000000d0 = fVar43;
          }
          if (fStack00000000000000d4 <= fVar40) {
            fStack00000000000000d4 = fVar40;
          }
        }
        else {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar22);
          }
          fVar45 = (fVar45 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar41 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar41;
          }
          if (fStack00000000000000d4 <= fVar40) {
            fStack00000000000000d4 = fVar40;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,fVar45,
                     fStack00000000000000d4,in_stack_000000c0);
          fStack00000000000000e4 = fVar41 - fVar44;
          fStack00000000000000d0 = fVar43 + fVar46;
          in_stack_000000c0 = 0;
          fStack00000000000000d4 = fVar40 + fVar39;
          fStack00000000000000e0 = fVar45;
          in_stack_000017c0 = uVar32;
          in_stack_000017c8 = uVar38;
          in_stack_000017d0 = fVar44;
        }
        if (((*unaff_x20 == 1) || (uVar7 == uVar5)) || (((int)uVar6 <= (int)uVar7 || (!bVar1)))) {
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,
                     fStack00000000000000d0,fStack00000000000000d4,in_stack_000000c0);
          goto LAB_0354f604;
        }
        bVar10 = true;
      }
      else {
        if ((((uVar25 != 0xd) && ((uVar25 & 0xfffe) != 10)) && ((int)uVar7 <= (int)uVar6)) &&
           (bVar1)) {
          if (uVar7 == uVar6) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b97f8(uVar25,0);
            if ((uVar17 & 1) != 0) goto LAB_0354f374;
          }
          puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)puVar11;
          }
          if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
            uVar21 = (uint)*(undefined8 *)(lVar22 + 0x18);
            if (uVar7 < uVar21) {
              lVar26 = *(long *)(lVar26 + 0xb8);
              lVar27 = lVar22 + lVar34 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar27 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar27 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar26 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar26 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar27 + 0x18c);
              fStack00000000000000d0 = *(float *)(lVar26 + 0x15a0);
              fStack00000000000000d4 = *(float *)(lVar26 + 0x15a4);
              in_stack_000000c0 = 0;
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
    iVar14 = *unaff_x20;
    iStack0000000000000124 = iStack0000000000000124 + 1;
    lVar33 = lVar33 + 0x178;
    bVar1 = iVar14 <= (int)uVar24;
    uVar21 = uVar2;
    uVar24 = uVar24 + 1;
    if (bVar1) goto LAB_0354f7d0;
    goto LAB_0354d7c0;
  }
  iStack00000000000000d8 = 0;
  iVar15 = 0;
  goto LAB_0354f7f4;
LAB_0354f7d0:
  lVar16 = *unaff_x22;
  if (lVar16 == 0) goto LAB_0354fbf4;
  iVar15 = uVar2 + 1;
  unaff_x25 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
  *(int *)(lVar16 + 0x18) = iVar14;
  lVar33 = unaff_x19[0xd4];
  *(int *)(lVar16 + 0x2c) = iVar15;
  if (iVar14 < 1 || iStack00000000000000d8 == 0) {
    iStack00000000000000d8 = 1;
  }
  *(int *)(lVar16 + 0x1c) = (int)lVar33;
  *(int *)(lVar16 + 0x24) = iStack00000000000000d8;
  *(int *)(lVar16 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
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
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
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
            if ((unaff_x19[0x6d] != 0) && (lVar16 = *(long *)(unaff_x19[0x6d] + 0x60), lVar16 != 0))
            {
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
                        lVar22 = 0;
                        lVar33 = 0;
                        do {
                          uVar17 = lVar33 + 1;
                          if ((long)*(int *)(lVar16 + 0x34) <= (long)uVar17) goto LAB_0354d0cc;
                          lVar16 = *(long *)(lVar16 + 0x60);
                          if (lVar16 == 0) break;
                          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar16 + 0x18) <= uVar17)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar16 + lVar22 + 0x70,0);
                          lVar16 = unaff_x19[0xe1];
                          if (lVar16 == 0) break;
                          if (*(uint *)(lVar16 + 0x18) <= uVar17)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar38 = *(undefined8 *)(lVar16 + lVar33 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar18 = FUN_036d35a8(uVar38,0,0);
                          if ((uVar18 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*unaff_x22 == 0) ||
                                 (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
                              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar16 + lVar22 + 0x70,1,0);
                            }
                            lVar16 = unaff_x19[0xe1];
                            if (lVar16 == 0) break;
                            if (*(uint *)(lVar16 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar16 = *(long *)(lVar16 + lVar33 * 8 + 0x28);
                            if (lVar16 == 0) break;
                            lVar16 = FUN_0359d5ac(lVar16,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar26 = *(long *)(*unaff_x22 + 0x60), lVar26 == 0)) break;
                            if (*(uint *)(lVar26 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar16 == 0) break;
                            FUN_036a460c(lVar16,*(undefined8 *)(lVar26 + lVar22 + 0x80),0);
                            lVar16 = unaff_x19[0xe1];
                            if (lVar16 == 0) break;
                            if (*(uint *)(lVar16 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar16 = *(long *)(lVar16 + lVar33 * 8 + 0x28);
                            if (lVar16 == 0) break;
                            lVar16 = FUN_0359d5ac(lVar16,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar26 = *(long *)(*unaff_x22 + 0x60), lVar26 == 0)) break;
                            if (*(uint *)(lVar26 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar16 == 0) break;
                            FUN_036a4810(lVar16,*(undefined8 *)(lVar26 + lVar22 + 0x98),0);
                            lVar16 = unaff_x19[0xe1];
                            if (lVar16 == 0) break;
                            if (*(uint *)(lVar16 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar16 = *(long *)(lVar16 + lVar33 * 8 + 0x28);
                            if (lVar16 == 0) break;
                            lVar16 = FUN_0359d5ac(lVar16,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar26 = *(long *)(*unaff_x22 + 0x60), lVar26 == 0)) break;
                            if (*(uint *)(lVar26 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar16 == 0) break;
                            FUN_036a48bc(lVar16,*(undefined8 *)(lVar26 + lVar22 + 0xa0),0);
                            lVar16 = unaff_x19[0xe1];
                            if (lVar16 == 0) break;
                            if (*(uint *)(lVar16 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar16 = *(long *)(lVar16 + lVar33 * 8 + 0x28);
                            if (lVar16 == 0) break;
                            lVar16 = FUN_0359d5ac(lVar16,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar26 = *(long *)(*unaff_x22 + 0x60), lVar26 == 0)) break;
                            if (*(uint *)(lVar26 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar16 == 0) break;
                            FUN_036a4e24(lVar16,*(undefined8 *)(lVar26 + lVar22 + 0xa8),0);
                            lVar16 = unaff_x19[0xe1];
                            if (lVar16 == 0) break;
                            if (*(uint *)(lVar16 + 0x18) <= uVar17)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar16 = *(long *)(lVar16 + lVar33 * 8 + 0x28);
                            if ((lVar16 == 0) || (lVar16 = FUN_0359d5ac(lVar16,0), lVar16 == 0))
                            break;
                            FUN_036aa280(lVar16,0);
                          }
                          lVar16 = *unaff_x22;
                          lVar33 = lVar33 + 1;
                          lVar22 = lVar22 + 0x50;
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
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


