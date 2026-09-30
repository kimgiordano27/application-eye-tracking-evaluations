/*
FUNCTION_NAME: UnityEngine.AndroidReflection$$SetNativeExceptionOnProxy
ENTRY_POINT: 0354bf60
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


void UnityEngine_AndroidReflection__SetNativeExceptionOnProxy(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  undefined1 uVar20;
  char cVar21;
  long lVar22;
  undefined4 *puVar23;
  uint uVar24;
  float *pfVar25;
  long lVar26;
  code *pcVar27;
  uint uVar28;
  float *pfVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar35;
  long *unaff_x22;
  byte unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar36;
  long unaff_x26;
  long lVar37;
  long lVar38;
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
  float fVar49;
  ulong uVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulong unaff_d13;
  undefined4 uVar59;
  float fVar60;
  undefined1 auVar61 [16];
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
  float in_stack_00000128;
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
  char in_stack_000017e4;
  float in_stack_000017e8;
  uint in_stack_000017ec;
  
code_r0x0354bf60:
  fVar45 = (float)thunk_FUN_036bc400(param_1,param_2);
LAB_0354bf70:
  fVar54 = *(float *)(unaff_x19 + 200);
  fVar46 = (float)FUN_03776cb4(&stack0x000017a0,0);
  if (unaff_x19[0x20] != 0) {
    fVar49 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
    fVar54 = fVar54 + fVar49 * (*(float *)((long)unaff_x19 + 0x2ac) +
                               (float)unaff_d13 * (in_stack_00000128 + fVar45 * fVar46) +
                               fStack00000000000000d4 *
                               (fStack00000000000000d0 +
                               in_stack_00000138 + *(float *)(unaff_x19[0x20] + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar54;
    uVar48 = extraout_x1_14;
joined_r0x0354bfe8:
    if ((in_stack_000017ec != 0x200b) && (uVar50 = (ulong)(uint)fVar49, unaff_w21 == 0))
    goto LAB_0354c004;
    fVar45 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    uVar50 = (ulong)(uint)fVar45;
    fVar54 = fVar54 + fVar45;
LAB_0354c000:
    *(float *)(unaff_x19 + 200) = fVar54;
LAB_0354c004:
    lVar22 = *unaff_x22;
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
    uVar13 = *unaff_x20;
    uVar24 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar24 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(float *)(lVar26 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar54;
    iVar14 = (int)unaff_x24;
    uVar30 = in_stack_000017ec;
    if ((int)in_stack_000017ec < 0xd) {
      if ((in_stack_000017ec - 10 < 2) || (in_stack_000017ec == 3)) goto LAB_0354c060;
LAB_0354c6e8:
      if (((unaff_w23 & in_stack_000017ec == 0x2d) != 0) ||
         ((float)uVar13 == in_stack_00000080._4_4_)) goto LAB_0354c060;
    }
    else {
      if (1 < in_stack_000017ec - 0x2028) {
        if (in_stack_000017ec != 0xd) goto LAB_0354c6e8;
        uVar50 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar13 != in_stack_00000080._4_4_) goto LAB_0354c704;
      }
LAB_0354c060:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar45 = *(float *)(unaff_x19 + 0x99);
        fVar54 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdee0,uVar48);
        }
        fVar45 = fVar45 - fVar54;
        if (((fStack0000000000000058 < ABS(fVar45)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar45);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar45;
          *(float *)(unaff_x19 + 0x9b) = fVar45 + *(float *)(unaff_x19 + 0x9b);
          puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)puVar10;
          }
          lVar26 = *(long *)(lVar22 + 0xb8);
          if (*(int *)(lVar26 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar26 + 0x11f0,&stack0x000008b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x000008b0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar22 + 0xb8) + 0x818,0);
            lVar22 = *(long *)(*(long *)puVar10 + 0xb8);
            *(float *)(lVar22 + 0x7bc) = fVar45 + *(float *)(lVar22 + 0x7bc);
            *(float *)(lVar22 + 0x800) = fVar45 + *(float *)(lVar22 + 0x800);
            memcpy(&stack0x000001c0,(void *)(lVar22 + 0x788),0x378);
            FUN_0209b210(lVar22 + 0x11f0,&stack0x000001c0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar46 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar54 = *(float *)((long)unaff_x19 + 0x4cc) - fVar46;
      fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar54 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar45 = fVar54;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar45;
      fVar49 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017e4 == '\0') {
        in_stack_000017e8 = fVar45;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017e4 = '\x01';
      }
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
      uVar13 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar26 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = unaff_x19[0x93];
      lVar18 = lVar26 + (long)(int)uVar13 * 0x5c;
      *(int *)(lVar18 + 0x34) = (int)lVar37;
      uVar24 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar37 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar24 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar24;
      *(uint *)(lVar18 + 0x38) = uVar24;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar12 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar24 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
      *(int *)(lVar18 + 0x40) = iVar12;
      *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar59 = *(undefined4 *)(lVar22 + (long)(int)uVar24 * (long)iVar14 + 0x11c);
      lVar26 = lVar26 + (long)(int)uVar13 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar54;
      *(undefined4 *)(lVar26 + 0x6c) = uVar59;
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar49 = fVar49 - fVar46;
      uVar50 = (ulong)(uint)fVar49;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) =
           *(undefined4 *)
            (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar26 + 0x78) = fVar49;
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0)) goto LAB_0354fbf4;
      lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar37 + lVar18 * 0x5c;
      *(float *)(lVar26 + 0x44) =
           *(float *)(lVar26 + 0x74) - (float)unaff_d13 * in_stack_00000168._4_4_;
      *(float *)(lVar26 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar26 + 0x24) == 1) {
        *(int *)(lVar37 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0))
      goto LAB_0354fbf4;
      lVar38 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar24 = (uint)*(undefined8 *)(lVar26 + 0x18);
      if (uVar24 <= *(uint *)((long)unaff_x19 + 0x4a4))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(char *)(lVar26 + lVar38 * unaff_x24 + 0x194) == '\0') &&
         (lVar38 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar24 <= *(uint *)(unaff_x19 + 0x94)))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + lVar18 * 0x5c;
      fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)
                ) - *(float *)((long)unaff_x19 + 0x2ac));
      fVar45 = -fVar46;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar45 = fVar46;
      }
      *(float *)(lVar37 + 0x58) = *(float *)(lVar26 + lVar38 * unaff_x24 + 0x144) + fVar45;
      *(float *)(lVar37 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar37 + 0x54) = fVar54;
      *(float *)(lVar37 + 0x48) = fStack000000000000005c + (fVar49 - fVar54);
      *(float *)(lVar37 + 0x4c) = fVar49;
      if ((int)in_stack_000017ec < 0x2d) {
        if (in_stack_000017ec - 10 < 2) {
LAB_0354c4a8:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar22 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar12 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar12;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar22 == 0) || (*(long *)(lVar22 + 0x50) == 0)) goto LAB_0354fbf4;
          if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar12) {
            FUN_0358ca18();
            lVar22 = unaff_x19[0x6d];
            if (lVar22 == 0) goto LAB_0354fbf4;
          }
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
            fVar45 = *(float *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
              if ((in_stack_000017ec == 0x2029) || (fVar54 = 0.0, in_stack_000017ec == 10)) {
                fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar20 = 0;
              fVar54 = fVar45 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       in_stack_00000050 *
                       (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar54) +
                       *(float *)(unaff_x19 + 0x9b);
            }
            else {
              if ((in_stack_000017ec == 0x2029) || (fVar54 = 0.0, in_stack_000017ec == 10)) {
                fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar20 = 1;
              fVar54 = *(float *)(unaff_x19 + 0x9b) +
                       *(float *)(unaff_x19 + 0x58) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar54);
            }
            *(float *)(unaff_x19 + 0x9b) = fVar54;
            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar20;
            puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *(long *)puVar10;
            }
            uVar16 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x9a) = fVar45;
            uVar50 = NEON_rev64(uVar16,4);
            unaff_x19[0x99] = uVar50;
            *(float *)(unaff_x19 + 200) =
                 *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
            FUN_0358c4f0();
            FUN_0358c4f0();
            *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
            goto LAB_0354c6b4;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        if (in_stack_000017ec == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
          in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar30 = 3;
        }
      }
      else if ((in_stack_000017ec - 0x2028 < 2) || (in_stack_000017ec == 0x2d)) goto LAB_0354c4a8;
    }
LAB_0354c704:
    uVar13 = *unaff_x20;
    if (uVar24 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(char *)(lVar26 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
      lVar26 = lVar26 + (long)(int)uVar13 * unaff_x24;
      uVar50 = *(ulong *)(lVar26 + 0x11c);
      uVar48 = *(ulong *)(in_stack_00000078 + 0x230);
      *(ulong *)(in_stack_00000078 + 0x230) =
           uVar48 ^ (uVar48 ^ uVar50) &
                    ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar50 >> 0x20)),
                              -(uint)((float)uVar48 < (float)uVar50));
      uVar48 = *(ulong *)(in_stack_00000078 + 0x238);
      uVar50 = *(ulong *)(lVar26 + 0x128);
      *(ulong *)(in_stack_00000078 + 0x238) =
           uVar48 ^ (uVar48 ^ uVar50) &
                    ~CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar48 >> 0x20)),
                              -(uint)((float)uVar50 < (float)uVar48));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar30 || ((1 << (ulong)(uVar30 & 0x1f) & 0x2c00U) == 0)))) {
      lVar26 = *(long *)(lVar22 + 0x58);
      if (lVar26 == 0) goto LAB_0354fbf4;
      iVar12 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar26 + 0x18) < iVar12) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar22 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar22 = *unaff_x22;
        if (lVar22 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar22 + 0x58);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar24 = *(uint *)(unaff_x19 + 0x96);
      lVar37 = (long)(int)uVar24;
      uVar13 = *(uint *)(lVar26 + 0x18);
      if (uVar13 <= uVar24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar26 + lVar37 * 0x14;
      fVar54 = *(float *)(lVar18 + 0x30);
      uVar50 = (ulong)(uint)fVar54;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar54 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar45 = fVar54;
      }
      *(float *)(lVar18 + 0x30) = fVar45;
      uVar30 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar30 == 0 && uVar24 == 0) {
        *(uint *)(lVar26 + (ulong)uVar24 * 0x14 + 0x20) = uVar30;
      }
      else {
        uVar4 = uVar30 - 1;
        if (0 < (int)uVar30) {
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar22 + 0x18) <= uVar4)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (uVar24 != *(uint *)(lVar22 + (ulong)uVar4 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar24 - 1 < uVar13) {
              *(uint *)(lVar26 + 0x20 + (long)(int)(uVar24 - 1) * 0x14 + 4) = uVar4;
              *(uint *)(lVar26 + 0x20 + lVar37 * 0x14) = uVar30;
              goto LAB_0354c780;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
        }
        if ((float)uVar30 == in_stack_00000080._4_4_) {
          *(float *)(lVar26 + lVar37 * 0x14 + 0x24) = in_stack_00000080._4_4_;
        }
      }
    }
LAB_0354c780:
    puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
    if ((unaff_w21 == 0) &&
       (((in_stack_000017ec != 0x2d && (in_stack_000017ec != 0x200b)) && (in_stack_000017ec != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
        if ((bStack0000000000000068 & 1) != 0) goto LAB_0354c910;
        goto LAB_0354cc88;
      }
LAB_0354c87c:
      if (((((0x2bfd < in_stack_000017ec - 0xac01) && (0xfd < in_stack_000017ec - 0x1101)) &&
           (0x1d < in_stack_000017ec - 0xa961)) || (uVar48 = FUN_03597a54(0), (uVar48 & 1) != 0)) &&
         ((((0xed < in_stack_000017ec - 0xff01 && (0x1d < in_stack_000017ec - 0xfe31)) &&
           (0x717d < in_stack_000017ec - 0x2e81)) && (0x1fd < in_stack_000017ec - 0xf901))))
      goto LAB_0354c904;
      lVar22 = FUN_035978e8(0);
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0354fbf4;
      uVar13 = FUN_0219c130(*(long *)(lVar22 + 0x10),&stack0x000008b0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
        in_stack_000008b0 = in_stack_000017ec;
        if ((uVar13 & 1) == 0) {
LAB_0354cc08:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          bStack0000000000000068 = 0;
          goto LAB_0354cc90;
        }
LAB_0354cb6c:
        if ((uint)unaff_x26 != unaff_w25 || ((bStack0000000000000068 ^ 0xff) & 1) != 0)
        goto LAB_0354cc90;
        if (unaff_w21 == 0) goto LAB_0354cbc0;
        goto LAB_0354cb88;
      }
      lVar22 = FUN_035978e8(0);
      if (((lVar22 == 0) || (*unaff_x22 == 0)) ||
         (lVar26 = *(long *)(*unaff_x22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*(long *)(lVar22 + 0x18) == 0) goto LAB_0354fbf4;
      in_stack_000008b0 =
           (uint)*(ushort *)(lVar26 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20);
      uVar48 = FUN_0219c130(*(long *)(lVar22 + 0x18),&stack0x000008b0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((uVar13 & 1) != 0) goto LAB_0354cb6c;
      if ((uVar48 & 1) == 0) goto LAB_0354cc08;
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
          *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe78) = 0xffffffff;
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
    uVar13 = in_stack_000017ec;
LAB_03549564:
    fVar45 = (float)unaff_d13;
    in_stack_000017b8 = in_stack_000017b8 + 1;
    lVar22 = unaff_x19[0x8f];
    if (lVar22 != 0) {
      if ((int)in_stack_000017b8 < (int)*(uint *)(lVar22 + 0x18)) {
        if (*(uint *)(lVar22 + 0x18) <= in_stack_000017b8)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        in_stack_000017ec = *(uint *)(lVar22 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
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
        if ((*unaff_x22 != 0) && (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar22 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar22 + 0x58);
            unaff_x19[0x20] = *(long *)(lVar22 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
            goto LAB_03549378;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354cf48:
      fVar45 = (float)uVar50;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar45 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar54 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar45 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar46 = (*(float *)((long)unaff_x19 + 0x23c) - fVar45) * 0.5;
          if (fVar46 <= DAT_00d38b84) {
            fVar46 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar45;
          fVar46 = (fVar45 + fVar46) * 20.0 + 0.5;
          fVar45 = DAT_00d38e60;
          if (fVar46 != INFINITY) {
            fVar45 = (float)(int)fVar46 / 20.0;
          }
          if (fVar54 <= fVar45) {
            fVar45 = fVar54;
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
      puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar13 == 3)))) {
        (**(code **)(*unaff_x19 + 0x928))();
        goto LAB_0354d0cc;
      }
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar10;
      }
      plVar36 = (long *)OVRPlugin_Media_TypeInfo;
      lVar22 = **(long **)(lVar22 + 0xb8);
      if (lVar22 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      iVar14 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x60), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_035968e8(lVar22 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar12 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar22 = unaff_x19[0xeb];
      in_stack_000000b8 = (long *)uStack00000000000000f0;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar12 < 0x401) {
        if (iVar12 == 0x100) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar22 + 0x18) < 2)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar16 = *(undefined8 *)(lVar22 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x58), lVar26 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            fVar45 = *(float *)(lVar26 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
          }
          else {
            fVar45 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar22 + 0x2c);
          fVar45 = (0.0 - fVar45) - fStack000000000000001c;
        }
        else if (iVar12 == 0x200) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fStack00000000000000c4 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
          uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar22 + 0x24) +
                            (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x58), lVar22 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar22 = lVar22 + (long)(int)uStack0000000000000034 * 0x14;
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar45 = ((fStack000000000000001c + *(float *)(lVar22 + 0x28) +
                      *(float *)(lVar22 + 0x30)) - fStack0000000000000020) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
            fVar45 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                     fStack0000000000000020) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar12 != 0x400) goto LAB_0354d620;
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*(int *)(lVar22 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar16 = *(undefined8 *)(lVar22 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*unaff_x22 == 0) || (lVar26 = *(long *)(*unaff_x22 + 0x58), lVar26 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000034)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            in_stack_000017e8 = *(float *)(lVar26 + (long)(int)uStack0000000000000034 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar22 + 0x20);
          fVar45 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
        }
LAB_0354d610:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar45);
      }
      else if (iVar12 == 0x800) {
        if (lVar22 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar45 = fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar22 + 0x24) +
                              (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar45;
      }
      else {
        if (iVar12 == 0x1000) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar22 + 0x18) != 1) && (*(int *)(lVar22 + 0x18) != 0)) {
            uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar22 + 0x24) +
                              (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack0000000000000028 + 0.0 +
                 (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            fVar45 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
            goto LAB_0354d610;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        if (iVar12 == 0x2000) {
          if (lVar22 == 0) goto LAB_0354fbf4;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar45 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                         fStack0000000000000020) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar22 + 0x24) +
                                (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + fVar45);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        }
      }
LAB_0354d620:
      lVar22 = FUN_03559490();
      if (lVar22 == 0) goto LAB_0354fbf4;
      FUN_036df824(lVar22,0);
      *(float *)((long)unaff_x19 + 0x6e4) = fVar45;
      uVar59 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar10 = OVRPlugin_Mesh_TypeInfo;
      lVar22 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar10;
      }
      puVar23 = *(undefined4 **)(lVar22 + 0xb8);
      FUN_035683a4(*puVar23,puVar23[1],puVar23[2],puVar23[3],&stack0x000017c0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar22 = *unaff_x22;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar13 = *unaff_x20;
      if ((int)uVar13 < 1) {
        iStack00000000000000d8 = 0;
        iVar14 = 0;
        goto LAB_0354f7f4;
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0354fbf4;
      bVar11 = false;
      bVar9 = false;
      bVar7 = false;
      fStack0000000000000124 = 0.0;
      bVar8 = false;
      iStack00000000000000d8 = 0;
      uStack0000000000000030 = 0;
      in_stack_00000168._4_4_ = 0.0;
      fStack000000000000005c = 0.0;
      lVar26 = 0x2e0;
      fVar46 = 0.0;
      fVar54 = 0.0;
      fStack00000000000000d0 = fStack00000000000000e0;
      fStack00000000000000d4 = fStack00000000000000e4;
      _bStack0000000000000068 = fStack00000000000000e4;
      fStack0000000000000104 =
           *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
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
      uVar24 = 0;
      uVar30 = 1;
      goto LAB_0354d7c0;
    }
  }
  goto LAB_0354fbf4;
LAB_0354bedc:
  fVar45 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
  uVar50 = (ulong)(uint)fVar45;
  fVar54 = fVar54 - fVar45;
  goto LAB_0354c000;
LAB_0354d7c0:
  uVar13 = uVar30 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x50), lVar37 == 0)) goto LAB_0354fbf4;
  lVar38 = (long)(int)uVar13;
  lVar18 = lVar22 + lVar38 * 0x178;
  uVar4 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar37 + 0x18) <= uVar4)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = *(long *)(lVar18 + 0x38);
  lVar34 = (long)(int)uVar4;
  lVar37 = lVar37 + lVar34 * 0x5c;
  uVar35 = *(uint *)(lVar37 + 0x68);
  uVar28 = (uint)*(ushort *)(lVar18 + 0x20);
  uVar5 = *(uint *)(lVar37 + 0x3c);
  iVar2 = *(int *)(lVar37 + 0x20);
  iVar12 = *(int *)(lVar37 + 0x28);
  iVar15 = *(int *)(lVar37 + 0x2c);
  fVar56 = *(float *)(lVar37 + 0x4c);
  uVar6 = *(uint *)(lVar37 + 0x40);
  fVar41 = *(float *)(lVar37 + 0x54);
  fVar49 = *(float *)(lVar37 + 0x58);
  fVar57 = *(float *)(lVar37 + 0x5c);
  fVar40 = *(float *)(lVar37 + 0x60);
  fVar42 = *(float *)(lVar37 + 0x6c);
  fVar43 = *(float *)(lVar37 + 0x70);
  fVar60 = *(float *)(lVar37 + 0x74);
  fVar39 = *(float *)(lVar37 + 0x78);
  if ((int)uVar35 < 9) {
    switch(uVar35) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar40 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar49;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar40 + fVar57 * 0.5) - fVar49 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar57 + fVar40) - fVar49;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar57 + fVar40;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar35 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar28 < 0xad) {
      if ((uVar28 != 3) && (uVar28 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar28 != 0xad) && ((uVar28 != 0x200b && (uVar28 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar22 + 0x18) <= uVar5)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar3 = *(undefined2 *)(lVar22 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b8cc4(uVar3,0);
      if ((uVar48 & 1) == 0) {
        bVar1 = (int)uVar4 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar49 <= fVar57) && (!bVar1 && uVar35 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar40;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar57 + fVar40;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar30 == 1) || (uVar4 != uVar24)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar40;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar57 + fVar40;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar28,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar21 = (char)unaff_x19[0x1e];
        fVar40 = -fVar49;
        if (cVar21 != '\0') {
          fVar40 = fVar49;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar5)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar15 = (int)*(char *)(lVar22 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - (uStack0000000000000030 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar49 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar49 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar28 == 9) {
LAB_0354f76c:
          fVar49 = 1.0 - fVar49;
        }
        else {
          if (uVar28 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar48 = FUN_026b97f8(uVar28,0);
            cVar21 = (char)unaff_x19[0x1e];
            if ((uVar48 & 1) != 0) goto LAB_0354f76c;
          }
          iVar15 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar12;
        }
        fVar49 = ((fVar57 + fVar40) * fVar49) / (float)iVar15;
        if (cVar21 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar49;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar49;
        }
      }
    }
  }
  else if (uVar35 == 0x20) {
    fVar49 = fVar42 + fVar60;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar35 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar22 + lVar38 * 0x178;
  fVar40 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar49 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar57 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar37 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar12 = *(int *)(lVar22 + lVar38 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_0354e05c;
  fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar4,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar18 = lVar22 + lVar38 * 0x178;
    *(undefined4 *)(lVar18 + 0x84) = 0;
    *(undefined4 *)(lVar18 + 0xac) = 0;
    *(undefined4 *)(lVar18 + 0xd4) = 0x3f800000;
    fVar46 = 1.0;
    break;
  case 1:
    fVar39 = *(float *)(lVar22 + lVar38 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar18 = lVar22 + lVar38 * 0x178;
      fVar60 = (in_stack_000000f8._4_4_ + fVar39) - *(float *)(in_stack_00000078 + 0x230);
      fVar39 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar60 = fVar60 - fVar42;
    *(float *)(lVar18 + 0x84) = fVar46 + (fVar39 - fVar42) / fVar60;
    *(float *)(lVar18 + 0xac) = fVar46 + (*(float *)(lVar18 + 0x98) - fVar42) / fVar60;
    *(float *)(lVar18 + 0xd4) = fVar46 + (*(float *)(lVar18 + 0xc0) - fVar42) / fVar60;
    fVar46 = fVar46 + (*(float *)(lVar18 + 0xe8) - fVar42) / fVar60;
    break;
  case 2:
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar39 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar60 = (in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar18 + 0x84) = fVar46 + fVar60 / fVar39;
    *(float *)(lVar18 + 0xac) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar18 + 0xd4) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar46 = fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar18 = lVar22 + lVar38 * 0x178;
      *(undefined4 *)(lVar18 + 0x88) = 0;
      *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar18 + 0xd8) = 0;
      *(undefined4 *)(lVar18 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar18 = lVar22 + lVar38 * 0x178;
      fVar39 = fVar39 - fVar43;
      fVar60 = fVar46 + (*(float *)(lVar18 + 0x74) - fVar43) / fVar39;
      fVar39 = fVar46 + (*(float *)(lVar18 + 0x9c) - fVar43) / fVar39;
      *(float *)(lVar18 + 0x88) = fVar60;
      *(float *)(lVar18 + 0xb0) = fVar39;
      *(float *)(lVar18 + 0xd8) = fVar60;
      *(float *)(lVar18 + 0x100) = fVar39;
      break;
    case 2:
      lVar18 = lVar22 + lVar38 * 0x178;
      fVar60 = fVar46 + (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar18 + 0x88) = fVar60;
      fVar39 = *(float *)(unaff_x19 + 0x9c);
      fVar42 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar18 + 0xd8) = fVar60;
      fVar60 = fVar46 + (*(float *)(lVar18 + 0x9c) - fVar39) / (fVar42 - fVar39);
      *(float *)(lVar18 + 0xb0) = fVar60;
      *(float *)(lVar18 + 0x100) = fVar60;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar35 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar60 = *(float *)(lVar18 + 0x15c);
    fVar39 = (1.0 - (*(float *)(lVar18 + 0x88) + *(float *)(lVar18 + 0xb0)) * fVar60) * 0.5;
    fVar42 = fVar46 + *(float *)(lVar18 + 0x88) * fVar60 + fVar39;
    fVar46 = fVar46 + fVar39 + *(float *)(lVar18 + 0xb0) * fVar60;
    *(float *)(lVar18 + 0x84) = fVar42;
    *(float *)(lVar18 + 0xac) = fVar42;
    *(float *)(lVar18 + 0xd4) = fVar46;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar22 + lVar38 * 0x178 + 0xfc) = fVar46;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    *(undefined4 *)(lVar18 + 0x88) = 0;
    *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar35) {
      lVar18 = lVar22 + lVar38 * 0x178;
      fVar56 = fVar56 - fVar41;
      fVar46 = (*(float *)(lVar18 + 0x74) - fVar41) / fVar56;
      fVar56 = (*(float *)(lVar18 + 0x9c) - fVar41) / fVar56;
      *(float *)(lVar18 + 0x88) = fVar46;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar46 = (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar18 + 0x88) = fVar46;
    fVar56 = (*(float *)(lVar18 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar18 + 0xb0) = fVar56;
    *(float *)(lVar18 + 0xd8) = fVar56;
    *(float *)(lVar18 + 0x100) = fVar46;
    break;
  case 3:
    if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar56 = *(float *)(lVar18 + 0x15c);
    fVar60 = (1.0 - (*(float *)(lVar18 + 0x84) + *(float *)(lVar18 + 0xd4)) / fVar56) * 0.5;
    fVar46 = *(float *)(lVar18 + 0x84) / fVar56 + fVar60;
    fVar60 = fVar60 + *(float *)(lVar18 + 0xd4) / fVar56;
    *(float *)(lVar18 + 0x88) = fVar46;
    *(float *)(lVar18 + 0xb0) = fVar60;
    *(float *)(lVar18 + 0x100) = fVar46;
    *(float *)(lVar18 + 0xd8) = fVar60;
  }
  if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar18 = lVar22 + lVar38 * 0x178;
  fVar46 = ABS(fVar45) * *(float *)(lVar18 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar18 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar38 * 0x178 + 400) & 1) != 0)) {
    fVar46 = -fVar46;
  }
  lVar18 = lVar22 + lVar38 * 0x178;
  fVar56 = *(float *)(lVar18 + 0x88);
  fVar39 = *(float *)(lVar18 + 0x84);
  fVar60 = -2.1474836e+09;
  if (fVar39 != INFINITY) {
    fVar60 = (float)(int)fVar39;
  }
  fVar42 = *(float *)(lVar18 + 0xd4);
  fVar43 = *(float *)(lVar18 + 0xd8);
  fVar41 = -2.1474836e+09;
  if (fVar56 != INFINITY) {
    fVar41 = (float)(int)fVar56;
  }
  uVar47 = FUN_03591d3c(fVar39 - fVar60,fVar56 - fVar41);
  *(undefined4 *)(lVar18 + 0x84) = uVar47;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar43 = fVar43 - fVar41;
  *(float *)(lVar18 + 0x88) = fVar46;
  uVar47 = FUN_03591d3c(fVar39 - fVar60,fVar43);
  *(undefined4 *)(lVar22 + lVar38 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar42 = fVar42 - fVar60;
  *(float *)(lVar22 + lVar38 * 0x178 + 0xb0) = fVar46;
  fVar60 = (float)FUN_03591d3c(fVar42,fVar43);
  *(float *)(lVar18 + 0xd4) = fVar60;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar18 + 0xd8) = fVar46;
  uVar47 = FUN_03591d3c(fVar42,fVar56 - fVar41);
  *(undefined4 *)(lVar22 + lVar38 * 0x178 + 0xfc) = uVar47;
  uVar35 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar22 + lVar38 * 0x178 + 0x100) = fVar46;
LAB_0354e05c:
  if (((int)uVar13 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar4 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar37 = lVar22 + lVar38 * 0x178;
      *(ulong *)(lVar37 + 0x70) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar37 + 0x70));
      *(float *)(lVar37 + 0x78) = fVar57 + *(float *)(lVar37 + 0x78);
      *(ulong *)(lVar37 + 0x98) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0x98) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar37 + 0x98));
      *(float *)(lVar37 + 0xa0) = fVar57 + *(float *)(lVar37 + 0xa0);
      *(ulong *)(lVar37 + 0xc0) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0xc0) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar37 + 0xc0));
      *(float *)(lVar37 + 200) = fVar57 + *(float *)(lVar37 + 200);
      *(ulong *)(lVar37 + 0xe8) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0xe8) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar37 + 0xe8));
      *(float *)(lVar37 + 0xf0) = fVar57 + *(float *)(lVar37 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar4 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar13 < uVar35) {
        if (*(uint *)(lVar22 + lVar38 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar35 = *(uint *)(lVar22 + 0x18);
  }
  puVar10 = PTR_DAT_03cbded8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar18 = lVar22 + lVar38 * 0x178;
  *(undefined8 *)(lVar18 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar18 + 0x78) = uVar47;
  if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
  lVar18 = lVar22 + lVar38 * 0x178;
  *(undefined8 *)(lVar18 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  *(undefined4 *)(lVar18 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  *(undefined4 *)(lVar18 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
  *(undefined4 *)(lVar18 + 0xf0) = uVar47;
  *(undefined1 *)(lVar37 + 0x194) = 0;
LAB_0354e184:
  if (iVar12 == 0) {
    pcVar27 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar27)();
  }
  else if (iVar12 == 1) {
    pcVar27 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  uVar16 = *(undefined8 *)(lVar37 + 0x11c);
  *(undefined8 *)(lVar37 + 0x11c) =
       CONCAT44(fVar49 + (float)((ulong)uVar16 >> 0x20),fVar40 + (float)uVar16);
  *(float *)(lVar37 + 0x124) = fVar57 + *(float *)(lVar37 + 0x124);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  *(ulong *)(lVar37 + 0x110) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0x110) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar37 + 0x110));
  *(float *)(lVar37 + 0x118) = fVar57 + *(float *)(lVar37 + 0x118);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  *(ulong *)(lVar37 + 0x128) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0x128) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar37 + 0x128));
  *(float *)(lVar37 + 0x130) = fVar57 + *(float *)(lVar37 + 0x130);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  *(float *)(lVar37 + 0x134) = fVar40 + *(float *)(lVar37 + 0x134);
  *(ulong *)(lVar37 + 0x138) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar37 + 0x138) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar37 + 0x138));
  lVar37 = *unaff_x22;
  if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
  uVar35 = *(uint *)(lVar18 + 0x18);
  if (uVar35 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar18 + lVar38 * 0x178;
  *(float *)(lVar32 + 0x150) = fVar49 + *(float *)(lVar32 + 0x150);
  *(ulong *)(lVar32 + 0x140) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar32 + 0x140) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar32 + 0x140));
  *(ulong *)(lVar32 + 0x148) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar32 + 0x148) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar32 + 0x148));
  if (uVar4 == uVar24) {
    uVar24 = *unaff_x20 - 1;
    if (uVar13 == uVar24) goto LAB_0354e3ec;
  }
  else {
    lVar37 = *(long *)(lVar37 + 0x50);
    if (lVar37 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar37 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = (long)(int)uVar24;
    lVar33 = lVar37 + lVar32 * 0x5c;
    fVar60 = fVar49 + *(float *)(lVar33 + 0x54);
    *(ulong *)(lVar33 + 0x4c) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar33 + 0x4c));
    *(float *)(lVar33 + 0x54) = fVar60;
    *(float *)(lVar33 + 0x58) = fVar40 + *(float *)(lVar33 + 0x58);
    if (uVar35 <= *(uint *)(lVar33 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar47 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
    lVar37 = lVar37 + lVar32 * 0x5c;
    *(float *)(lVar37 + 0x70) = fVar60;
    *(undefined4 *)(lVar37 + 0x6c) = uVar47;
    lVar37 = *unaff_x22;
    if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar37 = *(long *)(lVar37 + 0x38);
    if (lVar37 == 0) goto LAB_0354fbf4;
    uVar24 = *(uint *)(lVar18 + lVar32 * 0x5c + 0x40);
    if (*(uint *)(lVar37 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar18 + lVar32 * 0x5c;
    *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar24 * 0x178 + 0x128);
    *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    uVar24 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar13 == uVar24) {
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar4)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar18 + lVar34 * 0x5c;
      fVar60 = fVar49 + *(float *)(lVar32 + 0x54);
      *(ulong *)(lVar32 + 0x4c) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar32 + 0x4c) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar32 + 0x4c));
      *(float *)(lVar32 + 0x54) = fVar60;
      *(float *)(lVar32 + 0x58) = fVar40 + *(float *)(lVar32 + 0x58);
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar32 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar32 + 0x34) * 0x178 + 0x11c);
      lVar18 = lVar18 + lVar34 * 0x5c;
      *(float *)(lVar18 + 0x70) = fVar60;
      *(undefined4 *)(lVar18 + 0x6c) = uVar47;
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar4)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      uVar24 = *(uint *)(lVar18 + lVar34 * 0x5c + 0x40);
      if (*(uint *)(lVar37 + 0x18) <= uVar24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar18 + lVar34 * 0x5c;
      *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar24 * 0x178 + 0x128);
      *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar48 = FUN_026b82c4(uVar28,0);
  if (((((uVar48 & 1) == 0) && (1 < uVar28 - 0x2010)) && (uVar28 != 0xad)) && (uVar28 != 0x2d)) {
    if (bVar7) {
      if (((uVar30 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*unaff_x20 && ((uVar28 == 0x2019 || (uVar28 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar30 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar22 + lVar26 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b82c4(uVar3,0);
        if ((uVar48 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar30)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(lVar22 + lVar26 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b82c4(uVar3,0);
          if ((uVar48 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar30 != 1) {
LAB_0354f144:
        bVar7 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b81f8(uVar28,0);
      if ((uVar48 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b63d8(uVar28,0);
        if (((uVar28 != 0x200b) && ((uVar48 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar13 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b82c4(uVar28,0);
      iVar12 = (int)fStack0000000000000124;
      if ((uVar48 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar12 = uVar30 - 2;
    }
    lVar37 = *unaff_x22;
    if (lVar37 == 0) goto LAB_0354fbf4;
    lVar18 = *(long *)(lVar37 + 0x40);
    if (lVar18 == 0) goto LAB_0354fbf4;
    uVar24 = *(uint *)(lVar37 + 0x24);
    iVar15 = *(int *)(lVar18 + 0x18);
    if (iVar15 < (int)(uVar24 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar37 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar37 = *unaff_x22;
      if (lVar37 == 0) goto LAB_0354fbf4;
    }
    lVar37 = *(long *)(lVar37 + 0x40);
    if (lVar37 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar37 + 0x18) <= uVar24)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar37 = lVar37 + (long)(int)uVar24 * 0x18;
    *(long **)(lVar37 + 0x20) = unaff_x19;
    *(float *)(lVar37 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar37 + 0x2c) = iVar12;
    *(int *)(lVar37 + 0x30) = (iVar12 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar37 = unaff_x19[0x6d];
    if (lVar37 == 0) goto LAB_0354fbf4;
    lVar18 = *(long *)(lVar37 + 0x50);
    *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
    if (lVar18 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar4)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar18 + lVar34 * 0x5c;
    bVar7 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      in_stack_00000168._4_4_ = (float)uVar13;
    }
    if (uVar13 == *unaff_x20 - 1) {
      lVar37 = *unaff_x22;
      if (lVar37 == 0) goto LAB_0354fbf4;
      lVar18 = *(long *)(lVar37 + 0x40);
      if (lVar18 == 0) goto LAB_0354fbf4;
      uVar24 = *(uint *)(lVar37 + 0x24);
      iVar12 = *(int *)(lVar18 + 0x18);
      if (iVar12 < (int)(uVar24 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar37 + 0x40),iVar12 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar37 = *unaff_x22;
        if (lVar37 == 0) goto LAB_0354fbf4;
      }
      lVar37 = *(long *)(lVar37 + 0x40);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar24)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + (long)(int)uVar24 * 0x18;
      *(long **)(lVar37 + 0x20) = unaff_x19;
      *(float *)(lVar37 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar37 + 0x2c) = uVar13;
      *(uint *)(lVar37 + 0x30) = uVar30 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar37 = unaff_x19[0x6d];
      if (lVar37 == 0) goto LAB_0354fbf4;
      lVar18 = *(long *)(lVar37 + 0x50);
      *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
      if (lVar18 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar4)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar18 + lVar34 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
    }
LAB_0354e610:
    bVar7 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  uVar24 = *(uint *)(lVar37 + 0x18);
  if (uVar24 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar37 + lVar38 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_0354e660:
      if (uVar24 <= uVar30 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = *unaff_x19;
      uVar47 = *(undefined4 *)(lVar37 + lVar26 + -0x330);
      uVar51 = *(undefined4 *)(lVar37 + lVar26 + -0x2f8);
LAB_0354ebc0:
      pcVar27 = *(code **)(lVar18 + 0x8d8);
LAB_0354ebc8:
      (*pcVar27)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar47,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar51);
      puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar37 = *(long *)puVar10;
      }
LAB_0354ec1c:
      fVar54 = 0.0;
      bVar11 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar37 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar11 = false;
    }
  }
  else {
    lVar37 = lVar37 + lVar38 * 0x178;
    iVar12 = *(int *)(lVar37 + 0x68);
    *(int *)(lVar37 + 0x16c) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar4)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar12 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_026b63d8(uVar28,0);
    if ((uVar28 != 0x200b) && ((uVar48 & 1) == 0)) {
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar60 = *(float *)(lVar18 + lVar38 * 0x178 + 0x160);
      if (fVar54 <= fVar60) {
        fVar54 = fVar60;
      }
      if (fStack0000000000000100 <= ABS(fVar46)) {
        fStack0000000000000100 = ABS(fVar46);
      }
      if ((float)iVar12 != fStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar37 = *unaff_x22;
          if (lVar37 == 0) goto LAB_0354fbf4;
          lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar18 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar18 + 0x15a8);
      }
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar56 = *(float *)(lVar37 + lVar38 * 0x178 + 0x14c);
      fVar60 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar56 = fVar56 + fVar54 * fVar60;
      fStack000000000000005c = (float)iVar12;
      if (fVar56 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar56;
      }
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar28 == 0xd) || ((uVar28 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar28,0);
        if ((uVar48 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + lVar38 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar37 + 0x160);
      fStack0000000000000070 = *(float *)(lVar37 + 0x11c);
      bVar11 = fVar54 != 0.0;
      fVar60 = in_stack_00000080._4_4_;
      if (bVar11) {
        fVar60 = fVar54;
      }
      fVar54 = fVar60;
      uVar59 = *(undefined4 *)(lVar37 + 0x168);
      _bStack000000000000006c = 0;
      fVar60 = fVar46;
      if (bVar11) {
        fVar60 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar60;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        if (uVar13 < *(uint *)(lVar37 + 0x18)) {
          lVar37 = lVar37 + lVar38 * 0x178;
          lVar18 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar37 + 0x128);
          uVar51 = *(undefined4 *)(lVar37 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar13 == uVar5) || ((int)uVar6 <= (int)uVar13)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b63d8(uVar28,0);
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        lVar18 = lVar38;
        uVar24 = uVar13;
        if (uVar28 == 0x200b || (uVar48 & 1) != 0) {
          lVar18 = (long)(int)uVar6;
          uVar24 = uVar6;
        }
        if (uVar24 < *(uint *)(lVar37 + 0x18)) {
          lVar37 = lVar37 + lVar18 * 0x178;
          uVar47 = *(undefined4 *)(lVar37 + 0x128);
          uVar51 = *(undefined4 *)(lVar37 + 0x160);
          pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        uVar24 = *(uint *)(lVar37 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar13 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar48 = FUN_03567ad8(uVar59,*(undefined4 *)(lVar37 + lVar26),0);
      if ((uVar48 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
          if (uVar13 < *(uint *)(lVar37 + 0x18)) {
            lVar37 = lVar37 + lVar38 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar37 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar37 + 0x160));
            puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar37 = *(long *)puVar10;
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
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar31 == 0) goto LAB_0354fbf4;
  uVar24 = *(uint *)(lVar37 + lVar38 * 0x178 + 400);
  fVar60 = (float)FUN_03776a30(lVar31 + 0x50,0);
  if ((uVar24 >> 6 & 1) == 0) {
    if (bVar8) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar30 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar47 = *(undefined4 *)(lVar37 + lVar26 + -0x330);
      fVar49 = *(float *)(lVar37 + lVar26 + -0x30c);
      pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar27)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar47,
                 fStack00000000000000a8 * fVar60 + fVar49,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar8 = false;
  }
  else {
    lVar37 = *unaff_x22;
    if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar13)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar18 + lVar38 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar4)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar18 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar28 == 0xd) || ((uVar28 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
       (bVar8 || !bVar1)) {
LAB_0354ed84:
      if (!bVar8) goto LAB_0354f250;
    }
    else {
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar28,0);
        if ((uVar48 & 1) != 0) goto LAB_0354ed84;
        lVar37 = *unaff_x22;
        if (lVar37 == 0) goto LAB_0354fbf4;
      }
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + lVar38 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar37 + 0x60);
      fStack0000000000000040 = *(float *)(lVar37 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar37 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar37 + 0x160);
      fStack000000000000009c = fVar60 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar24 = *unaff_x20;
    if (uVar24 == 1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        uVar24 = *(uint *)(lVar37 + 0x18);
LAB_0354ef0c:
        if (uVar13 < uVar24) {
          lVar37 = lVar37 + lVar38 * 0x178;
          lVar18 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar37 + 0x128);
          fVar49 = *(float *)(lVar37 + 0x14c);
LAB_0354ef24:
          pcVar27 = *(code **)(lVar18 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar13 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b63d8(uVar28,0);
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        uVar24 = *(uint *)(lVar37 + 0x18);
        if (uVar28 == 0x200b || (uVar48 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar18 = lVar38;
        if (uVar13 < uVar24) {
LAB_0354f1f8:
          lVar37 = lVar37 + lVar18 * 0x178;
          fVar49 = *(float *)(lVar37 + 0x14c);
          uVar47 = *(undefined4 *)(lVar37 + 0x128);
          pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar13 < (int)uVar24) {
      lVar37 = *unaff_x22;
      if ((lVar37 != 0) && (lVar18 = *(long *)(lVar37 + 0x38), lVar18 != 0)) {
        if (uVar30 < *(uint *)(lVar18 + 0x18)) {
          if (*(float *)(lVar18 + lVar26 + -0x108) == in_stack_00000048._4_4_) {
            fVar56 = *(float *)(lVar18 + lVar26 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar48 = FUN_03567bac(fVar49 + fVar56,fStack0000000000000040,0);
            if ((uVar48 & 1) != 0) {
              uVar24 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar37 = *unaff_x22;
            if (lVar37 == 0) goto LAB_0354fbf4;
          }
          lVar37 = *(long *)(lVar37 + 0x38);
          if (lVar37 != 0) {
            uVar24 = *(uint *)(lVar37 + 0x18);
            if ((int)uVar13 <= (int)uVar6) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar18 = (long)(int)uVar6;
            if (uVar6 < uVar24) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar13 < (int)uVar24) {
      iVar12 = FUN_036d3364(lVar31,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = *(long *)(lVar22 + lVar26 + -0x130);
      if (lVar37 == 0) goto LAB_0354fbf4;
      iVar15 = FUN_036d3364(lVar37,0);
      if (iVar12 != iVar15) {
        if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
          uVar24 = *(uint *)(lVar37 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        if (uVar30 - 2 < *(uint *)(lVar37 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar47 = *(undefined4 *)(lVar37 + lVar26 + -0x330);
          fVar49 = *(float *)(lVar37 + lVar26 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar8 = true;
  }
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  uVar24 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar24 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar37 + lVar38 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar4)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar37 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar9) {
LAB_0354f400:
      if (uVar24 <= uVar13) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + lVar38 * 0x178;
      fVar60 = *(float *)(lVar37 + 0x128);
      fVar41 = *(float *)(lVar37 + 0x188);
      uVar17 = *(undefined8 *)(lVar37 + 0x17c);
      fVar57 = *(float *)(lVar37 + 0x184);
      uVar16 = *(undefined8 *)(lVar37 + 0x184);
      fVar42 = *(float *)(lVar37 + 0x18c);
      fVar49 = *(float *)(lVar37 + 0x11c);
      fVar56 = *(float *)(lVar37 + 0x148);
      fVar39 = *(float *)(lVar37 + 0x150);
      in_stack_00000188 = uVar17;
      fStack0000000000000190 = fVar57;
      fStack0000000000000194 = fVar41;
      in_stack_00000198 = fVar42;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar48 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar37 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar48 & 1) == 0) {
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar37);
        }
        fVar60 = fVar60 + (float)in_stack_000017c8;
        fVar49 = fVar49 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar56 = fVar56 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar49 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar49;
        }
        if (fVar39 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar39 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar60) {
          fStack00000000000000d0 = fVar60;
        }
        if (fStack00000000000000d4 <= fVar56) {
          fStack00000000000000d4 = fVar56;
        }
      }
      else {
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar37);
        }
        fVar49 = (fVar49 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar39 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar39;
        }
        if (fStack00000000000000d4 <= fVar56) {
          fStack00000000000000d4 = fVar56;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar49,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar39 - fVar42;
        fStack00000000000000d0 = fVar60 + fVar57;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar56 + fVar41;
        fStack00000000000000e0 = fVar49;
        in_stack_000017c0 = uVar17;
        in_stack_000017c8 = uVar16;
        in_stack_000017d0 = fVar42;
      }
      if (((*unaff_x20 == 1) || (uVar13 == uVar5)) || (((int)uVar6 <= (int)uVar13 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar9 = true;
    }
    else {
      if ((((uVar28 != 0xd) && ((uVar28 & 0xfffe) != 10)) && ((int)uVar13 <= (int)uVar6)) && (bVar1)
         ) {
        if (uVar13 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b97f8(uVar28,0);
          if ((uVar48 & 1) != 0) goto LAB_0354f374;
        }
        puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *(long *)puVar10;
        }
        if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
          uVar24 = (uint)*(undefined8 *)(lVar37 + 0x18);
          if (uVar13 < uVar24) {
            lVar18 = *(long *)(lVar18 + 0xb8);
            lVar31 = lVar37 + lVar38 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar31 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar31 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar18 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar18 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar31 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar18 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar18 + 0x15a4);
            uStack00000000000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar9 = false;
    }
  }
  uVar13 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar26 = lVar26 + 0x178;
  bVar1 = (int)uVar13 <= (int)uVar30;
  uVar24 = uVar4;
  uVar30 = uVar30 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar22 = *unaff_x22;
  if (lVar22 != 0) {
    iVar14 = uVar4 + 1;
    plVar36 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar22 + 0x18) = uVar13;
    lVar26 = unaff_x19[0xd4];
    *(int *)(lVar22 + 0x2c) = iVar14;
    if ((int)uVar13 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar26;
    *(int *)(lVar22 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar48 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar48 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar22 = unaff_x19[0xdb];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*unaff_x22,*(undefined8 *)(lVar22 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x60), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(int *)(*plVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar22 = *unaff_x22;
                        if (lVar22 != 0) {
                          lVar37 = 0;
                          lVar26 = 0;
                          do {
                            uVar48 = lVar26 + 1;
                            if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar48) goto LAB_0354d0cc;
                            lVar22 = *(long *)(lVar22 + 0x60);
                            if (lVar22 == 0) break;
                            if (*(int *)(*plVar36 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar48)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar22 + lVar37 + 0x70,0);
                            lVar22 = unaff_x19[0xe1];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar48)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar16 = *(undefined8 *)(lVar22 + lVar26 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar50 = FUN_036d35a8(uVar16,0,0);
                            if ((uVar50 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar22 = *(long *)(*unaff_x22 + 0x60), lVar22 == 0)) break;
                                if (*(int *)(*plVar36 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar22 + 0x18) <= uVar48)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar22 + lVar37 + 0x70,1,0);
                              }
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a460c(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0x80),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a4810(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0x98),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a48bc(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0xa0),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a4e24(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0xa8),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if ((lVar22 == 0) || (lVar22 = FUN_0359d5ac(lVar22,0), lVar22 == 0))
                              break;
                              FUN_036aa280(lVar22,0);
                            }
                            lVar22 = *unaff_x22;
                            lVar26 = lVar26 + 1;
                            lVar37 = lVar37 + 0x50;
                          } while (lVar22 != 0);
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
code_r0x035492f0:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar48 = FUN_03586568();
  if (((uVar48 & 1) != 0) &&
     (in_stack_000017b8 = in_stack_0000179c, uVar13 = in_stack_000017ec,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03549564;
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = (long)(int)uVar13;
  cVar21 = *(char *)(lVar22 + lVar37 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar26 = unaff_x19[0x24];
  if ((uint)in_stack_000017d8 == uVar13) {
    in_stack_000017ec = (uint)((ulong)in_stack_000017d8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017ec == 0x2026) {
      *(long *)(lVar22 + lVar37 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      *(long *)(lVar22 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      uVar13 = *unaff_x20;
      if (*(uint *)(lVar22 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      unaff_w23 = 1;
      *(int *)(lVar22 + (long)(int)uVar13 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017d8 = CONCAT44(3,uVar13 + 1);
    }
    else if (in_stack_000017ec == 3) {
      if ((*in_stack_00000178 == 0) || (lVar18 = FUN_03568ac0(*in_stack_00000178,0), lVar18 == 0))
      goto LAB_0354fbf4;
      FUN_0219b634(lVar18,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar22 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(ulong *)(lVar22 + lVar37 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,in_stack_000008b0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar13 = *(uint *)((long)unaff_x19 + 0x494);
      unaff_w23 = 1;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      unaff_w23 = 1;
    }
  }
  else {
    unaff_w23 = 0;
  }
  if (((int)uVar13 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017ec != 3)) {
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar13)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + (long)(int)uVar13 * (long)iVar14;
    *(undefined1 *)(lVar22 + 0x194) = 0;
    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
    *(undefined4 *)(lVar22 + 100) = 0;
    *unaff_x20 = uVar13 + 1;
    uVar13 = in_stack_000017ec;
    goto LAB_03549564;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar13 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar13 >> 4 & 1) == 0) {
      if ((uVar13 >> 3 & 1) == 0) {
        fVar54 = 1.0;
        if ((uVar13 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b812c(in_stack_000017ec,0);
          if ((uVar48 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b8410(in_stack_000017ec,0);
            in_stack_000017ec = uVar13 & 0xffff;
            fVar54 = fStack0000000000000024;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b8070(in_stack_000017ec,0);
        fVar54 = 1.0;
        if ((uVar48 & 1) != 0) {
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
      uVar48 = FUN_026b812c(in_stack_000017ec,0);
      fVar54 = 1.0;
      if ((uVar48 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8410(in_stack_000017ec,0);
LAB_03549968:
        fVar54 = 1.0;
        in_stack_000017ec = uVar13 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 == 0) goto LAB_03549978;
LAB_03549594:
    if (iVar12 == 1) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *in_stack_000000b8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar22 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar22 == 0))
      goto LAB_0354fbf4;
      FUN_02215a88(lVar22,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
      uVar13 = in_stack_000017ec;
      if (lVar22 == 0) goto LAB_03549564;
      if (in_stack_000017ec == 0x3c) {
        in_stack_000017ec = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar37 = *(long *)puVar10;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar37 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar45 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001730,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar49 = (float)FUN_03776960(&stack0x00001730,0);
      fVar46 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar46 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
      fVar46 = (fVar45 / (float)iVar12) * fVar49 * fVar46;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar45 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        iVar12 = FUN_03776950(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar60 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        fVar49 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar49 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar56 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,*(long *)(lVar22 + 0x20),0);
        fVar39 = (float)FUN_03776c9c(&stack0x00001710,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
        fVar57 = *(float *)(lVar22 + 0x2c);
        fVar41 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar40 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar43 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar53 = *(float *)((long)unaff_x19 + 0x404);
        fVar42 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar42 = fVar46 * fVar43 * fVar53 * fVar42;
        fVar49 = (fVar45 / (float)iVar12) * fVar60 * fVar49;
        fVar45 = fVar49 * (fVar56 / fVar39) * fVar57 * fVar41;
        fVar49 = fVar49 / fVar45;
        fVar40 = fVar49 * fVar40;
        fVar46 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar49 = fVar49 * fVar46;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar49 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
        fVar56 = *(float *)(lVar22 + 0x2c);
        fVar60 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar60 = 1.0;
        }
        fVar39 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar40 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar41 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar57 = *(float *)((long)unaff_x19 + 0x404);
        fVar42 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar42 = fVar46 * fVar41 * fVar57 * fVar42;
        fVar45 = (fVar45 / (float)iVar12) * fVar49 * fVar60 * fVar56 * fVar39;
        fVar49 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *_iStack00000000000000d8 = lVar22;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (_iStack00000000000000d8,lVar22);
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar22 + 0x2c) = 1;
      *(float *)(lVar22 + 0x160) = fVar45;
      *(long *)(lVar22 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      _fStack0000000000000120 = CONCAT44(fVar40,fVar49);
      in_stack_00000168._4_4_ = 0.0;
      *(int *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar26;
      goto LAB_03549e30;
    }
    lVar22 = *unaff_x22;
    fVar42 = 0.0;
    fVar46 = fVar42;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar46 = fVar45;
    }
    if (lVar22 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = 0;
  }
  else {
    fVar54 = 1.0;
    if (iVar12 != 0) goto LAB_03549594;
LAB_03549978:
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *_iStack00000000000000d8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
    uVar13 = in_stack_000017ec;
    if (*_iStack00000000000000d8 == 0) goto LAB_03549564;
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000178 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000178);
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *in_stack_00000170 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    uVar24 = *unaff_x20;
    uVar13 = *(uint *)(lVar22 + 0x18);
    if (uVar13 <= uVar24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar22 + (long)(int)uVar24 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_03549a88:
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar46 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar22 = unaff_x19[0x20];
    }
    else {
      lVar26 = unaff_x19[0x8f];
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(int *)(lVar26 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
         (uVar24 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
      if (uVar13 <= uVar24 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar46 = *(float *)(lVar22 + (long)(int)(uVar24 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar22 = *in_stack_00000178;
    }
    if (lVar22 == 0) goto LAB_0354fbf4;
    fVar60 = (float)FUN_03776960(lVar22 + 0x50,0);
    fVar49 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar49 = 1.0;
    }
    uVar59 = 0;
    fStack0000000000000124 = 0.0;
    if ((unaff_w23 & in_stack_000017ec == 0x2026) == 0) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      uVar59 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
    }
    lVar22 = unaff_x19[0xc9];
    if (lVar22 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar59);
    if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
    fVar56 = *(float *)((long)unaff_x19 + 0x404);
    fVar39 = *(float *)(lVar22 + 0x2c);
    fVar45 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar41 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar57 = *(float *)((long)unaff_x19 + 0x404);
    fVar42 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    lVar22 = unaff_x19[0x6d];
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar26 + 0x2c) = 0;
    fVar49 = ((fVar54 * fVar46) / (float)iVar12) * fVar60 * fVar49;
    fVar45 = fVar49 * fVar56 * fVar39 * fVar45;
    *(float *)(lVar26 + 0x160) = fVar45;
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    fVar42 = fVar49 * fVar41 * fVar57 * fVar42;
    if (uVar13 == 0) {
      in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar26 = unaff_x19[0xe1];
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar13)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar26 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar26 == 0) goto LAB_0354fbf4;
      in_stack_00000168._4_4_ = *(float *)(lVar26 + 0x54);
    }
LAB_03549e30:
    fVar46 = 0.0;
    if (in_stack_000017ec != 3 && in_stack_000017ec != 0xad) {
      fVar46 = fVar45;
    }
  }
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar22 + 0x20) = (short)in_stack_000017ec;
  *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(int *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  uVar13 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)uVar13 * unaff_x24;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_000008c0;
  *(undefined8 *)(lVar22 + 0x184) = in_stack_000008b8;
  *(ulong *)(lVar22 + 0x17c) = CONCAT44(in_stack_000008b4,in_stack_000008b0);
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
  goto LAB_0354fbf4;
  FUN_03776e6c(&stack0x00000c28,lVar22,0);
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
    in_stack_00000128 = 0.0;
    fVar60 = 0.0;
    fVar49 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar24 = *unaff_x20;
    uVar13 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar24 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar24 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar24 + 1) * (long)iVar14 + 0x30);
      if ((((lVar22 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar26 = *(long *)(*in_stack_00000178 + 0x128), lVar26 == 0)) ||
         (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar13 | *(int *)(lVar22 + 0x28) << 0x10;
      uVar48 = FUN_0219f8b8(lVar26,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar59 = 0;
      if ((uVar48 & 1) == 0) {
        in_stack_00000128 = 0.0;
        fVar60 = 0.0;
        fVar49 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        in_stack_00000128 = *(float *)(in_stack_00001708 + 0x1c);
        uVar59 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar49 = *(float *)(in_stack_00001708 + 0x14);
        fVar60 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          in_stack_00000138 = 0.0;
        }
      }
      uVar24 = *unaff_x20;
    }
    else {
      uVar59 = 0;
      in_stack_00000128 = 0.0;
      fVar60 = 0.0;
      fVar49 = 0.0;
    }
    if (0 < (int)uVar24) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar24 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = *(long *)(lVar22 + (ulong)(uVar24 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar22 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar26 = *(long *)(*in_stack_00000178 + 0x128), lVar26 == 0 ||
          (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar22 + 0x28) | uVar13 << 0x10;
      uVar48 = FUN_0219f8b8(lVar26,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar48 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar49 = (float)FUN_03571cb4(fVar49,fVar60,in_stack_00000128,uVar59,
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
    *(float *)((long)unaff_x19 + 0x2fc) = in_stack_00000128;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar39 = *(float *)(unaff_x19 + 200);
    fVar56 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar39 = fVar39 - fVar46 * fVar56 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar39;
    if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar39 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar39 = *(float *)(unaff_x19 + 0x56);
  fVar56 = 0.0;
  if (fVar39 != 0.0) {
    fVar56 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar41 = (float)FUN_03776ca4(&stack0x000017a0,0);
    fVar56 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar39 * 0.5 - fVar46 * (fVar56 * 0.5 + fVar41));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar56;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar22 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_036cee6c(lVar22,0,0);
    fVar41 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar22 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar48 = FUN_03699d3c(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar41 = 0.0;
      if ((uVar48 & 1) != 0) {
        lVar22 = *in_stack_00000170;
        if (*(int *)(*plVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar22 == 0) goto LAB_0354fbf4;
        fVar39 = (float)FUN_0369e060(lVar22,*(undefined4 *)(*(long *)(*plVar36 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar57 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar41 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar41 = fVar41 * fVar39 * fVar57 * 0.25;
        if (fVar39 < in_stack_00000168._4_4_ + fVar41) {
          in_stack_00000168._4_4_ = fVar39 - fVar41;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fStack00000000000000d0 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar22 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_036cee6c(lVar22,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar22 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar48 = FUN_03699d3c(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar48 & 1) != 0) {
        lVar22 = *in_stack_00000170;
        if (*(int *)(*plVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar22 == 0) goto LAB_0354fbf4;
        uVar48 = FUN_03699d3c(lVar22,*(undefined4 *)(*(long *)(*plVar36 + 0xb8) + 0xcc),0);
        if ((uVar48 & 1) != 0) {
          lVar22 = *in_stack_00000170;
          if (*(int *)(*plVar36 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar22 == 0) goto LAB_0354fbf4;
          fVar39 = (float)FUN_0369e060(lVar22,*(undefined4 *)(*(long *)(*plVar36 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
          fVar57 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar41 = (float)FUN_0369e060(*in_stack_00000170,
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
          fVar41 = fVar41 * fVar39 * fVar57 * 0.25;
          if (fVar39 < in_stack_00000168._4_4_ + fVar41) {
            in_stack_00000168._4_4_ = fVar39 - fVar41;
          }
          goto LAB_0354a568;
        }
      }
    }
    fVar41 = 0.0;
  }
LAB_0354a568:
  fVar39 = *(float *)(unaff_x19 + 200);
  fVar57 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar39 = fVar39 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar46 * (fVar49 + ((fVar57 - in_stack_00000168._4_4_) - fVar41));
  fVar49 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar57 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar42 + fVar46 * (fVar60 + in_stack_00000168._4_4_ + fVar49)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar49 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar57 - fVar46 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar49);
  fVar49 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar60 = fVar39 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar46 * (fVar41 + fVar41 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar49);
  uVar48 = extraout_x1;
  fStack0000000000000104 = fVar39;
  fVar49 = fVar60;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar43 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar49 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar44 = fVar43 * fVar46 * (fVar41 + in_stack_00000168._4_4_ + fVar49);
    fVar49 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar40 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar57 = fVar57 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar43 = fVar43 * fVar46 * (((fVar49 - fVar40) - in_stack_00000168._4_4_) - fVar41);
    fVar40 = fVar39 + fVar44;
    fVar49 = fVar60 + fVar43;
    fVar53 = (fVar44 - fVar43) * 0.5;
    fVar39 = (fVar39 + fVar43) - fVar53;
    fVar60 = (fVar60 + fVar44) - fVar53;
    uVar48 = extraout_x1_04;
    fStack0000000000000104 = fVar40 - fVar53;
    fVar49 = fVar49 - fVar53;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar43 = 0.0;
    fVar44 = 0.0;
    fVar52 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar53 = fStack0000000000000134;
    fVar40 = fVar57;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar55 = (fVar60 + fVar39) * 0.5;
    fVar58 = (fStack0000000000000134 + fVar57) * 0.5;
    fVar57 = fVar57 - fVar58;
    fStack0000000000000100 = 0.0;
    fVar40 = fVar57;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar55,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar55 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar53 = fStack0000000000000134 - fVar58;
    fVar43 = 0.0;
    fStack0000000000000134 = fVar53;
    fVar39 = (float)FUN_036bdd2c(fVar39 - fVar55,_fStack0000000000000070,0);
    fVar39 = fVar55 + fVar39;
    fVar43 = fVar43 + 0.0;
    fStack0000000000000134 = fVar58 + fStack0000000000000134;
    fVar52 = 0.0;
    fVar60 = (float)FUN_036bdd2c(fVar60 - fVar55,_fStack0000000000000070,0);
    fVar60 = fVar55 + fVar60;
    fVar57 = fVar58 + fVar57;
    fVar52 = fVar52 + 0.0;
    fVar44 = 0.0;
    fVar49 = (float)FUN_036bdd2c(fVar49 - fVar55,_fStack0000000000000070,0);
    fVar49 = fVar55 + fVar49;
    fVar44 = fVar44 + 0.0;
    uVar48 = extraout_x1_00;
    fVar53 = fVar58 + fVar53;
    fVar40 = fVar58 + fVar40;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar22 = *(long *)(*unaff_x22 + 0x38);
  unaff_d13 = (ulong)(uint)fVar46;
  if (lVar22 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x11c) = fVar39;
  *(float *)(lVar22 + 0x120) = fStack0000000000000134;
  *(float *)(lVar22 + 0x124) = fVar43;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x114) = fVar40;
  *(float *)(lVar22 + 0x110) = fStack0000000000000104;
  *(float *)(lVar22 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x128) = fVar60;
  *(float *)(lVar22 + 300) = fVar57;
  *(float *)(lVar22 + 0x130) = fVar52;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x134) = fVar49;
  *(float *)(lVar22 + 0x138) = fVar53;
  *(float *)(lVar22 + 0x13c) = fVar44;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  uVar13 = *unaff_x20;
  unaff_x26 = (long)(int)uVar13;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar22 + unaff_x26 * unaff_x24;
  *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
  fVar57 = *(float *)(unaff_x19 + 0x9b);
  uVar50 = (ulong)(uint)fVar57;
  fVar49 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar26 + 0x15c) = (fVar60 - fVar39) / (fVar40 - fStack0000000000000134);
  *(float *)(lVar26 + 0x14c) = (fVar42 - fVar57) + fVar49;
  fVar60 = fStack0000000000000124 * fVar46;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar60 = fVar60 / fVar54;
    fStack0000000000000120 = (fStack0000000000000120 * fVar46) / fVar54;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar46;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar13 == unaff_w25)) {
    fStack0000000000000120 = fVar49 + fStack0000000000000120;
    fVar60 = fVar49 + fVar60;
    fVar42 = fStack0000000000000120;
    fVar39 = fVar60;
    if (fVar49 != 0.0) {
      fVar39 = (fVar60 - fVar49) / *(float *)((long)unaff_x19 + 0x404);
      fVar42 = (fStack0000000000000120 - fVar49) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar39 <= fVar60) {
        fVar39 = fVar60;
      }
      if (fStack0000000000000120 <= fVar42) {
        fVar42 = fStack0000000000000120;
      }
    }
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    fVar49 = fVar39;
    if (fVar39 <= *(float *)(unaff_x19 + 0x99)) {
      fVar49 = *(float *)(unaff_x19 + 0x99);
    }
    fVar40 = fVar42;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar42) {
      fVar40 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar40;
    *(float *)(unaff_x19 + 0x99) = fVar49;
    *(float *)(lVar22 + 0x154) = fVar39;
    *(float *)(lVar22 + 0x158) = fVar42;
    *(float *)(lVar22 + 0x148) = fVar60 - fVar57;
    *(float *)(unaff_x19 + 0x98) = fVar60 - fVar57;
    *(float *)(lVar22 + 0x150) = fStack0000000000000120 - fVar57;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar57;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar49;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar49 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar39 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fVar54 = (fVar46 * fVar39) / fVar54;
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar49 <= fVar54) {
        fVar49 = fVar54;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar49;
      uVar48 = extraout_x1_01;
    }
    if ((float)uVar50 == 0.0) {
      fVar54 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar60) {
        fVar54 = fVar60;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar54;
    }
  }
  else {
    fVar54 = *(float *)(unaff_x19 + 0x99);
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    *(float *)(lVar22 + 0x154) = fVar54;
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar54 = fVar54 - fVar57;
    *(float *)(lVar22 + 0x148) = fVar54;
    *(float *)(lVar22 + 0x158) = fVar49;
    *(float *)(unaff_x19 + 0x98) = fVar54;
    fVar49 = fVar49 - fVar57;
    *(float *)(lVar22 + 0x150) = fVar49;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar49;
  }
  lVar22 = *unaff_x22;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar24 = *unaff_x20;
  if (*(uint *)(lVar26 + 0x18) <= uVar24)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + (long)(int)uVar24 * unaff_x24;
  *(undefined1 *)(lVar26 + 0x194) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x4f);
  uVar13 = in_stack_000017ec;
  if (((in_stack_000017ec != 9) &&
      ((((unaff_w21 != 0 || (in_stack_000017ec == 3)) || (in_stack_000017ec == 0x200b)) ||
       (in_stack_000017ec == 0xad)))) &&
     (((in_stack_000017ec == 0xad & (bStack000000000000006c ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x644) != 1)))) {
    if (((in_stack_000017ec & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar54 = (float)uVar50;
      fVar45 = 0.0;
      if ((0.0 < fVar54) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar50 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar54)) + fVar45)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar24;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar48 = FUN_036cee6c(lVar22,0,0);
        if ((uVar48 & 1) != 0) {
          plVar36 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar36 + 0x528))(plVar36,uVar16,*(undefined8 *)(*plVar36 + 0x530));
          lVar22 = unaff_x19[0x5d];
          if (lVar22 == 0) goto LAB_0354fbf4;
          *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar36 = (long *)unaff_x19[0x5d];
          if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar36 + 0x7a8))(plVar36,0,0,*(undefined8 *)(*plVar36 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_0354b0e0;
      }
    }
    if ((((0x22 < in_stack_000017ec - 0x2007) ||
         ((1L << ((ulong)(in_stack_000017ec - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
        (1 < in_stack_000017ec - 10)) && (in_stack_000017ec != 0xa0)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar61 = FUN_026b97f8(in_stack_000017ec,0);
      uVar48 = auVar61._8_8_;
      if ((auVar61._0_8_ & 1) == 0) goto LAB_0354b560;
    }
    if (((in_stack_000017ec != 0xad) && (in_stack_000017ec != 0x200b)) &&
       (in_stack_000017ec != 0x2060)) {
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    }
LAB_0354b560:
    if (in_stack_000017ec != 0xa0) goto LAB_0354ba38;
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x50), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    goto LAB_0354b950;
  }
  *(undefined1 *)(lVar26 + 0x194) = 1;
  pfVar25 = _fStack00000000000000a0;
  pfVar29 = _fStack00000000000000a8;
  if (unaff_w23 != 0) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    pfVar29 = (float *)(lVar22 + 0x60);
    pfVar25 = (float *)(lVar22 + 100);
  }
  fVar49 = *pfVar29;
  fVar60 = *pfVar25;
  fVar54 = *(float *)(unaff_x19 + 0x6c);
  fVar39 = *(float *)(unaff_x19 + 200);
  in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar49) - fVar60;
  bVar11 = true;
  if ((fVar54 <= in_stack_000000f8._4_4_) && (bVar11 = false, !NAN(fVar54))) {
    bVar11 = fVar54 == -1.0;
  }
  if (!bVar11) {
    in_stack_000000f8._4_4_ = fVar54;
  }
  fVar54 = 0.0;
  if ((char)unaff_x19[0x1e] == '\0') {
    fVar54 = (float)FUN_03776cb4(&stack0x000017a0,0);
    uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    uVar48 = extraout_x1_02;
  }
  fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar57 = *(float *)((long)unaff_x19 + 0x4cc);
  if (in_stack_000017ec != 0xad) {
    fVar45 = fVar46;
  }
  fVar43 = (float)uVar50;
  fVar40 = 0.0;
  if ((0.0 < fVar43) && (fVar40 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar40 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar24 = *unaff_x20;
  fVar40 = (*(float *)(unaff_x19 + 0x97) - (fVar57 - fVar43)) + fVar40;
  if (fStack00000000000000c4 < fVar40) {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar24;
    }
    puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    uVar16 = DAT_00d37868;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar53 = *(float *)(unaff_x19 + 0x59);
      if (((fVar53 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar43)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar45 = *(float *)((long)unaff_x19 + 700) +
                 ((fStack0000000000000018 - fVar40) / (float)(int)unaff_x19[0x95]) /
                 in_stack_00000050;
        if (fVar45 <= fVar53) {
          fVar45 = fVar53;
        }
        goto UnityEngine_AndroidJavaObject___ctor;
      }
      fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar40 = *(float *)(unaff_x19 + 0x4a);
      uVar50 = (ulong)(uint)fVar40;
      if ((fVar40 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar45 = (fVar43 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar45 <= DAT_00d38b84) {
          fVar45 = DAT_00d38b84;
        }
        fVar54 = (fVar43 - fVar45) * 20.0 + 0.5;
        *(float *)((long)unaff_x19 + 0x23c) = fVar43;
        fVar45 = DAT_00d38e60;
        if (fVar54 != INFINITY) {
          fVar45 = (float)(int)fVar54 / 20.0;
        }
        if (fVar45 <= fVar40) {
          fVar45 = fVar40;
        }
        goto LAB_0354d004;
      }
    }
    switch((int)unaff_x19[0x5c]) {
    case 1:
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar10;
      }
      lVar26 = *(long *)(lVar22 + 0xb8);
      lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = FUN_01a46ff8(lVar22);
      }
      piVar19 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar19 == 0) goto LAB_0354cf2c;
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar10;
      }
      FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
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
      if ((uVar24 == 0) || ((int)in_stack_000017b8 < 0)) {
        *unaff_x20 = 0;
        in_stack_000017b8 = 0xffffffff;
        in_stack_000017d8 = uVar16;
        goto LAB_03549564;
      }
      fVar45 = *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017b8 = FUN_0358c15c();
      if (fVar45 - fVar57 <= fStack00000000000000c4) {
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
        uVar50 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        lVar22 = NEON_rev64(uVar50,4);
        unaff_x19[0x99] = lVar22;
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
      lVar22 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar48 = FUN_036cee6c(lVar22,0,0);
      if ((uVar48 & 1) != 0) {
        plVar36 = (long *)unaff_x19[0x5d];
        uVar16 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
        (**(code **)(*plVar36 + 0x528))(plVar36,uVar16,*(undefined8 *)(*plVar36 + 0x530));
        lVar22 = unaff_x19[0x5d];
        if (lVar22 == 0) goto LAB_0354fbf4;
        *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar36 = (long *)unaff_x19[0x5d];
        if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
        (**(code **)(*plVar36 + 0x7a8))(plVar36,0,0,*(undefined8 *)(*plVar36 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
    }
    goto LAB_0354b0e0;
  }
switchD_0354ad3c_caseD_2:
  puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  fVar54 = ABS(fVar39) + fVar54 * (1.0 - fVar42) * fVar45;
  fVar45 = 1.0;
  if ((uVar30 & 0x18) != 0) {
    fVar45 = DAT_00d38acc;
  }
  fVar39 = fVar45 * in_stack_000000f8._4_4_;
  if (fVar54 <= fVar39) goto LAB_0354b8e4;
  uVar50 = (ulong)(uint)fVar41;
  if (((char)unaff_x19[0x5b] == '\0') || (uVar24 == *(uint *)(unaff_x19 + 0x93))) {
    if (((char)unaff_x19[0x47] == '\0') ||
       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
LAB_0354ae98:
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar10;
        }
        lVar26 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = FUN_01a46ff8(lVar22);
        }
        piVar19 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar19 == 0) goto LAB_0354cf2c;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar10;
        }
        FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
        goto LAB_0354b394;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar48 = FUN_036cee6c(lVar22,0,0);
        if ((uVar48 & 1) != 0) {
          plVar36 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar36 + 0x528))(plVar36,uVar16,*(undefined8 *)(*plVar36 + 0x530));
          lVar22 = unaff_x19[0x5d];
          if (lVar22 == 0) goto LAB_0354fbf4;
          *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar36 = (long *)unaff_x19[0x5d];
          if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
          (**(code **)(*plVar36 + 0x7a8))(plVar36,0,0,*(undefined8 *)(*plVar36 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_0354b4b4;
      }
      if (iVar12 != 3) goto LAB_0354b8e4;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      goto LAB_0354af20;
    }
    fVar39 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if (fVar42 < fVar39) {
      fVar46 = fVar54 / (1.0 - fVar42);
      if (fVar42 <= 0.0) {
        fVar46 = fVar54;
      }
      fVar42 = fVar42 + (fVar54 - fVar45 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
      goto LAB_0354fc24;
    }
    fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
    fVar39 = *(float *)(unaff_x19 + 0x4a);
    if (fVar42 <= fVar39) goto LAB_0354ae98;
    fVar45 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar45 <= DAT_00d38b84) {
      fVar45 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar42;
    fVar42 = fVar42 - fVar45;
  }
  else {
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_000017b8 = FUN_0358c15c();
    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar39 = *(float *)(unaff_x19 + 0x9b);
      fVar42 = 0.0;
      if ((0.0 < fVar39) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar42 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar42 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
               *(float *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
               (fVar42 - *(float *)((long)unaff_x19 + 0x4cc)) +
               in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
    }
    else {
      lVar22 = unaff_x19[0x6d];
      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
      if (lVar22 == 0) goto LAB_0354fbf4;
      fVar39 = *(float *)(unaff_x19 + 0x9b);
      fVar42 = *(float *)(unaff_x19 + 0x58) + fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
    }
    puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_0354fbf4;
    uVar4 = *(uint *)((long)unaff_x19 + 0x494);
    if ((*(uint *)(lVar22 + 0x18) <= uVar4) ||
       (uVar35 = uVar4 - 1, *(uint *)(lVar22 + 0x18) <= uVar35))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar50 = (ulong)(uint)(fVar42 + *(float *)(unaff_x19 + 0x97));
    fVar57 = (fVar42 + *(float *)(unaff_x19 + 0x97) + fVar39) -
             *(float *)(lVar22 + (long)(int)uVar4 * unaff_x24 + 0x158);
    if (((bStack000000000000006c & 1) == 0 &&
         *(short *)(lVar22 + (long)(int)uVar35 * (long)iVar14 + 0x20) == 0xad) &&
       ((fVar57 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
      bStack000000000000006c = 0;
      *unaff_x20 = uVar35;
      in_stack_000017b8 = in_stack_000017b8 - 1;
      in_stack_000017d8 = CONCAT44(0x2d,uVar35);
      goto LAB_03549564;
    }
    if (*(short *)(lVar22 + (long)(int)uVar4 * unaff_x24 + 0x20) == 0xad) {
      bStack000000000000006c = 1;
      goto LAB_03549564;
    }
    if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) == 0) {
LAB_0354b6dc:
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar48 = extraout_x1_03;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar10;
        uVar48 = extraout_x1_05;
      }
      iVar12 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
      if (((iVar12 != iStack000000000000002c) && (iVar12 != -1)) &&
         (((bStack0000000000000068 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        uVar4 = *unaff_x20 - 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar4)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar48 = extraout_x1_06;
        iStack000000000000002c = iVar12;
        if (*(short *)(lVar22 + (long)(int)uVar4 * (long)iVar14 + 0x20) == 0xad) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar4;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          in_stack_000017d8 = CONCAT44(0x2d,uVar4);
          goto LAB_03549564;
        }
      }
      if (fStack00000000000000c4 < fVar57) {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar39 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar39 = *(float *)(unaff_x19 + 0x59);
          if ((fVar39 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar45 = *(float *)((long)unaff_x19 + 700) +
                     ((fStack0000000000000018 - fVar57) / (float)((int)unaff_x19[0x95] + 1)) /
                     in_stack_00000050;
            if (fVar45 <= fVar39) {
              fVar45 = fVar39;
            }
UnityEngine_AndroidJavaObject___ctor:
            *(float *)((long)unaff_x19 + 700) = fVar45;
            return;
          }
          fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar39 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar42 < fVar39) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_0354fc94;
          fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar50 = (ulong)(uint)fVar42;
          fVar39 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar39 < fVar42) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_0354fcd0;
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          break;
        case 1:
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar26 = *(long *)(lVar22 + 0xb8);
          lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = FUN_01a46ff8(lVar22);
          }
          piVar19 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar19 == 0) {
            bStack000000000000006c = 0;
LAB_0354cf2c:
            in_stack_000017d8 = DAT_00d37868;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            in_stack_000017b8 = 0xffffffff;
            goto LAB_03549564;
          }
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
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
          in_stack_000017d8 = CONCAT44(3,uVar24);
          goto LAB_03549564;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          uVar50 = unaff_d13;
          FUN_0358cbd4(in_stack_00000050,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                       in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000078 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_0354b8d0;
        case 6:
          lVar22 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_036cee6c(lVar22,0,0);
          if ((uVar48 & 1) != 0) {
            plVar36 = (long *)unaff_x19[0x5d];
            uVar16 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar36 + 0x528))(plVar36,uVar16,*(undefined8 *)(*plVar36 + 0x530));
            lVar22 = unaff_x19[0x5d];
            if (lVar22 == 0) goto LAB_0354fbf4;
            *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar36 = (long *)unaff_x19[0x5d];
            if (plVar36 == (long *)0x0) goto LAB_0354fbf4;
            (**(code **)(*plVar36 + 0x7a8))(plVar36,0,0,*(undefined8 *)(*plVar36 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bStack000000000000006c = 0;
LAB_0354b4b4:
          in_stack_000017d8 = CONCAT44(3,*unaff_x20);
          goto LAB_03549564;
        default:
          bStack000000000000006c = 0;
LAB_0354b8e4:
          if (in_stack_000017ec == 0xad) {
            if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(undefined1 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
          }
          else if (in_stack_000017ec == 9) {
            lVar22 = *unaff_x22;
            if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0))
            goto LAB_0354fbf4;
            uVar13 = *unaff_x20;
            if (*(uint *)(lVar26 + 0x18) <= uVar13)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            *(undefined1 *)(lVar26 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
            *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
            lVar26 = *(long *)(lVar22 + 0x50);
            if (lVar26 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
LAB_0354b950:
            *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
          }
          else {
            lVar22 = 0x4ec;
            if (*(char *)((long)unaff_x19 + 0x1d4) != '\0') {
              lVar22 = 0x144;
            }
            uVar48 = (ulong)*(uint *)((long)unaff_x19 + lVar22);
            if (*(int *)((long)unaff_x19 + 0x644) == 1) {
              (**(code **)(*unaff_x19 + 0x898))(fVar39,fVar41);
              uVar48 = extraout_x1_08;
            }
            else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
              (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
              uVar48 = extraout_x1_07;
            }
            uVar13 = *unaff_x20;
            if ((in_stack_00000060 & 1) != 0) {
              *(uint *)(in_stack_00000078 + 0x1f0) = uVar13;
            }
            *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
            *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
            if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x50), lVar22 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000060 = 0;
            *(float *)(lVar22 + 0x60) = fVar49;
            *(float *)(lVar22 + 100) = fVar60;
          }
LAB_0354ba38:
          if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017ec == 0x2d || (unaff_w23 != 1)))) {
            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
            fVar45 = *(float *)(unaff_x19 + 0x3d);
            iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
            fVar49 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
            lVar22 = unaff_x19[0xca];
            fVar54 = fStack0000000000000098;
            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
              fVar54 = 1.0;
            }
            if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0354fbf4;
            fVar39 = *(float *)((long)unaff_x19 + 0x404);
            fVar42 = *(float *)(lVar22 + 0x2c);
            fVar60 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
            fVar41 = *_fStack00000000000000a8;
            fVar60 = fVar39 * (fVar45 / (float)iVar12) * fVar49 * fVar54 * fVar42 * fVar60;
            fVar45 = *_fStack00000000000000a0;
            uVar48 = extraout_x1_09;
            if ((in_stack_000017ec == 10) &&
               (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
              if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
              goto LAB_0354fbf4;
              uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
              if (*(uint *)(lVar22 + 0x18) <= uVar13)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
              fVar54 = *(float *)(lVar22 + (long)(int)uVar13 * (long)iVar14 + 0x60);
              iVar14 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
              if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
              fVar39 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
              lVar22 = unaff_x19[0xca];
              fVar49 = fStack0000000000000098;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar49 = 1.0;
              }
              if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0354fbf4;
              fVar42 = *(float *)((long)unaff_x19 + 0x404);
              fVar57 = *(float *)(lVar22 + 0x2c);
              fVar60 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
              if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x50), lVar22 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              fVar41 = *(float *)(lVar22 + 0x60);
              fVar45 = *(float *)(lVar22 + 100);
              fVar60 = fVar42 * (fVar54 / (float)iVar14) * fVar39 * fVar49 * fVar57 * fVar60;
              uVar48 = extraout_x1_10;
            }
            fVar39 = *(float *)(unaff_x19 + 0x9b);
            fVar54 = 0.0;
            fVar49 = 0.0;
            if ((0.0 < fVar39) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
              fVar49 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
            }
            fVar57 = *(float *)(unaff_x19 + 0x97);
            fVar40 = *(float *)((long)unaff_x19 + 0x4cc);
            fVar42 = *(float *)(unaff_x19 + 200);
            if ((char)unaff_x19[0x1e] == '\0') {
              if ((unaff_x19[0xca] == 0) ||
                 (lVar22 = *(long *)(unaff_x19[0xca] + 0x20), lVar22 == 0)) goto LAB_0354fbf4;
              FUN_03776e6c(&stack0x000008b0,lVar22,0);
              fVar54 = (float)FUN_03776cb4(&stack0x00001710,0);
              uVar48 = extraout_x1_11;
            }
            puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            fVar43 = *(float *)(unaff_x19 + 0x6c);
            fVar45 = (fStack000000000000009c - fVar41) - fVar45;
            bVar11 = true;
            if ((fVar43 <= fVar45) && (bVar11 = false, !NAN(fVar43))) {
              bVar11 = fVar43 == -1.0;
            }
            if (!bVar11) {
              fVar45 = fVar43;
            }
            fVar41 = 1.0;
            if ((uVar30 & 0x18) != 0) {
              fVar41 = DAT_00d38acc;
            }
            if (((fVar57 - (fVar40 - fVar39)) + fVar49 < fStack00000000000000c4) &&
               (ABS(fVar42) + fVar60 * fVar54 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                fVar41 * fVar45)) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
              lVar22 = *(long *)(*(long *)puVar10 + 0xb8);
              memcpy(&stack0x00000538,(void *)(lVar22 + 0x788),0x378);
              FUN_0209b210(lVar22 + 0x11f0,&stack0x00000538,
                           *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
              uVar48 = extraout_x1_12;
            }
          }
          lVar22 = *unaff_x22;
          if (lVar22 == 0) goto LAB_0354fbf4;
          lVar26 = *(long *)(lVar22 + 0x38);
          unaff_d13 = (ulong)(uint)fVar46;
          if (lVar26 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar26 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar13 = *(uint *)(unaff_x19 + 0x95);
          lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
          *(uint *)(lVar26 + 100) = uVar13;
          *(int *)(lVar26 + 0x68) = (int)unaff_x19[0x96];
          if ((unaff_w23 == 0) &&
             ((0xd < in_stack_000017ec || ((1 << (ulong)(in_stack_000017ec & 0x1f) & 0x2c00U) == 0))
             )) {
            lVar22 = *(long *)(lVar22 + 0x50);
            if (lVar22 == 0) goto LAB_0354fbf4;
          }
          else {
            lVar22 = *(long *)(lVar22 + 0x50);
            if (lVar22 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar22 + 0x18) <= uVar13)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (*(int *)(lVar22 + (long)(int)uVar13 * 0x5c + 0x24) != 1) goto LAB_0354bdfc;
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar13)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(int *)(lVar22 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
LAB_0354bdfc:
          if (in_stack_000017ec == 9) {
            if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
            fVar45 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
            if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
            fVar49 = *(float *)(unaff_x19 + 200);
            fVar54 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
            fVar46 = fVar46 * fVar45 * fVar54;
            fVar54 = fVar46 * (float)(int)(fVar49 / fVar46);
            uVar50 = (ulong)(uint)fVar54;
            uVar48 = extraout_x1_13;
            if (fVar54 <= fVar49) {
              fVar54 = fVar49 + fVar46;
            }
            goto LAB_0354c000;
          }
          if (*(float *)(unaff_x19 + 0x56) != 0.0) {
            if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
            fVar49 = *(float *)(unaff_x19 + 200);
            fVar54 = fVar49 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                              (*(float *)((long)unaff_x19 + 0x2ac) +
                              (*(float *)(unaff_x19 + 0x56) - fVar56) +
                              fStack00000000000000d4 *
                              (in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
            *(float *)(unaff_x19 + 200) = fVar54;
            goto joined_r0x0354bfe8;
          }
          if ((char)unaff_x19[0x1e] == '\0') {
            if (*(char *)((long)unaff_x19 + 0x474) != '\0') {
              param_2 = 0;
              param_1 = _fStack0000000000000070;
              goto code_r0x0354bf60;
            }
            fVar45 = 1.0;
            goto LAB_0354bf70;
          }
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar54 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                   (*(float *)((long)unaff_x19 + 0x2ac) +
                   fVar46 * in_stack_00000128 +
                   fStack00000000000000d4 *
                   (fStack00000000000000d0 +
                   in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
          uVar50 = (ulong)(uint)fVar54;
          fVar54 = *(float *)(unaff_x19 + 200) - fVar54;
          *(float *)(unaff_x19 + 200) = fVar54;
          if ((in_stack_000017ec == 0x200b) || (unaff_w21 != 0)) goto LAB_0354bedc;
          goto LAB_0354c004;
        }
      }
      uVar50 = unaff_d13;
      FUN_0358cbd4(in_stack_00000050,unaff_d13,fStack00000000000000d4,
                   *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,in_stack_00000138
                   ,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
LAB_0354b8d0:
      bStack000000000000006c = 0;
LAB_0354c6b4:
      bStack0000000000000068 = 1;
      in_stack_00000060 = 1;
      uVar13 = in_stack_000017ec;
      goto LAB_03549564;
    }
    fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar39 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if ((fVar42 < fVar39) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_0354fc94:
      fVar46 = fVar54;
      if (0.0 < fVar42) {
        fVar46 = fVar54 / (1.0 - fVar42);
      }
      fVar42 = fVar42 + (fVar54 - fVar45 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
LAB_0354fc24:
      if (fVar39 <= fVar42) {
        fVar42 = fVar39;
      }
      *(float *)((long)unaff_x19 + 0x2d4) = fVar42;
      return;
    }
    fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
    uVar50 = (ulong)(uint)fVar42;
    fVar39 = *(float *)(unaff_x19 + 0x4a);
    if ((fVar42 <= fVar39) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
    goto LAB_0354b6dc;
LAB_0354fcd0:
    fVar45 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar45 <= DAT_00d38b84) {
      fVar45 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar42;
    fVar42 = fVar42 - fVar45;
  }
  fVar54 = fVar42 * 20.0 + 0.5;
  fVar45 = DAT_00d38e60;
  if (fVar54 != INFINITY) {
    fVar45 = (float)(int)fVar54 / 20.0;
  }
  if (fVar45 <= fVar39) {
    fVar45 = fVar39;
  }
LAB_0354d004:
  *(float *)((long)unaff_x19 + 0x1e4) = fVar45;
  return;
}


