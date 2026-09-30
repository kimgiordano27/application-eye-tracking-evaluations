/*
FUNCTION_NAME: UnityEngine.AndroidJavaProxy$$GetRawProxy
ENTRY_POINT: 0354be68
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


void UnityEngine_AndroidJavaProxy__GetRawProxy(float param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 in_ZR;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  undefined1 uVar20;
  char cVar21;
  uint in_w8;
  long lVar22;
  undefined4 *puVar23;
  float *pfVar24;
  long lVar25;
  code *pcVar26;
  uint uVar27;
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
  undefined4 uVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  ulong uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  ulong unaff_d13;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
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
  float in_stack_00000088;
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
  
code_r0x0354be68:
  uVar12 = (uint)unaff_x26;
  if ((bool)in_ZR) {
    if ((char)unaff_x19[0x1e] != '\0') {
      if (*in_stack_00000178 != 0) {
        fVar47 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                 (*(float *)((long)unaff_x19 + 0x2ac) +
                 (float)unaff_d13 * in_stack_00000128 +
                 fStack00000000000000d4 *
                 (fStack00000000000000d0 +
                 in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
        uVar46 = (ulong)(uint)fVar47;
        fVar47 = *(float *)(unaff_x19 + 200) - fVar47;
        *(float *)(unaff_x19 + 200) = fVar47;
        if ((in_w8 != 0x200b) && (in_w8 = in_stack_000017ec, unaff_w21 == 0)) goto LAB_0354c004;
        fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar46 = (ulong)(uint)fVar48;
        in_w8 = in_stack_000017ec;
        fVar47 = fVar47 - fVar48;
        goto LAB_0354c000;
      }
      goto LAB_0354fbf4;
    }
    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
      fVar58 = 1.0;
    }
    else {
      fVar58 = (float)thunk_FUN_036bc400(_fStack0000000000000070,0);
    }
    fVar47 = *(float *)(unaff_x19 + 200);
    fVar39 = (float)FUN_03776cb4(&stack0x000017a0,0);
    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
    fVar48 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
    fVar47 = fVar47 + fVar48 * (*(float *)((long)unaff_x19 + 0x2ac) +
                               (float)unaff_d13 * (in_stack_00000128 + fVar58 * fVar39) +
                               fStack00000000000000d4 *
                               (fStack00000000000000d0 +
                               in_stack_00000138 + *(float *)(unaff_x19[0x20] + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar47;
    in_w8 = in_stack_000017ec;
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar48 = *(float *)(unaff_x19 + 200);
    fVar47 = fVar48 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (param_1 - in_stack_00000088) +
                      fStack00000000000000d4 *
                      (in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar47;
  }
  if ((in_w8 != 0x200b) && (uVar46 = (ulong)(uint)fVar48, in_w8 = in_stack_000017ec, unaff_w21 == 0)
     ) goto LAB_0354c004;
  fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
  uVar46 = (ulong)(uint)fVar48;
  in_w8 = in_stack_000017ec;
  fVar47 = fVar47 + fVar48;
LAB_0354c000:
  uVar12 = (uint)unaff_x26;
  *(float *)(unaff_x19 + 200) = fVar47;
LAB_0354c004:
  lVar22 = *unaff_x22;
  if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  uVar14 = *unaff_x20;
  uVar27 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar27 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar25 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar47;
  iVar13 = (int)unaff_x24;
  uVar30 = in_w8;
  if ((int)in_w8 < 0xd) {
    if ((in_w8 - 10 < 2) || (in_w8 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
    if (((unaff_w23 & in_w8 == 0x2d) != 0) || ((float)uVar14 == in_stack_00000080._4_4_))
    goto LAB_0354c060;
  }
  else {
    if (1 < in_w8 - 0x2028) {
      if (in_w8 != 0xd) goto LAB_0354c6e8;
      uVar46 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar14 != in_stack_00000080._4_4_) goto LAB_0354c704;
    }
LAB_0354c060:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar48 = *(float *)(unaff_x19 + 0x99);
      fVar47 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar48 = fVar48 - fVar47;
      if (((fStack0000000000000058 < ABS(fVar48)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar48);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar48;
        *(float *)(unaff_x19 + 0x9b) = fVar48 + *(float *)(unaff_x19 + 0x9b);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        lVar25 = *(long *)(lVar22 + 0xb8);
        if (*(int *)(lVar25 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar25 + 0x11f0,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x000008b0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar22 + 0xb8) + 0x818,0);
          lVar22 = *(long *)(*(long *)puVar9 + 0xb8);
          *(float *)(lVar22 + 0x7bc) = fVar48 + *(float *)(lVar22 + 0x7bc);
          *(float *)(lVar22 + 0x800) = fVar48 + *(float *)(lVar22 + 0x800);
          memcpy(&stack0x000001c0,(void *)(lVar22 + 0x788),0x378);
          FUN_0209b210(lVar22 + 0x11f0,&stack0x000001c0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar58 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar47 = *(float *)((long)unaff_x19 + 0x4cc) - fVar58;
    fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar47 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar48 = fVar47;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar48;
    fVar39 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017e4 == '\0') {
      in_stack_000017e8 = fVar48;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017e4 = '\x01';
    }
    lVar22 = *unaff_x22;
    if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
    uVar14 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar25 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar37 = unaff_x19[0x93];
    lVar18 = lVar25 + (long)(int)uVar14 * 0x5c;
    *(int *)(lVar18 + 0x34) = (int)lVar37;
    uVar27 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar37 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar27 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar27;
    *(uint *)(lVar18 + 0x38) = uVar27;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar11 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar27 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
    *(int *)(lVar18 + 0x40) = iVar11;
    *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar27)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar57 = *(undefined4 *)(lVar22 + (long)(int)uVar27 * (long)iVar13 + 0x11c);
    lVar25 = lVar25 + (long)(int)uVar14 * 0x5c;
    *(float *)(lVar25 + 0x70) = fVar47;
    *(undefined4 *)(lVar25 + 0x6c) = uVar57;
    lVar22 = *unaff_x22;
    if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    fVar39 = fVar39 - fVar58;
    uVar46 = (ulong)(uint)fVar39;
    lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) =
         *(undefined4 *)(lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar25 + 0x78) = fVar39;
    lVar22 = *unaff_x22;
    if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0)) goto LAB_0354fbf4;
    lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = lVar37 + lVar18 * 0x5c;
    *(float *)(lVar25 + 0x44) =
         *(float *)(lVar25 + 0x74) - (float)unaff_d13 * in_stack_00000168._4_4_;
    *(float *)(lVar25 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar25 + 0x24) == 1) {
      *(int *)(lVar37 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*in_stack_00000178 == 0) || (lVar25 = *(long *)(lVar22 + 0x38), lVar25 == 0))
    goto LAB_0354fbf4;
    lVar38 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar27 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar27 <= *(uint *)((long)unaff_x19 + 0x4a4))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if ((*(char *)(lVar25 + lVar38 * unaff_x24 + 0x194) == '\0') &&
       (lVar38 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar27 <= *(uint *)(unaff_x19 + 0x94)))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar37 = lVar37 + lVar18 * 0x5c;
    fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + in_stack_00000138 + *(float *)(*in_stack_00000178 + 0x1ac))
             - *(float *)((long)unaff_x19 + 0x2ac));
    fVar48 = -fVar58;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar48 = fVar58;
    }
    *(float *)(lVar37 + 0x58) = *(float *)(lVar25 + lVar38 * unaff_x24 + 0x144) + fVar48;
    *(float *)(lVar37 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar37 + 0x54) = fVar47;
    *(float *)(lVar37 + 0x48) = fStack000000000000005c + (fVar39 - fVar47);
    *(float *)(lVar37 + 0x4c) = fVar39;
    if ((int)in_w8 < 0x2d) {
      if (in_w8 - 10 < 2) {
LAB_0354c4a8:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar22 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar11 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar11;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x50) == 0)) goto LAB_0354fbf4;
        if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar11) {
          FUN_0358ca18();
          lVar22 = unaff_x19[0x6d];
          if (lVar22 == 0) goto LAB_0354fbf4;
        }
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
          fVar48 = *(float *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
          if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
            if ((in_w8 == 0x2029) || (fVar47 = 0.0, in_w8 == 10)) {
              fVar47 = *(float *)((long)unaff_x19 + 0x2cc);
            }
            uVar20 = 0;
            fVar47 = fVar48 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                     in_stack_00000050 *
                     (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                     fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar47) +
                     *(float *)(unaff_x19 + 0x9b);
          }
          else {
            if ((in_w8 == 0x2029) || (fVar47 = 0.0, in_w8 == 10)) {
              fVar47 = *(float *)((long)unaff_x19 + 0x2cc);
            }
            uVar20 = 1;
            fVar47 = *(float *)(unaff_x19 + 0x9b) +
                     *(float *)(unaff_x19 + 0x58) +
                     fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar47);
          }
          *(float *)(unaff_x19 + 0x9b) = fVar47;
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar20;
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)puVar9;
          }
          uVar16 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x9a) = fVar48;
          uVar46 = NEON_rev64(uVar16,4);
          unaff_x19[0x99] = uVar46;
          *(float *)(unaff_x19 + 200) =
               *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
          FUN_0358c4f0();
          FUN_0358c4f0();
          *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
          goto LAB_0354c6b4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      if (in_w8 == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
        in_stack_000017b8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar30 = 3;
      }
    }
    else if ((in_w8 - 0x2028 < 2) || (in_w8 == 0x2d)) goto LAB_0354c4a8;
  }
LAB_0354c704:
  uVar14 = *unaff_x20;
  if (uVar27 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (*(char *)(lVar25 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
    lVar25 = lVar25 + (long)(int)uVar14 * unaff_x24;
    uVar49 = *(ulong *)(lVar25 + 0x11c);
    uVar46 = *(ulong *)(in_stack_00000078 + 0x230);
    *(ulong *)(in_stack_00000078 + 0x230) =
         uVar46 ^ (uVar46 ^ uVar49) &
                  ~CONCAT44(-(uint)((float)(uVar46 >> 0x20) < (float)(uVar49 >> 0x20)),
                            -(uint)((float)uVar46 < (float)uVar49));
    uVar49 = *(ulong *)(in_stack_00000078 + 0x238);
    uVar46 = *(ulong *)(lVar25 + 0x128);
    *(ulong *)(in_stack_00000078 + 0x238) =
         uVar49 ^ (uVar49 ^ uVar46) &
                  ~CONCAT44(-(uint)((float)(uVar46 >> 0x20) < (float)(uVar49 >> 0x20)),
                            -(uint)((float)uVar46 < (float)uVar49));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar30 || ((1 << (ulong)(uVar30 & 0x1f) & 0x2c00U) == 0)))) {
    lVar25 = *(long *)(lVar22 + 0x58);
    if (lVar25 == 0) goto LAB_0354fbf4;
    iVar11 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar25 + 0x18) < iVar11) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar22 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar22 = *unaff_x22;
      if (lVar22 == 0) goto LAB_0354fbf4;
    }
    lVar25 = *(long *)(lVar22 + 0x58);
    if (lVar25 == 0) goto LAB_0354fbf4;
    uVar27 = *(uint *)(unaff_x19 + 0x96);
    lVar37 = (long)(int)uVar27;
    uVar14 = *(uint *)(lVar25 + 0x18);
    if (uVar14 <= uVar27) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar25 + lVar37 * 0x14;
    fVar47 = *(float *)(lVar18 + 0x30);
    uVar46 = (ulong)(uint)fVar47;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar47 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar48 = fVar47;
    }
    *(float *)(lVar18 + 0x30) = fVar48;
    uVar30 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar30 == 0 && uVar27 == 0) {
      *(uint *)(lVar25 + (ulong)uVar27 * 0x14 + 0x20) = uVar30;
    }
    else {
      uVar35 = uVar30 - 1;
      if (0 < (int)uVar30) {
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) <= uVar35)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (uVar27 != *(uint *)(lVar22 + (ulong)uVar35 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar27 - 1 < uVar14) {
            *(uint *)(lVar25 + 0x20 + (long)(int)(uVar27 - 1) * 0x14 + 4) = uVar35;
            *(uint *)(lVar25 + 0x20 + lVar37 * 0x14) = uVar30;
            goto LAB_0354c780;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
      }
      if ((float)uVar30 == in_stack_00000080._4_4_) {
        *(float *)(lVar25 + lVar37 * 0x14 + 0x24) = in_stack_00000080._4_4_;
      }
    }
  }
LAB_0354c780:
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_0354cc90;
  if ((unaff_w21 == 0) && (((in_w8 != 0x2d && (in_w8 != 0x200b)) && (in_w8 != 0xad)))) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000068 & 1) != 0) goto LAB_0354c910;
      goto LAB_0354cc88;
    }
LAB_0354c87c:
    if (((((0x2bfd < in_w8 - 0xac01) && (0xfd < in_w8 - 0x1101)) && (0x1d < in_w8 - 0xa961)) ||
        (uVar49 = FUN_03597a54(0), (uVar49 & 1) != 0)) &&
       ((((0xed < in_w8 - 0xff01 && (0x1d < in_w8 - 0xfe31)) && (0x717d < in_w8 - 0x2e81)) &&
        (0x1fd < in_w8 - 0xf901)))) goto LAB_0354c904;
    lVar22 = FUN_035978e8(0);
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0354fbf4;
    uVar14 = FUN_0219c130(*(long *)(lVar22 + 0x10),&stack0x000008b0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000080._4_4_ <= (int)*unaff_x20) {
      in_stack_000008b0 = in_w8;
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
      if (uVar12 != unaff_w25 || ((bStack0000000000000068 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
      if (unaff_w21 == 0) goto LAB_0354cbc0;
      goto LAB_0354cb88;
    }
    lVar22 = FUN_035978e8(0);
    if (((lVar22 == 0) || (*unaff_x22 == 0)) || (lVar25 = *(long *)(*unaff_x22 + 0x38), lVar25 == 0)
       ) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20 + 1)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_0354fbf4;
    in_stack_000008b0 =
         (uint)*(ushort *)(lVar25 + (long)(int)(*unaff_x20 + 1) * (long)iVar13 + 0x20);
    uVar49 = FUN_0219c130(*(long *)(lVar22 + 0x18),&stack0x000008b0,
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
      if (((0x28 < in_w8 - 0x2007) ||
          ((1L << ((ulong)(in_w8 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_w8 != 0xa0 && (in_w8 != 0x2060)))) {
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
      if ((bStack000000000000006c & 1) == 0 && in_w8 == 0xad) goto LAB_0354cb88;
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
  uVar12 = in_w8;
LAB_03549564:
  fVar48 = (float)unaff_d13;
  in_stack_000017b8 = in_stack_000017b8 + 1;
  lVar22 = unaff_x19[0x8f];
  if (lVar22 != 0) {
    if ((int)in_stack_000017b8 < (int)*(uint *)(lVar22 + 0x18)) {
      if (*(uint *)(lVar22 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      in_w8 = *(uint *)(lVar22 + (long)(int)in_stack_000017b8 * 0xc + 0x20);
      if (in_w8 == 0) goto LAB_0354cf48;
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
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_w8 == 0x3c)) goto code_r0x035492f0;
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
    fVar48 = (float)uVar46;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar48 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar47 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar48 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar58 = (*(float *)((long)unaff_x19 + 0x23c) - fVar48) * 0.5;
        if (fVar58 <= DAT_00d38b84) {
          fVar58 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar48;
        fVar58 = (fVar48 + fVar58) * 20.0 + 0.5;
        fVar48 = DAT_00d38e60;
        if (fVar58 != INFINITY) {
          fVar48 = (float)(int)fVar58 / 20.0;
        }
        if (fVar47 <= fVar48) {
          fVar48 = fVar47;
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
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar12 == 3)))) {
      (**(code **)(*unaff_x19 + 0x928))();
      goto LAB_0354d0cc;
    }
    lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar22 = *(long *)puVar9;
    }
    plVar36 = (long *)OVRPlugin_Media_TypeInfo;
    lVar22 = **(long **)(lVar22 + 0xb8);
    if (lVar22 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    iVar13 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
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
    iVar11 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000f0 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar22 = unaff_x19[0xeb];
    in_stack_000000b8 = (long *)uStack00000000000000f0;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar11 < 0x401) {
      if (iVar11 == 0x100) {
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar22 + 0x18) < 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar16 = *(undefined8 *)(lVar22 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x58), lVar25 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          fVar48 = *(float *)(lVar25 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
        }
        else {
          fVar48 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar22 + 0x2c);
        fVar48 = (0.0 - fVar48) - fStack000000000000001c;
      }
      else if (iVar11 == 0x200) {
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
          fVar48 = ((fStack000000000000001c + *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x30))
                   - fStack0000000000000020) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack0000000000000028 + 0.0 + fStack00000000000000c4;
          fVar48 = ((fStack000000000000001c + *(float *)(unaff_x19 + 0x97) + in_stack_000017e8) -
                   fStack0000000000000020) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar11 != 0x400) goto LAB_0354d620;
        if (lVar22 == 0) goto LAB_0354fbf4;
        if (*(int *)(lVar22 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar16 = *(undefined8 *)(lVar22 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x22 == 0) || (lVar25 = *(long *)(*unaff_x22 + 0x58), lVar25 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000034)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          in_stack_000017e8 = *(float *)(lVar25 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack0000000000000028 + 0.0 + *(float *)(lVar22 + 0x20);
        fVar48 = fStack0000000000000020 + (0.0 - in_stack_000017e8);
      }
LAB_0354d610:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar48);
    }
    else if (iVar11 == 0x800) {
      if (lVar22 == 0) goto LAB_0354fbf4;
      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar48 = fStack0000000000000028 + 0.0 +
               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar22 + 0x24) +
                            (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar48;
    }
    else {
      if (iVar11 == 0x1000) {
        if (lVar22 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar22 + 0x18) != 1) && (*(int *)(lVar22 + 0x18) != 0)) {
          uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar22 + 0x24) +
                            (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack0000000000000028 + 0.0 +
               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
          fVar48 = 0.0 - ((fStack000000000000001c + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000020) * 0.5;
          goto LAB_0354d610;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      if (iVar11 == 0x2000) {
        if (lVar22 == 0) goto LAB_0354fbf4;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        fVar48 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack000000000000001c) -
                       fStack0000000000000020) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar22 + 0x24) +
                              (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + fVar48);
        fStack00000000000000c4 =
             fStack0000000000000028 + 0.0 +
             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      }
    }
LAB_0354d620:
    lVar22 = FUN_03559490();
    if (lVar22 == 0) goto LAB_0354fbf4;
    FUN_036df824(lVar22,0);
    *(float *)((long)unaff_x19 + 0x6e4) = fVar48;
    uVar57 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar9 = OVRPlugin_Mesh_TypeInfo;
    lVar22 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar22 = *(long *)puVar9;
    }
    puVar23 = *(undefined4 **)(lVar22 + 0xb8);
    FUN_035683a4(*puVar23,puVar23[1],puVar23[2],puVar23[3],&stack0x000017c0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar22 = *unaff_x22;
    if (lVar22 == 0) goto LAB_0354fbf4;
    uVar12 = *unaff_x20;
    if ((int)uVar12 < 1) {
      iStack00000000000000d8 = 0;
      iVar13 = 0;
      goto LAB_0354f7f4;
    }
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_0354fbf4;
    bVar10 = false;
    bVar8 = false;
    bVar6 = false;
    fStack0000000000000124 = 0.0;
    bVar7 = false;
    iStack00000000000000d8 = 0;
    uStack0000000000000030 = 0;
    in_stack_00000168._4_4_ = 0.0;
    fStack000000000000005c = 0.0;
    lVar25 = 0x2e0;
    fVar58 = 0.0;
    fVar47 = 0.0;
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
    uVar14 = 0;
    uVar27 = 1;
    goto LAB_0354d7c0;
  }
  goto LAB_0354fbf4;
LAB_0354d7c0:
  uVar12 = uVar27 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x50), lVar37 == 0)) goto LAB_0354fbf4;
  lVar38 = (long)(int)uVar12;
  lVar18 = lVar22 + lVar38 * 0x178;
  uVar30 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar37 + 0x18) <= uVar30)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar31 = *(long *)(lVar18 + 0x38);
  lVar34 = (long)(int)uVar30;
  lVar37 = lVar37 + lVar34 * 0x5c;
  uVar35 = *(uint *)(lVar37 + 0x68);
  uVar28 = (uint)*(ushort *)(lVar18 + 0x20);
  uVar4 = *(uint *)(lVar37 + 0x3c);
  iVar2 = *(int *)(lVar37 + 0x20);
  iVar11 = *(int *)(lVar37 + 0x28);
  iVar15 = *(int *)(lVar37 + 0x2c);
  fVar54 = *(float *)(lVar37 + 0x4c);
  uVar5 = *(uint *)(lVar37 + 0x40);
  fVar42 = *(float *)(lVar37 + 0x54);
  fVar39 = *(float *)(lVar37 + 0x58);
  fVar41 = *(float *)(lVar37 + 0x5c);
  fVar52 = *(float *)(lVar37 + 0x60);
  fVar55 = *(float *)(lVar37 + 0x6c);
  fVar43 = *(float *)(lVar37 + 0x70);
  fVar59 = *(float *)(lVar37 + 0x74);
  fVar40 = *(float *)(lVar37 + 0x78);
  if ((int)uVar35 < 9) {
    switch(uVar35) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar52 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar39;
      }
      break;
    case 2:
LAB_0354d968:
      in_stack_000000f8._4_4_ = (fVar52 + fVar41 * 0.5) - fVar39 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar41 + fVar52) - fVar39;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar41 + fVar52;
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
      if (*(uint *)(lVar22 + 0x18) <= uVar4)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar3 = *(undefined2 *)(lVar22 + (long)(int)uVar4 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar46 = FUN_026b8cc4(uVar3,0);
      if ((uVar46 & 1) == 0) {
        bVar1 = (int)uVar30 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar39 <= fVar41) && (!bVar1 && uVar35 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar52;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar41 + fVar52;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar27 == 1) || (uVar30 != uVar14)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar52;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar41 + fVar52;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar28,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar21 = (char)unaff_x19[0x1e];
        fVar52 = -fVar39;
        if (cVar21 != '\0') {
          fVar52 = fVar39;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar4)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar15 = (int)*(char *)(lVar22 + (long)(int)uVar4 * 0x178 + 0x194) +
                 (-iVar2 - (uStack0000000000000030 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar39 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar39 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar28 == 9) {
LAB_0354f76c:
          fVar39 = 1.0 - fVar39;
        }
        else {
          if (uVar28 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar46 = FUN_026b97f8(uVar28,0);
            cVar21 = (char)unaff_x19[0x1e];
            if ((uVar46 & 1) != 0) goto LAB_0354f76c;
          }
          iVar15 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar11;
        }
        fVar39 = ((fVar41 + fVar52) * fVar39) / (float)iVar15;
        if (cVar21 == '\0') {
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
  else if (uVar35 == 0x20) {
    fVar39 = fVar55 + fVar59;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar35 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar22 + lVar38 * 0x178;
  fVar52 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar39 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar41 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar37 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar11 = *(int *)(lVar22 + lVar38 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0354e05c;
  fVar58 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar30,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar18 = lVar22 + lVar38 * 0x178;
    *(undefined4 *)(lVar18 + 0x84) = 0;
    *(undefined4 *)(lVar18 + 0xac) = 0;
    *(undefined4 *)(lVar18 + 0xd4) = 0x3f800000;
    fVar58 = 1.0;
    break;
  case 1:
    fVar40 = *(float *)(lVar22 + lVar38 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar18 = lVar22 + lVar38 * 0x178;
      fVar59 = (in_stack_000000f8._4_4_ + fVar40) - *(float *)(in_stack_00000078 + 0x230);
      fVar40 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar59 = fVar59 - fVar55;
    *(float *)(lVar18 + 0x84) = fVar58 + (fVar40 - fVar55) / fVar59;
    *(float *)(lVar18 + 0xac) = fVar58 + (*(float *)(lVar18 + 0x98) - fVar55) / fVar59;
    *(float *)(lVar18 + 0xd4) = fVar58 + (*(float *)(lVar18 + 0xc0) - fVar55) / fVar59;
    fVar58 = fVar58 + (*(float *)(lVar18 + 0xe8) - fVar55) / fVar59;
    break;
  case 2:
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar40 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar59 = (in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar18 + 0x84) = fVar58 + fVar59 / fVar40;
    *(float *)(lVar18 + 0xac) =
         fVar58 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar18 + 0xd4) =
         fVar58 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar58 = fVar58 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xe8)) -
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
      fVar40 = fVar40 - fVar43;
      fVar59 = fVar58 + (*(float *)(lVar18 + 0x74) - fVar43) / fVar40;
      fVar40 = fVar58 + (*(float *)(lVar18 + 0x9c) - fVar43) / fVar40;
      *(float *)(lVar18 + 0x88) = fVar59;
      *(float *)(lVar18 + 0xb0) = fVar40;
      *(float *)(lVar18 + 0xd8) = fVar59;
      *(float *)(lVar18 + 0x100) = fVar40;
      break;
    case 2:
      lVar18 = lVar22 + lVar38 * 0x178;
      fVar59 = fVar58 + (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar18 + 0x88) = fVar59;
      fVar40 = *(float *)(unaff_x19 + 0x9c);
      fVar55 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar18 + 0xd8) = fVar59;
      fVar59 = fVar58 + (*(float *)(lVar18 + 0x9c) - fVar40) / (fVar55 - fVar40);
      *(float *)(lVar18 + 0xb0) = fVar59;
      *(float *)(lVar18 + 0x100) = fVar59;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar35 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar59 = *(float *)(lVar18 + 0x15c);
    fVar40 = (1.0 - (*(float *)(lVar18 + 0x88) + *(float *)(lVar18 + 0xb0)) * fVar59) * 0.5;
    fVar55 = fVar58 + *(float *)(lVar18 + 0x88) * fVar59 + fVar40;
    fVar58 = fVar58 + fVar40 + *(float *)(lVar18 + 0xb0) * fVar59;
    *(float *)(lVar18 + 0x84) = fVar55;
    *(float *)(lVar18 + 0xac) = fVar55;
    *(float *)(lVar18 + 0xd4) = fVar58;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar22 + lVar38 * 0x178 + 0xfc) = fVar58;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    *(undefined4 *)(lVar18 + 0x88) = 0;
    *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar35) {
      lVar18 = lVar22 + lVar38 * 0x178;
      fVar54 = fVar54 - fVar42;
      fVar58 = (*(float *)(lVar18 + 0x74) - fVar42) / fVar54;
      fVar54 = (*(float *)(lVar18 + 0x9c) - fVar42) / fVar54;
      *(float *)(lVar18 + 0x88) = fVar58;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar58 = (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar18 + 0x88) = fVar58;
    fVar54 = (*(float *)(lVar18 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar18 + 0xb0) = fVar54;
    *(float *)(lVar18 + 0xd8) = fVar54;
    *(float *)(lVar18 + 0x100) = fVar58;
    break;
  case 3:
    if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar22 + lVar38 * 0x178;
    fVar54 = *(float *)(lVar18 + 0x15c);
    fVar59 = (1.0 - (*(float *)(lVar18 + 0x84) + *(float *)(lVar18 + 0xd4)) / fVar54) * 0.5;
    fVar58 = *(float *)(lVar18 + 0x84) / fVar54 + fVar59;
    fVar59 = fVar59 + *(float *)(lVar18 + 0xd4) / fVar54;
    *(float *)(lVar18 + 0x88) = fVar58;
    *(float *)(lVar18 + 0xb0) = fVar59;
    *(float *)(lVar18 + 0x100) = fVar58;
    *(float *)(lVar18 + 0xd8) = fVar59;
  }
  if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar18 = lVar22 + lVar38 * 0x178;
  fVar58 = ABS(fVar48) * *(float *)(lVar18 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar18 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar38 * 0x178 + 400) & 1) != 0)) {
    fVar58 = -fVar58;
  }
  lVar18 = lVar22 + lVar38 * 0x178;
  fVar54 = *(float *)(lVar18 + 0x88);
  fVar40 = *(float *)(lVar18 + 0x84);
  fVar59 = -2.1474836e+09;
  if (fVar40 != INFINITY) {
    fVar59 = (float)(int)fVar40;
  }
  fVar55 = *(float *)(lVar18 + 0xd4);
  fVar43 = *(float *)(lVar18 + 0xd8);
  fVar42 = -2.1474836e+09;
  if (fVar54 != INFINITY) {
    fVar42 = (float)(int)fVar54;
  }
  uVar45 = FUN_03591d3c(fVar40 - fVar59,fVar54 - fVar42);
  *(undefined4 *)(lVar18 + 0x84) = uVar45;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar43 = fVar43 - fVar42;
  *(float *)(lVar18 + 0x88) = fVar58;
  uVar45 = FUN_03591d3c(fVar40 - fVar59,fVar43);
  *(undefined4 *)(lVar22 + lVar38 * 0x178 + 0xac) = uVar45;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar55 = fVar55 - fVar59;
  *(float *)(lVar22 + lVar38 * 0x178 + 0xb0) = fVar58;
  fVar59 = (float)FUN_03591d3c(fVar55,fVar43);
  *(float *)(lVar18 + 0xd4) = fVar59;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar18 + 0xd8) = fVar58;
  uVar45 = FUN_03591d3c(fVar55,fVar54 - fVar42);
  *(undefined4 *)(lVar22 + lVar38 * 0x178 + 0xfc) = uVar45;
  uVar35 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar22 + lVar38 * 0x178 + 0x100) = fVar58;
LAB_0354e05c:
  if (((int)uVar12 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar37 = lVar22 + lVar38 * 0x178;
      *(ulong *)(lVar37 + 0x70) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar37 + 0x70));
      *(float *)(lVar37 + 0x78) = fVar41 + *(float *)(lVar37 + 0x78);
      *(ulong *)(lVar37 + 0x98) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar37 + 0x98) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar37 + 0x98));
      *(float *)(lVar37 + 0xa0) = fVar41 + *(float *)(lVar37 + 0xa0);
      *(ulong *)(lVar37 + 0xc0) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar37 + 0xc0) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar37 + 0xc0));
      *(float *)(lVar37 + 200) = fVar41 + *(float *)(lVar37 + 200);
      *(ulong *)(lVar37 + 0xe8) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar37 + 0xe8) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar37 + 0xe8));
      *(float *)(lVar37 + 0xf0) = fVar41 + *(float *)(lVar37 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar12 < uVar35) {
        if (*(uint *)(lVar22 + lVar38 * 0x178 + 0x68) == uStack0000000000000034) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar35 = *(uint *)(lVar22 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar18 = lVar22 + lVar38 * 0x178;
  *(undefined8 *)(lVar18 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar18 + 0x78) = uVar45;
  if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar18 = lVar22 + lVar38 * 0x178;
  *(undefined8 *)(lVar18 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar18 + 0xa0) = uVar45;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar18 + 200) = uVar45;
  uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar18 + 0xf0) = uVar45;
  *(undefined1 *)(lVar37 + 0x194) = 0;
LAB_0354e184:
  if (iVar11 == 0) {
    pcVar26 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar26)();
  }
  else if (iVar11 == 1) {
    pcVar26 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  uVar16 = *(undefined8 *)(lVar37 + 0x11c);
  *(undefined8 *)(lVar37 + 0x11c) =
       CONCAT44(fVar39 + (float)((ulong)uVar16 >> 0x20),fVar52 + (float)uVar16);
  *(float *)(lVar37 + 0x124) = fVar41 + *(float *)(lVar37 + 0x124);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  *(ulong *)(lVar37 + 0x110) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar37 + 0x110) >> 0x20),
                fVar52 + (float)*(undefined8 *)(lVar37 + 0x110));
  *(float *)(lVar37 + 0x118) = fVar41 + *(float *)(lVar37 + 0x118);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  *(ulong *)(lVar37 + 0x128) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar37 + 0x128) >> 0x20),
                fVar52 + (float)*(undefined8 *)(lVar37 + 0x128));
  *(float *)(lVar37 + 0x130) = fVar41 + *(float *)(lVar37 + 0x130);
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = lVar37 + lVar38 * 0x178;
  *(float *)(lVar37 + 0x134) = fVar52 + *(float *)(lVar37 + 0x134);
  *(ulong *)(lVar37 + 0x138) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar37 + 0x138) >> 0x20),
                fVar39 + (float)*(undefined8 *)(lVar37 + 0x138));
  lVar37 = *unaff_x22;
  if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
  uVar35 = *(uint *)(lVar18 + 0x18);
  if (uVar35 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar32 = lVar18 + lVar38 * 0x178;
  *(float *)(lVar32 + 0x150) = fVar39 + *(float *)(lVar32 + 0x150);
  *(ulong *)(lVar32 + 0x140) =
       CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar32 + 0x140) >> 0x20),
                fVar52 + (float)*(undefined8 *)(lVar32 + 0x140));
  *(ulong *)(lVar32 + 0x148) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0x148) >> 0x20),
                fVar39 + (float)*(undefined8 *)(lVar32 + 0x148));
  if (uVar30 == uVar14) {
    uVar14 = *unaff_x20 - 1;
    if (uVar12 == uVar14) goto LAB_0354e3ec;
  }
  else {
    lVar37 = *(long *)(lVar37 + 0x50);
    if (lVar37 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar37 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar32 = (long)(int)uVar14;
    lVar33 = lVar37 + lVar32 * 0x5c;
    fVar59 = fVar39 + *(float *)(lVar33 + 0x54);
    *(ulong *)(lVar33 + 0x4c) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                  fVar39 + (float)*(undefined8 *)(lVar33 + 0x4c));
    *(float *)(lVar33 + 0x54) = fVar59;
    *(float *)(lVar33 + 0x58) = fVar52 + *(float *)(lVar33 + 0x58);
    if (uVar35 <= *(uint *)(lVar33 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar45 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
    lVar37 = lVar37 + lVar32 * 0x5c;
    *(float *)(lVar37 + 0x70) = fVar59;
    *(undefined4 *)(lVar37 + 0x6c) = uVar45;
    lVar37 = *unaff_x22;
    if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar37 = *(long *)(lVar37 + 0x38);
    if (lVar37 == 0) goto LAB_0354fbf4;
    uVar14 = *(uint *)(lVar18 + lVar32 * 0x5c + 0x40);
    if (*(uint *)(lVar37 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar18 + lVar32 * 0x5c;
    *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar14 * 0x178 + 0x128);
    *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    uVar14 = *unaff_x20 - 1;
LAB_0354e3ec:
    if (uVar12 == uVar14) {
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar32 = lVar18 + lVar34 * 0x5c;
      fVar59 = fVar39 + *(float *)(lVar32 + 0x54);
      *(ulong *)(lVar32 + 0x4c) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar32 + 0x4c) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar32 + 0x4c));
      *(float *)(lVar32 + 0x54) = fVar59;
      *(float *)(lVar32 + 0x58) = fVar52 + *(float *)(lVar32 + 0x58);
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar32 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar45 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar32 + 0x34) * 0x178 + 0x11c);
      lVar18 = lVar18 + lVar34 * 0x5c;
      *(float *)(lVar18 + 0x70) = fVar59;
      *(undefined4 *)(lVar18 + 0x6c) = uVar45;
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x50), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      uVar14 = *(uint *)(lVar18 + lVar34 * 0x5c + 0x40);
      if (*(uint *)(lVar37 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar18 + lVar34 * 0x5c;
      *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar14 * 0x178 + 0x128);
      *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar46 = FUN_026b82c4(uVar28,0);
  if (((((uVar46 & 1) == 0) && (1 < uVar28 - 0x2010)) && (uVar28 != 0xad)) && (uVar28 != 0x2d)) {
    if (bVar6) {
      if (((uVar27 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*unaff_x20 && ((uVar28 == 0x2019 || (uVar28 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar27 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar3 = *(undefined2 *)(lVar22 + lVar25 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar46 = FUN_026b82c4(uVar3,0);
        if ((uVar46 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar27)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar3 = *(undefined2 *)(lVar22 + lVar25 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar46 = FUN_026b82c4(uVar3,0);
          if ((uVar46 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar27 != 1) {
LAB_0354f144:
        bVar6 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar46 = FUN_026b81f8(uVar28,0);
      if ((uVar46 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar46 = FUN_026b63d8(uVar28,0);
        if (((uVar28 != 0x200b) && ((uVar46 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar12 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar46 = FUN_026b82c4(uVar28,0);
      iVar11 = (int)fStack0000000000000124;
      if ((uVar46 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar11 = uVar27 - 2;
    }
    lVar37 = *unaff_x22;
    if (lVar37 == 0) goto LAB_0354fbf4;
    lVar18 = *(long *)(lVar37 + 0x40);
    if (lVar18 == 0) goto LAB_0354fbf4;
    uVar14 = *(uint *)(lVar37 + 0x24);
    iVar15 = *(int *)(lVar18 + 0x18);
    if (iVar15 < (int)(uVar14 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar37 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar37 = *unaff_x22;
      if (lVar37 == 0) goto LAB_0354fbf4;
    }
    lVar37 = *(long *)(lVar37 + 0x40);
    if (lVar37 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar37 + 0x18) <= uVar14)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar37 = lVar37 + (long)(int)uVar14 * 0x18;
    *(long **)(lVar37 + 0x20) = unaff_x19;
    *(float *)(lVar37 + 0x28) = in_stack_00000168._4_4_;
    *(int *)(lVar37 + 0x2c) = iVar11;
    *(int *)(lVar37 + 0x30) = (iVar11 - (int)in_stack_00000168._4_4_) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar37 = unaff_x19[0x6d];
    if (lVar37 == 0) goto LAB_0354fbf4;
    lVar18 = *(long *)(lVar37 + 0x50);
    *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
    if (lVar18 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar30)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar18 = lVar18 + lVar34 * 0x5c;
    bVar6 = false;
    iStack00000000000000d8 = iStack00000000000000d8 + 1;
    *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000168._4_4_ = (float)uVar12;
    }
    if (uVar12 == *unaff_x20 - 1) {
      lVar37 = *unaff_x22;
      if (lVar37 == 0) goto LAB_0354fbf4;
      lVar18 = *(long *)(lVar37 + 0x40);
      if (lVar18 == 0) goto LAB_0354fbf4;
      uVar14 = *(uint *)(lVar37 + 0x24);
      iVar11 = *(int *)(lVar18 + 0x18);
      if (iVar11 < (int)(uVar14 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar37 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar37 = *unaff_x22;
        if (lVar37 == 0) goto LAB_0354fbf4;
      }
      lVar37 = *(long *)(lVar37 + 0x40);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar14)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + (long)(int)uVar14 * 0x18;
      *(long **)(lVar37 + 0x20) = unaff_x19;
      *(float *)(lVar37 + 0x28) = in_stack_00000168._4_4_;
      *(uint *)(lVar37 + 0x2c) = uVar12;
      *(uint *)(lVar37 + 0x30) = uVar27 - (int)in_stack_00000168._4_4_;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar37 = unaff_x19[0x6d];
      if (lVar37 == 0) goto LAB_0354fbf4;
      lVar18 = *(long *)(lVar37 + 0x50);
      *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
      if (lVar18 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = lVar18 + lVar34 * 0x5c;
      iStack00000000000000d8 = iStack00000000000000d8 + 1;
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
    }
LAB_0354e610:
    bVar6 = true;
  }
LAB_0354e618:
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  uVar14 = *(uint *)(lVar37 + 0x18);
  if (uVar14 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar37 + lVar38 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_0354e660:
      if (uVar14 <= uVar27 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar18 = *unaff_x19;
      uVar45 = *(undefined4 *)(lVar37 + lVar25 + -0x330);
      uVar50 = *(undefined4 *)(lVar37 + lVar25 + -0x2f8);
LAB_0354ebc0:
      pcVar26 = *(code **)(lVar18 + 0x8d8);
LAB_0354ebc8:
      (*pcVar26)(fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,uVar45,
                 fStack0000000000000104,0,in_stack_00000080._4_4_,uVar50);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar37 = *(long *)puVar9;
      }
LAB_0354ec1c:
      fVar47 = 0.0;
      bVar10 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar37 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar10 = false;
    }
  }
  else {
    lVar37 = lVar37 + lVar38 * 0x178;
    iVar11 = *(int *)(lVar37 + 0x68);
    *(int *)(lVar37 + 0x16c) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar46 = FUN_026b63d8(uVar28,0);
    if ((uVar28 != 0x200b) && ((uVar46 & 1) == 0)) {
      lVar37 = *unaff_x22;
      if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar18 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar59 = *(float *)(lVar18 + lVar38 * 0x178 + 0x160);
      if (fVar47 <= fVar59) {
        fVar47 = fVar59;
      }
      if (fStack0000000000000100 <= ABS(fVar58)) {
        fStack0000000000000100 = ABS(fVar58);
      }
      if ((float)iVar11 != fStack000000000000005c) {
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
      if (*(uint *)(lVar37 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar54 = *(float *)(lVar37 + lVar38 * 0x178 + 0x14c);
      fVar59 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar54 = fVar54 + fVar47 * fVar59;
      fStack000000000000005c = (float)iVar11;
      if (fVar54 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar54;
      }
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar28 == 0xd) || ((uVar28 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar46 = FUN_026b97f8(uVar28,0);
        if ((uVar46 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + lVar38 * 0x178;
      in_stack_00000080._4_4_ = *(float *)(lVar37 + 0x160);
      fStack0000000000000070 = *(float *)(lVar37 + 0x11c);
      bVar10 = fVar47 != 0.0;
      fVar59 = in_stack_00000080._4_4_;
      if (bVar10) {
        fVar59 = fVar47;
      }
      fVar47 = fVar59;
      uVar57 = *(undefined4 *)(lVar37 + 0x168);
      _bStack000000000000006c = 0;
      fVar59 = fVar58;
      if (bVar10) {
        fVar59 = fStack0000000000000100;
      }
      _bStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar59;
    }
    if (*unaff_x20 == 1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        if (uVar12 < *(uint *)(lVar37 + 0x18)) {
          lVar37 = lVar37 + lVar38 * 0x178;
          lVar18 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar37 + 0x128);
          uVar50 = *(undefined4 *)(lVar37 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar12 == uVar4) || ((int)uVar5 <= (int)uVar12)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar46 = FUN_026b63d8(uVar28,0);
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        lVar18 = lVar38;
        uVar14 = uVar12;
        if (uVar28 == 0x200b || (uVar46 & 1) != 0) {
          lVar18 = (long)(int)uVar5;
          uVar14 = uVar5;
        }
        if (uVar14 < *(uint *)(lVar37 + 0x18)) {
          lVar37 = lVar37 + lVar18 * 0x178;
          uVar45 = *(undefined4 *)(lVar37 + 0x128);
          uVar50 = *(undefined4 *)(lVar37 + 0x160);
          pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        uVar14 = *(uint *)(lVar37 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar12 < (int)(*unaff_x20 - 1)) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar27)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar46 = FUN_03567ad8(uVar57,*(undefined4 *)(lVar37 + lVar25),0);
      if ((uVar46 & 1) == 0) {
        if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
          if (uVar12 < *(uint *)(lVar37 + 0x18)) {
            lVar37 = lVar37 + lVar38 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000070,_bStack0000000000000068,_bStack000000000000006c,
                       *(undefined4 *)(lVar37 + 0x128),fStack0000000000000104,0,
                       in_stack_00000080._4_4_,*(undefined4 *)(lVar37 + 0x160));
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar37 = *(long *)puVar9;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar10 = true;
  }
LAB_0354ec38:
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar37 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar31 == 0) goto LAB_0354fbf4;
  uVar14 = *(uint *)(lVar37 + lVar38 * 0x178 + 400);
  fVar59 = (float)FUN_03776a30(lVar31 + 0x50,0);
  if ((uVar14 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar27 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar45 = *(undefined4 *)(lVar37 + lVar25 + -0x330);
      fVar39 = *(float *)(lVar37 + lVar25 + -0x30c);
      pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar26)(fStack00000000000000a0,fStack000000000000009c,fStack0000000000000098,uVar45,
                 fStack00000000000000a8 * fVar59 + fVar39,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_0354f250:
    bVar7 = false;
  }
  else {
    lVar37 = *unaff_x22;
    if ((lVar37 == 0) || (lVar18 = *(long *)(lVar37 + 0x38), lVar18 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar18 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar18 + lVar38 * 0x178 + 0x174) = iVar13;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar18 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar28 == 0xd) || ((uVar28 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
       (bVar7 || !bVar1)) {
LAB_0354ed84:
      if (!bVar7) goto LAB_0354f250;
    }
    else {
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar46 = FUN_026b97f8(uVar28,0);
        if ((uVar46 & 1) != 0) goto LAB_0354ed84;
        lVar37 = *unaff_x22;
        if (lVar37 == 0) goto LAB_0354fbf4;
      }
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar37 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + lVar38 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar37 + 0x60);
      fStack0000000000000040 = *(float *)(lVar37 + 0x14c);
      fStack00000000000000a0 = *(float *)(lVar37 + 0x11c);
      fStack00000000000000a8 = *(float *)(lVar37 + 0x160);
      fStack000000000000009c = fVar59 * fStack00000000000000a8 + fStack0000000000000040;
      fStack0000000000000098 = 0.0;
    }
    uVar14 = *unaff_x20;
    if (uVar14 == 1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        uVar14 = *(uint *)(lVar37 + 0x18);
LAB_0354ef0c:
        if (uVar12 < uVar14) {
          lVar37 = lVar37 + lVar38 * 0x178;
          lVar18 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar37 + 0x128);
          fVar39 = *(float *)(lVar37 + 0x14c);
LAB_0354ef24:
          pcVar26 = *(code **)(lVar18 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar12 == uVar4) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar46 = FUN_026b63d8(uVar28,0);
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        uVar14 = *(uint *)(lVar37 + 0x18);
        if (uVar28 == 0x200b || (uVar46 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar18 = lVar38;
        if (uVar12 < uVar14) {
LAB_0354f1f8:
          lVar37 = lVar37 + lVar18 * 0x178;
          fVar39 = *(float *)(lVar37 + 0x14c);
          uVar45 = *(undefined4 *)(lVar37 + 0x128);
          pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar12 < (int)uVar14) {
      lVar37 = *unaff_x22;
      if ((lVar37 != 0) && (lVar18 = *(long *)(lVar37 + 0x38), lVar18 != 0)) {
        if (uVar27 < *(uint *)(lVar18 + 0x18)) {
          if (*(float *)(lVar18 + lVar25 + -0x108) == in_stack_00000048._4_4_) {
            fVar54 = *(float *)(lVar18 + lVar25 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar46 = FUN_03567bac(fVar39 + fVar54,fStack0000000000000040,0);
            if ((uVar46 & 1) != 0) {
              uVar14 = *unaff_x20;
              goto LAB_0354f010;
            }
            lVar37 = *unaff_x22;
            if (lVar37 == 0) goto LAB_0354fbf4;
          }
          lVar37 = *(long *)(lVar37 + 0x38);
          if (lVar37 != 0) {
            uVar14 = *(uint *)(lVar37 + 0x18);
            if ((int)uVar12 <= (int)uVar5) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar18 = (long)(int)uVar5;
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
    if ((int)uVar12 < (int)uVar14) {
      iVar11 = FUN_036d3364(lVar31,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar27)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = *(long *)(lVar22 + lVar25 + -0x130);
      if (lVar37 == 0) goto LAB_0354fbf4;
      iVar15 = FUN_036d3364(lVar37,0);
      if (iVar11 != iVar15) {
        if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
          uVar14 = *(uint *)(lVar37 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
        if (uVar27 - 2 < *(uint *)(lVar37 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar37 + lVar25 + -0x330);
          fVar39 = *(float *)(lVar37 + lVar25 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar7 = true;
  }
  if ((*unaff_x22 == 0) || (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 == 0)) goto LAB_0354fbf4;
  uVar14 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar14 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar37 + lVar38 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
    }
LAB_0354f604:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar37 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar8) {
LAB_0354f400:
      if (uVar14 <= uVar12) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar37 = lVar37 + lVar38 * 0x178;
      fVar59 = *(float *)(lVar37 + 0x128);
      fVar42 = *(float *)(lVar37 + 0x188);
      uVar17 = *(undefined8 *)(lVar37 + 0x17c);
      fVar41 = *(float *)(lVar37 + 0x184);
      uVar16 = *(undefined8 *)(lVar37 + 0x184);
      fVar55 = *(float *)(lVar37 + 0x18c);
      fVar39 = *(float *)(lVar37 + 0x11c);
      fVar54 = *(float *)(lVar37 + 0x148);
      fVar40 = *(float *)(lVar37 + 0x150);
      in_stack_00000188 = uVar17;
      fStack0000000000000190 = fVar41;
      fStack0000000000000194 = fVar42;
      in_stack_00000198 = fVar55;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar46 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar37 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar46 & 1) == 0) {
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar37);
        }
        fVar59 = fVar59 + (float)in_stack_000017c8;
        fVar39 = fVar39 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar54 = fVar54 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar39 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar39;
        }
        if (fVar40 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar40 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar59) {
          fStack00000000000000d0 = fVar59;
        }
        if (fStack00000000000000d4 <= fVar54) {
          fStack00000000000000d4 = fVar54;
        }
      }
      else {
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar37);
        }
        fVar39 = (fVar39 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar40 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar40;
        }
        if (fStack00000000000000d4 <= fVar54) {
          fStack00000000000000d4 = fVar54;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,fVar39,
                   fStack00000000000000d4,uStack00000000000000c0);
        fStack00000000000000e4 = fVar40 - fVar55;
        fStack00000000000000d0 = fVar59 + fVar41;
        uStack00000000000000c0 = 0;
        fStack00000000000000d4 = fVar54 + fVar42;
        fStack00000000000000e0 = fVar39;
        in_stack_000017c0 = uVar17;
        in_stack_000017c8 = uVar16;
        in_stack_000017d0 = fVar55;
      }
      if (((*unaff_x20 == 1) || (uVar12 == uVar4)) || (((int)uVar5 <= (int)uVar12 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar8 = true;
    }
    else {
      if ((((uVar28 != 0xd) && ((uVar28 & 0xfffe) != 10)) && ((int)uVar12 <= (int)uVar5)) && (bVar1)
         ) {
        if (uVar12 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar46 = FUN_026b97f8(uVar28,0);
          if ((uVar46 & 1) != 0) goto LAB_0354f374;
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *(long *)puVar9;
        }
        if ((*unaff_x22 != 0) && (lVar37 = *(long *)(*unaff_x22 + 0x38), lVar37 != 0)) {
          uVar14 = (uint)*(undefined8 *)(lVar37 + 0x18);
          if (uVar12 < uVar14) {
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
      bVar8 = false;
    }
  }
  uVar12 = *unaff_x20;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar25 = lVar25 + 0x178;
  bVar1 = (int)uVar12 <= (int)uVar27;
  uVar14 = uVar30;
  uVar27 = uVar27 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar22 = *unaff_x22;
  if (lVar22 != 0) {
    iVar13 = uVar30 + 1;
    plVar36 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar22 + 0x18) = uVar12;
    lVar25 = unaff_x19[0xd4];
    *(int *)(lVar22 + 0x2c) = iVar13;
    if ((int)uVar12 < 1 || iStack00000000000000d8 == 0) {
      iStack00000000000000d8 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar25;
    *(int *)(lVar22 + 0x24) = iStack00000000000000d8;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar46 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar46 & 1) == 0)) {
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
                          lVar25 = 0;
                          do {
                            uVar46 = lVar25 + 1;
                            if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar46) goto LAB_0354d0cc;
                            lVar22 = *(long *)(lVar22 + 0x60);
                            if (lVar22 == 0) break;
                            if (*(int *)(*plVar36 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar46)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar22 + lVar37 + 0x70,0);
                            lVar22 = unaff_x19[0xe1];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar46)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar16 = *(undefined8 *)(lVar22 + lVar25 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar49 = FUN_036d35a8(uVar16,0,0);
                            if ((uVar49 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*unaff_x22 == 0) ||
                                   (lVar22 = *(long *)(*unaff_x22 + 0x60), lVar22 == 0)) break;
                                if (*(int *)(*plVar36 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar22 + 0x18) <= uVar46)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar22 + lVar37 + 0x70,1,0);
                              }
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar25 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a460c(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0x80),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar25 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a4810(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0x98),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar25 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a48bc(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0xa0),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar25 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_0359d5ac(lVar22,0);
                              if ((*unaff_x22 == 0) ||
                                 (lVar18 = *(long *)(*unaff_x22 + 0x60), lVar18 == 0)) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar22 == 0) break;
                              FUN_036a4e24(lVar22,*(undefined8 *)(lVar18 + lVar37 + 0xa8),0);
                              lVar22 = unaff_x19[0xe1];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar46)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar22 = *(long *)(lVar22 + lVar25 * 8 + 0x28);
                              if ((lVar22 == 0) || (lVar22 = FUN_0359d5ac(lVar22,0), lVar22 == 0))
                              break;
                              FUN_036aa280(lVar22,0);
                            }
                            lVar22 = *unaff_x22;
                            lVar25 = lVar25 + 1;
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
  uVar49 = FUN_03586568();
  if (((uVar49 & 1) != 0) &&
     (in_stack_000017b8 = in_stack_0000179c, uVar12 = in_w8, *(int *)((long)unaff_x19 + 0x644) == 0)
     ) goto LAB_03549564;
LAB_03549378:
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_0354fbf4;
  uVar12 = *unaff_x20;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar37 = (long)(int)uVar12;
  cVar21 = *(char *)(lVar22 + lVar37 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar25 = unaff_x19[0x24];
  if ((uint)in_stack_000017d8 == uVar12) {
    in_w8 = (uint)((ulong)in_stack_000017d8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_w8 == 0x2026) {
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
      uVar12 = *unaff_x20;
      if (*(uint *)(lVar22 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      unaff_w23 = 1;
      *(int *)(lVar22 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017d8 = CONCAT44(3,uVar12 + 1);
    }
    else if (in_w8 == 3) {
      if ((*in_stack_00000178 == 0) || (lVar18 = FUN_03568ac0(*in_stack_00000178,0), lVar18 == 0))
      goto LAB_0354fbf4;
      FUN_0219b634(lVar18,&stack0x00000c28,&stack0x000008b0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar22 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      *(ulong *)(lVar22 + lVar37 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008b4,in_stack_000008b0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar12 = *(uint *)((long)unaff_x19 + 0x494);
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
  if (((int)uVar12 < *(int *)((long)unaff_x19 + 0x324)) && (in_w8 != 3)) {
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= uVar12)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + (long)(int)uVar12 * (long)iVar13;
    *(undefined1 *)(lVar22 + 0x194) = 0;
    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
    *(undefined4 *)(lVar22 + 100) = 0;
    *unaff_x20 = uVar12 + 1;
    uVar12 = in_w8;
    goto LAB_03549564;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar11 == 0) {
    uVar12 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) {
        fVar47 = 1.0;
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar49 = FUN_026b812c(in_w8,0);
          if ((uVar49 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b8410(in_w8,0);
            in_w8 = uVar12 & 0xffff;
            fVar47 = fStack0000000000000024;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b8070(in_w8,0);
        fVar47 = 1.0;
        if ((uVar49 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b8594(in_w8,0);
          goto LAB_03549968;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b812c(in_w8,0);
      fVar47 = 1.0;
      if ((uVar49 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b8410(in_w8,0);
LAB_03549968:
        fVar47 = 1.0;
        in_w8 = uVar12 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03549594;
LAB_03549978:
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *_iStack00000000000000d8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(_iStack00000000000000d8);
    uVar12 = in_w8;
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
    uVar14 = *unaff_x20;
    uVar12 = *(uint *)(lVar22 + 0x18);
    if (uVar12 <= uVar14) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar22 + (long)(int)uVar14 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_03549a88:
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar22 = unaff_x19[0x20];
    }
    else {
      lVar25 = unaff_x19[0x8f];
      if (lVar25 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_000017b8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if ((*(int *)(lVar25 + (long)(int)in_stack_000017b8 * 0xc + 0x20) != 10) ||
         (uVar14 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
      if (uVar12 <= uVar14 - 1) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fVar58 = *(float *)(lVar22 + (long)(int)(uVar14 - 1) * (long)iVar13 + 0x60);
      iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
      lVar22 = *in_stack_00000178;
    }
    if (lVar22 == 0) goto LAB_0354fbf4;
    fVar59 = (float)FUN_03776960(lVar22 + 0x50,0);
    fVar39 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar39 = 1.0;
    }
    uVar57 = 0;
    fStack0000000000000124 = 0.0;
    if ((unaff_w23 & in_w8 == 0x2026) == 0) {
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      fStack0000000000000124 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      uVar57 = FUN_037769c0(*in_stack_00000178 + 0x50,0);
    }
    lVar22 = unaff_x19[0xc9];
    if (lVar22 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar57);
    if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
    fVar54 = *(float *)((long)unaff_x19 + 0x404);
    fVar40 = *(float *)(lVar22 + 0x2c);
    fVar48 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar42 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
    fVar55 = *(float *)((long)unaff_x19 + 0x404);
    fVar43 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
    lVar22 = unaff_x19[0x6d];
    if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar25 + 0x2c) = 0;
    fVar39 = ((fVar47 * fVar58) / (float)iVar11) * fVar59 * fVar39;
    fVar48 = fVar39 * fVar54 * fVar40 * fVar48;
    *(float *)(lVar25 + 0x160) = fVar48;
    uVar12 = *(uint *)(unaff_x19 + 0x24);
    fVar43 = fVar39 * fVar42 * fVar55 * fVar43;
    if (uVar12 == 0) {
      in_stack_00000168._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar25 = unaff_x19[0xe1];
      if (lVar25 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= uVar12)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = *(long *)(lVar25 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar25 == 0) goto LAB_0354fbf4;
      in_stack_00000168._4_4_ = *(float *)(lVar25 + 0x54);
    }
LAB_03549e30:
    fVar58 = 0.0;
    if (in_w8 != 3 && in_w8 != 0xad) {
      fVar58 = fVar48;
    }
  }
  else {
    fVar47 = 1.0;
    if (iVar11 == 0) goto LAB_03549978;
LAB_03549594:
    if (iVar11 == 1) {
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
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = CONCAT44(in_stack_000008b4,in_stack_000008b0);
      uVar12 = in_w8;
      if (lVar22 == 0) goto LAB_03549564;
      if (in_w8 == 0x3c) {
        in_w8 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar37 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar37 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar37 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar48 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar11 = FUN_03776950(&stack0x00001730,0);
      if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
      memmove(&stack0x00001730,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar39 = (float)FUN_03776960(&stack0x00001730,0);
      fVar58 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar58 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
      fVar58 = (fVar48 / (float)iVar11) * fVar39 * fVar58;
      iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar48 = *(float *)(unaff_x19 + 0x3d);
      if (iVar11 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar59 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        fVar39 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar39 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar54 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
        FUN_03776e6c(&stack0x000008b0,*(long *)(lVar22 + 0x20),0);
        fVar40 = (float)FUN_03776c9c(&stack0x00001710,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
        fVar55 = *(float *)(lVar22 + 0x2c);
        fVar42 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar41 = (float)FUN_03776980(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar52 = (float)FUN_037769b0(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
        fVar44 = *(float *)((long)unaff_x19 + 0x404);
        fVar43 = (float)FUN_03776960(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
        fVar43 = fVar58 * fVar52 * fVar44 * fVar43;
        fVar39 = (fVar48 / (float)iVar11) * fVar59 * fVar39;
        fVar48 = fVar39 * (fVar54 / fVar40) * fVar55 * fVar42;
        fVar39 = fVar39 / fVar48;
        fVar41 = fVar39 * fVar41;
        fVar58 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar39 = fVar39 * fVar58;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar39 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_0354fbf4;
        fVar54 = *(float *)(lVar22 + 0x2c);
        fVar59 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar59 = 1.0;
        }
        fVar40 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar41 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar42 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
        fVar55 = *(float *)((long)unaff_x19 + 0x404);
        fVar43 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
        fVar43 = fVar58 * fVar42 * fVar55 * fVar43;
        fVar48 = (fVar48 / (float)iVar11) * fVar39 * fVar59 * fVar54 * fVar40;
        fVar39 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
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
      *(float *)(lVar22 + 0x160) = fVar48;
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
      _fStack0000000000000120 = CONCAT44(fVar41,fVar39);
      in_stack_00000168._4_4_ = 0.0;
      *(int *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar25;
      goto LAB_03549e30;
    }
    lVar22 = *unaff_x22;
    fVar43 = 0.0;
    fVar58 = fVar43;
    if (in_w8 != 3 && in_w8 != 0xad) {
      fVar58 = fVar48;
    }
    if (lVar22 == 0) goto LAB_0354fbf4;
    _fStack0000000000000120 = 0;
  }
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar22 + 0x20) = (short)in_w8;
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
  uVar12 = *unaff_x20;
  FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)uVar12 * unaff_x24;
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
  if ((int)in_w8 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(in_w8,0);
    unaff_w21 = uVar12 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  in_stack_00000138 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    in_stack_00000128 = 0.0;
    fVar59 = 0.0;
    fVar39 = 0.0;
  }
  else {
    if (*_iStack00000000000000d8 == 0) goto LAB_0354fbf4;
    uVar14 = *unaff_x20;
    uVar12 = *(uint *)(*_iStack00000000000000d8 + 0x28);
    if ((int)uVar14 < (int)in_stack_00000080._4_4_) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar14 + 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar14 + 1) * (long)iVar13 + 0x30);
      if ((((lVar22 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0)) ||
         (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)) goto LAB_0354fbf4;
      in_stack_000008b0 = uVar12 | *(int *)(lVar22 + 0x28) << 0x10;
      uVar46 = FUN_0219f8b8(lVar25,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar57 = 0;
      if ((uVar46 & 1) == 0) {
        in_stack_00000128 = 0.0;
        fVar59 = 0.0;
        fVar39 = 0.0;
      }
      else {
        if (in_stack_00001708 == 0) goto LAB_0354fbf4;
        in_stack_00000128 = *(float *)(in_stack_00001708 + 0x1c);
        uVar57 = *(undefined4 *)(in_stack_00001708 + 0x20);
        fVar39 = *(float *)(in_stack_00001708 + 0x14);
        fVar59 = *(float *)(in_stack_00001708 + 0x18);
        if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
          in_stack_00000138 = 0.0;
        }
      }
      uVar14 = *unaff_x20;
    }
    else {
      uVar57 = 0;
      in_stack_00000128 = 0.0;
      fVar59 = 0.0;
      fVar39 = 0.0;
    }
    if (0 < (int)uVar14) {
      if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
      goto LAB_0354fbf4;
      if (*(uint *)(lVar22 + 0x18) <= uVar14 - 1)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar22 = *(long *)(lVar22 + (ulong)(uVar14 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar22 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0 ||
          (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)))) goto LAB_0354fbf4;
      in_stack_000008b0 = *(uint *)(lVar22 + 0x28) | uVar12 << 0x10;
      uVar46 = FUN_0219f8b8(lVar25,&stack0x000008b0,&stack0x00001708,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar46 & 1) != 0) {
        if ((in_stack_00001708 == 0) ||
           (fVar39 = (float)FUN_03571cb4(fVar39,fVar59,in_stack_00000128,uVar57,
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
    fVar40 = *(float *)(unaff_x19 + 200);
    fVar54 = (float)FUN_03776cb4(&stack0x000017a0,0);
    fVar40 = fVar40 - fVar58 * fVar54 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar40;
    if ((in_w8 == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar40 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar54 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000088 = 0.0;
  if (fVar54 != 0.0) {
    fVar40 = (float)FUN_03776c94(&stack0x000017a0,0);
    fVar42 = (float)FUN_03776ca4(&stack0x000017a0,0);
    in_stack_00000088 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar54 * 0.5 - fVar58 * (fVar40 * 0.5 + fVar42));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000088;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar22 = *in_stack_00000170;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar46 = FUN_036cee6c(lVar22,0,0);
    fVar40 = 0.0;
    if ((uVar46 & 1) != 0) {
      lVar22 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar46 = FUN_03699d3c(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      fVar40 = 0.0;
      if ((uVar46 & 1) != 0) {
        lVar22 = *in_stack_00000170;
        if (*(int *)(*plVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar22 == 0) goto LAB_0354fbf4;
        fVar54 = (float)FUN_0369e060(lVar22,*(undefined4 *)(*(long *)(*plVar36 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
        fVar42 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar40 = (float)FUN_0369e060(*in_stack_00000170,
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xb8) + 0xcc),0);
        fVar40 = fVar40 * fVar54 * fVar42 * 0.25;
        if (fVar54 < in_stack_00000168._4_4_ + fVar40) {
          in_stack_00000168._4_4_ = fVar54 - fVar40;
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
    uVar46 = FUN_036cee6c(lVar22,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar46 & 1) != 0) {
      lVar22 = *in_stack_00000170;
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
      if (lVar22 == 0) goto LAB_0354fbf4;
      uVar46 = FUN_03699d3c(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                              0xb8) + 0x54),0);
      if ((uVar46 & 1) != 0) {
        lVar22 = *in_stack_00000170;
        if (*(int *)(*plVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        }
        if (lVar22 == 0) goto LAB_0354fbf4;
        uVar46 = FUN_03699d3c(lVar22,*(undefined4 *)(*(long *)(*plVar36 + 0xb8) + 0xcc),0);
        if ((uVar46 & 1) != 0) {
          lVar22 = *in_stack_00000170;
          if (*(int *)(*plVar36 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            plVar36 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          }
          if (lVar22 == 0) goto LAB_0354fbf4;
          fVar54 = (float)FUN_0369e060(lVar22,*(undefined4 *)(*(long *)(*plVar36 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
          fVar42 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar40 = (float)FUN_0369e060(*in_stack_00000170,
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
          fVar40 = fVar40 * fVar54 * fVar42 * 0.25;
          if (fVar54 < in_stack_00000168._4_4_ + fVar40) {
            in_stack_00000168._4_4_ = fVar54 - fVar40;
          }
          goto LAB_0354a568;
        }
      }
    }
    fVar40 = 0.0;
  }
LAB_0354a568:
  fVar54 = *(float *)(unaff_x19 + 200);
  fVar42 = (float)FUN_03776ca4(&stack0x000017a0,0);
  fVar54 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar58 * (fVar39 + ((fVar42 - in_stack_00000168._4_4_) - fVar40));
  fVar39 = (float)FUN_03776cac(&stack0x000017a0,0);
  fVar42 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar43 + fVar58 * (fVar59 + in_stack_00000168._4_4_ + fVar39)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar39 = (float)FUN_03776c9c(&stack0x000017a0,0);
  fStack0000000000000134 =
       fVar42 - fVar58 * (in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar39);
  fVar39 = (float)FUN_03776c94(&stack0x000017a0,0);
  fVar59 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar58 * (fVar40 + fVar40 +
                             in_stack_00000168._4_4_ + in_stack_00000168._4_4_ + fVar39);
  fStack0000000000000104 = fVar54;
  fVar39 = fVar59;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar41 = (float)(int)unaff_x19[0xbe] * fStack0000000000000058;
    fVar39 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar44 = fVar41 * fVar58 * (fVar40 + in_stack_00000168._4_4_ + fVar39);
    fVar39 = (float)FUN_03776cac(&stack0x000017a0,0);
    fVar55 = (float)FUN_03776c9c(&stack0x000017a0,0);
    fVar42 = fVar42 + 0.0;
    fStack0000000000000134 = fStack0000000000000134 + 0.0;
    fVar41 = fVar41 * fVar58 * (((fVar39 - fVar55) - in_stack_00000168._4_4_) - fVar40);
    fVar55 = fVar54 + fVar44;
    fVar39 = fVar59 + fVar41;
    fVar52 = (fVar44 - fVar41) * 0.5;
    fVar54 = (fVar54 + fVar41) - fVar52;
    fVar59 = (fVar59 + fVar44) - fVar52;
    fStack0000000000000104 = fVar55 - fVar52;
    fVar39 = fVar39 - fVar52;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar41 = 0.0;
    fVar44 = 0.0;
    fVar51 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar52 = fStack0000000000000134;
    fVar55 = fVar42;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000070,0);
    fVar53 = (fVar59 + fVar54) * 0.5;
    fVar56 = (fStack0000000000000134 + fVar42) * 0.5;
    fVar42 = fVar42 - fVar56;
    fStack0000000000000100 = 0.0;
    fVar55 = fVar42;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar53,_fStack0000000000000070,0);
    fStack0000000000000104 = fVar53 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar52 = fStack0000000000000134 - fVar56;
    fVar41 = 0.0;
    fStack0000000000000134 = fVar52;
    fVar54 = (float)FUN_036bdd2c(fVar54 - fVar53,_fStack0000000000000070,0);
    fVar54 = fVar53 + fVar54;
    fVar41 = fVar41 + 0.0;
    fStack0000000000000134 = fVar56 + fStack0000000000000134;
    fVar51 = 0.0;
    fVar59 = (float)FUN_036bdd2c(fVar59 - fVar53,_fStack0000000000000070,0);
    fVar59 = fVar53 + fVar59;
    fVar42 = fVar56 + fVar42;
    fVar51 = fVar51 + 0.0;
    fVar44 = 0.0;
    fVar39 = (float)FUN_036bdd2c(fVar39 - fVar53,_fStack0000000000000070,0);
    fVar39 = fVar53 + fVar39;
    fVar44 = fVar44 + 0.0;
    fVar52 = fVar56 + fVar52;
    fVar55 = fVar56 + fVar55;
  }
  if (*unaff_x22 == 0) goto LAB_0354fbf4;
  lVar22 = *(long *)(*unaff_x22 + 0x38);
  unaff_d13 = (ulong)(uint)fVar58;
  if (lVar22 == 0) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x11c) = fVar54;
  *(float *)(lVar22 + 0x120) = fStack0000000000000134;
  *(float *)(lVar22 + 0x124) = fVar41;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x114) = fVar55;
  *(float *)(lVar22 + 0x110) = fStack0000000000000104;
  *(float *)(lVar22 + 0x118) = fStack0000000000000100;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x128) = fVar59;
  *(float *)(lVar22 + 300) = fVar42;
  *(float *)(lVar22 + 0x130) = fVar51;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x134) = fVar39;
  *(float *)(lVar22 + 0x138) = fVar52;
  *(float *)(lVar22 + 0x13c) = fVar44;
  if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0)) goto LAB_0354fbf4;
  uVar12 = *unaff_x20;
  unaff_x26 = (long)(int)uVar12;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar22 + unaff_x26 * unaff_x24;
  *(int *)(lVar25 + 0x140) = (int)unaff_x19[200];
  fVar42 = *(float *)(unaff_x19 + 0x9b);
  uVar46 = (ulong)(uint)fVar42;
  fVar39 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar25 + 0x15c) = (fVar59 - fVar54) / (fVar55 - fStack0000000000000134);
  *(float *)(lVar25 + 0x14c) = (fVar43 - fVar42) + fVar39;
  fVar59 = fStack0000000000000124 * fVar58;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar59 = fVar59 / fVar47;
    fStack0000000000000120 = (fStack0000000000000120 * fVar58) / fVar47;
  }
  else {
    fStack0000000000000120 = fStack0000000000000120 * fVar58;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar12 == unaff_w25)) {
    fStack0000000000000120 = fVar39 + fStack0000000000000120;
    fVar59 = fVar39 + fVar59;
    fVar55 = fStack0000000000000120;
    fVar54 = fVar59;
    if (fVar39 != 0.0) {
      fVar54 = (fVar59 - fVar39) / *(float *)((long)unaff_x19 + 0x404);
      fVar55 = (fStack0000000000000120 - fVar39) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar54 <= fVar59) {
        fVar54 = fVar59;
      }
      if (fStack0000000000000120 <= fVar55) {
        fVar55 = fStack0000000000000120;
      }
    }
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    fVar39 = fVar54;
    if (fVar54 <= *(float *)(unaff_x19 + 0x99)) {
      fVar39 = *(float *)(unaff_x19 + 0x99);
    }
    fVar41 = fVar55;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar55) {
      fVar41 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar41;
    *(float *)(unaff_x19 + 0x99) = fVar39;
    *(float *)(lVar22 + 0x154) = fVar54;
    *(float *)(lVar22 + 0x158) = fVar55;
    *(float *)(lVar22 + 0x148) = fVar59 - fVar42;
    *(float *)(unaff_x19 + 0x98) = fVar59 - fVar42;
    *(float *)(lVar22 + 0x150) = fStack0000000000000120 - fVar42;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar42;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar39;
      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
      fVar39 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar54 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fVar47 = (fVar58 * fVar54) / fVar47;
      uVar46 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar39 <= fVar47) {
        fVar39 = fVar47;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar39;
    }
    if ((float)uVar46 == 0.0) {
      fVar47 = *(float *)(in_stack_00000078 + 0x208);
      if (*(float *)(in_stack_00000078 + 0x208) <= fVar59) {
        fVar47 = fVar59;
      }
      *(float *)(in_stack_00000078 + 0x208) = fVar47;
    }
  }
  else {
    fVar47 = *(float *)(unaff_x19 + 0x99);
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    *(float *)(lVar22 + 0x154) = fVar47;
    fVar39 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar47 = fVar47 - fVar42;
    *(float *)(lVar22 + 0x148) = fVar47;
    *(float *)(lVar22 + 0x158) = fVar39;
    *(float *)(unaff_x19 + 0x98) = fVar47;
    fVar39 = fVar39 - fVar42;
    *(float *)(lVar22 + 0x150) = fVar39;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar39;
  }
  lVar22 = *unaff_x22;
  if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar14)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar25 = lVar25 + (long)(int)uVar14 * unaff_x24;
  *(undefined1 *)(lVar25 + 0x194) = 0;
  uVar27 = *(uint *)(unaff_x19 + 0x4f);
  uVar12 = in_w8;
  if (((in_w8 != 9) &&
      ((((unaff_w21 != 0 || (in_w8 == 3)) || (in_w8 == 0x200b)) || (in_w8 == 0xad)))) &&
     (((in_w8 == 0xad & (bStack000000000000006c ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x644) != 1)))) {
    if (((in_w8 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar47 = (float)uVar46;
      fVar48 = 0.0;
      if ((0.0 < fVar47) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar46 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar47)) + fVar48)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar49 = FUN_036cee6c(lVar22,0,0);
        if ((uVar49 & 1) != 0) {
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
    if ((((0x22 < in_w8 - 0x2007) || ((1L << ((ulong)(in_w8 - 0x2007) & 0x3f) & 0x600000001U) == 0))
        && (1 < in_w8 - 10)) && (in_w8 != 0xa0)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar46 = FUN_026b97f8(in_w8,0);
      if ((uVar46 & 1) == 0) goto LAB_0354b560;
    }
    if (((in_w8 != 0xad) && (in_w8 != 0x200b)) && (in_w8 != 0x2060)) {
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x50), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    }
LAB_0354b560:
    if (in_w8 != 0xa0) goto LAB_0354ba38;
    if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x50), lVar22 == 0))
    goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    goto LAB_0354b950;
  }
  *(undefined1 *)(lVar25 + 0x194) = 1;
  pfVar24 = _fStack00000000000000a0;
  pfVar29 = _fStack00000000000000a8;
  if (unaff_w23 != 0) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    pfVar29 = (float *)(lVar22 + 0x60);
    pfVar24 = (float *)(lVar22 + 100);
  }
  fVar39 = *pfVar29;
  fVar59 = *pfVar24;
  fVar47 = *(float *)(unaff_x19 + 0x6c);
  fVar54 = *(float *)(unaff_x19 + 200);
  in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar39) - fVar59;
  bVar10 = true;
  if ((fVar47 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar47))) {
    bVar10 = fVar47 == -1.0;
  }
  if (!bVar10) {
    in_stack_000000f8._4_4_ = fVar47;
  }
  fVar47 = 0.0;
  if ((char)unaff_x19[0x1e] == '\0') {
    fVar47 = (float)FUN_03776cb4(&stack0x000017a0,0);
    uVar46 = (ulong)*(uint *)(unaff_x19 + 0x9b);
  }
  fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar55 = *(float *)((long)unaff_x19 + 0x4cc);
  if (in_w8 != 0xad) {
    fVar48 = fVar58;
  }
  fVar52 = (float)uVar46;
  fVar41 = 0.0;
  if ((0.0 < fVar52) && (fVar41 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar41 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar14 = *unaff_x20;
  fVar41 = (*(float *)(unaff_x19 + 0x97) - (fVar55 - fVar52)) + fVar41;
  if (fStack00000000000000c4 < fVar41) {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    uVar16 = DAT_00d37868;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar43 = *(float *)(unaff_x19 + 0x59);
      if (((fVar43 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar52)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar48 = *(float *)((long)unaff_x19 + 700) +
                 ((fStack0000000000000018 - fVar41) / (float)(int)unaff_x19[0x95]) /
                 in_stack_00000050;
        if (fVar48 <= fVar43) {
          fVar48 = fVar43;
        }
        goto UnityEngine_AndroidJavaObject___ctor;
      }
      fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar41 = *(float *)(unaff_x19 + 0x4a);
      uVar46 = (ulong)(uint)fVar41;
      if ((fVar41 < fVar52) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar48 = (fVar52 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar48 <= DAT_00d38b84) {
          fVar48 = DAT_00d38b84;
        }
        fVar47 = (fVar52 - fVar48) * 20.0 + 0.5;
        *(float *)((long)unaff_x19 + 0x23c) = fVar52;
        fVar48 = DAT_00d38e60;
        if (fVar47 != INFINITY) {
          fVar48 = (float)(int)fVar47 / 20.0;
        }
        if (fVar48 <= fVar41) {
          fVar48 = fVar41;
        }
        goto LAB_0354d004;
      }
    }
    switch((int)unaff_x19[0x5c]) {
    case 1:
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar9;
      }
      lVar25 = *(long *)(lVar22 + 0xb8);
      lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = FUN_01a46ff8(lVar22);
      }
      piVar19 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar19 == 0) goto LAB_0354cf2c;
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar9;
      }
      FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
      iVar11 = FUN_0358c15c();
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
      fVar48 = *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017b8 = FUN_0358c15c();
      if (fVar48 - fVar55 <= fStack00000000000000c4) {
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
        uVar46 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        lVar22 = NEON_rev64(uVar46,4);
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
      uVar49 = FUN_036cee6c(lVar22,0,0);
      if ((uVar49 & 1) != 0) {
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
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  fVar47 = ABS(fVar54) + fVar47 * (1.0 - fVar42) * fVar48;
  fVar48 = 1.0;
  if ((uVar27 & 0x18) != 0) {
    fVar48 = DAT_00d38acc;
  }
  fVar54 = fVar48 * in_stack_000000f8._4_4_;
  if (fVar47 <= fVar54) goto LAB_0354b8e4;
  uVar46 = (ulong)(uint)fVar40;
  if (((char)unaff_x19[0x5b] == '\0') || (uVar14 == *(uint *)(unaff_x19 + 0x93))) {
    if (((char)unaff_x19[0x47] == '\0') ||
       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
LAB_0354ae98:
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        lVar25 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = FUN_01a46ff8(lVar22);
        }
        piVar19 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar19 == 0) goto LAB_0354cf2c;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008b0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
        goto LAB_0354b394;
      }
      if (iVar11 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar49 = FUN_036cee6c(lVar22,0,0);
        if ((uVar49 & 1) != 0) {
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
      if (iVar11 != 3) goto LAB_0354b8e4;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      goto LAB_0354af20;
    }
    fVar54 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if (fVar42 < fVar54) {
      fVar58 = fVar47 / (1.0 - fVar42);
      if (fVar42 <= 0.0) {
        fVar58 = fVar47;
      }
      fVar42 = fVar42 + (fVar47 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar58;
      goto LAB_0354fc24;
    }
    fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
    fVar54 = *(float *)(unaff_x19 + 0x4a);
    if (fVar42 <= fVar54) goto LAB_0354ae98;
    fVar48 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar48 <= DAT_00d38b84) {
      fVar48 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar42;
    fVar42 = fVar42 - fVar48;
  }
  else {
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_000017b8 = FUN_0358c15c();
    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
      lVar22 = *unaff_x22;
      if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar54 = *(float *)(unaff_x19 + 0x9b);
      fVar42 = 0.0;
      if ((0.0 < fVar54) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar42 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar42 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
               *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
               (fVar42 - *(float *)((long)unaff_x19 + 0x4cc)) +
               in_stack_00000050 * (in_stack_00000048._4_4_ + *(float *)((long)unaff_x19 + 700));
    }
    else {
      lVar22 = unaff_x19[0x6d];
      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
      if (lVar22 == 0) goto LAB_0354fbf4;
      fVar54 = *(float *)(unaff_x19 + 0x9b);
      fVar42 = *(float *)(unaff_x19 + 0x58) + fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_0354fbf4;
    uVar30 = *(uint *)((long)unaff_x19 + 0x494);
    if ((*(uint *)(lVar22 + 0x18) <= uVar30) ||
       (uVar35 = uVar30 - 1, *(uint *)(lVar22 + 0x18) <= uVar35))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar46 = (ulong)(uint)(fVar42 + *(float *)(unaff_x19 + 0x97));
    fVar55 = (fVar42 + *(float *)(unaff_x19 + 0x97) + fVar54) -
             *(float *)(lVar22 + (long)(int)uVar30 * unaff_x24 + 0x158);
    if (((bStack000000000000006c & 1) == 0 &&
         *(short *)(lVar22 + (long)(int)uVar35 * (long)iVar13 + 0x20) == 0xad) &&
       ((fVar55 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
      bStack000000000000006c = 0;
      *unaff_x20 = uVar35;
      in_stack_000017b8 = in_stack_000017b8 - 1;
      in_stack_000017d8 = CONCAT44(0x2d,uVar35);
      goto LAB_03549564;
    }
    if (*(short *)(lVar22 + (long)(int)uVar30 * unaff_x24 + 0x20) == 0xad) {
      bStack000000000000006c = 1;
      goto LAB_03549564;
    }
    if ((bStack0000000000000068 & *(byte *)(unaff_x19 + 0x47) & 1) == 0) {
LAB_0354b6dc:
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar9;
      }
      iVar11 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
      if (((iVar11 != iStack000000000000002c) && (iVar11 != -1)) &&
         (((bStack0000000000000068 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
        goto LAB_0354fbf4;
        uVar30 = *unaff_x20 - 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar30)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iStack000000000000002c = iVar11;
        if (*(short *)(lVar22 + (long)(int)uVar30 * (long)iVar13 + 0x20) == 0xad) {
          bStack000000000000006c = 0;
          *unaff_x20 = uVar30;
          in_stack_000017b8 = in_stack_000017b8 - 1;
          in_stack_000017d8 = CONCAT44(0x2d,uVar30);
          goto LAB_03549564;
        }
      }
      if (fVar55 <= fStack00000000000000c4) {
switchD_0354b88c_caseD_0:
        uVar46 = unaff_d13;
        FUN_0358cbd4(in_stack_00000050,unaff_d13,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000138,in_stack_000000f8._4_4_,in_stack_00000048._4_4_);
LAB_0354b8d0:
        bStack000000000000006c = 0;
LAB_0354c6b4:
        bStack0000000000000068 = 1;
        in_stack_00000060 = 1;
        uVar12 = in_w8;
        goto LAB_03549564;
      }
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
      }
      fVar54 = fStack00000000000000c4;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar54 = *(float *)(unaff_x19 + 0x59);
        if ((fVar54 < *(float *)((long)unaff_x19 + 700)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar48 = *(float *)((long)unaff_x19 + 700) +
                   ((fStack0000000000000018 - fVar55) / (float)((int)unaff_x19[0x95] + 1)) /
                   in_stack_00000050;
          if (fVar48 <= fVar54) {
            fVar48 = fVar54;
          }
UnityEngine_AndroidJavaObject___ctor:
          *(float *)((long)unaff_x19 + 700) = fVar48;
          return;
        }
        fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar54 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar42 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_0354fc94;
        fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar46 = (ulong)(uint)fVar42;
        fVar54 = *(float *)(unaff_x19 + 0x4a);
        if ((fVar54 < fVar42) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_0354fcd0;
      }
      switch((int)unaff_x19[0x5c]) {
      case 0:
      case 2:
      case 4:
        goto switchD_0354b88c_caseD_0;
      case 1:
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar25 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = FUN_01a46ff8(lVar22);
        }
        piVar19 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
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
        iVar11 = FUN_0358c15c();
        bStack000000000000006c = 0;
LAB_0354b3a0:
        iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
        *(int *)((long)unaff_x19 + 0x494) = iVar15;
        in_stack_00000180 = in_stack_00000180 + 1;
        in_stack_000017b8 = iVar11 - 1;
        in_stack_000017d8 = CONCAT44(0x2026,iVar15);
        goto LAB_03549564;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017b8 = FUN_0358c15c();
        bStack000000000000006c = 0;
LAB_0354b0e0:
        in_stack_000017d8 = CONCAT44(3,uVar14);
        goto LAB_03549564;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        uVar46 = unaff_d13;
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
        uVar49 = FUN_036cee6c(lVar22,0,0);
        if ((uVar49 & 1) != 0) {
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
        if (in_w8 == 0xad) {
          if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar22 + 0x18) <= *unaff_x20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(undefined1 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
        }
        else if (in_w8 == 9) {
          lVar22 = *unaff_x22;
          if ((lVar22 == 0) || (lVar25 = *(long *)(lVar22 + 0x38), lVar25 == 0)) goto LAB_0354fbf4;
          uVar12 = *unaff_x20;
          if (*(uint *)(lVar25 + 0x18) <= uVar12)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          *(undefined1 *)(lVar25 + (long)(int)uVar12 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar12;
          lVar25 = *(long *)(lVar22 + 0x50);
          if (lVar25 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
LAB_0354b950:
          *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
            (**(code **)(*unaff_x19 + 0x898))(fVar54,fVar40);
          }
          else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
            (**(code **)(*unaff_x19 + 0x888))(in_stack_00000168._4_4_);
          }
          uVar12 = *unaff_x20;
          if ((in_stack_00000060 & 1) != 0) {
            *(uint *)(in_stack_00000078 + 0x1f0) = uVar12;
          }
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar12;
          *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
          if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x50), lVar22 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          in_stack_00000060 = 0;
          *(float *)(lVar22 + 0x60) = fVar39;
          *(float *)(lVar22 + 100) = fVar59;
        }
LAB_0354ba38:
        if (((int)unaff_x19[0x5c] == 1) && ((in_w8 == 0x2d || (unaff_w23 != 1)))) {
          if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
          fVar48 = *(float *)(unaff_x19 + 0x3d);
          iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
          if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
          fVar39 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
          lVar22 = unaff_x19[0xca];
          fVar47 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar47 = 1.0;
          }
          if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0354fbf4;
          fVar54 = *(float *)((long)unaff_x19 + 0x404);
          fVar42 = *(float *)(lVar22 + 0x2c);
          fVar59 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
          fVar40 = *_fStack00000000000000a8;
          fVar59 = fVar54 * (fVar48 / (float)iVar11) * fVar39 * fVar47 * fVar42 * fVar59;
          fVar48 = *_fStack00000000000000a0;
          if ((in_w8 == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
            if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x38), lVar22 == 0))
            goto LAB_0354fbf4;
            uVar12 = *(int *)((long)unaff_x19 + 0x494) - 1;
            if (*(uint *)(lVar22 + 0x18) <= uVar12)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
            fVar47 = *(float *)(lVar22 + (long)(int)uVar12 * (long)iVar13 + 0x60);
            iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
            fVar54 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
            lVar22 = unaff_x19[0xca];
            fVar39 = fStack0000000000000098;
            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
              fVar39 = 1.0;
            }
            if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0354fbf4;
            fVar42 = *(float *)((long)unaff_x19 + 0x404);
            fVar55 = *(float *)(lVar22 + 0x2c);
            fVar59 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
            if ((*unaff_x22 == 0) || (lVar22 = *(long *)(*unaff_x22 + 0x50), lVar22 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            fVar40 = *(float *)(lVar22 + 0x60);
            fVar48 = *(float *)(lVar22 + 100);
            fVar59 = fVar42 * (fVar47 / (float)iVar13) * fVar54 * fVar39 * fVar55 * fVar59;
          }
          fVar54 = *(float *)(unaff_x19 + 0x9b);
          fVar47 = 0.0;
          fVar39 = 0.0;
          if ((0.0 < fVar54) && (fVar39 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar39 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar55 = *(float *)(unaff_x19 + 0x97);
          fVar41 = *(float *)((long)unaff_x19 + 0x4cc);
          fVar42 = *(float *)(unaff_x19 + 200);
          if ((char)unaff_x19[0x1e] == '\0') {
            if ((unaff_x19[0xca] == 0) || (lVar22 = *(long *)(unaff_x19[0xca] + 0x20), lVar22 == 0))
            goto LAB_0354fbf4;
            FUN_03776e6c(&stack0x000008b0,lVar22,0);
            fVar47 = (float)FUN_03776cb4(&stack0x00001710,0);
          }
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          fVar52 = *(float *)(unaff_x19 + 0x6c);
          fVar48 = (fStack000000000000009c - fVar40) - fVar48;
          bVar10 = true;
          if ((fVar52 <= fVar48) && (bVar10 = false, !NAN(fVar52))) {
            bVar10 = fVar52 == -1.0;
          }
          if (!bVar10) {
            fVar48 = fVar52;
          }
          fVar40 = 1.0;
          if ((uVar27 & 0x18) != 0) {
            fVar40 = DAT_00d38acc;
          }
          if (((fVar55 - (fVar41 - fVar54)) + fVar39 < fStack00000000000000c4) &&
             (ABS(fVar42) + fVar59 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
              fVar40 * fVar48)) {
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            lVar22 = *(long *)(*(long *)puVar9 + 0xb8);
            memcpy(&stack0x00000538,(void *)(lVar22 + 0x788),0x378);
            FUN_0209b210(lVar22 + 0x11f0,&stack0x00000538,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
        lVar22 = *unaff_x22;
        if (lVar22 == 0) goto LAB_0354fbf4;
        lVar25 = *(long *)(lVar22 + 0x38);
        unaff_d13 = (ulong)(uint)fVar58;
        if (lVar25 == 0) goto LAB_0354fbf4;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar12 = *(uint *)(unaff_x19 + 0x95);
        lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
        *(uint *)(lVar25 + 100) = uVar12;
        *(int *)(lVar25 + 0x68) = (int)unaff_x19[0x96];
        if ((unaff_w23 == 0) && ((0xd < in_w8 || ((1 << (ulong)(in_w8 & 0x1f) & 0x2c00U) == 0)))) {
          lVar22 = *(long *)(lVar22 + 0x50);
          if (lVar22 == 0) goto LAB_0354fbf4;
        }
        else {
          lVar22 = *(long *)(lVar22 + 0x50);
          if (lVar22 == 0) goto LAB_0354fbf4;
          if (*(uint *)(lVar22 + 0x18) <= uVar12)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (*(int *)(lVar22 + (long)(int)uVar12 * 0x5c + 0x24) != 1) goto LAB_0354bdfc;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar12)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        *(int *)(lVar22 + (long)(int)uVar12 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
LAB_0354bdfc:
        if (in_w8 == 9) {
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar48 = (float)FUN_03776a48(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_0354fbf4;
          fVar39 = *(float *)(unaff_x19 + 200);
          fVar47 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
          fVar58 = fVar58 * fVar48 * fVar47;
          fVar47 = fVar58 * (float)(int)(fVar39 / fVar58);
          uVar46 = (ulong)(uint)fVar47;
          if (fVar47 <= fVar39) {
            fVar47 = fVar39 + fVar58;
          }
          goto LAB_0354c000;
        }
        param_1 = *(float *)(unaff_x19 + 0x56);
        in_ZR = false;
        in_stack_000017ec = in_w8;
        if (!NAN(param_1)) {
          in_ZR = param_1 == 0.0;
        }
        goto code_r0x0354be68;
      }
    }
    fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar54 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if ((fVar42 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_0354fc94:
      fVar58 = fVar47;
      if (0.0 < fVar42) {
        fVar58 = fVar47 / (1.0 - fVar42);
      }
      fVar42 = fVar42 + (fVar47 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar58;
LAB_0354fc24:
      if (fVar54 <= fVar42) {
        fVar42 = fVar54;
      }
      *(float *)((long)unaff_x19 + 0x2d4) = fVar42;
      return;
    }
    fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
    uVar46 = (ulong)(uint)fVar42;
    fVar54 = *(float *)(unaff_x19 + 0x4a);
    if ((fVar42 <= fVar54) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
    goto LAB_0354b6dc;
LAB_0354fcd0:
    fVar48 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar48 <= DAT_00d38b84) {
      fVar48 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar42;
    fVar42 = fVar42 - fVar48;
  }
  fVar47 = fVar42 * 20.0 + 0.5;
  fVar48 = DAT_00d38e60;
  if (fVar47 != INFINITY) {
    fVar48 = (float)(int)fVar47 / 20.0;
  }
  if (fVar48 <= fVar54) {
    fVar48 = fVar54;
  }
LAB_0354d004:
  *(float *)((long)unaff_x19 + 0x1e4) = fVar48;
  return;
}


