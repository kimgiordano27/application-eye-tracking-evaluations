/*
FUNCTION_NAME: UnityEngine._AndroidJNIHelper$$Unbox
ENTRY_POINT: 0354c1f0
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


void UnityEngine__AndroidJNIHelper__Unbox
               (float param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined1 uVar19;
  char cVar20;
  uint in_w8;
  long lVar21;
  undefined4 *puVar22;
  float *pfVar23;
  code *pcVar24;
  uint uVar25;
  float *pfVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar36;
  long *unaff_x22;
  int iVar37;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar38;
  long unaff_x26;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  ulong uVar48;
  ulong uVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
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
  ulong in_stack_00000060;
  byte bStack0000000000000068;
  byte bStack000000000000006c;
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
  float in_stack_00000138;
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
  byte in_stack_000017e4;
  float in_stack_000017e8;
  uint in_stack_000017ec;
  
code_r0x0354c1f0:
  uVar13 = (uint)unaff_x26;
  fVar50 = *(float *)(unaff_x19 + 0x99);
  if (in_w8 == 0) {
    in_stack_000017e8 = param_4;
  }
  if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
     (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
      ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
    in_stack_000017e4 = 1;
  }
  lVar27 = *unaff_x22;
  if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x50), lVar21 == 0)) goto LAB_0354fbf4;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  if (uVar14 < *(uint *)(lVar21 + 0x18)) {
    lVar32 = unaff_x19[0x93];
    lVar31 = lVar21 + (long)(int)uVar14 * 0x5c;
    *(int *)(lVar31 + 0x34) = (int)lVar32;
    uVar28 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar32 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar28 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar28;
    *(uint *)(lVar31 + 0x38) = uVar28;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar31 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar37 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar28 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar37 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar37;
    *(int *)(lVar31 + 0x40) = iVar37;
    *(int *)(lVar31 + 0x24) = (*(int *)(lVar31 + 0x3c) - *(int *)(lVar31 + 0x34)) + 1;
    *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_0354fbf4;
    if (uVar28 < *(uint *)(lVar27 + 0x18)) {
      iVar37 = (int)unaff_x24;
      uVar60 = *(undefined4 *)(lVar27 + (long)(int)uVar28 * (long)iVar37 + 0x11c);
      lVar21 = lVar21 + (long)(int)uVar14 * 0x5c;
      *(float *)(lVar21 + 0x70) = param_1;
      *(undefined4 *)(lVar21 + 0x6c) = uVar60;
      lVar27 = *unaff_x22;
      if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x50), lVar21 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar21 + 0x18)) {
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_0354fbf4;
        if (*(uint *)((long)unaff_x19 + 0x4a4) < *(uint *)(lVar27 + 0x18)) {
          fVar50 = fVar50 - param_2;
          uVar48 = (ulong)(uint)fVar50;
          lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          *(undefined4 *)(lVar21 + 0x74) =
               *(undefined4 *)
                (lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
          *(float *)(lVar21 + 0x78) = fVar50;
          lVar27 = *unaff_x22;
          if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x50), lVar21 == 0)) goto LAB_0354fbf4;
          lVar32 = (long)(int)*(uint *)(unaff_x19 + 0x95);
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar21 + 0x18)) {
            lVar31 = lVar21 + lVar32 * 0x5c;
            *(float *)(lVar31 + 0x44) =
                 *(float *)(lVar31 + 0x74) - (float)unaff_d13 * in_stack_00000168._4_4_;
            *(float *)(lVar31 + 0x5c) = in_stack_000000f8._4_4_;
            if (*(int *)(lVar31 + 0x24) == 1) {
              *(int *)(lVar21 + lVar32 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
            }
            if ((*in_stack_00000178 == 0) || (lVar31 = *(long *)(lVar27 + 0x38), lVar31 == 0))
            goto LAB_0354fbf4;
            lVar33 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
            uVar14 = (uint)*(undefined8 *)(lVar31 + 0x18);
            if (*(uint *)((long)unaff_x19 + 0x4a4) < uVar14) {
              if ((*(char *)(lVar31 + lVar33 * unaff_x24 + 0x194) != '\0') ||
                 (lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                 *(uint *)(unaff_x19 + 0x94) < uVar14)) {
                lVar21 = lVar21 + lVar32 * 0x5c;
                fVar51 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                         (fStack00000000000000d4 *
                          (fStack00000000000000d0 +
                          in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)) -
                         *(float *)((long)unaff_x19 + 0x2ac));
                fVar46 = -fVar51;
                if ((char)unaff_x19[0x1e] != '\0') {
                  fVar46 = fVar51;
                }
                *(float *)(lVar21 + 0x58) = *(float *)(lVar31 + lVar33 * unaff_x24 + 0x144) + fVar46
                ;
                *(float *)(lVar21 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                *(float *)(lVar21 + 0x54) = param_1;
                *(float *)(lVar21 + 0x48) = fStack000000000000005c + (fVar50 - param_1);
                *(float *)(lVar21 + 0x4c) = fVar50;
                uVar28 = in_stack_000017ec;
                if ((int)in_stack_000017ec < 0x2d) {
                  if (1 < in_stack_000017ec - 10) {
                    if (in_stack_000017ec != 3) goto LAB_0354c704;
                    if (unaff_x19[0x8f] != 0) {
                      in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                      uVar28 = 3;
                      goto LAB_0354c704;
                    }
                    goto LAB_0354fbf4;
                  }
                }
                else if ((1 < in_stack_000017ec - 0x2028) && (in_stack_000017ec != 0x2d))
                goto LAB_0354c704;
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_0358c4f0();
                lVar27 = unaff_x19[0x6d];
                *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                iVar12 = (int)unaff_x19[0x95] + 1;
                *(int *)(unaff_x19 + 0x95) = iVar12;
                *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                if ((lVar27 == 0) || (*(long *)(lVar27 + 0x50) == 0)) goto LAB_0354fbf4;
                if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar12) {
                  FUN_0358ca18();
                  lVar27 = unaff_x19[0x6d];
                  if (lVar27 == 0) goto LAB_0354fbf4;
                }
                lVar27 = *(long *)(lVar27 + 0x38);
                if (lVar27 == 0) goto LAB_0354fbf4;
                if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
                  fVar50 = *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                  if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                    if ((in_stack_000017ec == 0x2029) || (fVar46 = 0.0, in_stack_000017ec == 10)) {
                      fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                    }
                    uVar19 = 0;
                    fVar46 = fVar50 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                             in_stack_00000050 *
                             (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                             fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar46) +
                             *(float *)(unaff_x19 + 0x9b);
                  }
                  else {
                    if ((in_stack_000017ec == 0x2029) || (fVar46 = 0.0, in_stack_000017ec == 10)) {
                      fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                    }
                    uVar19 = 1;
                    fVar46 = *(float *)(unaff_x19 + 0x9b) +
                             *(float *)(unaff_x19 + 0x58) +
                             fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar46);
                  }
                  *(float *)(unaff_x19 + 0x9b) = fVar46;
                  *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar19;
                  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar27 = *(long *)puVar9;
                  }
                  uVar16 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x9a) = fVar50;
                  uVar48 = NEON_rev64(uVar16,4);
                  unaff_x19[0x99] = uVar48;
                  *(float *)(unaff_x19 + 200) =
                       *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                  FUN_0358c4f0();
                  FUN_0358c4f0();
                  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_0354c6b4:
                  bStack0000000000000068 = 1;
                  in_stack_00000060 = 1;
                  uVar14 = in_stack_000017ec;
LAB_03549564:
                  fVar50 = (float)unaff_d13;
                  in_stack_000017b8 = in_stack_000017b8 + 1;
                  lVar27 = unaff_x19[0x8f];
                  if (lVar27 != 0) {
                    if ((int)in_stack_000017b8 < (int)*(uint *)(lVar27 + 0x18)) {
                      if (*(uint *)(lVar27 + 0x18) <= in_stack_000017b8)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      in_stack_000017ec =
                           *(uint *)(lVar27 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
                      if (in_stack_000017ec == 0) goto LAB_0354cf48;
                      if (5 < in_stack_00000180) {
                        uVar16 = FUN_0276793c(&stack0x000017ec,0);
                        uVar17 = FUN_0276793c(&stack0x000017b8,0);
                        uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar16,
                                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar17,0
                                             );
                        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                        }
                        FUN_0367ae18(uVar16,0);
                        in_stack_000017d8 = CONCAT44(3,*unaff_x20);
                      }
                      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') &&
                         (in_stack_000017ec == 0x3c)) goto code_r0x035492f0;
                      if ((*unaff_x22 != 0) && (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 != 0))
                      {
                        if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
                          lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
                          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar27 + 0x2c);
                          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + 0x58);
                          unaff_x19[0x20] = *(long *)(lVar27 + 0x38);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (in_stack_00000178);
                          goto LAB_03549378;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
LAB_0354cf48:
                    fVar50 = (float)uVar48;
                    if (((char)unaff_x19[0x47] != '\0') &&
                       (fVar50 = DAT_00d389f8,
                       DAT_00d389f8 <
                       *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                      fVar50 = *(float *)((long)unaff_x19 + 0x1e4);
                      fVar46 = *(float *)((long)unaff_x19 + 0x254);
                      if ((fVar50 < fVar46) &&
                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                        if (*(float *)((long)unaff_x19 + 0x2d4) <
                            *(float *)(unaff_x19 + 0x5a) / 100.0) {
                          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                        }
                        fVar51 = (*(float *)((long)unaff_x19 + 0x23c) - fVar50) * 0.5;
                        if (fVar51 <= DAT_00d38b84) {
                          fVar51 = DAT_00d38b84;
                        }
                        *(float *)(unaff_x19 + 0x48) = fVar50;
                        fVar51 = (fVar50 + fVar51) * 20.0 + 0.5;
                        fVar50 = DAT_00d38e60;
                        if (fVar51 != INFINITY) {
                          fVar50 = (float)(int)fVar51 / 20.0;
                        }
                        if (fVar46 <= fVar50) {
                          fVar50 = fVar46;
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
                    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar14 == 3)))) {
                      (**(code **)(*unaff_x19 + 0x928))();
                      goto LAB_0354d0cc;
                    }
                    lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar27 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar27 = *(long *)puVar9;
                    }
                    plVar38 = (long *)OVRPlugin_Media_TypeInfo;
                    lVar27 = **(long **)(lVar27 + 0xb8);
                    if (lVar27 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    iVar37 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54)
                             << 2;
                    if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x60), lVar27 == 0))
                    goto LAB_0354fbf4;
                    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    if (*(int *)(lVar27 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    FUN_035968e8(lVar27 + 0x20,0,0);
                    if (DAT_0411f172 == '\0') {
                      FUN_01ab69ac(PTR_DAT_03cbded8);
                      DAT_0411f172 = '\x01';
                    }
                    iVar12 = (int)unaff_x19[0x4e];
                    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                    uStack00000000000000f0 =
                         *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                    lVar27 = unaff_x19[0xeb];
                    in_stack_000000b8 = (long *)uStack00000000000000f0;
                    fStack00000000000000c4 = in_stack_000000f8._4_4_;
                    if (iVar12 < 0x401) {
                      if (iVar12 == 0x100) {
                        if (lVar27 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar27 + 0x18) < 2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar16 = *(undefined8 *)(lVar27 + 0x30);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*unaff_x22 == 0) ||
                             (lVar21 = *(long *)(*unaff_x22 + 0x58), lVar21 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar21 + 0x18) <= uStack0000000000000034)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fVar50 = *(float *)(lVar21 + (long)(int)uStack0000000000000034 * 0x14 +
                                             0x28);
                        }
                        else {
                          fVar50 = *(float *)(unaff_x19 + 0x97);
                        }
                        fStack00000000000000c4 =
                             fStack0000000000000028 + 0.0 + *(float *)(lVar27 + 0x2c);
                        fVar50 = (0.0 - fVar50) - fStack000000000000001c;
                      }
                      else if (iVar12 == 0x200) {
                        if (lVar27 == 0) goto LAB_0354fbf4;
                        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fStack00000000000000c4 =
                             (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
                        uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) *
                                          0.5,((float)*(undefined8 *)(lVar27 + 0x24) +
                                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*unaff_x22 == 0) ||
                             (lVar27 = *(long *)(*unaff_x22 + 0x58), lVar27 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000034)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar27 = lVar27 + (long)(int)uStack0000000000000034 * 0x14;
                          fStack00000000000000c4 =
                               fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                          fVar50 = ((fStack000000000000001c + *(float *)(lVar27 + 0x28) +
                                    *(float *)(lVar27 + 0x30)) - fStack0000000000000020) * -0.5 +
                                   0.0;
                        }
                        else {
                          fStack00000000000000c4 =
                               fStack0000000000000028 + 0.0 + fStack00000000000000c4;
                          fVar50 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) +
                                    in_stack_000017e8) - fStack0000000000000020) * -0.5 + 0.0;
                        }
                      }
                      else {
                        if (iVar12 != 0x400) goto LAB_0354d620;
                        if (lVar27 == 0) goto LAB_0354fbf4;
                        if (*(int *)(lVar27 + 0x18) == 0)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar16 = *(undefined8 *)(lVar27 + 0x24);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*unaff_x22 == 0) ||
                             (lVar21 = *(long *)(*unaff_x22 + 0x58), lVar21 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar21 + 0x18) <= uStack0000000000000034)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          in_stack_000017e8 =
                               *(float *)(lVar21 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
                        }
                        fStack00000000000000c4 =
                             fStack0000000000000028 + 0.0 + *(float *)(lVar27 + 0x20);
                        fVar50 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
                      }
LAB_0354d610:
                      in_stack_000000b8 =
                           (long *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,
                                            (float)uVar16 + fVar50);
                    }
                    else if (iVar12 == 0x800) {
                      if (lVar27 == 0) goto LAB_0354fbf4;
                      if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fVar50 = fStack0000000000000028 + 0.0 +
                               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
                      in_stack_000000b8 =
                           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)
                                            ) * 0.5 + 0.0,
                                            ((float)*(undefined8 *)(lVar27 + 0x24) +
                                            (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
                      fStack00000000000000c4 = fVar50;
                    }
                    else {
                      if (iVar12 == 0x1000) {
                        if (lVar27 == 0) goto LAB_0354fbf4;
                        if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
                          uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar27 + 0x24) +
                                                    (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
                          fStack00000000000000c4 =
                               fStack0000000000000028 + 0.0 +
                               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
                          fVar50 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) *
                                         0.5;
                          goto LAB_0354d610;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      if (iVar12 == 0x2000) {
                        if (lVar27 == 0) goto LAB_0354fbf4;
                        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar50 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) -
                                        fStack000000000000001c) - fStack0000000000000020) * 0.5;
                        in_stack_000000b8 =
                             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
                                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + fVar50)
                        ;
                        fStack00000000000000c4 =
                             fStack0000000000000028 + 0.0 +
                             (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
                      }
                    }
LAB_0354d620:
                    lVar27 = FUN_03559490();
                    if (lVar27 == 0) goto LAB_0354fbf4;
                    FUN_036df824(lVar27,0);
                    *(float *)((long)unaff_x19 + 0x6e4) = fVar50;
                    uVar60 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                    }
                    if (DAT_0412df1c == '\0') {
                      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                      DAT_0412df1c = '\x01';
                    }
                    puVar9 = OVRPlugin_Mesh_TypeInfo;
                    lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
                    if (*(int *)(lVar27 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar27 = *(long *)puVar9;
                    }
                    puVar22 = *(undefined4 **)(lVar27 + 0xb8);
                    FUN_035683a4(*puVar22,puVar22[1],puVar22[2],puVar22[3],&stack0x000017c0,
                                 0x4000ffff,0);
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar27 = *unaff_x22;
                    if (lVar27 == 0) goto LAB_0354fbf4;
                    uVar13 = *unaff_x20;
                    if ((int)uVar13 < 1) {
                      iStack00000000000000d8 = 0;
                      iVar37 = 0;
                      goto LAB_0354f7f4;
                    }
                    lVar27 = *(long *)(lVar27 + 0x38);
                    if (lVar27 == 0) goto LAB_0354fbf4;
                    bVar11 = false;
                    bVar8 = false;
                    bVar10 = false;
                    fStack0000000000000124 = 0.0;
                    bVar7 = false;
                    iStack00000000000000d8 = 0;
                    uStack0000000000000030 = 0;
                    in_stack_00000168._4_4_ = 0.0;
                    fStack000000000000005c = 0.0;
                    lVar21 = 0x2e0;
                    fVar51 = 0.0;
                    fVar46 = 0.0;
                    fStack00000000000000d0 = fStack00000000000000e0;
                    fStack00000000000000d4 = fStack00000000000000e4;
                    _bStack0000000000000068 = fStack00000000000000e4;
                    fStack0000000000000104 =
                         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                   0x15a8);
                    fStack000000000000009c = fStack00000000000000e4;
                    fStack00000000000000a0 = fStack00000000000000e0;
                    fStack0000000000000100 = 0.0;
                    in_stack_00000080._4_4_ = 0.0;
                    in_stack_00000048._4_4_ = 0.0;
                    fStack00000000000000a8 = 0.0;
                    fStack0000000000000040 = 0.0;
                    _bStack000000000000006c = uStack00000000000000c0;
                    fStack0000000000000070 = fStack00000000000000e0;
                    fStack0000000000000098 = (float)uStack00000000000000c0;
                    uVar14 = 0;
                    uVar28 = 1;
                    goto LAB_0354d7c0;
                  }
                  goto LAB_0354fbf4;
                }
              }
            }
          }
        }
      }
    }
  }
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
code_r0x035492f0:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar49 = FUN_03586568();
  if (((uVar49 & 1) != 0) &&
     (in_stack_000017b8 = in_stack_0000179c, uVar14 = in_stack_000017ec,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_0354fbf4;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = (long)(int)uVar13;
  cVar20 = *(char *)(lVar27 + lVar32 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar21 = unaff_x19[0x24];
  if ((uint)in_stack_000017d8 == uVar13) {
    in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017ec == 0x2026) {
      *(long *)(lVar27 + lVar32 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      uVar13 = *unaff_x20;
      if (*(uint *)(lVar27 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      bVar11 = true;
      *(int *)(lVar27 + (long)(int)uVar13 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017d8 = CONCAT44(3,uVar13 + 1);
    }
    else if (in_stack_000017ec == 3) {
      if ((*in_stack_00000178 == 0) || (lVar31 = FUN_03568ac0(*in_stack_00000178,0), lVar31 == 0))
      goto LAB_0354fbf4;
      FUN_0219b634(lVar31,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar27 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(ulong *)(lVar27 + lVar32 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,in_stack_000008b0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar13 = *(uint *)((long)unaff_x19 + 0x494);
      bVar11 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar11 = true;
    }
  }
  else {
    bVar11 = false;
  }
  if (((int)uVar13 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
    if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= uVar13)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar27 = lVar27 + (long)(int)uVar13 * (long)iVar37;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *unaff_x20 = uVar13 + 1;
    uVar14 = in_stack_000017ec;
    goto LAB_03549564;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar13 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar13 >> 4 & 1) == 0) {
      if ((uVar13 >> 3 & 1) == 0) {
        fVar46 = 1.0;
        if ((uVar13 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar49 = FUN_026b812c(in_stack_000017ec,0);
          if ((uVar49 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b8410(in_stack_000017ec,0);
            in_stack_000017ec = uVar13 & 0xffff;
            fVar46 = fStack0000000000000024;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b8070(in_stack_000017ec,0);
        fVar46 = 1.0;
        if ((uVar49 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b8594(in_stack_000017ec,0);
          goto LAB_03549968;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b812c(in_stack_000017ec,0);
      fVar46 = 1.0;
      if ((uVar49 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
        fVar46 = 1.0;
        in_stack_000017ec = uVar13 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 == 0) goto LAB_03549978;
LAB_03549594:
    if (iVar12 == 1) {
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *in_stack_000000b8 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar27 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar27 == 0))
      goto LAB_0354fbf4;
      FUN_02215a88(lVar27,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
      uVar14 = in_stack_000017ec;
      if (lVar27 == 0) goto LAB_03549564;
      if (in_stack_000017ec == 0x3c) {
        in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar32 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar50 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001730,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar39 = (float)FUN_03776960(&stack0x00001730,0);
      fVar51 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar51 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
      fVar51 = (fVar50 / (float)iVar12) * fVar39 * fVar51;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar50 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        iVar12 = FUN_03776950(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar57 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        fVar39 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar39 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar56 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,*(long *)(lVar27 + 0x20),0);
        fVar40 = (float)FUN_03776c9c(&stack0x00001710,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)(lVar27 + 0x2c);
        fVar42 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar41 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar61 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar44 = *(float *)((long)unaff_x19 + 0x404);
        fVar43 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar43 = fVar51 * fVar61 * fVar44 * fVar43;
        fVar39 = (fVar50 / (float)iVar12) * fVar57 * fVar39;
        fVar50 = fVar39 * (fVar56 / fVar40) * fVar58 * fVar42;
        fVar39 = fVar39 / fVar50;
        fVar41 = fVar39 * fVar41;
        fVar51 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar39 = fVar39 * fVar51;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar39 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0354fbf4;
        fVar56 = *(float *)(lVar27 + 0x2c);
        fVar57 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar57 = 1.0;
        }
        fVar40 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar41 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar42 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar58 = *(float *)((long)unaff_x19 + 0x404);
        fVar43 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar43 = fVar51 * fVar42 * fVar58 * fVar43;
        fVar50 = (fVar50 / (float)iVar12) * fVar39 * fVar57 * fVar56 * fVar40;
        fVar39 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *_iStack00000000000000d8 = lVar27;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (_iStack00000000000000d8,lVar27);
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 1;
      *(float *)(lVar27 + 0x160) = fVar50;
      *(long *)(lVar27 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar27 = *unaff_x22;
      if ((lVar27 == 0) || (lVar32 = *(long *)(lVar27 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      _fStack0000000000000120 = CONCAT44(fVar41,fVar39);
      in_stack_00000168._4_4_ = 0.0;
      *(int *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar21;
      goto LAB_03549e30;
    }
    lVar27 = *unaff_x22;
    fVar43 = 0.0;
    fVar51 = fVar43;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar51 = fVar50;
    }
    if (lVar27 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = 0;
  }
  else {
    fVar46 = 1.0;
    if (iVar12 != 0) goto LAB_03549594;
LAB_03549978:
    if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *_iStack00000000000000d8 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
    uVar14 = in_stack_000017ec;
    if (*_iStack00000000000000d8 == 0) goto LAB_03549564;
    if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000178 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
    if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000170 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
    goto LAB_0354fbf4;
    uVar14 = *unaff_x20;
    uVar13 = *(uint *)(lVar27 + 0x18);
    if (uVar13 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x58);
    if (bVar11) {
      lVar21 = unaff_x19[0x8f];
      if (lVar21 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(int *)(lVar21 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
         (uVar14 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
      if (uVar13 <= uVar14 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar51 = *(float *)(lVar27 + (long)(int)(uVar14 - 1) * (long)iVar37 + 0x60);
      iVar12 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar27 = *in_stack_00000178;
    }
    else {
LAB_03549a88:
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar27 = unaff_x19[0x20];
    }
    if (lVar27 == 0) goto LAB_0354fbf4;
    fVar57 = (float)FUN_03776960(lVar27 + 0x50,0);
    fVar39 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar39 = 1.0;
    }
    uVar60 = 0;
    fStack0000000000000124 = 0.0;
    if (!(bool)(bVar11 & in_stack_000017ec == 0x2026)) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      uVar60 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
    }
    lVar27 = unaff_x19[0xc9];
    if (lVar27 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar60);
    if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0354fbf4;
    fVar56 = *(float *)((long)unaff_x19 + 0x404);
    fVar40 = *(float *)(lVar27 + 0x2c);
    fVar50 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar42 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar58 = *(float *)((long)unaff_x19 + 0x404);
    fVar43 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    lVar27 = unaff_x19[0x6d];
    if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar21 + 0x2c) = 0;
    fVar39 = ((fVar46 * fVar51) / (float)iVar12) * fVar57 * fVar39;
    fVar50 = fVar39 * fVar56 * fVar40 * fVar50;
    *(float *)(lVar21 + 0x160) = fVar50;
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    fVar43 = fVar39 * fVar42 * fVar58 * fVar43;
    if (uVar13 == 0) {
      in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar21 = unaff_x19[0xe1];
      if (lVar21 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar21 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar21 = *(long *)(lVar21 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar21 == 0) goto LAB_0354fbf4;
      in_stack_00000168._4_4_ = *(float *)(lVar21 + 0x54);
    }
LAB_03549e30:
    fVar51 = 0.0;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar51 = fVar50;
    }
  }
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar27 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_0354fbf4;
  uVar13 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar27 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)uVar13 * unaff_x24;
  *(undefined4 *)(lVar27 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar27 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar27 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar27,0);
  if ((int)in_stack_000017ec < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(in_stack_000017ec,0);
    unaff_w21 = uVar13 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  in_stack_00000138 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fVar39 = 0.0;
    fVar56 = 0.0;
    fVar57 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar14 = *unaff_x20;
    uVar13 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar14 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= uVar14 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar14 + 1) * (long)iVar37 + 0x30);
      if ((((lVar27 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar21 = *(long *)(*in_stack_00000178 + 0x128), lVar21 == 0)) ||
         (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar13 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar48 = FUN_0219f8b8(lVar21,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar60 = 0;
      if ((uVar48 & 1) == 0) {
        fVar39 = 0.0;
        fVar56 = 0.0;
        fVar57 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        fVar39 = *(float *)(in_stack_00001708 + 0x1c);
        uVar60 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar57 = *(float *)(in_stack_00001708 + 0x14);
        fVar56 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          in_stack_00000138 = 0.0;
        }
      }
      uVar14 = *unaff_x20;
    }
    else {
      uVar60 = 0;
      fVar39 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
    }
    if (0 < (int)uVar14) {
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= uVar14 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = *(long *)(lVar27 + (ulong)(uVar14 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar27 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar21 = *(long *)(*in_stack_00000178 + 0x128), lVar21 == 0 ||
          (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar27 + 0x28) | uVar13 << 0x10;
      uVar48 = FUN_0219f8b8(lVar21,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar48 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar57 = (float)FUN_03571cb4(fVar57,fVar56,fVar39,uVar60,
                                         *(undefined4 *)(in_stack_00001708 + 0x28),
                                         *(undefined4 *)(in_stack_00001708 + 0x2c),
                                         *(undefined4 *)(in_stack_00001708 + 0x30),
                                         *(undefined4 *)(in_stack_00001708 + 0x34),0),
           in_stack_00001708 == 0)) goto LAB_0354fbf4;
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          in_stack_00000138 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fVar39;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar42 = *(float *)(unaff_x19 + 200);
    fVar40 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar42 = fVar42 - fVar51 * fVar40 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar42;
    if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar42 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar42 = *(float *)(unaff_x19 + 0x56);
  fVar40 = 0.0;
  if (fVar42 != 0.0) {
    fVar40 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar58 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar40 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar42 * 0.5 - fVar51 * (fVar40 * 0.5 + fVar58));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar40;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar20 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar27 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_036cee6c(lVar27,0,0);
    fVar58 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar27 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar27 == 0) goto LAB_0354fbf4;
      uVar48 = FUN_03699d3c(lVar27,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar58 = 0.0;
      if ((uVar48 & 1) != 0) {
        lVar27 = *in_stack_00000170;
        if (*(int *)(*plVar38 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar27 == 0) goto LAB_0354fbf4;
        fVar42 = (float)FUN_0369e060(lVar27,*(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar41 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar58 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar58 = fVar58 * fVar42 * fVar41 * 0.25;
        if (fVar42 < in_stack_00000168._4_4_ + fVar58) {
          in_stack_00000168._4_4_ = fVar42 - fVar58;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar27 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_036cee6c(lVar27,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar27 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar27 == 0) goto LAB_0354fbf4;
      uVar48 = FUN_03699d3c(lVar27,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar48 & 1) != 0) {
        lVar27 = *in_stack_00000170;
        if (*(int *)(*plVar38 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar27 == 0) goto LAB_0354fbf4;
        uVar48 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0xcc),0);
        if ((uVar48 & 1) != 0) {
          lVar27 = *in_stack_00000170;
          if (*(int *)(*plVar38 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar38 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar27 == 0) goto LAB_0354fbf4;
          fVar42 = (float)FUN_0369e060(lVar27,*(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
          fVar41 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar58 = (float)FUN_0369e060(*in_stack_00000170,
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
          fVar58 = fVar58 * fVar42 * fVar41 * 0.25;
          if (fVar42 < in_stack_00000168._4_4_ + fVar58) {
            in_stack_00000168._4_4_ = fVar42 - fVar58;
          }
          goto LAB_0354a568;
        }
      }
    }
    fVar58 = 0.0;
  }
LAB_0354a568:
  fVar42 = *(float *)(unaff_x19 + 200);
  fVar41 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar42 = fVar42 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar57 + ((fVar41 - in_stack_00000168._4_4_) - fVar58));
  fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar41 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar43 + fVar51 * (fVar56 + in_stack_00000168._4_4_ + fVar57)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar57 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar41 - fVar51 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar57);
  fVar57 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar56 = fVar42 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar58 + fVar58 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar57);
  fStack0000000000000104 = fVar42;
  fVar57 = fVar56;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar20 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar44 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar45 = fVar44 * fVar51 * (fVar58 + in_stack_00000168._4_4_ + fVar57);
    fVar57 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar61 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar41 = fVar41 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar44 = fVar44 * fVar51 * (((fVar57 - fVar61) - in_stack_00000168._4_4_) - fVar58);
    fVar61 = fVar42 + fVar45;
    fVar57 = fVar56 + fVar44;
    fVar54 = (fVar45 - fVar44) * 0.5;
    fVar42 = (fVar42 + fVar44) - fVar54;
    fVar56 = (fVar56 + fVar45) - fVar54;
    fStack0000000000000104 = fVar61 - fVar54;
    fVar57 = fVar57 - fVar54;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar44 = 0.0;
    fVar45 = 0.0;
    fVar53 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar54 = fStack0000000000000134;
    fVar61 = fVar41;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar55 = (fVar56 + fVar42) * 0.5;
    fVar59 = (fStack0000000000000134 + fVar41) * 0.5;
    fVar41 = fVar41 - fVar59;
    fStack0000000000000100 = 0.0;
    fVar61 = fVar41;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar55,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar55 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar54 = fStack0000000000000134 - fVar59;
    fVar44 = 0.0;
    fStack0000000000000134 = fVar54;
    fVar42 = (float)FUN_036bdd2c(fVar42 - fVar55,_fStack0000000000000070,0);
    fVar42 = fVar55 + fVar42;
    fVar44 = fVar44 + 0.0;
    fStack0000000000000134 = fVar59 + fStack0000000000000134;
    fVar53 = 0.0;
    fVar56 = (float)FUN_036bdd2c(fVar56 - fVar55,_fStack0000000000000070,0);
    fVar56 = fVar55 + fVar56;
    fVar41 = fVar59 + fVar41;
    fVar53 = fVar53 + 0.0;
    fVar45 = 0.0;
    fVar57 = (float)FUN_036bdd2c(fVar57 - fVar55,_fStack0000000000000070,0);
    fVar57 = fVar55 + fVar57;
    fVar45 = fVar45 + 0.0;
    fVar54 = fVar59 + fVar54;
    fVar61 = fVar59 + fVar61;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar27 = *(long *)(*unaff_x22 + 0x38);
  unaff_d13 = (ulong)(uint)fVar51;
  if (lVar27 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x11c) = fVar42;
  *(float *)(lVar27 + 0x120) = fStack0000000000000134;
  *(float *)(lVar27 + 0x124) = fVar44;
  if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x114) = fVar61;
  *(float *)(lVar27 + 0x110) = fStack0000000000000104;
  *(float *)(lVar27 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x128) = fVar56;
  *(float *)(lVar27 + 300) = fVar41;
  *(float *)(lVar27 + 0x130) = fVar53;
  if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x134) = fVar57;
  *(float *)(lVar27 + 0x138) = fVar54;
  *(float *)(lVar27 + 0x13c) = fVar45;
  if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0)) goto LAB_0354fbf4;
  uVar13 = *unaff_x20;
  unaff_x26 = (long)(int)uVar13;
  if (*(uint *)(lVar27 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar27 + unaff_x26 * unaff_x24;
  *(int *)(lVar21 + 0x140) = (int)unaff_x19[200];
  fVar41 = *(float *)(unaff_x19 + 0x9b);
  uVar48 = (ulong)(uint)fVar41;
  fVar57 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar21 + 0x15c) = (fVar56 - fVar42) / (fVar61 - fStack0000000000000134);
  *(float *)(lVar21 + 0x14c) = (fVar43 - fVar41) + fVar57;
  fVar56 = fStack0000000000000124 * fVar51;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar56 = fVar56 / fVar46;
    fStack0000000000000120 = (fStack0000000000000120 * fVar51) / fVar46;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar51;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar13 == unaff_w25)) {
    fStack0000000000000120 = fVar57 + fStack0000000000000120;
    fVar56 = fVar57 + fVar56;
    fVar43 = fStack0000000000000120;
    fVar42 = fVar56;
    if (fVar57 != 0.0) {
      fVar42 = (fVar56 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      fVar43 = (fStack0000000000000120 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar42 <= fVar56) {
        fVar42 = fVar56;
      }
      if (fStack0000000000000120 <= fVar43) {
        fVar43 = fStack0000000000000120;
      }
    }
    lVar27 = lVar27 + unaff_x26 * unaff_x24;
    fVar57 = fVar42;
    if (fVar42 <= *(float *)(unaff_x19 + 0x99)) {
      fVar57 = *(float *)(unaff_x19 + 0x99);
    }
    fVar61 = fVar43;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar43) {
      fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar61;
    *(float *)(unaff_x19 + 0x99) = fVar57;
    *(float *)(lVar27 + 0x154) = fVar42;
    *(float *)(lVar27 + 0x158) = fVar43;
    *(float *)(lVar27 + 0x148) = fVar56 - fVar41;
    *(float *)(unaff_x19 + 0x98) = fVar56 - fVar41;
    *(float *)(lVar27 + 0x150) = fStack0000000000000120 - fVar41;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar41;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar57;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar42 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fVar46 = (fVar51 * fVar42) / fVar46;
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar57 <= fVar46) {
        fVar57 = fVar46;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
    }
    if ((float)uVar48 == 0.0) {
      fVar46 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar56) {
        fVar46 = fVar56;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar46;
    }
  }
  else {
    fVar46 = *(float *)(unaff_x19 + 0x99);
    lVar27 = lVar27 + unaff_x26 * unaff_x24;
    *(float *)(lVar27 + 0x154) = fVar46;
    fVar57 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar46 = fVar46 - fVar41;
    *(float *)(lVar27 + 0x148) = fVar46;
    *(float *)(lVar27 + 0x158) = fVar57;
    *(float *)(unaff_x19 + 0x98) = fVar46;
    fVar57 = fVar57 - fVar41;
    *(float *)(lVar27 + 0x150) = fVar57;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
  }
  lVar27 = *unaff_x22;
  if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
  uVar28 = *unaff_x20;
  if (*(uint *)(lVar21 + 0x18) <= uVar28)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar21 = lVar21 + (long)(int)uVar28 * unaff_x24;
  *(undefined1 *)(lVar21 + 0x194) = 0;
  uVar2 = *(uint *)(unaff_x19 + 0x4f);
  uVar14 = in_stack_000017ec;
  if ((in_stack_000017ec == 9) ||
     (((((unaff_w21 == 0 && (in_stack_000017ec != 3)) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0xad)) ||
      (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar21 + 0x194) = 1;
    pfVar23 = _fStack00000000000000a0;
    pfVar26 = _fStack00000000000000a8;
    if (bVar11) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar26 = (float *)(lVar27 + 0x60);
      pfVar23 = (float *)(lVar27 + 100);
    }
    fVar57 = *pfVar26;
    fVar56 = *pfVar23;
    fVar46 = *(float *)(unaff_x19 + 0x6c);
    fVar42 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar57) - fVar56;
    bVar10 = true;
    if ((fVar46 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar46))) {
      bVar10 = fVar46 == -1.0;
    }
    if (!bVar10) {
      in_stack_000000f8._4_4_ = fVar46;
    }
    fVar46 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar46 = (float)FUN_03776cb4(&stack0x000017a0,0);
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar41 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017ec != 0xad) {
      fVar50 = fVar51;
    }
    fVar44 = (float)uVar48;
    fVar61 = 0.0;
    if ((0.0 < fVar44) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar61 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar28 = *unaff_x20;
    fVar61 = (*(float *)(unaff_x19 + 0x97) - (fVar41 - fVar44)) + fVar61;
    if (fStack00000000000000c4 < fVar61) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar28;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar16 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar54 = *(float *)(unaff_x19 + 0x59);
        if (((fVar54 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar44)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar50 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar61) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000050;
          if (fVar50 <= fVar54) {
            fVar50 = fVar54;
          }
          goto UnityEngine_AndroidJavaObject___ctor;
        }
        fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar61 = *(float *)(unaff_x19 + 0x4a);
        uVar48 = (ulong)(uint)fVar61;
        if ((fVar61 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar50 = (fVar44 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar50 <= DAT_00d38b84) {
            fVar50 = DAT_00d38b84;
          }
          fVar46 = (fVar44 - fVar50) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar44;
          fVar50 = DAT_00d38e60;
          if (fVar46 != INFINITY) {
            fVar50 = (float)(int)fVar46 / 20.0;
          }
          if (fVar50 <= fVar61) {
            fVar50 = fVar61;
          }
          goto LAB_0354d004;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
        }
        lVar21 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar18 = (int *)thunk_FUN_01a59484(lVar21 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar18 == 0) goto LAB_0354cf2c;
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
        iVar12 = FUN_0358c15c();
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
        if ((uVar28 == 0) || ((int)in_stack_000017b8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017b8 = 0xffffffff;
          in_stack_000017d8 = uVar16;
          goto LAB_03549564;
        }
        fVar50 = *(float *)(unaff_x19 + 0x99);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        if (fVar50 - fVar41 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar48 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar27 = NEON_rev64(uVar48,4);
          unaff_x19[0x99] = lVar27;
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
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar49 = FUN_036cee6c(lVar27,0,0);
        if ((uVar49 & 1) != 0) {
          plVar38 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar38 + 0x528))(plVar38,uVar16,*(undefined8 *)(*plVar38 + 0x530));
          lVar27 = unaff_x19[0x5d];
          if (lVar27 == 0) goto LAB_0354fbf4;
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar38 = (long *)unaff_x19[0x5d];
          if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto LAB_0354b0e0;
    }
switchD_0354ad3c_caseD_2:
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar46 = ABS(fVar42) + fVar46 * (1.0 - fVar43) * fVar50;
    fVar50 = 1.0;
    if ((uVar2 & 0x18) != 0) {
      fVar50 = DAT_00d38acc;
    }
    fVar42 = fVar50 * in_stack_000000f8._4_4_;
    if (fVar42 < fVar46) {
      uVar48 = (ulong)(uint)fVar58;
      if (((char)unaff_x19[0x5b] == '\0') || (uVar28 == *(uint *)(unaff_x19 + 0x93))) {
        if (((char)unaff_x19[0x47] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar42 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if (fVar43 < fVar42) {
            fVar51 = fVar46 / (1.0 - fVar43);
            if (fVar43 <= 0.0) {
              fVar51 = fVar46;
            }
            fVar43 = fVar43 + (fVar46 - fVar50 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar51;
            goto LAB_0354fc24;
          }
          fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
          fVar42 = *(float *)(unaff_x19 + 0x4a);
          if (fVar43 <= fVar42) goto LAB_0354ae98;
          fVar50 = (fVar43 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar50 <= DAT_00d38b84) {
            fVar50 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar43;
          fVar43 = fVar43 - fVar50;
          goto LAB_0354fc60;
        }
LAB_0354ae98:
        iVar12 = (int)unaff_x19[0x5c];
        if (iVar12 == 1) {
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar9;
          }
          lVar21 = *(long *)(lVar27 + 0xb8);
          lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = FUN_01a46ff8(lVar27);
          }
          piVar18 = (int *)thunk_FUN_01a59484(lVar21 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*piVar18 == 0) goto LAB_0354cf2c;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar9;
          }
          FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
          goto LAB_0354b394;
        }
        if (iVar12 == 6) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          lVar27 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar49 = FUN_036cee6c(lVar27,0,0);
          if ((uVar49 & 1) != 0) {
            plVar38 = (long *)unaff_x19[0x5d];
            uVar16 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar38 + 0x528))(plVar38,uVar16,*(undefined8 *)(*plVar38 + 0x530));
            lVar27 = unaff_x19[0x5d];
            if (lVar27 == 0) goto LAB_0354fbf4;
            *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar38 = (long *)unaff_x19[0x5d];
            if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          goto LAB_0354b4b4;
        }
        if (iVar12 == 3) {
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
          lVar27 = *unaff_x22;
          if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
          if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar42 = *(float *)(unaff_x19 + 0x9b);
          fVar43 = 0.0;
          if ((0.0 < fVar42) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar43 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar21 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar43 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700))
          ;
        }
        else {
          lVar27 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar27 == 0) goto LAB_0354fbf4;
          fVar42 = *(float *)(unaff_x19 + 0x9b);
          fVar43 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_0354fbf4;
        uVar36 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar27 + 0x18) <= uVar36) ||
           (uVar6 = uVar36 - 1, *(uint *)(lVar27 + 0x18) <= uVar6))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar48 = (ulong)(uint)(fVar43 + *(float *)(unaff_x19 + 0x97));
        fVar41 = (fVar43 + *(float *)(unaff_x19 + 0x97) + fVar42) -
                 *(float *)(lVar27 + (long)(int)uVar36 * unaff_x24 + 0x158);
        if (((bStack000000000000006c & 1) == 0 &&
             *(short *)(lVar27 + (long)(int)uVar6 * (long)iVar37 + 0x20) == 0xad) &&
           ((fVar41 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar6;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          in_stack_000017d8 = CONCAT44(0x2d,uVar6);
          goto LAB_03549564;
        }
        if (*(short *)(lVar27 + (long)(int)uVar36 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000006c = 1;
          goto LAB_03549564;
        }
        if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar42 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar43 < fVar42) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_0354fc94:
            fVar51 = fVar46;
            if (0.0 < fVar43) {
              fVar51 = fVar46 / (1.0 - fVar43);
            }
            fVar43 = fVar43 + (fVar46 - fVar50 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar51;
LAB_0354fc24:
            if (fVar42 <= fVar43) {
              fVar43 = fVar42;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar43;
            return;
          }
          fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar48 = (ulong)(uint)fVar43;
          fVar42 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar43 <= fVar42) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
          goto LAB_0354b6dc;
LAB_0354fcd0:
          fVar50 = (fVar43 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar50 <= DAT_00d38b84) {
            fVar50 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar43;
          fVar43 = fVar43 - fVar50;
LAB_0354fc60:
          fVar46 = fVar43 * 20.0 + 0.5;
          fVar50 = DAT_00d38e60;
          if (fVar46 != INFINITY) {
            fVar50 = (float)(int)fVar46 / 20.0;
          }
          if (fVar50 <= fVar42) {
            fVar50 = fVar42;
          }
LAB_0354d004:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar50;
          return;
        }
LAB_0354b6dc:
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
        }
        iVar12 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
        if (((iVar12 != iStack000000000000002c) && (iVar12 != -1)) &&
           (((bStack0000000000000068 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
          goto LAB_0354fbf4;
          uVar36 = *unaff_x20 - 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar36)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          iStack000000000000002c = iVar12;
          if (*(short *)(lVar27 + (long)(int)uVar36 * (long)iVar37 + 0x20) == 0xad) {
            bStack000000000000006c = 0;
            *unaff_x20 = uVar36;
            in_stack_000017b8 = in_stack_000017b8 - 1;
            in_stack_000017d8 = CONCAT44(0x2d,uVar36);
            goto LAB_03549564;
          }
        }
        if (fVar41 <= fStack00000000000000c4) goto switchD_0354b88c_caseD_0;
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar42 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar42 = *(float *)(unaff_x19 + 0x59);
          if ((fVar42 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar50 = *(float *)((long)unaff_x19 + 700) +
                     ((fStack0000000000000018 - fVar41) / (float)((int)unaff_x19[0x95] + 1)) /
                     in_stack_00000050;
            if (fVar50 <= fVar42) {
              fVar50 = fVar42;
            }
UnityEngine_AndroidJavaObject___ctor:
            *(float *)((long)unaff_x19 + 700) = fVar50;
            return;
          }
          fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar42 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar43 < fVar42) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_0354fc94;
          fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar48 = (ulong)(uint)fVar43;
          fVar42 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar42 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_0354fcd0;
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          goto switchD_0354b88c_caseD_0;
        case 1:
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar21 = *(long *)(lVar27 + 0xb8);
          lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = FUN_01a46ff8(lVar27);
          }
          piVar18 = (int *)thunk_FUN_01a59484(lVar21 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar18 == 0) {
            bStack000000000000006c = 0;
LAB_0354cf2c:
            in_stack_000017d8 = DAT_00d37868;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            in_stack_000017b8 = 0xffffffff;
            goto LAB_03549564;
          }
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001018,&stack0x000008b0,0x378);
          iVar12 = FUN_0358c15c();
          bStack000000000000006c = 0;
LAB_0354b3a0:
          iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar15;
          in_stack_00000180 = in_stack_00000180 + 1;
          in_stack_000017b8 = iVar12 - 1;
          in_stack_000017d8 = CONCAT44(0x2026,iVar15);
          goto LAB_03549564;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017b8 = FUN_0358c15c();
          bStack000000000000006c = 0;
LAB_0354b0e0:
          in_stack_000017d8 = CONCAT44(3,uVar28);
          goto LAB_03549564;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          uVar48 = unaff_d13;
          FUN_0358cbd4(in_stack_00000050,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                       in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_0354b8d0;
        case 6:
          lVar27 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar49 = FUN_036cee6c(lVar27,0,0);
          if ((uVar49 & 1) != 0) {
            plVar38 = (long *)unaff_x19[0x5d];
            uVar16 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar38 + 0x528))(plVar38,uVar16,*(undefined8 *)(*plVar38 + 0x530));
            lVar27 = unaff_x19[0x5d];
            if (lVar27 == 0) goto LAB_0354fbf4;
            *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar38 = (long *)unaff_x19[0x5d];
            if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bStack000000000000006c = 0;
LAB_0354b4b4:
          in_stack_000017d8 = CONCAT44(3,*unaff_x20);
          goto LAB_03549564;
        default:
          bStack000000000000006c = 0;
        }
      }
    }
    if (in_stack_000017ec == 0xad) {
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined1 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017ec == 9) {
        lVar27 = *unaff_x22;
        if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar21 + 0x18) <= uVar14)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(undefined1 *)(lVar21 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
        lVar21 = *(long *)(lVar27 + 0x50);
        if (lVar21 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar21 + 0x2c) = *(int *)(lVar21 + 0x2c) + 1;
        goto LAB_0354b950;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar42,fVar58);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
      }
      uVar14 = *unaff_x20;
      if ((in_stack_00000060 & 1) != 0) {
        *(uint *)(in_stack_00000078 + 0x1f0) = uVar14;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000060 = 0;
      *(float *)(lVar27 + 0x60) = fVar57;
      *(float *)(lVar27 + 100) = fVar56;
    }
  }
  else {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar46 = (float)uVar48;
      fVar50 = 0.0;
      if ((0.0 < fVar46) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar50 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar48 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar46)) + fVar50)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar28;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar49 = FUN_036cee6c(lVar27,0,0);
        if ((uVar49 & 1) != 0) {
          plVar38 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar38 + 0x528))(plVar38,uVar16,*(undefined8 *)(*plVar38 + 0x530));
          lVar27 = unaff_x19[0x5d];
          if (lVar27 == 0) goto LAB_0354fbf4;
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar38 = (long *)unaff_x19[0x5d];
          if (plVar38 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar38 + 0x7a8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7b0));
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
        lVar27 = *unaff_x22;
        if ((lVar27 == 0) || (lVar21 = *(long *)(lVar27 + 0x50), lVar21 == 0)) goto LAB_0354fbf4;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar21 + 0x2c) = *(int *)(lVar21 + 0x2c) + 1;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b97f8(in_stack_000017ec,0);
      if ((uVar48 & 1) != 0) goto LAB_0354b500;
    }
    if (in_stack_000017ec == 0xa0) {
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x50), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (!bVar11)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
    fVar50 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
    fVar57 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar27 = unaff_x19[0xca];
    fVar46 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar46 = 1.0;
    }
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0354fbf4;
    fVar42 = *(float *)((long)unaff_x19 + 0x404);
    fVar58 = *(float *)(lVar27 + 0x2c);
    fVar56 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
    fVar43 = *_fStack00000000000000a8;
    fVar56 = fVar42 * (fVar50 / (float)iVar12) * fVar57 * fVar46 * fVar58 * fVar56;
    fVar50 = *_fStack00000000000000a0;
    if ((in_stack_000017ec == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x38), lVar27 == 0))
      goto LAB_0354fbf4;
      uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar46 = *(float *)(lVar27 + (long)(int)uVar14 * (long)iVar37 + 0x60);
      iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
      fVar42 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar27 = unaff_x19[0xca];
      fVar57 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar57 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0354fbf4;
      fVar58 = *(float *)((long)unaff_x19 + 0x404);
      fVar41 = *(float *)(lVar27 + 0x2c);
      fVar56 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x50), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar43 = *(float *)(lVar27 + 0x60);
      fVar50 = *(float *)(lVar27 + 100);
      fVar56 = fVar58 * (fVar46 / (float)iVar12) * fVar42 * fVar57 * fVar41 * fVar56;
    }
    fVar42 = *(float *)(unaff_x19 + 0x9b);
    fVar46 = 0.0;
    fVar57 = 0.0;
    if ((0.0 < fVar42) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar41 = *(float *)(unaff_x19 + 0x97);
    fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar58 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
      goto LAB_0354fbf4;
      FUN_03776e6c(&stack0x000008b0,lVar27,0);
      fVar46 = (float)FUN_03776cb4(&stack0x00001710,0);
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar44 = *(float *)(unaff_x19 + 0x6c);
    fVar50 = (fStack000000000000009c - fVar43) - fVar50;
    bVar10 = true;
    if ((fVar44 <= fVar50) && (bVar10 = false, !NAN(fVar44))) {
      bVar10 = fVar44 == -1.0;
    }
    if (!bVar10) {
      fVar50 = fVar44;
    }
    fVar43 = 1.0;
    if ((uVar2 & 0x18) != 0) {
      fVar43 = DAT_00d38acc;
    }
    if (((fVar41 - (fVar61 - fVar42)) + fVar57 < fStack00000000000000c4) &&
       (ABS(fVar58) + fVar56 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar43 * fVar50)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar27 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000538,(void *)(lVar27 + 0x788),0x378);
      FUN_0209b210(lVar27 + 0x11f0,&stack0x00000538,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar27 = *unaff_x22;
  if (lVar27 == 0) goto LAB_0354fbf4;
  lVar21 = *(long *)(lVar27 + 0x38);
  unaff_d13 = (ulong)(uint)fVar51;
  if (lVar21 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  lVar21 = lVar21 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar21 + 100) = uVar14;
  *(int *)(lVar21 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar11) ||
     ((in_stack_000017ec < 0xe && ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) != 0)))) {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(int *)(lVar27 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0354bde0;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar27 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_000017ec == 9) {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar50 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar39 = *(float *)(unaff_x19 + 200);
    fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar51 = fVar51 * fVar50 * fVar46;
    fVar46 = fVar51 * (float)(int)(fVar39 / fVar51);
    uVar48 = (ulong)(uint)fVar46;
    if (fVar46 <= fVar39) {
      fVar46 = fVar39 + fVar51;
    }
LAB_0354c000:
    *(float *)(unaff_x19 + 200) = fVar46;
  }
  else {
    if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar50 = 1.0;
        }
        else {
          fVar50 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
        }
        fVar46 = *(float *)(unaff_x19 + 200);
        fVar57 = (float)FUN_03776cb4(&stack0x000017a0,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar56 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
        fVar46 = fVar46 + fVar56 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fVar51 * (fVar39 + fVar50 * fVar57) +
                                   fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000138 + *(float *)(unaff_x19[0x20] + 0x1ac)));
        *(float *)(unaff_x19 + 200) = fVar46;
        if (in_stack_000017ec != 0x200b) goto LAB_0354bfec;
        goto LAB_0354bff0;
      }
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar51 * fVar39 +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac))
               );
      uVar48 = (ulong)(uint)fVar46;
      fVar46 = *(float *)(unaff_x19 + 200) - fVar46;
      *(float *)(unaff_x19 + 200) = fVar46;
      if ((in_stack_000017ec != 0x200b) && (unaff_w21 == 0)) goto LAB_0354c004;
      fVar50 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar48 = (ulong)(uint)fVar50;
      fVar46 = fVar46 - fVar50;
      goto LAB_0354c000;
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar56 = *(float *)(unaff_x19 + 200);
    fVar46 = fVar56 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar40) +
                      fStack00000000000000d4 *
                      (in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar46;
    if (in_stack_000017ec == 0x200b) {
LAB_0354bff0:
      fVar50 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar48 = (ulong)(uint)fVar50;
      fVar46 = fVar46 + fVar50;
      goto LAB_0354c000;
    }
LAB_0354bfec:
    uVar48 = (ulong)(uint)fVar56;
    if (unaff_w21 != 0) goto LAB_0354bff0;
  }
LAB_0354c004:
  lVar27 = *unaff_x22;
  if ((lVar27 == 0) || (lVar31 = *(long *)(lVar27 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  uVar2 = *unaff_x20;
  uVar14 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar14 <= uVar2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar31 + (long)(int)uVar2 * unaff_x24 + 0x144) = fVar46;
  if ((int)in_stack_000017ec < 0xd) {
    if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
    if ((bool)(bVar11 & in_stack_000017ec == 0x2d)) goto LAB_0354c060;
  }
  else {
    if (in_stack_000017ec - 0x2028 < 2) {
LAB_0354c060:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar50 = *(float *)(unaff_x19 + 0x99);
        fVar46 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar50 = fVar50 - fVar46;
        if (((fStack0000000000000058 < ABS(fVar50)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar50);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar50;
          *(float *)(unaff_x19 + 0x9b) = fVar50 + *(float *)(unaff_x19 + 0x9b);
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar9;
          }
          lVar21 = *(long *)(lVar27 + 0xb8);
          if (*(int *)(lVar21 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar21 + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x000008b0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar27 + 0xb8) + 0x818,0);
            lVar27 = *(long *)(*(long *)puVar9 + 0xb8);
            *(float *)(lVar27 + 0x7bc) = fVar50 + *(float *)(lVar27 + 0x7bc);
            *(float *)(lVar27 + 0x800) = fVar50 + *(float *)(lVar27 + 0x800);
            memcpy(&stack0x000001c0,(void *)(lVar27 + 0x788),0x378);
            FUN_0209b210(lVar27 + 0x11f0,&stack0x000001c0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      param_2 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      param_1 = *(float *)((long)unaff_x19 + 0x4cc) - param_2;
      param_4 = *(float *)((long)unaff_x19 + 0x4c4);
      if (param_1 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        param_4 = param_1;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = param_4;
      in_w8 = (uint)in_stack_000017e4;
      goto code_r0x0354c1f0;
    }
    if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
    uVar48 = 0;
    *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
  }
  uVar28 = in_stack_000017ec;
  if ((float)uVar2 == in_stack_00000080._4_4_) goto LAB_0354c060;
LAB_0354c704:
  uVar2 = *unaff_x20;
  if (uVar14 <= uVar2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (*(char *)(lVar31 + (long)(int)uVar2 * unaff_x24 + 0x194) != '\0') {
    lVar31 = lVar31 + (long)(int)uVar2 * unaff_x24;
    uVar49 = *(ulong *)(lVar31 + 0x11c);
    uVar48 = *(ulong *)(in_stack_00000078 + 0x230);
    *(ulong *)(in_stack_00000078 + 0x230) =
         uVar48 ^ (uVar48 ^ uVar49) &
                  ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar49 >> 0x20)),
                            -(uint)((float)uVar48 < (float)uVar49));
    uVar49 = *(ulong *)(in_stack_00000078 + 0x238);
    uVar48 = *(ulong *)(lVar31 + 0x128);
    *(ulong *)(in_stack_00000078 + 0x238) =
         uVar49 ^ (uVar49 ^ uVar48) &
                  ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar49 >> 0x20)),
                            -(uint)((float)uVar48 < (float)uVar49));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar28 || ((1 << (ulong)(uVar28 & 0x1f) & 0x2c00U) == 0)))) {
    lVar21 = *(long *)(lVar27 + 0x58);
    if (lVar21 == 0) goto LAB_0354fbf4;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar21 + 0x18) < iVar12) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar27 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar27 = *unaff_x22;
      if (lVar27 == 0) goto LAB_0354fbf4;
    }
    lVar21 = *(long *)(lVar27 + 0x58);
    if (lVar21 == 0) goto LAB_0354fbf4;
    uVar28 = *(uint *)(unaff_x19 + 0x96);
    lVar32 = (long)(int)uVar28;
    uVar14 = *(uint *)(lVar21 + 0x18);
    if (uVar14 <= uVar28) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar21 + lVar32 * 0x14;
    fVar46 = *(float *)(lVar31 + 0x30);
    uVar48 = (ulong)(uint)fVar46;
    *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar50 = fVar46;
    }
    *(float *)(lVar31 + 0x30) = fVar50;
    uVar2 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar2 == 0 && uVar28 == 0) {
      *(uint *)(lVar21 + (ulong)uVar28 * 0x14 + 0x20) = uVar2;
    }
    else {
      uVar36 = uVar2 - 1;
      if (0 < (int)uVar2) {
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar27 + 0x18) <= uVar36)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (uVar28 != *(uint *)(lVar27 + (ulong)uVar36 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar14 <= uVar28 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(uint *)(lVar21 + 0x20 + (long)(int)(uVar28 - 1) * 0x14 + 4) = uVar36;
          *(uint *)(lVar21 + 0x20 + lVar32 * 0x14) = uVar2;
          goto LAB_0354c780;
        }
      }
      if ((float)uVar2 == in_stack_00000080._4_4_) {
        *(float *)(lVar21 + lVar32 * 0x14 + 0x24) = in_stack_00000080._4_4_;
      }
    }
  }
LAB_0354c780:
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
  if ((unaff_w21 == 0) &&
     (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000068 & 1) != 0) goto LAB_0354c910;
      goto LAB_0354cc88;
    }
LAB_0354c87c:
    if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
         (0x1d < in_stack_000017ec - 0xa961)) || (uVar49 = FUN_03597a54(0), (uVar49 & 1) != 0)) &&
       ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
         (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
    goto LAB_0354c904;
    lVar27 = FUN_035978e8(0);
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_0354fbf4;
    uVar14 = FUN_0219c130(*(long *)(lVar27 + 0x10),&stack0x000008b0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
      in_stack_000008b0 = in_stack_000017ec;
      if ((uVar14 & 1) == 0) {
LAB_0354cc08:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000068 = 0;
        goto LAB_0354cc90;
      }
LAB_0354cb6c:
      if (uVar13 != unaff_w25 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
      if (unaff_w21 == 0) goto LAB_0354cbc0;
      goto LAB_0354cb88;
    }
    lVar27 = FUN_035978e8(0);
    if (((lVar27 == 0) || (*unaff_x22 == 0)) || (lVar21 = *(long *)(*unaff_x22 + 0x38), lVar21 == 0)
       ) goto LAB_0354fbf4;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x20 + 1)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(long *)(lVar27 + 0x18) == 0) goto LAB_0354fbf4;
    in_stack_000008b0 =
         (uint)*(ushort *)(lVar21 + (long)(int)(*unaff_x20 + 1) * (long)iVar37 + 0x20);
    uVar49 = FUN_0219c130(*(long *)(lVar27 + 0x18),&stack0x000008b0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar14 & 1) != 0) goto LAB_0354cb6c;
    if ((uVar49 & 1) == 0) goto LAB_0354cc08;
    if ((bStack0000000000000068 & 1) == 0) goto LAB_0354cc88;
    if (unaff_w21 != 0) {
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
        bStack0000000000000068 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_0354cc90;
      }
      goto LAB_0354c87c;
    }
LAB_0354c904:
    if ((bStack0000000000000068 & 1) == 0) {
LAB_0354cc88:
      bStack0000000000000068 = 0;
      goto LAB_0354cc90;
    }
    if (unaff_w21 == 0) {
LAB_0354c910:
      if ((bStack000000000000006c & 1) == 0 && in_stack_000017ec == 0xad) goto LAB_0354cb88;
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
  bStack0000000000000068 = 1;
LAB_0354cc90:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  uVar14 = in_stack_000017ec;
  goto LAB_03549564;
switchD_0354b88c_caseD_0:
  uVar48 = unaff_d13;
  FUN_0358cbd4(in_stack_00000050,unaff_d13,fStack00000000000000d4,
               *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,in_stack_00000138,
               in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
LAB_0354b8d0:
  bStack000000000000006c = 0;
  goto LAB_0354c6b4;
LAB_0354d7c0:
  uVar13 = uVar28 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x50), lVar32 == 0)) goto LAB_0354fbf4;
  lVar33 = (long)(int)uVar13;
  lVar31 = lVar27 + lVar33 * 0x178;
  uVar2 = *(uint *)(lVar31 + 100);
  if (*(uint *)(lVar32 + 0x18) <= uVar2)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar29 = *(long *)(lVar31 + 0x38);
  lVar35 = (long)(int)uVar2;
  lVar32 = lVar32 + lVar35 * 0x5c;
  uVar36 = *(uint *)(lVar32 + 0x68);
  uVar25 = (uint)*(ushort *)(lVar31 + 0x20);
  uVar6 = *(uint *)(lVar32 + 0x3c);
  iVar3 = *(int *)(lVar32 + 0x20);
  iVar12 = *(int *)(lVar32 + 0x28);
  iVar15 = *(int *)(lVar32 + 0x2c);
  fVar56 = *(float *)(lVar32 + 0x4c);
  uVar5 = *(uint *)(lVar32 + 0x40);
  fVar42 = *(float *)(lVar32 + 0x54);
  fVar39 = *(float *)(lVar32 + 0x58);
  fVar58 = *(float *)(lVar32 + 0x5c);
  fVar41 = *(float *)(lVar32 + 0x60);
  fVar43 = *(float *)(lVar32 + 0x6c);
  fVar61 = *(float *)(lVar32 + 0x70);
  fVar57 = *(float *)(lVar32 + 0x74);
  fVar40 = *(float *)(lVar32 + 0x78);
  if ((int)uVar36 < 9) {
    switch(uVar36) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar41 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar39;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar41 + fVar58 * 0.5) - fVar39 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar58 + fVar41) - fVar39;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar58 + fVar41;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar36 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar25 < 0xad) {
      if ((uVar25 != 3) && (uVar25 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar25 != 0xad) && ((uVar25 != 0x200b && (uVar25 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar27 + 0x18) <= uVar6)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b8cc4(uVar4,0);
      if ((uVar48 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar39 <= fVar58) && (!bVar1 && uVar36 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar41;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar41;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar28 == 1) || (uVar2 != uVar14)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar41;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar41;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar25,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar20 = (char)unaff_x19[0x1e];
        fVar41 = -fVar39;
        if (cVar20 != '\0') {
          fVar41 = fVar39;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar6)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar15 = (int)*(char *)(lVar27 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar3 - (uStack0000000000000030 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar39 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar39 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar25 == 9) {
LAB_0354f76c:
          fVar39 = 1.0 - fVar39;
        }
        else {
          if (uVar25 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar48 = FUN_026b97f8(uVar25,0);
            cVar20 = (char)unaff_x19[0x1e];
            if ((uVar48 & 1) != 0) goto LAB_0354f76c;
          }
          iVar15 = (iVar3 - (~uStack0000000000000030 & 1)) + iVar12;
        }
        fVar39 = ((fVar58 + fVar41) * fVar39) / (float)iVar15;
        if (cVar20 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar39;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar39;
        }
      }
    }
  }
  else if (uVar36 == 0x20) {
    fVar39 = fVar43 + fVar57;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar36 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar27 + lVar33 * 0x178;
  fVar41 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar39 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar58 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar32 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar12 = *(int *)(lVar27 + lVar33 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_0354e05c;
  fVar51 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar31 = lVar27 + lVar33 * 0x178;
    *(undefined4 *)(lVar31 + 0x84) = 0;
    *(undefined4 *)(lVar31 + 0xac) = 0;
    *(undefined4 *)(lVar31 + 0xd4) = 0x3f800000;
    fVar51 = 1.0;
    break;
  case 1:
    fVar40 = *(float *)(lVar27 + lVar33 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar31 = lVar27 + lVar33 * 0x178;
      fVar57 = (in_stack_000000f8._4_4_ + fVar40) - *(float *)(in_stack_00000078 + 0x230);
      fVar40 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar31 = lVar27 + lVar33 * 0x178;
    fVar57 = fVar57 - fVar43;
    *(float *)(lVar31 + 0x84) = fVar51 + (fVar40 - fVar43) / fVar57;
    *(float *)(lVar31 + 0xac) = fVar51 + (*(float *)(lVar31 + 0x98) - fVar43) / fVar57;
    *(float *)(lVar31 + 0xd4) = fVar51 + (*(float *)(lVar31 + 0xc0) - fVar43) / fVar57;
    fVar51 = fVar51 + (*(float *)(lVar31 + 0xe8) - fVar43) / fVar57;
    break;
  case 2:
    lVar31 = lVar27 + lVar33 * 0x178;
    fVar40 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar57 = (in_stack_000000f8._4_4_ + *(float *)(lVar31 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar31 + 0x84) = fVar51 + fVar57 / fVar40;
    *(float *)(lVar31 + 0xac) =
         fVar51 + ((in_stack_000000f8._4_4_ + *(float *)(lVar31 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar31 + 0xd4) =
         fVar51 + ((in_stack_000000f8._4_4_ + *(float *)(lVar31 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar51 = fVar51 + ((in_stack_000000f8._4_4_ + *(float *)(lVar31 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar31 = lVar27 + lVar33 * 0x178;
      *(undefined4 *)(lVar31 + 0x88) = 0;
      *(undefined4 *)(lVar31 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0xd8) = 0;
      *(undefined4 *)(lVar31 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar31 = lVar27 + lVar33 * 0x178;
      fVar40 = fVar40 - fVar61;
      fVar57 = fVar51 + (*(float *)(lVar31 + 0x74) - fVar61) / fVar40;
      fVar40 = fVar51 + (*(float *)(lVar31 + 0x9c) - fVar61) / fVar40;
      *(float *)(lVar31 + 0x88) = fVar57;
      *(float *)(lVar31 + 0xb0) = fVar40;
      *(float *)(lVar31 + 0xd8) = fVar57;
      *(float *)(lVar31 + 0x100) = fVar40;
      break;
    case 2:
      lVar31 = lVar27 + lVar33 * 0x178;
      fVar57 = fVar51 + (*(float *)(lVar31 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar31 + 0x88) = fVar57;
      fVar40 = *(float *)(unaff_x19 + 0x9c);
      fVar43 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar31 + 0xd8) = fVar57;
      fVar57 = fVar51 + (*(float *)(lVar31 + 0x9c) - fVar40) / (fVar43 - fVar40);
      *(float *)(lVar31 + 0xb0) = fVar57;
      *(float *)(lVar31 + 0x100) = fVar57;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar36 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar27 + lVar33 * 0x178;
    fVar57 = *(float *)(lVar31 + 0x15c);
    fVar40 = (1.0 - (*(float *)(lVar31 + 0x88) + *(float *)(lVar31 + 0xb0)) * fVar57) * 0.5;
    fVar43 = fVar51 + *(float *)(lVar31 + 0x88) * fVar57 + fVar40;
    fVar51 = fVar51 + fVar40 + *(float *)(lVar31 + 0xb0) * fVar57;
    *(float *)(lVar31 + 0x84) = fVar43;
    *(float *)(lVar31 + 0xac) = fVar43;
    *(float *)(lVar31 + 0xd4) = fVar51;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar27 + lVar33 * 0x178 + 0xfc) = fVar51;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar27 + lVar33 * 0x178;
    *(undefined4 *)(lVar31 + 0x88) = 0;
    *(undefined4 *)(lVar31 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar31 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar31 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar36) {
      lVar31 = lVar27 + lVar33 * 0x178;
      fVar56 = fVar56 - fVar42;
      fVar51 = (*(float *)(lVar31 + 0x74) - fVar42) / fVar56;
      fVar56 = (*(float *)(lVar31 + 0x9c) - fVar42) / fVar56;
      *(float *)(lVar31 + 0x88) = fVar51;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar27 + lVar33 * 0x178;
    fVar51 = (*(float *)(lVar31 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar31 + 0x88) = fVar51;
    fVar56 = (*(float *)(lVar31 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar31 + 0xb0) = fVar56;
    *(float *)(lVar31 + 0xd8) = fVar56;
    *(float *)(lVar31 + 0x100) = fVar51;
    break;
  case 3:
    if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar27 + lVar33 * 0x178;
    fVar56 = *(float *)(lVar31 + 0x15c);
    fVar57 = (1.0 - (*(float *)(lVar31 + 0x84) + *(float *)(lVar31 + 0xd4)) / fVar56) * 0.5;
    fVar51 = *(float *)(lVar31 + 0x84) / fVar56 + fVar57;
    fVar57 = fVar57 + *(float *)(lVar31 + 0xd4) / fVar56;
    *(float *)(lVar31 + 0x88) = fVar51;
    *(float *)(lVar31 + 0xb0) = fVar57;
    *(float *)(lVar31 + 0x100) = fVar51;
    *(float *)(lVar31 + 0xd8) = fVar57;
  }
  if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = lVar27 + lVar33 * 0x178;
  fVar51 = ABS(fVar50) * *(float *)(lVar31 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar31 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar33 * 0x178 + 400) & 1) != 0)) {
    fVar51 = -fVar51;
  }
  lVar31 = lVar27 + lVar33 * 0x178;
  fVar56 = *(float *)(lVar31 + 0x88);
  fVar40 = *(float *)(lVar31 + 0x84);
  fVar57 = -2.1474836e+09;
  if (fVar40 != INFINITY) {
    fVar57 = (float)(int)fVar40;
  }
  fVar43 = *(float *)(lVar31 + 0xd4);
  fVar61 = *(float *)(lVar31 + 0xd8);
  fVar42 = -2.1474836e+09;
  if (fVar56 != INFINITY) {
    fVar42 = (float)(int)fVar56;
  }
  uVar47 = FUN_03591d3c(fVar40 - fVar57,fVar56 - fVar42);
  *(undefined4 *)(lVar31 + 0x84) = uVar47;
  if (*(uint *)(lVar27 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar61 = fVar61 - fVar42;
  *(float *)(lVar31 + 0x88) = fVar51;
  uVar47 = FUN_03591d3c(fVar40 - fVar57,fVar61);
  *(undefined4 *)(lVar27 + lVar33 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar27 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar43 = fVar43 - fVar57;
  *(float *)(lVar27 + lVar33 * 0x178 + 0xb0) = fVar51;
  fVar57 = (float)FUN_03591d3c(fVar43,fVar61);
  *(float *)(lVar31 + 0xd4) = fVar57;
  if (*(uint *)(lVar27 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar31 + 0xd8) = fVar51;
  uVar47 = FUN_03591d3c(fVar43,fVar56 - fVar42);
  *(undefined4 *)(lVar27 + lVar33 * 0x178 + 0xfc) = uVar47;
  uVar36 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar27 + lVar33 * 0x178 + 0x100) = fVar51;
LAB_0354e05c:
  if (((int)uVar13 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar32 = lVar27 + lVar33 * 0x178;
      *(ulong *)(lVar32 + 0x70) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar32 + 0x70));
      *(float *)(lVar32 + 0x78) = fVar58 + *(float *)(lVar32 + 0x78);
      *(ulong *)(lVar32 + 0x98) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar32 + 0x98));
      *(float *)(lVar32 + 0xa0) = fVar58 + *(float *)(lVar32 + 0xa0);
      *(ulong *)(lVar32 + 0xc0) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar32 + 0xc0));
      *(float *)(lVar32 + 200) = fVar58 + *(float *)(lVar32 + 200);
      *(ulong *)(lVar32 + 0xe8) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar32 + 0xe8));
      *(float *)(lVar32 + 0xf0) = fVar58 + *(float *)(lVar32 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar13 < uVar36) {
        if (*(uint *)(lVar27 + lVar33 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar36 = *(uint *)(lVar27 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar31 = lVar27 + lVar33 * 0x178;
  *(undefined8 *)(lVar31 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar31 + 0x78) = uVar47;
  if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar31 = lVar27 + lVar33 * 0x178;
  *(undefined8 *)(lVar31 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar31 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar31 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar31 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar31 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar31 + 0xf0) = uVar47;
  *(undefined1 *)(lVar32 + 0x194) = 0;
LAB_0354e184:
  if (iVar12 == 0) {
    pcVar24 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar24)();
  }
  else if (iVar12 == 1) {
    pcVar24 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar32 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar32 + lVar33 * 0x178;
  uVar16 = *(undefined8 *)(lVar32 + 0x11c);
  *(undefined8 *)(lVar32 + 0x11c) =
       CONCAT44(fVar39 + (float)((ulong)uVar16 >> 0x20),fVar41 + (float)uVar16);
  *(float *)(lVar32 + 0x124) = fVar58 + *(float *)(lVar32 + 0x124);
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar32 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar32 + lVar33 * 0x178;
  *(ulong *)(lVar32 + 0x110) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0x110) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar32 + 0x110));
  *(float *)(lVar32 + 0x118) = fVar58 + *(float *)(lVar32 + 0x118);
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar32 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar32 + lVar33 * 0x178;
  *(ulong *)(lVar32 + 0x128) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0x128) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar32 + 0x128));
  *(float *)(lVar32 + 0x130) = fVar58 + *(float *)(lVar32 + 0x130);
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar32 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar32 + lVar33 * 0x178;
  *(float *)(lVar32 + 0x134) = fVar41 + *(float *)(lVar32 + 0x134);
  *(ulong *)(lVar32 + 0x138) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar32 + 0x138) >> 0x20),
                fVar39 + (float)*(undefined8 *)(lVar32 + 0x138));
  lVar32 = *unaff_x22;
  if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
  uVar36 = *(uint *)(lVar31 + 0x18);
  if (uVar36 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar30 = lVar31 + lVar33 * 0x178;
  *(float *)(lVar30 + 0x150) = fVar39 + *(float *)(lVar30 + 0x150);
  *(ulong *)(lVar30 + 0x140) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar30 + 0x140) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar30 + 0x140));
  *(ulong *)(lVar30 + 0x148) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar30 + 0x148) >> 0x20),
                fVar39 + (float)*(undefined8 *)(lVar30 + 0x148));
  if (uVar2 == uVar14) {
    uVar14 = *unaff_x20 - 1;
    if (uVar13 == uVar14) goto LAB_0354e3ec;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar32 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar30 = (long)(int)uVar14;
    lVar34 = lVar32 + lVar30 * 0x5c;
    fVar57 = fVar39 + *(float *)(lVar34 + 0x54);
    *(ulong *)(lVar34 + 0x4c) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                  fVar39 + (float)*(undefined8 *)(lVar34 + 0x4c));
    *(float *)(lVar34 + 0x54) = fVar57;
    *(float *)(lVar34 + 0x58) = fVar41 + *(float *)(lVar34 + 0x58);
    if (uVar36 <= *(uint *)(lVar34 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar47 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
    lVar32 = lVar32 + lVar30 * 0x5c;
    *(float *)(lVar32 + 0x70) = fVar57;
    *(undefined4 *)(lVar32 + 0x6c) = uVar47;
    lVar32 = *unaff_x22;
    if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar31 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = *(long *)(lVar32 + 0x38);
    if (lVar32 == 0) goto LAB_0354fbf4;
    uVar14 = *(uint *)(lVar31 + lVar30 * 0x5c + 0x40);
    if (*(uint *)(lVar32 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar31 + lVar30 * 0x5c;
    *(undefined4 *)(lVar31 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar14 * 0x178 + 0x128);
    *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar31 + 0x4c);
    uVar14 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar13 == uVar14) {
      lVar32 = *unaff_x22;
      if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar30 = lVar31 + lVar35 * 0x5c;
      fVar57 = fVar39 + *(float *)(lVar30 + 0x54);
      *(ulong *)(lVar30 + 0x4c) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar30 + 0x4c) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar30 + 0x4c));
      *(float *)(lVar30 + 0x54) = fVar57;
      *(float *)(lVar30 + 0x58) = fVar41 + *(float *)(lVar30 + 0x58);
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(lVar30 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar30 + 0x34) * 0x178 + 0x11c);
      lVar31 = lVar31 + lVar35 * 0x5c;
      *(float *)(lVar31 + 0x70) = fVar57;
      *(undefined4 *)(lVar31 + 0x6c) = uVar47;
      lVar32 = *unaff_x22;
      if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_0354fbf4;
      uVar14 = *(uint *)(lVar31 + lVar35 * 0x5c + 0x40);
      if (*(uint *)(lVar32 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = lVar31 + lVar35 * 0x5c;
      *(undefined4 *)(lVar31 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar14 * 0x178 + 0x128);
      *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar31 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar48 = FUN_026b82c4(uVar25,0);
  if (((((uVar48 & 1) == 0) && (1 < uVar25 - 0x2010)) && (uVar25 != 0xad)) && (uVar25 != 0x2d)) {
    if (bVar10) {
      if (((uVar28 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*unaff_x20 && ((uVar25 == 0x2019 || (uVar25 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar28 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar4 = *(undefined2 *)(lVar27 + lVar21 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b82c4(uVar4,0);
        if ((uVar48 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar28)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar4 = *(undefined2 *)(lVar27 + lVar21 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b82c4(uVar4,0);
          if ((uVar48 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar28 != 1) {
LAB_0354f144:
        bVar10 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b81f8(uVar25,0);
      if ((uVar48 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b63d8(uVar25,0);
        if (((uVar25 != 0x200b) && ((uVar48 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar13 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b82c4(uVar25,0);
      iVar12 = (int)fStack0000000000000124;
      if ((uVar48 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar12 = uVar28 - 2;
    }
    lVar32 = *unaff_x22;
    if (lVar32 == 0) goto LAB_0354fbf4;
    lVar31 = *(long *)(lVar32 + 0x40);
    if (lVar31 == 0) goto LAB_0354fbf4;
    uVar14 = *(uint *)(lVar32 + 0x24);
    iVar15 = *(int *)(lVar31 + 0x18);
    if (iVar15 < (int)(uVar14 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar32 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar32 = *unaff_x22;
      if (lVar32 == 0) goto LAB_0354fbf4;
    }
    lVar32 = *(long *)(lVar32 + 0x40);
    if (lVar32 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar32 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = lVar32 + (long)(int)uVar14 * 0x18;
    *(long **)(lVar32 + 0x20) = unaff_x19;
    *(float *)(lVar32 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar32 + 0x2c) = iVar12;
    *(int *)(lVar32 + 0x30) = (iVar12 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar32 = unaff_x19[0x6d];
    if (lVar32 == 0) goto LAB_0354fbf4;
    lVar31 = *(long *)(lVar32 + 0x50);
    *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
    if (lVar31 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar31 + 0x18) <= uVar2)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar31 = lVar31 + lVar35 * 0x5c;
    bVar10 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar31 + 0x30) = *(int *)(lVar31 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      in_stack_00000168._4_4_ = (float)uVar13;
    }
    if (uVar13 == *unaff_x20 - 1) {
      lVar32 = *unaff_x22;
      if (lVar32 == 0) goto LAB_0354fbf4;
      lVar31 = *(long *)(lVar32 + 0x40);
      if (lVar31 == 0) goto LAB_0354fbf4;
      uVar14 = *(uint *)(lVar32 + 0x24);
      iVar12 = *(int *)(lVar31 + 0x18);
      if (iVar12 < (int)(uVar14 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar32 + 0x40),iVar12 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar32 = *unaff_x22;
        if (lVar32 == 0) goto LAB_0354fbf4;
      }
      lVar32 = *(long *)(lVar32 + 0x40);
      if (lVar32 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar32 + (long)(int)uVar14 * 0x18;
      *(long **)(lVar32 + 0x20) = unaff_x19;
      *(float *)(lVar32 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar32 + 0x2c) = uVar13;
      *(uint *)(lVar32 + 0x30) = uVar28 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = unaff_x19[0x6d];
      if (lVar32 == 0) goto LAB_0354fbf4;
      lVar31 = *(long *)(lVar32 + 0x50);
      *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
      if (lVar31 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = lVar31 + lVar35 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar31 + 0x30) = *(int *)(lVar31 + 0x30) + 1;
    }
LAB_0354e610:
    bVar10 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  uVar14 = *(uint *)(lVar32 + 0x18);
  if (uVar14 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar32 + lVar33 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_0354e660:
      if (uVar14 <= uVar28 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar31 = *unaff_x19;
      uVar47 = *(undefined4 *)(lVar32 + lVar21 + -0x330);
      uVar52 = *(undefined4 *)(lVar32 + lVar21 + -0x2f8);
LAB_0354ebc0:
      pcVar24 = *(code **)(lVar31 + 0x8d8);
LAB_0354ebc8:
      (*pcVar24)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar47,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar52);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar32 = *(long *)puVar9;
      }
LAB_0354ec1c:
      fVar46 = 0.0;
      bVar11 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar32 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar11 = false;
    }
  }
  else {
    lVar32 = lVar32 + lVar33 * 0x178;
    iVar12 = *(int *)(lVar32 + 0x68);
    *(int *)(lVar32 + 0x16c) = iVar37;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar12 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_026b63d8(uVar25,0);
    if ((uVar25 != 0x200b) && ((uVar48 & 1) == 0)) {
      lVar32 = *unaff_x22;
      if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar31 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar57 = *(float *)(lVar31 + lVar33 * 0x178 + 0x160);
      if (fVar46 <= fVar57) {
        fVar46 = fVar57;
      }
      if (fStack0000000000000100 <= ABS(fVar51)) {
        fStack0000000000000100 = ABS(fVar51);
      }
      if ((float)iVar12 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *unaff_x22;
          if (lVar32 == 0) goto LAB_0354fbf4;
          lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar31 + 0x15a8);
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar56 = *(float *)(lVar32 + lVar33 * 0x178 + 0x14c);
      fVar57 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar56 = fVar56 + fVar46 * fVar57;
      fStack000000000000005c = (float)iVar12;
      if (fVar56 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar56;
      }
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar13 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar25,0);
        if ((uVar48 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar32 + lVar33 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar32 + 0x160);
      fStack0000000000000070 = *(float *)(lVar32 + 0x11c);
      bVar11 = fVar46 != 0.0;
      fVar57 = in_stack_00000080._4_4_;
      if (bVar11) {
        fVar57 = fVar46;
      }
      fVar46 = fVar57;
      uVar60 = *(undefined4 *)(lVar32 + 0x168);
      _bStack000000000000006c = 0;
      fVar57 = fVar51;
      if (bVar11) {
        fVar57 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar57;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
        if (uVar13 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar33 * 0x178;
          lVar31 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar32 + 0x128);
          uVar52 = *(undefined4 *)(lVar32 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar13 == uVar6) || ((int)uVar5 <= (int)uVar13)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b63d8(uVar25,0);
      if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
        lVar31 = lVar33;
        uVar14 = uVar13;
        if (uVar25 == 0x200b || (uVar48 & 1) != 0) {
          lVar31 = (long)(int)uVar5;
          uVar14 = uVar5;
        }
        if (uVar14 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar31 * 0x178;
          uVar47 = *(undefined4 *)(lVar32 + 0x128);
          uVar52 = *(undefined4 *)(lVar32 + 0x160);
          pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
        uVar14 = *(uint *)(lVar32 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar13 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar28)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar48 = FUN_03567ad8(uVar60,*(undefined4 *)(lVar32 + lVar21),0);
      if ((uVar48 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
          if (uVar13 < *(uint *)(lVar32 + 0x18)) {
            lVar32 = lVar32 + lVar33 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar32 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar32 + 0x160));
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar32 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar32 = *(long *)puVar9;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar11 = true;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar32 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar29 == 0) goto LAB_0354fbf4;
  uVar14 = *(uint *)(lVar32 + lVar33 * 0x178 + 400);
  fVar57 = (float)FUN_03776a30(lVar29 + 0x50,0);
  if ((uVar14 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar28 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar32 + lVar21 + -0x330);
      fVar39 = *(float *)(lVar32 + lVar21 + -0x30c);
      pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar24)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar47,
                 fStack00000000000000a8 * fVar57 + fVar39,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar7 = false;
  }
  else {
    lVar32 = *unaff_x22;
    if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar31 + 0x18) <= uVar13)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar31 + lVar33 * 0x178 + 0x174) = iVar37;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar31 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
       (bVar7 || !bVar1)) {
LAB_0354ed84:
      if (!bVar7) goto LAB_0354f250;
    }
    else {
      if (uVar13 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar25,0);
        if ((uVar48 & 1) != 0) goto LAB_0354ed84;
        lVar32 = *unaff_x22;
        if (lVar32 == 0) goto LAB_0354fbf4;
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar32 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar32 + lVar33 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar32 + 0x60);
      fStack0000000000000040 = *(float *)(lVar32 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar32 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar32 + 0x160);
      fStack000000000000009c = fVar57 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar14 = *unaff_x20;
    if (uVar14 == 1) {
      if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
        uVar14 = *(uint *)(lVar32 + 0x18);
LAB_0354ef0c:
        if (uVar13 < uVar14) {
          lVar32 = lVar32 + lVar33 * 0x178;
          lVar31 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar32 + 0x128);
          fVar39 = *(float *)(lVar32 + 0x14c);
LAB_0354ef24:
          pcVar24 = *(code **)(lVar31 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar13 == uVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b63d8(uVar25,0);
      if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
        uVar14 = *(uint *)(lVar32 + 0x18);
        if (uVar25 == 0x200b || (uVar48 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar31 = lVar33;
        if (uVar13 < uVar14) {
LAB_0354f1f8:
          lVar32 = lVar32 + lVar31 * 0x178;
          fVar39 = *(float *)(lVar32 + 0x14c);
          uVar47 = *(undefined4 *)(lVar32 + 0x128);
          pcVar24 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar13 < (int)uVar14) {
      lVar32 = *unaff_x22;
      if ((lVar32 != 0) && (lVar31 = *(long *)(lVar32 + 0x38), lVar31 != 0)) {
        if (uVar28 < *(uint *)(lVar31 + 0x18)) {
          if (*(float *)(lVar31 + lVar21 + -0x108) == in_stack_00000048._4_4_) {
            fVar56 = *(float *)(lVar31 + lVar21 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar48 = FUN_03567bac(fVar39 + fVar56,fStack0000000000000040,0);
            if ((uVar48 & 1) != 0) {
              uVar14 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar32 = *unaff_x22;
            if (lVar32 == 0) goto LAB_0354fbf4;
          }
          lVar32 = *(long *)(lVar32 + 0x38);
          if (lVar32 != 0) {
            uVar14 = *(uint *)(lVar32 + 0x18);
            if ((int)uVar13 <= (int)uVar5) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar31 = (long)(int)uVar5;
            if (uVar5 < uVar14) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar13 < (int)uVar14) {
      iVar12 = FUN_036d3364(lVar29,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar28)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = *(long *)(lVar27 + lVar21 + -0x130);
      if (lVar32 == 0) goto LAB_0354fbf4;
      iVar15 = FUN_036d3364(lVar32,0);
      if (iVar12 != iVar15) {
        if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
          uVar14 = *(uint *)(lVar32 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
        if (uVar28 - 2 < *(uint *)(lVar32 + 0x18)) {
          lVar31 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar32 + lVar21 + -0x330);
          fVar39 = *(float *)(lVar32 + lVar21 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar7 = true;
  }
  if ((*unaff_x22 == 0) || (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 == 0)) goto LAB_0354fbf4;
  uVar14 = (uint)*(undefined8 *)(lVar32 + 0x18);
  if (uVar14 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar32 + lVar33 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar32 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar8) {
LAB_0354f400:
      if (uVar14 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar32 + lVar33 * 0x178;
      fVar57 = *(float *)(lVar32 + 0x128);
      fVar42 = *(float *)(lVar32 + 0x188);
      uVar17 = *(undefined8 *)(lVar32 + 0x17c);
      fVar58 = *(float *)(lVar32 + 0x184);
      uVar16 = *(undefined8 *)(lVar32 + 0x184);
      fVar43 = *(float *)(lVar32 + 0x18c);
      fVar39 = *(float *)(lVar32 + 0x11c);
      fVar56 = *(float *)(lVar32 + 0x148);
      fVar40 = *(float *)(lVar32 + 0x150);
      in_stack_00000188 = uVar17;
      fStack0000000000000190 = fVar58;
      fStack0000000000000194 = fVar42;
      in_stack_00000198 = fVar43;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar48 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar32 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar48 & 1) == 0) {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar32);
        }
        fVar57 = fVar57 + (float)in_stack_000017c8;
        fVar39 = fVar39 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar56 = fVar56 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar39 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar39;
        }
        if (fVar40 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar40 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar57) {
          fStack00000000000000d0 = fVar57;
        }
        if (fStack00000000000000d4 <= fVar56) {
          fStack00000000000000d4 = fVar56;
        }
      }
      else {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar32);
        }
        fVar39 = (fVar39 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar40 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar40;
        }
        if (fStack00000000000000d4 <= fVar56) {
          fStack00000000000000d4 = fVar56;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar39,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar40 - fVar43;
        fStack00000000000000d0 = fVar57 + fVar58;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar56 + fVar42;
        fStack00000000000000e0 = fVar39;
        in_stack_000017c0 = uVar17;
        in_stack_000017c8 = uVar16;
        in_stack_000017d0 = fVar43;
      }
      if (((*unaff_x20 == 1) || (uVar13 == uVar6)) || (((int)uVar5 <= (int)uVar13 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar8 = true;
    }
    else {
      if ((((uVar25 != 0xd) && ((uVar25 & 0xfffe) != 10)) && ((int)uVar13 <= (int)uVar5)) && (bVar1)
         ) {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b97f8(uVar25,0);
          if ((uVar48 & 1) != 0) goto LAB_0354f374;
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *(long *)puVar9;
        }
        if ((*unaff_x22 != 0) && (lVar32 = *(long *)(*unaff_x22 + 0x38), lVar32 != 0)) {
          uVar14 = (uint)*(undefined8 *)(lVar32 + 0x18);
          if (uVar13 < uVar14) {
            lVar31 = *(long *)(lVar31 + 0xb8);
            lVar29 = lVar32 + lVar33 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar29 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar29 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar31 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar31 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar29 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar31 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar31 + 0x15a4);
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
  uVar13 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar21 = lVar21 + 0x178;
  bVar1 = (int)uVar13 <= (int)uVar28;
  uVar14 = uVar2;
  uVar28 = uVar28 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar27 = *unaff_x22;
  if (lVar27 != 0) {
    iVar37 = uVar2 + 1;
    plVar38 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar27 + 0x18) = uVar13;
    lVar21 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar37;
    if ((int)uVar13 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar21;
    *(int *)(lVar27 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar48 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar48 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar27 = unaff_x19[0xdb];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*unaff_x22,*(undefined8 *)(lVar27 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar27 = *(long *)(*unaff_x22 + 0x60), lVar27 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar38 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar27 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar27 = *unaff_x22;
                        if (lVar27 != 0) {
                          lVar32 = 0;
                          lVar21 = 0;
                          do {
                            uVar48 = lVar21 + 1;
                            if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar48) goto LAB_0354d0cc;
                            lVar27 = *(long *)(lVar27 + 0x60);
                            if (lVar27 == 0) break;
                            if (*(int *)(*plVar38 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar27 + 0x18) <= uVar48)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar27 + lVar32 + 0x70,0);
                            lVar27 = unaff_x19[0xe1];
                            if (lVar27 == 0) break;
                            if (*(uint *)(lVar27 + 0x18) <= uVar48)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar16 = *(undefined8 *)(lVar27 + lVar21 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar49 = FUN_036d35a8(uVar16,0,0);
                            if ((uVar49 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar27 = *(long *)(*unaff_x22 + 0x60), lVar27 == 0)) break;
                                if (*(int *)(*plVar38 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar27 + 0x18) <= uVar48)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar27 + lVar32 + 0x70,1,0);
                              }
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar21 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar31 = *(long *)(*unaff_x22 + 0x60), lVar31 == 0)) break;
                              if (*(uint *)(lVar31 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a460c(lVar27,*(undefined8 *)(lVar31 + lVar32 + 0x80),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar21 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar31 = *(long *)(*unaff_x22 + 0x60), lVar31 == 0)) break;
                              if (*(uint *)(lVar31 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a4810(lVar27,*(undefined8 *)(lVar31 + lVar32 + 0x98),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar21 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar31 = *(long *)(*unaff_x22 + 0x60), lVar31 == 0)) break;
                              if (*(uint *)(lVar31 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a48bc(lVar27,*(undefined8 *)(lVar31 + lVar32 + 0xa0),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar21 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar31 = *(long *)(*unaff_x22 + 0x60), lVar31 == 0)) break;
                              if (*(uint *)(lVar31 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a4e24(lVar27,*(undefined8 *)(lVar31 + lVar32 + 0xa8),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar21 * 8 + 0x28);
                              if ((lVar27 == 0) || (lVar27 = FUN_0359d5ac(lVar27,0), lVar27 == 0))
                              break;
                              FUN_036aa280(lVar27,0);
                            }
                            lVar27 = *unaff_x22;
                            lVar21 = lVar21 + 1;
                            lVar32 = lVar32 + 0x50;
                          } while (lVar27 != 0);
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


