/*
FUNCTION_NAME: UnityEngine.AndroidJavaProxy$$toString
ENTRY_POINT: 0354d1d8
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


void UnityEngine_AndroidJavaProxy__toString(long param_1,undefined1 param_2 [16],float param_3)

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
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  float *pfVar19;
  long lVar20;
  undefined4 *puVar21;
  uint uVar22;
  long lVar23;
  code *pcVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long *unaff_x19;
  int *unaff_x20;
  uint uVar32;
  long *unaff_x22;
  undefined8 uVar33;
  long *unaff_x25;
  long lVar34;
  long lVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
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
  uint uStack0000000000000034;
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
  undefined8 uStack00000000000000f0;
  float fStack00000000000000fc;
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
  float in_stack_000017e8;
  
  iVar14 = (int)unaff_x19[0x4e];
  pfVar19 = *(float **)(**(long **)(param_1 + 0xed8) + 0xb8);
  fStack00000000000000fc = *pfVar19;
  uStack00000000000000f0 = *(undefined8 *)(pfVar19 + 1);
  lVar20 = unaff_x19[0xeb];
  uStack00000000000000b8 = uStack00000000000000f0;
  fStack00000000000000c4 = fStack00000000000000fc;
  if (iVar14 < 0x401) {
    if (iVar14 == 0x100) {
      if (lVar20 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar20 + 0x18) < 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar39 = *(undefined8 *)(lVar20 + 0x30);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x22 == 0) || (lVar34 = *(long *)(*unaff_x22 + 0x58), lVar34 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000034)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar38 = *(float *)(lVar34 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
      }
      else {
        fVar38 = *(float *)(unaff_x19 + 0x97);
      }
      fStack00000000000000c4 = in_stack_00000028 + 0.0 + *(float *)(lVar20 + 0x2c);
      param_3 = (0.0 - fVar38) - in_stack_00000018._4_4_;
    }
    else if (iVar14 == 0x200) {
      if (lVar20 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fStack00000000000000c4 = (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
      uVar39 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar20 + 0x24) +
                        (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x58), lVar20 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar20 + 0x18) <= uStack0000000000000034)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar20 = lVar20 + (long)(int)uStack0000000000000034 * 0x14;
        fStack00000000000000c4 = in_stack_00000028 + 0.0 + fStack00000000000000c4;
        param_3 = ((in_stack_00000018._4_4_ + *(float *)(lVar20 + 0x28) + *(float *)(lVar20 + 0x30))
                  - in_stack_00000020) * -0.5 + 0.0;
      }
      else {
        fStack00000000000000c4 = in_stack_00000028 + 0.0 + fStack00000000000000c4;
        param_3 = ((in_stack_00000018._4_4_ + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                  in_stack_00000020) * -0.5 + 0.0;
      }
    }
    else {
      if (iVar14 != 0x400) goto LAB_0354d620;
      if (lVar20 == 0) goto LAB_0354fbf4;
      if (*(int *)(lVar20 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar39 = *(undefined8 *)(lVar20 + 0x24);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x22 == 0) || (lVar34 = *(long *)(*unaff_x22 + 0x58), lVar34 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000034)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        in_stack_000017e8 = *(float *)(lVar34 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
      }
      fStack00000000000000c4 = in_stack_00000028 + 0.0 + *(float *)(lVar20 + 0x20);
      param_3 = in_stack_00000020 + (0.0 - in_stack_000017e8);
    }
LAB_0354d610:
    uStack00000000000000b8 = CONCAT44((float)((ulong)uVar39 >> 0x20) + 0.0,(float)uVar39 + param_3);
  }
  else if (iVar14 == 0x800) {
    if (lVar20 == 0) goto LAB_0354fbf4;
    if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fStack00000000000000c4 =
         in_stack_00000028 + 0.0 + (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
    uStack00000000000000b8 =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5 + 0.0,
                  ((float)*(undefined8 *)(lVar20 + 0x24) + (float)*(undefined8 *)(lVar20 + 0x30)) *
                  0.5 + 0.0);
    param_3 = fStack00000000000000c4;
  }
  else {
    if (iVar14 == 0x1000) {
      if (lVar20 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar39 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar20 + 0x24) +
                        (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5);
      fStack00000000000000c4 =
           in_stack_00000028 + 0.0 + (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
      param_3 = 0.0 - ((in_stack_00000018._4_4_ + *(float *)(unaff_x19 + 0x9d) +
                       *(float *)(unaff_x19 + 0x9c)) - in_stack_00000020) * 0.5;
      goto LAB_0354d610;
    }
    if (iVar14 == 0x2000) {
      if (lVar20 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fStack00000000000000c4 =
           in_stack_00000028 + 0.0 + (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
      param_3 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - in_stack_00000018._4_4_) -
                      in_stack_00000020) * 0.5;
      uStack00000000000000b8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar20 + 0x24) + (float)*(undefined8 *)(lVar20 + 0x30))
                    * 0.5 + param_3);
    }
  }
LAB_0354d620:
  lVar20 = FUN_03559490();
  if (lVar20 == 0) goto LAB_0354fbf4;
  FUN_036df824(lVar20,0);
  *(float *)((long)unaff_x19 + 0x6e4) = param_3;
  uVar13 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
  }
  if (DAT_0412df1c == '\0') {
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    DAT_0412df1c = '\x01';
  }
  puVar11 = OVRPlugin_Mesh_TypeInfo;
  lVar20 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar20 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar20 = *(long *)puVar11;
  }
  puVar21 = *(undefined4 **)(lVar20 + 0xb8);
  FUN_035683a4(*puVar21,puVar21[1],puVar21[2],puVar21[3],&stack0x000017c0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar20 = *unaff_x22;
  if (lVar20 == 0) goto LAB_0354fbf4;
  iVar14 = *unaff_x20;
  if (0 < iVar14) {
    lVar20 = *(long *)(lVar20 + 0x38);
    if (lVar20 == 0) goto LAB_0354fbf4;
    bVar12 = false;
    bVar10 = false;
    bVar8 = false;
    iStack0000000000000124 = 0;
    bVar9 = false;
    iStack00000000000000d8 = 0;
    uStack0000000000000030 = 0;
    uStack000000000000016c = 0;
    iStack000000000000005c = 0;
    lVar34 = 0x2e0;
    fVar36 = 0.0;
    fVar38 = 0.0;
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
    uVar22 = 0;
    uVar25 = 1;
LAB_0354d7c0:
    uVar7 = uVar25 - 1;
    if (*(uint *)(lVar20 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x50), lVar23 == 0))
    goto LAB_0354fbf4;
    lVar35 = (long)(int)uVar7;
    lVar27 = lVar20 + lVar35 * 0x178;
    uVar2 = *(uint *)(lVar27 + 100);
    if (*(uint *)(lVar23 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar28 = *(long *)(lVar27 + 0x38);
    lVar31 = (long)(int)uVar2;
    lVar23 = lVar23 + lVar31 * 0x5c;
    uVar32 = *(uint *)(lVar23 + 0x68);
    uVar26 = (uint)*(ushort *)(lVar27 + 0x20);
    uVar5 = *(uint *)(lVar23 + 0x3c);
    iVar3 = *(int *)(lVar23 + 0x20);
    iVar14 = *(int *)(lVar23 + 0x28);
    iVar15 = *(int *)(lVar23 + 0x2c);
    fVar41 = *(float *)(lVar23 + 0x4c);
    uVar6 = *(uint *)(lVar23 + 0x40);
    fVar40 = *(float *)(lVar23 + 0x54);
    fVar46 = *(float *)(lVar23 + 0x58);
    fVar47 = *(float *)(lVar23 + 0x5c);
    fVar48 = *(float *)(lVar23 + 0x60);
    fVar45 = *(float *)(lVar23 + 0x6c);
    fVar49 = *(float *)(lVar23 + 0x70);
    fVar44 = *(float *)(lVar23 + 0x74);
    fVar42 = *(float *)(lVar23 + 0x78);
    if ((int)uVar32 < 9) {
      switch(uVar32) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack00000000000000fc = fVar48 + 0.0;
        }
        else {
          fStack00000000000000fc = 0.0 - fVar46;
        }
        break;
      case 2:
LAB_0354d968:
        fStack00000000000000fc = (fVar48 + fVar47 * 0.5) - fVar46 * 0.5;
        break;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        fStack00000000000000fc = (fVar47 + fVar48) - fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar47 + fVar48;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      uStack00000000000000f0 = 0;
    }
    else if (uVar32 == 0x10) {
switchD_0354d8a4_caseD_8:
      if (uVar26 < 0xad) {
        if ((uVar26 != 3) && (uVar26 != 10)) {
FUN_0354d8fc:
          if (*(uint *)(lVar20 + 0x18) <= uVar5)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar20 + (long)(int)uVar5 * 0x178 + 0x20);
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
          if ((fVar46 <= fVar47) && (!bVar1 && uVar32 >> 4 == 0)) {
            fStack00000000000000fc = fVar48;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar47 + fVar48;
            }
            goto LAB_0354d9d8;
          }
          if (((uVar25 == 1) || (uVar2 != uVar22)) || (uVar7 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            fStack00000000000000fc = fVar48;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar47 + fVar48;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000030 = FUN_026b97f8(uVar26,0);
            uStack00000000000000f0 = 0;
          }
          else {
            cVar18 = (char)unaff_x19[0x1e];
            fVar48 = -fVar46;
            if (cVar18 != '\0') {
              fVar48 = fVar46;
            }
            if (*(uint *)(lVar20 + 0x18) <= uVar5)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar15 = (int)*(char *)(lVar20 + (long)(int)uVar5 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000030 & 1)) + iVar15 + -1;
            if (iVar15 < 1) {
              fVar46 = 1.0;
              iVar15 = 1;
            }
            else {
              fVar46 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar26 == 9) {
LAB_0354f76c:
              fVar46 = 1.0 - fVar46;
            }
            else {
              if (uVar26 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar16 = FUN_026b97f8(uVar26,0);
                cVar18 = (char)unaff_x19[0x1e];
                if ((uVar16 & 1) != 0) goto LAB_0354f76c;
              }
              iVar15 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar14;
            }
            fVar46 = ((fVar47 + fVar48) * fVar46) / (float)iVar15;
            if (cVar18 == '\0') {
              fStack00000000000000fc = fStack00000000000000fc + fVar46;
              uStack00000000000000f0 =
                   CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                            (float)uStack00000000000000f0 + 0.0);
            }
            else {
              fStack00000000000000fc = fStack00000000000000fc - fVar46;
            }
          }
        }
      }
      else if (((uVar26 != 0xad) && (uVar26 != 0x200b)) && (uVar26 != 0x2060)) goto FUN_0354d8fc;
    }
    else if (uVar32 == 0x20) {
      fVar46 = fVar45 + fVar44;
      goto LAB_0354d968;
    }
switchD_0354d8a4_caseD_3:
    uVar32 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar20 + lVar35 * 0x178;
    fVar48 = fStack00000000000000c4 + fStack00000000000000fc;
    fVar46 = (float)uStack00000000000000b8 + (float)uStack00000000000000f0;
    fVar47 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
             (float)((ulong)uStack00000000000000f0 >> 0x20);
    if (*(char *)(lVar23 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar14 = *(int *)(lVar20 + lVar35 * 0x178 + 0x2c);
    if (iVar14 != 0) goto LAB_0354e05c;
    fVar36 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar27 = lVar20 + lVar35 * 0x178;
      *(undefined4 *)(lVar27 + 0x84) = 0;
      *(undefined4 *)(lVar27 + 0xac) = 0;
      *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
      fVar36 = 1.0;
      break;
    case 1:
      fVar42 = *(float *)(lVar20 + lVar35 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar27 = lVar20 + lVar35 * 0x178;
        fVar44 = (fStack00000000000000fc + fVar42) - *(float *)(in_stack_00000078 + 0x230);
        fVar42 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar27 = lVar20 + lVar35 * 0x178;
      fVar44 = fVar44 - fVar45;
      *(float *)(lVar27 + 0x84) = fVar36 + (fVar42 - fVar45) / fVar44;
      *(float *)(lVar27 + 0xac) = fVar36 + (*(float *)(lVar27 + 0x98) - fVar45) / fVar44;
      *(float *)(lVar27 + 0xd4) = fVar36 + (*(float *)(lVar27 + 0xc0) - fVar45) / fVar44;
      fVar36 = fVar36 + (*(float *)(lVar27 + 0xe8) - fVar45) / fVar44;
      break;
    case 2:
      lVar27 = lVar20 + lVar35 * 0x178;
      fVar42 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar44 = (fStack00000000000000fc + *(float *)(lVar27 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar27 + 0x84) = fVar36 + fVar44 / fVar42;
      *(float *)(lVar27 + 0xac) =
           fVar36 + ((fStack00000000000000fc + *(float *)(lVar27 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar27 + 0xd4) =
           fVar36 + ((fStack00000000000000fc + *(float *)(lVar27 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar36 = fVar36 + ((fStack00000000000000fc + *(float *)(lVar27 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar27 = lVar20 + lVar35 * 0x178;
        *(undefined4 *)(lVar27 + 0x88) = 0;
        *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar27 + 0xd8) = 0;
        *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar27 = lVar20 + lVar35 * 0x178;
        fVar42 = fVar42 - fVar49;
        fVar44 = fVar36 + (*(float *)(lVar27 + 0x74) - fVar49) / fVar42;
        fVar42 = fVar36 + (*(float *)(lVar27 + 0x9c) - fVar49) / fVar42;
        *(float *)(lVar27 + 0x88) = fVar44;
        *(float *)(lVar27 + 0xb0) = fVar42;
        *(float *)(lVar27 + 0xd8) = fVar44;
        *(float *)(lVar27 + 0x100) = fVar42;
        break;
      case 2:
        lVar27 = lVar20 + lVar35 * 0x178;
        fVar44 = fVar36 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar27 + 0x88) = fVar44;
        fVar42 = *(float *)(unaff_x19 + 0x9c);
        fVar45 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar27 + 0xd8) = fVar44;
        fVar44 = fVar36 + (*(float *)(lVar27 + 0x9c) - fVar42) / (fVar45 - fVar42);
        *(float *)(lVar27 + 0xb0) = fVar44;
        *(float *)(lVar27 + 0x100) = fVar44;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar32 = (uint)*(undefined8 *)(lVar20 + 0x18);
      }
      if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar20 + lVar35 * 0x178;
      fVar44 = *(float *)(lVar27 + 0x15c);
      fVar42 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar44) * 0.5;
      fVar45 = fVar36 + *(float *)(lVar27 + 0x88) * fVar44 + fVar42;
      fVar36 = fVar36 + fVar42 + *(float *)(lVar27 + 0xb0) * fVar44;
      *(float *)(lVar27 + 0x84) = fVar45;
      *(float *)(lVar27 + 0xac) = fVar45;
      *(float *)(lVar27 + 0xd4) = fVar36;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(lVar20 + lVar35 * 0x178 + 0xfc) = fVar36;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar20 + lVar35 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0x100) = 0;
      break;
    case 1:
      if (uVar7 < uVar32) {
        lVar27 = lVar20 + lVar35 * 0x178;
        fVar41 = fVar41 - fVar40;
        fVar36 = (*(float *)(lVar27 + 0x74) - fVar40) / fVar41;
        fVar41 = (*(float *)(lVar27 + 0x9c) - fVar40) / fVar41;
        *(float *)(lVar27 + 0x88) = fVar36;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar20 + lVar35 * 0x178;
      fVar36 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar36;
      fVar41 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar27 + 0xb0) = fVar41;
      *(float *)(lVar27 + 0xd8) = fVar41;
      *(float *)(lVar27 + 0x100) = fVar36;
      break;
    case 3:
      if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar20 + lVar35 * 0x178;
      fVar41 = *(float *)(lVar27 + 0x15c);
      fVar44 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar41) * 0.5;
      fVar36 = *(float *)(lVar27 + 0x84) / fVar41 + fVar44;
      fVar44 = fVar44 + *(float *)(lVar27 + 0xd4) / fVar41;
      *(float *)(lVar27 + 0x88) = fVar36;
      *(float *)(lVar27 + 0xb0) = fVar44;
      *(float *)(lVar27 + 0x100) = fVar36;
      *(float *)(lVar27 + 0xd8) = fVar44;
    }
    if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = lVar20 + lVar35 * 0x178;
    fVar36 = ABS(param_3) * *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
    ;
    if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar20 + lVar35 * 0x178 + 400) & 1) != 0))
    {
      fVar36 = -fVar36;
    }
    lVar27 = lVar20 + lVar35 * 0x178;
    fVar41 = *(float *)(lVar27 + 0x88);
    fVar42 = *(float *)(lVar27 + 0x84);
    fVar44 = -2.1474836e+09;
    if (fVar42 != INFINITY) {
      fVar44 = (float)(int)fVar42;
    }
    fVar45 = *(float *)(lVar27 + 0xd4);
    fVar49 = *(float *)(lVar27 + 0xd8);
    fVar40 = -2.1474836e+09;
    if (fVar41 != INFINITY) {
      fVar40 = (float)(int)fVar41;
    }
    uVar37 = FUN_03591d3c(fVar42 - fVar44,fVar41 - fVar40);
    *(undefined4 *)(lVar27 + 0x84) = uVar37;
    if (*(uint *)(lVar20 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar49 = fVar49 - fVar40;
    *(float *)(lVar27 + 0x88) = fVar36;
    uVar37 = FUN_03591d3c(fVar42 - fVar44,fVar49);
    *(undefined4 *)(lVar20 + lVar35 * 0x178 + 0xac) = uVar37;
    if (*(uint *)(lVar20 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar45 = fVar45 - fVar44;
    *(float *)(lVar20 + lVar35 * 0x178 + 0xb0) = fVar36;
    fVar44 = (float)FUN_03591d3c(fVar45,fVar49);
    *(float *)(lVar27 + 0xd4) = fVar44;
    if (*(uint *)(lVar20 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar27 + 0xd8) = fVar36;
    uVar37 = FUN_03591d3c(fVar45,fVar41 - fVar40);
    *(undefined4 *)(lVar20 + lVar35 * 0x178 + 0xfc) = uVar37;
    uVar32 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar20 + lVar35 * 0x178 + 0x100) = fVar36;
LAB_0354e05c:
    if (((int)uVar7 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
        lVar23 = lVar20 + lVar35 * 0x178;
        *(ulong *)(lVar23 + 0x70) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar23 + 0x70));
        *(float *)(lVar23 + 0x78) = fVar47 + *(float *)(lVar23 + 0x78);
        *(ulong *)(lVar23 + 0x98) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar23 + 0x98));
        *(float *)(lVar23 + 0xa0) = fVar47 + *(float *)(lVar23 + 0xa0);
        *(ulong *)(lVar23 + 0xc0) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar23 + 0xc0));
        *(float *)(lVar23 + 200) = fVar47 + *(float *)(lVar23 + 200);
        *(ulong *)(lVar23 + 0xe8) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar23 + 0xe8));
        *(float *)(lVar23 + 0xf0) = fVar47 + *(float *)(lVar23 + 0xf0);
        goto LAB_0354e184;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar7 < uVar32) {
          if (*(uint *)(lVar20 + lVar35 * 0x178 + 0x68) == uStack0000000000000034)
          goto LAB_0354f0d4;
          goto LAB_0354e0cc;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
LAB_0354e0cc:
    if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar32 = *(uint *)(lVar20 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar27 = lVar20 + lVar35 * 0x178;
    *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar27 + 0x78) = uVar37;
    if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar27 = lVar20 + lVar35 * 0x178;
    *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar27 + 0xa0) = uVar37;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar27 + 200) = uVar37;
    uVar37 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar27 + 0xf0) = uVar37;
    *(undefined1 *)(lVar23 + 0x194) = 0;
LAB_0354e184:
    if (iVar14 == 0) {
      pcVar24 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar24)();
    }
    else if (iVar14 == 1) {
      pcVar24 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar23 + lVar35 * 0x178;
    uVar39 = *(undefined8 *)(lVar23 + 0x11c);
    *(undefined8 *)(lVar23 + 0x11c) =
         CONCAT44(fVar46 + (float)((ulong)uVar39 >> 0x20),fVar48 + (float)uVar39);
    *(float *)(lVar23 + 0x124) = fVar47 + *(float *)(lVar23 + 0x124);
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar23 + lVar35 * 0x178;
    *(ulong *)(lVar23 + 0x110) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar23 + 0x110) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar23 + 0x110));
    *(float *)(lVar23 + 0x118) = fVar47 + *(float *)(lVar23 + 0x118);
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar23 + lVar35 * 0x178;
    *(ulong *)(lVar23 + 0x128) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar23 + 0x128) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar23 + 0x128));
    *(float *)(lVar23 + 0x130) = fVar47 + *(float *)(lVar23 + 0x130);
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar23 = lVar23 + lVar35 * 0x178;
    *(float *)(lVar23 + 0x134) = fVar48 + *(float *)(lVar23 + 0x134);
    *(ulong *)(lVar23 + 0x138) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar23 + 0x138) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar23 + 0x138));
    lVar23 = *unaff_x22;
    if ((lVar23 == 0) || (lVar27 = *(long *)(lVar23 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
    uVar32 = *(uint *)(lVar27 + 0x18);
    if (uVar32 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar29 = lVar27 + lVar35 * 0x178;
    *(float *)(lVar29 + 0x150) = fVar46 + *(float *)(lVar29 + 0x150);
    *(ulong *)(lVar29 + 0x140) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar29 + 0x140) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar29 + 0x140));
    *(ulong *)(lVar29 + 0x148) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar29 + 0x148) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar29 + 0x148));
    if (uVar2 == uVar22) {
      uVar22 = *unaff_x20 - 1;
      if (uVar7 == uVar22) goto LAB_0354e3ec;
    }
    else {
      lVar23 = *(long *)(lVar23 + 0x50);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar29 = (long)(int)uVar22;
      lVar30 = lVar23 + lVar29 * 0x5c;
      fVar44 = fVar46 + *(float *)(lVar30 + 0x54);
      *(ulong *)(lVar30 + 0x4c) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x4c) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar30 + 0x4c));
      *(float *)(lVar30 + 0x54) = fVar44;
      *(float *)(lVar30 + 0x58) = fVar48 + *(float *)(lVar30 + 0x58);
      if (uVar32 <= *(uint *)(lVar30 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar37 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar30 + 0x34) * 0x178 + 0x11c);
      lVar23 = lVar23 + lVar29 * 0x5c;
      *(float *)(lVar23 + 0x70) = fVar44;
      *(undefined4 *)(lVar23 + 0x6c) = uVar37;
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar27 = *(long *)(lVar23 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_0354fbf4;
      uVar22 = *(uint *)(lVar27 + lVar29 * 0x5c + 0x40);
      if (*(uint *)(lVar23 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + lVar29 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar22 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
      uVar22 = *unaff_x20 - 1;
LAB_0354e3ec:
      if (uVar7 == uVar22) {
        lVar23 = *unaff_x22;
        if ((lVar23 == 0) || (lVar27 = *(long *)(lVar23 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar29 = lVar27 + lVar31 * 0x5c;
        fVar44 = fVar46 + *(float *)(lVar29 + 0x54);
        *(ulong *)(lVar29 + 0x4c) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar29 + 0x4c) >> 0x20),
                      fVar46 + (float)*(undefined8 *)(lVar29 + 0x4c));
        *(float *)(lVar29 + 0x54) = fVar44;
        *(float *)(lVar29 + 0x58) = fVar48 + *(float *)(lVar29 + 0x58);
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar29 + 0x34))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar37 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar29 + 0x34) * 0x178 + 0x11c);
        lVar27 = lVar27 + lVar31 * 0x5c;
        *(float *)(lVar27 + 0x70) = fVar44;
        *(undefined4 *)(lVar27 + 0x6c) = uVar37;
        lVar23 = *unaff_x22;
        if ((lVar23 == 0) || (lVar27 = *(long *)(lVar23 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_0354fbf4;
        uVar22 = *(uint *)(lVar27 + lVar31 * 0x5c + 0x40);
        if (*(uint *)(lVar23 + 0x18) <= uVar22)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar27 + lVar31 * 0x5c;
        *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar22 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_026b82c4(uVar26,0);
    if (((((uVar16 & 1) == 0) && (1 < uVar26 - 0x2010)) && (uVar26 != 0xad)) && (uVar26 != 0x2d)) {
      if (bVar8) {
        if (((uVar25 != 1) && ((int)uVar7 < (int)(*(uint *)(lVar20 + 0x18) - 1))) &&
           (((int)uVar7 < *unaff_x20 && ((uVar26 == 0x2019 || (uVar26 == 0x27)))))) {
          if (*(uint *)(lVar20 + 0x18) <= uVar25 - 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar20 + lVar34 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b82c4(uVar4,0);
          if ((uVar16 & 1) != 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar25)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar4 = *(undefined2 *)(lVar20 + lVar34 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b82c4(uVar4,0);
            if ((uVar16 & 1) != 0) goto LAB_0354e610;
          }
        }
      }
      else {
        if (uVar25 != 1) {
LAB_0354f144:
          bVar8 = false;
          goto LAB_0354e618;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b81f8(uVar26,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b63d8(uVar26,0);
          if (((uVar26 != 0x200b) && ((uVar16 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
        }
      }
      if (uVar7 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_026b82c4(uVar26,0);
        iVar14 = iStack0000000000000124;
        if ((uVar16 & 1) == 0) goto LAB_0354e93c;
      }
      else {
LAB_0354e93c:
        iVar14 = uVar25 - 2;
      }
      lVar23 = *unaff_x22;
      if (lVar23 == 0) goto LAB_0354fbf4;
      lVar27 = *(long *)(lVar23 + 0x40);
      if (lVar27 == 0) goto LAB_0354fbf4;
      uVar22 = *(uint *)(lVar23 + 0x24);
      iVar15 = *(int *)(lVar27 + 0x18);
      if (iVar15 < (int)(uVar22 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar23 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar23 = *unaff_x22;
        if (lVar23 == 0) goto LAB_0354fbf4;
      }
      lVar23 = *(long *)(lVar23 + 0x40);
      if (lVar23 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar23 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar23 = lVar23 + (long)(int)uVar22 * 0x18;
      *(long **)(lVar23 + 0x20) = unaff_x19;
      *(uint *)(lVar23 + 0x28) = uStack000000000000016c;
      *(int *)(lVar23 + 0x2c) = iVar14;
      *(uint *)(lVar23 + 0x30) = (iVar14 - uStack000000000000016c) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar23 = unaff_x19[0x6d];
      if (lVar23 == 0) goto LAB_0354fbf4;
      lVar27 = *(long *)(lVar23 + 0x50);
      *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + lVar31 * 0x5c;
      bVar8 = false;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uStack000000000000016c = uVar7;
      }
      if (uVar7 == *unaff_x20 - 1U) {
        lVar23 = *unaff_x22;
        if (lVar23 == 0) goto LAB_0354fbf4;
        lVar27 = *(long *)(lVar23 + 0x40);
        if (lVar27 == 0) goto LAB_0354fbf4;
        uVar22 = *(uint *)(lVar23 + 0x24);
        iVar14 = *(int *)(lVar27 + 0x18);
        if (iVar14 < (int)(uVar22 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar23 + 0x40),iVar14 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar23 = *unaff_x22;
          if (lVar23 == 0) goto LAB_0354fbf4;
        }
        lVar23 = *(long *)(lVar23 + 0x40);
        if (lVar23 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= uVar22)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + (long)(int)uVar22 * 0x18;
        *(long **)(lVar23 + 0x20) = unaff_x19;
        *(uint *)(lVar23 + 0x28) = uStack000000000000016c;
        *(uint *)(lVar23 + 0x2c) = uVar7;
        *(uint *)(lVar23 + 0x30) = uVar25 - uStack000000000000016c;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar23 = unaff_x19[0x6d];
        if (lVar23 == 0) goto LAB_0354fbf4;
        lVar27 = *(long *)(lVar23 + 0x50);
        *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
        if (lVar27 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar27 + lVar31 * 0x5c;
        iStack00000000000000d8 = iStack00000000000000d8 + 1;
        *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
      }
LAB_0354e610:
      bVar8 = true;
    }
LAB_0354e618:
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    uVar22 = *(uint *)(lVar23 + 0x18);
    if (uVar22 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar23 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_0354e660:
        if (uVar22 <= uVar25 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = *unaff_x19;
        uVar37 = *(undefined4 *)(lVar23 + lVar34 + -0x330);
        uVar43 = *(undefined4 *)(lVar23 + lVar34 + -0x2f8);
LAB_0354ebc0:
        pcVar24 = *(code **)(lVar27 + 0x8d8);
LAB_0354ebc8:
        (*pcVar24)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar37,
                   fStack0000000000000104,0,fStack0000000000000084,uVar43);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar11;
        }
LAB_0354ec1c:
        fVar38 = 0.0;
        bVar12 = false;
        fStack0000000000000104 = *(float *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_0354eb28:
        bVar12 = false;
      }
    }
    else {
      lVar23 = lVar23 + lVar35 * 0x178;
      iVar14 = *(int *)(lVar23 + 0x68);
      *(undefined4 *)(lVar23 + 0x16c) = in_stack_000017d4;
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
      uVar16 = FUN_026b63d8(uVar26,0);
      if ((uVar26 != 0x200b) && ((uVar16 & 1) == 0)) {
        lVar23 = *unaff_x22;
        if ((lVar23 == 0) || (lVar27 = *(long *)(lVar23 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar44 = *(float *)(lVar27 + lVar35 * 0x178 + 0x160);
        if (fVar38 <= fVar44) {
          fVar38 = fVar44;
        }
        if (fStack0000000000000100 <= ABS(fVar36)) {
          fStack0000000000000100 = ABS(fVar36);
        }
        if (iVar14 != iStack000000000000005c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *unaff_x22;
            if (lVar23 == 0) goto LAB_0354fbf4;
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar27 + 0x15a8);
        }
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
        fVar41 = *(float *)(lVar23 + lVar35 * 0x178 + 0x14c);
        fVar44 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar41 = fVar41 + fVar38 * fVar44;
        iStack000000000000005c = iVar14;
        if (fVar41 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar41;
        }
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar26,0);
          if ((uVar16 & 1) != 0) goto LAB_0354eb28;
        }
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + lVar35 * 0x178;
        fStack0000000000000084 = *(float *)(lVar23 + 0x160);
        fStack0000000000000070 = *(float *)(lVar23 + 0x11c);
        bVar12 = fVar38 != 0.0;
        fVar44 = fStack0000000000000084;
        if (bVar12) {
          fVar44 = fVar38;
        }
        fVar38 = fVar44;
        uVar13 = *(undefined4 *)(lVar23 + 0x168);
        uStack000000000000006c = 0;
        fVar44 = fVar36;
        if (bVar12) {
          fVar44 = fStack0000000000000100;
        }
        fStack0000000000000068 = fStack0000000000000104;
        fStack0000000000000100 = fVar44;
      }
      if (*unaff_x20 == 1) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          if (uVar7 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar35 * 0x178;
            lVar27 = *unaff_x19;
            uVar37 = *(undefined4 *)(lVar23 + 0x128);
            uVar43 = *(undefined4 *)(lVar23 + 0x160);
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
        uVar16 = FUN_026b63d8(uVar26,0);
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          lVar27 = lVar35;
          uVar22 = uVar7;
          if (uVar26 == 0x200b || (uVar16 & 1) != 0) {
            lVar27 = (long)(int)uVar6;
            uVar22 = uVar6;
          }
          if (uVar22 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar27 * 0x178;
            uVar37 = *(undefined4 *)(lVar23 + 0x128);
            uVar43 = *(undefined4 *)(lVar23 + 0x160);
            pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354ebc8;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          uVar22 = *(uint *)(lVar23 + 0x18);
          goto LAB_0354e660;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < *unaff_x20 + -1) {
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= uVar25)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar16 = FUN_03567ad8(uVar13,*(undefined4 *)(lVar23 + lVar34),0);
        if ((uVar16 & 1) == 0) {
          if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
            if (uVar7 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + lVar35 * 0x178;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                         *(undefined4 *)(lVar23 + 0x128),fStack0000000000000104,0,
                         fStack0000000000000084,*(undefined4 *)(lVar23 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = *(long *)puVar11;
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
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar23 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (lVar28 == 0) goto LAB_0354fbf4;
    uVar22 = *(uint *)(lVar23 + lVar35 * 0x178 + 400);
    fVar44 = (float)FUN_03776a30(lVar28 + 0x50,0);
    if ((uVar22 >> 6 & 1) == 0) {
      if (bVar9) {
        if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= uVar25 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar37 = *(undefined4 *)(lVar23 + lVar34 + -0x330);
        fVar46 = *(float *)(lVar23 + lVar34 + -0x30c);
        pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
        (*pcVar24)(fStack00000000000000a0,fStack000000000000009c,uStack0000000000000098,uVar37,
                   fStack00000000000000a8 * fVar44 + fVar46,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_0354f250:
      bVar9 = false;
    }
    else {
      lVar23 = *unaff_x22;
      if ((lVar23 == 0) || (lVar27 = *(long *)(lVar23 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)(lVar27 + lVar35 * 0x178 + 0x174) = in_stack_000017d4;
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar27 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
         (bVar9 || !bVar1)) {
LAB_0354ed84:
        if (!bVar9) goto LAB_0354f250;
      }
      else {
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar16 = FUN_026b97f8(uVar26,0);
          if ((uVar16 & 1) != 0) goto LAB_0354ed84;
          lVar23 = *unaff_x22;
          if (lVar23 == 0) goto LAB_0354fbf4;
        }
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar23 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + lVar35 * 0x178;
        fStack000000000000004c = *(float *)(lVar23 + 0x60);
        fStack0000000000000040 = *(float *)(lVar23 + 0x14c);
        fStack00000000000000a0 = *(float *)(lVar23 + 0x11c);
        fStack00000000000000a8 = *(float *)(lVar23 + 0x160);
        fStack000000000000009c = fVar44 * fStack00000000000000a8 + fStack0000000000000040;
        uStack0000000000000098 = 0;
      }
      iVar14 = *unaff_x20;
      if (iVar14 == 1) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          uVar22 = *(uint *)(lVar23 + 0x18);
LAB_0354ef0c:
          if (uVar7 < uVar22) {
            lVar23 = lVar23 + lVar35 * 0x178;
            lVar27 = *unaff_x19;
            uVar37 = *(undefined4 *)(lVar23 + 0x128);
            fVar46 = *(float *)(lVar23 + 0x14c);
LAB_0354ef24:
            pcVar24 = *(code **)(lVar27 + 0x8d8);
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
        uVar16 = FUN_026b63d8(uVar26,0);
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          uVar22 = *(uint *)(lVar23 + 0x18);
          if (uVar26 == 0x200b || (uVar16 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
          lVar27 = lVar35;
          if (uVar7 < uVar22) {
LAB_0354f1f8:
            lVar23 = lVar23 + lVar27 * 0x178;
            fVar46 = *(float *)(lVar23 + 0x14c);
            uVar37 = *(undefined4 *)(lVar23 + 0x128);
            pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < iVar14) {
        lVar23 = *unaff_x22;
        if ((lVar23 != 0) && (lVar27 = *(long *)(lVar23 + 0x38), lVar27 != 0)) {
          if (uVar25 < *(uint *)(lVar27 + 0x18)) {
            if (*(float *)(lVar27 + lVar34 + -0x108) == fStack000000000000004c) {
              fVar41 = *(float *)(lVar27 + lVar34 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_03567bac(fVar46 + fVar41,fStack0000000000000040,0);
              if ((uVar16 & 1) != 0) {
                iVar14 = *unaff_x20;
                goto LAB_0354f010;
              }
              lVar23 = *unaff_x22;
              if (lVar23 == 0) goto LAB_0354fbf4;
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 != 0) {
              uVar22 = *(uint *)(lVar23 + 0x18);
              if ((int)uVar7 <= (int)uVar6) goto LAB_0354f1f0;
LAB_0354f1e0:
              lVar27 = (long)(int)uVar6;
              if (uVar6 < uVar22) goto LAB_0354f1f8;
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
        iVar14 = FUN_036d3364(lVar28,0);
        if (*(uint *)(lVar20 + 0x18) <= uVar25)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = *(long *)(lVar20 + lVar34 + -0x130);
        if (lVar23 == 0) goto LAB_0354fbf4;
        iVar15 = FUN_036d3364(lVar23,0);
        if (iVar14 != iVar15) {
          if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
            uVar22 = *(uint *)(lVar23 + 0x18);
            goto LAB_0354ef0c;
          }
          goto LAB_0354fbf4;
        }
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
          if (uVar25 - 2 < *(uint *)(lVar23 + 0x18)) {
            lVar27 = *unaff_x19;
            uVar37 = *(undefined4 *)(lVar23 + lVar34 + -0x330);
            fVar46 = *(float *)(lVar23 + lVar34 + -0x30c);
            goto LAB_0354ef24;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      bVar9 = true;
    }
    if ((*unaff_x22 == 0) || (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 == 0))
    goto LAB_0354fbf4;
    uVar22 = (uint)*(undefined8 *)(lVar23 + 0x18);
    if (uVar22 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar23 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
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
          (*(int *)(lVar23 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar10) {
LAB_0354f400:
        if (uVar22 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar23 = lVar23 + lVar35 * 0x178;
        fVar44 = *(float *)(lVar23 + 0x128);
        fVar40 = *(float *)(lVar23 + 0x188);
        uVar33 = *(undefined8 *)(lVar23 + 0x17c);
        fVar47 = *(float *)(lVar23 + 0x184);
        uVar39 = *(undefined8 *)(lVar23 + 0x184);
        fVar45 = *(float *)(lVar23 + 0x18c);
        fVar46 = *(float *)(lVar23 + 0x11c);
        fVar41 = *(float *)(lVar23 + 0x148);
        fVar42 = *(float *)(lVar23 + 0x150);
        in_stack_00000188 = uVar33;
        fStack0000000000000190 = fVar47;
        fStack0000000000000194 = fVar40;
        in_stack_00000198 = fVar45;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar16 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar16 & 1) == 0) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar23);
          }
          fVar44 = fVar44 + (float)in_stack_000017c8;
          fVar46 = fVar46 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar41 = fVar41 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar46 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar46;
          }
          if (fVar42 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar42 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar44) {
            fStack00000000000000d0 = fVar44;
          }
          if (fStack00000000000000d4 <= fVar41) {
            fStack00000000000000d4 = fVar41;
          }
        }
        else {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar23);
          }
          fVar46 = (fVar46 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar42 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar42;
          }
          if (fStack00000000000000d4 <= fVar41) {
            fStack00000000000000d4 = fVar41;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,fVar46,
                     fStack00000000000000d4,in_stack_000000c0);
          fStack00000000000000e4 = fVar42 - fVar45;
          fStack00000000000000d0 = fVar44 + fVar47;
          in_stack_000000c0 = 0;
          fStack00000000000000d4 = fVar41 + fVar40;
          fStack00000000000000e0 = fVar46;
          in_stack_000017c0 = uVar33;
          in_stack_000017c8 = uVar39;
          in_stack_000017d0 = fVar45;
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
        if ((((uVar26 != 0xd) && ((uVar26 & 0xfffe) != 10)) && ((int)uVar7 <= (int)uVar6)) &&
           (bVar1)) {
          if (uVar7 == uVar6) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b97f8(uVar26,0);
            if ((uVar16 & 1) != 0) goto LAB_0354f374;
          }
          puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar11;
          }
          if ((*unaff_x22 != 0) && (lVar23 = *(long *)(*unaff_x22 + 0x38), lVar23 != 0)) {
            uVar22 = (uint)*(undefined8 *)(lVar23 + 0x18);
            if (uVar7 < uVar22) {
              lVar27 = *(long *)(lVar27 + 0xb8);
              lVar28 = lVar23 + lVar35 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar28 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar28 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar27 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar27 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar28 + 0x18c);
              fStack00000000000000d0 = *(float *)(lVar27 + 0x15a0);
              fStack00000000000000d4 = *(float *)(lVar27 + 0x15a4);
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
    lVar34 = lVar34 + 0x178;
    bVar1 = iVar14 <= (int)uVar25;
    uVar22 = uVar2;
    uVar25 = uVar25 + 1;
    if (bVar1) goto LAB_0354f7d0;
    goto LAB_0354d7c0;
  }
  iStack00000000000000d8 = 0;
  iVar15 = 0;
  goto LAB_0354f7f4;
LAB_0354f7d0:
  lVar20 = *unaff_x22;
  if (lVar20 == 0) goto LAB_0354fbf4;
  iVar15 = uVar2 + 1;
  unaff_x25 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
  *(int *)(lVar20 + 0x18) = iVar14;
  lVar34 = unaff_x19[0xd4];
  *(int *)(lVar20 + 0x2c) = iVar15;
  if (iVar14 < 1 || iStack00000000000000d8 == 0) {
    iStack00000000000000d8 = 1;
  }
  *(int *)(lVar20 + 0x1c) = (int)lVar34;
  *(int *)(lVar20 + 0x24) = iStack00000000000000d8;
  *(int *)(lVar20 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) {
LAB_0354d0cc:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar20 = unaff_x19[0xdb];
  if (lVar20 != 0) {
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),*unaff_x22,*(undefined8 *)(lVar20 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*unaff_x22 == 0) || (lVar20 = *(long *)(*unaff_x22 + 0x60), lVar20 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar20 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596b20(lVar20 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
      if (*(int *)(lVar20 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
          if (*(int *)(lVar20 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0))
            {
              if (*(int *)(lVar20 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 != 0)) {
                  if (*(int *)(lVar20 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      lVar20 = *unaff_x22;
                      if (lVar20 != 0) {
                        lVar23 = 0;
                        lVar34 = 0;
                        do {
                          uVar16 = lVar34 + 1;
                          if ((long)*(int *)(lVar20 + 0x34) <= (long)uVar16) goto LAB_0354d0cc;
                          lVar20 = *(long *)(lVar20 + 0x60);
                          if (lVar20 == 0) break;
                          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar20 + 0x18) <= uVar16)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar20 + lVar23 + 0x70,0);
                          lVar20 = unaff_x19[0xe1];
                          if (lVar20 == 0) break;
                          if (*(uint *)(lVar20 + 0x18) <= uVar16)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar39 = *(undefined8 *)(lVar20 + lVar34 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar17 = FUN_036d35a8(uVar39,0,0);
                          if ((uVar17 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*unaff_x22 == 0) ||
                                 (lVar20 = *(long *)(*unaff_x22 + 0x60), lVar20 == 0)) break;
                              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar20 + 0x18) <= uVar16)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar20 + lVar23 + 0x70,1,0);
                            }
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar34 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar27 = *(long *)(*unaff_x22 + 0x60), lVar27 == 0)) break;
                            if (*(uint *)(lVar27 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a460c(lVar20,*(undefined8 *)(lVar27 + lVar23 + 0x80),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar34 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar27 = *(long *)(*unaff_x22 + 0x60), lVar27 == 0)) break;
                            if (*(uint *)(lVar27 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a4810(lVar20,*(undefined8 *)(lVar27 + lVar23 + 0x98),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar34 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar27 = *(long *)(*unaff_x22 + 0x60), lVar27 == 0)) break;
                            if (*(uint *)(lVar27 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a48bc(lVar20,*(undefined8 *)(lVar27 + lVar23 + 0xa0),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar34 * 8 + 0x28);
                            if (lVar20 == 0) break;
                            lVar20 = FUN_0359d5ac(lVar20,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar27 = *(long *)(*unaff_x22 + 0x60), lVar27 == 0)) break;
                            if (*(uint *)(lVar27 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar20 == 0) break;
                            FUN_036a4e24(lVar20,*(undefined8 *)(lVar27 + lVar23 + 0xa8),0);
                            lVar20 = unaff_x19[0xe1];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar16)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar20 = *(long *)(lVar20 + lVar34 * 8 + 0x28);
                            if ((lVar20 == 0) || (lVar20 = FUN_0359d5ac(lVar20,0), lVar20 == 0))
                            break;
                            FUN_036aa280(lVar20,0);
                          }
                          lVar20 = *unaff_x22;
                          lVar34 = lVar34 + 1;
                          lVar23 = lVar23 + 0x50;
                        } while (lVar20 != 0);
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


