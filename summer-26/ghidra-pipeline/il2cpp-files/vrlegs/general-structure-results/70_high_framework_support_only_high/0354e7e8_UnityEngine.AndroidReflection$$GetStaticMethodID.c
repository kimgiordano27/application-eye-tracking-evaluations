/*
FUNCTION_NAME: UnityEngine.AndroidReflection$$GetStaticMethodID
ENTRY_POINT: 0354e7e8
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


void UnityEngine_AndroidReflection__GetStaticMethodID(void)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  uint uVar12;
  uint in_w8;
  long lVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *unaff_x19;
  int unaff_w20;
  undefined8 uVar18;
  uint uVar19;
  uint unaff_w21;
  long lVar20;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar21;
  uint unaff_w24;
  int *unaff_x25;
  long unaff_x26;
  uint uVar22;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  long in_stack_00000108;
  long in_stack_00000110;
  uint in_stack_00000118;
  uint in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  float in_stack_00000150;
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
  
code_r0x0354e7e8:
  uVar16 = in_stack_00000170;
  if (!(bool)in_ZR) goto LAB_0354e900;
LAB_0354e7ec:
  in_stack_00000170 = uVar16;
  if (in_stack_00000170 - 2 < in_w8) {
    uVar3 = *(undefined2 *)(unaff_x29 + unaff_x26 + -0x438);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_026b82c4(uVar3,0);
    unaff_w27 = in_stack_00000178;
    uVar16 = in_stack_00000170;
    if ((uVar9 & 1) != 0) {
      if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000170)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar3 = *(undefined2 *)(unaff_x29 + in_stack_00000138 + -0x148);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_026b82c4(uVar3,0);
      if ((uVar9 & 1) != 0) goto LAB_0354e610;
    }
LAB_0354e900:
    in_stack_00000170 = uVar16;
    if (unaff_w24 == *unaff_x25 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_026b82c4(unaff_w27,0);
      iVar7 = unaff_w20;
      if ((uVar9 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar7 = in_stack_00000170 - 2;
    }
    lVar13 = *unaff_x22;
    if (lVar13 != 0) {
      lVar17 = *(long *)(lVar13 + 0x40);
      if (lVar17 != 0) {
        uVar16 = *(uint *)(lVar13 + 0x24);
        iVar8 = *(int *)(lVar17 + 0x18);
        if (iVar8 < (int)(uVar16 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar13 + 0x40),iVar8 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar13 = *unaff_x22;
          if (lVar13 == 0) goto LAB_0354fbf4;
        }
        lVar13 = *(long *)(lVar13 + 0x40);
        if (lVar13 != 0) {
          if (uVar16 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar16 * 0x18;
            *(long **)(lVar13 + 0x20) = unaff_x19;
            *(uint *)(lVar13 + 0x28) = in_stack_00000168._4_4_;
            *(int *)(lVar13 + 0x2c) = iVar7;
            *(uint *)(lVar13 + 0x30) = (iVar7 - in_stack_00000168._4_4_) + 1;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar13 = unaff_x19[0x6d];
            if (lVar13 != 0) {
              lVar17 = *(long *)(lVar13 + 0x50);
              unaff_x23 = 0x178;
              *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) + 1;
              if (lVar17 != 0) {
                if (in_stack_00000180 < *(uint *)(lVar17 + 0x18)) {
                  lVar17 = lVar17 + unaff_x28 * 0x5c;
                  bVar4 = false;
                  in_stack_000000d8 = in_stack_000000d8 + 1;
                  *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
                  unaff_x29 = in_stack_000000c8;
                  uVar12 = in_stack_00000180;
LAB_0354e618:
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                  goto LAB_0354fbf4;
                  uVar16 = *(uint *)(lVar13 + 0x18);
                  if (uVar16 <= unaff_w24)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  uVar19 = (uint)in_stack_000000e8;
                  uVar22 = (uint)in_stack_00000128;
                  if ((*(byte *)(lVar13 + in_stack_00000108 * unaff_x23 + 400) >> 2 & 1) == 0) {
                    if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
                      in_stack_00000130._4_4_ = 0;
                    }
                    else {
LAB_0354e660:
                      if (uVar16 <= in_stack_00000170 - 2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = *unaff_x19;
                      uVar26 = *(undefined4 *)(lVar13 + in_stack_00000138 + -0x330);
                      uVar29 = *(undefined4 *)(lVar13 + in_stack_00000138 + -0x2f8);
LAB_0354ebc0:
                      pcVar14 = *(code **)(lVar17 + 0x8d8);
LAB_0354ebc8:
                      (*pcVar14)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                                 uVar26,fStack0000000000000104,0,in_stack_00000080._4_4_,uVar29);
                      puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar13 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar13 = *(long *)puVar5;
                      }
LAB_0354ec1c:
                      unaff_s15 = 0.0;
                      in_stack_00000130._4_4_ = 0;
                      fStack0000000000000104 = *(float *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
                      fStack0000000000000100 = 0.0;
                    }
                  }
                  else {
                    lVar13 = lVar13 + in_stack_00000108 * unaff_x23;
                    iVar7 = *(int *)(lVar13 + 0x68);
                    *(undefined4 *)(lVar13 + 0x16c) = in_stack_000017d4;
                    if ((((int)unaff_x19[0x65] < (int)unaff_w24) ||
                        ((int)unaff_x19[0x66] < (int)in_stack_00000180)) ||
                       (((int)unaff_x19[0x5c] == 5 && (iVar7 + 1 != (int)unaff_x19[0x67])))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar9 = FUN_026b63d8(in_stack_00000178,0);
                    if ((in_stack_00000178 != 0x200b) && ((uVar9 & 1) == 0)) {
                      lVar13 = *unaff_x22;
                      if ((lVar13 == 0) || (lVar17 = *(long *)(lVar13 + 0x38), lVar17 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fVar23 = *(float *)(lVar17 + in_stack_00000108 * 0x178 + 0x160);
                      if (unaff_s15 <= fVar23) {
                        unaff_s15 = fVar23;
                      }
                      if (fStack0000000000000100 <= ABS(unaff_s14)) {
                        fStack0000000000000100 = ABS(unaff_s14);
                      }
                      if (iVar7 != iStack000000000000005c) {
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar13 = *unaff_x22;
                          if (lVar13 == 0) goto LAB_0354fbf4;
                          lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                        }
                        else {
                          lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                        }
                        fStack0000000000000104 = *(float *)(lVar17 + 0x15a8);
                      }
                      lVar13 = *(long *)(lVar13 + 0x38);
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar13 + 0x18) <= unaff_w24)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
                      fVar24 = *(float *)(lVar13 + in_stack_00000108 * 0x178 + 0x14c);
                      fVar23 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
                      fVar24 = fVar24 + unaff_s15 * fVar23;
                      iStack000000000000005c = iVar7;
                      if (fVar24 <= fStack0000000000000104) {
                        fStack0000000000000104 = fVar24;
                      }
                    }
                    if ((in_stack_00000130._4_4_ & 1) == 0) {
                      unaff_x23 = 0x178;
                      in_stack_00000130._4_4_ = 0;
                      if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
                          ((int)uVar22 < (int)unaff_w24)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
                      if (unaff_w24 == uVar22) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar9 = FUN_026b97f8(in_stack_00000178,0);
                        if ((uVar9 & 1) != 0) goto LAB_0354eb28;
                      }
                      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar13 + 0x18) <= unaff_w24)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar13 = lVar13 + in_stack_00000108 * 0x178;
                      in_stack_00000080._4_4_ = *(float *)(lVar13 + 0x160);
                      in_stack_00000070 = *(undefined4 *)(lVar13 + 0x11c);
                      bVar6 = unaff_s15 != 0.0;
                      fVar23 = in_stack_00000080._4_4_;
                      if (bVar6) {
                        fVar23 = unaff_s15;
                      }
                      unaff_s15 = fVar23;
                      in_stack_00000088 = *(undefined4 *)(lVar13 + 0x168);
                      uStack000000000000006c = 0;
                      fVar23 = unaff_s14;
                      if (bVar6) {
                        fVar23 = fStack0000000000000100;
                      }
                      fStack0000000000000068 = fStack0000000000000104;
                      fStack0000000000000100 = fVar23;
                    }
                    unaff_x23 = 0x178;
                    if (*unaff_x25 == 1) {
                      if ((*unaff_x22 != 0) && (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0))
                      {
                        if (unaff_w24 < *(uint *)(lVar13 + 0x18)) {
                          lVar13 = lVar13 + in_stack_00000108 * 0x178;
                          lVar17 = *unaff_x19;
                          uVar26 = *(undefined4 *)(lVar13 + 0x128);
                          uVar29 = *(undefined4 *)(lVar13 + 0x160);
                          goto LAB_0354ebc0;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
                    if ((unaff_w24 == uVar19) || ((int)uVar22 <= (int)unaff_w24)) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = FUN_026b63d8(in_stack_00000178,0);
                      if ((*unaff_x22 != 0) && (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0))
                      {
                        lVar17 = in_stack_00000108;
                        uVar16 = unaff_w24;
                        if (in_stack_00000178 == 0x200b || (uVar9 & 1) != 0) {
                          lVar17 = in_stack_00000128;
                          uVar16 = uVar22;
                        }
                        if (uVar16 < *(uint *)(lVar13 + 0x18)) {
                          lVar13 = lVar13 + lVar17 * 0x178;
                          uVar26 = *(undefined4 *)(lVar13 + 0x128);
                          uVar29 = *(undefined4 *)(lVar13 + 0x160);
                          pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
                          goto LAB_0354ebc8;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
                    if (!bVar1) {
                      if ((*unaff_x22 != 0) && (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0))
                      {
                        uVar16 = *(uint *)(lVar13 + 0x18);
                        goto LAB_0354e660;
                      }
                      goto LAB_0354fbf4;
                    }
                    if ((int)unaff_w24 < *unaff_x25 + -1) {
                      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar13 + 0x18) <= in_stack_00000170)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar9 = FUN_03567ad8(in_stack_00000088,
                                           *(undefined4 *)(lVar13 + in_stack_00000138),0);
                      if ((uVar9 & 1) == 0) {
                        if ((*unaff_x22 != 0) &&
                           (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0)) {
                          if (unaff_w24 < *(uint *)(lVar13 + 0x18)) {
                            lVar13 = lVar13 + in_stack_00000108 * 0x178;
                            (**(code **)(*unaff_x19 + 0x8d8))
                                      (in_stack_00000070,fStack0000000000000068,
                                       uStack000000000000006c,*(undefined4 *)(lVar13 + 0x128),
                                       fStack0000000000000104,0,in_stack_00000080._4_4_,
                                       *(undefined4 *)(lVar13 + 0x160));
                            puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar13 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar13 = *(long *)puVar5;
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
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar13 + 0x18) <= unaff_w24)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (in_stack_00000110 == 0) goto LAB_0354fbf4;
                  uVar16 = *(uint *)(lVar13 + in_stack_00000108 * unaff_x23 + 400);
                  fVar23 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
                  if ((uVar16 >> 6 & 1) == 0) {
                    if ((in_stack_00000120 & 1) != 0) {
                      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar13 + 0x18) <= in_stack_00000170 - 2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar26 = *(undefined4 *)(lVar13 + in_stack_00000138 + -0x330);
                      fVar24 = *(float *)(lVar13 + in_stack_00000138 + -0x30c);
                      pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
                      (*pcVar14)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,
                                 uVar26,in_stack_000000a8 * fVar23 + fVar24,0,in_stack_000000a8,
                                 in_stack_000000a8);
                    }
LAB_0354f250:
                    in_stack_00000120 = 0;
                  }
                  else {
                    lVar13 = *unaff_x22;
                    if ((lVar13 == 0) || (lVar17 = *(long *)(lVar13 + 0x38), lVar17 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar17 + 0x18) <= unaff_w24)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(undefined4 *)(lVar17 + in_stack_00000108 * unaff_x23 + 0x174) =
                         in_stack_000017d4;
                    if ((((int)unaff_x19[0x65] < (int)unaff_w24) ||
                        ((int)unaff_x19[0x66] < (int)uVar12)) ||
                       (((int)unaff_x19[0x5c] == 5 &&
                        (*(int *)(lVar17 + in_stack_00000108 * unaff_x23 + 0x68) + 1 !=
                         (int)unaff_x19[0x67])))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
                        ((int)uVar22 < (int)unaff_w24)) || ((in_stack_00000120 & 1) != 0 || !bVar1))
                    {
LAB_0354ed84:
                      if ((in_stack_00000120 & 1) == 0) goto LAB_0354f250;
                    }
                    else {
                      if (unaff_w24 == uVar22) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar9 = FUN_026b97f8(in_stack_00000178,0);
                        if ((uVar9 & 1) != 0) goto LAB_0354ed84;
                        lVar13 = *unaff_x22;
                        if (lVar13 == 0) goto LAB_0354fbf4;
                      }
                      lVar13 = *(long *)(lVar13 + 0x38);
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar13 + 0x18) <= unaff_w24)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar13 = lVar13 + in_stack_00000108 * unaff_x23;
                      in_stack_00000048._4_4_ = *(float *)(lVar13 + 0x60);
                      in_stack_00000040 = *(float *)(lVar13 + 0x14c);
                      in_stack_000000a0 = *(undefined4 *)(lVar13 + 0x11c);
                      in_stack_000000a8 = *(float *)(lVar13 + 0x160);
                      fStack000000000000009c = fVar23 * in_stack_000000a8 + in_stack_00000040;
                      uStack0000000000000098 = 0;
                    }
                    iVar7 = *unaff_x25;
                    if (iVar7 == 1) {
                      if ((*unaff_x22 != 0) && (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0))
                      {
                        uVar16 = *(uint *)(lVar13 + 0x18);
LAB_0354ef0c:
                        if (unaff_w24 < uVar16) {
                          lVar13 = lVar13 + in_stack_00000108 * unaff_x23;
                          lVar17 = *unaff_x19;
                          uVar26 = *(undefined4 *)(lVar13 + 0x128);
                          fVar24 = *(float *)(lVar13 + 0x14c);
LAB_0354ef24:
                          pcVar14 = *(code **)(lVar17 + 0x8d8);
                          goto LAB_0354f21c;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
                    if (unaff_w24 == uVar19) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = FUN_026b63d8(in_stack_00000178,0);
                      if ((*unaff_x22 != 0) && (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0))
                      {
                        uVar16 = *(uint *)(lVar13 + 0x18);
                        if (in_stack_00000178 == 0x200b || (uVar9 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
                        in_stack_00000128 = in_stack_00000108;
                        if (unaff_w24 < uVar16) {
LAB_0354f1f8:
                          lVar13 = lVar13 + in_stack_00000128 * unaff_x23;
                          fVar24 = *(float *)(lVar13 + 0x14c);
                          uVar26 = *(undefined4 *)(lVar13 + 0x128);
                          pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
                          goto LAB_0354f21c;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
                    if ((int)unaff_w24 < iVar7) {
                      lVar13 = *unaff_x22;
                      if ((lVar13 != 0) && (lVar17 = *(long *)(lVar13 + 0x38), lVar17 != 0)) {
                        if (in_stack_00000170 < *(uint *)(lVar17 + 0x18)) {
                          if (*(float *)(lVar17 + in_stack_00000138 + -0x108) ==
                              in_stack_00000048._4_4_) {
                            fVar24 = *(float *)(lVar17 + in_stack_00000138 + -0x1c);
                            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar9 = FUN_03567bac(in_stack_00000150 + fVar24,in_stack_00000040,0);
                            if ((uVar9 & 1) != 0) {
                              iVar7 = *unaff_x25;
                              goto LAB_0354f010;
                            }
                            lVar13 = *unaff_x22;
                            if (lVar13 == 0) goto LAB_0354fbf4;
                          }
                          lVar13 = *(long *)(lVar13 + 0x38);
                          if (lVar13 != 0) {
                            uVar16 = *(uint *)(lVar13 + 0x18);
                            if ((int)unaff_w24 <= (int)uVar22) goto LAB_0354f1f0;
LAB_0354f1e0:
                            if (uVar22 < uVar16) goto LAB_0354f1f8;
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          }
                          goto LAB_0354fbf4;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
LAB_0354f010:
                    if ((int)unaff_w24 < iVar7) {
                      iVar7 = FUN_036d3364(in_stack_00000110,0);
                      if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000170)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar13 = *(long *)(unaff_x29 + in_stack_00000138 + -0x130);
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      iVar8 = FUN_036d3364(lVar13,0);
                      if (iVar7 != iVar8) {
                        if ((*unaff_x22 != 0) &&
                           (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0)) {
                          uVar16 = *(uint *)(lVar13 + 0x18);
                          unaff_x25 = in_stack_00000090;
                          goto LAB_0354ef0c;
                        }
                        goto LAB_0354fbf4;
                      }
                    }
                    if (!bVar1) {
                      if ((*unaff_x22 != 0) && (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0))
                      {
                        if (in_stack_00000170 - 2 < *(uint *)(lVar13 + 0x18)) {
                          lVar17 = *unaff_x19;
                          uVar26 = *(undefined4 *)(lVar13 + in_stack_00000138 + -0x330);
                          fVar24 = *(float *)(lVar13 + in_stack_00000138 + -0x30c);
                          unaff_x25 = in_stack_00000090;
                          goto LAB_0354ef24;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
                    in_stack_00000120 = 1;
                    unaff_x25 = in_stack_00000090;
                  }
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                  goto LAB_0354fbf4;
                  uVar16 = (uint)*(undefined8 *)(lVar13 + 0x18);
                  if (uVar16 <= unaff_w24)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if ((*(byte *)(lVar13 + in_stack_00000108 * unaff_x23 + 0x191) >> 1 & 1) == 0) {
                    if ((in_stack_00000118 & 1) != 0) {
                      (**(code **)(*unaff_x19 + 0x8e8))
                                (fStack00000000000000e0,fStack00000000000000e4,
                                 uStack00000000000000c0,fStack00000000000000d0,
                                 fStack00000000000000d4,uStack00000000000000c0);
                    }
LAB_0354f604:
                    in_stack_00000118 = 0;
                  }
                  else {
                    if ((((int)unaff_x19[0x65] < (int)unaff_w24) ||
                        ((int)unaff_x19[0x66] < (int)uVar12)) ||
                       (((int)unaff_x19[0x5c] == 5 &&
                        (*(int *)(lVar13 + in_stack_00000108 * unaff_x23 + 0x68) + 1 !=
                         (int)unaff_x19[0x67])))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if ((in_stack_00000118 & 1) == 0) {
                      if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
                          ((int)unaff_w24 <= (int)uVar22)) && (bVar1)) {
                        if (unaff_w24 == uVar22) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar9 = FUN_026b97f8(in_stack_00000178,0);
                          if ((uVar9 & 1) != 0) goto LAB_0354f374;
                        }
                        puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar17 = *(long *)puVar5;
                        }
                        unaff_x23 = 0x178;
                        if ((*unaff_x22 != 0) &&
                           (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 != 0)) {
                          uVar16 = (uint)*(undefined8 *)(lVar13 + 0x18);
                          if (unaff_w24 < uVar16) {
                            lVar17 = *(long *)(lVar17 + 0xb8);
                            lVar20 = lVar13 + in_stack_00000108 * 0x178;
                            in_stack_000017c8 = *(undefined8 *)(lVar20 + 0x184);
                            in_stack_000017c0 = *(undefined8 *)(lVar20 + 0x17c);
                            fStack00000000000000e0 = *(float *)(lVar17 + 0x1598);
                            fStack00000000000000e4 = *(float *)(lVar17 + 0x159c);
                            in_stack_000017d0 = *(float *)(lVar20 + 0x18c);
                            fStack00000000000000d0 = *(float *)(lVar17 + 0x15a0);
                            fStack00000000000000d4 = *(float *)(lVar17 + 0x15a4);
                            uStack00000000000000c0 = 0;
                            goto LAB_0354f400;
                          }
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        }
                        goto LAB_0354fbf4;
                      }
LAB_0354f374:
                      in_stack_00000118 = 0;
                    }
                    else {
LAB_0354f400:
                      if (uVar16 <= unaff_w24)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar13 = lVar13 + in_stack_00000108 * unaff_x23;
                      fVar24 = *(float *)(lVar13 + 0x128);
                      fVar25 = *(float *)(lVar13 + 0x188);
                      uVar21 = *(undefined8 *)(lVar13 + 0x17c);
                      fVar31 = *(float *)(lVar13 + 0x184);
                      uVar18 = *(undefined8 *)(lVar13 + 0x184);
                      fVar30 = *(float *)(lVar13 + 0x18c);
                      fVar23 = *(float *)(lVar13 + 0x11c);
                      fVar27 = *(float *)(lVar13 + 0x148);
                      fVar28 = *(float *)(lVar13 + 0x150);
                      in_stack_00000188 = uVar21;
                      fStack0000000000000190 = fVar31;
                      fStack0000000000000194 = fVar25;
                      in_stack_00000198 = fVar30;
                      in_stack_000001a0 = in_stack_000017c0;
                      in_stack_000001a8 = in_stack_000017c8;
                      in_stack_000001b0 = in_stack_000017d0;
                      uVar9 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
                      lVar13 = *(long *)OVRPlugin_Mesh_TypeInfo;
                      if ((uVar9 & 1) == 0) {
                        if (*(int *)(lVar13 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(lVar13);
                        }
                        fVar24 = fVar24 + (float)in_stack_000017c8;
                        fVar23 = fVar23 - (float)((ulong)in_stack_000017c0 >> 0x20);
                        fVar27 = fVar27 + (float)((ulong)in_stack_000017c8 >> 0x20);
                        if (fVar23 <= fStack00000000000000e0) {
                          fStack00000000000000e0 = fVar23;
                        }
                        if (fVar28 - in_stack_000017d0 <= fStack00000000000000e4) {
                          fStack00000000000000e4 = fVar28 - in_stack_000017d0;
                        }
                        if (fStack00000000000000d0 <= fVar24) {
                          fStack00000000000000d0 = fVar24;
                        }
                        if (fStack00000000000000d4 <= fVar27) {
                          fStack00000000000000d4 = fVar27;
                        }
                      }
                      else {
                        if (*(int *)(lVar13 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(lVar13);
                        }
                        fVar23 = (fVar23 + (fStack00000000000000d0 - (float)in_stack_000017c8)) *
                                 0.5;
                        if (fVar28 <= fStack00000000000000e4) {
                          fStack00000000000000e4 = fVar28;
                        }
                        if (fStack00000000000000d4 <= fVar27) {
                          fStack00000000000000d4 = fVar27;
                        }
                        (**(code **)(*unaff_x19 + 0x8e8))
                                  (fStack00000000000000e0,fStack00000000000000e4,
                                   uStack00000000000000c0,fVar23,fStack00000000000000d4,
                                   uStack00000000000000c0);
                        fStack00000000000000e4 = fVar28 - fVar30;
                        fStack00000000000000d0 = fVar24 + fVar31;
                        uStack00000000000000c0 = 0;
                        fStack00000000000000d4 = fVar27 + fVar25;
                        fStack00000000000000e0 = fVar23;
                        in_stack_000017c0 = uVar21;
                        in_stack_000017c8 = uVar18;
                        in_stack_000017d0 = fVar30;
                      }
                      unaff_x23 = 0x178;
                      if (((*unaff_x25 == 1) || (unaff_w24 == uVar19)) ||
                         (((int)uVar22 <= (int)unaff_w24 || (!bVar1)))) {
                        (**(code **)(*unaff_x19 + 0x8e8))
                                  (fStack00000000000000e0,fStack00000000000000e4,
                                   uStack00000000000000c0,fStack00000000000000d0,
                                   fStack00000000000000d4,uStack00000000000000c0);
                        goto LAB_0354f604;
                      }
                      in_stack_00000118 = 1;
                    }
                  }
                  puVar5 = OVRPlugin_Media_TypeInfo;
                  iVar7 = *unaff_x25;
                  unaff_w20 = unaff_w20 + 1;
                  uVar16 = in_stack_00000170 + 1;
                  unaff_x26 = in_stack_00000138 + 0x178;
                  if (iVar7 <= (int)in_stack_00000170) {
                    lVar13 = *unaff_x22;
                    if (lVar13 == 0) goto LAB_0354fbf4;
                    *(int *)(lVar13 + 0x18) = iVar7;
                    lVar17 = unaff_x19[0xd4];
                    *(uint *)(lVar13 + 0x2c) = uVar12 + 1;
                    if (iVar7 < 1 || in_stack_000000d8 == 0) {
                      in_stack_000000d8 = 1;
                    }
                    *(int *)(lVar13 + 0x1c) = (int)lVar17;
                    *(int *)(lVar13 + 0x24) = in_stack_000000d8;
                    *(int *)(lVar13 + 0x30) = (int)unaff_x19[0x96] + 1;
                    if (((int)unaff_x19[99] != 0xff) ||
                       (uVar9 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar9 & 1) == 0))
                    goto LAB_0354d0cc;
                    lVar13 = unaff_x19[0xdb];
                    if (lVar13 != 0) {
                      (**(code **)(lVar13 + 0x18))
                                (*(undefined8 *)(lVar13 + 0x40),*unaff_x22,
                                 *(undefined8 *)(lVar13 + 0x28));
                    }
                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                      if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0))
                      goto LAB_0354fbf4;
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      if (*(int *)(lVar13 + 0x18) == 0)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      FUN_03596b20(lVar13 + 0x20,1,0);
                    }
                    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
                    FUN_036aa790(unaff_x19[0x74],0);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0)) goto LAB_0354fbf4;
                    if (*(int *)(lVar13 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
                    FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x30),0);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0)) goto LAB_0354fbf4;
                    if (*(int *)(lVar13 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
                    FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x48),0);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0)) goto LAB_0354fbf4;
                    if (*(int *)(lVar13 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
                    FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x50),0);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar13 = *(long *)(unaff_x19[0x6d] + 0x60), lVar13 == 0)) goto LAB_0354fbf4;
                    if (*(int *)(lVar13 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar13 + 0x58),0);
                    if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
                    FUN_036aa280(unaff_x19[0x74],0);
                    lVar13 = *unaff_x22;
                    if (lVar13 == 0) goto LAB_0354fbf4;
                    lVar20 = 0;
                    lVar17 = 0;
                    goto LAB_0354f97c;
                  }
                  if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x50), lVar13 == 0))
                  goto LAB_0354fbf4;
                  in_stack_00000108 = (long)(int)in_stack_00000170;
                  lVar17 = unaff_x29 + in_stack_00000108 * unaff_x23;
                  in_stack_00000180 = *(uint *)(lVar17 + 100);
                  if (*(uint *)(lVar13 + 0x18) <= in_stack_00000180)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  in_stack_00000110 = *(long *)(lVar17 + 0x38);
                  unaff_x28 = (long)(int)in_stack_00000180;
                  lVar13 = lVar13 + unaff_x28 * 0x5c;
                  uVar19 = *(uint *)(lVar13 + 0x68);
                  unaff_w27 = (uint)*(ushort *)(lVar17 + 0x20);
                  uVar22 = *(uint *)(lVar13 + 0x3c);
                  in_stack_000000e8 = (long)(int)uVar22;
                  iVar2 = *(int *)(lVar13 + 0x20);
                  iVar7 = *(int *)(lVar13 + 0x28);
                  iVar8 = *(int *)(lVar13 + 0x2c);
                  fVar27 = *(float *)(lVar13 + 0x4c);
                  in_stack_00000128 = (long)*(int *)(lVar13 + 0x40);
                  fVar25 = *(float *)(lVar13 + 0x54);
                  fVar23 = *(float *)(lVar13 + 0x58);
                  fVar31 = *(float *)(lVar13 + 0x5c);
                  fVar32 = *(float *)(lVar13 + 0x60);
                  fVar30 = *(float *)(lVar13 + 0x6c);
                  fVar33 = *(float *)(lVar13 + 0x70);
                  fVar24 = *(float *)(lVar13 + 0x74);
                  fVar28 = *(float *)(lVar13 + 0x78);
                  if ((int)uVar19 < 9) {
                    switch(uVar19) {
                    case 1:
                      if ((char)unaff_x19[0x1e] == '\0') {
                        in_stack_000000f8._4_4_ = fVar32 + 0.0;
                      }
                      else {
                        in_stack_000000f8._4_4_ = 0.0 - fVar23;
                      }
                      break;
                    case 2:
LAB_0354d968:
                      in_stack_000000f8._4_4_ = (fVar32 + fVar31 * 0.5) - fVar23 * 0.5;
                      break;
                    default:
                      goto switchD_0354d8a4_caseD_3;
                    case 4:
                      in_stack_000000f8._4_4_ = (fVar31 + fVar32) - fVar23;
                      if ((char)unaff_x19[0x1e] != '\0') {
                        in_stack_000000f8._4_4_ = fVar31 + fVar32;
                      }
                      break;
                    case 8:
                      goto switchD_0354d8a4_caseD_8;
                    }
LAB_0354d9d8:
                    in_stack_000000f0 = 0;
                  }
                  else if (uVar19 == 0x10) {
switchD_0354d8a4_caseD_8:
                    if (unaff_w27 < 0xad) {
                      if ((unaff_w27 != 3) && (unaff_w27 != 10)) {
FUN_0354d8fc:
                        if (*(uint *)(unaff_x29 + 0x18) <= uVar22)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar3 = *(undefined2 *)
                                 (in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x20);
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar9 = FUN_026b8cc4(uVar3,0);
                        if ((uVar9 & 1) == 0) {
                          bVar1 = (int)in_stack_00000180 < (int)unaff_x19[0x95];
                        }
                        else {
                          bVar1 = false;
                        }
                        if ((fVar23 <= fVar31) && (!bVar1 && uVar19 >> 4 == 0)) {
                          in_stack_000000f8._4_4_ = fVar32;
                          if ((char)unaff_x19[0x1e] != '\0') {
                            in_stack_000000f8._4_4_ = fVar31 + fVar32;
                          }
                          goto LAB_0354d9d8;
                        }
                        if (((uVar16 == 1) || (in_stack_00000180 != uVar12)) ||
                           (in_stack_00000170 == *(uint *)((long)unaff_x19 + 0x324))) {
                          in_stack_000000f8._4_4_ = fVar32;
                          if ((char)unaff_x19[0x1e] != '\0') {
                            in_stack_000000f8._4_4_ = fVar31 + fVar32;
                          }
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uStack0000000000000030 = FUN_026b97f8(unaff_w27,0);
                          in_stack_000000f0 = 0;
                        }
                        else {
                          cVar11 = (char)unaff_x19[0x1e];
                          fVar32 = -fVar23;
                          if (cVar11 != '\0') {
                            fVar32 = fVar23;
                          }
                          if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar22)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          iVar8 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 +
                                                0x194) +
                                  (-iVar2 - (uStack0000000000000030 & 1)) + iVar8 + -1;
                          if (iVar8 < 1) {
                            fVar23 = 1.0;
                            iVar8 = 1;
                          }
                          else {
                            fVar23 = *(float *)((long)unaff_x19 + 0x2dc);
                          }
                          if (unaff_w27 == 9) {
LAB_0354f76c:
                            fVar23 = 1.0 - fVar23;
                          }
                          else {
                            if (unaff_w27 != 0xa0) {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar9 = FUN_026b97f8(unaff_w27,0);
                              cVar11 = (char)unaff_x19[0x1e];
                              if ((uVar9 & 1) != 0) goto LAB_0354f76c;
                            }
                            iVar8 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar7;
                          }
                          fVar23 = ((fVar31 + fVar32) * fVar23) / (float)iVar8;
                          if (cVar11 == '\0') {
                            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar23;
                            in_stack_000000f0 =
                                 CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                                          (float)in_stack_000000f0 + 0.0);
                          }
                          else {
                            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar23;
                          }
                        }
                      }
                    }
                    else if (((unaff_w27 != 0xad) && (unaff_w27 != 0x200b)) && (unaff_w27 != 0x2060)
                            ) goto FUN_0354d8fc;
                  }
                  else if (uVar19 == 0x20) {
                    fVar23 = fVar30 + fVar24;
                    goto LAB_0354d968;
                  }
switchD_0354d8a4_caseD_3:
                  uVar19 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
                  if (uVar19 <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar13 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                  fVar31 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
                  in_stack_00000150 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
                  fVar23 = (float)((ulong)in_stack_000000b8 >> 0x20) +
                           (float)((ulong)in_stack_000000f0 >> 0x20);
                  if (*(char *)(lVar13 + 0x194) == '\0') goto LAB_0354e1d0;
                  iVar7 = *(int *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0x2c);
                  if (iVar7 != 0) goto LAB_0354e05c;
                  fVar32 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180
                                 ,1.0);
                  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
                  case 0:
                    lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                    *(undefined4 *)(lVar17 + 0x84) = 0;
                    *(undefined4 *)(lVar17 + 0xac) = 0;
                    *(undefined4 *)(lVar17 + 0xd4) = 0x3f800000;
                    fVar32 = 1.0;
                    break;
                  case 1:
                    fVar28 = *(float *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0x70);
                    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
                      lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                      fVar24 = (in_stack_000000f8._4_4_ + fVar28) -
                               *(float *)(in_stack_00000078 + 0x230);
                      fVar28 = *(float *)(in_stack_00000078 + 0x238) -
                               *(float *)(in_stack_00000078 + 0x230);
                      goto LAB_0354db24;
                    }
                    lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                    fVar24 = fVar24 - fVar30;
                    *(float *)(lVar17 + 0x84) = fVar32 + (fVar28 - fVar30) / fVar24;
                    *(float *)(lVar17 + 0xac) =
                         fVar32 + (*(float *)(lVar17 + 0x98) - fVar30) / fVar24;
                    *(float *)(lVar17 + 0xd4) =
                         fVar32 + (*(float *)(lVar17 + 0xc0) - fVar30) / fVar24;
                    fVar32 = fVar32 + (*(float *)(lVar17 + 0xe8) - fVar30) / fVar24;
                    break;
                  case 2:
                    lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                    fVar28 = *(float *)(in_stack_00000078 + 0x238) -
                             *(float *)(in_stack_00000078 + 0x230);
                    fVar24 = (in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0x70)) -
                             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
                    *(float *)(lVar17 + 0x84) = fVar32 + fVar24 / fVar28;
                    *(float *)(lVar17 + 0xac) =
                         fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0x98)) -
                                  *(float *)(in_stack_00000078 + 0x230)) /
                                  (*(float *)(in_stack_00000078 + 0x238) -
                                  *(float *)(in_stack_00000078 + 0x230));
                    *(float *)(lVar17 + 0xd4) =
                         fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0xc0)) -
                                  *(float *)(in_stack_00000078 + 0x230)) /
                                  (*(float *)(in_stack_00000078 + 0x238) -
                                  *(float *)(in_stack_00000078 + 0x230));
                    fVar32 = fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0xe8)) -
                                      *(float *)(in_stack_00000078 + 0x230)) /
                                      (*(float *)(in_stack_00000078 + 0x238) -
                                      *(float *)(in_stack_00000078 + 0x230));
                    break;
                  case 3:
                    switch((int)unaff_x19[0x62]) {
                    case 0:
                      lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                      *(undefined4 *)(lVar17 + 0x88) = 0;
                      *(undefined4 *)(lVar17 + 0xb0) = 0x3f800000;
                      *(undefined4 *)(lVar17 + 0xd8) = 0;
                      *(undefined4 *)(lVar17 + 0x100) = 0x3f800000;
                      break;
                    case 1:
                      lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                      fVar28 = fVar28 - fVar33;
                      fVar24 = fVar32 + (*(float *)(lVar17 + 0x74) - fVar33) / fVar28;
                      fVar28 = fVar32 + (*(float *)(lVar17 + 0x9c) - fVar33) / fVar28;
                      *(float *)(lVar17 + 0x88) = fVar24;
                      *(float *)(lVar17 + 0xb0) = fVar28;
                      *(float *)(lVar17 + 0xd8) = fVar24;
                      *(float *)(lVar17 + 0x100) = fVar28;
                      break;
                    case 2:
                      lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                      fVar24 = fVar32 + (*(float *)(lVar17 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c)
                                        );
                      *(float *)(lVar17 + 0x88) = fVar24;
                      fVar28 = *(float *)(unaff_x19 + 0x9c);
                      fVar30 = *(float *)(unaff_x19 + 0x9d);
                      *(float *)(lVar17 + 0xd8) = fVar24;
                      fVar24 = fVar32 + (*(float *)(lVar17 + 0x9c) - fVar28) / (fVar30 - fVar28);
                      *(float *)(lVar17 + 0xb0) = fVar24;
                      *(float *)(lVar17 + 0x100) = fVar24;
                      break;
                    case 3:
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
                      uVar19 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
                    }
                    if (uVar19 <= in_stack_00000170)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                    fVar24 = *(float *)(lVar17 + 0x15c);
                    fVar28 = (1.0 - (*(float *)(lVar17 + 0x88) + *(float *)(lVar17 + 0xb0)) * fVar24
                             ) * 0.5;
                    fVar30 = fVar32 + *(float *)(lVar17 + 0x88) * fVar24 + fVar28;
                    fVar32 = fVar32 + fVar28 + *(float *)(lVar17 + 0xb0) * fVar24;
                    *(float *)(lVar17 + 0x84) = fVar30;
                    *(float *)(lVar17 + 0xac) = fVar30;
                    *(float *)(lVar17 + 0xd4) = fVar32;
                    break;
                  default:
                    goto switchD_0354da88_default;
                  }
                  *(float *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0xfc) = fVar32;
switchD_0354da88_default:
                  switch((int)unaff_x19[0x62]) {
                  case 0:
                    if (uVar19 <= in_stack_00000170)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                    *(undefined4 *)(lVar17 + 0x88) = 0;
                    *(undefined4 *)(lVar17 + 0xb0) = 0x3f800000;
                    *(undefined4 *)(lVar17 + 0xd8) = 0x3f800000;
                    *(undefined4 *)(lVar17 + 0x100) = 0;
                    break;
                  case 1:
                    if (in_stack_00000170 < uVar19) {
                      lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                      fVar27 = fVar27 - fVar25;
                      fVar24 = (*(float *)(lVar17 + 0x74) - fVar25) / fVar27;
                      fVar27 = (*(float *)(lVar17 + 0x9c) - fVar25) / fVar27;
                      *(float *)(lVar17 + 0x88) = fVar24;
                      goto LAB_0354de84;
                    }
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  case 2:
                    if (uVar19 <= in_stack_00000170)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                    fVar24 = (*(float *)(lVar17 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
                    *(float *)(lVar17 + 0x88) = fVar24;
                    fVar27 = (*(float *)(lVar17 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
                             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
                    *(float *)(lVar17 + 0xb0) = fVar27;
                    *(float *)(lVar17 + 0xd8) = fVar27;
                    *(float *)(lVar17 + 0x100) = fVar24;
                    break;
                  case 3:
                    if (uVar19 <= in_stack_00000170)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                    fVar28 = *(float *)(lVar17 + 0x15c);
                    fVar27 = (1.0 - (*(float *)(lVar17 + 0x84) + *(float *)(lVar17 + 0xd4)) / fVar28
                             ) * 0.5;
                    fVar24 = *(float *)(lVar17 + 0x84) / fVar28 + fVar27;
                    fVar27 = fVar27 + *(float *)(lVar17 + 0xd4) / fVar28;
                    *(float *)(lVar17 + 0x88) = fVar24;
                    *(float *)(lVar17 + 0xb0) = fVar27;
                    *(float *)(lVar17 + 0x100) = fVar24;
                    *(float *)(lVar17 + 0xd8) = fVar27;
                  }
                  if (uVar19 <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                  unaff_s14 = fStack0000000000000058 * *(float *)(lVar17 + 0x160) *
                              (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
                  if ((*(char *)(lVar17 + 0x5c) == '\0') &&
                     ((*(byte *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 400) & 1) != 0)) {
                    unaff_s14 = -unaff_s14;
                  }
                  lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                  fVar27 = *(float *)(lVar17 + 0x88);
                  fVar28 = *(float *)(lVar17 + 0x84);
                  fVar24 = -2.1474836e+09;
                  if (fVar28 != INFINITY) {
                    fVar24 = (float)(int)fVar28;
                  }
                  fVar30 = *(float *)(lVar17 + 0xd4);
                  fVar32 = *(float *)(lVar17 + 0xd8);
                  fVar25 = -2.1474836e+09;
                  if (fVar27 != INFINITY) {
                    fVar25 = (float)(int)fVar27;
                  }
                  uVar26 = FUN_03591d3c(fVar28 - fVar24,fVar27 - fVar25);
                  *(undefined4 *)(lVar17 + 0x84) = uVar26;
                  if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  fVar32 = fVar32 - fVar25;
                  *(float *)(lVar17 + 0x88) = unaff_s14;
                  uVar26 = FUN_03591d3c(fVar28 - fVar24,fVar32);
                  *(undefined4 *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0xac) = uVar26;
                  if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  fVar30 = fVar30 - fVar24;
                  *(float *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0xb0) = unaff_s14;
                  fVar24 = (float)FUN_03591d3c(fVar30,fVar32);
                  *(float *)(lVar17 + 0xd4) = fVar24;
                  if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  *(float *)(lVar17 + 0xd8) = unaff_s14;
                  uVar26 = FUN_03591d3c(fVar30,fVar27 - fVar25);
                  *(undefined4 *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0xfc) = uVar26;
                  uVar19 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
                  if (uVar19 <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  *(float *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0x100) = unaff_s14;
                  unaff_x22 = in_stack_00000050;
LAB_0354e05c:
                  if (((int)in_stack_00000170 < (int)unaff_x19[0x65]) &&
                     (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
                    if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) &&
                       ((int)unaff_x19[0x5c] != 5)) {
                      if (uVar19 <= in_stack_00000170)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
                      lVar13 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                      *(ulong *)(lVar13 + 0x70) =
                           CONCAT44(in_stack_00000150 +
                                    (float)((ulong)*(undefined8 *)(lVar13 + 0x70) >> 0x20),
                                    fVar31 + (float)*(undefined8 *)(lVar13 + 0x70));
                      *(float *)(lVar13 + 0x78) = fVar23 + *(float *)(lVar13 + 0x78);
                      *(ulong *)(lVar13 + 0x98) =
                           CONCAT44(in_stack_00000150 +
                                    (float)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 0x20),
                                    fVar31 + (float)*(undefined8 *)(lVar13 + 0x98));
                      *(float *)(lVar13 + 0xa0) = fVar23 + *(float *)(lVar13 + 0xa0);
                      *(ulong *)(lVar13 + 0xc0) =
                           CONCAT44(in_stack_00000150 +
                                    (float)((ulong)*(undefined8 *)(lVar13 + 0xc0) >> 0x20),
                                    fVar31 + (float)*(undefined8 *)(lVar13 + 0xc0));
                      *(float *)(lVar13 + 200) = fVar23 + *(float *)(lVar13 + 200);
                      *(ulong *)(lVar13 + 0xe8) =
                           CONCAT44(in_stack_00000150 +
                                    (float)((ulong)*(undefined8 *)(lVar13 + 0xe8) >> 0x20),
                                    fVar31 + (float)*(undefined8 *)(lVar13 + 0xe8));
                      *(float *)(lVar13 + 0xf0) = fVar23 + *(float *)(lVar13 + 0xf0);
                      goto LAB_0354e184;
                    }
                    if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) &&
                       ((int)unaff_x19[0x5c] == 5)) {
                      if (in_stack_00000170 < uVar19) {
                        if (*(int *)(in_stack_000000c8 + in_stack_00000108 * 0x178 + 0x68) ==
                            iStack0000000000000034) goto LAB_0354f0d4;
                        goto LAB_0354e0cc;
                      }
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    }
                  }
LAB_0354e0cc:
                  if (uVar19 <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac();
                    DAT_0411f172 = '\x01';
                    uVar19 = *(uint *)(in_stack_000000c8 + 0x18);
                  }
                  puVar5 = PTR_DAT_03cbded8;
                  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                  lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                  *(undefined8 *)(lVar17 + 0x70) =
                       **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  *(undefined4 *)(lVar17 + 0x78) = uVar26;
                  if (uVar19 <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                  lVar17 = in_stack_000000c8 + in_stack_00000108 * 0x178;
                  *(undefined8 *)(lVar17 + 0x98) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
                  *(undefined4 *)(lVar17 + 0xa0) = uVar26;
                  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                  *(undefined8 *)(lVar17 + 0xc0) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
                  *(undefined4 *)(lVar17 + 200) = uVar26;
                  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                  *(undefined8 *)(lVar17 + 0xe8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
                  *(undefined4 *)(lVar17 + 0xf0) = uVar26;
                  *(undefined1 *)(lVar13 + 0x194) = 0;
LAB_0354e184:
                  if (iVar7 == 0) {
                    pcVar14 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
                    (*pcVar14)();
                  }
                  else if (iVar7 == 1) {
                    pcVar14 = *(code **)(*unaff_x19 + 0x8c8);
                    goto LAB_0354e1b4;
                  }
LAB_0354e1d0:
                  unaff_x23 = 0x178;
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar13 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar13 = lVar13 + in_stack_00000108 * 0x178;
                  uVar18 = *(undefined8 *)(lVar13 + 0x11c);
                  *(undefined8 *)(lVar13 + 0x11c) =
                       CONCAT44(in_stack_00000150 + (float)((ulong)uVar18 >> 0x20),
                                fVar31 + (float)uVar18);
                  *(float *)(lVar13 + 0x124) = fVar23 + *(float *)(lVar13 + 0x124);
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar13 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar13 = lVar13 + in_stack_00000108 * 0x178;
                  *(ulong *)(lVar13 + 0x110) =
                       CONCAT44(in_stack_00000150 +
                                (float)((ulong)*(undefined8 *)(lVar13 + 0x110) >> 0x20),
                                fVar31 + (float)*(undefined8 *)(lVar13 + 0x110));
                  *(float *)(lVar13 + 0x118) = fVar23 + *(float *)(lVar13 + 0x118);
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar13 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar13 = lVar13 + in_stack_00000108 * 0x178;
                  *(ulong *)(lVar13 + 0x128) =
                       CONCAT44(in_stack_00000150 +
                                (float)((ulong)*(undefined8 *)(lVar13 + 0x128) >> 0x20),
                                fVar31 + (float)*(undefined8 *)(lVar13 + 0x128));
                  *(float *)(lVar13 + 0x130) = fVar23 + *(float *)(lVar13 + 0x130);
                  if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x38), lVar13 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar13 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar13 = lVar13 + in_stack_00000108 * 0x178;
                  *(float *)(lVar13 + 0x134) = fVar31 + *(float *)(lVar13 + 0x134);
                  *(ulong *)(lVar13 + 0x138) =
                       CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar13 + 0x138) >> 0x20),
                                in_stack_00000150 + (float)*(undefined8 *)(lVar13 + 0x138));
                  lVar13 = *unaff_x22;
                  if ((lVar13 == 0) || (lVar17 = *(long *)(lVar13 + 0x38), lVar17 == 0))
                  goto LAB_0354fbf4;
                  uVar19 = *(uint *)(lVar17 + 0x18);
                  if (uVar19 <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar20 = lVar17 + in_stack_00000108 * 0x178;
                  *(float *)(lVar20 + 0x150) = in_stack_00000150 + *(float *)(lVar20 + 0x150);
                  *(ulong *)(lVar20 + 0x140) =
                       CONCAT44(fVar31 + (float)((ulong)*(undefined8 *)(lVar20 + 0x140) >> 0x20),
                                fVar31 + (float)*(undefined8 *)(lVar20 + 0x140));
                  *(ulong *)(lVar20 + 0x148) =
                       CONCAT44(in_stack_00000150 +
                                (float)((ulong)*(undefined8 *)(lVar20 + 0x148) >> 0x20),
                                in_stack_00000150 + (float)*(undefined8 *)(lVar20 + 0x148));
                  if (in_stack_00000180 == uVar12) {
                    uVar12 = *in_stack_00000090 - 1;
                    if (in_stack_00000170 == uVar12) goto LAB_0354e3ec;
                  }
                  else {
                    lVar13 = *(long *)(lVar13 + 0x50);
                    if (lVar13 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar20 = (long)(int)uVar12;
                    lVar15 = lVar13 + lVar20 * 0x5c;
                    fVar23 = in_stack_00000150 + *(float *)(lVar15 + 0x54);
                    *(ulong *)(lVar15 + 0x4c) =
                         CONCAT44(in_stack_00000150 +
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0x4c) >> 0x20),
                                  in_stack_00000150 + (float)*(undefined8 *)(lVar15 + 0x4c));
                    *(float *)(lVar15 + 0x54) = fVar23;
                    *(float *)(lVar15 + 0x58) = fVar31 + *(float *)(lVar15 + 0x58);
                    if (uVar19 <= *(uint *)(lVar15 + 0x34))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    uVar26 = *(undefined4 *)
                              (lVar17 + (long)(int)*(uint *)(lVar15 + 0x34) * 0x178 + 0x11c);
                    lVar13 = lVar13 + lVar20 * 0x5c;
                    *(float *)(lVar13 + 0x70) = fVar23;
                    *(undefined4 *)(lVar13 + 0x6c) = uVar26;
                    lVar13 = *unaff_x22;
                    if ((lVar13 == 0) || (lVar17 = *(long *)(lVar13 + 0x50), lVar17 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar17 + 0x18) <= uVar12)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar13 = *(long *)(lVar13 + 0x38);
                    if (lVar13 == 0) goto LAB_0354fbf4;
                    uVar12 = *(uint *)(lVar17 + lVar20 * 0x5c + 0x40);
                    if (*(uint *)(lVar13 + 0x18) <= uVar12)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar17 = lVar17 + lVar20 * 0x5c;
                    *(undefined4 *)(lVar17 + 0x74) =
                         *(undefined4 *)(lVar13 + (long)(int)uVar12 * 0x178 + 0x128);
                    *(undefined4 *)(lVar17 + 0x78) = *(undefined4 *)(lVar17 + 0x4c);
                    uVar12 = *in_stack_00000090 - 1;
LAB_0354e3ec:
                    if (in_stack_00000170 == uVar12) {
                      lVar13 = *unaff_x22;
                      if ((lVar13 == 0) || (lVar17 = *(long *)(lVar13 + 0x50), lVar17 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= in_stack_00000180)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar20 = lVar17 + unaff_x28 * 0x5c;
                      fVar23 = in_stack_00000150 + *(float *)(lVar20 + 0x54);
                      *(ulong *)(lVar20 + 0x4c) =
                           CONCAT44(in_stack_00000150 +
                                    (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                                    in_stack_00000150 + (float)*(undefined8 *)(lVar20 + 0x4c));
                      *(float *)(lVar20 + 0x54) = fVar23;
                      *(float *)(lVar20 + 0x58) = fVar31 + *(float *)(lVar20 + 0x58);
                      lVar13 = *(long *)(lVar13 + 0x38);
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(lVar20 + 0x34))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar26 = *(undefined4 *)
                                (lVar13 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
                      lVar17 = lVar17 + unaff_x28 * 0x5c;
                      *(float *)(lVar17 + 0x70) = fVar23;
                      *(undefined4 *)(lVar17 + 0x6c) = uVar26;
                      lVar13 = *unaff_x22;
                      if ((lVar13 == 0) || (lVar17 = *(long *)(lVar13 + 0x50), lVar17 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= in_stack_00000180)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar13 = *(long *)(lVar13 + 0x38);
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      uVar12 = *(uint *)(lVar17 + unaff_x28 * 0x5c + 0x40);
                      if (*(uint *)(lVar13 + 0x18) <= uVar12)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = lVar17 + unaff_x28 * 0x5c;
                      *(undefined4 *)(lVar17 + 0x74) =
                           *(undefined4 *)(lVar13 + (long)(int)uVar12 * 0x178 + 0x128);
                      *(undefined4 *)(lVar17 + 0x78) = *(undefined4 *)(lVar17 + 0x4c);
                    }
                  }
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar9 = FUN_026b82c4(unaff_w27,0);
                  unaff_w24 = in_stack_00000170;
                  in_stack_00000138 = unaff_x26;
                  in_stack_00000178 = unaff_w27;
                  unaff_w21 = in_stack_00000180;
                  if (((((uVar9 & 1) == 0) && (1 < unaff_w27 - 0x2010)) && (unaff_w27 != 0xad)) &&
                     (unaff_w27 != 0x2d)) {
                    if (bVar4) {
                      unaff_x25 = in_stack_00000090;
                      if (((uVar16 != 1) &&
                          (in_w8 = *(uint *)(in_stack_000000c8 + 0x18),
                          (int)in_stack_00000170 < (int)(in_w8 - 1))) &&
                         ((int)in_stack_00000170 < *in_stack_00000090)) {
                        unaff_x29 = in_stack_000000c8;
                        if (unaff_w27 == 0x2019) goto LAB_0354e7ec;
                        in_ZR = unaff_w27 == 0x27;
                        in_stack_00000170 = uVar16;
                        goto code_r0x0354e7e8;
                      }
                      goto LAB_0354e900;
                    }
                    if (uVar16 == 1) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = FUN_026b81f8(unaff_w27,0);
                      unaff_x25 = in_stack_00000090;
                      if ((uVar9 & 1) == 0) goto LAB_0354e900;
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = FUN_026b63d8(unaff_w27,0);
                      if (((unaff_w27 == 0x200b) || ((uVar9 & 1) != 0)) || (*in_stack_00000090 == 1)
                         ) goto LAB_0354e900;
                    }
                    bVar4 = false;
                    unaff_x25 = in_stack_00000090;
                    unaff_x29 = in_stack_000000c8;
                    in_stack_00000170 = uVar16;
                    uVar12 = in_stack_00000180;
                  }
                  else {
                    if (!bVar4) {
                      in_stack_00000168._4_4_ = in_stack_00000170;
                    }
                    unaff_x25 = in_stack_00000090;
                    unaff_x29 = in_stack_000000c8;
                    if (in_stack_00000170 == *in_stack_00000090 - 1U) {
                      lVar13 = *unaff_x22;
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      lVar17 = *(long *)(lVar13 + 0x40);
                      if (lVar17 == 0) goto LAB_0354fbf4;
                      uVar12 = *(uint *)(lVar13 + 0x24);
                      iVar7 = *(int *)(lVar17 + 0x18);
                      if (iVar7 < (int)(uVar12 + 1)) {
                        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_01ff025c((long *)(lVar13 + 0x40),iVar7 + 1,
                                     *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                        lVar13 = *unaff_x22;
                        if (lVar13 == 0) goto LAB_0354fbf4;
                      }
                      lVar13 = *(long *)(lVar13 + 0x40);
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      unaff_x23 = 0x178;
                      if (*(uint *)(lVar13 + 0x18) <= uVar12)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar13 = lVar13 + (long)(int)uVar12 * 0x18;
                      *(long **)(lVar13 + 0x20) = unaff_x19;
                      *(uint *)(lVar13 + 0x28) = in_stack_00000168._4_4_;
                      *(uint *)(lVar13 + 0x2c) = in_stack_00000170;
                      *(uint *)(lVar13 + 0x30) = uVar16 - in_stack_00000168._4_4_;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar13 = unaff_x19[0x6d];
                      if (lVar13 == 0) goto LAB_0354fbf4;
                      lVar17 = *(long *)(lVar13 + 0x50);
                      *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) + 1;
                      if (lVar17 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar17 + 0x18) <= in_stack_00000180)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar17 = lVar17 + unaff_x28 * 0x5c;
                      in_stack_000000d8 = in_stack_000000d8 + 1;
                      *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
                    }
LAB_0354e610:
                    in_stack_00000170 = uVar16;
                    bVar4 = true;
                    uVar12 = in_stack_00000180;
                    in_stack_00000180 = unaff_w21;
                  }
                  goto LAB_0354e618;
                }
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              }
            }
            goto LAB_0354fbf4;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
      }
    }
    goto LAB_0354fbf4;
  }
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
  while( true ) {
    lVar13 = *unaff_x22;
    lVar17 = lVar17 + 1;
    lVar20 = lVar20 + 0x50;
    if (lVar13 == 0) break;
LAB_0354f97c:
    uVar9 = lVar17 + 1;
    if ((long)*(int *)(lVar13 + 0x34) <= (long)uVar9) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar13 = *(long *)(lVar13 + 0x60);
    if (lVar13 == 0) break;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar9)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar13 + lVar20 + 0x70,0);
    lVar13 = unaff_x19[0xe1];
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar9)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar18 = *(undefined8 *)(lVar13 + lVar17 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_036d35a8(uVar18,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x60), lVar13 == 0)) break;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar9)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        FUN_03596b20(lVar13 + lVar20 + 0x70,1,0);
      }
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = FUN_0359d5ac(lVar13,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar13 == 0) break;
      FUN_036a460c(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0x80),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = FUN_0359d5ac(lVar13,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar13 == 0) break;
      FUN_036a4810(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0x98),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = FUN_0359d5ac(lVar13,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar13 == 0) break;
      FUN_036a48bc(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0xa0),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x28);
      if (lVar13 == 0) break;
      lVar13 = FUN_0359d5ac(lVar13,0);
      if ((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x60), lVar15 == 0)) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar13 == 0) break;
      FUN_036a4e24(lVar13,*(undefined8 *)(lVar15 + lVar20 + 0xa8),0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x28);
      if ((lVar13 == 0) || (lVar13 = FUN_0359d5ac(lVar13,0), lVar13 == 0)) break;
      FUN_036aa280(lVar13,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


