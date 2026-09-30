/*
FUNCTION_NAME: UnityEngine.Animator$$GetIntegerID
ENTRY_POINT: 03553454
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


void UnityEngine_Animator__GetIntegerID(void)

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
  int *piVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  uint in_w8;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  float *pfVar27;
  long in_x9;
  long lVar28;
  code *pcVar29;
  float *pfVar30;
  long in_x10;
  long in_x11;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar39;
  uint unaff_w22;
  byte unaff_w23;
  ulong unaff_x24;
  long *plVar40;
  long unaff_x26;
  uint unaff_w27;
  long *unaff_x28;
  uint uVar41;
  undefined8 *unaff_x29;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  ulong uVar48;
  float fVar49;
  ulong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  ulong unaff_d13;
  undefined4 uVar64;
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
  uint uVar65;
  uint in_stack_000017dc;
  
code_r0x03553454:
  if (*(int *)(in_x11 + 0x24) == 1) goto LAB_0355346c;
LAB_03553488:
  fVar57 = (float)unaff_d13;
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar52 = *(float *)(unaff_x19 + 200);
    fVar49 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar46 = fVar57 * fVar46 * fVar49;
    fVar49 = fVar46 * (float)(int)(fVar52 / fVar46);
    uVar48 = (ulong)(uint)fVar49;
    if (fVar49 <= fVar52) {
      fVar49 = fVar52 + fVar46;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar49;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar52 = 1.0;
      }
      else {
        fVar52 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar49 = *(float *)(unaff_x19 + 200);
      fVar53 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] != 0) {
        fVar46 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
        fVar49 = fVar49 + fVar46 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fVar57 * (fStack000000000000012c + fVar52 * fVar53) +
                                   fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
        *(float *)(unaff_x19 + 200) = fVar49;
        goto joined_r0x035535c0;
      }
      goto LAB_035574b8;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar57 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
    uVar48 = (ulong)(uint)fVar49;
    fVar49 = *(float *)(unaff_x19 + 200) - fVar49;
    *(float *)(unaff_x19 + 200) = fVar49;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar48 = (ulong)(uint)fVar46;
      fVar49 = fVar49 - fVar46;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = *(float *)(unaff_x19 + 200);
    fVar49 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                      fStack00000000000000d4 * (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 200) = fVar49;
joined_r0x035535c0:
    if ((in_stack_000017dc == 0x200b) || (uVar48 = (ulong)(uint)fVar46, unaff_w27 != 0)) {
      fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar48 = (ulong)(uint)fVar46;
      fVar49 = fVar49 + fVar46;
      goto LAB_03553678;
    }
  }
  lVar24 = *unaff_x28;
  if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar13 = *unaff_x20;
  uVar17 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar17 <= uVar13) goto LAB_035575f4;
  *(float *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar49;
  iVar14 = (int)unaff_x24;
  uVar55 = in_stack_000017dc;
  uVar65 = in_stack_000017dc;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) || ((float)uVar13 == in_stack_00000088._4_4_)
       ) goto LAB_0355371c;
  }
  else {
    if (1 < in_stack_000017dc - 0x2028) {
      if (in_stack_000017dc != 0xd) goto LAB_03553700;
      uVar48 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar13 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar46 = *(float *)(unaff_x19 + 0x99);
      fVar49 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar46 = fVar46 - fVar49;
      if (((fStack000000000000005c < ABS(fVar46)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar46);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar46;
        *(float *)(unaff_x19 + 0x9b) = fVar46 + *(float *)(unaff_x19 + 0x9b);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar28 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar24 + 0xb8) + 0x818,0);
          lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
          *(float *)(lVar24 + 0x7bc) = fVar46 + *(float *)(lVar24 + 0x7bc);
          *(float *)(lVar24 + 0x800) = fVar46 + *(float *)(lVar24 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar24 + 0x788),0x378);
          FUN_0209b210(lVar24 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar52 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc) - fVar52;
    fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar49 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar46 = fVar49;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
    fVar53 = *(float *)(unaff_x19 + 0x99);
    if (*(char *)((long)unaff_x29 + 0xf34) == '\0') {
      in_stack_000017d8 = fVar46;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      *(undefined1 *)((long)unaff_x29 + 0xf34) = 1;
    }
    lVar24 = *unaff_x28;
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    uVar13 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar31 = unaff_x19[0x93];
    lVar34 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(int *)(lVar34 + 0x34) = (int)lVar31;
    uVar17 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar31 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar17 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar17;
    *(uint *)(lVar34 + 0x38) = uVar17;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar34 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar17 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar34 + 0x40) = iVar12;
    *(int *)(lVar34 + 0x24) = (*(int *)(lVar34 + 0x3c) - *(int *)(lVar34 + 0x34)) + 1;
    *(undefined4 *)(lVar34 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
    uVar64 = *(undefined4 *)(lVar24 + (long)(int)uVar17 * (long)iVar14 + 0x11c);
    lVar28 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar49;
    *(undefined4 *)(lVar28 + 0x6c) = uVar64;
    lVar24 = *unaff_x28;
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar53 = fVar53 - fVar52;
    uVar48 = (ulong)(uint)fVar53;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) =
         *(undefined4 *)(lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar28 + 0x78) = fVar53;
    lVar24 = *unaff_x28;
    if ((lVar24 == 0) || (lVar31 = *(long *)(lVar24 + 0x50), lVar31 == 0)) goto LAB_035574b8;
    lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar28 = lVar31 + lVar34 * 0x5c;
    *(float *)(lVar28 + 0x44) = *(float *)(lVar28 + 0x74) - fVar57 * fStack000000000000015c;
    *(float *)(lVar28 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar28 + 0x24) == 1) {
      *(int *)(lVar31 + lVar34 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    lVar35 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar17 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar17 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar28 + lVar35 * unaff_x24 + 0x194) == '\0') &&
       (lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar17 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar31 = lVar31 + lVar34 * 0x5c;
    fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar57 = -fVar46;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar57 = fVar46;
    }
    *(float *)(lVar31 + 0x58) = *(float *)(lVar28 + lVar35 * unaff_x24 + 0x144) + fVar57;
    *(float *)(lVar31 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar31 + 0x54) = fVar49;
    *(float *)(lVar31 + 0x48) = in_stack_00000060 + (fVar53 - fVar49);
    *(float *)(lVar31 + 0x4c) = fVar53;
    if ((int)in_stack_000017dc < 0x2d) {
      if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar24 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar12 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar12;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar24 != 0) && (*(long *)(lVar24 + 0x50) != 0)) {
          if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar12) {
            FUN_0358ca18();
            lVar24 = unaff_x19[0x6d];
            if (lVar24 == 0) goto LAB_035574b8;
          }
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 != 0) {
            if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
              fVar57 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
              if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                if ((in_stack_000017dc == 0x2029) || (fVar46 = 0.0, in_stack_000017dc == 10)) {
                  fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                }
                uVar22 = 0;
                fVar46 = fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                         fStack0000000000000058 *
                         (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                         fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar46) +
                         *(float *)(unaff_x19 + 0x9b);
              }
              else {
                if ((in_stack_000017dc == 0x2029) || (fVar46 = 0.0, in_stack_000017dc == 10)) {
                  fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                }
                uVar22 = 1;
                fVar46 = *(float *)(unaff_x19 + 0x9b) +
                         *(float *)(unaff_x19 + 0x58) +
                         fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar46);
              }
              *(float *)(unaff_x19 + 0x9b) = fVar46;
              *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
              puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar24 = *(long *)puVar8;
              }
              uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 0x9a) = fVar57;
              uVar48 = NEON_rev64(uVar18,4);
              unaff_x19[0x99] = uVar48;
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
    uVar50 = *(ulong *)(lVar28 + 0x11c);
    uVar48 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar48 ^ (uVar48 ^ uVar50) &
                  ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar50 >> 0x20)),
                            -(uint)((float)uVar48 < (float)uVar50));
    uVar50 = *(ulong *)(in_stack_00000080 + 0x238);
    uVar48 = *(ulong *)(lVar28 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar50 ^ (uVar50 ^ uVar48) &
                  ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar50 >> 0x20)),
                            -(uint)((float)uVar48 < (float)uVar50));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar55 || ((1 << (ulong)(uVar55 & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(lVar24 + 0x58);
    if (lVar28 == 0) goto LAB_035574b8;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar28 + 0x18) < iVar12) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar24 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar24 = *unaff_x28;
      if (lVar24 == 0) goto LAB_035574b8;
    }
    lVar28 = *(long *)(lVar24 + 0x58);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar17 = *(uint *)(unaff_x19 + 0x96);
    lVar31 = (long)(int)uVar17;
    uVar13 = *(uint *)(lVar28 + 0x18);
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    if (uVar13 <= uVar17) goto LAB_035575f4;
    lVar34 = lVar28 + lVar31 * 0x14;
    fVar46 = *(float *)(lVar34 + 0x30);
    uVar48 = (ulong)(uint)fVar46;
    *(undefined4 *)(lVar34 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar57 = fVar46;
    }
    *(float *)(lVar34 + 0x30) = fVar57;
    uVar55 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar55 == 0 && uVar17 == 0) {
      *(uint *)(lVar28 + (ulong)uVar17 * 0x14 + 0x20) = uVar55;
    }
    else {
      uVar41 = uVar55 - 1;
      if (0 < (int)uVar55) {
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_035575f4;
        if (uVar17 != *(uint *)(lVar24 + (ulong)uVar41 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar17 - 1 < uVar13) {
            *(uint *)(lVar28 + 0x20 + (long)(int)(uVar17 - 1) * 0x14 + 4) = uVar41;
            *(uint *)(lVar28 + 0x20 + lVar31 * 0x14) = uVar55;
            goto LAB_03553d10;
          }
          goto LAB_035575f4;
        }
      }
      if ((float)uVar55 == in_stack_00000088._4_4_) {
        *(float *)(lVar28 + lVar31 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((unaff_w27 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
      if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
           (0x1d < in_stack_000017dc - 0xa961)) || (uVar50 = FUN_03597a54(0), (uVar50 & 1) != 0)) &&
         ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
           (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
      goto LAB_03553f78;
      lVar24 = FUN_035978e8(0);
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_035574b8;
      uVar13 = FUN_0219c130(*(long *)(lVar24 + 0x10),&stack0x000008a0,
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
        if ((uint)unaff_x26 != unaff_w22 || ((bStack0000000000000070 ^ 0xff) & 1) != 0)
        goto LAB_035542ac;
        if (unaff_w27 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
        goto LAB_0355422c;
      }
      lVar24 = FUN_035978e8(0);
      if (((lVar24 == 0) || (*unaff_x28 == 0)) ||
         (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
      if (*(long *)(lVar24 + 0x18) == 0) goto LAB_035574b8;
      in_stack_000008a0 =
           (uint)*(ushort *)(lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20);
      uVar50 = FUN_0219c130(*(long *)(lVar24 + 0x18),&stack0x000008a0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((uVar13 & 1) != 0) goto LAB_035541dc;
      if ((uVar50 & 1) == 0) goto LAB_03554270;
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
  fVar57 = (float)unaff_d13;
  in_stack_000017a8 = in_stack_000017a8 + 1;
  lVar24 = unaff_x19[0x8f];
  if (lVar24 != 0) {
    if ((int)in_stack_000017a8 < (int)*(uint *)(lVar24 + 0x18)) {
      if (*(uint *)(lVar24 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      in_stack_000017dc = *(uint *)(lVar24 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
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
      if ((*unaff_x28 != 0) && (lVar24 = *(long *)(*unaff_x28 + 0x38), lVar24 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_035509d4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_0355459c:
    fVar57 = (float)uVar48;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar57 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar46 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar57 < fVar46) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar49 = (*(float *)((long)unaff_x19 + 0x23c) - fVar57) * 0.5;
        if (fVar49 <= DAT_00d38b84) {
          fVar49 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar57;
        fVar49 = (fVar57 + fVar49) * 20.0 + 0.5;
        fVar57 = DAT_00d38e60;
        if (fVar49 != INFINITY) {
          fVar57 = (float)(int)fVar49 / 20.0;
        }
        if (fVar46 <= fVar57) {
          fVar57 = fVar46;
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
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar65 == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar24 = *(long *)puVar9;
    }
    plVar40 = (long *)OVRPlugin_Media_TypeInfo;
    lVar24 = **(long **)(lVar24 + 0xb8);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar14 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x60), lVar24 == 0))
    goto LAB_035574b8;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
    FUN_035968e8(lVar24 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar12 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar24 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)uStack00000000000000e8;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar12 < 0x401) {
      if (iVar12 == 0x100) {
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) < 2) goto LAB_035575f4;
        uVar18 = *(undefined8 *)(lVar24 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x58), lVar28 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar57 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar57 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
        fVar57 = (0.0 - fVar57) - fStack0000000000000020;
      }
      else if (iVar12 == 0x200) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar24 + 0x24) +
                          (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x58), lVar24 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar57 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) + *(float *)(lVar24 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar12 != 0x400) goto LAB_03554c4c;
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
        uVar18 = *(undefined8 *)(lVar24 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x58), lVar28 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
        fVar57 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar57);
    }
    else if (iVar12 == 0x800) {
      if (lVar24 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
      fVar57 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar57;
    }
    else {
      if (iVar12 == 0x1000) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          fVar57 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_03554c3c;
        }
        goto LAB_035575f4;
      }
      if (iVar12 == 0x2000) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
        fVar57 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar57);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    uVar18 = FUN_03912334(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar8);
    }
    uVar48 = FUN_036d35a8(uVar18,0,0);
    lVar24 = FUN_0357f060();
    if (lVar24 == 0) goto LAB_035574b8;
    FUN_036df824(lVar24,0);
    *(float *)(unaff_x19 + 0xe2) = fVar57;
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_039117fc(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03911954(unaff_x19[0xe5],0);
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
    lVar24 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar24 = *(long *)puVar8;
    }
    puVar25 = *(undefined4 **)(lVar24 + 0xb8);
    uVar50 = (ulong)(uint)puVar25[1];
    uVar54 = (ulong)(uint)puVar25[2];
    uVar56 = (ulong)(uint)puVar25[3];
    FUN_035683a4(*puVar25,uVar50,uVar54,uVar56,&stack0x000017b0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar24 = *unaff_x28;
    if (lVar24 == 0) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    if ((int)uVar13 < 1) {
      fStack00000000000000d4 = 0.0;
      iVar14 = 0;
      goto LAB_03556f00;
    }
    lVar24 = *(long *)(lVar24 + 0x38);
    fVar57 = ABS(fVar57);
    fVar49 = 1.0;
    if ((uVar48 & 1) == 0) {
      fVar49 = fVar57;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    bVar11 = false;
    bVar7 = false;
    _fStack0000000000000128 = 0;
    bVar10 = false;
    fStack00000000000000d4 = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000158 = 0.0;
    in_stack_00000068._4_4_ = 0;
    lVar28 = 0x2e0;
    fVar53 = 0.0;
    fVar52 = 0.0;
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
  goto LAB_035574b8;
switchD_03552ef4_default:
  bStack0000000000000074 = 0;
LAB_03552f54:
  if (in_stack_000017dc == 0xad) {
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
  }
  else if (in_stack_000017dc == 9) {
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
    *(undefined1 *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
    *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
    lVar28 = *(long *)(lVar24 + 0x50);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
LAB_03552fcc:
    *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x644) == 1) {
      (**(code **)(*unaff_x19 + 0x898))(fVar61,fVar42);
    }
    else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
      (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
    }
    uVar13 = *unaff_x20;
    if ((in_stack_00000068._4_4_ & 1) != 0) {
      *(uint *)(in_stack_00000080 + 0x1f0) = uVar13;
    }
    *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
    *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
    if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    in_stack_00000068._4_4_ = 0;
    *(float *)(lVar24 + 0x60) = fVar52;
    *(float *)(lVar24 + 100) = fVar53;
  }
LAB_035530c4:
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar57 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar52 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar24 = unaff_x19[0xca];
    fVar49 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar49 = 1.0;
    }
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
    fVar61 = *(float *)((long)unaff_x19 + 0x404);
    fVar43 = *(float *)(lVar24 + 0x2c);
    fVar53 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    fVar42 = *_fStack00000000000000a8;
    fVar53 = fVar61 * (fVar57 / (float)iVar12) * fVar52 * fVar49 * fVar43 * fVar53;
    fVar57 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar49 = *(float *)(lVar24 + (long)(int)uVar13 * (long)iVar14 + 0x60);
      iVar14 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar61 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar24 = unaff_x19[0xca];
      fVar52 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar52 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
      fVar43 = *(float *)((long)unaff_x19 + 0x404);
      fVar62 = *(float *)(lVar24 + 0x2c);
      fVar53 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar42 = *(float *)(lVar24 + 0x60);
      fVar57 = *(float *)(lVar24 + 100);
      fVar53 = fVar43 * (fVar49 / (float)iVar14) * fVar61 * fVar52 * fVar62 * fVar53;
    }
    fVar61 = *(float *)(unaff_x19 + 0x9b);
    fVar49 = 0.0;
    fVar52 = 0.0;
    if ((0.0 < fVar61) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar62 = *(float *)(unaff_x19 + 0x97);
    fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar43 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar24,0);
      fVar49 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar51 = *(float *)(unaff_x19 + 0x6c);
    fVar57 = (fStack000000000000009c - fVar42) - fVar57;
    bVar10 = true;
    if ((fVar51 <= fVar57) && (bVar10 = false, !NAN(fVar51))) {
      bVar10 = fVar51 == -1.0;
    }
    if (!bVar10) {
      fVar57 = fVar51;
    }
    fVar42 = 1.0;
    if ((uVar17 & 0x18) != 0) {
      fVar42 = DAT_00d38acc;
    }
    if (((fVar62 - (fVar44 - fVar61)) + fVar52 < fStack00000000000000c4) &&
       (ABS(fVar43) + fVar53 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar42 * fVar57)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar24 + 0x788),0x378);
      FUN_0209b210(lVar24 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar24 = *in_stack_00000170;
  if (lVar24 == 0) goto LAB_035574b8;
  lVar28 = *(long *)(lVar24 + 0x38);
  unaff_d13 = (ulong)(uint)fVar46;
  if (lVar28 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  in_w8 = *(uint *)(unaff_x19 + 0x95);
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar28 + 100) = in_w8;
  in_x9 = (long)(int)in_w8;
  *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
  if ((unaff_w23 != 0) ||
     ((in_stack_000017dc < 0xe && ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) != 0))))
  goto LAB_03553438;
  in_x10 = *(long *)(lVar24 + 0x50);
  unaff_x28 = in_stack_00000170;
  if (in_x10 == 0) goto LAB_035574b8;
LAB_0355346c:
  if (*(uint *)(in_x10 + 0x18) <= in_w8) goto LAB_035575f4;
  *(int *)(in_x10 + in_x9 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  goto LAB_03553488;
LAB_03553438:
  in_x10 = *(long *)(lVar24 + 0x50);
  if (in_x10 == 0) goto LAB_035574b8;
  if (*(uint *)(in_x10 + 0x18) <= in_w8) goto LAB_035575f4;
  in_x11 = in_x10 + in_x9 * 0x5c;
  unaff_x28 = in_stack_00000170;
  goto code_r0x03553454;
LAB_03554e78:
  uVar13 = uVar17 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar31 = *(long *)(*unaff_x28 + 0x50), lVar31 == 0)) goto LAB_035574b8;
  lVar35 = (long)(int)uVar13;
  lVar34 = lVar24 + lVar35 * 0x178;
  uVar65 = *(uint *)(lVar34 + 100);
  if (*(uint *)(lVar31 + 0x18) <= uVar65) goto LAB_035575f4;
  lVar38 = (long)(int)uVar65;
  lVar31 = lVar31 + lVar38 * 0x5c;
  lVar32 = *(long *)(lVar34 + 0x38);
  uVar3 = *(ushort *)(lVar34 + 0x20);
  uVar5 = *(uint *)(lVar31 + 0x3c);
  uVar41 = *(uint *)(lVar31 + 0x68);
  iVar2 = *(int *)(lVar31 + 0x20);
  iVar15 = *(int *)(lVar31 + 0x28);
  iVar16 = *(int *)(lVar31 + 0x2c);
  uVar6 = *(uint *)(lVar31 + 0x40);
  lVar34 = (long)(int)uVar6;
  fVar43 = *(float *)(lVar31 + 0x4c);
  fVar44 = *(float *)(lVar31 + 0x54);
  fVar61 = *(float *)(lVar31 + 0x58);
  fVar45 = *(float *)(lVar31 + 0x5c);
  fVar51 = *(float *)(lVar31 + 0x60);
  fVar59 = *(float *)(lVar31 + 0x6c);
  fVar58 = *(float *)(lVar31 + 0x70);
  fVar42 = *(float *)(lVar31 + 0x74);
  fVar62 = *(float *)(lVar31 + 0x78);
  uVar37 = (uint)uVar3;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar51 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar61;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar51 + fVar45 * 0.5) - fVar61 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar45 + fVar51) - fVar61;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar45 + fVar51;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar41 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b8cc4(uVar4,0);
      if ((uVar48 & 1) == 0) {
        bVar1 = (int)uVar65 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar61 <= fVar45) && (!bVar1 && uVar41 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar45 + fVar51;
        }
        goto LAB_03555088;
      }
      if (((uVar17 == 1) || (uVar65 != uVar55)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar45 + fVar51;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar37,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1e];
        fVar51 = -fVar61;
        if (cVar23 != '\0') {
          fVar51 = fVar61;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar24 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar61 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar61 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar37 == 9) {
LAB_03556e74:
          fVar61 = 1.0 - fVar61;
        }
        else {
          if (uVar37 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar48 = FUN_026b97f8(uVar37,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar48 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar61 = ((fVar45 + fVar51) * fVar61) / (float)iVar16;
        if (cVar23 == '\0') {
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
  else if (uVar41 == 0x20) {
    fVar61 = fVar59 + fVar42;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar41 <= uVar13) goto LAB_035575f4;
  lVar31 = lVar24 + lVar35 * 0x178;
  fVar45 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar61 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar51 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar31 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar24 + lVar35 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar65,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar24 + lVar35 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar62 = *(float *)(lVar24 + lVar35 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar24 + lVar35 * 0x178;
      fVar42 = (in_stack_000000f8._4_4_ + fVar62) - *(float *)(in_stack_00000080 + 0x230);
      fVar62 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar26 = lVar24 + lVar35 * 0x178;
    fVar42 = fVar42 - fVar59;
    *(float *)(lVar26 + 0x84) = fVar53 + (fVar62 - fVar59) / fVar42;
    *(float *)(lVar26 + 0xac) = fVar53 + (*(float *)(lVar26 + 0x98) - fVar59) / fVar42;
    *(float *)(lVar26 + 0xd4) = fVar53 + (*(float *)(lVar26 + 0xc0) - fVar59) / fVar42;
    fVar53 = fVar53 + (*(float *)(lVar26 + 0xe8) - fVar59) / fVar42;
    break;
  case 2:
    lVar26 = lVar24 + lVar35 * 0x178;
    fVar62 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar42 = (in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar26 + 0x84) = fVar53 + fVar42 / fVar62;
    *(float *)(lVar26 + 0xac) =
         fVar53 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar53 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar53 = fVar53 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar26 = lVar24 + lVar35 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar24 + lVar35 * 0x178;
      fVar62 = fVar62 - fVar58;
      fVar42 = fVar53 + (*(float *)(lVar26 + 0x74) - fVar58) / fVar62;
      fVar62 = fVar53 + (*(float *)(lVar26 + 0x9c) - fVar58) / fVar62;
      *(float *)(lVar26 + 0x88) = fVar42;
      *(float *)(lVar26 + 0xb0) = fVar62;
      *(float *)(lVar26 + 0xd8) = fVar42;
      *(float *)(lVar26 + 0x100) = fVar62;
      break;
    case 2:
      lVar26 = lVar24 + lVar35 * 0x178;
      fVar42 = fVar53 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar42;
      fVar62 = *(float *)(unaff_x19 + 0x9c);
      fVar59 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar42;
      fVar42 = fVar53 + (*(float *)(lVar26 + 0x9c) - fVar62) / (fVar59 - fVar62);
      *(float *)(lVar26 + 0xb0) = fVar42;
      *(float *)(lVar26 + 0x100) = fVar42;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar41 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar24 + lVar35 * 0x178;
    fVar42 = *(float *)(lVar26 + 0x15c);
    fVar62 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar42) * 0.5;
    fVar59 = fVar53 + *(float *)(lVar26 + 0x88) * fVar42 + fVar62;
    fVar53 = fVar53 + fVar62 + *(float *)(lVar26 + 0xb0) * fVar42;
    *(float *)(lVar26 + 0x84) = fVar59;
    *(float *)(lVar26 + 0xac) = fVar59;
    *(float *)(lVar26 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar24 + lVar35 * 0x178 + 0xfc) = fVar53;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar41 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar24 + lVar35 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar41) {
      lVar26 = lVar24 + lVar35 * 0x178;
      fVar43 = fVar43 - fVar44;
      fVar53 = (*(float *)(lVar26 + 0x74) - fVar44) / fVar43;
      fVar43 = (*(float *)(lVar26 + 0x9c) - fVar44) / fVar43;
      *(float *)(lVar26 + 0x88) = fVar53;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar41 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar24 + lVar35 * 0x178;
    fVar53 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar53;
    fVar43 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar26 + 0xb0) = fVar43;
    *(float *)(lVar26 + 0xd8) = fVar43;
    *(float *)(lVar26 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar41 <= uVar13) goto LAB_035575f4;
    lVar26 = lVar24 + lVar35 * 0x178;
    fVar43 = *(float *)(lVar26 + 0x15c);
    fVar42 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar43) * 0.5;
    fVar53 = *(float *)(lVar26 + 0x84) / fVar43 + fVar42;
    fVar42 = fVar42 + *(float *)(lVar26 + 0xd4) / fVar43;
    *(float *)(lVar26 + 0x88) = fVar53;
    *(float *)(lVar26 + 0xb0) = fVar42;
    *(float *)(lVar26 + 0x100) = fVar53;
    *(float *)(lVar26 + 0xd8) = fVar42;
  }
  if (uVar41 <= uVar13) goto LAB_035575f4;
  lVar26 = lVar24 + lVar35 * 0x178;
  fVar53 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar35 * 0x178 + 400) & 1) != 0)) {
    fVar53 = -fVar53;
  }
  fVar42 = fVar57;
  if (((iVar12 == 2) || (fVar42 = fVar49, iVar12 == 1)) || (fVar42 = fVar57 / fVar46, iVar12 == 0))
  {
    fVar53 = fVar42 * fVar53;
  }
  lVar26 = lVar24 + lVar35 * 0x178;
  fVar43 = *(float *)(lVar26 + 0x88);
  fVar62 = *(float *)(lVar26 + 0x84);
  fVar42 = -2.1474836e+09;
  if (fVar62 != INFINITY) {
    fVar42 = (float)(int)fVar62;
  }
  fVar59 = *(float *)(lVar26 + 0xd4);
  fVar58 = *(float *)(lVar26 + 0xd8);
  fVar44 = -2.1474836e+09;
  if (fVar43 != INFINITY) {
    fVar44 = (float)(int)fVar43;
  }
  uVar47 = FUN_03591d3c(fVar62 - fVar42,fVar43 - fVar44);
  *(undefined4 *)(lVar26 + 0x84) = uVar47;
  if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar58 = fVar58 - fVar44;
  *(float *)(lVar26 + 0x88) = fVar53;
  uVar47 = FUN_03591d3c(fVar62 - fVar42,fVar58);
  *(undefined4 *)(lVar24 + lVar35 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar59 = fVar59 - fVar42;
  *(float *)(lVar24 + lVar35 * 0x178 + 0xb0) = fVar53;
  fVar42 = (float)FUN_03591d3c(fVar59,fVar58);
  *(float *)(lVar26 + 0xd4) = fVar42;
  if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
  *(float *)(lVar26 + 0xd8) = fVar53;
  uVar47 = FUN_03591d3c(fVar59,fVar43 - fVar44);
  *(undefined4 *)(lVar24 + lVar35 * 0x178 + 0xfc) = uVar47;
  uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar41 <= uVar13) goto LAB_035575f4;
  *(float *)(lVar24 + lVar35 * 0x178 + 0x100) = fVar53;
LAB_0355574c:
  if (((int)uVar13 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar65 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar41 <= uVar13) goto LAB_035575f4;
      lVar31 = lVar24 + lVar35 * 0x178;
      *(ulong *)(lVar31 + 0x70) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0x70) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar31 + 0x70));
      *(float *)(lVar31 + 0x78) = fVar51 + *(float *)(lVar31 + 0x78);
      *(ulong *)(lVar31 + 0x98) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0x98) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar31 + 0x98));
      *(float *)(lVar31 + 0xa0) = fVar51 + *(float *)(lVar31 + 0xa0);
      *(ulong *)(lVar31 + 0xc0) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0xc0) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar31 + 0xc0));
      *(float *)(lVar31 + 200) = fVar51 + *(float *)(lVar31 + 200);
      *(ulong *)(lVar31 + 0xe8) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0xe8) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar31 + 0xe8));
      *(float *)(lVar31 + 0xf0) = fVar51 + *(float *)(lVar31 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar65 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar13 < uVar41) {
        if (*(uint *)(lVar24 + lVar35 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar31 = lVar24 + lVar35 * 0x178;
          *(ulong *)(lVar31 + 0x70) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0x70) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar31 + 0x70));
          *(float *)(lVar31 + 0x78) = fVar51 + *(float *)(lVar31 + 0x78);
          *(ulong *)(lVar31 + 0x98) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0x98) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar31 + 0x98));
          *(float *)(lVar31 + 0xa0) = fVar51 + *(float *)(lVar31 + 0xa0);
          *(ulong *)(lVar31 + 0xc0) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0xc0) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar31 + 0xc0));
          *(float *)(lVar31 + 200) = fVar51 + *(float *)(lVar31 + 200);
          *(ulong *)(lVar31 + 0xe8) =
               CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0xe8) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar31 + 0xe8));
          *(float *)(lVar31 + 0xf0) = fVar51 + *(float *)(lVar31 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar41 <= uVar13) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar41 = *(uint *)(lVar24 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar26 = lVar24 + lVar35 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar47;
  if (uVar41 <= uVar13) goto LAB_035575f4;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar26 = lVar24 + lVar35 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar47;
  *(undefined1 *)(lVar31 + 0x194) = 0;
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
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar31 = lVar31 + lVar35 * 0x178;
  uVar18 = *(undefined8 *)(lVar31 + 0x11c);
  *(undefined8 *)(lVar31 + 0x11c) =
       CONCAT44(fVar61 + (float)((ulong)uVar18 >> 0x20),fVar45 + (float)uVar18);
  *(float *)(lVar31 + 0x124) = fVar51 + *(float *)(lVar31 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar31 = lVar31 + lVar35 * 0x178;
  *(ulong *)(lVar31 + 0x110) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0x110) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar31 + 0x110));
  *(float *)(lVar31 + 0x118) = fVar51 + *(float *)(lVar31 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar31 = lVar31 + lVar35 * 0x178;
  *(ulong *)(lVar31 + 0x128) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar31 + 0x128) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar31 + 0x128));
  *(float *)(lVar31 + 0x130) = fVar51 + *(float *)(lVar31 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar31 = lVar31 + lVar35 * 0x178;
  *(float *)(lVar31 + 0x134) = fVar45 + *(float *)(lVar31 + 0x134);
  *(ulong *)(lVar31 + 0x138) =
       CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar31 + 0x138) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar31 + 0x138));
  lVar31 = *in_stack_00000170;
  if ((lVar31 == 0) || (lVar26 = *(long *)(lVar31 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar41 = *(uint *)(lVar26 + 0x18);
  if (uVar41 <= uVar13) goto LAB_035575f4;
  lVar33 = lVar26 + lVar35 * 0x178;
  uVar50 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar33 + 0x140) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar33 + 0x140));
  fVar42 = fVar61 + *(float *)(lVar33 + 0x150);
  uVar54 = (ulong)(uint)fVar42;
  uVar56 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar33 + 0x148) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar33 + 0x148));
  *(float *)(lVar33 + 0x150) = fVar42;
  *(ulong *)(lVar33 + 0x140) = uVar50;
  *(ulong *)(lVar33 + 0x148) = uVar56;
  if (uVar65 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar13 == uVar55) goto LAB_03555b44;
  }
  else {
    lVar31 = *(long *)(lVar31 + 0x50);
    if (lVar31 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar33 = (long)(int)uVar55;
    lVar36 = lVar31 + lVar33 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar36 + 0x58);
    fVar42 = fVar61 + *(float *)(lVar36 + 0x54);
    uVar50 = (ulong)(uint)fVar42;
    fVar43 = fVar45 + *(float *)(lVar36 + 0x58);
    uVar54 = (ulong)(uint)fVar43;
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar42;
    *(float *)(lVar36 + 0x58) = fVar43;
    if (uVar41 <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
    uVar47 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar31 = lVar31 + lVar33 * 0x5c;
    *(float *)(lVar31 + 0x70) = fVar42;
    *(undefined4 *)(lVar31 + 0x6c) = uVar47;
    lVar31 = *in_stack_00000170;
    if ((lVar31 == 0) || (lVar26 = *(long *)(lVar31 + 0x50), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar31 = *(long *)(lVar31 + 0x38);
    if (lVar31 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar26 + lVar33 * 0x5c + 0x40);
    if (*(uint *)(lVar31 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar26 = lVar26 + lVar33 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar13 == uVar55) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar26 = *(long *)(lVar31 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar65) goto LAB_035575f4;
      lVar33 = lVar26 + lVar38 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar33 + 0x58);
      uVar50 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar33 + 0x4c));
      fVar42 = fVar61 + *(float *)(lVar33 + 0x54);
      fVar45 = fVar45 + *(float *)(lVar33 + 0x58);
      uVar54 = (ulong)(uint)fVar45;
      *(ulong *)(lVar33 + 0x4c) = uVar50;
      *(float *)(lVar33 + 0x54) = fVar42;
      *(float *)(lVar33 + 0x58) = fVar45;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(lVar33 + 0x34)) goto LAB_035575f4;
      uVar47 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar38 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar42;
      *(undefined4 *)(lVar26 + 0x6c) = uVar47;
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar26 = *(long *)(lVar31 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar65) goto LAB_035575f4;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar26 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar31 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar26 = lVar26 + lVar38 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar48 = FUN_026b82c4(uVar37,0);
  if (((((uVar48 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
    if (bVar7) {
      if (((uVar17 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*unaff_x20 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar24 + lVar28 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b82c4(uVar4,0);
        if ((uVar48 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar24 + lVar28 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b82c4(uVar4,0);
          if ((uVar48 & 1) != 0) goto LAB_03555d68;
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
      uVar48 = FUN_026b81f8(uVar37,0);
      if ((uVar48 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b63d8(uVar37,0);
        if (((uVar37 != 0x200b) && ((uVar48 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar13 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b82c4(uVar37,0);
      iVar15 = (int)fStack0000000000000128;
      if ((uVar48 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar17 - 2;
    }
    lVar31 = *in_stack_00000170;
    if (lVar31 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar31 + 0x40);
    if (lVar26 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar31 + 0x24);
    iVar16 = *(int *)(lVar26 + 0x18);
    if (iVar16 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar31 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar31 = *in_stack_00000170;
      if (lVar31 == 0) goto LAB_035574b8;
    }
    lVar31 = *(long *)(lVar31 + 0x40);
    if (lVar31 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar31 = lVar31 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar31 + 0x20) = unaff_x19;
    *(float *)(lVar31 + 0x28) = fStack0000000000000158;
    *(int *)(lVar31 + 0x2c) = iVar15;
    *(int *)(lVar31 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar31 = unaff_x19[0x6d];
    if (lVar31 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar31 + 0x50);
    *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar65) goto LAB_035575f4;
    lVar26 = lVar26 + lVar38 * 0x5c;
    bVar7 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      fStack0000000000000158 = (float)uVar13;
    }
    if (uVar13 == *unaff_x20 - 1) {
      lVar31 = *in_stack_00000170;
      if (lVar31 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar31 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar31 + 0x24);
      iVar15 = *(int *)(lVar26 + 0x18);
      if (iVar15 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar31 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar31 = *in_stack_00000170;
        if (lVar31 == 0) goto LAB_035574b8;
      }
      lVar31 = *(long *)(lVar31 + 0x40);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar31 = lVar31 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar31 + 0x20) = unaff_x19;
      *(float *)(lVar31 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar31 + 0x2c) = uVar13;
      *(uint *)(lVar31 + 0x30) = uVar17 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar31 = unaff_x19[0x6d];
      if (lVar31 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar31 + 0x50);
      *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar65) goto LAB_035575f4;
      lVar26 = lVar26 + lVar38 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_03555d68:
    bVar7 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  uVar55 = *(uint *)(lVar31 + 0x18);
  if (uVar55 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar31 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_03555da0:
      if (uVar55 <= uVar17 - 2) goto LAB_035575f4;
      lVar38 = *unaff_x19;
      uVar55 = *(uint *)(lVar31 + lVar28 + -0x330);
      uVar47 = *(undefined4 *)(lVar31 + lVar28 + -0x2f8);
LAB_035562ec:
      pcVar29 = *(code **)(lVar38 + 0x8d8);
LAB_035562f4:
      uVar56 = (ulong)uVar55;
      uVar50 = (ulong)(uint)_bStack0000000000000070;
      uVar54 = (ulong)_bStack0000000000000074;
      (*pcVar29)(fStack0000000000000078,uVar50,uVar54,uVar56,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar47);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar31 = *(long *)puVar8;
      }
LAB_03556348:
      bVar11 = false;
      fVar52 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar31 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar11 = false;
    }
  }
  else {
    lVar31 = lVar31 + lVar35 * 0x178;
    iVar15 = *(int *)(lVar31 + 0x68);
    *(int *)(lVar31 + 0x16c) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar65)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_026b63d8(uVar37,0);
    if ((uVar37 != 0x200b) && ((uVar48 & 1) == 0)) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 == 0) || (lVar38 = *(long *)(lVar31 + 0x38), lVar38 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar38 + 0x18) <= uVar13) goto LAB_035575f4;
      fVar42 = *(float *)(lVar38 + lVar35 * 0x178 + 0x160);
      if (fVar52 <= fVar42) {
        fVar52 = fVar42;
      }
      if (fStack0000000000000100 <= ABS(fVar53)) {
        fStack0000000000000100 = ABS(fVar53);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *in_stack_00000170;
          if (lVar31 == 0) goto LAB_035574b8;
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar38 + 0x15a8);
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar43 = *(float *)(lVar31 + lVar35 * 0x178 + 0x14c);
      fVar42 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar43 = fVar43 + fVar52 * fVar42;
      if (fVar43 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar43;
      }
      uVar50 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar37,0);
        if ((uVar48 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar31 = lVar31 + lVar35 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar31 + 0x160);
      fStack0000000000000078 = *(float *)(lVar31 + 0x11c);
      uVar54 = (ulong)(uint)fStack0000000000000078;
      bVar11 = fVar52 != 0.0;
      fVar42 = in_stack_00000088._4_4_;
      if (bVar11) {
        fVar42 = fVar52;
      }
      fVar52 = fVar42;
      uVar64 = *(undefined4 *)(lVar31 + 0x168);
      _bStack0000000000000074 = 0;
      fVar42 = fVar53;
      if (bVar11) {
        fVar42 = fStack0000000000000100;
      }
      uVar50 = (ulong)(uint)fVar42;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar42;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        if (uVar13 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar35 * 0x178;
          lVar38 = *unaff_x19;
          uVar55 = *(uint *)(lVar31 + 0x128);
          uVar47 = *(undefined4 *)(lVar31 + 0x160);
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
      uVar48 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        lVar38 = lVar35;
        uVar55 = uVar13;
        if (uVar37 == 0x200b || (uVar48 & 1) != 0) {
          lVar38 = lVar34;
          uVar55 = uVar6;
        }
        if (uVar55 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar38 * 0x178;
          uVar55 = *(uint *)(lVar31 + 0x128);
          uVar47 = *(undefined4 *)(lVar31 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        uVar55 = *(uint *)(lVar31 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar48 = FUN_03567ad8(uVar64,*(undefined4 *)(lVar31 + lVar28),0);
      if ((uVar48 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0)) {
          if (uVar13 < *(uint *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + lVar35 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar31 + 0x128);
            uVar54 = (ulong)_bStack0000000000000074;
            uVar50 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar50,uVar54,uVar56,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar31 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar31 = *(long *)puVar8;
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
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
  if (lVar32 == 0) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar31 + lVar35 * 0x178 + 400);
  fVar42 = (float)FUN_03776a30(lVar32 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
      uVar55 = *(uint *)(lVar31 + lVar28 + -0x330);
      fVar61 = *(float *)(lVar31 + lVar28 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar56 = (ulong)uVar55;
      uVar50 = (ulong)(uint)fStack000000000000009c;
      uVar54 = (ulong)(uint)fStack0000000000000098;
      (*pcVar29)(fStack00000000000000a0,uVar50,uVar54,uVar56,
                 fStack00000000000000a8 * fVar42 + fVar61,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar31 = *in_stack_00000170;
    if ((lVar31 == 0) || (lVar38 = *(long *)(lVar31 + 0x38), lVar38 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar38 + 0x18) <= uVar13) goto LAB_035575f4;
    *(int *)(lVar38 + lVar35 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar65)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar38 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar37,0);
        if ((uVar48 & 1) != 0) goto LAB_035564e8;
        lVar31 = *in_stack_00000170;
        if (lVar31 == 0) goto LAB_035574b8;
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar31 = lVar31 + lVar35 * 0x178;
      fStack0000000000000040 = *(float *)(lVar31 + 0x60);
      fStack0000000000000038 = *(float *)(lVar31 + 0x14c);
      uVar50 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar31 + 0x11c);
      uVar54 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar31 + 0x160);
      fStack000000000000009c = fVar42 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        if (uVar13 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + lVar35 * 0x178;
          lVar34 = *unaff_x19;
          uVar55 = *(uint *)(lVar31 + 0x128);
          fVar61 = *(float *)(lVar31 + 0x14c);
LAB_03556654:
          pcVar29 = *(code **)(lVar34 + 0x8d8);
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
      uVar48 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        uVar55 = *(uint *)(lVar31 + 0x18);
        if (uVar37 == 0x200b || (uVar48 & 1) != 0) {
          if (uVar55 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar34 = lVar35;
          if (uVar55 <= uVar13) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar31 = lVar31 + lVar34 * 0x178;
        fVar61 = *(float *)(lVar31 + 0x14c);
        uVar55 = *(uint *)(lVar31 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)uVar55) {
      lVar31 = *in_stack_00000170;
      if ((lVar31 != 0) && (lVar38 = *(long *)(lVar31 + 0x38), lVar38 != 0)) {
        if (uVar17 < *(uint *)(lVar38 + 0x18)) {
          if (*(float *)(lVar38 + lVar28 + -0x108) == fStack0000000000000040) {
            fVar43 = *(float *)(lVar38 + lVar28 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar50 = (ulong)(uint)fStack0000000000000038;
            uVar48 = FUN_03567bac(fVar61 + fVar43,uVar50,0);
            if ((uVar48 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar31 = *in_stack_00000170;
            if (lVar31 == 0) goto LAB_035574b8;
          }
          lVar31 = *(long *)(lVar31 + 0x38);
          if (lVar31 != 0) {
            uVar55 = *(uint *)(lVar31 + 0x18);
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
      iVar15 = FUN_036d3364(lVar32,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar31 = *(long *)(lVar24 + lVar28 + -0x130);
      if (lVar31 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar31,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar31 + 0x18)) {
          lVar34 = *unaff_x19;
          uVar55 = *(uint *)(lVar31 + lVar28 + -0x330);
          fVar61 = *(float *)(lVar31 + lVar28 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
  goto LAB_035574b8;
  uVar55 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar55 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar31 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar54 = (ulong)uStack00000000000000c0;
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar54,uVar56,fStack00000000000000d0,uVar54);
    }
LAB_035569b4:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar65)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar31 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar37,0);
        if ((uVar48 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar34 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar34 = *(long *)puVar8;
      }
      if ((*in_stack_00000170 == 0) || (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0))
      goto LAB_035574b8;
      uVar55 = (uint)*(undefined8 *)(lVar31 + 0x18);
      if (uVar55 <= uVar13) goto LAB_035575f4;
      lVar34 = *(long *)(lVar34 + 0xb8);
      lVar32 = lVar31 + lVar35 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar32 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar32 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar34 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar34 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar32 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar34 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar34 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar55 <= uVar13) goto LAB_035575f4;
    lVar31 = lVar31 + lVar35 * 0x178;
    fVar42 = *(float *)(lVar31 + 0x128);
    fVar44 = *(float *)(lVar31 + 0x188);
    uVar19 = *(undefined8 *)(lVar31 + 0x17c);
    fVar59 = *(float *)(lVar31 + 0x184);
    uVar18 = *(undefined8 *)(lVar31 + 0x184);
    fVar51 = *(float *)(lVar31 + 0x18c);
    fVar61 = *(float *)(lVar31 + 0x11c);
    fVar62 = *(float *)(lVar31 + 0x148);
    fVar43 = *(float *)(lVar31 + 0x150);
    in_stack_00000178 = uVar19;
    fStack0000000000000180 = fVar59;
    fStack0000000000000184 = fVar44;
    in_stack_00000188 = fVar51;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar48 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar31 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar48 & 1) == 0) {
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar31);
      }
      fVar42 = fVar42 + (float)in_stack_000017b8;
      uVar54 = (ulong)(uint)fVar42;
      fVar61 = fVar61 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar43 = fVar43 - in_stack_000017c0;
      uVar50 = (ulong)(uint)fVar43;
      fVar62 = fVar62 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar56 = (ulong)(uint)fVar62;
      if (fVar61 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar61;
      }
      if (fVar43 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar43;
      }
      if (fStack00000000000000c8 <= fVar42) {
        fStack00000000000000c8 = fVar42;
      }
      if (fStack00000000000000d0 <= fVar62) {
        fStack00000000000000d0 = fVar62;
      }
    }
    else {
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar31);
      }
      fVar61 = (fVar61 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar56 = (ulong)(uint)fVar61;
      if (fVar43 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar43;
      }
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar62) {
        fStack00000000000000d0 = fVar62;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar54,uVar56,fStack00000000000000d0,uVar54);
      fStack00000000000000dc = fVar43 - fVar51;
      fStack00000000000000c8 = fVar42 + fVar59;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar62 + fVar44;
      fStack00000000000000d8 = fVar61;
      in_stack_000017b0 = uVar19;
      in_stack_000017b8 = uVar18;
      in_stack_000017c0 = fVar51;
    }
    if (((*unaff_x20 == 1) || (uVar13 == uVar5)) || (((int)uVar6 <= (int)uVar13 || (!bVar1)))) {
      uVar54 = (ulong)uStack00000000000000c0;
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar54,uVar56,fStack00000000000000d0,uVar54);
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
  unaff_x28 = in_stack_00000170;
  uVar17 = uVar17 + 1;
  uVar55 = uVar65;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar24 = *in_stack_00000170;
  if (lVar24 != 0) {
    iVar14 = uVar65 + 1;
    plVar40 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar24 + 0x18) = uVar13;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar14;
    if ((int)uVar13 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar28;
    *(float *)(lVar24 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar48 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar48 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar24 = unaff_x19[0xdf];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*unaff_x28,*(undefined8 *)(lVar24 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar14 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar24 = unaff_x19[0xe5];
      if (lVar24 == 0) goto LAB_035574b8;
      uVar13 = FUN_03911ee4(lVar24,0);
      FUN_03911f20(lVar24,uVar13 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x60), lVar24 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar40 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar18 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar13 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar24 = *unaff_x28;
                              if (lVar24 != 0) {
                                lVar31 = 0;
                                lVar28 = 0;
                                do {
                                  uVar48 = lVar28 + 1;
                                  if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar48)
                                  goto LAB_03554724;
                                  lVar24 = *(long *)(lVar24 + 0x60);
                                  if (lVar24 == 0) break;
                                  if (*(int *)(*plVar40 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                  FUN_03596a20(lVar24 + lVar31 + 0x70,0);
                                  lVar24 = unaff_x19[0xe1];
                                  if (lVar24 == 0) break;
                                  if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                  uVar19 = *(undefined8 *)(lVar24 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar21 = FUN_036d35a8(uVar19,0,0);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar24 = *(long *)(*unaff_x28 + 0x60), lVar24 == 0))
                                      break;
                                      if (*(int *)(*plVar40 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                      FUN_03596b20(lVar24 + lVar31 + 0x70,1,0);
                                    }
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar34 = *(long *)(*unaff_x28 + 0x60), lVar34 == 0)) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a460c(lVar24,*(undefined8 *)(lVar34 + lVar31 + 0x80),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar34 = *(long *)(*unaff_x28 + 0x60), lVar34 == 0)) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4810(lVar24,*(undefined8 *)(lVar34 + lVar31 + 0x98),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar34 = *(long *)(*unaff_x28 + 0x60), lVar34 == 0)) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a48bc(lVar24,*(undefined8 *)(lVar34 + lVar31 + 0xa0),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar34 = *(long *)(*unaff_x28 + 0x60), lVar34 == 0)) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4e24(lVar24,*(undefined8 *)(lVar34 + lVar31 + 0xa8),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = UnityEngine_Material__GetColorArray(lVar24,0),
                                       lVar24 == 0)) break;
                                    FUN_036aa280(lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_037b514c(lVar24,0);
                                    lVar34 = unaff_x19[0xe1];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar34 = *(long *)(lVar34 + lVar28 * 8 + 0x28);
                                    if ((lVar34 == 0) ||
                                       (uVar19 = UnityEngine_Material__GetColorArray(lVar34,0),
                                       lVar24 == 0)) break;
                                    FUN_0390f3a4(lVar24,uVar19,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390eec8(uVar18,uVar50,uVar54,uVar56,lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390ed78(lVar24,uVar13 & 1,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    plVar39 = *(long **)(lVar24 + lVar28 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar39 == (long *)0x0) break;
                                    (**(code **)(*plVar39 + 0x2c8))
                                              (plVar39,uVar17 & 1,*(undefined8 *)(*plVar39 + 0x2d0))
                                    ;
                                  }
                                  lVar24 = *unaff_x28;
                                  lVar28 = lVar28 + 1;
                                  lVar31 = lVar31 + 0x50;
                                } while (lVar24 != 0);
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
  uVar50 = FUN_03586568();
  if (((uVar50 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, uVar65 = in_stack_000017dc,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar31 = (long)(int)uVar13;
  cVar23 = *(char *)(lVar24 + lVar31 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar28 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar13) {
    in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar24 + lVar31 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 0;
      *(long *)(lVar24 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      uVar13 = *unaff_x20;
      if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar24 + (long)(int)uVar13 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar13 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar34 = FUN_03568ac0(*unaff_x21,0), lVar34 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar34,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
      *(ulong *)(lVar24 + lVar31 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
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
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar24 = lVar24 + (long)(int)uVar13 * (long)iVar14;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined2 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *unaff_x20 = uVar13 + 1;
    unaff_x28 = in_stack_00000170;
    uVar65 = in_stack_000017dc;
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
          uVar50 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar50 & 1) != 0) {
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
        uVar50 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar50 & 1) != 0) {
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
      uVar50 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar50 & 1) != 0) {
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
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    unaff_x28 = in_stack_00000170;
    uVar65 = in_stack_000017dc;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    uVar17 = *unaff_x20;
    uVar13 = *(uint *)(lVar24 + 0x18);
    if (uVar13 <= uVar17) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar24 + (long)(int)uVar17 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar24 = unaff_x19[0x20];
    }
    else {
      lVar28 = unaff_x19[0x8f];
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar13 <= uVar17 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = *(float *)(lVar24 + (long)(int)(uVar17 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar24 = *unaff_x21;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    fVar52 = (float)FUN_03776960(lVar24 + 0x50,0);
    fVar49 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar49 = 1.0;
    }
    fVar61 = 0.0;
    fVar53 = 0.0;
    if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar53 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar61 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar24 = unaff_x19[0xc9];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
    fVar42 = *(float *)((long)unaff_x19 + 0x404);
    fVar43 = *(float *)(lVar24 + 0x2c);
    fVar57 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar62 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = *(float *)((long)unaff_x19 + 0x404);
    fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar24 = unaff_x19[0x6d];
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar49 = ((fStack0000000000000158 * fVar46) / (float)iVar12) * fVar52 * fVar49;
    fVar57 = fVar49 * fVar42 * fVar43 * fVar57;
    *(float *)(lVar28 + 0x160) = fVar57;
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    fVar44 = fVar49 * fVar62 * fVar51 * fVar44;
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
    fVar46 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar46 = fVar57;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar12 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar12 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar24 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar24 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar24 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar24 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar31 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar31 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar49 = (float)FUN_03776960(&stack0x00001720,0);
      fVar46 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar46 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar46 = (fVar57 / (float)iVar12) * fVar49 * fVar46;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar61 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar61 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar52 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar24 + 0x20),0);
        fVar42 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        fVar62 = *(float *)(lVar24 + 0x2c);
        fVar43 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar53 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar51 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar59 = *(float *)((long)unaff_x19 + 0x404);
        fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar44 = fVar46 * fVar51 * fVar59 * fVar44;
        fVar61 = (fVar57 / (float)iVar12) * fVar49 * fVar61;
        fVar57 = fVar61 * (fVar52 / fVar42) * fVar62 * fVar43;
        fVar61 = fVar61 / fVar57;
        fVar53 = fVar61 * fVar53;
        fVar46 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar61 = fVar61 * fVar46;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar49 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        fVar61 = *(float *)(lVar24 + 0x2c);
        fVar52 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar52 = 1.0;
        }
        fVar42 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar53 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar43 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar44 = fVar46 * fVar43 * fVar62 * fVar44;
        fVar57 = (fVar57 / (float)iVar12) * fVar49 * fVar52 * fVar61 * fVar42;
        fVar61 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar24);
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 1;
      *(float *)(lVar24 + 0x160) = fVar57;
      *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar31 = *(long *)(lVar24 + 0x38), lVar31 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
      goto LAB_035514b0;
    }
    lVar24 = *in_stack_00000170;
    fVar44 = 0.0;
    fVar46 = fVar44;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar46 = fVar57;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    fVar53 = 0.0;
    fVar61 = 0.0;
  }
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar24 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
  uVar19 = unaff_x29[1];
  uVar18 = *unaff_x29;
  lVar24 = lVar24 + (long)(int)uVar13 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar24 + 0x184) = uVar19;
  *(undefined8 *)(lVar24 + 0x17c) = uVar18;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar24,0);
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
    _fStack0000000000000128 = (ulong)(uint)fVar53;
    fVar52 = 0.0;
    fVar49 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar17 = *unaff_x20;
    uVar13 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar17 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar17 + 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar17 + 1) * (long)iVar14 + 0x30);
      if ((((lVar24 == 0) || (*unaff_x21 == 0)) ||
          (lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar13 | *(int *)(lVar24 + 0x28) << 0x10;
      uVar48 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar64 = 0;
      if ((uVar48 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar53;
        fVar52 = 0.0;
        fVar49 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar64 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar49 = *(float *)(in_stack_000016f8 + 0x14);
        fVar52 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar53);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar17 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar53;
      fVar52 = 0.0;
      fVar49 = 0.0;
    }
    if (0 < (int)uVar17) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar17 - 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar17 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*unaff_x21 == 0)) ||
         ((lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar24 + 0x28) | uVar13 << 0x10;
      uVar48 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar48 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar47 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar49 = (float)FUN_03571cb4(fVar49,fVar52,_fStack0000000000000128 >> 0x20,uVar64,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar47,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar42 = *(float *)(unaff_x19 + 200);
    fVar53 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar42 = fVar42 - fVar46 * fVar53 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar42;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar42 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar53 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar53 != 0.0) {
    fVar42 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar43 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar53 * 0.5 - fVar46 * (fVar42 * 0.5 + fVar43));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_036cee6c(lVar24,0,0);
    fVar42 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar48 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar42 = 0.0;
      if ((uVar48 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        fVar53 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar43 = *(float *)(*unaff_x21 + 0x1b0);
        fVar42 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar42 = fVar42 * fVar53 * fVar43 * 0.25;
        if (fVar53 < fStack000000000000015c + fVar42) {
          fStack000000000000015c = fVar53 - fVar42;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar24 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_036cee6c(lVar24,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar48 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar48 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        uVar48 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar48 & 1) != 0) {
          lVar24 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar24 == 0) goto LAB_035574b8;
          fVar53 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar43 = *(float *)(*unaff_x21 + 0x1a8);
          fVar42 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar42 = fVar42 * fVar53 * fVar43 * 0.25;
          if (fVar53 < fStack000000000000015c + fVar42) {
            fStack000000000000015c = fVar53 - fVar42;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar42 = 0.0;
  }
FUN_03551b84:
  fVar53 = *(float *)(unaff_x19 + 200);
  fVar43 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar53 = fVar53 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar46 * (fVar49 + ((fVar43 - fStack000000000000015c) - fVar42));
  fVar49 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar62 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar44 + fVar46 * (fVar52 + fStack000000000000015c + fVar49)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar49 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar49 = fVar62 - fVar46 * (fStack000000000000015c + fStack000000000000015c + fVar49);
  fVar52 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar43 = fVar53 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar46 * (fVar42 + fVar42 +
                             fStack000000000000015c + fStack000000000000015c + fVar52);
  fStack0000000000000104 = fVar53;
  fVar52 = fVar43;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar59 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar52 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar58 = fVar59 * fVar46 * (fVar42 + fStack000000000000015c + fVar52);
    fVar52 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar51 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar62 = fVar62 + 0.0;
    fVar49 = fVar49 + 0.0;
    fVar59 = fVar59 * fVar46 * (((fVar52 - fVar51) - fStack000000000000015c) - fVar42);
    fVar51 = fVar53 + fVar58;
    fVar52 = fVar43 + fVar59;
    fVar45 = (fVar58 - fVar59) * 0.5;
    fVar53 = (fVar53 + fVar59) - fVar45;
    fVar43 = (fVar43 + fVar58) - fVar45;
    fStack0000000000000104 = fVar51 - fVar45;
    fVar52 = fVar52 - fVar45;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar45 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar49;
    fVar51 = fVar62;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar60 = (fVar43 + fVar53) * 0.5;
    fVar63 = (fVar49 + fVar62) * 0.5;
    fVar62 = fVar62 - fVar63;
    fStack0000000000000100 = 0.0;
    fVar51 = fVar62;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar60,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar60 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar59 = fVar49 - fVar63;
    fStack0000000000000114 = 0.0;
    fVar49 = fVar59;
    fVar53 = (float)FUN_036bdd2c(fVar53 - fVar60,_fStack0000000000000078,0);
    fVar53 = fVar60 + fVar53;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar49 = fVar63 + fVar49;
    fVar58 = 0.0;
    fVar43 = (float)FUN_036bdd2c(fVar43 - fVar60,_fStack0000000000000078,0);
    fVar43 = fVar60 + fVar43;
    fVar62 = fVar63 + fVar62;
    fVar58 = fVar58 + 0.0;
    fVar45 = 0.0;
    fVar52 = (float)FUN_036bdd2c(fVar52 - fVar60,_fStack0000000000000078,0);
    fVar52 = fVar60 + fVar52;
    fVar45 = fVar45 + 0.0;
    fVar59 = fVar63 + fVar59;
    fVar51 = fVar63 + fVar51;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar24 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar46;
  if (lVar24 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fVar53;
  *(float *)(lVar24 + 0x120) = fVar49;
  *(float *)(lVar24 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x114) = fVar51;
  *(float *)(lVar24 + 0x110) = fStack0000000000000104;
  *(float *)(lVar24 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = fVar43;
  *(float *)(lVar24 + 300) = fVar62;
  *(float *)(lVar24 + 0x130) = fVar58;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x134) = fVar52;
  *(float *)(lVar24 + 0x138) = fVar59;
  *(float *)(lVar24 + 0x13c) = fVar45;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  unaff_x26 = (long)(int)uVar13;
  if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar28 = lVar24 + unaff_x26 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar62 = *(float *)(unaff_x19 + 0x9b);
  uVar48 = (ulong)(uint)fVar62;
  fVar52 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar43 - fVar53) / (fVar51 - fVar49);
  *(float *)(lVar28 + 0x14c) = (fVar44 - fVar62) + fVar52;
  fVar49 = fStack0000000000000128 * fVar46;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar49 = fVar49 / fStack0000000000000158;
    fVar61 = (fVar61 * fVar46) / fStack0000000000000158;
  }
  else {
    fVar61 = fVar61 * fVar46;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar13 == unaff_w22)) {
    fVar61 = fVar52 + fVar61;
    fVar49 = fVar52 + fVar49;
    fVar43 = fVar61;
    fVar53 = fVar49;
    if (fVar52 != 0.0) {
      fVar53 = (fVar49 - fVar52) / *(float *)((long)unaff_x19 + 0x404);
      fVar43 = (fVar61 - fVar52) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar53 <= fVar49) {
        fVar53 = fVar49;
      }
      if (fVar61 <= fVar43) {
        fVar43 = fVar61;
      }
    }
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    fVar52 = fVar53;
    if (fVar53 <= *(float *)(unaff_x19 + 0x99)) {
      fVar52 = *(float *)(unaff_x19 + 0x99);
    }
    fVar44 = fVar43;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar43) {
      fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar44;
    *(float *)(unaff_x19 + 0x99) = fVar52;
    *(float *)(lVar24 + 0x154) = fVar53;
    *(float *)(lVar24 + 0x158) = fVar43;
    *(float *)(lVar24 + 0x148) = fVar49 - fVar62;
    *(float *)(unaff_x19 + 0x98) = fVar49 - fVar62;
    *(float *)(lVar24 + 0x150) = fVar61 - fVar62;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar61 - fVar62;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar52;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar52 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar53 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar46 * fVar53) / fStack0000000000000158;
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar52 <= fStack0000000000000158) {
        fVar52 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar52;
    }
    if ((float)uVar48 == 0.0) {
      fVar52 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar49) {
        fVar52 = fVar49;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar52;
    }
  }
  else {
    fVar49 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar49;
    fVar52 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar49 = fVar49 - fVar62;
    *(float *)(lVar24 + 0x148) = fVar49;
    *(float *)(lVar24 + 0x158) = fVar52;
    *(float *)(unaff_x19 + 0x98) = fVar49;
    fVar52 = fVar52 - fVar62;
    *(float *)(lVar24 + 0x150) = fVar52;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
  }
  lVar24 = *in_stack_00000170;
  if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)uVar13 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  uVar17 = *(uint *)(unaff_x19 + 0x4f);
  uVar65 = in_stack_000017dc;
  if (((in_stack_000017dc != 9) &&
      ((((unaff_w27 != 0 || (in_stack_000017dc == 3)) || (in_stack_000017dc == 0x200b)) ||
       (in_stack_000017dc == 0xad)))) &&
     (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x644) != 1)))) {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar49 = (float)uVar48;
      fVar57 = 0.0;
      if ((0.0 < fVar49) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar48 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar49)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar50 = FUN_036cee6c(lVar24,0,0);
        if ((uVar50 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x528))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
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
      uVar48 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar48 & 1) == 0) goto LAB_03552bb8;
    }
    if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0x2060)) {
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
LAB_03552bb8:
    if (in_stack_000017dc != 0xa0) goto LAB_035530c4;
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    goto LAB_03552fcc;
  }
  *(undefined1 *)(lVar28 + 0x194) = 1;
  pfVar27 = _fStack00000000000000a0;
  pfVar30 = _fStack00000000000000a8;
  if (unaff_w23 != 0) {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    pfVar30 = (float *)(lVar24 + 0x60);
    pfVar27 = (float *)(lVar24 + 100);
  }
  fVar52 = *pfVar30;
  fVar53 = *pfVar27;
  fVar49 = *(float *)(unaff_x19 + 0x6c);
  fVar61 = *(float *)(unaff_x19 + 200);
  in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar52) - fVar53;
  bVar10 = true;
  if ((fVar49 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar49))) {
    bVar10 = fVar49 == -1.0;
  }
  if (!bVar10) {
    in_stack_000000f8._4_4_ = fVar49;
  }
  fVar49 = 0.0;
  if ((char)unaff_x19[0x1e] == '\0') {
    fVar49 = (float)FUN_03776cb4(&stack0x00001790,0);
    uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
  }
  fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
  if (in_stack_000017dc != 0xad) {
    fVar57 = fVar46;
  }
  fVar51 = (float)uVar48;
  fVar44 = 0.0;
  if ((0.0 < fVar51) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar13 = *unaff_x20;
  fVar44 = (*(float *)(unaff_x19 + 0x97) - (fVar62 - fVar51)) + fVar44;
  if (fStack00000000000000c4 < fVar44) {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    uVar18 = DAT_00d37868;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar59 = *(float *)(unaff_x19 + 0x59);
      if (((fVar59 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar51)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar57 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - fVar44) / (float)(int)unaff_x19[0x95]) /
                 fStack0000000000000058;
        if (fVar57 <= fVar59) {
          fVar57 = fVar59;
        }
        goto LAB_03554b48;
      }
      fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar44 = *(float *)(unaff_x19 + 0x4a);
      uVar48 = (ulong)(uint)fVar44;
      if ((fVar44 < fVar51) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar57 = (fVar51 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar57 <= DAT_00d38b84) {
          fVar57 = DAT_00d38b84;
        }
        fVar46 = (fVar51 - fVar57) * 20.0 + 0.5;
        *(float *)((long)unaff_x19 + 0x23c) = fVar51;
        fVar57 = DAT_00d38e60;
        if (fVar46 != INFINITY) {
          fVar57 = (float)(int)fVar46 / 20.0;
        }
        if (fVar57 <= fVar44) {
          fVar57 = fVar44;
        }
        goto LAB_03554658;
      }
    }
    switch((int)unaff_x19[0x5c]) {
    case 1:
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar8;
      }
      lVar28 = *(long *)(lVar24 + 0xb8);
      lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
        lVar24 = FUN_01a46ff8(lVar24);
      }
      piVar20 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar20 == 0) goto LAB_03554580;
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar8;
      }
      FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
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
        unaff_x28 = in_stack_00000170;
        uVar65 = in_stack_000017dc;
        goto LAB_03550bd0;
      }
      fVar57 = *(float *)(unaff_x19 + 0x99);
      unaff_x29 = (undefined8 *)&stack0x000008a0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      if (fVar57 - fVar62 <= fStack00000000000000c4) {
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
        uVar48 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        lVar24 = NEON_rev64(uVar48,4);
        unaff_x19[0x99] = lVar24;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        unaff_x28 = in_stack_00000170;
        goto LAB_03550bd0;
      }
      break;
    case 6:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      lVar24 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar50 = FUN_036cee6c(lVar24,0,0);
      if ((uVar50 & 1) != 0) {
        plVar40 = (long *)unaff_x19[0x5d];
        uVar18 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar40 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar40 + 0x528))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x530));
        lVar24 = unaff_x19[0x5d];
        if (lVar24 == 0) goto LAB_035574b8;
        *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar40 = (long *)unaff_x19[0x5d];
        if (plVar40 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
    }
    goto UnityEngine_AnimationClip__get_hasMotionCurves;
  }
UnityEngine_AnimationClip__set_wrapMode:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  fVar49 = ABS(fVar61) + fVar49 * (1.0 - fVar43) * fVar57;
  fVar57 = 1.0;
  if ((uVar17 & 0x18) != 0) {
    fVar57 = DAT_00d38acc;
  }
  fVar61 = fVar57 * in_stack_000000f8._4_4_;
  if (fVar49 <= fVar61) goto LAB_03552f54;
  uVar48 = (ulong)(uint)fVar42;
  if (((char)unaff_x19[0x5b] == '\0') || (uVar13 == *(uint *)(unaff_x19 + 0x93))) {
    if (((char)unaff_x19[0x47] == '\0') ||
       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
LAB_035524c0:
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar20 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar20 == 0) goto LAB_03554580;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar50 = FUN_036cee6c(lVar24,0,0);
        if ((uVar50 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x528))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
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
    fVar61 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if (fVar43 < fVar61) {
      fVar46 = fVar49 / (1.0 - fVar43);
      if (fVar43 <= 0.0) {
        fVar46 = fVar49;
      }
      fVar43 = fVar43 + (fVar49 - fVar57 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
      goto LAB_035574e8;
    }
    fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
    fVar61 = *(float *)(unaff_x19 + 0x4a);
    if (fVar43 <= fVar61) goto LAB_035524c0;
    fVar57 = (fVar43 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar57 <= DAT_00d38b84) {
      fVar57 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar43;
    fVar43 = fVar43 - fVar57;
  }
  else {
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    in_stack_000017a8 = FUN_0358c15c();
    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fVar61 = *(float *)(unaff_x19 + 0x9b);
      fVar43 = 0.0;
      if ((0.0 < fVar61) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar43 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
               *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
               (fVar43 - *(float *)((long)unaff_x19 + 0x4cc)) +
               fStack0000000000000058 *
               (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
    }
    else {
      lVar24 = unaff_x19[0x6d];
      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
      if (lVar24 == 0) goto LAB_035574b8;
      fVar61 = *(float *)(unaff_x19 + 0x9b);
      fVar43 = *(float *)(unaff_x19 + 0x58) + fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)((long)unaff_x19 + 0x494);
    if ((*(uint *)(lVar24 + 0x18) <= uVar55) ||
       (uVar41 = uVar55 - 1, *(uint *)(lVar24 + 0x18) <= uVar41)) goto LAB_035575f4;
    uVar48 = (ulong)(uint)(fVar43 + *(float *)(unaff_x19 + 0x97));
    fVar62 = (fVar43 + *(float *)(unaff_x19 + 0x97) + fVar61) -
             *(float *)(lVar24 + (long)(int)uVar55 * unaff_x24 + 0x158);
    if (((bStack0000000000000074 & 1) == 0 &&
         *(short *)(lVar24 + (long)(int)uVar41 * (long)iVar14 + 0x20) == 0xad) &&
       ((fVar62 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
      bStack0000000000000074 = 0;
      in_stack_000017c8 = CONCAT44(0x2d,uVar41);
      *unaff_x20 = uVar41;
      unaff_x28 = in_stack_00000170;
      in_stack_000017a8 = in_stack_000017a8 - 1;
      goto LAB_03550bd0;
    }
    if (*(short *)(lVar24 + (long)(int)uVar55 * unaff_x24 + 0x20) == 0xad) {
      bStack0000000000000074 = 1;
      unaff_x28 = in_stack_00000170;
      goto LAB_03550bd0;
    }
    if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) == 0) {
LAB_03552d44:
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar8;
      }
      iVar12 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
      if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack0000000000000070 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_035574b8;
        uVar55 = *unaff_x20 - 1;
        if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_035575f4;
        iStack0000000000000034 = iVar12;
        if (*(short *)(lVar24 + (long)(int)uVar55 * (long)iVar14 + 0x20) == 0xad) {
          bStack0000000000000074 = 0;
          in_stack_000017c8 = CONCAT44(0x2d,uVar55);
          *unaff_x20 = uVar55;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          goto LAB_03550bd0;
        }
      }
      if (fVar62 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
        uVar48 = unaff_d13;
        FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
        bStack0000000000000070 = 1;
        bStack0000000000000074 = 0;
        in_stack_00000068._4_4_ = 1;
        unaff_x28 = in_stack_00000170;
        goto LAB_03550bd0;
      }
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
      }
      fVar61 = fStack00000000000000c4;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar61 = *(float *)(unaff_x19 + 0x59);
        if ((fVar61 < *(float *)((long)unaff_x19 + 700)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar62) / (float)((int)unaff_x19[0x95] + 1)) /
                   fStack0000000000000058;
          if (fVar57 <= fVar61) {
            fVar57 = fVar61;
          }
LAB_03554b48:
          *(float *)((long)unaff_x19 + 700) = fVar57;
          return;
        }
        fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar61 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar43 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_03557558;
        fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar48 = (ulong)(uint)fVar43;
        fVar61 = *(float *)(unaff_x19 + 0x4a);
        if ((fVar61 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_03557594;
      }
      switch((int)unaff_x19[0x5c]) {
      case 0:
      case 2:
      case 4:
        goto switchD_03552ef4_caseD_0;
      case 1:
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar20 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        if (*piVar20 == 0) {
          bStack0000000000000074 = 0;
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = 0xffffffff;
          goto LAB_03550bd0;
        }
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
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
        unaff_x28 = in_stack_00000170;
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
        unaff_x28 = in_stack_00000170;
        goto LAB_03550bd0;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        uVar48 = unaff_d13;
        FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_03552f38;
      case 6:
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar50 = FUN_036cee6c(lVar24,0,0);
        if ((uVar50 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x528))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        bStack0000000000000074 = 0;
LAB_03552b00:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
        unaff_x28 = in_stack_00000170;
        goto LAB_03550bd0;
      default:
        goto switchD_03552ef4_default;
      }
    }
    fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar61 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if ((fVar43 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_03557558:
      fVar46 = fVar49;
      if (0.0 < fVar43) {
        fVar46 = fVar49 / (1.0 - fVar43);
      }
      fVar43 = fVar43 + (fVar49 - fVar57 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
LAB_035574e8:
      if (fVar61 <= fVar43) {
        fVar43 = fVar61;
      }
      *(float *)((long)unaff_x19 + 0x2d4) = fVar43;
      return;
    }
    fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
    uVar48 = (ulong)(uint)fVar43;
    fVar61 = *(float *)(unaff_x19 + 0x4a);
    if ((fVar43 <= fVar61) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
    goto LAB_03552d44;
LAB_03557594:
    fVar57 = (fVar43 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar57 <= DAT_00d38b84) {
      fVar57 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar43;
    fVar43 = fVar43 - fVar57;
  }
  fVar46 = fVar43 * 20.0 + 0.5;
  fVar57 = DAT_00d38e60;
  if (fVar46 != INFINITY) {
    fVar57 = (float)(int)fVar46 / 20.0;
  }
  if (fVar57 <= fVar61) {
    fVar57 = fVar61;
  }
LAB_03554658:
  *(float *)((long)unaff_x19 + 0x1e4) = fVar57;
  return;
}


