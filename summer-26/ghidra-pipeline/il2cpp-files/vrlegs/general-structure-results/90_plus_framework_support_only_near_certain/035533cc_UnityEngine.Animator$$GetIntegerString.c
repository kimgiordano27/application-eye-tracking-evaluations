/*
FUNCTION_NAME: UnityEngine.Animator$$GetIntegerString
ENTRY_POINT: 035533cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_Animator__GetIntegerString(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
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
  undefined1 uVar23;
  char cVar24;
  undefined4 *puVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  code *pcVar29;
  float *pfVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar40;
  byte unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar41;
  long unaff_x26;
  uint unaff_w27;
  uint uVar42;
  undefined8 *unaff_x29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  ulong uVar50;
  float fVar51;
  ulong uVar52;
  float fVar53;
  float fVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  undefined1 auVar65 [16];
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  byte bStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  float in_stack_00000090;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000140;
  float fStack0000000000000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  uint in_stack_000008a0;
  undefined4 in_stack_000008a4;
  undefined4 in_stack_000008b0;
  undefined4 in_stack_00000c18;
  undefined4 in_stack_00000c1c;
  undefined8 in_stack_00000c20;
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d8;
  uint uVar66;
  uint in_stack_000017dc;
  
LAB_035533d0:
  lVar31 = *in_stack_00000170;
  if (lVar31 != 0) {
    lVar28 = *(long *)(lVar31 + 0x38);
    uVar20 = _fStack0000000000000150 & 0xffffffff;
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar13 = *(uint *)(unaff_x19 + 0x95);
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar28 + 100) = uVar13;
    *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar31 = *(long *)(lVar31 + 0x50);
      if (lVar31 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      *(int *)(lVar31 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar31 = *(long *)(lVar31 + 0x50);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      if (*(int *)(lVar31 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar48 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar53 = *(float *)(unaff_x19 + 200);
      fVar51 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar48 = fStack0000000000000150 * fVar48 * fVar51;
      fVar51 = fVar48 * (float)(int)(fVar53 / fVar48);
      uVar50 = (ulong)(uint)fVar51;
      param_2 = extraout_x1_13;
      if (fVar51 <= fVar53) {
        fVar51 = fVar53 + fVar48;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar51;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar53 = 1.0;
        }
        else {
          fVar53 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar51 = *(float *)(unaff_x19 + 200);
        fVar54 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar48 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar51 = fVar51 + fVar48 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fStack0000000000000150 *
                                     (fStack000000000000012c + fVar53 * fVar54) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar51;
          param_2 = extraout_x1_14;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar51 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fStack0000000000000150 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar50 = (ulong)(uint)fVar51;
      fVar51 = *(float *)(unaff_x19 + 200) - fVar51;
      *(float *)(unaff_x19 + 200) = fVar51;
      if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
        fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar50 = (ulong)(uint)fVar48;
        fVar51 = fVar51 - fVar48;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar48 = *(float *)(unaff_x19 + 200);
      fVar51 = fVar48 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                        fStack00000000000000d4 *
                        (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar51;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar50 = (ulong)(uint)fVar48, unaff_w27 != 0)) {
        fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar50 = (ulong)(uint)fVar48;
        fVar51 = fVar51 + fVar48;
        goto LAB_03553678;
      }
    }
    lVar31 = *in_stack_00000170;
    if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    uVar17 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar17 <= uVar13) goto LAB_035575f4;
    *(float *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar51;
    iVar14 = (int)unaff_x24;
    uVar55 = in_stack_000017dc;
    uVar66 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar13 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar50 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar13 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar48 = *(float *)(unaff_x19 + 0x99);
        fVar51 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdee0,param_2);
        }
        fVar48 = fVar48 - fVar51;
        if (((fStack000000000000005c < ABS(fVar48)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar48);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar48;
          *(float *)(unaff_x19 + 0x9b) = fVar48 + *(float *)(unaff_x19 + 0x9b);
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar31 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar31 = *(long *)puVar8;
          }
          lVar28 = *(long *)(lVar31 + 0xb8);
          if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar28 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar31 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar31 + 0xb8) + 0x818,0);
            lVar31 = *(long *)(*(long *)puVar8 + 0xb8);
            *(float *)(lVar31 + 0x7bc) = fVar48 + *(float *)(lVar31 + 0x7bc);
            *(float *)(lVar31 + 0x800) = fVar48 + *(float *)(lVar31 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar31 + 0x788),0x378);
            FUN_0209b210(lVar31 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar53 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar51 = *(float *)((long)unaff_x19 + 0x4cc) - fVar53;
      fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar51 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar48 = fVar51;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar48;
      fVar54 = *(float *)(unaff_x19 + 0x99);
      if (*(char *)((long)unaff_x29 + 0xf34) == '\0') {
        in_stack_000017d8 = fVar48;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        *(undefined1 *)((long)unaff_x29 + 0xf34) = 1;
      }
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      uVar13 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar32 = unaff_x19[0x93];
      lVar35 = lVar28 + (long)(int)uVar13 * 0x5c;
      *(int *)(lVar35 + 0x34) = (int)lVar32;
      uVar17 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar32 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar17 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar17;
      *(uint *)(lVar35 + 0x38) = uVar17;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar35 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar12 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar17 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
      *(int *)(lVar35 + 0x40) = iVar12;
      *(int *)(lVar35 + 0x24) = (*(int *)(lVar35 + 0x3c) - *(int *)(lVar35 + 0x34)) + 1;
      *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar64 = *(undefined4 *)(lVar31 + (long)(int)uVar17 * (long)iVar14 + 0x11c);
      lVar28 = lVar28 + (long)(int)uVar13 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar51;
      *(undefined4 *)(lVar28 + 0x6c) = uVar64;
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar54 = fVar54 - fVar53;
      uVar50 = (ulong)(uint)fVar54;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) =
           *(undefined4 *)
            (lVar31 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar28 + 0x78) = fVar54;
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar32 = *(long *)(lVar31 + 0x50), lVar32 == 0)) goto LAB_035574b8;
      lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar32 + lVar35 * 0x5c;
      *(float *)(lVar28 + 0x44) =
           *(float *)(lVar28 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
      *(float *)(lVar28 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar28 + 0x24) == 1) {
        *(int *)(lVar32 + lVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar28 = *(long *)(lVar31 + 0x38), lVar28 == 0)) goto LAB_035574b8;
      lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar17 = (uint)*(undefined8 *)(lVar28 + 0x18);
      if (uVar17 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar28 + lVar36 * unaff_x24 + 0x194) == '\0') &&
         (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar17 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar32 = lVar32 + lVar35 * 0x5c;
      fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar48 = -fVar53;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar48 = fVar53;
      }
      *(float *)(lVar32 + 0x58) = *(float *)(lVar28 + lVar36 * unaff_x24 + 0x144) + fVar48;
      *(float *)(lVar32 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar32 + 0x54) = fVar51;
      *(float *)(lVar32 + 0x48) = in_stack_00000060 + (fVar54 - fVar51);
      *(float *)(lVar32 + 0x4c) = fVar54;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar31 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar12 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar12;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar31 != 0) && (*(long *)(lVar31 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar31 + 0x50) + 0x18) <= iVar12) {
              FUN_0358ca18();
              lVar31 = unaff_x19[0x6d];
              if (lVar31 == 0) goto LAB_035574b8;
            }
            lVar31 = *(long *)(lVar31 + 0x38);
            if (lVar31 != 0) {
              if (*unaff_x20 < *(uint *)(lVar31 + 0x18)) {
                fVar48 = *(float *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar51 = 0.0, in_stack_000017dc == 10)) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 0;
                  fVar51 = fVar48 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar51) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar51 = 0.0, in_stack_000017dc == 10)) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 1;
                  fVar51 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar51);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar51;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
                puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar31 = *(long *)puVar8;
                }
                uVar18 = *(undefined8 *)(*(long *)(lVar31 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar48;
                uVar50 = NEON_rev64(uVar18,4);
                unaff_x19[0x99] = uVar50;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068._4_4_ = 1;
                bStack0000000000000070 = 1;
                goto LAB_03550bd0;
              }
              goto LAB_035575f4;
            }
          }
          goto LAB_035574b8;
        }
        if (in_stack_000017dc == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
          in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar55 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar13 = *unaff_x20;
    if (uVar17 <= uVar13) goto LAB_035575f4;
    if (*(char *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
      lVar28 = lVar28 + (long)(int)uVar13 * unaff_x24;
      uVar52 = *(ulong *)(lVar28 + 0x11c);
      uVar50 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar50 ^ (uVar50 ^ uVar52) &
                    ~CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar52 >> 0x20)),
                              -(uint)((float)uVar50 < (float)uVar52));
      uVar52 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar50 = *(ulong *)(lVar28 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar52 ^ (uVar52 ^ uVar50) &
                    ~CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar52 >> 0x20)),
                              -(uint)((float)uVar50 < (float)uVar52));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar55 || ((1 << (ulong)(uVar55 & 0x1f) & 0x2c00U) == 0)))) {
      lVar28 = *(long *)(lVar31 + 0x58);
      if (lVar28 == 0) goto LAB_035574b8;
      iVar12 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar28 + 0x18) < iVar12) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar31 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar31 = *in_stack_00000170;
        if (lVar31 == 0) goto LAB_035574b8;
      }
      lVar28 = *(long *)(lVar31 + 0x58);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar17 = *(uint *)(unaff_x19 + 0x96);
      lVar32 = (long)(int)uVar17;
      uVar13 = *(uint *)(lVar28 + 0x18);
      unaff_x29 = (undefined8 *)&stack0x000008a0;
      if (uVar13 <= uVar17) goto LAB_035575f4;
      lVar35 = lVar28 + lVar32 * 0x14;
      fVar51 = *(float *)(lVar35 + 0x30);
      uVar50 = (ulong)(uint)fVar51;
      *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar51 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar48 = fVar51;
      }
      *(float *)(lVar35 + 0x30) = fVar48;
      uVar55 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar55 == 0 && uVar17 == 0) {
        *(uint *)(lVar28 + (ulong)uVar17 * 0x14 + 0x20) = uVar55;
      }
      else {
        uVar42 = uVar55 - 1;
        if (0 < (int)uVar55) {
          lVar31 = *(long *)(lVar31 + 0x38);
          if (lVar31 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar31 + 0x18) <= uVar42) goto LAB_035575f4;
          if (uVar17 != *(uint *)(lVar31 + (ulong)uVar42 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar17 - 1 < uVar13) {
              *(uint *)(lVar28 + 0x20 + (long)(int)(uVar17 - 1) * 0x14 + 4) = uVar42;
              *(uint *)(lVar28 + 0x20 + lVar32 * 0x14) = uVar55;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar55 == in_stack_00000088._4_4_) {
          *(float *)(lVar28 + lVar32 * 0x14 + 0x24) = in_stack_00000088._4_4_;
        }
      }
    }
LAB_03553d10:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
    if ((unaff_w27 == 0) &&
       (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
        if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
             (0x1d < in_stack_000017dc - 0xa961)) || (uVar52 = FUN_03597a54(0), (uVar52 & 1) != 0))
           && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
        goto LAB_03553f78;
        lVar31 = FUN_035978e8(0);
        if ((lVar31 == 0) || (*(long *)(lVar31 + 0x10) == 0)) goto LAB_035574b8;
        uVar13 = FUN_0219c130(*(long *)(lVar31 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar13 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if ((uint)unaff_x26 != unaff_w25 || ((bStack0000000000000070 ^ 0xff) & 1) != 0)
          goto LAB_035542ac;
          if (unaff_w27 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar31 = FUN_035978e8(0);
        if (((lVar31 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar31 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20);
        uVar52 = FUN_0219c130(*(long *)(lVar31 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar13 & 1) != 0) goto LAB_035541dc;
        if ((uVar52 & 1) == 0) goto LAB_03554270;
        if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
        if (unaff_w27 != 0) {
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
        if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
        if ((bStack0000000000000074 & 1) == 0 && in_stack_000017dc == 0xad)
        goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
      }
      bStack0000000000000070 = 1;
    }
    else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
      if ((bStack0000000000000070 & 1) != 0) {
        if (unaff_w27 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_0355422c;
      }
LAB_035542a8:
      bStack0000000000000070 = 0;
    }
    else {
      if (((in_stack_000017dc - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_000017dc == 0xa0 || (in_stack_000017dc == 0x2060)))) goto LAB_03553ef0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      bStack0000000000000070 = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_035542ac:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_03550bd0:
    fVar48 = (float)uVar20;
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar31 = unaff_x19[0x8f];
    if (lVar31 != 0) {
      if ((int)in_stack_000017a8 < (int)*(uint *)(lVar31 + 0x18)) {
        if (*(uint *)(lVar31 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
        in_stack_000017dc = *(uint *)(lVar31 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
        if (in_stack_000017dc == 0) goto LAB_0355459c;
        if (5 < in_stack_00000168._4_4_) {
          uVar18 = FUN_0276793c(&stack0x000017dc,0);
          uVar19 = FUN_0276793c(&stack0x000017a8,0);
          uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                                *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar19,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367ae18(uVar18,0);
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
        }
        if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017dc == 0x3c))
        goto code_r0x0355094c;
        if ((*in_stack_00000170 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar31 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar31 + 0x58);
            unaff_x19[0x20] = *(long *)(lVar31 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            goto LAB_035509d4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_0355459c:
      fVar48 = (float)uVar50;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar48 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar51 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar48 < fVar51) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar53 = (*(float *)((long)unaff_x19 + 0x23c) - fVar48) * 0.5;
          if (fVar53 <= DAT_00d38b84) {
            fVar53 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar48;
          fVar53 = (fVar48 + fVar53) * 20.0 + 0.5;
          fVar48 = DAT_00d38e60;
          if (fVar53 != INFINITY) {
            fVar48 = (float)(int)fVar53 / 20.0;
          }
          if (fVar51 <= fVar48) {
            fVar48 = fVar51;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar8 = PTR_DAT_03cbdf88;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar18 = FUN_0276793c(_fStack0000000000000038,0);
        uVar19 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar19,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar18,0);
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar66 == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar9;
      }
      plVar41 = (long *)OVRPlugin_Media_TypeInfo;
      lVar31 = **(long **)(lVar31 + 0xb8);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar14 = *(int *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x60), lVar31 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar31 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar31 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar12 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar31 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)uStack00000000000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar12 < 0x401) {
        if (iVar12 == 0x100) {
          if (lVar31 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar31 + 0x18) < 2) goto LAB_035575f4;
          uVar18 = *(undefined8 *)(lVar31 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar48 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar48 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar31 + 0x2c);
          fVar48 = (0.0 - fVar48) - fStack0000000000000020;
        }
        else if (iVar12 == 0x200) {
          if (lVar31 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar31 + 0x24) +
                            (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar31 = *(long *)(*in_stack_00000170 + 0x58), lVar31 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar31 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar31 = lVar31 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar48 = ((fStack0000000000000020 + *(float *)(lVar31 + 0x28) +
                      *(float *)(lVar31 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar48 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar12 != 0x400) goto LAB_03554c4c;
          if (lVar31 == 0) goto LAB_035574b8;
          if (*(int *)(lVar31 + 0x18) == 0) goto LAB_035575f4;
          uVar18 = *(undefined8 *)(lVar31 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar31 + 0x20);
          fVar48 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar48);
      }
      else if (iVar12 == 0x800) {
        if (lVar31 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0)) goto LAB_035575f4;
        fVar48 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar31 + 0x24) +
                              (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar48;
      }
      else {
        if (iVar12 == 0x1000) {
          if (lVar31 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar31 + 0x18) != 1) && (*(int *)(lVar31 + 0x18) != 0)) {
            uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar31 + 0x24) +
                              (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
            fVar48 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar12 == 0x2000) {
          if (lVar31 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0)) goto LAB_035575f4;
          fVar48 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar31 + 0x24) +
                                (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5 + fVar48);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar18 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar8);
      }
      uVar20 = FUN_036d35a8(uVar18,0,0);
      lVar31 = FUN_0357f060();
      if (lVar31 == 0) goto LAB_035574b8;
      FUN_036df824(lVar31,0);
      *(float *)(unaff_x19 + 0xe2) = fVar48;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar12 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar51 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar64 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar8 = OVRPlugin_Mesh_TypeInfo;
      lVar31 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar8;
      }
      puVar25 = *(undefined4 **)(lVar31 + 0xb8);
      uVar50 = (ulong)(uint)puVar25[1];
      uVar52 = (ulong)(uint)puVar25[2];
      uVar56 = (ulong)(uint)puVar25[3];
      FUN_035683a4(*puVar25,uVar50,uVar52,uVar56,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar31 = *in_stack_00000170;
      if (lVar31 == 0) goto LAB_035574b8;
      uVar13 = *unaff_x20;
      if ((int)uVar13 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar14 = 0;
        goto LAB_03556f00;
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      fVar48 = ABS(fVar48);
      fVar53 = 1.0;
      if ((uVar20 & 1) == 0) {
        fVar53 = fVar48;
      }
      if (lVar31 == 0) goto LAB_035574b8;
      bVar11 = false;
      bVar7 = false;
      _fStack0000000000000128 = 0;
      bVar10 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar28 = 0x2e0;
      fVar44 = 0.0;
      fVar54 = 0.0;
      fStack00000000000000c8 = fStack00000000000000d8;
      fStack0000000000000104 =
           *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
      fStack00000000000000d0 = fStack00000000000000dc;
      _bStack0000000000000070 = fStack00000000000000dc;
      fStack000000000000009c = fStack00000000000000dc;
      fStack00000000000000a0 = fStack00000000000000d8;
      fStack0000000000000100 = 0.0;
      in_stack_00000088._4_4_ = 0.0;
      fStack0000000000000040 = 0.0;
      fStack00000000000000a8 = 0.0;
      fStack0000000000000038 = 0.0;
      _bStack0000000000000074 = uStack00000000000000c0;
      fStack0000000000000078 = fStack00000000000000d8;
      fStack0000000000000098 = (float)uStack00000000000000c0;
      uVar17 = 1;
      uVar55 = 0;
      goto LAB_03554e78;
    }
  }
  goto LAB_035574b8;
switchD_03552ef4_default:
  bStack0000000000000074 = 0;
LAB_03552f54:
  if (in_stack_000017dc == 0xad) {
    if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *(undefined1 *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
  }
  else if (in_stack_000017dc == 9) {
    lVar31 = *in_stack_00000170;
    if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
    *(undefined1 *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
    *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
    lVar28 = *(long *)(lVar31 + 0x50);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
LAB_03552fcc:
    *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
  }
  else {
    lVar31 = 0x4ec;
    if (*(char *)((long)unaff_x19 + 0x1d4) != '\0') {
      lVar31 = 0x144;
    }
    param_2 = (ulong)*(uint *)((long)unaff_x19 + lVar31);
    if (*(int *)((long)unaff_x19 + 0x644) == 1) {
      (**(code **)(*unaff_x19 + 0x898))(fVar53,fVar43);
      param_2 = extraout_x1_08;
    }
    else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
      (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      param_2 = extraout_x1_07;
    }
    uVar13 = *unaff_x20;
    if ((in_stack_00000068._4_4_ & 1) != 0) {
      *(uint *)(in_stack_00000080 + 0x1f0) = uVar13;
    }
    *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
    *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
    if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x50), lVar31 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    in_stack_00000068._4_4_ = 0;
    *(float *)(lVar31 + 0x60) = fVar54;
    *(float *)(lVar31 + 100) = fVar44;
  }
LAB_035530c4:
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar48 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar53 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar31 = unaff_x19[0xca];
    fVar51 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar51 = 1.0;
    }
    if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_035574b8;
    fVar44 = *(float *)((long)unaff_x19 + 0x404);
    fVar43 = *(float *)(lVar31 + 0x2c);
    fVar54 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
    fVar61 = *_fStack00000000000000a8;
    fVar54 = fVar44 * (fVar48 / (float)iVar12) * fVar53 * fVar51 * fVar43 * fVar54;
    fVar48 = *_fStack00000000000000a0;
    param_2 = extraout_x1_09;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar51 = *(float *)(lVar31 + (long)(int)uVar13 * (long)iVar14 + 0x60);
      iVar14 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar44 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar31 = unaff_x19[0xca];
      fVar53 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar53 = 1.0;
      }
      if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_035574b8;
      fVar43 = *(float *)((long)unaff_x19 + 0x404);
      fVar45 = *(float *)(lVar31 + 0x2c);
      fVar54 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x50), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar61 = *(float *)(lVar31 + 0x60);
      fVar48 = *(float *)(lVar31 + 100);
      fVar54 = fVar43 * (fVar51 / (float)iVar14) * fVar44 * fVar53 * fVar45 * fVar54;
      param_2 = extraout_x1_10;
    }
    fVar44 = *(float *)(unaff_x19 + 0x9b);
    fVar51 = 0.0;
    fVar53 = 0.0;
    if ((0.0 < fVar44) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar53 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar45 = *(float *)(unaff_x19 + 0x97);
    fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar43 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar31 = *(long *)(unaff_x19[0xca] + 0x20), lVar31 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar31,0);
      fVar51 = (float)FUN_03776cb4(&stack0x00001700,0);
      param_2 = extraout_x1_11;
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar46 = *(float *)(unaff_x19 + 0x6c);
    fVar48 = (fStack000000000000009c - fVar61) - fVar48;
    bVar10 = true;
    if ((fVar46 <= fVar48) && (bVar10 = false, !NAN(fVar46))) {
      bVar10 = fVar46 == -1.0;
    }
    if (!bVar10) {
      fVar48 = fVar46;
    }
    fVar61 = 1.0;
    if ((uVar17 & 0x18) != 0) {
      fVar61 = DAT_00d38acc;
    }
    if (((fVar45 - (fVar62 - fVar44)) + fVar53 < fStack00000000000000c4) &&
       (ABS(fVar43) + fVar54 * fVar51 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar61 * fVar48)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar31 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar31 + 0x788),0x378);
      FUN_0209b210(lVar31 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
      param_2 = extraout_x1_12;
    }
  }
  goto LAB_035533d0;
LAB_03554e78:
  uVar13 = uVar17 - 1;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x50), lVar32 == 0))
  goto LAB_035574b8;
  lVar36 = (long)(int)uVar13;
  lVar35 = lVar31 + lVar36 * 0x178;
  uVar66 = *(uint *)(lVar35 + 100);
  if (*(uint *)(lVar32 + 0x18) <= uVar66) goto LAB_035575f4;
  lVar39 = (long)(int)uVar66;
  lVar32 = lVar32 + lVar39 * 0x5c;
  lVar33 = *(long *)(lVar35 + 0x38);
  uVar3 = *(ushort *)(lVar35 + 0x20);
  uVar5 = *(uint *)(lVar32 + 0x3c);
  uVar42 = *(uint *)(lVar32 + 0x68);
  iVar2 = *(int *)(lVar32 + 0x20);
  iVar15 = *(int *)(lVar32 + 0x28);
  iVar16 = *(int *)(lVar32 + 0x2c);
  uVar6 = *(uint *)(lVar32 + 0x40);
  lVar35 = (long)(int)uVar6;
  fVar45 = *(float *)(lVar32 + 0x4c);
  fVar46 = *(float *)(lVar32 + 0x54);
  fVar61 = *(float *)(lVar32 + 0x58);
  fVar47 = *(float *)(lVar32 + 0x5c);
  fVar57 = *(float *)(lVar32 + 0x60);
  fVar59 = *(float *)(lVar32 + 0x6c);
  fVar58 = *(float *)(lVar32 + 0x70);
  fVar43 = *(float *)(lVar32 + 0x74);
  fVar62 = *(float *)(lVar32 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar57 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar61;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar57 + fVar47 * 0.5) - fVar61 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar47 + fVar57) - fVar61;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar47 + fVar57;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar42 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar31 + 0x18) <= uVar5) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar31 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b8cc4(uVar4,0);
      if ((uVar20 & 1) == 0) {
        bVar1 = (int)uVar66 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar61 <= fVar47) && (!bVar1 && uVar42 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar57;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar47 + fVar57;
        }
        goto LAB_03555088;
      }
      if (((uVar17 == 1) || (uVar66 != uVar55)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar57;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar47 + fVar57;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar57 = -fVar61;
        if (cVar24 != '\0') {
          fVar57 = fVar61;
        }
        if (*(uint *)(lVar31 + 0x18) <= uVar5) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar31 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar61 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar61 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_03556e74:
          fVar61 = 1.0 - fVar61;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b97f8(uVar38,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar61 = ((fVar47 + fVar57) * fVar61) / (float)iVar16;
        if (cVar24 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar61;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar61;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar61 = fVar59 + fVar43;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar42 <= uVar13) goto LAB_035575f4;
  lVar32 = lVar31 + lVar36 * 0x178;
  fVar47 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar61 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar57 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar32 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar31 + lVar36 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar44 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar66,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar31 + lVar36 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar44 = 1.0;
    break;
  case 1:
    fVar62 = *(float *)(lVar31 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar31 + lVar36 * 0x178;
      fVar43 = (in_stack_000000f8._4_4_ + fVar62) - *(float *)(in_stack_00000080 + 0x230);
      fVar62 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar26 = lVar31 + lVar36 * 0x178;
    fVar43 = fVar43 - fVar59;
    *(float *)(lVar26 + 0x84) = fVar44 + (fVar62 - fVar59) / fVar43;
    *(float *)(lVar26 + 0xac) = fVar44 + (*(float *)(lVar26 + 0x98) - fVar59) / fVar43;
    *(float *)(lVar26 + 0xd4) = fVar44 + (*(float *)(lVar26 + 0xc0) - fVar59) / fVar43;
    fVar44 = fVar44 + (*(float *)(lVar26 + 0xe8) - fVar59) / fVar43;
    break;
  case 2:
    lVar26 = lVar31 + lVar36 * 0x178;
    fVar62 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar43 = (in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar26 + 0x84) = fVar44 + fVar43 / fVar62;
    *(float *)(lVar26 + 0xac) =
         fVar44 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar44 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar44 = fVar44 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar26 = lVar31 + lVar36 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar31 + lVar36 * 0x178;
      fVar62 = fVar62 - fVar58;
      fVar43 = fVar44 + (*(float *)(lVar26 + 0x74) - fVar58) / fVar62;
      fVar62 = fVar44 + (*(float *)(lVar26 + 0x9c) - fVar58) / fVar62;
      *(float *)(lVar26 + 0x88) = fVar43;
      *(float *)(lVar26 + 0xb0) = fVar62;
      *(float *)(lVar26 + 0xd8) = fVar43;
      *(float *)(lVar26 + 0x100) = fVar62;
      break;
    case 2:
      lVar26 = lVar31 + lVar36 * 0x178;
      fVar43 = fVar44 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar43;
      fVar62 = *(float *)(unaff_x19 + 0x9c);
      fVar59 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar43;
      fVar43 = fVar44 + (*(float *)(lVar26 + 0x9c) - fVar62) / (fVar59 - fVar62);
      *(float *)(lVar26 + 0xb0) = fVar43;
      *(float *)(lVar26 + 0x100) = fVar43;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar31 + 0x18);
    }
    if (uVar42 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar31 + lVar36 * 0x178;
    fVar43 = *(float *)(lVar26 + 0x15c);
    fVar62 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar43) * 0.5;
    fVar59 = fVar44 + *(float *)(lVar26 + 0x88) * fVar43 + fVar62;
    fVar44 = fVar44 + fVar62 + *(float *)(lVar26 + 0xb0) * fVar43;
    *(float *)(lVar26 + 0x84) = fVar59;
    *(float *)(lVar26 + 0xac) = fVar59;
    *(float *)(lVar26 + 0xd4) = fVar44;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar31 + lVar36 * 0x178 + 0xfc) = fVar44;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar31 + lVar36 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar42) {
      lVar26 = lVar31 + lVar36 * 0x178;
      fVar45 = fVar45 - fVar46;
      fVar44 = (*(float *)(lVar26 + 0x74) - fVar46) / fVar45;
      fVar45 = (*(float *)(lVar26 + 0x9c) - fVar46) / fVar45;
      *(float *)(lVar26 + 0x88) = fVar44;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar42 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar31 + lVar36 * 0x178;
    fVar44 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar44;
    fVar45 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar26 + 0xb0) = fVar45;
    *(float *)(lVar26 + 0xd8) = fVar45;
    *(float *)(lVar26 + 0x100) = fVar44;
    break;
  case 3:
    if (uVar42 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar31 + lVar36 * 0x178;
    fVar45 = *(float *)(lVar26 + 0x15c);
    fVar43 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar45) * 0.5;
    fVar44 = *(float *)(lVar26 + 0x84) / fVar45 + fVar43;
    fVar43 = fVar43 + *(float *)(lVar26 + 0xd4) / fVar45;
    *(float *)(lVar26 + 0x88) = fVar44;
    *(float *)(lVar26 + 0xb0) = fVar43;
    *(float *)(lVar26 + 0x100) = fVar44;
    *(float *)(lVar26 + 0xd8) = fVar43;
  }
  if (uVar42 <= uVar13) goto LAB_035575f4;
  lVar26 = lVar31 + lVar36 * 0x178;
  fVar44 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar31 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar44 = -fVar44;
  }
  fVar43 = fVar48;
  if (((iVar12 == 2) || (fVar43 = fVar53, iVar12 == 1)) || (fVar43 = fVar48 / fVar51, iVar12 == 0))
  {
    fVar44 = fVar43 * fVar44;
  }
  lVar26 = lVar31 + lVar36 * 0x178;
  fVar45 = *(float *)(lVar26 + 0x88);
  fVar62 = *(float *)(lVar26 + 0x84);
  fVar43 = -2.1474836e+09;
  if (fVar62 != INFINITY) {
    fVar43 = (float)(int)fVar62;
  }
  fVar59 = *(float *)(lVar26 + 0xd4);
  fVar58 = *(float *)(lVar26 + 0xd8);
  fVar46 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar46 = (float)(int)fVar45;
  }
  uVar49 = FUN_03591d3c(fVar62 - fVar43,fVar45 - fVar46);
  *(undefined4 *)(lVar26 + 0x84) = uVar49;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar58 = fVar58 - fVar46;
  *(float *)(lVar26 + 0x88) = fVar44;
  uVar49 = FUN_03591d3c(fVar62 - fVar43,fVar58);
  *(undefined4 *)(lVar31 + lVar36 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar59 = fVar59 - fVar43;
  *(float *)(lVar31 + lVar36 * 0x178 + 0xb0) = fVar44;
  fVar43 = (float)FUN_03591d3c(fVar59,fVar58);
  *(float *)(lVar26 + 0xd4) = fVar43;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  *(float *)(lVar26 + 0xd8) = fVar44;
  uVar49 = FUN_03591d3c(fVar59,fVar45 - fVar46);
  *(undefined4 *)(lVar31 + lVar36 * 0x178 + 0xfc) = uVar49;
  uVar42 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar42 <= uVar13) goto LAB_035575f4;
  *(float *)(lVar31 + lVar36 * 0x178 + 0x100) = fVar44;
LAB_0355574c:
  if (((int)uVar13 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar66 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar13) goto LAB_035575f4;
      lVar32 = lVar31 + lVar36 * 0x178;
      *(ulong *)(lVar32 + 0x70) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar32 + 0x70));
      *(float *)(lVar32 + 0x78) = fVar57 + *(float *)(lVar32 + 0x78);
      *(ulong *)(lVar32 + 0x98) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar32 + 0x98));
      *(float *)(lVar32 + 0xa0) = fVar57 + *(float *)(lVar32 + 0xa0);
      *(ulong *)(lVar32 + 0xc0) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar32 + 0xc0));
      *(float *)(lVar32 + 200) = fVar57 + *(float *)(lVar32 + 200);
      *(ulong *)(lVar32 + 0xe8) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar32 + 0xe8));
      *(float *)(lVar32 + 0xf0) = fVar57 + *(float *)(lVar32 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar66 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar13 < uVar42) {
        if (*(uint *)(lVar31 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar32 = lVar31 + lVar36 * 0x178;
          *(ulong *)(lVar32 + 0x70) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                        fVar47 + (float)*(undefined8 *)(lVar32 + 0x70));
          *(float *)(lVar32 + 0x78) = fVar57 + *(float *)(lVar32 + 0x78);
          *(ulong *)(lVar32 + 0x98) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                        fVar47 + (float)*(undefined8 *)(lVar32 + 0x98));
          *(float *)(lVar32 + 0xa0) = fVar57 + *(float *)(lVar32 + 0xa0);
          *(ulong *)(lVar32 + 0xc0) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                        fVar47 + (float)*(undefined8 *)(lVar32 + 0xc0));
          *(float *)(lVar32 + 200) = fVar57 + *(float *)(lVar32 + 200);
          *(ulong *)(lVar32 + 0xe8) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                        fVar47 + (float)*(undefined8 *)(lVar32 + 0xe8));
          *(float *)(lVar32 + 0xf0) = fVar57 + *(float *)(lVar32 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar42 <= uVar13) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar42 = *(uint *)(lVar31 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar26 = lVar31 + lVar36 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar49;
  if (uVar42 <= uVar13) goto LAB_035575f4;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar26 = lVar31 + lVar36 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar49;
  *(undefined1 *)(lVar32 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar29)();
  }
  else if (iVar15 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  uVar18 = *(undefined8 *)(lVar32 + 0x11c);
  *(undefined8 *)(lVar32 + 0x11c) =
       CONCAT44(fVar61 + (float)((ulong)uVar18 >> 0x20),fVar47 + (float)uVar18);
  *(float *)(lVar32 + 0x124) = fVar57 + *(float *)(lVar32 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  *(ulong *)(lVar32 + 0x110) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0x110) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar32 + 0x110));
  *(float *)(lVar32 + 0x118) = fVar57 + *(float *)(lVar32 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  *(ulong *)(lVar32 + 0x128) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar32 + 0x128) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar32 + 0x128));
  *(float *)(lVar32 + 0x130) = fVar57 + *(float *)(lVar32 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  *(float *)(lVar32 + 0x134) = fVar47 + *(float *)(lVar32 + 0x134);
  *(ulong *)(lVar32 + 0x138) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar32 + 0x138) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar32 + 0x138));
  lVar32 = *in_stack_00000170;
  if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar42 = *(uint *)(lVar26 + 0x18);
  if (uVar42 <= uVar13) goto LAB_035575f4;
  lVar34 = lVar26 + lVar36 * 0x178;
  uVar50 = CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar43 = fVar61 + *(float *)(lVar34 + 0x150);
  uVar52 = (ulong)(uint)fVar43;
  uVar56 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar43;
  *(ulong *)(lVar34 + 0x140) = uVar50;
  *(ulong *)(lVar34 + 0x148) = uVar56;
  if (uVar66 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar13 == uVar55) goto LAB_03555b44;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar34 = (long)(int)uVar55;
    lVar37 = lVar32 + lVar34 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar43 = fVar61 + *(float *)(lVar37 + 0x54);
    uVar50 = (ulong)(uint)fVar43;
    fVar45 = fVar47 + *(float *)(lVar37 + 0x58);
    uVar52 = (ulong)(uint)fVar45;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar43;
    *(float *)(lVar37 + 0x58) = fVar45;
    if (uVar42 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar49 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar32 = lVar32 + lVar34 * 0x5c;
    *(float *)(lVar32 + 0x70) = fVar43;
    *(undefined4 *)(lVar32 + 0x6c) = uVar49;
    lVar32 = *in_stack_00000170;
    if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x50), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar32 = *(long *)(lVar32 + 0x38);
    if (lVar32 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar26 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar32 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar26 = lVar26 + lVar34 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar13 == uVar55) {
      lVar32 = *in_stack_00000170;
      if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar66) goto LAB_035575f4;
      lVar34 = lVar26 + lVar39 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar50 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar43 = fVar61 + *(float *)(lVar34 + 0x54);
      fVar47 = fVar47 + *(float *)(lVar34 + 0x58);
      uVar52 = (ulong)(uint)fVar47;
      *(ulong *)(lVar34 + 0x4c) = uVar50;
      *(float *)(lVar34 + 0x54) = fVar43;
      *(float *)(lVar34 + 0x58) = fVar47;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar49 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar43;
      *(undefined4 *)(lVar26 + 0x6c) = uVar49;
      lVar32 = *in_stack_00000170;
      if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar66) goto LAB_035575f4;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar26 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar32 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_026b82c4(uVar38,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar7) {
      if (((uVar17 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar31 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar31 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar31 + lVar28 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b82c4(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar31 + lVar28 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar4,0);
          if ((uVar20 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_0355686c:
        bVar7 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b81f8(uVar38,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b63d8(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar13 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b82c4(uVar38,0);
      iVar15 = (int)fStack0000000000000128;
      if ((uVar20 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar17 - 2;
    }
    lVar32 = *in_stack_00000170;
    if (lVar32 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar32 + 0x40);
    if (lVar26 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar32 + 0x24);
    iVar16 = *(int *)(lVar26 + 0x18);
    if (iVar16 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar32 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar32 = *in_stack_00000170;
      if (lVar32 == 0) goto LAB_035574b8;
    }
    lVar32 = *(long *)(lVar32 + 0x40);
    if (lVar32 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar32 = lVar32 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar32 + 0x20) = unaff_x19;
    *(float *)(lVar32 + 0x28) = fStack0000000000000158;
    *(int *)(lVar32 + 0x2c) = iVar15;
    *(int *)(lVar32 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar32 = unaff_x19[0x6d];
    if (lVar32 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar32 + 0x50);
    *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar66) goto LAB_035575f4;
    lVar26 = lVar26 + lVar39 * 0x5c;
    bVar7 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      fStack0000000000000158 = (float)uVar13;
    }
    if (uVar13 == *unaff_x20 - 1) {
      lVar32 = *in_stack_00000170;
      if (lVar32 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar32 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar32 + 0x24);
      iVar15 = *(int *)(lVar26 + 0x18);
      if (iVar15 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar32 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar32 = *in_stack_00000170;
        if (lVar32 == 0) goto LAB_035574b8;
      }
      lVar32 = *(long *)(lVar32 + 0x40);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar32 + 0x20) = unaff_x19;
      *(float *)(lVar32 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar32 + 0x2c) = uVar13;
      *(uint *)(lVar32 + 0x30) = uVar17 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = unaff_x19[0x6d];
      if (lVar32 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar32 + 0x50);
      *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar66) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_03555d68:
    bVar7 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  uVar55 = *(uint *)(lVar32 + 0x18);
  if (uVar55 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar32 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_03555da0:
      if (uVar55 <= uVar17 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar55 = *(uint *)(lVar32 + lVar28 + -0x330);
      uVar49 = *(undefined4 *)(lVar32 + lVar28 + -0x2f8);
LAB_035562ec:
      pcVar29 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar56 = (ulong)uVar55;
      uVar50 = (ulong)(uint)_bStack0000000000000070;
      uVar52 = (ulong)_bStack0000000000000074;
      (*pcVar29)(fStack0000000000000078,uVar50,uVar52,uVar56,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar49);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar32 = *(long *)puVar8;
      }
LAB_03556348:
      bVar11 = false;
      fVar54 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar32 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar11 = false;
    }
  }
  else {
    lVar32 = lVar32 + lVar36 * 0x178;
    iVar15 = *(int *)(lVar32 + 0x68);
    *(int *)(lVar32 + 0x16c) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar66)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b63d8(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar32 = *in_stack_00000170;
      if ((lVar32 == 0) || (lVar39 = *(long *)(lVar32 + 0x38), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_035575f4;
      fVar43 = *(float *)(lVar39 + lVar36 * 0x178 + 0x160);
      if (fVar54 <= fVar43) {
        fVar54 = fVar43;
      }
      if (fStack0000000000000100 <= ABS(fVar44)) {
        fStack0000000000000100 = ABS(fVar44);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *in_stack_00000170;
          if (lVar32 == 0) goto LAB_035574b8;
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar39 + 0x15a8);
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar45 = *(float *)(lVar32 + lVar36 * 0x178 + 0x14c);
      fVar43 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar45 = fVar45 + fVar54 * fVar43;
      if (fVar45 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar45;
      }
      uVar50 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar38,0);
        if ((uVar20 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar32 = lVar32 + lVar36 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar32 + 0x160);
      fStack0000000000000078 = *(float *)(lVar32 + 0x11c);
      uVar52 = (ulong)(uint)fStack0000000000000078;
      bVar11 = fVar54 != 0.0;
      fVar43 = in_stack_00000088._4_4_;
      if (bVar11) {
        fVar43 = fVar54;
      }
      fVar54 = fVar43;
      uVar64 = *(undefined4 *)(lVar32 + 0x168);
      _bStack0000000000000074 = 0;
      fVar43 = fVar44;
      if (bVar11) {
        fVar43 = fStack0000000000000100;
      }
      uVar50 = (ulong)(uint)fVar43;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar43;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        if (uVar13 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar36 * 0x178;
          lVar39 = *unaff_x19;
          uVar55 = *(uint *)(lVar32 + 0x128);
          uVar49 = *(undefined4 *)(lVar32 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar13 == uVar5) || ((int)uVar6 <= (int)uVar13)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        lVar39 = lVar36;
        uVar55 = uVar13;
        if (uVar38 == 0x200b || (uVar20 & 1) != 0) {
          lVar39 = lVar35;
          uVar55 = uVar6;
        }
        if (uVar55 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar39 * 0x178;
          uVar55 = *(uint *)(lVar32 + 0x128);
          uVar49 = *(undefined4 *)(lVar32 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        uVar55 = *(uint *)(lVar32 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar20 = FUN_03567ad8(uVar64,*(undefined4 *)(lVar32 + lVar28),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0)) {
          if (uVar13 < *(uint *)(lVar32 + 0x18)) {
            lVar32 = lVar32 + lVar36 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar32 + 0x128);
            uVar52 = (ulong)_bStack0000000000000074;
            uVar50 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar50,uVar52,uVar56,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar32 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar32 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar32 = *(long *)puVar8;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar11 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar32 + lVar36 * 0x178 + 400);
  fVar43 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
      uVar55 = *(uint *)(lVar32 + lVar28 + -0x330);
      fVar61 = *(float *)(lVar32 + lVar28 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar56 = (ulong)uVar55;
      uVar50 = (ulong)(uint)fStack000000000000009c;
      uVar52 = (ulong)(uint)fStack0000000000000098;
      (*pcVar29)(fStack00000000000000a0,uVar50,uVar52,uVar56,
                 fStack00000000000000a8 * fVar43 + fVar61,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar32 = *in_stack_00000170;
    if ((lVar32 == 0) || (lVar39 = *(long *)(lVar32 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar13) goto LAB_035575f4;
    *(int *)(lVar39 + lVar36 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar66)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar38,0);
        if ((uVar20 & 1) != 0) goto LAB_035564e8;
        lVar32 = *in_stack_00000170;
        if (lVar32 == 0) goto LAB_035574b8;
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar32 = lVar32 + lVar36 * 0x178;
      fStack0000000000000040 = *(float *)(lVar32 + 0x60);
      fStack0000000000000038 = *(float *)(lVar32 + 0x14c);
      uVar50 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar32 + 0x11c);
      uVar52 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar32 + 0x160);
      fStack000000000000009c = fVar43 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        if (uVar13 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar36 * 0x178;
          lVar35 = *unaff_x19;
          uVar55 = *(uint *)(lVar32 + 0x128);
          fVar61 = *(float *)(lVar32 + 0x14c);
LAB_03556654:
          pcVar29 = *(code **)(lVar35 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar13 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        uVar55 = *(uint *)(lVar32 + 0x18);
        if (uVar38 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar55 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar35 = lVar36;
          if (uVar55 <= uVar13) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar32 = lVar32 + lVar35 * 0x178;
        fVar61 = *(float *)(lVar32 + 0x14c);
        uVar55 = *(uint *)(lVar32 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)uVar55) {
      lVar32 = *in_stack_00000170;
      if ((lVar32 != 0) && (lVar39 = *(long *)(lVar32 + 0x38), lVar39 != 0)) {
        if (uVar17 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar28 + -0x108) == fStack0000000000000040) {
            fVar45 = *(float *)(lVar39 + lVar28 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar50 = (ulong)(uint)fStack0000000000000038;
            uVar20 = FUN_03567bac(fVar61 + fVar45,uVar50,0);
            if ((uVar20 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar32 = *in_stack_00000170;
            if (lVar32 == 0) goto LAB_035574b8;
          }
          lVar32 = *(long *)(lVar32 + 0x38);
          if (lVar32 != 0) {
            uVar55 = *(uint *)(lVar32 + 0x18);
            if ((int)uVar13 <= (int)uVar6) goto FUN_035568e8;
            if (uVar6 < uVar55) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar13 < (int)uVar55) {
      iVar15 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar32 = *(long *)(lVar31 + lVar28 + -0x130);
      if (lVar32 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar32,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar32 + 0x18)) {
          lVar35 = *unaff_x19;
          uVar55 = *(uint *)(lVar32 + lVar28 + -0x330);
          fVar61 = *(float *)(lVar32 + lVar28 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  uVar55 = (uint)*(undefined8 *)(lVar32 + 0x18);
  if (uVar55 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar32 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar52 = (ulong)uStack00000000000000c0;
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar52,uVar56,fStack00000000000000d0,uVar52);
    }
LAB_035569b4:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar66)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar32 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar38,0);
        if ((uVar20 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar8;
      }
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      uVar55 = (uint)*(undefined8 *)(lVar32 + 0x18);
      if (uVar55 <= uVar13) goto LAB_035575f4;
      lVar35 = *(long *)(lVar35 + 0xb8);
      lVar33 = lVar32 + lVar36 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar35 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar35 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar35 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar35 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar55 <= uVar13) goto LAB_035575f4;
    lVar32 = lVar32 + lVar36 * 0x178;
    fVar43 = *(float *)(lVar32 + 0x128);
    fVar46 = *(float *)(lVar32 + 0x188);
    uVar19 = *(undefined8 *)(lVar32 + 0x17c);
    fVar59 = *(float *)(lVar32 + 0x184);
    uVar18 = *(undefined8 *)(lVar32 + 0x184);
    fVar57 = *(float *)(lVar32 + 0x18c);
    fVar61 = *(float *)(lVar32 + 0x11c);
    fVar62 = *(float *)(lVar32 + 0x148);
    fVar45 = *(float *)(lVar32 + 0x150);
    in_stack_00000178 = uVar19;
    fStack0000000000000180 = fVar59;
    fStack0000000000000184 = fVar46;
    in_stack_00000188 = fVar57;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar20 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar32 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar32);
      }
      fVar43 = fVar43 + (float)in_stack_000017b8;
      uVar52 = (ulong)(uint)fVar43;
      fVar61 = fVar61 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar45 = fVar45 - in_stack_000017c0;
      uVar50 = (ulong)(uint)fVar45;
      fVar62 = fVar62 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar56 = (ulong)(uint)fVar62;
      if (fVar61 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar61;
      }
      if (fVar45 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar45;
      }
      if (fStack00000000000000c8 <= fVar43) {
        fStack00000000000000c8 = fVar43;
      }
      if (fStack00000000000000d0 <= fVar62) {
        fStack00000000000000d0 = fVar62;
      }
    }
    else {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar32);
      }
      fVar61 = (fVar61 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar56 = (ulong)(uint)fVar61;
      if (fVar45 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar45;
      }
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar52 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar62) {
        fStack00000000000000d0 = fVar62;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar52,uVar56,fStack00000000000000d0,uVar52);
      fStack00000000000000dc = fVar45 - fVar57;
      fStack00000000000000c8 = fVar43 + fVar59;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar62 + fVar46;
      fStack00000000000000d8 = fVar61;
      in_stack_000017b0 = uVar19;
      in_stack_000017b8 = uVar18;
      in_stack_000017c0 = fVar57;
    }
    if (((*unaff_x20 == 1) || (uVar13 == uVar5)) || (((int)uVar6 <= (int)uVar13 || (!bVar1)))) {
      uVar52 = (ulong)uStack00000000000000c0;
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar52,uVar56,fStack00000000000000d0,uVar52);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar13 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar13 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar55 = uVar66;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar31 = *in_stack_00000170;
  if (lVar31 != 0) {
    iVar14 = uVar66 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar31 + 0x18) = uVar13;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar31 + 0x2c) = iVar14;
    if ((int)uVar13 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar31 + 0x1c) = (int)lVar28;
    *(float *)(lVar31 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar31 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar31 = unaff_x19[0xdf];
    if (lVar31 != 0) {
      (**(code **)(lVar31 + 0x18))
                (*(undefined8 *)(lVar31 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar31 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar14 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar31 = unaff_x19[0xe5];
      if (lVar31 == 0) goto LAB_035574b8;
      uVar13 = FUN_03911ee4(lVar31,0);
      FUN_03911f20(lVar31,uVar13 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x60), lVar31 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar31 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar31 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar31 = *(long *)(unaff_x19[0x6d] + 0x60), lVar31 != 0)) {
        if (*(int *)(lVar31 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar31 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar31 = *(long *)(unaff_x19[0x6d] + 0x60), lVar31 != 0)) {
            if (*(int *)(lVar31 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar31 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar31 = *(long *)(unaff_x19[0x6d] + 0x60), lVar31 != 0)) {
                if (*(int *)(lVar31 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar31 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar31 = *(long *)(unaff_x19[0x6d] + 0x60), lVar31 != 0)) {
                    if (*(int *)(lVar31 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar31 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar18 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar13 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar31 = *in_stack_00000170;
                              if (lVar31 != 0) {
                                lVar32 = 0;
                                lVar28 = 0;
                                do {
                                  uVar20 = lVar28 + 1;
                                  if ((long)*(int *)(lVar31 + 0x34) <= (long)uVar20)
                                  goto LAB_03554724;
                                  lVar31 = *(long *)(lVar31 + 0x60);
                                  if (lVar31 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                  FUN_03596a20(lVar31 + lVar32 + 0x70,0);
                                  lVar31 = unaff_x19[0xe1];
                                  if (lVar31 == 0) break;
                                  if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                  uVar19 = *(undefined8 *)(lVar31 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_036d35a8(uVar19,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar31 = *(long *)(*in_stack_00000170 + 0x60), lVar31 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                      FUN_03596b20(lVar31 + lVar32 + 0x70,1,0);
                                    }
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = UnityEngine_Material__GetColorArray(lVar31,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar31 == 0) break;
                                    FUN_036a460c(lVar31,*(undefined8 *)(lVar35 + lVar32 + 0x80),0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = UnityEngine_Material__GetColorArray(lVar31,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar31 == 0) break;
                                    FUN_036a4810(lVar31,*(undefined8 *)(lVar35 + lVar32 + 0x98),0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = UnityEngine_Material__GetColorArray(lVar31,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar31 == 0) break;
                                    FUN_036a48bc(lVar31,*(undefined8 *)(lVar35 + lVar32 + 0xa0),0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = UnityEngine_Material__GetColorArray(lVar31,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar31 == 0) break;
                                    FUN_036a4e24(lVar31,*(undefined8 *)(lVar35 + lVar32 + 0xa8),0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if ((lVar31 == 0) ||
                                       (lVar31 = UnityEngine_Material__GetColorArray(lVar31,0),
                                       lVar31 == 0)) break;
                                    FUN_036aa280(lVar31,0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = FUN_037b514c(lVar31,0);
                                    lVar35 = unaff_x19[0xe1];
                                    if (lVar35 == 0) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar35 = *(long *)(lVar35 + lVar28 * 8 + 0x28);
                                    if ((lVar35 == 0) ||
                                       (uVar19 = UnityEngine_Material__GetColorArray(lVar35,0),
                                       lVar31 == 0)) break;
                                    FUN_0390f3a4(lVar31,uVar19,0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if ((lVar31 == 0) ||
                                       (lVar31 = FUN_037b514c(lVar31,0), lVar31 == 0)) break;
                                    FUN_0390eec8(uVar18,uVar50,uVar52,uVar56,lVar31,0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar31 = *(long *)(lVar31 + lVar28 * 8 + 0x28);
                                    if ((lVar31 == 0) ||
                                       (lVar31 = FUN_037b514c(lVar31,0), lVar31 == 0)) break;
                                    FUN_0390ed78(lVar31,uVar13 & 1,0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar20) goto LAB_035575f4;
                                    plVar40 = *(long **)(lVar31 + lVar28 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar17 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar31 = *in_stack_00000170;
                                  lVar28 = lVar28 + 1;
                                  lVar32 = lVar32 + 0x50;
                                } while (lVar31 != 0);
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
      }
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar52 = FUN_03586568();
  if (((uVar52 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, uVar66 = in_stack_000017dc,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar32 = (long)(int)uVar13;
  cVar24 = *(char *)(lVar31 + lVar32 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar28 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar13) {
    in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar31 + lVar32 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar31 + 0x2c) = 0;
      *(long *)(lVar31 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      uVar13 = *unaff_x20;
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar31 + (long)(int)uVar13 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar13 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar35 = FUN_03568ac0(*unaff_x21,0), lVar35 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar35,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      *(ulong *)(lVar31 + lVar32 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
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
  if (((int)uVar13 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar31 = lVar31 + (long)(int)uVar13 * (long)iVar14;
    *(undefined1 *)(lVar31 + 0x194) = 0;
    *(undefined2 *)(lVar31 + 0x20) = 0x200b;
    *(undefined4 *)(lVar31 + 100) = 0;
    *unaff_x20 = uVar13 + 1;
    uVar66 = in_stack_000017dc;
    goto LAB_03550bd0;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar13 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar13 >> 4 & 1) == 0) {
      if ((uVar13 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar13 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar52 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar52 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b8410(in_stack_000017dc,0);
            in_stack_000017dc = uVar13 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar52 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar52 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b8594(in_stack_000017dc,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar52 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar52 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar13 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar66 = in_stack_000017dc;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
    goto LAB_035574b8;
    uVar17 = *unaff_x20;
    uVar13 = *(uint *)(lVar31 + 0x18);
    if (uVar13 <= uVar17) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar31 + (long)(int)uVar17 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar31 = unaff_x19[0x20];
    }
    else {
      lVar28 = unaff_x19[0x8f];
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar13 <= uVar17 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar51 = *(float *)(lVar31 + (long)(int)(uVar17 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar31 = *unaff_x21;
    }
    if (lVar31 == 0) goto LAB_035574b8;
    fVar54 = (float)FUN_03776960(lVar31 + 0x50,0);
    fVar53 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar53 = 1.0;
    }
    fVar61 = 0.0;
    fVar44 = 0.0;
    if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar61 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar31 = unaff_x19[0xc9];
    if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_035574b8;
    fVar43 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar31 + 0x2c);
    fVar48 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar62 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar57 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar31 = unaff_x19[0x6d];
    if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar53 = ((fStack0000000000000158 * fVar51) / (float)iVar12) * fVar54 * fVar53;
    fVar48 = fVar53 * fVar43 * fVar45 * fVar48;
    *(float *)(lVar28 + 0x160) = fVar48;
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    fVar46 = fVar53 * fVar62 * fVar57 * fVar46;
    if (uVar13 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar28 = unaff_x19[0xe1];
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar28 = *(long *)(lVar28 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar28 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar28 + 0x10c);
    }
LAB_035514b0:
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar51 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar51 = fVar48;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar12 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar12 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar31 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar31 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar31,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar31 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar31 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar32 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar48 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar53 = (float)FUN_03776960(&stack0x00001720,0);
      fVar51 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar51 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar51 = (fVar48 / (float)iVar12) * fVar53 * fVar51;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar48 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar53 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar61 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar61 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar54 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar31 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar31 + 0x20),0);
        fVar43 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar31 + 0x20) == 0) goto LAB_035574b8;
        fVar62 = *(float *)(lVar31 + 0x2c);
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar57 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar59 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar46 = fVar51 * fVar57 * fVar59 * fVar46;
        fVar61 = (fVar48 / (float)iVar12) * fVar53 * fVar61;
        fVar48 = fVar61 * (fVar54 / fVar43) * fVar62 * fVar45;
        fVar61 = fVar61 / fVar48;
        fVar44 = fVar61 * fVar44;
        fVar51 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar61 = fVar61 * fVar51;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar53 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar31 + 0x20) == 0) goto LAB_035574b8;
        fVar61 = *(float *)(lVar31 + 0x2c);
        fVar54 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar54 = 1.0;
        }
        fVar43 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar46 = fVar51 * fVar45 * fVar62 * fVar46;
        fVar48 = (fVar48 / (float)iVar12) * fVar53 * fVar54 * fVar61 * fVar43;
        fVar61 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar31;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar31);
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar31 + 0x2c) = 1;
      *(float *)(lVar31 + 0x160) = fVar48;
      *(long *)(lVar31 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar32 = *(long *)(lVar31 + 0x38), lVar32 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
      goto LAB_035514b0;
    }
    lVar31 = *in_stack_00000170;
    fVar46 = 0.0;
    fVar51 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar51 = fVar48;
    }
    if (lVar31 == 0) goto LAB_035574b8;
    fVar44 = 0.0;
    fVar61 = 0.0;
  }
  lVar31 = *(long *)(lVar31 + 0x38);
  if (lVar31 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar31 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar31 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar31 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  uVar19 = unaff_x29[1];
  uVar18 = *unaff_x29;
  lVar31 = lVar31 + (long)(int)uVar13 * unaff_x24;
  *(undefined4 *)(lVar31 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar31 + 0x184) = uVar19;
  *(undefined8 *)(lVar31 + 0x17c) = uVar18;
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar31 = *(long *)(unaff_x19[0xc9] + 0x20), lVar31 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar31,0);
  puVar8 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x29[0x1df] = in_stack_00000c20;
  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(in_stack_000017dc,0);
    unaff_w27 = uVar13 & 1;
  }
  else {
    unaff_w27 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar44;
    fVar54 = 0.0;
    fVar53 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar17 = *unaff_x20;
    uVar13 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar17 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar17 + 1) goto LAB_035575f4;
      lVar31 = *(long *)(lVar31 + (long)(int)(uVar17 + 1) * (long)iVar14 + 0x30);
      if ((((lVar31 == 0) || (*unaff_x21 == 0)) ||
          (lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar13 | *(int *)(lVar31 + 0x28) << 0x10;
      uVar20 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar64 = 0;
      if ((uVar20 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar44;
        fVar54 = 0.0;
        fVar53 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar64 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar53 = *(float *)(in_stack_000016f8 + 0x14);
        fVar54 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar44);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar17 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar44;
      fVar54 = 0.0;
      fVar53 = 0.0;
    }
    if (0 < (int)uVar17) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar17 - 1) goto LAB_035575f4;
      lVar31 = *(long *)(lVar31 + (ulong)(uVar17 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar31 == 0) || (*unaff_x21 == 0)) ||
         ((lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar31 + 0x28) | uVar13 << 0x10;
      uVar20 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar20 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar49 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar53 = (float)FUN_03571cb4(fVar53,fVar54,_fStack0000000000000128 >> 0x20,uVar64,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar49,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar43 = *(float *)(unaff_x19 + 200);
    fVar44 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar43 = fVar43 - fVar51 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar43;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar43 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar44 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar44 != 0.0) {
    fVar43 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar45 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar44 * 0.5 - fVar51 * (fVar43 * 0.5 + fVar45));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar31 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar31,0,0);
    fVar43 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar31 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar31 == 0) goto LAB_035574b8;
      uVar20 = FUN_03699d3c(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar43 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar31 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar31 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_0369e060(lVar31,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar45 = *(float *)(*unaff_x21 + 0x1b0);
        fVar43 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar43 = fVar43 * fVar44 * fVar45 * 0.25;
        if (fVar44 < fStack000000000000015c + fVar43) {
          fStack000000000000015c = fVar44 - fVar43;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar31 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar31,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar31 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar31 == 0) goto LAB_035574b8;
      uVar20 = FUN_03699d3c(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar31 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar31 == 0) goto LAB_035574b8;
        uVar20 = FUN_03699d3c(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar31 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar31 == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_0369e060(lVar31,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar45 = *(float *)(*unaff_x21 + 0x1a8);
          fVar43 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar43 = fVar43 * fVar44 * fVar45 * 0.25;
          if (fVar44 < fStack000000000000015c + fVar43) {
            fStack000000000000015c = fVar44 - fVar43;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar43 = 0.0;
  }
FUN_03551b84:
  fVar44 = *(float *)(unaff_x19 + 200);
  fVar45 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar44 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar53 + ((fVar45 - fStack000000000000015c) - fVar43));
  fVar53 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar62 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar46 + fVar51 * (fVar54 + fStack000000000000015c + fVar53)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar53 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar53 = fVar62 - fVar51 * (fStack000000000000015c + fStack000000000000015c + fVar53);
  fVar54 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar45 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar43 + fVar43 +
                             fStack000000000000015c + fStack000000000000015c + fVar54);
  param_2 = extraout_x1;
  fStack0000000000000104 = fVar44;
  fVar54 = fVar45;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar59 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar54 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar58 = fVar59 * fVar51 * (fVar43 + fStack000000000000015c + fVar54);
    fVar54 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar57 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar62 = fVar62 + 0.0;
    fVar53 = fVar53 + 0.0;
    fVar59 = fVar59 * fVar51 * (((fVar54 - fVar57) - fStack000000000000015c) - fVar43);
    fVar57 = fVar44 + fVar58;
    fVar54 = fVar45 + fVar59;
    fVar47 = (fVar58 - fVar59) * 0.5;
    fVar44 = (fVar44 + fVar59) - fVar47;
    fVar45 = (fVar45 + fVar58) - fVar47;
    param_2 = extraout_x1_04;
    fStack0000000000000104 = fVar57 - fVar47;
    fVar54 = fVar54 - fVar47;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar51;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar47 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar53;
    fVar57 = fVar62;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar60 = (fVar45 + fVar44) * 0.5;
    fVar63 = (fVar53 + fVar62) * 0.5;
    fVar62 = fVar62 - fVar63;
    fStack0000000000000100 = 0.0;
    fVar57 = fVar62;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar60,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar60 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar59 = fVar53 - fVar63;
    fStack0000000000000114 = 0.0;
    fVar53 = fVar59;
    fVar44 = (float)FUN_036bdd2c(fVar44 - fVar60,_fStack0000000000000078,0);
    fVar44 = fVar60 + fVar44;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar53 = fVar63 + fVar53;
    fVar58 = 0.0;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar60,_fStack0000000000000078,0);
    fVar45 = fVar60 + fVar45;
    fVar62 = fVar63 + fVar62;
    fVar58 = fVar58 + 0.0;
    fVar47 = 0.0;
    fVar54 = (float)FUN_036bdd2c(fVar54 - fVar60,_fStack0000000000000078,0);
    fVar54 = fVar60 + fVar54;
    fVar47 = fVar47 + 0.0;
    param_2 = extraout_x1_00;
    fVar59 = fVar63 + fVar59;
    fVar57 = fVar63 + fVar57;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar31 = *(long *)(*in_stack_00000170 + 0x38);
  uVar20 = (ulong)(uint)fVar51;
  if (lVar31 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar31 + 0x11c) = fVar44;
  *(float *)(lVar31 + 0x120) = fVar53;
  *(float *)(lVar31 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar31 + 0x114) = fVar57;
  *(float *)(lVar31 + 0x110) = fStack0000000000000104;
  *(float *)(lVar31 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar31 + 0x128) = fVar45;
  *(float *)(lVar31 + 300) = fVar62;
  *(float *)(lVar31 + 0x130) = fVar58;
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar31 + 0x134) = fVar54;
  *(float *)(lVar31 + 0x138) = fVar59;
  *(float *)(lVar31 + 0x13c) = fVar47;
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  unaff_x26 = (long)(int)uVar13;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar28 = lVar31 + unaff_x26 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar62 = *(float *)(unaff_x19 + 0x9b);
  uVar50 = (ulong)(uint)fVar62;
  fVar54 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar45 - fVar44) / (fVar57 - fVar53);
  *(float *)(lVar28 + 0x14c) = (fVar46 - fVar62) + fVar54;
  fVar53 = fStack0000000000000128 * fVar51;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar53 = fVar53 / fStack0000000000000158;
    fVar61 = (fVar61 * fVar51) / fStack0000000000000158;
  }
  else {
    fVar61 = fVar61 * fVar51;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar13 == unaff_w25)) {
    fVar61 = fVar54 + fVar61;
    fVar53 = fVar54 + fVar53;
    fVar45 = fVar61;
    fVar44 = fVar53;
    if (fVar54 != 0.0) {
      fVar44 = (fVar53 - fVar54) / *(float *)((long)unaff_x19 + 0x404);
      fVar45 = (fVar61 - fVar54) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar44 <= fVar53) {
        fVar44 = fVar53;
      }
      if (fVar61 <= fVar45) {
        fVar45 = fVar61;
      }
    }
    lVar31 = lVar31 + unaff_x26 * unaff_x24;
    fVar54 = fVar44;
    if (fVar44 <= *(float *)(unaff_x19 + 0x99)) {
      fVar54 = *(float *)(unaff_x19 + 0x99);
    }
    fVar46 = fVar45;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar45) {
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar46;
    *(float *)(unaff_x19 + 0x99) = fVar54;
    *(float *)(lVar31 + 0x154) = fVar44;
    *(float *)(lVar31 + 0x158) = fVar45;
    *(float *)(lVar31 + 0x148) = fVar53 - fVar62;
    *(float *)(unaff_x19 + 0x98) = fVar53 - fVar62;
    *(float *)(lVar31 + 0x150) = fVar61 - fVar62;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar61 - fVar62;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar54;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar54 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar44 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar51 * fVar44) / fStack0000000000000158;
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar54 <= fStack0000000000000158) {
        fVar54 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar54;
      param_2 = extraout_x1_01;
    }
    if ((float)uVar50 == 0.0) {
      fVar54 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar53) {
        fVar54 = fVar53;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar54;
    }
  }
  else {
    fVar53 = *(float *)(unaff_x19 + 0x99);
    lVar31 = lVar31 + unaff_x26 * unaff_x24;
    *(float *)(lVar31 + 0x154) = fVar53;
    fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar53 = fVar53 - fVar62;
    *(float *)(lVar31 + 0x148) = fVar53;
    *(float *)(lVar31 + 0x158) = fVar54;
    *(float *)(unaff_x19 + 0x98) = fVar53;
    fVar54 = fVar54 - fVar62;
    *(float *)(lVar31 + 0x150) = fVar54;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar54;
  }
  lVar31 = *in_stack_00000170;
  if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)uVar13 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  uVar17 = *(uint *)(unaff_x19 + 0x4f);
  uVar66 = in_stack_000017dc;
  if (((in_stack_000017dc != 9) &&
      ((((unaff_w27 != 0 || (in_stack_000017dc == 3)) || (in_stack_000017dc == 0x200b)) ||
       (in_stack_000017dc == 0xad)))) &&
     (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x644) != 1)))) {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar51 = (float)uVar50;
      fVar48 = 0.0;
      if ((0.0 < fVar51) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar50 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar51)) + fVar48)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar31 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar52 = FUN_036cee6c(lVar31,0,0);
        if ((uVar52 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
          lVar31 = unaff_x19[0x5d];
          if (lVar31 == 0) goto LAB_035574b8;
          *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar31,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      }
    }
    if ((((0x22 < in_stack_000017dc - 0x2007) ||
         ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
        (1 < in_stack_000017dc - 10)) && (in_stack_000017dc != 0xa0)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar65 = FUN_026b97f8(in_stack_000017dc,0);
      param_2 = auVar65._8_8_;
      if ((auVar65._0_8_ & 1) == 0) goto LAB_03552bb8;
    }
    if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0x2060)) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
      *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
    }
LAB_03552bb8:
    if (in_stack_000017dc != 0xa0) goto LAB_035530c4;
    if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x50), lVar31 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    goto LAB_03552fcc;
  }
  *(undefined1 *)(lVar28 + 0x194) = 1;
  pfVar27 = _fStack00000000000000a0;
  pfVar30 = _fStack00000000000000a8;
  if (unaff_w23 != 0) {
    lVar31 = *(long *)(lVar31 + 0x50);
    if (lVar31 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    pfVar30 = (float *)(lVar31 + 0x60);
    pfVar27 = (float *)(lVar31 + 100);
  }
  fVar54 = *pfVar30;
  fVar44 = *pfVar27;
  fVar53 = *(float *)(unaff_x19 + 0x6c);
  fVar61 = *(float *)(unaff_x19 + 200);
  in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar54) - fVar44;
  bVar10 = true;
  if ((fVar53 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar53))) {
    bVar10 = fVar53 == -1.0;
  }
  if (!bVar10) {
    in_stack_000000f8._4_4_ = fVar53;
  }
  fVar53 = 0.0;
  if ((char)unaff_x19[0x1e] == '\0') {
    fVar53 = (float)FUN_03776cb4(&stack0x00001790,0);
    uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    param_2 = extraout_x1_02;
  }
  fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
  if (in_stack_000017dc != 0xad) {
    fVar48 = fVar51;
  }
  fVar46 = (float)uVar50;
  fVar51 = 0.0;
  if ((0.0 < fVar46) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar51 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar13 = *unaff_x20;
  fVar51 = (*(float *)(unaff_x19 + 0x97) - (fVar62 - fVar46)) + fVar51;
  if (fStack00000000000000c4 < fVar51) {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    uVar18 = DAT_00d37868;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar57 = *(float *)(unaff_x19 + 0x59);
      if (((fVar57 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar46)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar48 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - fVar51) / (float)(int)unaff_x19[0x95]) /
                 fStack0000000000000058;
        if (fVar48 <= fVar57) {
          fVar48 = fVar57;
        }
        goto LAB_03554b48;
      }
      fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar51 = *(float *)(unaff_x19 + 0x4a);
      uVar50 = (ulong)(uint)fVar51;
      if ((fVar51 < fVar46) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar48 = (fVar46 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar48 <= DAT_00d38b84) {
          fVar48 = DAT_00d38b84;
        }
        fVar53 = (fVar46 - fVar48) * 20.0 + 0.5;
        *(float *)((long)unaff_x19 + 0x23c) = fVar46;
        fVar48 = DAT_00d38e60;
        if (fVar53 != INFINITY) {
          fVar48 = (float)(int)fVar53 / 20.0;
        }
        if (fVar48 <= fVar51) {
          fVar48 = fVar51;
        }
        goto LAB_03554658;
      }
    }
    switch((int)unaff_x19[0x5c]) {
    case 1:
      lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar8;
      }
      lVar28 = *(long *)(lVar31 + 0xb8);
      lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_01a46ff8(lVar31);
      }
      piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar31 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar21 == 0) goto LAB_03554580;
      lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar8;
      }
      FUN_0209b778(*(long *)(lVar31 + 0xb8) + 0x11f0,&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
      iVar12 = FUN_0358c15c();
      goto LAB_035529e8;
    default:
      goto UnityEngine_AnimationClip__set_wrapMode;
    case 3:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
LAB_03552550:
      in_stack_000017a8 = FUN_0358c15c();
      break;
    case 5:
      if ((uVar13 == 0) || ((int)in_stack_000017a8 < 0)) {
        in_stack_000017a8 = 0xffffffff;
        *unaff_x20 = 0;
        in_stack_000017c8 = uVar18;
UnityEngine_AnimatorStateInfo__get_fullPathHash:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        uVar66 = in_stack_000017dc;
        goto LAB_03550bd0;
      }
      fVar48 = *(float *)(unaff_x19 + 0x99);
      unaff_x29 = (undefined8 *)&stack0x000008a0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      if (fVar48 - fVar62 <= fStack00000000000000c4) {
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
        uVar50 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        lVar31 = NEON_rev64(uVar50,4);
        unaff_x19[0x99] = lVar31;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_03550bd0;
      }
      break;
    case 6:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      lVar31 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar52 = FUN_036cee6c(lVar31,0,0);
      if ((uVar52 & 1) != 0) {
        plVar41 = (long *)unaff_x19[0x5d];
        uVar18 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar41 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
        lVar31 = unaff_x19[0x5d];
        if (lVar31 == 0) goto LAB_035574b8;
        *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar31,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar41 = (long *)unaff_x19[0x5d];
        if (plVar41 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
    }
    goto UnityEngine_AnimationClip__get_hasMotionCurves;
  }
UnityEngine_AnimationClip__set_wrapMode:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  fVar51 = ABS(fVar61) + fVar53 * (1.0 - fVar45) * fVar48;
  fVar48 = 1.0;
  if ((uVar17 & 0x18) != 0) {
    fVar48 = DAT_00d38acc;
  }
  fVar53 = fVar48 * in_stack_000000f8._4_4_;
  if (fVar51 <= fVar53) goto LAB_03552f54;
  uVar50 = (ulong)(uint)fVar43;
  if (((char)unaff_x19[0x5b] == '\0') || (uVar13 == *(uint *)(unaff_x19 + 0x93))) {
    if (((char)unaff_x19[0x47] == '\0') ||
       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
LAB_035524c0:
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar31 + 0xb8);
        lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = FUN_01a46ff8(lVar31);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar31 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *(long *)puVar8;
        }
        FUN_0209b778(*(long *)(lVar31 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar31 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar52 = FUN_036cee6c(lVar31,0,0);
        if ((uVar52 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
          lVar31 = unaff_x19[0x5d];
          if (lVar31 == 0) goto LAB_035574b8;
          *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar31,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_03552b00;
      }
      if (iVar12 != 3) goto LAB_03552f54;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      goto LAB_03552550;
    }
    fVar53 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if (fVar45 < fVar53) {
      fVar54 = fVar51 / (1.0 - fVar45);
      if (fVar45 <= 0.0) {
        fVar54 = fVar51;
      }
      fVar45 = fVar45 + (fVar51 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar54;
      goto LAB_035574e8;
    }
    fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
    fVar53 = *(float *)(unaff_x19 + 0x4a);
    if (fVar61 <= fVar53) goto LAB_035524c0;
    fVar48 = (fVar61 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar48 <= DAT_00d38b84) {
      fVar48 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar61;
    fVar61 = fVar61 - fVar48;
  }
  else {
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    in_stack_000017a8 = FUN_0358c15c();
    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x38), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fVar53 = *(float *)(unaff_x19 + 0x9b);
      fVar61 = 0.0;
      if ((0.0 < fVar53) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar61 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar61 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
               *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
               (fVar61 - *(float *)((long)unaff_x19 + 0x4cc)) +
               fStack0000000000000058 *
               (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
    }
    else {
      lVar31 = unaff_x19[0x6d];
      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
      if (lVar31 == 0) goto LAB_035574b8;
      fVar53 = *(float *)(unaff_x19 + 0x9b);
      fVar61 = *(float *)(unaff_x19 + 0x58) + fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar31 = *(long *)(lVar31 + 0x38);
    if (lVar31 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)((long)unaff_x19 + 0x494);
    if ((*(uint *)(lVar31 + 0x18) <= uVar55) ||
       (uVar42 = uVar55 - 1, *(uint *)(lVar31 + 0x18) <= uVar42)) goto LAB_035575f4;
    uVar50 = (ulong)(uint)(fVar61 + *(float *)(unaff_x19 + 0x97));
    fVar62 = (fVar61 + *(float *)(unaff_x19 + 0x97) + fVar53) -
             *(float *)(lVar31 + (long)(int)uVar55 * unaff_x24 + 0x158);
    if (((bStack0000000000000074 & 1) == 0 &&
         *(short *)(lVar31 + (long)(int)uVar42 * (long)iVar14 + 0x20) == 0xad) &&
       ((fVar62 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
      bStack0000000000000074 = 0;
      in_stack_000017c8 = CONCAT44(0x2d,uVar42);
      *unaff_x20 = uVar42;
      in_stack_000017a8 = in_stack_000017a8 - 1;
      goto LAB_03550bd0;
    }
    if (*(short *)(lVar31 + (long)(int)uVar55 * unaff_x24 + 0x20) == 0xad) {
      bStack0000000000000074 = 1;
      goto LAB_03550bd0;
    }
    if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) == 0) {
LAB_03552d44:
      lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      param_2 = extraout_x1_03;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar8;
        param_2 = extraout_x1_05;
      }
      iVar12 = *(int *)(*(long *)(lVar31 + 0xb8) + 0xe78);
      if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack0000000000000070 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if ((unaff_x19[0x6d] == 0) || (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
        goto LAB_035574b8;
        uVar55 = *unaff_x20 - 1;
        if (*(uint *)(lVar31 + 0x18) <= uVar55) goto LAB_035575f4;
        param_2 = extraout_x1_06;
        iStack0000000000000034 = iVar12;
        if (*(short *)(lVar31 + (long)(int)uVar55 * (long)iVar14 + 0x20) == 0xad) {
          bStack0000000000000074 = 0;
          in_stack_000017c8 = CONCAT44(0x2d,uVar55);
          *unaff_x20 = uVar55;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          goto LAB_03550bd0;
        }
      }
      if (fVar62 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
        uVar50 = uVar20;
        FUN_0358cbd4(fStack0000000000000058,uVar20,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
        bStack0000000000000070 = 1;
        bStack0000000000000074 = 0;
        in_stack_00000068._4_4_ = 1;
        goto LAB_03550bd0;
      }
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
      }
      fVar53 = fStack00000000000000c4;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar53 = *(float *)(unaff_x19 + 0x59);
        if ((fVar53 < *(float *)((long)unaff_x19 + 700)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar48 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar62) / (float)((int)unaff_x19[0x95] + 1)) /
                   fStack0000000000000058;
          if (fVar48 <= fVar53) {
            fVar48 = fVar53;
          }
LAB_03554b48:
          *(float *)((long)unaff_x19 + 700) = fVar48;
          return;
        }
        fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar53 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar45 < fVar53) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_03557558;
        fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar50 = (ulong)(uint)fVar61;
        fVar53 = *(float *)(unaff_x19 + 0x4a);
        if ((fVar53 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_03557594;
      }
      switch((int)unaff_x19[0x5c]) {
      case 0:
      case 2:
      case 4:
        goto switchD_03552ef4_caseD_0;
      case 1:
        lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar28 = *(long *)(lVar31 + 0xb8);
        lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = FUN_01a46ff8(lVar31);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar31 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        if (*piVar21 == 0) {
          bStack0000000000000074 = 0;
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
          goto LAB_03550bd0;
        }
        lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        FUN_0209b778(*(long *)(lVar31 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001008,&stack0x000008a0,0x378);
        iVar12 = FUN_0358c15c();
        bStack0000000000000074 = 0;
LAB_035529e8:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
        *(int *)((long)unaff_x19 + 0x494) = iVar15;
        in_stack_000017c8 = CONCAT44(0x2026,iVar15);
        in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
        in_stack_000017a8 = iVar12 - 1;
        goto LAB_03550bd0;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        bStack0000000000000074 = 0;
UnityEngine_AnimationClip__get_hasMotionCurves:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017c8 = CONCAT44(3,uVar13);
        goto LAB_03550bd0;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        uVar50 = uVar20;
        FUN_0358cbd4(fStack0000000000000058,uVar20,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_03552f38;
      case 6:
        lVar31 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar52 = FUN_036cee6c(lVar31,0,0);
        if ((uVar52 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
          lVar31 = unaff_x19[0x5d];
          if (lVar31 == 0) goto LAB_035574b8;
          *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar31,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        bStack0000000000000074 = 0;
LAB_03552b00:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
        goto LAB_03550bd0;
      default:
        goto switchD_03552ef4_default;
      }
    }
    fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar53 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if ((fVar45 < fVar53) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_03557558:
      fVar54 = fVar51;
      if (0.0 < fVar45) {
        fVar54 = fVar51 / (1.0 - fVar45);
      }
      fVar45 = fVar45 + (fVar51 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar54;
LAB_035574e8:
      if (fVar53 <= fVar45) {
        fVar45 = fVar53;
      }
      *(float *)((long)unaff_x19 + 0x2d4) = fVar45;
      return;
    }
    fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
    uVar50 = (ulong)(uint)fVar61;
    fVar53 = *(float *)(unaff_x19 + 0x4a);
    if ((fVar61 <= fVar53) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
    goto LAB_03552d44;
LAB_03557594:
    fVar48 = (fVar61 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar48 <= DAT_00d38b84) {
      fVar48 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar61;
    fVar61 = fVar61 - fVar48;
  }
  fVar51 = fVar61 * 20.0 + 0.5;
  fVar48 = DAT_00d38e60;
  if (fVar51 != INFINITY) {
    fVar48 = (float)(int)fVar51 / 20.0;
  }
  if (fVar48 <= fVar53) {
    fVar48 = fVar53;
  }
LAB_03554658:
  *(float *)((long)unaff_x19 + 0x1e4) = fVar48;
  return;
}


