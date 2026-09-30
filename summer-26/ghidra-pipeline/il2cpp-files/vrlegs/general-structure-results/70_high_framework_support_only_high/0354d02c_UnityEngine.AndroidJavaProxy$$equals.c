/*
FUNCTION_NAME: UnityEngine.AndroidJavaProxy$$equals
ENTRY_POINT: 0354d02c
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


void UnityEngine_AndroidJavaProxy__equals(undefined1 param_1 [16],float param_2)

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
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  undefined4 *puVar22;
  uint uVar23;
  long lVar24;
  code *pcVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *unaff_x19;
  int *unaff_x20;
  uint uVar34;
  long *unaff_x22;
  long *plVar35;
  long lVar36;
  long lVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
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
  float in_stack_000017e8;
  int in_stack_000017ec;
  
  uVar16 = FUN_0276793c();
  uVar17 = FUN_0277fa90(_fStack0000000000000040,0);
  uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar16,
                        *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar17,0);
  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
  }
  FUN_0367a6ec(uVar16,0);
  puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017ec == 3)))) {
    (**(code **)(*unaff_x19 + 0x928))();
    goto LAB_0354d0cc;
  }
  lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar18 = *(long *)puVar11;
  }
  plVar35 = (long *)OVRPlugin_Media_TypeInfo;
  lVar18 = **(long **)(lVar18 + 0xb8);
  if (lVar18 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  iVar28 = *(int *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
  if ((*unaff_x22 == 0) || (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) goto LAB_0354fbf4;
  if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(lVar18 + 0x18) == 0) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  FUN_035968e8(lVar18 + 0x20,0,0);
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
  }
  iVar14 = (int)unaff_x19[0x4e];
  fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar18 = unaff_x19[0xeb];
  uStack00000000000000b8 = uStack00000000000000f0;
  fStack00000000000000c4 = fStack00000000000000fc;
  if (iVar14 < 0x401) {
    if (iVar14 == 0x100) {
      if (lVar18 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) < 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar16 = *(undefined8 *)(lVar18 + 0x30);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x58), lVar36 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000034)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar40 = *(float *)(lVar36 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
      }
      else {
        fVar40 = *(float *)(unaff_x19 + 0x97);
      }
      fStack00000000000000c4 = in_stack_00000028 + 0.0 + *(float *)(lVar18 + 0x2c);
      param_2 = (0.0 - fVar40) - in_stack_00000018._4_4_;
    }
    else if (iVar14 == 0x200) {
      if (lVar18 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar18 + 0x18) == 1) || (*(int *)(lVar18 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fStack00000000000000c4 = (*(float *)(lVar18 + 0x20) + *(float *)(lVar18 + 0x2c)) * 0.5;
      uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar18 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar18 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar18 + 0x24) +
                        (float)*(undefined8 *)(lVar18 + 0x30)) * 0.5);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x22 == 0) || (lVar18 = *(long *)(*unaff_x22 + 0x58), lVar18 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar18 + 0x18) <= uStack0000000000000034)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar18 = lVar18 + (long)(int)uStack0000000000000034 * 0x14;
        fStack00000000000000c4 = in_stack_00000028 + 0.0 + fStack00000000000000c4;
        param_2 = ((in_stack_00000018._4_4_ + *(float *)(lVar18 + 0x28) + *(float *)(lVar18 + 0x30))
                  - in_stack_00000020) * -0.5 + 0.0;
      }
      else {
        fStack00000000000000c4 = in_stack_00000028 + 0.0 + fStack00000000000000c4;
        param_2 = ((in_stack_00000018._4_4_ + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                  in_stack_00000020) * -0.5 + 0.0;
      }
    }
    else {
      if (iVar14 != 0x400) goto LAB_0354d620;
      if (lVar18 == 0) goto LAB_0354fbf4;
      if (*(int *)(lVar18 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar16 = *(undefined8 *)(lVar18 + 0x24);
      if ((int)unaff_x19[0x5c] == 5) {
        if ((*unaff_x22 == 0) || (lVar36 = *(long *)(*unaff_x22 + 0x58), lVar36 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000034)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        in_stack_000017e8 = *(float *)(lVar36 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
      }
      fStack00000000000000c4 = in_stack_00000028 + 0.0 + *(float *)(lVar18 + 0x20);
      param_2 = in_stack_00000020 + (0.0 - in_stack_000017e8);
    }
LAB_0354d610:
    uStack00000000000000b8 = CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + param_2);
  }
  else if (iVar14 == 0x800) {
    if (lVar18 == 0) goto LAB_0354fbf4;
    if ((*(int *)(lVar18 + 0x18) == 1) || (*(int *)(lVar18 + 0x18) == 0))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    param_2 = in_stack_00000028 + 0.0 +
              (*(float *)(lVar18 + 0x20) + *(float *)(lVar18 + 0x2c)) * 0.5;
    uStack00000000000000b8 =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar18 + 0x24) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar18 + 0x30) >> 0x20)) * 0.5 + 0.0,
                  ((float)*(undefined8 *)(lVar18 + 0x24) + (float)*(undefined8 *)(lVar18 + 0x30)) *
                  0.5 + 0.0);
    fStack00000000000000c4 = param_2;
  }
  else {
    if (iVar14 == 0x1000) {
      if (lVar18 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar18 + 0x18) == 1) || (*(int *)(lVar18 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar18 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar18 + 0x30) >> 0x20)) * 0.5,
                        ((float)*(undefined8 *)(lVar18 + 0x24) +
                        (float)*(undefined8 *)(lVar18 + 0x30)) * 0.5);
      fStack00000000000000c4 =
           in_stack_00000028 + 0.0 + (*(float *)(lVar18 + 0x20) + *(float *)(lVar18 + 0x2c)) * 0.5;
      param_2 = 0.0 - ((in_stack_00000018._4_4_ + *(float *)(unaff_x19 + 0x9d) +
                       *(float *)(unaff_x19 + 0x9c)) - in_stack_00000020) * 0.5;
      goto LAB_0354d610;
    }
    if (iVar14 == 0x2000) {
      if (lVar18 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar18 + 0x18) == 1) || (*(int *)(lVar18 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      param_2 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - in_stack_00000018._4_4_) -
                      in_stack_00000020) * 0.5;
      uStack00000000000000b8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar18 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar18 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar18 + 0x24) + (float)*(undefined8 *)(lVar18 + 0x30))
                    * 0.5 + param_2);
      fStack00000000000000c4 =
           in_stack_00000028 + 0.0 + (*(float *)(lVar18 + 0x20) + *(float *)(lVar18 + 0x2c)) * 0.5;
    }
  }
LAB_0354d620:
  lVar18 = FUN_03559490();
  if (lVar18 == 0) goto LAB_0354fbf4;
  FUN_036df824(lVar18,0);
  *(float *)((long)unaff_x19 + 0x6e4) = param_2;
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
  lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar18 = *(long *)puVar11;
  }
  puVar22 = *(undefined4 **)(lVar18 + 0xb8);
  FUN_035683a4(*puVar22,puVar22[1],puVar22[2],puVar22[3],&stack0x000017c0,0x4000ffff,0);
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar18 = *unaff_x22;
  if (lVar18 == 0) goto LAB_0354fbf4;
  iVar14 = *unaff_x20;
  if (0 < iVar14) {
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto LAB_0354fbf4;
    bVar12 = false;
    bVar10 = false;
    bVar8 = false;
    iStack0000000000000124 = 0;
    bVar9 = false;
    iStack00000000000000d8 = 0;
    uStack0000000000000030 = 0;
    uStack000000000000016c = 0;
    iStack000000000000005c = 0;
    lVar36 = 0x2e0;
    fVar38 = 0.0;
    fVar40 = 0.0;
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
    uVar23 = 0;
    uVar26 = 1;
LAB_0354d7c0:
    uVar7 = uVar26 - 1;
    if (*(uint *)(lVar18 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x50), lVar24 == 0))
    goto LAB_0354fbf4;
    lVar37 = (long)(int)uVar7;
    lVar29 = lVar18 + lVar37 * 0x178;
    uVar2 = *(uint *)(lVar29 + 100);
    if (*(uint *)(lVar24 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar30 = *(long *)(lVar29 + 0x38);
    lVar33 = (long)(int)uVar2;
    lVar24 = lVar24 + lVar33 * 0x5c;
    uVar34 = *(uint *)(lVar24 + 0x68);
    uVar27 = (uint)*(ushort *)(lVar29 + 0x20);
    uVar5 = *(uint *)(lVar24 + 0x3c);
    iVar3 = *(int *)(lVar24 + 0x20);
    iVar14 = *(int *)(lVar24 + 0x28);
    iVar15 = *(int *)(lVar24 + 0x2c);
    fVar42 = *(float *)(lVar24 + 0x4c);
    uVar6 = *(uint *)(lVar24 + 0x40);
    fVar41 = *(float *)(lVar24 + 0x54);
    fVar47 = *(float *)(lVar24 + 0x58);
    fVar48 = *(float *)(lVar24 + 0x5c);
    fVar49 = *(float *)(lVar24 + 0x60);
    fVar46 = *(float *)(lVar24 + 0x6c);
    fVar50 = *(float *)(lVar24 + 0x70);
    fVar45 = *(float *)(lVar24 + 0x74);
    fVar43 = *(float *)(lVar24 + 0x78);
    if ((int)uVar34 < 9) {
      switch(uVar34) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack00000000000000fc = fVar49 + 0.0;
        }
        else {
          fStack00000000000000fc = 0.0 - fVar47;
        }
        break;
      case 2:
LAB_0354d968:
        fStack00000000000000fc = (fVar49 + fVar48 * 0.5) - fVar47 * 0.5;
        break;
      default:
        goto switchD_0354d8a4_caseD_3;
      case 4:
        fStack00000000000000fc = (fVar48 + fVar49) - fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar48 + fVar49;
        }
        break;
      case 8:
        goto switchD_0354d8a4_caseD_8;
      }
LAB_0354d9d8:
      uStack00000000000000f0 = 0;
    }
    else if (uVar34 == 0x10) {
switchD_0354d8a4_caseD_8:
      if (uVar27 < 0xad) {
        if ((uVar27 != 3) && (uVar27 != 10)) {
FUN_0354d8fc:
          if (*(uint *)(lVar18 + 0x18) <= uVar5)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar18 + (long)(int)uVar5 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b8cc4(uVar4,0);
          if ((uVar19 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar47 <= fVar48) && (!bVar1 && uVar34 >> 4 == 0)) {
            fStack00000000000000fc = fVar49;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar48 + fVar49;
            }
            goto LAB_0354d9d8;
          }
          if (((uVar26 == 1) || (uVar2 != uVar23)) || (uVar7 == *(uint *)((long)unaff_x19 + 0x324)))
          {
            fStack00000000000000fc = fVar49;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack00000000000000fc = fVar48 + fVar49;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000030 = FUN_026b97f8(uVar27,0);
            uStack00000000000000f0 = 0;
          }
          else {
            cVar21 = (char)unaff_x19[0x1e];
            fVar49 = -fVar47;
            if (cVar21 != '\0') {
              fVar49 = fVar47;
            }
            if (*(uint *)(lVar18 + 0x18) <= uVar5)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            iVar15 = (int)*(char *)(lVar18 + (long)(int)uVar5 * 0x178 + 0x194) +
                     (-iVar3 - (uStack0000000000000030 & 1)) + iVar15 + -1;
            if (iVar15 < 1) {
              fVar47 = 1.0;
              iVar15 = 1;
            }
            else {
              fVar47 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (uVar27 == 9) {
LAB_0354f76c:
              fVar47 = 1.0 - fVar47;
            }
            else {
              if (uVar27 != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar19 = FUN_026b97f8(uVar27,0);
                cVar21 = (char)unaff_x19[0x1e];
                if ((uVar19 & 1) != 0) goto LAB_0354f76c;
              }
              iVar15 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar14;
            }
            fVar47 = ((fVar48 + fVar49) * fVar47) / (float)iVar15;
            if (cVar21 == '\0') {
              fStack00000000000000fc = fStack00000000000000fc + fVar47;
              uStack00000000000000f0 =
                   CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                            (float)uStack00000000000000f0 + 0.0);
            }
            else {
              fStack00000000000000fc = fStack00000000000000fc - fVar47;
            }
          }
        }
      }
      else if (((uVar27 != 0xad) && (uVar27 != 0x200b)) && (uVar27 != 0x2060)) goto FUN_0354d8fc;
    }
    else if (uVar34 == 0x20) {
      fVar47 = fVar46 + fVar45;
      goto LAB_0354d968;
    }
switchD_0354d8a4_caseD_3:
    uVar34 = (uint)*(undefined8 *)(lVar18 + 0x18);
    if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar18 + lVar37 * 0x178;
    fVar49 = fStack00000000000000c4 + fStack00000000000000fc;
    fVar47 = (float)uStack00000000000000b8 + (float)uStack00000000000000f0;
    fVar48 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
             (float)((ulong)uStack00000000000000f0 >> 0x20);
    if (*(char *)(lVar24 + 0x194) == '\0') goto LAB_0354e1d0;
    iVar14 = *(int *)(lVar18 + lVar37 * 0x178 + 0x2c);
    if (iVar14 != 0) goto LAB_0354e05c;
    fVar38 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar29 = lVar18 + lVar37 * 0x178;
      *(undefined4 *)(lVar29 + 0x84) = 0;
      *(undefined4 *)(lVar29 + 0xac) = 0;
      *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
      fVar38 = 1.0;
      break;
    case 1:
      fVar43 = *(float *)(lVar18 + lVar37 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar29 = lVar18 + lVar37 * 0x178;
        fVar45 = (fStack00000000000000fc + fVar43) - *(float *)(in_stack_00000078 + 0x230);
        fVar43 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
        goto LAB_0354db24;
      }
      lVar29 = lVar18 + lVar37 * 0x178;
      fVar45 = fVar45 - fVar46;
      *(float *)(lVar29 + 0x84) = fVar38 + (fVar43 - fVar46) / fVar45;
      *(float *)(lVar29 + 0xac) = fVar38 + (*(float *)(lVar29 + 0x98) - fVar46) / fVar45;
      *(float *)(lVar29 + 0xd4) = fVar38 + (*(float *)(lVar29 + 0xc0) - fVar46) / fVar45;
      fVar38 = fVar38 + (*(float *)(lVar29 + 0xe8) - fVar46) / fVar45;
      break;
    case 2:
      lVar29 = lVar18 + lVar37 * 0x178;
      fVar43 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      fVar45 = (fStack00000000000000fc + *(float *)(lVar29 + 0x70)) -
               *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
      *(float *)(lVar29 + 0x84) = fVar38 + fVar45 / fVar43;
      *(float *)(lVar29 + 0xac) =
           fVar38 + ((fStack00000000000000fc + *(float *)(lVar29 + 0x98)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      *(float *)(lVar29 + 0xd4) =
           fVar38 + ((fStack00000000000000fc + *(float *)(lVar29 + 0xc0)) -
                    *(float *)(in_stack_00000078 + 0x230)) /
                    (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
      fVar38 = fVar38 + ((fStack00000000000000fc + *(float *)(lVar29 + 0xe8)) -
                        *(float *)(in_stack_00000078 + 0x230)) /
                        (*(float *)(in_stack_00000078 + 0x238) -
                        *(float *)(in_stack_00000078 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar29 = lVar18 + lVar37 * 0x178;
        *(undefined4 *)(lVar29 + 0x88) = 0;
        *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar29 + 0xd8) = 0;
        *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar29 = lVar18 + lVar37 * 0x178;
        fVar43 = fVar43 - fVar50;
        fVar45 = fVar38 + (*(float *)(lVar29 + 0x74) - fVar50) / fVar43;
        fVar43 = fVar38 + (*(float *)(lVar29 + 0x9c) - fVar50) / fVar43;
        *(float *)(lVar29 + 0x88) = fVar45;
        *(float *)(lVar29 + 0xb0) = fVar43;
        *(float *)(lVar29 + 0xd8) = fVar45;
        *(float *)(lVar29 + 0x100) = fVar43;
        break;
      case 2:
        lVar29 = lVar18 + lVar37 * 0x178;
        fVar45 = fVar38 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar29 + 0x88) = fVar45;
        fVar43 = *(float *)(unaff_x19 + 0x9c);
        fVar46 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar29 + 0xd8) = fVar45;
        fVar45 = fVar38 + (*(float *)(lVar29 + 0x9c) - fVar43) / (fVar46 - fVar43);
        *(float *)(lVar29 + 0xb0) = fVar45;
        *(float *)(lVar29 + 0x100) = fVar45;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar34 = (uint)*(undefined8 *)(lVar18 + 0x18);
      }
      if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar29 = lVar18 + lVar37 * 0x178;
      fVar45 = *(float *)(lVar29 + 0x15c);
      fVar43 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar45) * 0.5;
      fVar46 = fVar38 + *(float *)(lVar29 + 0x88) * fVar45 + fVar43;
      fVar38 = fVar38 + fVar43 + *(float *)(lVar29 + 0xb0) * fVar45;
      *(float *)(lVar29 + 0x84) = fVar46;
      *(float *)(lVar29 + 0xac) = fVar46;
      *(float *)(lVar29 + 0xd4) = fVar38;
      break;
    default:
      goto switchD_0354da88_default;
    }
    *(float *)(lVar18 + lVar37 * 0x178 + 0xfc) = fVar38;
switchD_0354da88_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar29 = lVar18 + lVar37 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0x100) = 0;
      break;
    case 1:
      if (uVar7 < uVar34) {
        lVar29 = lVar18 + lVar37 * 0x178;
        fVar42 = fVar42 - fVar41;
        fVar38 = (*(float *)(lVar29 + 0x74) - fVar41) / fVar42;
        fVar42 = (*(float *)(lVar29 + 0x9c) - fVar41) / fVar42;
        *(float *)(lVar29 + 0x88) = fVar38;
        goto LAB_0354de84;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    case 2:
      if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar29 = lVar18 + lVar37 * 0x178;
      fVar38 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar29 + 0x88) = fVar38;
      fVar42 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
      *(float *)(lVar29 + 0xb0) = fVar42;
      *(float *)(lVar29 + 0xd8) = fVar42;
      *(float *)(lVar29 + 0x100) = fVar38;
      break;
    case 3:
      if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar29 = lVar18 + lVar37 * 0x178;
      fVar42 = *(float *)(lVar29 + 0x15c);
      fVar45 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar42) * 0.5;
      fVar38 = *(float *)(lVar29 + 0x84) / fVar42 + fVar45;
      fVar45 = fVar45 + *(float *)(lVar29 + 0xd4) / fVar42;
      *(float *)(lVar29 + 0x88) = fVar38;
      *(float *)(lVar29 + 0xb0) = fVar45;
      *(float *)(lVar29 + 0x100) = fVar38;
      *(float *)(lVar29 + 0xd8) = fVar45;
    }
    if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar29 = lVar18 + lVar37 * 0x178;
    fVar38 = ABS(param_2) * *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
    ;
    if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar18 + lVar37 * 0x178 + 400) & 1) != 0))
    {
      fVar38 = -fVar38;
    }
    lVar29 = lVar18 + lVar37 * 0x178;
    fVar42 = *(float *)(lVar29 + 0x88);
    fVar43 = *(float *)(lVar29 + 0x84);
    fVar45 = -2.1474836e+09;
    if (fVar43 != INFINITY) {
      fVar45 = (float)(int)fVar43;
    }
    fVar46 = *(float *)(lVar29 + 0xd4);
    fVar50 = *(float *)(lVar29 + 0xd8);
    fVar41 = -2.1474836e+09;
    if (fVar42 != INFINITY) {
      fVar41 = (float)(int)fVar42;
    }
    uVar39 = FUN_03591d3c(fVar43 - fVar45,fVar42 - fVar41);
    *(undefined4 *)(lVar29 + 0x84) = uVar39;
    if (*(uint *)(lVar18 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar50 = fVar50 - fVar41;
    *(float *)(lVar29 + 0x88) = fVar38;
    uVar39 = FUN_03591d3c(fVar43 - fVar45,fVar50);
    *(undefined4 *)(lVar18 + lVar37 * 0x178 + 0xac) = uVar39;
    if (*(uint *)(lVar18 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar46 = fVar46 - fVar45;
    *(float *)(lVar18 + lVar37 * 0x178 + 0xb0) = fVar38;
    fVar45 = (float)FUN_03591d3c(fVar46,fVar50);
    *(float *)(lVar29 + 0xd4) = fVar45;
    if (*(uint *)(lVar18 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar29 + 0xd8) = fVar38;
    uVar39 = FUN_03591d3c(fVar46,fVar42 - fVar41);
    *(undefined4 *)(lVar18 + lVar37 * 0x178 + 0xfc) = uVar39;
    uVar34 = (uint)*(undefined8 *)(lVar18 + 0x18);
    if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar18 + lVar37 * 0x178 + 0x100) = fVar38;
LAB_0354e05c:
    if (((int)uVar7 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
        lVar24 = lVar18 + lVar37 * 0x178;
        *(ulong *)(lVar24 + 0x70) =
             CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar24 + 0x70));
        *(float *)(lVar24 + 0x78) = fVar48 + *(float *)(lVar24 + 0x78);
        *(ulong *)(lVar24 + 0x98) =
             CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar24 + 0x98));
        *(float *)(lVar24 + 0xa0) = fVar48 + *(float *)(lVar24 + 0xa0);
        *(ulong *)(lVar24 + 0xc0) =
             CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar24 + 0xc0));
        *(float *)(lVar24 + 200) = fVar48 + *(float *)(lVar24 + 200);
        *(ulong *)(lVar24 + 0xe8) =
             CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar24 + 0xe8));
        *(float *)(lVar24 + 0xf0) = fVar48 + *(float *)(lVar24 + 0xf0);
        goto LAB_0354e184;
      }
      if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (uVar7 < uVar34) {
          if (*(uint *)(lVar18 + lVar37 * 0x178 + 0x68) == uStack0000000000000034)
          goto LAB_0354f0d4;
          goto LAB_0354e0cc;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
    }
LAB_0354e0cc:
    if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac();
      DAT_0411f172 = '\x01';
      uVar34 = *(uint *)(lVar18 + 0x18);
    }
    puVar11 = PTR_DAT_03cbded8;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar29 = lVar18 + lVar37 * 0x178;
    *(undefined8 *)(lVar29 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar29 + 0x78) = uVar39;
    if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    lVar29 = lVar18 + lVar37 * 0x178;
    *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar29 + 0xa0) = uVar39;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar29 + 200) = uVar39;
    uVar39 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar29 + 0xf0) = uVar39;
    *(undefined1 *)(lVar24 + 0x194) = 0;
LAB_0354e184:
    if (iVar14 == 0) {
      pcVar25 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
      (*pcVar25)();
    }
    else if (iVar14 == 1) {
      pcVar25 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0354e1b4;
    }
LAB_0354e1d0:
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar24 + lVar37 * 0x178;
    uVar16 = *(undefined8 *)(lVar24 + 0x11c);
    *(undefined8 *)(lVar24 + 0x11c) =
         CONCAT44(fVar47 + (float)((ulong)uVar16 >> 0x20),fVar49 + (float)uVar16);
    *(float *)(lVar24 + 0x124) = fVar48 + *(float *)(lVar24 + 0x124);
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar24 + lVar37 * 0x178;
    *(ulong *)(lVar24 + 0x110) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar24 + 0x110) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar24 + 0x110));
    *(float *)(lVar24 + 0x118) = fVar48 + *(float *)(lVar24 + 0x118);
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar24 + lVar37 * 0x178;
    *(ulong *)(lVar24 + 0x128) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar24 + 0x128) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar24 + 0x128));
    *(float *)(lVar24 + 0x130) = fVar48 + *(float *)(lVar24 + 0x130);
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar24 = lVar24 + lVar37 * 0x178;
    *(float *)(lVar24 + 0x134) = fVar49 + *(float *)(lVar24 + 0x134);
    *(ulong *)(lVar24 + 0x138) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar24 + 0x138) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar24 + 0x138));
    lVar24 = *unaff_x22;
    if ((lVar24 == 0) || (lVar29 = *(long *)(lVar24 + 0x38), lVar29 == 0)) goto LAB_0354fbf4;
    uVar34 = *(uint *)(lVar29 + 0x18);
    if (uVar34 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar29 + lVar37 * 0x178;
    *(float *)(lVar31 + 0x150) = fVar47 + *(float *)(lVar31 + 0x150);
    *(ulong *)(lVar31 + 0x140) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar31 + 0x140) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar31 + 0x140));
    *(ulong *)(lVar31 + 0x148) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar31 + 0x148) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar31 + 0x148));
    if (uVar2 == uVar23) {
      uVar23 = *unaff_x20 - 1;
      if (uVar7 == uVar23) goto LAB_0354e3ec;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = (long)(int)uVar23;
      lVar32 = lVar24 + lVar31 * 0x5c;
      fVar45 = fVar47 + *(float *)(lVar32 + 0x54);
      *(ulong *)(lVar32 + 0x4c) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar32 + 0x4c) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar32 + 0x4c));
      *(float *)(lVar32 + 0x54) = fVar45;
      *(float *)(lVar32 + 0x58) = fVar49 + *(float *)(lVar32 + 0x58);
      if (uVar34 <= *(uint *)(lVar32 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar39 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar32 + 0x34) * 0x178 + 0x11c);
      lVar24 = lVar24 + lVar31 * 0x5c;
      *(float *)(lVar24 + 0x70) = fVar45;
      *(undefined4 *)(lVar24 + 0x6c) = uVar39;
      lVar24 = *unaff_x22;
      if ((lVar24 == 0) || (lVar29 = *(long *)(lVar24 + 0x50), lVar29 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar29 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_0354fbf4;
      uVar23 = *(uint *)(lVar29 + lVar31 * 0x5c + 0x40);
      if (*(uint *)(lVar24 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar29 = lVar29 + lVar31 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar23 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      uVar23 = *unaff_x20 - 1;
LAB_0354e3ec:
      if (uVar7 == uVar23) {
        lVar24 = *unaff_x22;
        if ((lVar24 == 0) || (lVar29 = *(long *)(lVar24 + 0x50), lVar29 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar31 = lVar29 + lVar33 * 0x5c;
        fVar45 = fVar47 + *(float *)(lVar31 + 0x54);
        *(ulong *)(lVar31 + 0x4c) =
             CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar31 + 0x4c) >> 0x20),
                      fVar47 + (float)*(undefined8 *)(lVar31 + 0x4c));
        *(float *)(lVar31 + 0x54) = fVar45;
        *(float *)(lVar31 + 0x58) = fVar49 + *(float *)(lVar31 + 0x58);
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar31 + 0x34))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar39 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar31 + 0x34) * 0x178 + 0x11c);
        lVar29 = lVar29 + lVar33 * 0x5c;
        *(float *)(lVar29 + 0x70) = fVar45;
        *(undefined4 *)(lVar29 + 0x6c) = uVar39;
        lVar24 = *unaff_x22;
        if ((lVar24 == 0) || (lVar29 = *(long *)(lVar24 + 0x50), lVar29 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_0354fbf4;
        uVar23 = *(uint *)(lVar29 + lVar33 * 0x5c + 0x40);
        if (*(uint *)(lVar24 + 0x18) <= uVar23)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar29 = lVar29 + lVar33 * 0x5c;
        *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar23 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b82c4(uVar27,0);
    if (((((uVar19 & 1) == 0) && (1 < uVar27 - 0x2010)) && (uVar27 != 0xad)) && (uVar27 != 0x2d)) {
      if (bVar8) {
        if (((uVar26 != 1) && ((int)uVar7 < (int)(*(uint *)(lVar18 + 0x18) - 1))) &&
           (((int)uVar7 < *unaff_x20 && ((uVar27 == 0x2019 || (uVar27 == 0x27)))))) {
          if (*(uint *)(lVar18 + 0x18) <= uVar26 - 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar18 + lVar36 + -0x438);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar4,0);
          if ((uVar19 & 1) != 0) {
            if (*(uint *)(lVar18 + 0x18) <= uVar26)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar4 = *(undefined2 *)(lVar18 + lVar36 + -0x148);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b82c4(uVar4,0);
            if ((uVar19 & 1) != 0) goto LAB_0354e610;
          }
        }
      }
      else {
        if (uVar26 != 1) {
LAB_0354f144:
          bVar8 = false;
          goto LAB_0354e618;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b81f8(uVar27,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b63d8(uVar27,0);
          if (((uVar27 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
        }
      }
      if (uVar7 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar27,0);
        iVar14 = iStack0000000000000124;
        if ((uVar19 & 1) == 0) goto LAB_0354e93c;
      }
      else {
LAB_0354e93c:
        iVar14 = uVar26 - 2;
      }
      lVar24 = *unaff_x22;
      if (lVar24 == 0) goto LAB_0354fbf4;
      lVar29 = *(long *)(lVar24 + 0x40);
      if (lVar29 == 0) goto LAB_0354fbf4;
      uVar23 = *(uint *)(lVar24 + 0x24);
      iVar15 = *(int *)(lVar29 + 0x18);
      if (iVar15 < (int)(uVar23 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar24 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar24 = *unaff_x22;
        if (lVar24 == 0) goto LAB_0354fbf4;
      }
      lVar24 = *(long *)(lVar24 + 0x40);
      if (lVar24 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar24 + 0x18) <= uVar23)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar24 = lVar24 + (long)(int)uVar23 * 0x18;
      *(long **)(lVar24 + 0x20) = unaff_x19;
      *(uint *)(lVar24 + 0x28) = uStack000000000000016c;
      *(int *)(lVar24 + 0x2c) = iVar14;
      *(uint *)(lVar24 + 0x30) = (iVar14 - uStack000000000000016c) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar24 = unaff_x19[0x6d];
      if (lVar24 == 0) goto LAB_0354fbf4;
      lVar29 = *(long *)(lVar24 + 0x50);
      *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar29 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar29 = lVar29 + lVar33 * 0x5c;
      bVar8 = false;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uStack000000000000016c = uVar7;
      }
      if (uVar7 == *unaff_x20 - 1U) {
        lVar24 = *unaff_x22;
        if (lVar24 == 0) goto LAB_0354fbf4;
        lVar29 = *(long *)(lVar24 + 0x40);
        if (lVar29 == 0) goto LAB_0354fbf4;
        uVar23 = *(uint *)(lVar24 + 0x24);
        iVar14 = *(int *)(lVar29 + 0x18);
        if (iVar14 < (int)(uVar23 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar24 + 0x40),iVar14 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar24 = *unaff_x22;
          if (lVar24 == 0) goto LAB_0354fbf4;
        }
        lVar24 = *(long *)(lVar24 + 0x40);
        if (lVar24 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= uVar23)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = lVar24 + (long)(int)uVar23 * 0x18;
        *(long **)(lVar24 + 0x20) = unaff_x19;
        *(uint *)(lVar24 + 0x28) = uStack000000000000016c;
        *(uint *)(lVar24 + 0x2c) = uVar7;
        *(uint *)(lVar24 + 0x30) = uVar26 - uStack000000000000016c;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar24 = unaff_x19[0x6d];
        if (lVar24 == 0) goto LAB_0354fbf4;
        lVar29 = *(long *)(lVar24 + 0x50);
        *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
        if (lVar29 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar29 = lVar29 + lVar33 * 0x5c;
        iStack00000000000000d8 = iStack00000000000000d8 + 1;
        *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
      }
LAB_0354e610:
      bVar8 = true;
    }
LAB_0354e618:
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    uVar23 = *(uint *)(lVar24 + 0x18);
    if (uVar23 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar24 + lVar37 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_0354e660:
        if (uVar23 <= uVar26 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar29 = *unaff_x19;
        uVar39 = *(undefined4 *)(lVar24 + lVar36 + -0x330);
        uVar44 = *(undefined4 *)(lVar24 + lVar36 + -0x2f8);
LAB_0354ebc0:
        pcVar25 = *(code **)(lVar29 + 0x8d8);
LAB_0354ebc8:
        (*pcVar25)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar39,
                   fStack0000000000000104,0,fStack0000000000000084,uVar44);
        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar11;
        }
LAB_0354ec1c:
        fVar40 = 0.0;
        bVar12 = false;
        fStack0000000000000104 = *(float *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_0354eb28:
        bVar12 = false;
      }
    }
    else {
      lVar24 = lVar24 + lVar37 * 0x178;
      iVar14 = *(int *)(lVar24 + 0x68);
      *(int *)(lVar24 + 0x16c) = iVar28;
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
      uVar19 = FUN_026b63d8(uVar27,0);
      if ((uVar27 != 0x200b) && ((uVar19 & 1) == 0)) {
        lVar24 = *unaff_x22;
        if ((lVar24 == 0) || (lVar29 = *(long *)(lVar24 + 0x38), lVar29 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar29 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar45 = *(float *)(lVar29 + lVar37 * 0x178 + 0x160);
        if (fVar40 <= fVar45) {
          fVar40 = fVar45;
        }
        if (fStack0000000000000100 <= ABS(fVar38)) {
          fStack0000000000000100 = ABS(fVar38);
        }
        if (iVar14 != iStack000000000000005c) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *unaff_x22;
            if (lVar24 == 0) goto LAB_0354fbf4;
            lVar29 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar29 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar29 + 0x15a8);
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
        fVar42 = *(float *)(lVar24 + lVar37 * 0x178 + 0x14c);
        fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar42 = fVar42 + fVar40 * fVar45;
        iStack000000000000005c = iVar14;
        if (fVar42 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar42;
        }
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar27 == 0xd) || ((uVar27 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar27,0);
          if ((uVar19 & 1) != 0) goto LAB_0354eb28;
        }
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = lVar24 + lVar37 * 0x178;
        fStack0000000000000084 = *(float *)(lVar24 + 0x160);
        fStack0000000000000070 = *(float *)(lVar24 + 0x11c);
        bVar12 = fVar40 != 0.0;
        fVar45 = fStack0000000000000084;
        if (bVar12) {
          fVar45 = fVar40;
        }
        fVar40 = fVar45;
        uVar13 = *(undefined4 *)(lVar24 + 0x168);
        uStack000000000000006c = 0;
        fVar45 = fVar38;
        if (bVar12) {
          fVar45 = fStack0000000000000100;
        }
        fStack0000000000000068 = fStack0000000000000104;
        fStack0000000000000100 = fVar45;
      }
      if (*unaff_x20 == 1) {
        if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
          if (uVar7 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar37 * 0x178;
            lVar29 = *unaff_x19;
            uVar39 = *(undefined4 *)(lVar24 + 0x128);
            uVar44 = *(undefined4 *)(lVar24 + 0x160);
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
        uVar19 = FUN_026b63d8(uVar27,0);
        if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
          lVar29 = lVar37;
          uVar23 = uVar7;
          if (uVar27 == 0x200b || (uVar19 & 1) != 0) {
            lVar29 = (long)(int)uVar6;
            uVar23 = uVar6;
          }
          if (uVar23 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar29 * 0x178;
            uVar39 = *(undefined4 *)(lVar24 + 0x128);
            uVar44 = *(undefined4 *)(lVar24 + 0x160);
            pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354ebc8;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
          uVar23 = *(uint *)(lVar24 + 0x18);
          goto LAB_0354e660;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < *unaff_x20 + -1) {
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= uVar26)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar19 = FUN_03567ad8(uVar13,*(undefined4 *)(lVar24 + lVar36),0);
        if ((uVar19 & 1) == 0) {
          if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
            if (uVar7 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + lVar37 * 0x178;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                         *(undefined4 *)(lVar24 + 0x128),fStack0000000000000104,0,
                         fStack0000000000000084,*(undefined4 *)(lVar24 + 0x160));
              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar24 = *(long *)puVar11;
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
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar24 + 0x18) <= uVar7)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (lVar30 == 0) goto LAB_0354fbf4;
    uVar23 = *(uint *)(lVar24 + lVar37 * 0x178 + 400);
    fVar45 = (float)FUN_03776a30(lVar30 + 0x50,0);
    if ((uVar23 >> 6 & 1) == 0) {
      if (bVar9) {
        if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
        goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= uVar26 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar39 = *(undefined4 *)(lVar24 + lVar36 + -0x330);
        fVar47 = *(float *)(lVar24 + lVar36 + -0x30c);
        pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
        (*pcVar25)(fStack00000000000000a0,fStack000000000000009c,uStack0000000000000098,uVar39,
                   fStack00000000000000a8 * fVar45 + fVar47,0,fStack00000000000000a8,
                   fStack00000000000000a8);
      }
LAB_0354f250:
      bVar9 = false;
    }
    else {
      lVar24 = *unaff_x22;
      if ((lVar24 == 0) || (lVar29 = *(long *)(lVar24 + 0x38), lVar29 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar29 + 0x18) <= uVar7)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(int *)(lVar29 + lVar37 * 0x178 + 0x174) = iVar28;
      if ((((int)unaff_x19[0x65] < (int)uVar7) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar29 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar27 == 0xd) || ((uVar27 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
         (bVar9 || !bVar1)) {
LAB_0354ed84:
        if (!bVar9) goto LAB_0354f250;
      }
      else {
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b97f8(uVar27,0);
          if ((uVar19 & 1) != 0) goto LAB_0354ed84;
          lVar24 = *unaff_x22;
          if (lVar24 == 0) goto LAB_0354fbf4;
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar24 + 0x18) <= uVar7)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = lVar24 + lVar37 * 0x178;
        fStack000000000000004c = *(float *)(lVar24 + 0x60);
        fStack0000000000000040 = *(float *)(lVar24 + 0x14c);
        fStack00000000000000a0 = *(float *)(lVar24 + 0x11c);
        fStack00000000000000a8 = *(float *)(lVar24 + 0x160);
        fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000040;
        uStack0000000000000098 = 0;
      }
      iVar14 = *unaff_x20;
      if (iVar14 == 1) {
        if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
          uVar23 = *(uint *)(lVar24 + 0x18);
LAB_0354ef0c:
          if (uVar7 < uVar23) {
            lVar24 = lVar24 + lVar37 * 0x178;
            lVar29 = *unaff_x19;
            uVar39 = *(undefined4 *)(lVar24 + 0x128);
            fVar47 = *(float *)(lVar24 + 0x14c);
LAB_0354ef24:
            pcVar25 = *(code **)(lVar29 + 0x8d8);
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
        uVar19 = FUN_026b63d8(uVar27,0);
        if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
          uVar23 = *(uint *)(lVar24 + 0x18);
          if (uVar27 == 0x200b || (uVar19 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
          lVar29 = lVar37;
          if (uVar7 < uVar23) {
LAB_0354f1f8:
            lVar24 = lVar24 + lVar29 * 0x178;
            fVar47 = *(float *)(lVar24 + 0x14c);
            uVar39 = *(undefined4 *)(lVar24 + 0x128);
            pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_0354f21c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      if ((int)uVar7 < iVar14) {
        lVar24 = *unaff_x22;
        if ((lVar24 != 0) && (lVar29 = *(long *)(lVar24 + 0x38), lVar29 != 0)) {
          if (uVar26 < *(uint *)(lVar29 + 0x18)) {
            if (*(float *)(lVar29 + lVar36 + -0x108) == fStack000000000000004c) {
              fVar42 = *(float *)(lVar29 + lVar36 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar19 = FUN_03567bac(fVar47 + fVar42,fStack0000000000000040,0);
              if ((uVar19 & 1) != 0) {
                iVar14 = *unaff_x20;
                goto LAB_0354f010;
              }
              lVar24 = *unaff_x22;
              if (lVar24 == 0) goto LAB_0354fbf4;
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if (lVar24 != 0) {
              uVar23 = *(uint *)(lVar24 + 0x18);
              if ((int)uVar7 <= (int)uVar6) goto LAB_0354f1f0;
LAB_0354f1e0:
              lVar29 = (long)(int)uVar6;
              if (uVar6 < uVar23) goto LAB_0354f1f8;
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
        iVar14 = FUN_036d3364(lVar30,0);
        if (*(uint *)(lVar18 + 0x18) <= uVar26)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = *(long *)(lVar18 + lVar36 + -0x130);
        if (lVar24 == 0) goto LAB_0354fbf4;
        iVar15 = FUN_036d3364(lVar24,0);
        if (iVar14 != iVar15) {
          if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
            uVar23 = *(uint *)(lVar24 + 0x18);
            goto LAB_0354ef0c;
          }
          goto LAB_0354fbf4;
        }
      }
      if (!bVar1) {
        if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
          if (uVar26 - 2 < *(uint *)(lVar24 + 0x18)) {
            lVar29 = *unaff_x19;
            uVar39 = *(undefined4 *)(lVar24 + lVar36 + -0x330);
            fVar47 = *(float *)(lVar24 + lVar36 + -0x30c);
            goto LAB_0354ef24;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
      bVar9 = true;
    }
    if ((*unaff_x22 == 0) || (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 == 0))
    goto LAB_0354fbf4;
    uVar23 = (uint)*(undefined8 *)(lVar24 + 0x18);
    if (uVar23 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(byte *)(lVar24 + lVar37 * 0x178 + 0x191) >> 1 & 1) == 0) {
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
          (*(int *)(lVar24 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar10) {
LAB_0354f400:
        if (uVar23 <= uVar7) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar24 = lVar24 + lVar37 * 0x178;
        fVar45 = *(float *)(lVar24 + 0x128);
        fVar41 = *(float *)(lVar24 + 0x188);
        uVar17 = *(undefined8 *)(lVar24 + 0x17c);
        fVar48 = *(float *)(lVar24 + 0x184);
        uVar16 = *(undefined8 *)(lVar24 + 0x184);
        fVar46 = *(float *)(lVar24 + 0x18c);
        fVar47 = *(float *)(lVar24 + 0x11c);
        fVar42 = *(float *)(lVar24 + 0x148);
        fVar43 = *(float *)(lVar24 + 0x150);
        in_stack_00000188 = uVar17;
        fStack0000000000000190 = fVar48;
        fStack0000000000000194 = fVar41;
        in_stack_00000198 = fVar46;
        in_stack_000001a0 = in_stack_000017c0;
        in_stack_000001a8 = in_stack_000017c8;
        in_stack_000001b0 = in_stack_000017d0;
        uVar19 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
        lVar24 = *(long *)OVRPlugin_Mesh_TypeInfo;
        if ((uVar19 & 1) == 0) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar24);
          }
          fVar45 = fVar45 + (float)in_stack_000017c8;
          fVar47 = fVar47 - (float)((ulong)in_stack_000017c0 >> 0x20);
          fVar42 = fVar42 + (float)((ulong)in_stack_000017c8 >> 0x20);
          if (fVar47 <= fStack00000000000000e0) {
            fStack00000000000000e0 = fVar47;
          }
          if (fVar43 - in_stack_000017d0 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar43 - in_stack_000017d0;
          }
          if (fStack00000000000000d0 <= fVar45) {
            fStack00000000000000d0 = fVar45;
          }
          if (fStack00000000000000d4 <= fVar42) {
            fStack00000000000000d4 = fVar42;
          }
        }
        else {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar24);
          }
          fVar47 = (fVar47 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
          if (fVar43 <= fStack00000000000000e4) {
            fStack00000000000000e4 = fVar43;
          }
          if (fStack00000000000000d4 <= fVar42) {
            fStack00000000000000d4 = fVar42;
          }
          (**(code **)(*unaff_x19 + 0x8e8))
                    (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,fVar47,
                     fStack00000000000000d4,in_stack_000000c0);
          fStack00000000000000e4 = fVar43 - fVar46;
          fStack00000000000000d0 = fVar45 + fVar48;
          in_stack_000000c0 = 0;
          fStack00000000000000d4 = fVar42 + fVar41;
          fStack00000000000000e0 = fVar47;
          in_stack_000017c0 = uVar17;
          in_stack_000017c8 = uVar16;
          in_stack_000017d0 = fVar46;
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
        if ((((uVar27 != 0xd) && ((uVar27 & 0xfffe) != 10)) && ((int)uVar7 <= (int)uVar6)) &&
           (bVar1)) {
          if (uVar7 == uVar6) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar27,0);
            if ((uVar19 & 1) != 0) goto LAB_0354f374;
          }
          puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar29 = *(long *)puVar11;
          }
          if ((*unaff_x22 != 0) && (lVar24 = *(long *)(*unaff_x22 + 0x38), lVar24 != 0)) {
            uVar23 = (uint)*(undefined8 *)(lVar24 + 0x18);
            if (uVar7 < uVar23) {
              lVar29 = *(long *)(lVar29 + 0xb8);
              lVar30 = lVar24 + lVar37 * 0x178;
              in_stack_000017c8 = *(undefined8 *)(lVar30 + 0x184);
              in_stack_000017c0 = *(undefined8 *)(lVar30 + 0x17c);
              fStack00000000000000e0 = *(float *)(lVar29 + 0x1598);
              fStack00000000000000e4 = *(float *)(lVar29 + 0x159c);
              in_stack_000017d0 = *(float *)(lVar30 + 0x18c);
              fStack00000000000000d0 = *(float *)(lVar29 + 0x15a0);
              fStack00000000000000d4 = *(float *)(lVar29 + 0x15a4);
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
    lVar36 = lVar36 + 0x178;
    bVar1 = iVar14 <= (int)uVar26;
    uVar23 = uVar2;
    uVar26 = uVar26 + 1;
    if (bVar1) goto LAB_0354f7d0;
    goto LAB_0354d7c0;
  }
  iStack00000000000000d8 = 0;
  iVar28 = 0;
LAB_0354f7f4:
  *(int *)(lVar18 + 0x18) = iVar14;
  lVar36 = unaff_x19[0xd4];
  *(int *)(lVar18 + 0x2c) = iVar28;
  if (iVar14 < 1 || iStack00000000000000d8 == 0) {
    iStack00000000000000d8 = 1;
  }
  *(int *)(lVar18 + 0x1c) = (int)lVar36;
  *(int *)(lVar18 + 0x24) = iStack00000000000000d8;
  *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_0354d0cc:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar18 = unaff_x19[0xdb];
  if (lVar18 != 0) {
    (**(code **)(lVar18 + 0x18))
              (*(undefined8 *)(lVar18 + 0x40),*unaff_x22,*(undefined8 *)(lVar18 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*unaff_x22 == 0) || (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(*plVar35 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar18 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596b20(lVar18 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0)) {
      if (*(int *)(lVar18 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0)) {
          if (*(int *)(lVar18 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0))
            {
              if (*(int *)(lVar18 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0)) {
                  if (*(int *)(lVar18 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      lVar18 = *unaff_x22;
                      if (lVar18 != 0) {
                        lVar24 = 0;
                        lVar36 = 0;
                        do {
                          uVar19 = lVar36 + 1;
                          if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar19) goto LAB_0354d0cc;
                          lVar18 = *(long *)(lVar18 + 0x60);
                          if (lVar18 == 0) break;
                          if (*(int *)(*plVar35 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar18 + 0x18) <= uVar19)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar18 + lVar24 + 0x70,0);
                          lVar18 = unaff_x19[0xe1];
                          if (lVar18 == 0) break;
                          if (*(uint *)(lVar18 + 0x18) <= uVar19)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar16 = *(undefined8 *)(lVar18 + lVar36 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar20 = FUN_036d35a8(uVar16,0,0);
                          if ((uVar20 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(int *)(*plVar35 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar18 + 0x18) <= uVar19)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar18 + lVar24 + 0x70,1,0);
                            }
                            lVar18 = unaff_x19[0xe1];
                            if (lVar18 == 0) break;
                            if (*(uint *)(lVar18 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar18 = *(long *)(lVar18 + lVar36 * 8 + 0x28);
                            if (lVar18 == 0) break;
                            lVar18 = FUN_0359d5ac(lVar18,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar29 = *(long *)(*unaff_x22 + 0x60), lVar29 == 0)) break;
                            if (*(uint *)(lVar29 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar18 == 0) break;
                            FUN_036a460c(lVar18,*(undefined8 *)(lVar29 + lVar24 + 0x80),0);
                            lVar18 = unaff_x19[0xe1];
                            if (lVar18 == 0) break;
                            if (*(uint *)(lVar18 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar18 = *(long *)(lVar18 + lVar36 * 8 + 0x28);
                            if (lVar18 == 0) break;
                            lVar18 = FUN_0359d5ac(lVar18,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar29 = *(long *)(*unaff_x22 + 0x60), lVar29 == 0)) break;
                            if (*(uint *)(lVar29 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar18 == 0) break;
                            FUN_036a4810(lVar18,*(undefined8 *)(lVar29 + lVar24 + 0x98),0);
                            lVar18 = unaff_x19[0xe1];
                            if (lVar18 == 0) break;
                            if (*(uint *)(lVar18 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar18 = *(long *)(lVar18 + lVar36 * 8 + 0x28);
                            if (lVar18 == 0) break;
                            lVar18 = FUN_0359d5ac(lVar18,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar29 = *(long *)(*unaff_x22 + 0x60), lVar29 == 0)) break;
                            if (*(uint *)(lVar29 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar18 == 0) break;
                            FUN_036a48bc(lVar18,*(undefined8 *)(lVar29 + lVar24 + 0xa0),0);
                            lVar18 = unaff_x19[0xe1];
                            if (lVar18 == 0) break;
                            if (*(uint *)(lVar18 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar18 = *(long *)(lVar18 + lVar36 * 8 + 0x28);
                            if (lVar18 == 0) break;
                            lVar18 = FUN_0359d5ac(lVar18,0);
                            if ((*unaff_x22 == 0) ||
                               (lVar29 = *(long *)(*unaff_x22 + 0x60), lVar29 == 0)) break;
                            if (*(uint *)(lVar29 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar18 == 0) break;
                            FUN_036a4e24(lVar18,*(undefined8 *)(lVar29 + lVar24 + 0xa8),0);
                            lVar18 = unaff_x19[0xe1];
                            if (lVar18 == 0) break;
                            if (*(uint *)(lVar18 + 0x18) <= uVar19)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar18 = *(long *)(lVar18 + lVar36 * 8 + 0x28);
                            if ((lVar18 == 0) || (lVar18 = FUN_0359d5ac(lVar18,0), lVar18 == 0))
                            break;
                            FUN_036aa280(lVar18,0);
                          }
                          lVar18 = *unaff_x22;
                          lVar36 = lVar36 + 1;
                          lVar24 = lVar24 + 0x50;
                        } while (lVar18 != 0);
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
  lVar18 = *unaff_x22;
  if (lVar18 == 0) goto LAB_0354fbf4;
  iVar28 = uVar2 + 1;
  plVar35 = (long *)OVRPlugin_Media_TypeInfo;
  goto LAB_0354f7f4;
}


