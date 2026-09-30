/*
FUNCTION_NAME: UnityEngine.AndroidJavaObject$$.ctor
ENTRY_POINT: 0354ce48
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


void UnityEngine_AndroidJavaObject___ctor
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
               ulong param_7,ulong param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined1 uVar22;
  char cVar23;
  uint uVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x22;
  ulong unaff_x24;
  long *plVar39;
  long lVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  ulong unaff_d13;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  int iStack000000000000002c;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  byte in_stack_00000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  undefined8 in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int iStack00000000000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  int in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  uint in_stack_000008b0;
  undefined4 in_stack_000008b4;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  long in_stack_00001708;
  uint in_stack_0000179c;
  uint in_stack_000017b8;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float in_stack_000017e8;
  uint in_stack_000017ec;
  
code_r0x0354ce48:
  FUN_0358cbd4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
  *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
  *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
  uVar20 = param_2;
  param_2 = unaff_d13;
LAB_0354b8d0:
  bVar9 = false;
LAB_0354c6b4:
  bVar6 = true;
  uVar10 = in_stack_000017ec;
LAB_03549564:
  fVar52 = (float)param_2;
  in_stack_000017b8 = in_stack_000017b8 + 1;
  lVar25 = unaff_x19[0x8f];
  if (lVar25 != 0) {
    if ((int)in_stack_000017b8 < (int)*(uint *)(lVar25 + 0x18)) {
      if (*(uint *)(lVar25 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      in_stack_000017ec = *(uint *)(lVar25 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
      if (in_stack_000017ec == 0) goto LAB_0354cf48;
      if (5 < in_stack_00000180) {
        uVar16 = FUN_0276793c(&stack0x000017ec,0);
        uVar17 = FUN_0276793c(&stack0x000017b8,0);
        uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar16,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar17,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367ae18(uVar16,0);
        in_stack_000017d8 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017ec == 0x3c))
      goto code_r0x035492f0;
      if ((*unaff_x22 != 0) && (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar25 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar25 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar25 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
          goto LAB_03549378;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354cf48:
    fVar52 = (float)uVar20;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar52 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar49 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar52 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar61 = (*(float *)((long)unaff_x19 + 0x23c) - fVar52) * 0.5;
        if (fVar61 <= DAT_00d38b84) {
          fVar61 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar52;
        fVar61 = (fVar52 + fVar61) * 20.0 + 0.5;
        fVar52 = DAT_00d38e60;
        if (fVar61 != INFINITY) {
          fVar52 = (float)(int)fVar61 / 20.0;
        }
        if (fVar49 <= fVar52) {
          fVar52 = fVar49;
        }
        goto LAB_0354d004;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar16 = FUN_0276793c(in_stack_00000038,0);
      uVar17 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar16,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar17,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar16,0);
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar10 == 3)))) {
      (**(code **)(*unaff_x19 + 0x928))();
      goto LAB_0354d0cc;
    }
    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar25 = *(long *)puVar7;
    }
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    iVar13 = *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x60), lVar25 == 0))
    goto LAB_0354fbf4;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar25 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_035968e8(lVar25 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar11 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar25 = unaff_x19[0xeb];
    in_stack_000000b8 = (long *)uStack00000000000000f0;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar11 < 0x401) {
      if (iVar11 == 0x100) {
        if (lVar25 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) < 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar16 = *(undefined8 *)(lVar25 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x58), lVar27 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar52 = *(float *)(lVar27 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
        }
        else {
          fVar52 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar25 + 0x2c);
        fVar52 = (0.0 - fVar52) - fStack000000000000001c;
      }
      else if (iVar11 == 0x200) {
        if (lVar25 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fStack00000000000000c4 = (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar25 + 0x24) +
                          (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x58), lVar25 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar25 = lVar25 + (long)(int)uStack0000000000000034 * 0x14;
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
          fVar52 = ((fStack000000000000001c + *(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x30))
                   - fStack0000000000000020) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
          fVar52 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                   fStack0000000000000020) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar11 != 0x400) goto LAB_0354d620;
        if (lVar25 == 0) goto LAB_0354fbf4;
        if (*(int *)(lVar25 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar16 = *(undefined8 *)(lVar25 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x58), lVar27 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          in_stack_000017e8 = *(float *)(lVar27 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar25 + 0x20);
        fVar52 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
      }
LAB_0354d610:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar52);
    }
    else if (iVar11 == 0x800) {
      if (lVar25 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar52 = fStack0000000000000028 + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar25 + 0x24) +
                            (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar52;
    }
    else {
      if (iVar11 == 0x1000) {
        if (lVar25 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar25 + 0x18) != 1) && (*(int *)(lVar25 + 0x18) != 0)) {
          uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar25 + 0x24) +
                            (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
          fVar52 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
          goto LAB_0354d610;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      if (iVar11 == 0x2000) {
        if (lVar25 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar52 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                       fStack0000000000000020) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar25 + 0x24) +
                              (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5 + fVar52);
        fStack00000000000000c4 =
             fStack0000000000000028 + 0.0 +
             (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      }
    }
LAB_0354d620:
    lVar25 = FUN_03559490();
    if (lVar25 == 0) goto LAB_0354fbf4;
    FUN_036df824(lVar25,0);
    *(float *)((long)unaff_x19 + 0x6e4) = fVar52;
    uVar60 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar7 = OVRPlugin_Mesh_TypeInfo;
    lVar25 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar25 = *(long *)puVar7;
    }
    puVar26 = *(undefined4 **)(lVar25 + 0xb8);
    FUN_035683a4(*puVar26,puVar26[1],puVar26[2],puVar26[3],&stack0x000017c0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar25 = *unaff_x22;
    if (lVar25 == 0) goto LAB_0354fbf4;
    uVar10 = *unaff_x20;
    if ((int)uVar10 < 1) {
      iStack00000000000000d8 = 0;
      iVar13 = 0;
      goto LAB_0354f7f4;
    }
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_0354fbf4;
    bVar9 = false;
    bVar8 = false;
    bVar6 = false;
    fStack0000000000000124 = 0.0;
    bVar5 = false;
    iStack00000000000000d8 = 0;
    uStack0000000000000030 = 0;
    in_stack_00000168._4_4_ = 0.0;
    fStack000000000000005c = 0.0;
    lVar27 = 0x2e0;
    fVar61 = 0.0;
    fVar49 = 0.0;
    fStack00000000000000d0 = fStack00000000000000e0;
    fStack00000000000000d4 = fStack00000000000000e4;
    _in_stack_00000068 = fStack00000000000000e4;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack000000000000009c = fStack00000000000000e4;
    fStack00000000000000a0 = fStack00000000000000e0;
    fStack0000000000000100 = 0.0;
    in_stack_00000080._4_4_ = 0.0;
    in_stack_00000048._4_4_ = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000040 = 0.0;
    uStack000000000000006c = uStack00000000000000c0;
    fStack0000000000000070 = fStack00000000000000e0;
    fStack0000000000000098 = (float)uStack00000000000000c0;
    uVar12 = 0;
    uVar24 = 1;
    goto LAB_0354d7c0;
  }
  goto LAB_0354fbf4;
code_r0x035492f0:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar18 = FUN_03586568();
  if (((uVar18 & 1) != 0) &&
     (in_stack_000017b8 = in_stack_0000179c, uVar10 = in_stack_000017ec,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = (long)(int)uVar10;
  cVar23 = *(char *)(lVar25 + lVar40 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar27 = unaff_x19[0x24];
  if ((uint)in_stack_000017d8 == uVar10) {
    in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017ec == 0x2026) {
      *(long *)(lVar25 + lVar40 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar25 + 0x2c) = 0;
      *(long *)(lVar25 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      uVar10 = *unaff_x20;
      if (*(uint *)(lVar25 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      bVar5 = true;
      *(int *)(lVar25 + (long)(int)uVar10 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017d8 = CONCAT44(3,uVar10 + 1);
    }
    else if (in_stack_000017ec == 3) {
      if ((*in_stack_00000178 == 0) || (lVar19 = FUN_03568ac0(*in_stack_00000178,0), lVar19 == 0))
      goto LAB_0354fbf4;
      FUN_0219b634(lVar19,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar25 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(ulong *)(lVar25 + lVar40 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,in_stack_000008b0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar10 = *(uint *)((long)unaff_x19 + 0x494);
      bVar5 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bVar5 = false;
  }
  iVar13 = (int)unaff_x24;
  if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
    if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = lVar25 + (long)(int)uVar10 * (long)iVar13;
    *(undefined1 *)(lVar25 + 0x194) = 0;
    *(undefined2 *)(lVar25 + 0x20) = 0x200b;
    *(undefined4 *)(lVar25 + 100) = 0;
    *unaff_x20 = uVar10 + 1;
    uVar10 = in_stack_000017ec;
    goto LAB_03549564;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar11 == 0) {
    uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        fVar49 = 1.0;
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b812c(in_stack_000017ec,0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8410(in_stack_000017ec,0);
            in_stack_000017ec = uVar10 & 0xffff;
            fVar49 = fStack0000000000000024;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b8070(in_stack_000017ec,0);
        fVar49 = 1.0;
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b8594(in_stack_000017ec,0);
          goto LAB_03549968;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b812c(in_stack_000017ec,0);
      fVar49 = 1.0;
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
        fVar49 = 1.0;
        in_stack_000017ec = uVar10 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03549594;
LAB_03549978:
    if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *_iStack00000000000000d8 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
    uVar10 = in_stack_000017ec;
    if (*_iStack00000000000000d8 == 0) goto LAB_03549564;
    if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000178 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
    if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000170 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
    goto LAB_0354fbf4;
    uVar12 = *unaff_x20;
    uVar10 = *(uint *)(lVar25 + 0x18);
    if (uVar10 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar25 + (long)(int)uVar12 * unaff_x24 + 0x58);
    if (bVar5) {
      lVar27 = unaff_x19[0x8f];
      if (lVar27 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(int *)(lVar27 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
         (uVar12 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
      if (uVar10 <= uVar12 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar61 = *(float *)(lVar25 + (long)(int)(uVar12 - 1) * (long)iVar13 + 0x60);
      iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar25 = *in_stack_00000178;
    }
    else {
LAB_03549a88:
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar61 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar25 = unaff_x19[0x20];
    }
    if (lVar25 == 0) goto LAB_0354fbf4;
    fVar46 = (float)FUN_03776960(lVar25 + 0x50,0);
    fVar41 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar41 = 1.0;
    }
    uVar60 = 0;
    fStack0000000000000124 = 0.0;
    if (!(bool)(bVar5 & in_stack_000017ec == 0x2026)) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      uVar60 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
    }
    lVar25 = unaff_x19[0xc9];
    if (lVar25 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar60);
    if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
    fVar57 = *(float *)((long)unaff_x19 + 0x404);
    fVar42 = *(float *)(lVar25 + 0x2c);
    fVar52 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar44 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar58 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    lVar25 = unaff_x19[0x6d];
    if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar27 + 0x2c) = 0;
    fVar41 = ((fVar49 * fVar61) / (float)iVar11) * fVar46 * fVar41;
    fVar52 = fVar41 * fVar57 * fVar42 * fVar52;
    *(float *)(lVar27 + 0x160) = fVar52;
    uVar10 = *(uint *)(unaff_x19 + 0x24);
    fVar45 = fVar41 * fVar44 * fVar58 * fVar45;
    if (uVar10 == 0) {
      in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar27 = unaff_x19[0xe1];
      if (lVar27 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = *(long *)(lVar27 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar27 == 0) goto LAB_0354fbf4;
      in_stack_00000168._4_4_ = *(float *)(lVar27 + 0x54);
    }
LAB_03549e30:
    fVar61 = 0.0;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar61 = fVar52;
    }
  }
  else {
    fVar49 = 1.0;
    if (iVar11 == 0) goto LAB_03549978;
LAB_03549594:
    if (iVar11 == 1) {
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *in_stack_000000b8 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar25 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar25 == 0))
      goto LAB_0354fbf4;
      FUN_02215a88(lVar25,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar25 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
      uVar10 = in_stack_000017ec;
      if (lVar25 == 0) goto LAB_03549564;
      if (in_stack_000017ec == 0x3c) {
        in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar40 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar11 = FUN_03776950(&stack0x00001730,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar41 = (float)FUN_03776960(&stack0x00001730,0);
      fVar61 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar61 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
      fVar61 = (fVar52 / (float)iVar11) * fVar41 * fVar61;
      iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      if (iVar11 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar46 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        fVar41 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar41 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar57 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,*(long *)(lVar25 + 0x20),0);
        fVar42 = (float)FUN_03776c9c(&stack0x00001710,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)(lVar25 + 0x2c);
        fVar44 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar43 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar55 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar45 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar45 = fVar61 * fVar55 * fVar62 * fVar45;
        fVar41 = (fVar52 / (float)iVar11) * fVar46 * fVar41;
        fVar52 = fVar41 * (fVar57 / fVar42) * fVar58 * fVar44;
        fVar41 = fVar41 / fVar52;
        fVar43 = fVar41 * fVar43;
        fVar61 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar41 = fVar41 * fVar61;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar41 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
        fVar57 = *(float *)(lVar25 + 0x2c);
        fVar46 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar46 = 1.0;
        }
        fVar42 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar43 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar44 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)((long)unaff_x19 + 0x404);
        fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar45 = fVar61 * fVar44 * fVar58 * fVar45;
        fVar52 = (fVar52 / (float)iVar11) * fVar41 * fVar46 * fVar57 * fVar42;
        fVar41 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *_iStack00000000000000d8 = lVar25;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (_iStack00000000000000d8,lVar25);
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar25 + 0x2c) = 1;
      *(float *)(lVar25 + 0x160) = fVar52;
      *(long *)(lVar25 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar25 = *unaff_x22;
      if ((lVar25 == 0) || (lVar40 = *(long *)(lVar25 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      _fStack0000000000000120 = CONCAT44(fVar43,fVar41);
      in_stack_00000168._4_4_ = 0.0;
      *(int *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar27;
      goto LAB_03549e30;
    }
    lVar25 = *unaff_x22;
    fVar45 = 0.0;
    fVar61 = fVar45;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar61 = fVar52;
    }
    if (lVar25 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = 0;
  }
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar25 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar25 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar25 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_0354fbf4;
  uVar10 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar25 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)uVar10 * unaff_x24;
  *(undefined4 *)(lVar25 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar25 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar25 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar25,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(in_stack_000017ec,0);
    uVar12 = uVar12 & 1;
  }
  else {
    uVar12 = 0;
  }
  fVar41 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fVar46 = 0.0;
    fVar42 = 0.0;
    fVar57 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar24 = *unaff_x20;
    uVar10 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar24 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= uVar24 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = *(long *)(lVar25 + (long)(int)(uVar24 + 1) * (long)iVar13 + 0x30);
      if ((((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0)) ||
         (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar10 | *(int *)(lVar25 + 0x28) << 0x10;
      uVar20 = FUN_0219f8b8(lVar27,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar60 = 0;
      if ((uVar20 & 1) == 0) {
        fVar46 = 0.0;
        fVar42 = 0.0;
        fVar57 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        fVar46 = *(float *)(in_stack_00001708 + 0x1c);
        uVar60 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar57 = *(float *)(in_stack_00001708 + 0x14);
        fVar42 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar41 = 0.0;
        }
      }
      uVar24 = *unaff_x20;
    }
    else {
      uVar60 = 0;
      fVar46 = 0.0;
      fVar42 = 0.0;
      fVar57 = 0.0;
    }
    if (0 < (int)uVar24) {
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= uVar24 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = *(long *)(lVar25 + (ulong)(uVar24 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0 ||
          (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar25 + 0x28) | uVar10 << 0x10;
      uVar20 = FUN_0219f8b8(lVar27,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar20 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar57 = (float)FUN_03571cb4(fVar57,fVar42,fVar46,uVar60,
                                         *(undefined4 *)(in_stack_00001708 + 0x28),
                                         *(undefined4 *)(in_stack_00001708 + 0x2c),
                                         *(undefined4 *)(in_stack_00001708 + 0x30),
                                         *(undefined4 *)(in_stack_00001708 + 0x34),0),
           in_stack_00001708 == 0)) goto LAB_0354fbf4;
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          fVar41 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fVar46;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar58 = *(float *)(unaff_x19 + 200);
    fVar44 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar58 = fVar58 - fVar61 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar58;
    if ((in_stack_000017ec == 0x200b) || (uVar12 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar58 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar58 = *(float *)(unaff_x19 + 0x56);
  fVar44 = 0.0;
  if (fVar58 != 0.0) {
    fVar44 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar43 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar58 * 0.5 - fVar61 * (fVar44 * 0.5 + fVar43));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar44;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar25 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar25,0,0);
    fVar43 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar25 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar25 == 0) goto LAB_0354fbf4;
      uVar20 = FUN_03699d3c(lVar25,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar43 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar25 = *in_stack_00000170;
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar25 == 0) goto LAB_0354fbf4;
        fVar58 = (float)FUN_0369e060(lVar25,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar55 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar43 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar43 = fVar43 * fVar58 * fVar55 * 0.25;
        if (fVar58 < in_stack_00000168._4_4_ + fVar43) {
          in_stack_00000168._4_4_ = fVar58 - fVar43;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar25 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar25,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar25 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar25 == 0) goto LAB_0354fbf4;
      uVar20 = FUN_03699d3c(lVar25,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar25 = *in_stack_00000170;
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar25 == 0) goto LAB_0354fbf4;
        uVar20 = FUN_03699d3c(lVar25,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar25 = *in_stack_00000170;
          if (*(int *)(*plVar39 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar39 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar25 == 0) goto LAB_0354fbf4;
          fVar58 = (float)FUN_0369e060(lVar25,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
          fVar55 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar43 = (float)FUN_0369e060(*in_stack_00000170,
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
          fVar43 = fVar43 * fVar58 * fVar55 * 0.25;
          if (fVar58 < in_stack_00000168._4_4_ + fVar43) {
            in_stack_00000168._4_4_ = fVar58 - fVar43;
          }
          goto LAB_0354a568;
        }
      }
    }
    fVar43 = 0.0;
  }
LAB_0354a568:
  fVar58 = *(float *)(unaff_x19 + 200);
  fVar55 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar58 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar61 * (fVar57 + ((fVar55 - in_stack_00000168._4_4_) - fVar43));
  fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar55 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar45 + fVar61 * (fVar42 + in_stack_00000168._4_4_ + fVar57)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar57 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar55 - fVar61 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar57);
  fVar57 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar42 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar61 * (fVar43 + fVar43 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar57);
  fStack0000000000000104 = fVar58;
  fVar57 = fVar42;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar47 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar48 = fVar47 * fVar61 * (fVar43 + in_stack_00000168._4_4_ + fVar57);
    fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar62 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar55 = fVar55 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar47 = fVar47 * fVar61 * (((fVar57 - fVar62) - in_stack_00000168._4_4_) - fVar43);
    fVar62 = fVar58 + fVar48;
    fVar57 = fVar42 + fVar47;
    fVar54 = (fVar48 - fVar47) * 0.5;
    fVar58 = (fVar58 + fVar47) - fVar54;
    fVar42 = (fVar42 + fVar48) - fVar54;
    fStack0000000000000104 = fVar62 - fVar54;
    fVar57 = fVar57 - fVar54;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar47 = 0.0;
    fVar48 = 0.0;
    fVar53 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar54 = fStack0000000000000134;
    fVar62 = fVar55;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar56 = (fVar42 + fVar58) * 0.5;
    fVar59 = (fStack0000000000000134 + fVar55) * 0.5;
    fVar55 = fVar55 - fVar59;
    fStack0000000000000100 = 0.0;
    fVar62 = fVar55;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar56,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar56 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar54 = fStack0000000000000134 - fVar59;
    fVar47 = 0.0;
    fStack0000000000000134 = fVar54;
    fVar58 = (float)FUN_036bdd2c(fVar58 - fVar56,_fStack0000000000000070,0);
    fVar58 = fVar56 + fVar58;
    fVar47 = fVar47 + 0.0;
    fStack0000000000000134 = fVar59 + fStack0000000000000134;
    fVar53 = 0.0;
    fVar42 = (float)FUN_036bdd2c(fVar42 - fVar56,_fStack0000000000000070,0);
    fVar42 = fVar56 + fVar42;
    fVar55 = fVar59 + fVar55;
    fVar53 = fVar53 + 0.0;
    fVar48 = 0.0;
    fVar57 = (float)FUN_036bdd2c(fVar57 - fVar56,_fStack0000000000000070,0);
    fVar57 = fVar56 + fVar57;
    fVar48 = fVar48 + 0.0;
    fVar54 = fVar59 + fVar54;
    fVar62 = fVar59 + fVar62;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar25 = *(long *)(*unaff_x22 + 0x38);
  param_2 = (ulong)(uint)fVar61;
  if (lVar25 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x11c) = fVar58;
  *(float *)(lVar25 + 0x120) = fStack0000000000000134;
  *(float *)(lVar25 + 0x124) = fVar47;
  if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x114) = fVar62;
  *(float *)(lVar25 + 0x110) = fStack0000000000000104;
  *(float *)(lVar25 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x128) = fVar42;
  *(float *)(lVar25 + 300) = fVar55;
  *(float *)(lVar25 + 0x130) = fVar53;
  if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x134) = fVar57;
  *(float *)(lVar25 + 0x138) = fVar54;
  *(float *)(lVar25 + 0x13c) = fVar48;
  if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  uVar24 = *unaff_x20;
  lVar27 = (long)(int)uVar24;
  if (*(uint *)(lVar25 + 0x18) <= uVar24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar25 + lVar27 * unaff_x24;
  *(int *)(lVar40 + 0x140) = (int)unaff_x19[200];
  fVar55 = *(float *)(unaff_x19 + 0x9b);
  uVar20 = (ulong)(uint)fVar55;
  fVar57 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar40 + 0x15c) = (fVar42 - fVar58) / (fVar62 - fStack0000000000000134);
  *(float *)(lVar40 + 0x14c) = (fVar45 - fVar55) + fVar57;
  fVar42 = fStack0000000000000124 * fVar61;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar42 = fVar42 / fVar49;
    fStack0000000000000120 = (fStack0000000000000120 * fVar61) / fVar49;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar61;
  }
  uVar2 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar12 == 0) || (uVar24 == uVar2)) {
    fStack0000000000000120 = fVar57 + fStack0000000000000120;
    fVar42 = fVar57 + fVar42;
    fVar45 = fStack0000000000000120;
    fVar58 = fVar42;
    if (fVar57 != 0.0) {
      fVar58 = (fVar42 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      fVar45 = (fStack0000000000000120 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar58 <= fVar42) {
        fVar58 = fVar42;
      }
      if (fStack0000000000000120 <= fVar45) {
        fVar45 = fStack0000000000000120;
      }
    }
    lVar25 = lVar25 + lVar27 * unaff_x24;
    fVar57 = fVar58;
    if (fVar58 <= *(float *)(unaff_x19 + 0x99)) {
      fVar57 = *(float *)(unaff_x19 + 0x99);
    }
    fVar62 = fVar45;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar45) {
      fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar62;
    *(float *)(unaff_x19 + 0x99) = fVar57;
    *(float *)(lVar25 + 0x154) = fVar58;
    *(float *)(lVar25 + 0x158) = fVar45;
    *(float *)(lVar25 + 0x148) = fVar42 - fVar55;
    *(float *)(unaff_x19 + 0x98) = fVar42 - fVar55;
    *(float *)(lVar25 + 0x150) = fStack0000000000000120 - fVar55;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar55;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar57;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar58 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fVar49 = (fVar61 * fVar58) / fVar49;
      uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar57 <= fVar49) {
        fVar57 = fVar49;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
    }
    if ((float)uVar20 == 0.0) {
      fVar49 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar42) {
        fVar49 = fVar42;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar49;
    }
  }
  else {
    fVar49 = *(float *)(unaff_x19 + 0x99);
    lVar25 = lVar25 + lVar27 * unaff_x24;
    *(float *)(lVar25 + 0x154) = fVar49;
    fVar57 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar49 = fVar49 - fVar55;
    *(float *)(lVar25 + 0x148) = fVar49;
    *(float *)(lVar25 + 0x158) = fVar57;
    *(float *)(unaff_x19 + 0x98) = fVar49;
    fVar57 = fVar57 - fVar55;
    *(float *)(lVar25 + 0x150) = fVar57;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
  }
  lVar25 = *unaff_x22;
  if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar14)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)uVar14 * unaff_x24;
  *(undefined1 *)(lVar27 + 0x194) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x4f);
  uVar10 = in_stack_000017ec;
  if ((in_stack_000017ec == 9) ||
     (((((uVar12 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)) ||
      (((bool)(in_stack_000017ec == 0xad & (bVar9 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x644) == 1)
       ))))) {
    *(undefined1 *)(lVar27 + 0x194) = 1;
    pfVar28 = _fStack00000000000000a0;
    pfVar32 = _fStack00000000000000a8;
    if (bVar5) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar25 + 0x60);
      pfVar28 = (float *)(lVar25 + 100);
    }
    fVar57 = *pfVar32;
    fVar42 = *pfVar28;
    fVar49 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar57) - fVar42;
    bVar8 = true;
    if ((fVar49 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar49))) {
      bVar8 = fVar49 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar49;
    }
    fVar49 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar49 = (float)FUN_03776cb4(&stack0x000017a0,0);
      uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar55 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017ec != 0xad) {
      fVar52 = fVar61;
    }
    fVar47 = (float)uVar20;
    fVar62 = 0.0;
    if ((0.0 < fVar47) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar62 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar14 = *unaff_x20;
    fVar62 = (*(float *)(unaff_x19 + 0x97) - (fVar45 - fVar47)) + fVar62;
    if (fStack00000000000000c4 < fVar62) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar16 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar54 = *(float *)(unaff_x19 + 0x59);
        if (((fVar54 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar47)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar62) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar52 <= fVar54) {
            fVar52 = fVar54;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar62 = *(float *)(unaff_x19 + 0x4a);
        uVar20 = (ulong)(uint)fVar62;
        if ((fVar62 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00d38b84) {
            fVar52 = DAT_00d38b84;
          }
          fVar49 = (fVar47 - fVar52) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar47;
          fVar52 = DAT_00d38e60;
          if (fVar49 != INFINITY) {
            fVar52 = (float)(int)fVar49 / 20.0;
          }
          if (fVar52 <= fVar62) {
            fVar52 = fVar62;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar7;
        }
        lVar27 = *(long *)(lVar25 + 0xb8);
        lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = FUN_01a46ff8(lVar25);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_0354cf2c;
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
        iVar13 = FUN_0358c15c();
        goto LAB_0354b3a0;
      default:
        goto switchD_0354ad3c_caseD_2;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_0354af20:
        in_stack_000017b8 = FUN_0358c15c();
        break;
      case 5:
        if ((uVar14 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
          in_stack_000017d8 = uVar16;
          goto LAB_03549564;
        }
        fVar52 = *(float *)(unaff_x19 + 0x99);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        if (fVar52 - fVar45 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar20 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar25 = NEON_rev64(uVar20,4);
          unaff_x19[0x99] = lVar25;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03549564;
        }
        break;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar18 = FUN_036cee6c(lVar25,0,0);
        if ((uVar18 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x528))(plVar39,uVar16,*(undefined8 *)(*plVar39 + 0x530));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_0354fbf4;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto LAB_0354b0e0;
    }
switchD_0354ad3c_caseD_2:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar49 = ABS(fVar58) + fVar49 * (1.0 - fVar55) * fVar52;
    fVar52 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar52 = DAT_00d38acc;
    }
    fVar58 = fVar52 * in_stack_000000f8._4_4_;
    if (fVar58 < fVar49) {
      uVar20 = (ulong)(uint)fVar43;
      if (((char)unaff_x19[0x5b] == '\0') || (uVar14 == *(uint *)(unaff_x19 + 0x93))) {
        if (((char)unaff_x19[0x47] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if (fVar55 < fVar58) {
            fVar61 = fVar49 / (1.0 - fVar55);
            if (fVar55 <= 0.0) {
              fVar61 = fVar49;
            }
            fVar55 = fVar55 + (fVar49 - fVar52 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar61;
            goto LAB_0354fc24;
          }
          fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
          fVar58 = *(float *)(unaff_x19 + 0x4a);
          if (fVar58 < fVar55) {
            fVar52 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar52 <= DAT_00d38b84) {
              fVar52 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar55;
            fVar55 = fVar55 - fVar52;
            goto LAB_0354fc60;
          }
        }
        iVar11 = (int)unaff_x19[0x5c];
        if (iVar11 == 1) {
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)puVar7;
          }
          lVar27 = *(long *)(lVar25 + 0xb8);
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
            lVar25 = FUN_01a46ff8(lVar25);
          }
          piVar21 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*piVar21 == 0) goto LAB_0354cf2c;
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
          goto LAB_0354b394;
        }
        if (iVar11 == 6) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          lVar25 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar18 = FUN_036cee6c(lVar25,0,0);
          if ((uVar18 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5d];
            uVar16 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar39 + 0x528))(plVar39,uVar16,*(undefined8 *)(*plVar39 + 0x530));
            lVar25 = unaff_x19[0x5d];
            if (lVar25 == 0) goto LAB_0354fbf4;
            *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar39 = (long *)unaff_x19[0x5d];
            if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          goto LAB_0354b4b4;
        }
        if (iVar11 == 3) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          goto LAB_0354af20;
        }
      }
      else {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar25 = *unaff_x22;
          if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
          if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar58 = *(float *)(unaff_x19 + 0x9b);
          fVar55 = 0.0;
          if ((0.0 < fVar58) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar55 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar55 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar55 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700))
          ;
        }
        else {
          lVar25 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar25 == 0) goto LAB_0354fbf4;
          fVar58 = *(float *)(unaff_x19 + 0x9b);
          fVar55 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_0354fbf4;
        uVar33 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar25 + 0x18) <= uVar33) ||
           (uVar31 = uVar33 - 1, *(uint *)(lVar25 + 0x18) <= uVar31))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar20 = (ulong)(uint)(fVar55 + *(float *)(unaff_x19 + 0x97));
        fVar45 = (fVar55 + *(float *)(unaff_x19 + 0x97) + fVar58) -
                 *(float *)(lVar25 + (long)(int)uVar33 * unaff_x24 + 0x158);
        if ((!bVar9 && *(short *)(lVar25 + (long)(int)uVar31 * (long)iVar13 + 0x20) == 0xad) &&
           ((fVar45 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bVar9 = false;
          *unaff_x20 = uVar31;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          in_stack_000017d8 = CONCAT44(0x2d,uVar31);
          goto LAB_03549564;
        }
        if (*(short *)(lVar25 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad) {
          bVar9 = true;
          goto LAB_03549564;
        }
        if ((in_stack_00000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar55 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar58 <= fVar55) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar20 = (ulong)(uint)fVar55;
            fVar58 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar58 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_0354fcd0:
              fVar52 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar52 <= DAT_00d38b84) {
                fVar52 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar55;
              fVar55 = fVar55 - fVar52;
LAB_0354fc60:
              fVar49 = fVar55 * 20.0 + 0.5;
              fVar52 = DAT_00d38e60;
              if (fVar49 != INFINITY) {
                fVar52 = (float)(int)fVar49 / 20.0;
              }
              if (fVar52 <= fVar58) {
                fVar52 = fVar58;
              }
LAB_0354d004:
              *(float *)((long)unaff_x19 + 0x1e4) = fVar52;
              return;
            }
            goto LAB_0354b6dc;
          }
LAB_0354fc94:
          fVar61 = fVar49;
          if (0.0 < fVar55) {
            fVar61 = fVar49 / (1.0 - fVar55);
          }
          fVar55 = fVar55 + (fVar49 - fVar52 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar61;
LAB_0354fc24:
          if (fVar58 <= fVar55) {
            fVar55 = fVar58;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar55;
          return;
        }
LAB_0354b6dc:
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar7;
        }
        iVar11 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xe78);
        if (((iVar11 != iStack000000000000002c) && (iVar11 != -1)) &&
           (((in_stack_00000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
          goto LAB_0354fbf4;
          uVar33 = *unaff_x20 - 1;
          if (*(uint *)(lVar25 + 0x18) <= uVar33)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar11;
          if (*(short *)(lVar25 + (long)(int)uVar33 * (long)iVar13 + 0x20) == 0xad) {
            bVar9 = false;
            *unaff_x20 = uVar33;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            in_stack_000017d8 = CONCAT44(0x2d,uVar33);
            goto LAB_03549564;
          }
        }
        if (fVar45 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
          uVar20 = param_2;
          FUN_0358cbd4(in_stack_00000050,param_2,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar41,
                       in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
          in_stack_00000068 = 1;
          goto LAB_0354b8d0;
        }
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar58 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar58 = *(float *)(unaff_x19 + 0x59);
          if ((fVar58 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar52 = *(float *)((long)unaff_x19 + 700) +
                     ((fStack0000000000000018 - fVar45) / (float)((int)unaff_x19[0x95] + 1)) /
                     in_stack_00000050;
            if (fVar52 <= fVar58) {
              fVar52 = fVar58;
            }
UnityEngine_AndroidJavaObject___ctor:
            *(float *)((long)unaff_x19 + 700) = fVar52;
            return;
          }
          fVar55 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar55 < fVar58) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_0354fc94;
          fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar20 = (ulong)(uint)fVar55;
          fVar58 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar58 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_0354fcd0;
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          goto switchD_0354b88c_caseD_0;
        case 1:
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar27 = *(long *)(lVar25 + 0xb8);
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
            lVar25 = FUN_01a46ff8(lVar25);
          }
          piVar21 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar21 == 0) {
            bVar9 = false;
LAB_0354cf2c:
            in_stack_000017d8 = DAT_00d37868;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            in_stack_000017b8 = 0xffffffff;
            goto LAB_03549564;
          }
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001018,&stack0x000008b0,0x378);
          iVar13 = FUN_0358c15c();
          bVar9 = false;
LAB_0354b3a0:
          iVar11 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar11;
          in_stack_00000180 = in_stack_00000180 + 1;
          in_stack_000017b8 = iVar13 - 1;
          in_stack_000017d8 = CONCAT44(0x2026,iVar11);
          goto LAB_03549564;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          bVar9 = false;
LAB_0354b0e0:
          in_stack_000017d8 = CONCAT44(3,uVar14);
          goto LAB_03549564;
        case 5:
          goto switchD_0354b88c_caseD_5;
        case 6:
          lVar25 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_036cee6c(lVar25,0,0);
          if ((uVar18 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5d];
            uVar16 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar39 + 0x528))(plVar39,uVar16,*(undefined8 *)(*plVar39 + 0x530));
            lVar25 = unaff_x19[0x5d];
            if (lVar25 == 0) goto LAB_0354fbf4;
            *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar39 = (long *)unaff_x19[0x5d];
            if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bVar9 = false;
LAB_0354b4b4:
          in_stack_000017d8 = CONCAT44(3,*unaff_x20);
          goto LAB_03549564;
        default:
          bVar9 = false;
        }
      }
    }
    if (in_stack_000017ec == 0xad) {
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined1 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017ec == 9) {
        lVar25 = *unaff_x22;
        if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined1 *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
        lVar27 = *(long *)(lVar25 + 0x50);
        if (lVar27 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
        goto LAB_0354b950;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar58,fVar43);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
      }
      uVar14 = *unaff_x20;
      if (bVar6) {
        *(uint *)(in_stack_00000078 + 0x1f0) = uVar14;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x50), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      bVar6 = false;
      *(float *)(lVar25 + 0x60) = fVar57;
      *(float *)(lVar25 + 100) = fVar42;
    }
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar49 = (float)uVar20;
      fVar52 = 0.0;
      if ((0.0 < fVar49) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar20 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar49)) + fVar52)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar18 = FUN_036cee6c(lVar25,0,0);
        if ((uVar18 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x528))(plVar39,uVar16,*(undefined8 *)(*plVar39 + 0x530));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_0354fbf4;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar39 + 0x7a8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_0354b0e0;
      }
    }
    if ((((in_stack_000017ec - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017ec - 10 < 2)) || (in_stack_000017ec == 0xa0)) {
LAB_0354b500:
      if (((in_stack_000017ec != 0xad) && (in_stack_000017ec != 0x200b)) &&
         (in_stack_000017ec != 0x2060)) {
        lVar25 = *unaff_x22;
        if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
        *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b97f8(in_stack_000017ec,0);
      if ((uVar20 & 1) != 0) goto LAB_0354b500;
    }
    if (in_stack_000017ec == 0xa0) {
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x50), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (!bVar5)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
    fVar52 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
    fVar57 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar25 = unaff_x19[0xca];
    fVar49 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar49 = 1.0;
    }
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_0354fbf4;
    fVar58 = *(float *)((long)unaff_x19 + 0x404);
    fVar55 = *(float *)(lVar25 + 0x2c);
    fVar42 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
    fVar43 = *_fStack00000000000000a8;
    fVar42 = fVar58 * (fVar52 / (float)iVar11) * fVar57 * fVar49 * fVar55 * fVar42;
    fVar52 = *_fStack00000000000000a0;
    if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0))
      goto LAB_0354fbf4;
      uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar25 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar49 = *(float *)(lVar25 + (long)(int)uVar14 * (long)iVar13 + 0x60);
      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar58 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar25 = unaff_x19[0xca];
      fVar57 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar57 = 1.0;
      }
      if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar55 = *(float *)((long)unaff_x19 + 0x404);
      fVar45 = *(float *)(lVar25 + 0x2c);
      fVar42 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x50), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar43 = *(float *)(lVar25 + 0x60);
      fVar52 = *(float *)(lVar25 + 100);
      fVar42 = fVar55 * (fVar49 / (float)iVar11) * fVar58 * fVar57 * fVar45 * fVar42;
    }
    fVar58 = *(float *)(unaff_x19 + 0x9b);
    fVar49 = 0.0;
    fVar57 = 0.0;
    if ((0.0 < fVar58) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar45 = *(float *)(unaff_x19 + 0x97);
    fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar55 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar25 = *(long *)(unaff_x19[0xca] + 0x20), lVar25 == 0))
      goto LAB_0354fbf4;
      FUN_03776e6c(&stack0x000008b0,lVar25,0);
      fVar49 = (float)FUN_03776cb4(&stack0x00001710,0);
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar47 = *(float *)(unaff_x19 + 0x6c);
    fVar52 = (fStack000000000000009c - fVar43) - fVar52;
    bVar8 = true;
    if ((fVar47 <= fVar52) && (bVar8 = false, !NAN(fVar47))) {
      bVar8 = fVar47 == -1.0;
    }
    if (!bVar8) {
      fVar52 = fVar47;
    }
    fVar43 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar43 = DAT_00d38acc;
    }
    if (((fVar45 - (fVar62 - fVar58)) + fVar57 < fStack00000000000000c4) &&
       (ABS(fVar55) + fVar42 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar43 * fVar52)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar25 = *(long *)(*(long *)puVar7 + 0xb8);
      memcpy(&stack0x00000538,(void *)(lVar25 + 0x788),0x378);
      FUN_0209b210(lVar25 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar25 = *unaff_x22;
  if (lVar25 == 0) goto LAB_0354fbf4;
  lVar27 = *(long *)(lVar25 + 0x38);
  param_2 = (ulong)(uint)fVar61;
  if (lVar27 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar27 + 100) = uVar14;
  *(int *)(lVar27 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar5) ||
     ((in_stack_000017ec < 0xe && ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) != 0)))) {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(int *)(lVar25 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
    if (*(uint *)(lVar25 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar25 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_000017ec == 9) {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar52 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar46 = *(float *)(unaff_x19 + 200);
    fVar49 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar52 = fVar61 * fVar52 * fVar49;
    fVar49 = fVar52 * (float)(int)(fVar46 / fVar52);
    uVar20 = (ulong)(uint)fVar49;
    if (fVar49 <= fVar46) {
      fVar49 = fVar46 + fVar52;
    }
LAB_0354c000:
    *(float *)(unaff_x19 + 200) = fVar49;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar57 = 1.0;
      }
      else {
        fVar57 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
      }
      fVar49 = *(float *)(unaff_x19 + 200);
      fVar42 = (float)FUN_03776cb4(&stack0x000017a0,0);
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar52 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar49 = fVar49 + fVar52 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar61 * (fVar46 + fVar57 * fVar42) +
                                 fStack00000000000000d4 *
                                 (fStack00000000000000d0 +
                                 fVar41 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar49;
      goto joined_r0x0354bf48;
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar61 * fVar46 +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + fVar41 + *(float *)(*in_stack_00000178 + 0x1ac)));
    uVar20 = (ulong)(uint)fVar49;
    fVar49 = *(float *)(unaff_x19 + 200) - fVar49;
    *(float *)(unaff_x19 + 200) = fVar49;
    if ((in_stack_000017ec == 0x200b) || (uVar12 != 0)) {
      fVar52 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar20 = (ulong)(uint)fVar52;
      fVar49 = fVar49 - fVar52;
      goto LAB_0354c000;
    }
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar52 = *(float *)(unaff_x19 + 200);
    fVar49 = fVar52 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar44) +
                      fStack00000000000000d4 * (fVar41 + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar49;
joined_r0x0354bf48:
    if ((in_stack_000017ec == 0x200b) || (uVar20 = (ulong)(uint)fVar52, uVar12 != 0)) {
      fVar52 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar20 = (ulong)(uint)fVar52;
      fVar49 = fVar49 + fVar52;
      goto LAB_0354c000;
    }
  }
  lVar25 = *unaff_x22;
  if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  uVar14 = *unaff_x20;
  uVar30 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar30 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar49;
  uVar33 = in_stack_000017ec;
  if ((int)in_stack_000017ec < 0xd) {
    if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
    if (((bool)(bVar5 & in_stack_000017ec == 0x2d)) || ((float)uVar14 == in_stack_00000080._4_4_))
    goto LAB_0354c060;
  }
  else {
    if (1 < in_stack_000017ec - 0x2028) {
      if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
      uVar20 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar14 != in_stack_00000080._4_4_) goto LAB_0354c704;
    }
LAB_0354c060:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar52 = *(float *)(unaff_x19 + 0x99);
      fVar49 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar52 = fVar52 - fVar49;
      if (((fStack0000000000000058 < ABS(fVar52)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar52);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar52;
        *(float *)(unaff_x19 + 0x9b) = fVar52 + *(float *)(unaff_x19 + 0x9b);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar7;
        }
        lVar27 = *(long *)(lVar25 + 0xb8);
        if (*(int *)(lVar27 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar27 + 0x11f0,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&stack0x000008b0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar25 + 0xb8) + 0x818,0);
          lVar25 = *(long *)(*(long *)puVar7 + 0xb8);
          *(float *)(lVar25 + 0x7bc) = fVar52 + *(float *)(lVar25 + 0x7bc);
          *(float *)(lVar25 + 0x800) = fVar52 + *(float *)(lVar25 + 0x800);
          memcpy(&stack0x000001c0,(void *)(lVar25 + 0x788),0x378);
          FUN_0209b210(lVar25 + 0x11f0,&stack0x000001c0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar46 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc) - fVar46;
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar49 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar49;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
    fVar57 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017e4 == '\0') {
      in_stack_000017e8 = fVar52;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017e4 = '\x01';
    }
    lVar25 = *unaff_x22;
    if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
    uVar14 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar40 = unaff_x19[0x93];
    lVar19 = lVar27 + (long)(int)uVar14 * 0x5c;
    *(int *)(lVar19 + 0x34) = (int)lVar40;
    uVar30 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar40 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
    *(uint *)(lVar19 + 0x38) = uVar30;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar19 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar11 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
    *(int *)(lVar19 + 0x40) = iVar11;
    *(int *)(lVar19 + 0x24) = (*(int *)(lVar19 + 0x3c) - *(int *)(lVar19 + 0x34)) + 1;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= uVar30)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar60 = *(undefined4 *)(lVar25 + (long)(int)uVar30 * (long)iVar13 + 0x11c);
    lVar27 = lVar27 + (long)(int)uVar14 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar49;
    *(undefined4 *)(lVar27 + 0x6c) = uVar60;
    lVar25 = *unaff_x22;
    if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x50), lVar27 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar57 = fVar57 - fVar46;
    uVar20 = (ulong)(uint)fVar57;
    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) =
         *(undefined4 *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar27 + 0x78) = fVar57;
    lVar25 = *unaff_x22;
    if ((lVar25 == 0) || (lVar40 = *(long *)(lVar25 + 0x50), lVar40 == 0)) goto LAB_0354fbf4;
    lVar19 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = lVar40 + lVar19 * 0x5c;
    *(float *)(lVar27 + 0x44) = *(float *)(lVar27 + 0x74) - fVar61 * in_stack_00000168._4_4_;
    *(float *)(lVar27 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar27 + 0x24) == 1) {
      *(int *)(lVar40 + lVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*in_stack_00000178 == 0) || (lVar27 = *(long *)(lVar25 + 0x38), lVar27 == 0))
    goto LAB_0354fbf4;
    lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar30 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(char *)(lVar27 + lVar36 * unaff_x24 + 0x194) == '\0') &&
       (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar30 <= *(uint *)(unaff_x19 + 0x94)))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar40 = lVar40 + lVar19 * 0x5c;
    fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + fVar41 + *(float *)(*in_stack_00000178 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar52 = -fVar61;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar52 = fVar61;
    }
    *(float *)(lVar40 + 0x58) = *(float *)(lVar27 + lVar36 * unaff_x24 + 0x144) + fVar52;
    *(float *)(lVar40 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar40 + 0x54) = fVar49;
    *(float *)(lVar40 + 0x48) = fStack000000000000005c + (fVar57 - fVar49);
    *(float *)(lVar40 + 0x4c) = fVar57;
    if ((int)in_stack_000017ec < 0x2d) {
      if (in_stack_000017ec - 10 < 2) goto LAB_0354c4a8;
      if (in_stack_000017ec == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
        in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar33 = 3;
      }
    }
    else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d)) goto LAB_0354c4a8;
  }
LAB_0354c704:
  uVar14 = *unaff_x20;
  if (uVar30 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (*(char *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
    lVar27 = lVar27 + (long)(int)uVar14 * unaff_x24;
    uVar18 = *(ulong *)(lVar27 + 0x11c);
    uVar20 = *(ulong *)(in_stack_00000078 + 0x230);
    *(ulong *)(in_stack_00000078 + 0x230) =
         uVar20 ^ (uVar20 ^ uVar18) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar18 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar18));
    uVar18 = *(ulong *)(in_stack_00000078 + 0x238);
    uVar20 = *(ulong *)(lVar27 + 0x128);
    *(ulong *)(in_stack_00000078 + 0x238) =
         uVar18 ^ (uVar18 ^ uVar20) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar18 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar18));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
    lVar27 = *(long *)(lVar25 + 0x58);
    if (lVar27 == 0) goto LAB_0354fbf4;
    iVar11 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar27 + 0x18) < iVar11) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar25 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar25 = *unaff_x22;
      if (lVar25 == 0) goto LAB_0354fbf4;
    }
    lVar27 = *(long *)(lVar25 + 0x58);
    if (lVar27 == 0) goto LAB_0354fbf4;
    uVar30 = *(uint *)(unaff_x19 + 0x96);
    lVar40 = (long)(int)uVar30;
    uVar14 = *(uint *)(lVar27 + 0x18);
    if (uVar14 <= uVar30) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = lVar27 + lVar40 * 0x14;
    fVar49 = *(float *)(lVar19 + 0x30);
    uVar20 = (ulong)(uint)fVar49;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar49 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar49;
    }
    *(float *)(lVar19 + 0x30) = fVar52;
    uVar33 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar33 == 0 && uVar30 == 0) {
      *(uint *)(lVar27 + (ulong)uVar30 * 0x14 + 0x20) = uVar33;
    }
    else {
      uVar31 = uVar33 - 1;
      if (0 < (int)uVar33) {
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= uVar31)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (uVar30 != *(uint *)(lVar25 + (ulong)uVar31 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar14 <= uVar30 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(uint *)(lVar27 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar31;
          *(uint *)(lVar27 + 0x20 + lVar40 * 0x14) = uVar33;
          goto LAB_0354c780;
        }
      }
      if ((float)uVar33 == in_stack_00000080._4_4_) {
        *(float *)(lVar27 + lVar40 * 0x14 + 0x24) = in_stack_00000080._4_4_;
      }
    }
  }
LAB_0354c780:
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
  if ((uVar12 == 0) &&
     (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((in_stack_00000068 & 1) != 0) goto LAB_0354c910;
      goto LAB_0354cc88;
    }
LAB_0354c87c:
    if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
         (0x1d < in_stack_000017ec - 0xa961)) || (uVar18 = FUN_03597a54(0), (uVar18 & 1) != 0)) &&
       ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
         (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
    goto LAB_0354c904;
    lVar25 = FUN_035978e8(0);
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_0354fbf4;
    uVar14 = FUN_0219c130(*(long *)(lVar25 + 0x10),&stack0x000008b0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
      in_stack_000008b0 = in_stack_000017ec;
      if ((uVar14 & 1) == 0) {
LAB_0354cc08:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        in_stack_00000068 = 0;
        goto LAB_0354cc90;
      }
LAB_0354cb6c:
      if (uVar24 != uVar2 || ((in_stack_00000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
      if (uVar12 == 0) goto LAB_0354cbc0;
      goto LAB_0354cb88;
    }
    lVar25 = FUN_035978e8(0);
    if (((lVar25 == 0) || (*unaff_x22 == 0)) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)
       ) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20 + 1)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_0354fbf4;
    in_stack_000008b0 =
         (uint)*(ushort *)(lVar27 + (long)(int)(*unaff_x20 + 1) * (long)iVar13 + 0x20);
    uVar18 = FUN_0219c130(*(long *)(lVar25 + 0x18),&stack0x000008b0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar14 & 1) != 0) goto LAB_0354cb6c;
    if ((uVar18 & 1) == 0) goto LAB_0354cc08;
    if ((in_stack_00000068 & 1) == 0) goto LAB_0354cc88;
    if (uVar12 != 0) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_000017ec - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017ec != 0xa0 && (in_stack_000017ec != 0x2060)))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        in_stack_00000068 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_0354cc90;
      }
      goto LAB_0354c87c;
    }
LAB_0354c904:
    if ((in_stack_00000068 & 1) == 0) {
LAB_0354cc88:
      in_stack_00000068 = 0;
      goto LAB_0354cc90;
    }
    if (uVar12 == 0) {
LAB_0354c910:
      if (!bVar9 && in_stack_000017ec == 0xad) goto LAB_0354cb88;
    }
    else {
LAB_0354cb88:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
LAB_0354cbc0:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  in_stack_00000068 = 1;
LAB_0354cc90:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_03549564;
switchD_0354b88c_caseD_5:
  *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
  param_4 = (ulong)*(uint *)((long)unaff_x19 + 0x2fc);
  param_8 = (ulong)(uint)in_stack_00000048._4_4_;
  param_1 = (ulong)(uint)in_stack_00000050;
  param_5 = (ulong)(uint)fStack00000000000000d0;
  param_3 = (ulong)(uint)fStack00000000000000d4;
  param_6 = (ulong)(uint)fVar41;
  param_7 = (ulong)(uint)in_stack_000000f8._4_4_;
  in_stack_00000068 = 1;
  unaff_d13 = param_2;
  goto code_r0x0354ce48;
LAB_0354c4a8:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  lVar25 = unaff_x19[0x6d];
  *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
  iVar13 = (int)unaff_x19[0x95] + 1;
  *(int *)(unaff_x19 + 0x95) = iVar13;
  *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x50) == 0)) goto LAB_0354fbf4;
  if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar13) {
    FUN_0358ca18();
    lVar25 = unaff_x19[0x6d];
    if (lVar25 == 0) goto LAB_0354fbf4;
  }
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar52 = *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
  if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
    if ((in_stack_000017ec == 0x2029) || (fVar49 = 0.0, in_stack_000017ec == 10)) {
      fVar49 = *(float *)((long)unaff_x19 + 0x2cc);
    }
    uVar22 = 0;
    fVar49 = fVar52 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
             in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
             fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar49) +
             *(float *)(unaff_x19 + 0x9b);
  }
  else {
    if ((in_stack_000017ec == 0x2029) || (fVar49 = 0.0, in_stack_000017ec == 10)) {
      fVar49 = *(float *)((long)unaff_x19 + 0x2cc);
    }
    uVar22 = 1;
    fVar49 = *(float *)(unaff_x19 + 0x9b) +
             *(float *)(unaff_x19 + 0x58) +
             fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar49);
  }
  *(float *)(unaff_x19 + 0x9b) = fVar49;
  *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar25 = *(long *)puVar7;
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x9a) = fVar52;
  uVar20 = NEON_rev64(uVar16,4);
  unaff_x19[0x99] = uVar20;
  *(float *)(unaff_x19 + 200) =
       *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
  FUN_0358c4f0();
  FUN_0358c4f0();
  in_stack_00000068 = 1;
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_0354c6b4;
LAB_0354d7c0:
  uVar10 = uVar24 - 1;
  if (*(uint *)(lVar25 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x50), lVar40 == 0)) goto LAB_0354fbf4;
  lVar36 = (long)(int)uVar10;
  lVar19 = lVar25 + lVar36 * 0x178;
  uVar2 = *(uint *)(lVar19 + 100);
  if (*(uint *)(lVar40 + 0x18) <= uVar2)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar34 = *(long *)(lVar19 + 0x38);
  lVar38 = (long)(int)uVar2;
  lVar40 = lVar40 + lVar38 * 0x5c;
  uVar14 = *(uint *)(lVar40 + 0x68);
  uVar31 = (uint)*(ushort *)(lVar19 + 0x20);
  uVar30 = *(uint *)(lVar40 + 0x3c);
  iVar3 = *(int *)(lVar40 + 0x20);
  iVar11 = *(int *)(lVar40 + 0x28);
  iVar15 = *(int *)(lVar40 + 0x2c);
  fVar57 = *(float *)(lVar40 + 0x4c);
  uVar33 = *(uint *)(lVar40 + 0x40);
  fVar44 = *(float *)(lVar40 + 0x54);
  fVar41 = *(float *)(lVar40 + 0x58);
  fVar43 = *(float *)(lVar40 + 0x5c);
  fVar55 = *(float *)(lVar40 + 0x60);
  fVar58 = *(float *)(lVar40 + 0x6c);
  fVar45 = *(float *)(lVar40 + 0x70);
  fVar46 = *(float *)(lVar40 + 0x74);
  fVar42 = *(float *)(lVar40 + 0x78);
  if ((int)uVar14 < 9) {
    switch(uVar14) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar55 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar41;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar55 + fVar43 * 0.5) - fVar41 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar43 + fVar55) - fVar41;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar43 + fVar55;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar14 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar31 < 0xad) {
      if ((uVar31 != 3) && (uVar31 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar31 != 0xad) && ((uVar31 != 0x200b && (uVar31 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar25 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar4 = *(undefined2 *)(lVar25 + (long)(int)uVar30 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b8cc4(uVar4,0);
      if ((uVar20 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar41 <= fVar43) && (!bVar1 && uVar14 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar55;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar43 + fVar55;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar24 == 1) || (uVar2 != uVar12)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar55;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar43 + fVar55;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar31,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1e];
        fVar55 = -fVar41;
        if (cVar23 != '\0') {
          fVar55 = fVar41;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar30)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar15 = (int)*(char *)(lVar25 + (long)(int)uVar30 * 0x178 + 0x194) +
                 (-iVar3 - (uStack0000000000000030 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar41 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar41 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar31 == 9) {
LAB_0354f76c:
          fVar41 = 1.0 - fVar41;
        }
        else {
          if (uVar31 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b97f8(uVar31,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_0354f76c;
          }
          iVar15 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar11;
        }
        fVar41 = ((fVar43 + fVar55) * fVar41) / (float)iVar15;
        if (cVar23 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar41;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar41;
        }
      }
    }
  }
  else if (uVar14 == 0x20) {
    fVar41 = fVar58 + fVar46;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar14 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar25 + lVar36 * 0x178;
  fVar55 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar41 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar43 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar40 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar11 = *(int *)(lVar25 + lVar36 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0354e05c;
  fVar61 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar19 = lVar25 + lVar36 * 0x178;
    *(undefined4 *)(lVar19 + 0x84) = 0;
    *(undefined4 *)(lVar19 + 0xac) = 0;
    *(undefined4 *)(lVar19 + 0xd4) = 0x3f800000;
    fVar61 = 1.0;
    break;
  case 1:
    fVar42 = *(float *)(lVar25 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar19 = lVar25 + lVar36 * 0x178;
      fVar46 = (in_stack_000000f8._4_4_ + fVar42) - *(float *)(in_stack_00000078 + 0x230);
      fVar42 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar19 = lVar25 + lVar36 * 0x178;
    fVar46 = fVar46 - fVar58;
    *(float *)(lVar19 + 0x84) = fVar61 + (fVar42 - fVar58) / fVar46;
    *(float *)(lVar19 + 0xac) = fVar61 + (*(float *)(lVar19 + 0x98) - fVar58) / fVar46;
    *(float *)(lVar19 + 0xd4) = fVar61 + (*(float *)(lVar19 + 0xc0) - fVar58) / fVar46;
    fVar61 = fVar61 + (*(float *)(lVar19 + 0xe8) - fVar58) / fVar46;
    break;
  case 2:
    lVar19 = lVar25 + lVar36 * 0x178;
    fVar42 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar46 = (in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar19 + 0x84) = fVar61 + fVar46 / fVar42;
    *(float *)(lVar19 + 0xac) =
         fVar61 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar19 + 0xd4) =
         fVar61 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar61 = fVar61 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar19 = lVar25 + lVar36 * 0x178;
      *(undefined4 *)(lVar19 + 0x88) = 0;
      *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0xd8) = 0;
      *(undefined4 *)(lVar19 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar19 = lVar25 + lVar36 * 0x178;
      fVar42 = fVar42 - fVar45;
      fVar46 = fVar61 + (*(float *)(lVar19 + 0x74) - fVar45) / fVar42;
      fVar42 = fVar61 + (*(float *)(lVar19 + 0x9c) - fVar45) / fVar42;
      *(float *)(lVar19 + 0x88) = fVar46;
      *(float *)(lVar19 + 0xb0) = fVar42;
      *(float *)(lVar19 + 0xd8) = fVar46;
      *(float *)(lVar19 + 0x100) = fVar42;
      break;
    case 2:
      lVar19 = lVar25 + lVar36 * 0x178;
      fVar46 = fVar61 + (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar19 + 0x88) = fVar46;
      fVar42 = *(float *)(unaff_x19 + 0x9c);
      fVar58 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar19 + 0xd8) = fVar46;
      fVar46 = fVar61 + (*(float *)(lVar19 + 0x9c) - fVar42) / (fVar58 - fVar42);
      *(float *)(lVar19 + 0xb0) = fVar46;
      *(float *)(lVar19 + 0x100) = fVar46;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar14 = (uint)*(undefined8 *)(lVar25 + 0x18);
    }
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = lVar25 + lVar36 * 0x178;
    fVar46 = *(float *)(lVar19 + 0x15c);
    fVar42 = (1.0 - (*(float *)(lVar19 + 0x88) + *(float *)(lVar19 + 0xb0)) * fVar46) * 0.5;
    fVar58 = fVar61 + *(float *)(lVar19 + 0x88) * fVar46 + fVar42;
    fVar61 = fVar61 + fVar42 + *(float *)(lVar19 + 0xb0) * fVar46;
    *(float *)(lVar19 + 0x84) = fVar58;
    *(float *)(lVar19 + 0xac) = fVar58;
    *(float *)(lVar19 + 0xd4) = fVar61;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar25 + lVar36 * 0x178 + 0xfc) = fVar61;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = lVar25 + lVar36 * 0x178;
    *(undefined4 *)(lVar19 + 0x88) = 0;
    *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar19 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar19 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar14) {
      lVar19 = lVar25 + lVar36 * 0x178;
      fVar57 = fVar57 - fVar44;
      fVar61 = (*(float *)(lVar19 + 0x74) - fVar44) / fVar57;
      fVar57 = (*(float *)(lVar19 + 0x9c) - fVar44) / fVar57;
      *(float *)(lVar19 + 0x88) = fVar61;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = lVar25 + lVar36 * 0x178;
    fVar61 = (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar19 + 0x88) = fVar61;
    fVar57 = (*(float *)(lVar19 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar19 + 0xb0) = fVar57;
    *(float *)(lVar19 + 0xd8) = fVar57;
    *(float *)(lVar19 + 0x100) = fVar61;
    break;
  case 3:
    if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = lVar25 + lVar36 * 0x178;
    fVar57 = *(float *)(lVar19 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar19 + 0x84) + *(float *)(lVar19 + 0xd4)) / fVar57) * 0.5;
    fVar61 = *(float *)(lVar19 + 0x84) / fVar57 + fVar46;
    fVar46 = fVar46 + *(float *)(lVar19 + 0xd4) / fVar57;
    *(float *)(lVar19 + 0x88) = fVar61;
    *(float *)(lVar19 + 0xb0) = fVar46;
    *(float *)(lVar19 + 0x100) = fVar61;
    *(float *)(lVar19 + 0xd8) = fVar46;
  }
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar19 = lVar25 + lVar36 * 0x178;
  fVar61 = ABS(fVar52) * *(float *)(lVar19 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar19 + 0x5c) == '\0') && ((*(byte *)(lVar25 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar61 = -fVar61;
  }
  lVar19 = lVar25 + lVar36 * 0x178;
  fVar57 = *(float *)(lVar19 + 0x88);
  fVar42 = *(float *)(lVar19 + 0x84);
  fVar46 = -2.1474836e+09;
  if (fVar42 != INFINITY) {
    fVar46 = (float)(int)fVar42;
  }
  fVar58 = *(float *)(lVar19 + 0xd4);
  fVar45 = *(float *)(lVar19 + 0xd8);
  fVar44 = -2.1474836e+09;
  if (fVar57 != INFINITY) {
    fVar44 = (float)(int)fVar57;
  }
  uVar50 = FUN_03591d3c(fVar42 - fVar46,fVar57 - fVar44);
  *(undefined4 *)(lVar19 + 0x84) = uVar50;
  if (*(uint *)(lVar25 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar45 = fVar45 - fVar44;
  *(float *)(lVar19 + 0x88) = fVar61;
  uVar50 = FUN_03591d3c(fVar42 - fVar46,fVar45);
  *(undefined4 *)(lVar25 + lVar36 * 0x178 + 0xac) = uVar50;
  if (*(uint *)(lVar25 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar58 = fVar58 - fVar46;
  *(float *)(lVar25 + lVar36 * 0x178 + 0xb0) = fVar61;
  fVar46 = (float)FUN_03591d3c(fVar58,fVar45);
  *(float *)(lVar19 + 0xd4) = fVar46;
  if (*(uint *)(lVar25 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar19 + 0xd8) = fVar61;
  uVar50 = FUN_03591d3c(fVar58,fVar57 - fVar44);
  *(undefined4 *)(lVar25 + lVar36 * 0x178 + 0xfc) = uVar50;
  uVar14 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar25 + lVar36 * 0x178 + 0x100) = fVar61;
LAB_0354e05c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar40 = lVar25 + lVar36 * 0x178;
      *(ulong *)(lVar40 + 0x70) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar40 + 0x70));
      *(float *)(lVar40 + 0x78) = fVar43 + *(float *)(lVar40 + 0x78);
      *(ulong *)(lVar40 + 0x98) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar40 + 0x98) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar40 + 0x98));
      *(float *)(lVar40 + 0xa0) = fVar43 + *(float *)(lVar40 + 0xa0);
      *(ulong *)(lVar40 + 0xc0) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar40 + 0xc0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar40 + 0xc0));
      *(float *)(lVar40 + 200) = fVar43 + *(float *)(lVar40 + 200);
      *(ulong *)(lVar40 + 0xe8) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar40 + 0xe8) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar40 + 0xe8));
      *(float *)(lVar40 + 0xf0) = fVar43 + *(float *)(lVar40 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar14) {
        if (*(uint *)(lVar25 + lVar36 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar14 = *(uint *)(lVar25 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar19 = lVar25 + lVar36 * 0x178;
  *(undefined8 *)(lVar19 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar19 + 0x78) = uVar50;
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar19 = lVar25 + lVar36 * 0x178;
  *(undefined8 *)(lVar19 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar19 + 0xa0) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar19 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar19 + 200) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar19 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar19 + 0xf0) = uVar50;
  *(undefined1 *)(lVar40 + 0x194) = 0;
LAB_0354e184:
  if (iVar11 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar29)();
  }
  else if (iVar11 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar40 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar40 + lVar36 * 0x178;
  uVar16 = *(undefined8 *)(lVar40 + 0x11c);
  *(undefined8 *)(lVar40 + 0x11c) =
       CONCAT44(fVar41 + (float)((ulong)uVar16 >> 0x20),fVar55 + (float)uVar16);
  *(float *)(lVar40 + 0x124) = fVar43 + *(float *)(lVar40 + 0x124);
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar40 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar40 + lVar36 * 0x178;
  *(ulong *)(lVar40 + 0x110) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar40 + 0x110) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar40 + 0x110));
  *(float *)(lVar40 + 0x118) = fVar43 + *(float *)(lVar40 + 0x118);
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar40 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar40 + lVar36 * 0x178;
  *(ulong *)(lVar40 + 0x128) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar40 + 0x128) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar40 + 0x128));
  *(float *)(lVar40 + 0x130) = fVar43 + *(float *)(lVar40 + 0x130);
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar40 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar40 + lVar36 * 0x178;
  *(float *)(lVar40 + 0x134) = fVar55 + *(float *)(lVar40 + 0x134);
  *(ulong *)(lVar40 + 0x138) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar40 + 0x138) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar40 + 0x138));
  lVar40 = *unaff_x22;
  if ((lVar40 == 0) || (lVar19 = *(long *)(lVar40 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
  uVar14 = *(uint *)(lVar19 + 0x18);
  if (uVar14 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar19 + lVar36 * 0x178;
  *(float *)(lVar35 + 0x150) = fVar41 + *(float *)(lVar35 + 0x150);
  *(ulong *)(lVar35 + 0x140) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar35 + 0x140));
  *(ulong *)(lVar35 + 0x148) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar35 + 0x148));
  if (uVar2 == uVar12) {
    uVar12 = *unaff_x20 - 1;
    if (uVar10 == uVar12) goto LAB_0354e3ec;
  }
  else {
    lVar40 = *(long *)(lVar40 + 0x50);
    if (lVar40 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar40 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar35 = (long)(int)uVar12;
    lVar37 = lVar40 + lVar35 * 0x5c;
    fVar46 = fVar41 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar41 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar46;
    *(float *)(lVar37 + 0x58) = fVar55 + *(float *)(lVar37 + 0x58);
    if (uVar14 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar50 = *(undefined4 *)(lVar19 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar40 = lVar40 + lVar35 * 0x5c;
    *(float *)(lVar40 + 0x70) = fVar46;
    *(undefined4 *)(lVar40 + 0x6c) = uVar50;
    lVar40 = *unaff_x22;
    if ((lVar40 == 0) || (lVar19 = *(long *)(lVar40 + 0x50), lVar19 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar19 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar40 = *(long *)(lVar40 + 0x38);
    if (lVar40 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar19 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar40 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = lVar19 + lVar35 * 0x5c;
    *(undefined4 *)(lVar19 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar12 * 0x178 + 0x128);
    *(undefined4 *)(lVar19 + 0x78) = *(undefined4 *)(lVar19 + 0x4c);
    uVar12 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar10 == uVar12) {
      lVar40 = *unaff_x22;
      if ((lVar40 == 0) || (lVar19 = *(long *)(lVar40 + 0x50), lVar19 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar19 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar19 + lVar38 * 0x5c;
      fVar46 = fVar41 + *(float *)(lVar35 + 0x54);
      *(ulong *)(lVar35 + 0x4c) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar35 + 0x4c));
      *(float *)(lVar35 + 0x54) = fVar46;
      *(float *)(lVar35 + 0x58) = fVar55 + *(float *)(lVar35 + 0x58);
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(lVar35 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar50 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar19 = lVar19 + lVar38 * 0x5c;
      *(float *)(lVar19 + 0x70) = fVar46;
      *(undefined4 *)(lVar19 + 0x6c) = uVar50;
      lVar40 = *unaff_x22;
      if ((lVar40 == 0) || (lVar19 = *(long *)(lVar40 + 0x50), lVar19 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar19 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar19 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar40 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = lVar19 + lVar38 * 0x5c;
      *(undefined4 *)(lVar19 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar12 * 0x178 + 0x128);
      *(undefined4 *)(lVar19 + 0x78) = *(undefined4 *)(lVar19 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_026b82c4(uVar31,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
    if (bVar6) {
      if (((uVar24 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
        if (*(uint *)(lVar25 + 0x18) <= uVar24 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar25 + lVar27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b82c4(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar24)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar25 + lVar27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar4,0);
          if ((uVar20 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar24 != 1) {
LAB_0354f144:
        bVar6 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b81f8(uVar31,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b63d8(uVar31,0);
        if (((uVar31 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar10 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b82c4(uVar31,0);
      iVar11 = (int)fStack0000000000000124;
      if ((uVar20 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar11 = uVar24 - 2;
    }
    lVar40 = *unaff_x22;
    if (lVar40 == 0) goto LAB_0354fbf4;
    lVar19 = *(long *)(lVar40 + 0x40);
    if (lVar19 == 0) goto LAB_0354fbf4;
    uVar12 = *(uint *)(lVar40 + 0x24);
    iVar15 = *(int *)(lVar19 + 0x18);
    if (iVar15 < (int)(uVar12 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar40 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar40 = *unaff_x22;
      if (lVar40 == 0) goto LAB_0354fbf4;
    }
    lVar40 = *(long *)(lVar40 + 0x40);
    if (lVar40 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar40 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar40 = lVar40 + (long)(int)uVar12 * 0x18;
    *(long **)(lVar40 + 0x20) = unaff_x19;
    *(float *)(lVar40 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar40 + 0x2c) = iVar11;
    *(int *)(lVar40 + 0x30) = (iVar11 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar40 = unaff_x19[0x6d];
    if (lVar40 == 0) goto LAB_0354fbf4;
    lVar19 = *(long *)(lVar40 + 0x50);
    *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
    if (lVar19 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar19 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = lVar19 + lVar38 * 0x5c;
    bVar6 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000168._4_4_ = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar40 = *unaff_x22;
      if (lVar40 == 0) goto LAB_0354fbf4;
      lVar19 = *(long *)(lVar40 + 0x40);
      if (lVar19 == 0) goto LAB_0354fbf4;
      uVar12 = *(uint *)(lVar40 + 0x24);
      iVar11 = *(int *)(lVar19 + 0x18);
      if (iVar11 < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar40 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar40 = *unaff_x22;
        if (lVar40 == 0) goto LAB_0354fbf4;
      }
      lVar40 = *(long *)(lVar40 + 0x40);
      if (lVar40 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = lVar40 + (long)(int)uVar12 * 0x18;
      *(long **)(lVar40 + 0x20) = unaff_x19;
      *(float *)(lVar40 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar40 + 0x2c) = uVar10;
      *(uint *)(lVar40 + 0x30) = uVar24 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar40 = unaff_x19[0x6d];
      if (lVar40 == 0) goto LAB_0354fbf4;
      lVar19 = *(long *)(lVar40 + 0x50);
      *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
      if (lVar19 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar19 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = lVar19 + lVar38 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
    }
LAB_0354e610:
    bVar6 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  uVar12 = *(uint *)(lVar40 + 0x18);
  if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar40 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0354e660:
      if (uVar12 <= uVar24 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = *unaff_x19;
      uVar50 = *(undefined4 *)(lVar40 + lVar27 + -0x330);
      uVar51 = *(undefined4 *)(lVar40 + lVar27 + -0x2f8);
LAB_0354ebc0:
      pcVar29 = *(code **)(lVar19 + 0x8d8);
LAB_0354ebc8:
      (*pcVar29)(fStack0000000000000070,_in_stack_00000068,uStack000000000000006c,uVar50,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar51);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar40 = *(long *)puVar7;
      }
LAB_0354ec1c:
      fVar49 = 0.0;
      bVar9 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar40 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar9 = false;
    }
  }
  else {
    lVar40 = lVar40 + lVar36 * 0x178;
    iVar11 = *(int *)(lVar40 + 0x68);
    *(int *)(lVar40 + 0x16c) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b63d8(uVar31,0);
    if ((uVar31 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar40 = *unaff_x22;
      if ((lVar40 == 0) || (lVar19 = *(long *)(lVar40 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar19 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar46 = *(float *)(lVar19 + lVar36 * 0x178 + 0x160);
      if (fVar49 <= fVar46) {
        fVar49 = fVar46;
      }
      if (fStack0000000000000100 <= ABS(fVar61)) {
        fStack0000000000000100 = ABS(fVar61);
      }
      if ((float)iVar11 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *unaff_x22;
          if (lVar40 == 0) goto LAB_0354fbf4;
          lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar19 + 0x15a8);
      }
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)(lVar40 + lVar36 * 0x178 + 0x14c);
      fVar46 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar57 = fVar57 + fVar49 * fVar46;
      fStack000000000000005c = (float)iVar11;
      if (fVar57 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar57;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar31,0);
        if ((uVar20 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = lVar40 + lVar36 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar40 + 0x160);
      fStack0000000000000070 = *(float *)(lVar40 + 0x11c);
      bVar9 = fVar49 != 0.0;
      fVar46 = in_stack_00000080._4_4_;
      if (bVar9) {
        fVar46 = fVar49;
      }
      fVar49 = fVar46;
      uVar60 = *(undefined4 *)(lVar40 + 0x168);
      uStack000000000000006c = 0;
      fVar46 = fVar61;
      if (bVar9) {
        fVar46 = fStack0000000000000100;
      }
      _in_stack_00000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar46;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
        if (uVar10 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar36 * 0x178;
          lVar19 = *unaff_x19;
          uVar50 = *(undefined4 *)(lVar40 + 0x128);
          uVar51 = *(undefined4 *)(lVar40 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar10 == uVar30) || ((int)uVar33 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar31,0);
      if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
        lVar19 = lVar36;
        uVar12 = uVar10;
        if (uVar31 == 0x200b || (uVar20 & 1) != 0) {
          lVar19 = (long)(int)uVar33;
          uVar12 = uVar33;
        }
        if (uVar12 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar19 * 0x178;
          uVar50 = *(undefined4 *)(lVar40 + 0x128);
          uVar51 = *(undefined4 *)(lVar40 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
        uVar12 = *(uint *)(lVar40 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= uVar24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar20 = FUN_03567ad8(uVar60,*(undefined4 *)(lVar40 + lVar27),0);
      if ((uVar20 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
          if (uVar10 < *(uint *)(lVar40 + 0x18)) {
            lVar40 = lVar40 + lVar36 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_in_stack_00000068,uStack000000000000006c,
                       *(undefined4 *)(lVar40 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar40 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar40 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar40 = *(long *)puVar7;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar9 = true;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar40 + 0x18) <= uVar10)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar34 == 0) goto LAB_0354fbf4;
  uVar12 = *(uint *)(lVar40 + lVar36 * 0x178 + 400);
  fVar46 = (float)FUN_03776a30(lVar34 + 0x50,0);
  if ((uVar12 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= uVar24 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar50 = *(undefined4 *)(lVar40 + lVar27 + -0x330);
      fVar41 = *(float *)(lVar40 + lVar27 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar29)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar50,
                 fStack00000000000000a8 * fVar46 + fVar41,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar5 = false;
  }
  else {
    lVar40 = *unaff_x22;
    if ((lVar40 == 0) || (lVar19 = *(long *)(lVar40 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar19 + 0x18) <= uVar10)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar19 + lVar36 * 0x178 + 0x174) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar19 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar31 == 0xd) || ((uVar31 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar10)) ||
       (bVar5 || !bVar1)) {
LAB_0354ed84:
      if (!bVar5) goto LAB_0354f250;
    }
    else {
      if (uVar10 == uVar33) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar31,0);
        if ((uVar20 & 1) != 0) goto LAB_0354ed84;
        lVar40 = *unaff_x22;
        if (lVar40 == 0) goto LAB_0354fbf4;
      }
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar40 + 0x18) <= uVar10)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = lVar40 + lVar36 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar40 + 0x60);
      fStack0000000000000040 = *(float *)(lVar40 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar40 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar40 + 0x160);
      fStack000000000000009c = fVar46 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar12 = *unaff_x20;
    if (uVar12 == 1) {
      if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
        uVar12 = *(uint *)(lVar40 + 0x18);
LAB_0354ef0c:
        if (uVar10 < uVar12) {
          lVar40 = lVar40 + lVar36 * 0x178;
          lVar19 = *unaff_x19;
          uVar50 = *(undefined4 *)(lVar40 + 0x128);
          fVar41 = *(float *)(lVar40 + 0x14c);
LAB_0354ef24:
          pcVar29 = *(code **)(lVar19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar10 == uVar30) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar31,0);
      if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
        uVar12 = *(uint *)(lVar40 + 0x18);
        if (uVar31 == 0x200b || (uVar20 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar19 = lVar36;
        if (uVar10 < uVar12) {
LAB_0354f1f8:
          lVar40 = lVar40 + lVar19 * 0x178;
          fVar41 = *(float *)(lVar40 + 0x14c);
          uVar50 = *(undefined4 *)(lVar40 + 0x128);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar10 < (int)uVar12) {
      lVar40 = *unaff_x22;
      if ((lVar40 != 0) && (lVar19 = *(long *)(lVar40 + 0x38), lVar19 != 0)) {
        if (uVar24 < *(uint *)(lVar19 + 0x18)) {
          if (*(float *)(lVar19 + lVar27 + -0x108) == in_stack_00000048._4_4_) {
            fVar57 = *(float *)(lVar19 + lVar27 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_03567bac(fVar41 + fVar57,fStack0000000000000040,0);
            if ((uVar20 & 1) != 0) {
              uVar12 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar40 = *unaff_x22;
            if (lVar40 == 0) goto LAB_0354fbf4;
          }
          lVar40 = *(long *)(lVar40 + 0x38);
          if (lVar40 != 0) {
            uVar12 = *(uint *)(lVar40 + 0x18);
            if ((int)uVar10 <= (int)uVar33) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar19 = (long)(int)uVar33;
            if (uVar33 < uVar12) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar10 < (int)uVar12) {
      iVar11 = FUN_036d3364(lVar34,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = *(long *)(lVar25 + lVar27 + -0x130);
      if (lVar40 == 0) goto LAB_0354fbf4;
      iVar15 = FUN_036d3364(lVar40,0);
      if (iVar11 != iVar15) {
        if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
          uVar12 = *(uint *)(lVar40 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
        if (uVar24 - 2 < *(uint *)(lVar40 + 0x18)) {
          lVar19 = *unaff_x19;
          uVar50 = *(undefined4 *)(lVar40 + lVar27 + -0x330);
          fVar41 = *(float *)(lVar40 + lVar27 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar5 = true;
  }
  if ((*unaff_x22 == 0) || (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 == 0)) goto LAB_0354fbf4;
  uVar12 = (uint)*(undefined8 *)(lVar40 + 0x18);
  if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar40 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar40 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar8) {
LAB_0354f400:
      if (uVar12 <= uVar10) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = lVar40 + lVar36 * 0x178;
      fVar46 = *(float *)(lVar40 + 0x128);
      fVar44 = *(float *)(lVar40 + 0x188);
      uVar17 = *(undefined8 *)(lVar40 + 0x17c);
      fVar43 = *(float *)(lVar40 + 0x184);
      uVar16 = *(undefined8 *)(lVar40 + 0x184);
      fVar58 = *(float *)(lVar40 + 0x18c);
      fVar41 = *(float *)(lVar40 + 0x11c);
      fVar57 = *(float *)(lVar40 + 0x148);
      fVar42 = *(float *)(lVar40 + 0x150);
      in_stack_00000188 = uVar17;
      fStack0000000000000190 = fVar43;
      fStack0000000000000194 = fVar44;
      in_stack_00000198 = fVar58;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar20 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar40 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar20 & 1) == 0) {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar40);
        }
        fVar46 = fVar46 + (float)in_stack_000017c8;
        fVar41 = fVar41 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar57 = fVar57 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar41 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar41;
        }
        if (fVar42 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar42 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar46) {
          fStack00000000000000d0 = fVar46;
        }
        if (fStack00000000000000d4 <= fVar57) {
          fStack00000000000000d4 = fVar57;
        }
      }
      else {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar40);
        }
        fVar41 = (fVar41 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar42 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar42;
        }
        if (fStack00000000000000d4 <= fVar57) {
          fStack00000000000000d4 = fVar57;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar41,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar42 - fVar58;
        fStack00000000000000d0 = fVar46 + fVar43;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar57 + fVar44;
        fStack00000000000000e0 = fVar41;
        in_stack_000017c0 = uVar17;
        in_stack_000017c8 = uVar16;
        in_stack_000017d0 = fVar58;
      }
      if (((*unaff_x20 == 1) || (uVar10 == uVar30)) || (((int)uVar33 <= (int)uVar10 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar8 = true;
    }
    else {
      if ((((uVar31 != 0xd) && ((uVar31 & 0xfffe) != 10)) && ((int)uVar10 <= (int)uVar33)) &&
         (bVar1)) {
        if (uVar10 == uVar33) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b97f8(uVar31,0);
          if ((uVar20 & 1) != 0) goto LAB_0354f374;
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *(long *)puVar7;
        }
        if ((*unaff_x22 != 0) && (lVar40 = *(long *)(*unaff_x22 + 0x38), lVar40 != 0)) {
          uVar12 = (uint)*(undefined8 *)(lVar40 + 0x18);
          if (uVar10 < uVar12) {
            lVar19 = *(long *)(lVar19 + 0xb8);
            lVar34 = lVar40 + lVar36 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar34 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar34 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar19 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar19 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar34 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar19 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar19 + 0x15a4);
            uStack00000000000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar8 = false;
    }
  }
  uVar10 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar27 = lVar27 + 0x178;
  bVar1 = (int)uVar10 <= (int)uVar24;
  uVar12 = uVar2;
  uVar24 = uVar24 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar25 = *unaff_x22;
  if (lVar25 != 0) {
    iVar13 = uVar2 + 1;
    plVar39 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar25 + 0x18) = uVar10;
    lVar27 = unaff_x19[0xd4];
    *(int *)(lVar25 + 0x2c) = iVar13;
    if ((int)uVar10 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar25 + 0x1c) = (int)lVar27;
    *(int *)(lVar25 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar25 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar25 = unaff_x19[0xdb];
    if (lVar25 != 0) {
      (**(code **)(lVar25 + 0x18))
                (*(undefined8 *)(lVar25 + 0x40),*unaff_x22,*(undefined8 *)(lVar25 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x60), lVar25 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar25 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar25 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
        if (*(int *)(lVar25 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
            if (*(int *)(lVar25 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
                if (*(int *)(lVar25 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
                    if (*(int *)(lVar25 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar25 = *unaff_x22;
                        if (lVar25 != 0) {
                          lVar40 = 0;
                          lVar27 = 0;
                          do {
                            uVar20 = lVar27 + 1;
                            if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar20) goto LAB_0354d0cc;
                            lVar25 = *(long *)(lVar25 + 0x60);
                            if (lVar25 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar25 + 0x18) <= uVar20)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar25 + lVar40 + 0x70,0);
                            lVar25 = unaff_x19[0xe1];
                            if (lVar25 == 0) break;
                            if (*(uint *)(lVar25 + 0x18) <= uVar20)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar16 = *(undefined8 *)(lVar25 + lVar27 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar18 = FUN_036d35a8(uVar16,0,0);
                            if ((uVar18 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar25 = *(long *)(*unaff_x22 + 0x60), lVar25 == 0)) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar25 + 0x18) <= uVar20)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar25 + lVar40 + 0x70,1,0);
                              }
                              lVar25 = unaff_x19[0xe1];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar25 = *(long *)(lVar25 + lVar27 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_0359d5ac(lVar25,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar19 = *(long *)(*unaff_x22 + 0x60), lVar19 == 0)) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar25 == 0) break;
                              FUN_036a460c(lVar25,*(undefined8 *)(lVar19 + lVar40 + 0x80),0);
                              lVar25 = unaff_x19[0xe1];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar25 = *(long *)(lVar25 + lVar27 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_0359d5ac(lVar25,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar19 = *(long *)(*unaff_x22 + 0x60), lVar19 == 0)) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar25 == 0) break;
                              FUN_036a4810(lVar25,*(undefined8 *)(lVar19 + lVar40 + 0x98),0);
                              lVar25 = unaff_x19[0xe1];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar25 = *(long *)(lVar25 + lVar27 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_0359d5ac(lVar25,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar19 = *(long *)(*unaff_x22 + 0x60), lVar19 == 0)) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar25 == 0) break;
                              FUN_036a48bc(lVar25,*(undefined8 *)(lVar19 + lVar40 + 0xa0),0);
                              lVar25 = unaff_x19[0xe1];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar25 = *(long *)(lVar25 + lVar27 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_0359d5ac(lVar25,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar19 = *(long *)(*unaff_x22 + 0x60), lVar19 == 0)) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar25 == 0) break;
                              FUN_036a4e24(lVar25,*(undefined8 *)(lVar19 + lVar40 + 0xa8),0);
                              lVar25 = unaff_x19[0xe1];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar25 = *(long *)(lVar25 + lVar27 * 8 + 0x28);
                              if ((lVar25 == 0) || (lVar25 = FUN_0359d5ac(lVar25,0), lVar25 == 0))
                              break;
                              FUN_036aa280(lVar25,0);
                            }
                            lVar25 = *unaff_x22;
                            lVar27 = lVar27 + 1;
                            lVar40 = lVar40 + 0x50;
                          } while (lVar25 != 0);
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


