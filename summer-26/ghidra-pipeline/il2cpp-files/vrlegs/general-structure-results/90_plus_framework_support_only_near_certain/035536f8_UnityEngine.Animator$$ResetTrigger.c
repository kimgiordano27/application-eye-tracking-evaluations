/*
FUNCTION_NAME: UnityEngine.Animator$$ResetTrigger
ENTRY_POINT: 035536f8
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


void UnityEngine_Animator__ResetTrigger(long param_1,undefined1 param_2 [16],ulong param_3)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 in_ZR;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  float *pfVar29;
  long in_x9;
  long lVar30;
  code *pcVar31;
  float *pfVar32;
  undefined8 in_x10;
  uint in_w11;
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
  ulong unaff_x24;
  long lVar40;
  long *plVar41;
  long unaff_x26;
  uint unaff_w27;
  long *unaff_x28;
  uint uVar42;
  undefined8 *unaff_x29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  ulong uVar49;
  float fVar50;
  ulong uVar51;
  float fVar52;
  ulong uVar53;
  uint uVar54;
  ulong uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulong unaff_d13;
  undefined4 uVar66;
  float fVar67;
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
  int iStack0000000000000128;
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
  uint in_stack_000017dc;
  
code_r0x035536f8:
  uVar14 = (uint)unaff_x26;
  uVar18 = (uint)in_x10;
  iVar17 = (int)unaff_x24;
  if (!(bool)in_ZR) goto LAB_03553c8c;
LAB_0355371c:
  uVar14 = (uint)unaff_x26;
  if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
    fVar58 = *(float *)(unaff_x19 + 0x99);
    fVar60 = *(float *)(unaff_x19 + 0x9a);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar58 = fVar58 - fVar60;
    if (((fStack000000000000005c < ABS(fVar58)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
       (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
      FUN_0358c860(fVar58);
      *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar58;
      *(float *)(unaff_x19 + 0x9b) = fVar58 + *(float *)(unaff_x19 + 0x9b);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar9;
      }
      lVar26 = *(long *)(lVar22 + 0xb8);
      if (*(int *)(lVar26 + 0x7ac) == (int)unaff_x19[0x95]) {
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        FUN_0209b778(lVar26 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x000008a0,0x378);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (*(long *)(lVar22 + 0xb8) + 0x818,0);
        lVar22 = *(long *)(*(long *)puVar9 + 0xb8);
        *(float *)(lVar22 + 0x7bc) = fVar58 + *(float *)(lVar22 + 0x7bc);
        *(float *)(lVar22 + 0x800) = fVar58 + *(float *)(lVar22 + 0x800);
        memcpy(&stack0x000001b0,(void *)(lVar22 + 0x788),0x378);
        FUN_0209b210(lVar22 + 0x11f0,&stack0x000001b0,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
  }
  fVar50 = *(float *)(unaff_x19 + 0x9b);
  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
  fVar60 = *(float *)((long)unaff_x19 + 0x4cc) - fVar50;
  fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
  if (fVar60 <= *(float *)((long)unaff_x19 + 0x4c4)) {
    fVar58 = fVar60;
  }
  *(float *)((long)unaff_x19 + 0x4c4) = fVar58;
  fVar52 = *(float *)(unaff_x19 + 0x99);
  if (*(char *)((long)unaff_x29 + 0xf34) == '\0') {
    in_stack_000017d8 = fVar58;
  }
  if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
     (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
      ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
    *(undefined1 *)((long)unaff_x29 + 0xf34) = 1;
  }
  lVar22 = *unaff_x28;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_035574b8;
  uVar18 = *(uint *)(unaff_x19 + 0x95);
  if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
  lVar30 = unaff_x19[0x93];
  lVar35 = lVar26 + (long)(int)uVar18 * 0x5c;
  *(int *)(lVar35 + 0x34) = (int)lVar30;
  uVar54 = *(uint *)(unaff_x19 + 0x93);
  if ((int)lVar30 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
    uVar54 = *(uint *)((long)unaff_x19 + 0x49c);
  }
  *(uint *)((long)unaff_x19 + 0x49c) = uVar54;
  *(uint *)(lVar35 + 0x38) = uVar54;
  *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
  *(undefined4 *)(lVar35 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
  iVar13 = *(int *)((long)unaff_x19 + 0x49c);
  if ((int)uVar54 <= *(int *)((long)unaff_x19 + 0x4a4)) {
    iVar13 = *(int *)((long)unaff_x19 + 0x4a4);
  }
  *(int *)((long)unaff_x19 + 0x4a4) = iVar13;
  *(int *)(lVar35 + 0x40) = iVar13;
  *(int *)(lVar35 + 0x24) = (*(int *)(lVar35 + 0x3c) - *(int *)(lVar35 + 0x34)) + 1;
  *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= uVar54) goto LAB_035575f4;
  uVar66 = *(undefined4 *)(lVar22 + (long)(int)uVar54 * (long)iVar17 + 0x11c);
  lVar26 = lVar26 + (long)(int)uVar18 * 0x5c;
  *(float *)(lVar26 + 0x70) = fVar60;
  *(undefined4 *)(lVar26 + 0x6c) = uVar66;
  lVar22 = *unaff_x28;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
  fVar52 = fVar52 - fVar50;
  param_3 = (ulong)(uint)fVar52;
  lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
  *(undefined4 *)(lVar26 + 0x74) =
       *(undefined4 *)(lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
  *(float *)(lVar26 + 0x78) = fVar52;
  param_1 = *unaff_x28;
  if ((param_1 == 0) || (lVar22 = *(long *)(param_1 + 0x50), lVar22 == 0)) goto LAB_035574b8;
  lVar26 = (long)(int)*(uint *)(unaff_x19 + 0x95);
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
  lVar30 = lVar22 + lVar26 * 0x5c;
  *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - (float)unaff_d13 * fStack000000000000015c;
  *(float *)(lVar30 + 0x5c) = in_stack_000000f8._4_4_;
  if (*(int *)(lVar30 + 0x24) == 1) {
    *(int *)(lVar22 + lVar26 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if ((*unaff_x21 == 0) || (in_x9 = *(long *)(param_1 + 0x38), in_x9 == 0)) goto LAB_035574b8;
  lVar30 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
  uVar18 = (uint)*(undefined8 *)(in_x9 + 0x18);
  if (uVar18 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
  if ((*(char *)(in_x9 + lVar30 * unaff_x24 + 0x194) == '\0') &&
     (lVar30 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar18 <= *(uint *)(unaff_x19 + 0x94)))
  goto LAB_035575f4;
  lVar22 = lVar22 + lVar26 * 0x5c;
  fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           (fStack00000000000000d4 *
            (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
           *(float *)((long)unaff_x19 + 0x2ac));
  fVar58 = -fVar50;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar58 = fVar50;
  }
  *(float *)(lVar22 + 0x58) = *(float *)(in_x9 + lVar30 * unaff_x24 + 0x144) + fVar58;
  *(float *)(lVar22 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
  *(float *)(lVar22 + 0x54) = fVar60;
  *(float *)(lVar22 + 0x48) = in_stack_00000060 + (fVar52 - fVar60);
  *(float *)(lVar22 + 0x4c) = fVar52;
  in_w11 = in_stack_000017dc;
  if ((int)in_stack_000017dc < 0x2d) {
    if (1 < in_stack_000017dc - 10) {
      if (in_stack_000017dc != 3) goto LAB_03553c8c;
      if (unaff_x19[0x8f] != 0) {
        in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        in_w11 = 3;
        goto LAB_03553c8c;
      }
      goto LAB_035574b8;
    }
  }
  else if ((1 < in_stack_000017dc - 0x2028) && (in_stack_000017dc != 0x2d)) goto LAB_03553c8c;
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  lVar22 = unaff_x19[0x6d];
  *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
  iVar13 = (int)unaff_x19[0x95] + 1;
  *(int *)(unaff_x19 + 0x95) = iVar13;
  *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
  if ((lVar22 != 0) && (*(long *)(lVar22 + 0x50) != 0)) {
    if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar13) {
      FUN_0358ca18();
      lVar22 = unaff_x19[0x6d];
      if (lVar22 == 0) goto LAB_035574b8;
    }
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 != 0) {
      if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
        fVar58 = *(float *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((in_stack_000017dc == 0x2029) || (fVar60 = 0.0, in_stack_000017dc == 10)) {
            fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar24 = 0;
          fVar60 = fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar60) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_000017dc == 0x2029) || (fVar60 = 0.0, in_stack_000017dc == 10)) {
            fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar24 = 1;
          fVar60 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar60);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar60;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar24;
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        uVar19 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar58;
        param_3 = NEON_rev64(uVar19,4);
        unaff_x19[0x99] = param_3;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_0358c4f0();
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068._4_4_ = 1;
        bStack0000000000000070 = 1;
LAB_03550bd0:
        fVar58 = (float)unaff_d13;
        in_stack_000017a8 = in_stack_000017a8 + 1;
        lVar22 = unaff_x19[0x8f];
        if (lVar22 != 0) {
          if ((int)in_stack_000017a8 < (int)*(uint *)(lVar22 + 0x18)) {
            if (*(uint *)(lVar22 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
            in_w11 = *(uint *)(lVar22 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
            if (in_w11 == 0) goto LAB_0355459c;
            if (5 < in_stack_00000168._4_4_) {
              uVar19 = FUN_0276793c(&stack0x000017dc,0);
              uVar20 = FUN_0276793c(&stack0x000017a8,0);
              uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar19,
                                    *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar20,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367ae18(uVar19,0);
              in_stack_000017c8 = CONCAT44(3,*unaff_x20);
            }
            if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_w11 == 0x3c))
            goto code_r0x0355094c;
            if ((*unaff_x28 != 0) && (lVar22 = *(long *)(*unaff_x28 + 0x38), lVar22 != 0)) {
              if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
                lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
                *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar22 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar22 + 0x58);
                unaff_x19[0x20] = *(long *)(lVar22 + 0x38);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                goto LAB_035509d4;
              }
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
LAB_0355459c:
          fVar58 = (float)param_3;
          if (((char)unaff_x19[0x47] != '\0') &&
             (fVar58 = DAT_00d389f8,
             DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
            fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
            fVar60 = *(float *)((long)unaff_x19 + 0x254);
            if ((fVar58 < fVar60) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
              }
              fVar50 = (*(float *)((long)unaff_x19 + 0x23c) - fVar58) * 0.5;
              if (fVar50 <= DAT_00d38b84) {
                fVar50 = DAT_00d38b84;
              }
              *(float *)(unaff_x19 + 0x48) = fVar58;
              fVar50 = (fVar58 + fVar50) * 20.0 + 0.5;
              fVar58 = DAT_00d38e60;
              if (fVar50 != INFINITY) {
                fVar58 = (float)(int)fVar50 / 20.0;
              }
              if (fVar60 <= fVar58) {
                fVar58 = fVar60;
              }
              goto LAB_03554658;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
          puVar9 = PTR_DAT_03cbdf88;
          if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
            uVar19 = FUN_0276793c(_fStack0000000000000038,0);
            uVar20 = FUN_0277fa90(_fStack0000000000000040,0);
            uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar19,
                                  *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar20,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
            }
            FUN_0367a6ec(uVar19,0);
          }
          puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017dc == 3)))) {
            (**(code **)(*unaff_x19 + 0x918))();
            goto LAB_03554724;
          }
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)puVar10;
          }
          plVar41 = (long *)OVRPlugin_Media_TypeInfo;
          lVar22 = **(long **)(lVar22 + 0xb8);
          if (lVar22 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
          iVar17 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
          if ((*unaff_x28 == 0) || (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0))
          goto LAB_035574b8;
          if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
          FUN_035968e8(lVar22 + 0x20,0,0);
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          iVar13 = (int)unaff_x19[0x4e];
          in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uStack00000000000000e8 =
               *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
          lVar22 = unaff_x19[0xe3];
          in_stack_000000b8 = (long *)uStack00000000000000e8;
          fStack00000000000000c4 = in_stack_000000f8._4_4_;
          if (iVar13 < 0x401) {
            if (iVar13 == 0x100) {
              if (lVar22 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar22 + 0x18) < 2) goto LAB_035575f4;
              uVar19 = *(undefined8 *)(lVar22 + 0x30);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x58), lVar26 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
                fVar58 = *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
              }
              else {
                fVar58 = *(float *)(unaff_x19 + 0x97);
              }
              fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x2c);
              fVar58 = (0.0 - fVar58) - fStack0000000000000020;
            }
            else if (iVar13 == 0x200) {
              if (lVar22 == 0) goto LAB_035574b8;
              if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
              goto LAB_035575f4;
              fStack00000000000000c4 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5
              ;
              uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar22 + 0x24) +
                                (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*unaff_x28 == 0) || (lVar22 = *(long *)(*unaff_x28 + 0x58), lVar22 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
                lVar22 = lVar22 + (long)(int)uStack0000000000000030 * 0x14;
                fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
                fVar58 = ((fStack0000000000000020 + *(float *)(lVar22 + 0x28) +
                          *(float *)(lVar22 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
              }
              else {
                fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
                fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8
                          ) - fStack0000000000000024) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar13 != 0x400) goto LAB_03554c4c;
              if (lVar22 == 0) goto LAB_035574b8;
              if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
              uVar19 = *(undefined8 *)(lVar22 + 0x24);
              if ((int)unaff_x19[0x5c] == 5) {
                if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x58), lVar26 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
                in_stack_000017d8 =
                     *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
              }
              fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x20);
              fVar58 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
            }
LAB_03554c3c:
            in_stack_000000b8 =
                 (long *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar58);
          }
          else if (iVar13 == 0x800) {
            if (lVar22 == 0) goto LAB_035574b8;
            if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_035575f4;
            fVar58 = fStack000000000000002c + 0.0 +
                     (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            in_stack_000000b8 =
                 (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,((float)*(undefined8 *)(lVar22 + 0x24) +
                                      (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + 0.0);
            fStack00000000000000c4 = fVar58;
          }
          else {
            if (iVar13 == 0x1000) {
              if (lVar22 == 0) goto LAB_035574b8;
              if ((*(int *)(lVar22 + 0x18) != 1) && (*(int *)(lVar22 + 0x18) != 0)) {
                uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar22 + 0x24) +
                                  (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
                fStack00000000000000c4 =
                     fStack000000000000002c + 0.0 +
                     (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                fVar58 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                                *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
                goto LAB_03554c3c;
              }
              goto LAB_035575f4;
            }
            if (iVar13 == 0x2000) {
              if (lVar22 == 0) goto LAB_035574b8;
              if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
              goto LAB_035575f4;
              fVar58 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                             fStack0000000000000024) * 0.5;
              in_stack_000000b8 =
                   (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar22 + 0x24) +
                                        (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + fVar58);
              fStack00000000000000c4 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            }
          }
LAB_03554c4c:
          if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
          uVar19 = FUN_03912334(unaff_x19[0xe5],0);
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar9);
          }
          uVar49 = FUN_036d35a8(uVar19,0,0);
          lVar22 = FUN_0357f060();
          if (lVar22 == 0) goto LAB_035574b8;
          FUN_036df824(lVar22,0);
          *(float *)(unaff_x19 + 0xe2) = fVar58;
          if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
          iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
          if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
          fVar60 = (float)FUN_03911954(unaff_x19[0xe5],0);
          uVar66 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
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
          puVar27 = *(undefined4 **)(lVar22 + 0xb8);
          uVar51 = (ulong)(uint)puVar27[1];
          uVar53 = (ulong)(uint)puVar27[2];
          uVar55 = (ulong)(uint)puVar27[3];
          FUN_035683a4(*puVar27,uVar51,uVar53,uVar55,&stack0x000017b0,0x4000ffff,0);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar22 = *unaff_x28;
          if (lVar22 == 0) goto LAB_035574b8;
          uVar14 = *unaff_x20;
          if ((int)uVar14 < 1) {
            fStack00000000000000d4 = 0.0;
            iVar17 = 0;
            goto LAB_03556f00;
          }
          lVar22 = *(long *)(lVar22 + 0x38);
          fVar58 = ABS(fVar58);
          fVar50 = 1.0;
          if ((uVar49 & 1) == 0) {
            fVar50 = fVar58;
          }
          if (lVar22 == 0) goto LAB_035574b8;
          bVar12 = false;
          bVar11 = false;
          _iStack0000000000000128 = 0;
          bVar8 = false;
          fStack00000000000000d4 = 0.0;
          fStack0000000000000028 = 0.0;
          fStack0000000000000158 = 0.0;
          in_stack_00000068._4_4_ = 0;
          lVar26 = 0x2e0;
          fVar44 = 0.0;
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
          uVar18 = 1;
          uVar54 = 0;
          goto LAB_03554e78;
        }
        goto LAB_035574b8;
      }
      goto LAB_035575f4;
    }
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar49 = FUN_03586568();
  if (((uVar49 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, in_stack_000017dc = in_w11,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar30 = (long)(int)uVar14;
  cVar25 = *(char *)(lVar22 + lVar30 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar26 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar14) {
    in_w11 = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_w11 == 0x2026) {
      *(long *)(lVar22 + lVar30 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      *(long *)(lVar22 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      uVar14 = *unaff_x20;
      if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
      bVar8 = true;
      *(int *)(lVar22 + (long)(int)uVar14 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar14 + 1);
    }
    else if (in_w11 == 3) {
      if ((*unaff_x21 == 0) || (lVar35 = FUN_03568ac0(*unaff_x21,0), lVar35 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar35,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
      *(ulong *)(lVar22 + lVar30 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar14 = *(uint *)((long)unaff_x19 + 0x494);
      bVar8 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = false;
  }
  if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x324)) && (in_w11 != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar22 = lVar22 + (long)(int)uVar14 * (long)iVar17;
    *(undefined1 *)(lVar22 + 0x194) = 0;
    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
    *(undefined4 *)(lVar22 + 100) = 0;
    *unaff_x20 = uVar14 + 1;
    unaff_x28 = in_stack_00000170;
    in_stack_000017dc = in_w11;
    goto LAB_03550bd0;
  }
  iVar13 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar13 == 0) {
    uVar14 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar14 >> 4 & 1) == 0) {
      if ((uVar14 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar14 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar49 = FUN_026b812c(in_w11,0);
          if ((uVar49 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b8410(in_w11,0);
            in_w11 = uVar14 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b8070(in_w11,0);
        fStack0000000000000158 = 1.0;
        if ((uVar49 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b8594(in_w11,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b812c(in_w11,0);
      fStack0000000000000158 = 1.0;
      if ((uVar49 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8410(in_w11,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_w11 = uVar14 & 0xffff;
      }
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar13 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    unaff_x28 = in_stack_00000170;
    in_stack_000017dc = in_w11;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
    goto LAB_035574b8;
    uVar18 = *unaff_x20;
    uVar14 = *(uint *)(lVar22 + 0x18);
    if (uVar14 <= uVar18) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar22 + (long)(int)uVar18 * unaff_x24 + 0x58);
    if (bVar8) {
      lVar26 = unaff_x19[0x8f];
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar26 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar14 <= uVar18 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar60 = *(float *)(lVar22 + (long)(int)(uVar18 - 1) * (long)iVar17 + 0x60);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar22 = *unaff_x21;
    }
    else {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar60 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar22 = unaff_x19[0x20];
    }
    if (lVar22 == 0) goto LAB_035574b8;
    fVar52 = (float)FUN_03776960(lVar22 + 0x50,0);
    fVar50 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar50 = 1.0;
    }
    fVar63 = 0.0;
    fVar44 = 0.0;
    if (!(bool)(bVar8 & in_w11 == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar63 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar22 = unaff_x19[0xc9];
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_035574b8;
    fVar43 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar22 + 0x2c);
    fVar58 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar64 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar61 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar22 = unaff_x19[0x6d];
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar26 + 0x2c) = 0;
    fVar50 = ((fStack0000000000000158 * fVar60) / (float)iVar13) * fVar52 * fVar50;
    fVar58 = fVar50 * fVar43 * fVar45 * fVar58;
    *(float *)(lVar26 + 0x160) = fVar58;
    uVar14 = *(uint *)(unaff_x19 + 0x24);
    fVar46 = fVar50 * fVar64 * fVar61 * fVar46;
    if (uVar14 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar26 = unaff_x19[0xe1];
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar26 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar26 + 0x10c);
    }
LAB_035514b0:
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar60 = 0.0;
    if (in_w11 != 3 && in_w11 != 0xad) {
      fVar60 = fVar58;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar13 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar13 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar22 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar22 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar22,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar22 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_w11 == 0x3c) {
        in_w11 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar30 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar30 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar13 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar50 = (float)FUN_03776960(&stack0x00001720,0);
      fVar60 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar60 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar60 = (fVar58 / (float)iVar13) * fVar50 * fVar60;
      iVar13 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      if (iVar13 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar63 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar63 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar52 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar22 + 0x20),0);
        fVar43 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_035574b8;
        fVar64 = *(float *)(lVar22 + 0x2c);
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar61 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar67 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar46 = fVar60 * fVar61 * fVar67 * fVar46;
        fVar63 = (fVar58 / (float)iVar13) * fVar50 * fVar63;
        fVar58 = fVar63 * (fVar52 / fVar43) * fVar64 * fVar45;
        fVar63 = fVar63 / fVar58;
        fVar44 = fVar63 * fVar44;
        fVar60 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar63 = fVar63 * fVar60;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar50 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_035574b8;
        fVar63 = *(float *)(lVar22 + 0x2c);
        fVar52 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar52 = 1.0;
        }
        fVar43 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar64 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar46 = fVar60 * fVar45 * fVar64 * fVar46;
        fVar58 = (fVar58 / (float)iVar13) * fVar50 * fVar52 * fVar63 * fVar43;
        fVar63 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar22;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar22);
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar22 + 0x2c) = 1;
      *(float *)(lVar22 + 0x160) = fVar58;
      *(long *)(lVar22 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar22 = *in_stack_00000170;
      if ((lVar22 == 0) || (lVar30 = *(long *)(lVar22 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar26;
      goto LAB_035514b0;
    }
    lVar22 = *in_stack_00000170;
    fVar46 = 0.0;
    fVar60 = fVar46;
    if (in_w11 != 3 && in_w11 != 0xad) {
      fVar60 = fVar58;
    }
    if (lVar22 == 0) goto LAB_035574b8;
    fVar44 = 0.0;
    fVar63 = 0.0;
  }
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar22 + 0x20) = (short)in_w11;
  *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
  uVar20 = unaff_x29[1];
  uVar19 = *unaff_x29;
  lVar22 = lVar22 + (long)(int)uVar14 * unaff_x24;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar22 + 0x184) = uVar20;
  *(undefined8 *)(lVar22 + 0x17c) = uVar19;
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar22,0);
  puVar9 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x29[0x1df] = in_stack_00000c20;
  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
  if ((int)in_w11 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b63d8(in_w11,0);
    unaff_w27 = uVar14 & 1;
  }
  else {
    unaff_w27 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar52 = 0.0;
    fVar50 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar18 = *unaff_x20;
    uVar14 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar18 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar18 + 1) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar18 + 1) * (long)iVar17 + 0x30);
      if ((((lVar22 == 0) || (*unaff_x21 == 0)) ||
          (lVar26 = *(long *)(*unaff_x21 + 0x128), lVar26 == 0)) ||
         (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar14 | *(int *)(lVar22 + 0x28) << 0x10;
      uVar49 = FUN_0219f8b8(lVar26,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar66 = 0;
      if ((uVar49 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar52 = 0.0;
        fVar50 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar66 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar50 = *(float *)(in_stack_000016f8 + 0x14);
        fVar52 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar18 = *unaff_x20;
    }
    else {
      uVar66 = 0;
      fStack000000000000012c = 0.0;
      fVar52 = 0.0;
      fVar50 = 0.0;
    }
    if (0 < (int)uVar18) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar18 - 1) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + (ulong)(uVar18 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar22 == 0) || (*unaff_x21 == 0)) ||
         ((lVar26 = *(long *)(*unaff_x21 + 0x128), lVar26 == 0 ||
          (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar22 + 0x28) | uVar14 << 0x10;
      uVar49 = FUN_0219f8b8(lVar26,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar49 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar50 = (float)FUN_03571cb4(fVar50,fVar52,fStack000000000000012c,uVar66,
                                         *(undefined4 *)(in_stack_000016f8 + 0x28),
                                         *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016f8 + 0x30),
                                         *(undefined4 *)(in_stack_000016f8 + 0x34),0),
           in_stack_000016f8 == 0)) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar45 = *(float *)(unaff_x19 + 200);
    fVar43 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar45 = fVar45 - fVar60 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar45;
    if ((in_w11 == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar45 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar45 = *(float *)(unaff_x19 + 0x56);
  fVar43 = 0.0;
  if (fVar45 != 0.0) {
    fVar43 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar64 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar45 * 0.5 - fVar60 * (fVar43 * 0.5 + fVar64));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar43;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar25 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar22 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar49 = FUN_036cee6c(lVar22,0,0);
    fVar64 = 0.0;
    if ((uVar49 & 1) != 0) {
      lVar22 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar22 == 0) goto LAB_035574b8;
      uVar49 = FUN_03699d3c(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar64 = 0.0;
      if ((uVar49 & 1) != 0) {
        lVar22 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar22 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_0369e060(lVar22,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar61 = *(float *)(*unaff_x21 + 0x1b0);
        fVar64 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar64 = fVar64 * fVar45 * fVar61 * 0.25;
        if (fVar45 < fStack000000000000015c + fVar64) {
          fStack000000000000015c = fVar45 - fVar64;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar22 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar49 = FUN_036cee6c(lVar22,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar49 & 1) != 0) {
      lVar22 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar22 == 0) goto LAB_035574b8;
      uVar49 = FUN_03699d3c(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar49 & 1) != 0) {
        lVar22 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar22 == 0) goto LAB_035574b8;
        uVar49 = FUN_03699d3c(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar49 & 1) != 0) {
          lVar22 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar22 == 0) goto LAB_035574b8;
          fVar45 = (float)FUN_0369e060(lVar22,*(undefined4 *)
                                               (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar61 = *(float *)(*unaff_x21 + 0x1a8);
          fVar64 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
          fVar64 = fVar64 * fVar45 * fVar61 * 0.25;
          if (fVar45 < fStack000000000000015c + fVar64) {
            fStack000000000000015c = fVar45 - fVar64;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar64 = 0.0;
  }
FUN_03551b84:
  fVar45 = *(float *)(unaff_x19 + 200);
  fVar61 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar45 = fVar45 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar60 * (fVar50 + ((fVar61 - fStack000000000000015c) - fVar64));
  fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar67 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar46 + fVar60 * (fVar52 + fStack000000000000015c + fVar50)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar50 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar50 = fVar67 - fVar60 * (fStack000000000000015c + fStack000000000000015c + fVar50);
  fVar52 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar61 = fVar45 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar60 * (fVar64 + fVar64 +
                             fStack000000000000015c + fStack000000000000015c + fVar52);
  fStack0000000000000104 = fVar45;
  fVar52 = fVar61;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar25 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar59 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar52 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar57 = fVar59 * fVar60 * (fVar64 + fStack000000000000015c + fVar52);
    fVar52 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar56 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar67 = fVar67 + 0.0;
    fVar50 = fVar50 + 0.0;
    fVar59 = fVar59 * fVar60 * (((fVar52 - fVar56) - fStack000000000000015c) - fVar64);
    fVar56 = fVar45 + fVar57;
    fVar52 = fVar61 + fVar59;
    fVar47 = (fVar57 - fVar59) * 0.5;
    fVar45 = (fVar45 + fVar59) - fVar47;
    fVar61 = (fVar61 + fVar57) - fVar47;
    fStack0000000000000104 = fVar56 - fVar47;
    fVar52 = fVar52 - fVar47;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar47 = 0.0;
    fVar57 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar50;
    fVar56 = fVar67;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar62 = (fVar61 + fVar45) * 0.5;
    fVar65 = (fVar50 + fVar67) * 0.5;
    fVar67 = fVar67 - fVar65;
    fStack0000000000000100 = 0.0;
    fVar56 = fVar67;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar62,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar62 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar59 = fVar50 - fVar65;
    fStack0000000000000114 = 0.0;
    fVar50 = fVar59;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar62,_fStack0000000000000078,0);
    fVar45 = fVar62 + fVar45;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar50 = fVar65 + fVar50;
    fVar57 = 0.0;
    fVar61 = (float)FUN_036bdd2c(fVar61 - fVar62,_fStack0000000000000078,0);
    fVar61 = fVar62 + fVar61;
    fVar67 = fVar65 + fVar67;
    fVar57 = fVar57 + 0.0;
    fVar47 = 0.0;
    fVar52 = (float)FUN_036bdd2c(fVar52 - fVar62,_fStack0000000000000078,0);
    fVar52 = fVar62 + fVar52;
    fVar47 = fVar47 + 0.0;
    fVar59 = fVar65 + fVar59;
    fVar56 = fVar65 + fVar56;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar22 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar60;
  if (lVar22 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x11c) = fVar45;
  *(float *)(lVar22 + 0x120) = fVar50;
  *(float *)(lVar22 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x114) = fVar56;
  *(float *)(lVar22 + 0x110) = fStack0000000000000104;
  *(float *)(lVar22 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x128) = fVar61;
  *(float *)(lVar22 + 300) = fVar67;
  *(float *)(lVar22 + 0x130) = fVar57;
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x134) = fVar52;
  *(float *)(lVar22 + 0x138) = fVar59;
  *(float *)(lVar22 + 0x13c) = fVar47;
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  unaff_x26 = (long)(int)uVar14;
  if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar26 = lVar22 + unaff_x26 * unaff_x24;
  *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
  fVar67 = *(float *)(unaff_x19 + 0x9b);
  param_3 = (ulong)(uint)fVar67;
  fVar52 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar26 + 0x15c) = (fVar61 - fVar45) / (fVar56 - fVar50);
  *(float *)(lVar26 + 0x14c) = (fVar46 - fVar67) + fVar52;
  fVar44 = fVar44 * fVar60;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar44 = fVar44 / fStack0000000000000158;
    fVar63 = (fVar63 * fVar60) / fStack0000000000000158;
  }
  else {
    fVar63 = fVar63 * fVar60;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar14 == unaff_w22)) {
    fVar63 = fVar52 + fVar63;
    fVar44 = fVar52 + fVar44;
    fVar45 = fVar63;
    fVar50 = fVar44;
    if (fVar52 != 0.0) {
      fVar50 = (fVar44 - fVar52) / *(float *)((long)unaff_x19 + 0x404);
      fVar45 = (fVar63 - fVar52) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar50 <= fVar44) {
        fVar50 = fVar44;
      }
      if (fVar63 <= fVar45) {
        fVar45 = fVar63;
      }
    }
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    fVar52 = fVar50;
    if (fVar50 <= *(float *)(unaff_x19 + 0x99)) {
      fVar52 = *(float *)(unaff_x19 + 0x99);
    }
    fVar46 = fVar45;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar45) {
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar46;
    *(float *)(unaff_x19 + 0x99) = fVar52;
    *(float *)(lVar22 + 0x154) = fVar50;
    *(float *)(lVar22 + 0x158) = fVar45;
    *(float *)(lVar22 + 0x148) = fVar44 - fVar67;
    *(float *)(unaff_x19 + 0x98) = fVar44 - fVar67;
    *(float *)(lVar22 + 0x150) = fVar63 - fVar67;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar63 - fVar67;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar52;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar52 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar60 * fVar52) / fStack0000000000000158;
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar50 <= fStack0000000000000158) {
        fVar50 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar50;
    }
    if ((float)param_3 == 0.0) {
      fVar50 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar44) {
        fVar50 = fVar44;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar50;
    }
  }
  else {
    fVar50 = *(float *)(unaff_x19 + 0x99);
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    *(float *)(lVar22 + 0x154) = fVar50;
    fVar52 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar50 = fVar50 - fVar67;
    *(float *)(lVar22 + 0x148) = fVar50;
    *(float *)(lVar22 + 0x158) = fVar52;
    *(float *)(unaff_x19 + 0x98) = fVar50;
    fVar52 = fVar52 - fVar67;
    *(float *)(lVar22 + 0x150) = fVar52;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
  }
  lVar22 = *in_stack_00000170;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar18 = *unaff_x20;
  if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)uVar18 * unaff_x24;
  *(undefined1 *)(lVar26 + 0x194) = 0;
  uVar54 = *(uint *)(unaff_x19 + 0x4f);
  in_stack_000017dc = in_w11;
  if (((in_w11 == 9) ||
      ((((unaff_w27 == 0 && (in_w11 != 3)) && (in_w11 != 0x200b)) && (in_w11 != 0xad)))) ||
     (((in_w11 == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar26 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a0;
    pfVar32 = _fStack00000000000000a8;
    if (bVar8) {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar22 + 0x60);
      pfVar29 = (float *)(lVar22 + 100);
    }
    fVar52 = *pfVar32;
    fVar44 = *pfVar29;
    fVar50 = *(float *)(unaff_x19 + 0x6c);
    fVar63 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar52) - fVar44;
    bVar11 = true;
    if ((fVar50 <= in_stack_000000f8._4_4_) && (bVar11 = false, !NAN(fVar50))) {
      bVar11 = fVar50 == -1.0;
    }
    if (!bVar11) {
      in_stack_000000f8._4_4_ = fVar50;
    }
    fVar50 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar50 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_w11 != 0xad) {
      fVar58 = fVar60;
    }
    fVar67 = (float)param_3;
    fVar61 = 0.0;
    if ((0.0 < fVar67) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar61 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar18 = *unaff_x20;
    fVar61 = (*(float *)(unaff_x19 + 0x97) - (fVar46 - fVar67)) + fVar61;
    if (fStack00000000000000c4 < fVar61) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar19 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar56 = *(float *)(unaff_x19 + 0x59);
        if (((fVar56 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar67)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar61) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar58 <= fVar56) {
            fVar58 = fVar56;
          }
          goto LAB_03554b48;
        }
        fVar67 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar61 = *(float *)(unaff_x19 + 0x4a);
        param_3 = (ulong)(uint)fVar61;
        if ((fVar61 < fVar67) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = (fVar67 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar58 <= DAT_00d38b84) {
            fVar58 = DAT_00d38b84;
          }
          fVar60 = (fVar67 - fVar58) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar67;
          fVar58 = DAT_00d38e60;
          if (fVar60 != INFINITY) {
            fVar58 = (float)(int)fVar60 / 20.0;
          }
          if (fVar58 <= fVar61) {
            fVar58 = fVar61;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        lVar26 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = FUN_01a46ff8(lVar22);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
        iVar13 = FUN_0358c15c();
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
        if ((uVar18 == 0) || ((int)in_stack_000017a8 < 0)) {
          in_stack_000017a8 = 0xffffffff;
          *unaff_x20 = 0;
          in_stack_000017c8 = uVar19;
UnityEngine_AnimatorStateInfo__get_fullPathHash:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          unaff_x28 = in_stack_00000170;
          in_stack_000017dc = in_w11;
          goto LAB_03550bd0;
        }
        fVar58 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (fVar58 - fVar46 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_3 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar22 = NEON_rev64(param_3,4);
          unaff_x19[0x99] = lVar22;
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
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar49 = FUN_036cee6c(lVar22,0,0);
        if ((uVar49 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar22 = unaff_x19[0x5d];
          if (lVar22 == 0) goto LAB_035574b8;
          *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto UnityEngine_AnimationClip__get_hasMotionCurves;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar50 = ABS(fVar63) + fVar50 * (1.0 - fVar45) * fVar58;
    fVar58 = 1.0;
    if ((uVar54 & 0x18) != 0) {
      fVar58 = DAT_00d38acc;
    }
    fVar63 = fVar58 * in_stack_000000f8._4_4_;
    if (fVar63 < fVar50) {
      param_3 = (ulong)(uint)fVar64;
      if (((char)unaff_x19[0x5b] != '\0') && (uVar18 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar22 = *in_stack_00000170;
          if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar63 = *(float *)(unaff_x19 + 0x9b);
          fVar45 = 0.0;
          if ((0.0 < fVar63) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar45 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar45 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar22 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar22 == 0) goto LAB_035574b8;
          fVar63 = *(float *)(unaff_x19 + 0x9b);
          fVar45 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_035574b8;
        uVar5 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar22 + 0x18) <= uVar5) ||
           (uVar42 = uVar5 - 1, *(uint *)(lVar22 + 0x18) <= uVar42)) goto LAB_035575f4;
        param_3 = (ulong)(uint)(fVar45 + *(float *)(unaff_x19 + 0x97));
        fVar46 = (fVar45 + *(float *)(unaff_x19 + 0x97) + fVar63) -
                 *(float *)(lVar22 + (long)(int)uVar5 * unaff_x24 + 0x158);
        if (((bStack0000000000000074 & 1) == 0 &&
             *(short *)(lVar22 + (long)(int)uVar42 * (long)iVar17 + 0x20) == 0xad) &&
           ((fVar46 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack0000000000000074 = 0;
          in_stack_000017c8 = CONCAT44(0x2d,uVar42);
          *unaff_x20 = uVar42;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar22 + (long)(int)uVar5 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar63 <= fVar45) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
            param_3 = (ulong)(uint)fVar45;
            fVar63 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar45 <= fVar63) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_03552d44;
LAB_03557594:
            fVar58 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar58 <= DAT_00d38b84) {
              fVar58 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar45;
            fVar45 = fVar45 - fVar58;
LAB_03557524:
            fVar60 = fVar45 * 20.0 + 0.5;
            fVar58 = DAT_00d38e60;
            if (fVar60 != INFINITY) {
              fVar58 = (float)(int)fVar60 / 20.0;
            }
            if (fVar58 <= fVar63) {
              fVar58 = fVar63;
            }
LAB_03554658:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar58;
            return;
          }
LAB_03557558:
          fVar60 = fVar50;
          if (0.0 < fVar45) {
            fVar60 = fVar50 / (1.0 - fVar45);
          }
          fVar45 = fVar45 + (fVar50 - fVar58 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar60;
LAB_035574e8:
          if (fVar63 <= fVar45) {
            fVar45 = fVar63;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar45;
          return;
        }
LAB_03552d44:
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        iVar13 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
        if (((iVar13 != iStack0000000000000034) && (iVar13 != -1)) &&
           (((bStack0000000000000070 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
          goto LAB_035574b8;
          uVar5 = *unaff_x20 - 1;
          if (*(uint *)(lVar22 + 0x18) <= uVar5) goto LAB_035575f4;
          iStack0000000000000034 = iVar13;
          if (*(short *)(lVar22 + (long)(int)uVar5 * (long)iVar17 + 0x20) == 0xad) {
            bStack0000000000000074 = 0;
            in_stack_000017c8 = CONCAT44(0x2d,uVar5);
            *unaff_x20 = uVar5;
            unaff_x28 = in_stack_00000170;
            in_stack_000017a8 = in_stack_000017a8 - 1;
            goto LAB_03550bd0;
          }
        }
        if (fVar46 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
          param_3 = unaff_d13;
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
        fVar63 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar63 = *(float *)(unaff_x19 + 0x59);
          if ((fVar63 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar58 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar46) / (float)((int)unaff_x19[0x95] + 1)) /
                     fStack0000000000000058;
            if (fVar58 <= fVar63) {
              fVar58 = fVar63;
            }
LAB_03554b48:
            *(float *)((long)unaff_x19 + 700) = fVar58;
            return;
          }
          fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar45 < fVar63) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557558;
          fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
          param_3 = (ulong)(uint)fVar45;
          fVar63 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar63 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557594;
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          goto switchD_03552ef4_caseD_0;
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
          piVar21 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar21 == 0) {
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
          lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001008,&stack0x000008a0,0x378);
          iVar13 = FUN_0358c15c();
          bStack0000000000000074 = 0;
LAB_035529e8:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar15;
          in_stack_000017c8 = CONCAT44(0x2026,iVar15);
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = iVar13 - 1;
          goto LAB_03550bd0;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          bStack0000000000000074 = 0;
UnityEngine_AnimationClip__get_hasMotionCurves:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          in_stack_000017c8 = CONCAT44(3,uVar18);
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          param_3 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                       in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03552f38;
        case 6:
          lVar22 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar49 = FUN_036cee6c(lVar22,0,0);
          if ((uVar49 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5d];
            uVar19 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar41 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
            lVar22 = unaff_x19[0x5d];
            if (lVar22 == 0) goto LAB_035574b8;
            *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar41 = (long *)unaff_x19[0x5d];
            if (plVar41 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bStack0000000000000074 = 0;
LAB_03552b00:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        default:
          bStack0000000000000074 = 0;
          goto LAB_03552f54;
        }
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar45 < fVar63) {
          fVar60 = fVar50 / (1.0 - fVar45);
          if (fVar45 <= 0.0) {
            fVar60 = fVar50;
          }
          fVar45 = fVar45 + (fVar50 - fVar58 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar60;
          goto LAB_035574e8;
        }
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar63 = *(float *)(unaff_x19 + 0x4a);
        if (fVar63 < fVar45) {
          fVar58 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar58 <= DAT_00d38b84) {
            fVar58 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar45;
          fVar45 = fVar45 - fVar58;
          goto LAB_03557524;
        }
      }
      iVar13 = (int)unaff_x19[0x5c];
      if (iVar13 == 1) {
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        lVar26 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = FUN_01a46ff8(lVar22);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar13 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar49 = FUN_036cee6c(lVar22,0,0);
        if ((uVar49 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar22 = unaff_x19[0x5d];
          if (lVar22 == 0) goto LAB_035574b8;
          *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_03552b00;
      }
      if (iVar13 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_03552550;
      }
    }
LAB_03552f54:
    if (in_w11 == 0xad) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_w11 == 9) {
        lVar22 = *in_stack_00000170;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        uVar18 = *unaff_x20;
        if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_035575f4;
        *(undefined1 *)(lVar26 + (long)(int)uVar18 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar18;
        lVar26 = *(long *)(lVar22 + 0x50);
        if (lVar26 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar63,fVar64);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      }
      uVar18 = *unaff_x20;
      if ((in_stack_00000068._4_4_ & 1) != 0) {
        *(uint *)(in_stack_00000080 + 0x1f0) = uVar18;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar18;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x50), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar22 + 0x60) = fVar52;
      *(float *)(lVar22 + 100) = fVar44;
    }
  }
  else {
    if (((in_w11 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar50 = (float)param_3;
      fVar58 = 0.0;
      if ((0.0 < fVar50) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_3 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar50)) + fVar58)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar49 = FUN_036cee6c(lVar22,0,0);
        if ((uVar49 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar22 = unaff_x19[0x5d];
          if (lVar22 == 0) goto LAB_035574b8;
          *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      }
    }
    if ((((in_w11 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_w11 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (in_w11 - 10 < 2)) ||
       (in_w11 == 0xa0)) {
LAB_03552b54:
      if (((in_w11 != 0xad) && (in_w11 != 0x200b)) && (in_w11 != 0x2060)) {
        lVar22 = *in_stack_00000170;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b97f8(in_w11,0);
      if ((uVar49 & 1) != 0) goto LAB_03552b54;
    }
    if (in_w11 == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x50), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    }
  }
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_w11 == 0x2d || (!bVar8)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar58 = *(float *)(unaff_x19 + 0x3d);
    iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar52 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar22 = unaff_x19[0xca];
    fVar50 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar50 = 1.0;
    }
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_035574b8;
    fVar63 = *(float *)((long)unaff_x19 + 0x404);
    fVar64 = *(float *)(lVar22 + 0x2c);
    fVar44 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
    fVar45 = *_fStack00000000000000a8;
    fVar44 = fVar63 * (fVar58 / (float)iVar13) * fVar52 * fVar50 * fVar64 * fVar44;
    fVar58 = *_fStack00000000000000a0;
    if ((in_w11 == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      uVar18 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar50 = *(float *)(lVar22 + (long)(int)uVar18 * (long)iVar17 + 0x60);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar63 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar22 = unaff_x19[0xca];
      fVar52 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar52 = 1.0;
      }
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_035574b8;
      fVar64 = *(float *)((long)unaff_x19 + 0x404);
      fVar46 = *(float *)(lVar22 + 0x2c);
      fVar44 = (float)FUN_03776ea8(*(long *)(lVar22 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x50), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar45 = *(float *)(lVar22 + 0x60);
      fVar58 = *(float *)(lVar22 + 100);
      fVar44 = fVar64 * (fVar50 / (float)iVar13) * fVar63 * fVar52 * fVar46 * fVar44;
    }
    fVar63 = *(float *)(unaff_x19 + 0x9b);
    fVar50 = 0.0;
    fVar52 = 0.0;
    if ((0.0 < fVar63) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar46 = *(float *)(unaff_x19 + 0x97);
    fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar64 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar22 = *(long *)(unaff_x19[0xca] + 0x20), lVar22 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar22,0);
      fVar50 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar67 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = (fStack000000000000009c - fVar45) - fVar58;
    bVar11 = true;
    if ((fVar67 <= fVar58) && (bVar11 = false, !NAN(fVar67))) {
      bVar11 = fVar67 == -1.0;
    }
    if (!bVar11) {
      fVar58 = fVar67;
    }
    fVar45 = 1.0;
    if ((uVar54 & 0x18) != 0) {
      fVar45 = DAT_00d38acc;
    }
    if (((fVar46 - (fVar61 - fVar63)) + fVar52 < fStack00000000000000c4) &&
       (ABS(fVar64) + fVar44 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar45 * fVar58)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar22 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar22 + 0x788),0x378);
      FUN_0209b210(lVar22 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar22 = *in_stack_00000170;
  if (lVar22 == 0) goto LAB_035574b8;
  lVar26 = *(long *)(lVar22 + 0x38);
  unaff_d13 = (ulong)(uint)fVar60;
  if (lVar26 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar18 = *(uint *)(unaff_x19 + 0x95);
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar26 + 100) = uVar18;
  *(int *)(lVar26 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar8) || ((in_w11 < 0xe && ((1 << (ulong)(in_w11 & 0x1f) & 0x2c00U) != 0)))) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_035575f4;
    if (*(int *)(lVar22 + (long)(int)uVar18 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_035575f4;
    *(int *)(lVar22 + (long)(int)uVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_w11 == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar58 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar52 = *(float *)(unaff_x19 + 200);
    fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar60 = fVar60 * fVar58 * fVar50;
    fVar50 = fVar60 * (float)(int)(fVar52 / fVar60);
    param_3 = (ulong)(uint)fVar50;
    if (fVar50 <= fVar52) {
      fVar50 = fVar52 + fVar60;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar50;
  }
  else {
    if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar58 = 1.0;
        }
        else {
          fVar58 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar50 = *(float *)(unaff_x19 + 200);
        fVar52 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar44 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
        fVar50 = fVar50 + fVar44 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fVar60 * (fStack000000000000012c + fVar58 * fVar52) +
                                   fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
        *(float *)(unaff_x19 + 200) = fVar50;
        if (in_w11 != 0x200b) goto LAB_03553664;
        goto LAB_03553668;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar60 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      param_3 = (ulong)(uint)fVar50;
      fVar50 = *(float *)(unaff_x19 + 200) - fVar50;
      *(float *)(unaff_x19 + 200) = fVar50;
      if ((in_w11 != 0x200b) && (unaff_w27 == 0)) goto LAB_0355367c;
      fVar58 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar58;
      fVar50 = fVar50 - fVar58;
      goto LAB_03553678;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar44 = *(float *)(unaff_x19 + 200);
    fVar50 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar43) +
                      fStack00000000000000d4 * (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 200) = fVar50;
    if (in_w11 == 0x200b) {
LAB_03553668:
      fVar58 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar58;
      fVar50 = fVar50 + fVar58;
      goto LAB_03553678;
    }
LAB_03553664:
    param_3 = (ulong)(uint)fVar44;
    if (unaff_w27 != 0) goto LAB_03553668;
  }
LAB_0355367c:
  param_1 = *in_stack_00000170;
  if ((param_1 == 0) || (in_x9 = *(long *)(param_1 + 0x38), in_x9 == 0)) goto LAB_035574b8;
  uVar54 = *unaff_x20;
  in_x10 = *(undefined8 *)(in_x9 + 0x18);
  uVar18 = (uint)in_x10;
  if (uVar18 <= uVar54) goto LAB_035575f4;
  *(float *)(in_x9 + (long)(int)uVar54 * unaff_x24 + 0x144) = fVar50;
  if ((int)in_w11 < 0xd) {
    unaff_x28 = in_stack_00000170;
    if ((in_w11 - 10 < 2) || (in_w11 == 3)) goto LAB_0355371c;
  }
  else {
    unaff_x28 = in_stack_00000170;
    if (in_w11 - 0x2028 < 2) goto LAB_0355371c;
    if (in_w11 == 0xd) {
      param_3 = 0;
      in_ZR = (float)uVar54 == in_stack_00000088._4_4_;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      goto code_r0x035536f8;
    }
  }
  unaff_x28 = in_stack_00000170;
  if (((bool)(bVar8 & in_w11 == 0x2d)) || ((float)uVar54 == in_stack_00000088._4_4_))
  goto LAB_0355371c;
LAB_03553c8c:
  uVar54 = *unaff_x20;
  if (uVar18 <= uVar54) goto LAB_035575f4;
  if (*(char *)(in_x9 + (long)(int)uVar54 * unaff_x24 + 0x194) != '\0') {
    lVar22 = in_x9 + (long)(int)uVar54 * unaff_x24;
    uVar51 = *(ulong *)(lVar22 + 0x11c);
    uVar49 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar49 ^ (uVar49 ^ uVar51) &
                  ~CONCAT44(-(uint)((float)(uVar49 >> 0x20) < (float)(uVar51 >> 0x20)),
                            -(uint)((float)uVar49 < (float)uVar51));
    uVar49 = *(ulong *)(in_stack_00000080 + 0x238);
    param_3 = *(ulong *)(lVar22 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar49 ^ (uVar49 ^ param_3) &
                  ~CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar49 >> 0x20)),
                            -(uint)((float)param_3 < (float)uVar49));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < in_w11 || ((1 << (ulong)(in_w11 & 0x1f) & 0x2c00U) == 0)))) {
    lVar22 = *(long *)(param_1 + 0x58);
    if (lVar22 == 0) goto LAB_035574b8;
    iVar13 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar22 + 0x18) < iVar13) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(param_1 + 0x58),iVar13,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      param_1 = *unaff_x28;
      if (param_1 == 0) goto LAB_035574b8;
    }
    lVar22 = *(long *)(param_1 + 0x58);
    if (lVar22 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(unaff_x19 + 0x96);
    lVar26 = (long)(int)uVar54;
    uVar18 = *(uint *)(lVar22 + 0x18);
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    if (uVar18 <= uVar54) goto LAB_035575f4;
    lVar30 = lVar22 + lVar26 * 0x14;
    fVar60 = *(float *)(lVar30 + 0x30);
    param_3 = (ulong)(uint)fVar60;
    *(undefined4 *)(lVar30 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar60 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar58 = fVar60;
    }
    *(float *)(lVar30 + 0x30) = fVar58;
    uVar5 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar5 == 0 && uVar54 == 0) {
      *(uint *)(lVar22 + (ulong)uVar54 * 0x14 + 0x20) = uVar5;
    }
    else {
      uVar42 = uVar5 - 1;
      if (0 < (int)uVar5) {
        lVar30 = *(long *)(param_1 + 0x38);
        if (lVar30 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= uVar42) goto LAB_035575f4;
        if (uVar54 != *(uint *)(lVar30 + (ulong)uVar42 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar18 <= uVar54 - 1) goto LAB_035575f4;
          *(uint *)(lVar22 + 0x20 + (long)(int)(uVar54 - 1) * 0x14 + 4) = uVar42;
          *(uint *)(lVar22 + 0x20 + lVar26 * 0x14) = uVar5;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar5 == in_stack_00000088._4_4_) {
        *(float *)(lVar22 + lVar26 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((unaff_w27 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
         (0x1d < in_stack_000017dc - 0xa961)) || (uVar49 = FUN_03597a54(0), (uVar49 & 1) != 0)) &&
       ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
         (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
    goto LAB_03553f78;
    lVar22 = FUN_035978e8(0);
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_035574b8;
    uVar18 = FUN_0219c130(*(long *)(lVar22 + 0x10),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
      in_stack_000008a0 = in_stack_000017dc;
      if ((uVar18 & 1) == 0) {
LAB_03554270:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_035542a8;
      }
LAB_035541dc:
      if (uVar14 != unaff_w22 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (unaff_w27 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar22 = FUN_035978e8(0);
    if (((lVar22 == 0) || (*unaff_x28 == 0)) || (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)
       ) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar26 + (long)(int)(*unaff_x20 + 1) * (long)iVar17 + 0x20);
    uVar49 = FUN_0219c130(*(long *)(lVar22 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar18 & 1) != 0) goto LAB_035541dc;
    if ((uVar49 & 1) == 0) goto LAB_03554270;
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
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_000017dc - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017dc != 0xa0 && (in_stack_000017dc != 0x2060)))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_035542ac;
      }
      goto LAB_03553ef0;
    }
LAB_03553f78:
    if ((bStack0000000000000070 & 1) == 0) {
LAB_035542a8:
      bStack0000000000000070 = 0;
      goto LAB_035542ac;
    }
    if (unaff_w27 == 0) {
UnityEngine_Animator__set_animatePhysics:
      if ((bStack0000000000000074 & 1) == 0 && in_stack_000017dc == 0xad)
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    else {
UnityEngine_Animator__get_bodyPositionInternal:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
LAB_0355422c:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  bStack0000000000000070 = 1;
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_03550bd0;
LAB_03554e78:
  uVar14 = uVar18 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar30 = *(long *)(*unaff_x28 + 0x50), lVar30 == 0)) goto LAB_035574b8;
  lVar40 = (long)(int)uVar14;
  lVar35 = lVar22 + lVar40 * 0x178;
  uVar5 = *(uint *)(lVar35 + 100);
  if (*(uint *)(lVar30 + 0x18) <= uVar5) goto LAB_035575f4;
  lVar38 = (long)(int)uVar5;
  lVar30 = lVar30 + lVar38 * 0x5c;
  lVar33 = *(long *)(lVar35 + 0x38);
  uVar3 = *(ushort *)(lVar35 + 0x20);
  uVar6 = *(uint *)(lVar30 + 0x3c);
  uVar42 = *(uint *)(lVar30 + 0x68);
  iVar2 = *(int *)(lVar30 + 0x20);
  iVar15 = *(int *)(lVar30 + 0x28);
  iVar16 = *(int *)(lVar30 + 0x2c);
  uVar7 = *(uint *)(lVar30 + 0x40);
  lVar35 = (long)(int)uVar7;
  fVar45 = *(float *)(lVar30 + 0x4c);
  fVar46 = *(float *)(lVar30 + 0x54);
  fVar63 = *(float *)(lVar30 + 0x58);
  fVar56 = *(float *)(lVar30 + 0x5c);
  fVar61 = *(float *)(lVar30 + 0x60);
  fVar67 = *(float *)(lVar30 + 0x6c);
  fVar59 = *(float *)(lVar30 + 0x70);
  fVar43 = *(float *)(lVar30 + 0x74);
  fVar64 = *(float *)(lVar30 + 0x78);
  uVar37 = (uint)uVar3;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar61 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar63;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar61 + fVar56 * 0.5) - fVar63 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar56 + fVar61) - fVar63;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar56 + fVar61;
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
      if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar22 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b8cc4(uVar4,0);
      if ((uVar49 & 1) == 0) {
        bVar1 = (int)uVar5 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar63 <= fVar56) && (!bVar1 && uVar42 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar61;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar56 + fVar61;
        }
        goto LAB_03555088;
      }
      if (((uVar18 == 1) || (uVar5 != uVar54)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar61;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar56 + fVar61;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar37,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar25 = (char)unaff_x19[0x1e];
        fVar61 = -fVar63;
        if (cVar25 != '\0') {
          fVar61 = fVar63;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar22 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar63 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar63 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar37 == 9) {
LAB_03556e74:
          fVar63 = 1.0 - fVar63;
        }
        else {
          if (uVar37 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar49 = FUN_026b97f8(uVar37,0);
            cVar25 = (char)unaff_x19[0x1e];
            if ((uVar49 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar63 = ((fVar56 + fVar61) * fVar63) / (float)iVar16;
        if (cVar25 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar63;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar63;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar63 = fVar67 + fVar43;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar42 <= uVar14) goto LAB_035575f4;
  lVar30 = lVar22 + lVar40 * 0x178;
  fVar56 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar63 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar61 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar30 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar22 + lVar40 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar44 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar5,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar28 = lVar22 + lVar40 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar44 = 1.0;
    break;
  case 1:
    fVar64 = *(float *)(lVar22 + lVar40 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar28 = lVar22 + lVar40 * 0x178;
      fVar43 = (in_stack_000000f8._4_4_ + fVar64) - *(float *)(in_stack_00000080 + 0x230);
      fVar64 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar28 = lVar22 + lVar40 * 0x178;
    fVar43 = fVar43 - fVar67;
    *(float *)(lVar28 + 0x84) = fVar44 + (fVar64 - fVar67) / fVar43;
    *(float *)(lVar28 + 0xac) = fVar44 + (*(float *)(lVar28 + 0x98) - fVar67) / fVar43;
    *(float *)(lVar28 + 0xd4) = fVar44 + (*(float *)(lVar28 + 0xc0) - fVar67) / fVar43;
    fVar44 = fVar44 + (*(float *)(lVar28 + 0xe8) - fVar67) / fVar43;
    break;
  case 2:
    lVar28 = lVar22 + lVar40 * 0x178;
    fVar64 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar43 = (in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar28 + 0x84) = fVar44 + fVar43 / fVar64;
    *(float *)(lVar28 + 0xac) =
         fVar44 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar28 + 0xd4) =
         fVar44 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar44 = fVar44 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar28 = lVar22 + lVar40 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar22 + lVar40 * 0x178;
      fVar64 = fVar64 - fVar59;
      fVar43 = fVar44 + (*(float *)(lVar28 + 0x74) - fVar59) / fVar64;
      fVar64 = fVar44 + (*(float *)(lVar28 + 0x9c) - fVar59) / fVar64;
      *(float *)(lVar28 + 0x88) = fVar43;
      *(float *)(lVar28 + 0xb0) = fVar64;
      *(float *)(lVar28 + 0xd8) = fVar43;
      *(float *)(lVar28 + 0x100) = fVar64;
      break;
    case 2:
      lVar28 = lVar22 + lVar40 * 0x178;
      fVar43 = fVar44 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar28 + 0x88) = fVar43;
      fVar64 = *(float *)(unaff_x19 + 0x9c);
      fVar67 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar28 + 0xd8) = fVar43;
      fVar43 = fVar44 + (*(float *)(lVar28 + 0x9c) - fVar64) / (fVar67 - fVar64);
      *(float *)(lVar28 + 0xb0) = fVar43;
      *(float *)(lVar28 + 0x100) = fVar43;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar22 + lVar40 * 0x178;
    fVar43 = *(float *)(lVar28 + 0x15c);
    fVar64 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar43) * 0.5;
    fVar67 = fVar44 + *(float *)(lVar28 + 0x88) * fVar43 + fVar64;
    fVar44 = fVar44 + fVar64 + *(float *)(lVar28 + 0xb0) * fVar43;
    *(float *)(lVar28 + 0x84) = fVar67;
    *(float *)(lVar28 + 0xac) = fVar67;
    *(float *)(lVar28 + 0xd4) = fVar44;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar22 + lVar40 * 0x178 + 0xfc) = fVar44;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar22 + lVar40 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar14 < uVar42) {
      lVar28 = lVar22 + lVar40 * 0x178;
      fVar45 = fVar45 - fVar46;
      fVar44 = (*(float *)(lVar28 + 0x74) - fVar46) / fVar45;
      fVar45 = (*(float *)(lVar28 + 0x9c) - fVar46) / fVar45;
      *(float *)(lVar28 + 0x88) = fVar44;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar22 + lVar40 * 0x178;
    fVar44 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar28 + 0x88) = fVar44;
    fVar45 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar28 + 0xb0) = fVar45;
    *(float *)(lVar28 + 0xd8) = fVar45;
    *(float *)(lVar28 + 0x100) = fVar44;
    break;
  case 3:
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar22 + lVar40 * 0x178;
    fVar45 = *(float *)(lVar28 + 0x15c);
    fVar43 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar45) * 0.5;
    fVar44 = *(float *)(lVar28 + 0x84) / fVar45 + fVar43;
    fVar43 = fVar43 + *(float *)(lVar28 + 0xd4) / fVar45;
    *(float *)(lVar28 + 0x88) = fVar44;
    *(float *)(lVar28 + 0xb0) = fVar43;
    *(float *)(lVar28 + 0x100) = fVar44;
    *(float *)(lVar28 + 0xd8) = fVar43;
  }
  if (uVar42 <= uVar14) goto LAB_035575f4;
  lVar28 = lVar22 + lVar40 * 0x178;
  fVar44 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar40 * 0x178 + 400) & 1) != 0)) {
    fVar44 = -fVar44;
  }
  fVar43 = fVar58;
  if (((iVar13 == 2) || (fVar43 = fVar50, iVar13 == 1)) || (fVar43 = fVar58 / fVar60, iVar13 == 0))
  {
    fVar44 = fVar43 * fVar44;
  }
  lVar28 = lVar22 + lVar40 * 0x178;
  fVar45 = *(float *)(lVar28 + 0x88);
  fVar64 = *(float *)(lVar28 + 0x84);
  fVar43 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar43 = (float)(int)fVar64;
  }
  fVar67 = *(float *)(lVar28 + 0xd4);
  fVar59 = *(float *)(lVar28 + 0xd8);
  fVar46 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar46 = (float)(int)fVar45;
  }
  uVar48 = FUN_03591d3c(fVar64 - fVar43,fVar45 - fVar46);
  *(undefined4 *)(lVar28 + 0x84) = uVar48;
  if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar59 = fVar59 - fVar46;
  *(float *)(lVar28 + 0x88) = fVar44;
  uVar48 = FUN_03591d3c(fVar64 - fVar43,fVar59);
  *(undefined4 *)(lVar22 + lVar40 * 0x178 + 0xac) = uVar48;
  if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar67 = fVar67 - fVar43;
  *(float *)(lVar22 + lVar40 * 0x178 + 0xb0) = fVar44;
  fVar43 = (float)FUN_03591d3c(fVar67,fVar59);
  *(float *)(lVar28 + 0xd4) = fVar43;
  if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_035575f4;
  *(float *)(lVar28 + 0xd8) = fVar44;
  uVar48 = FUN_03591d3c(fVar67,fVar45 - fVar46);
  *(undefined4 *)(lVar22 + lVar40 * 0x178 + 0xfc) = uVar48;
  uVar42 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar42 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar22 + lVar40 * 0x178 + 0x100) = fVar44;
LAB_0355574c:
  if (((int)uVar14 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar5 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar14) goto LAB_035575f4;
      lVar30 = lVar22 + lVar40 * 0x178;
      *(ulong *)(lVar30 + 0x70) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar30 + 0x70));
      *(float *)(lVar30 + 0x78) = fVar61 + *(float *)(lVar30 + 0x78);
      *(ulong *)(lVar30 + 0x98) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar30 + 0x98));
      *(float *)(lVar30 + 0xa0) = fVar61 + *(float *)(lVar30 + 0xa0);
      *(ulong *)(lVar30 + 0xc0) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar30 + 0xc0));
      *(float *)(lVar30 + 200) = fVar61 + *(float *)(lVar30 + 200);
      *(ulong *)(lVar30 + 0xe8) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar30 + 0xe8));
      *(float *)(lVar30 + 0xf0) = fVar61 + *(float *)(lVar30 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar5 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar14 < uVar42) {
        if (*(uint *)(lVar22 + lVar40 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar30 = lVar22 + lVar40 * 0x178;
          *(ulong *)(lVar30 + 0x70) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar30 + 0x70));
          *(float *)(lVar30 + 0x78) = fVar61 + *(float *)(lVar30 + 0x78);
          *(ulong *)(lVar30 + 0x98) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar30 + 0x98));
          *(float *)(lVar30 + 0xa0) = fVar61 + *(float *)(lVar30 + 0xa0);
          *(ulong *)(lVar30 + 0xc0) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar30 + 0xc0));
          *(float *)(lVar30 + 200) = fVar61 + *(float *)(lVar30 + 200);
          *(ulong *)(lVar30 + 0xe8) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar30 + 0xe8));
          *(float *)(lVar30 + 0xf0) = fVar61 + *(float *)(lVar30 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar42 <= uVar14) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar42 = *(uint *)(lVar22 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar28 = lVar22 + lVar40 * 0x178;
  *(undefined8 *)(lVar28 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar28 + 0x78) = uVar48;
  if (uVar42 <= uVar14) goto LAB_035575f4;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar28 = lVar22 + lVar40 * 0x178;
  *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar28 + 0xa0) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar28 + 200) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar28 + 0xf0) = uVar48;
  *(undefined1 *)(lVar30 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar31)();
  }
  else if (iVar15 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar30 = lVar30 + lVar40 * 0x178;
  uVar19 = *(undefined8 *)(lVar30 + 0x11c);
  *(undefined8 *)(lVar30 + 0x11c) =
       CONCAT44(fVar63 + (float)((ulong)uVar19 >> 0x20),fVar56 + (float)uVar19);
  *(float *)(lVar30 + 0x124) = fVar61 + *(float *)(lVar30 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar30 = lVar30 + lVar40 * 0x178;
  *(ulong *)(lVar30 + 0x110) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0x110) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar30 + 0x110));
  *(float *)(lVar30 + 0x118) = fVar61 + *(float *)(lVar30 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar30 = lVar30 + lVar40 * 0x178;
  *(ulong *)(lVar30 + 0x128) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar30 + 0x128) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar30 + 0x128));
  *(float *)(lVar30 + 0x130) = fVar61 + *(float *)(lVar30 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar30 = lVar30 + lVar40 * 0x178;
  *(float *)(lVar30 + 0x134) = fVar56 + *(float *)(lVar30 + 0x134);
  *(ulong *)(lVar30 + 0x138) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar30 + 0x138) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar30 + 0x138));
  lVar30 = *in_stack_00000170;
  if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar42 = *(uint *)(lVar28 + 0x18);
  if (uVar42 <= uVar14) goto LAB_035575f4;
  lVar34 = lVar28 + lVar40 * 0x178;
  uVar51 = CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar43 = fVar63 + *(float *)(lVar34 + 0x150);
  uVar53 = (ulong)(uint)fVar43;
  uVar55 = CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar43;
  *(ulong *)(lVar34 + 0x140) = uVar51;
  *(ulong *)(lVar34 + 0x148) = uVar55;
  if (uVar5 == uVar54) {
    uVar54 = *unaff_x20 - 1;
    if (uVar14 == uVar54) goto LAB_03555b44;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar34 = (long)(int)uVar54;
    lVar36 = lVar30 + lVar34 * 0x5c;
    uVar55 = (ulong)(uint)*(float *)(lVar36 + 0x58);
    fVar43 = fVar63 + *(float *)(lVar36 + 0x54);
    uVar51 = (ulong)(uint)fVar43;
    fVar45 = fVar56 + *(float *)(lVar36 + 0x58);
    uVar53 = (ulong)(uint)fVar45;
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar43;
    *(float *)(lVar36 + 0x58) = fVar45;
    if (uVar42 <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
    uVar48 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar30 = lVar30 + lVar34 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar43;
    *(undefined4 *)(lVar30 + 0x6c) = uVar48;
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar28 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar30 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar28 = lVar28 + lVar34 * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar54 * 0x178 + 0x128);
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    uVar54 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar14 == uVar54) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar5) goto LAB_035575f4;
      lVar34 = lVar28 + lVar38 * 0x5c;
      uVar55 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar51 = CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar63 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar43 = fVar63 + *(float *)(lVar34 + 0x54);
      fVar56 = fVar56 + *(float *)(lVar34 + 0x58);
      uVar53 = (ulong)(uint)fVar56;
      *(ulong *)(lVar34 + 0x4c) = uVar51;
      *(float *)(lVar34 + 0x54) = fVar43;
      *(float *)(lVar34 + 0x58) = fVar56;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar48 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar28 = lVar28 + lVar38 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar43;
      *(undefined4 *)(lVar28 + 0x6c) = uVar48;
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar5) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar28 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar30 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar28 = lVar28 + lVar38 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar54 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar49 = FUN_026b82c4(uVar37,0);
  if (((((uVar49 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
    if (bVar11) {
      if (((uVar18 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar14 < (int)*unaff_x20 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar22 + lVar26 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b82c4(uVar4,0);
        if ((uVar49 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar22 + lVar26 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar49 = FUN_026b82c4(uVar4,0);
          if ((uVar49 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar18 != 1) {
LAB_0355686c:
        bVar11 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b81f8(uVar37,0);
      if ((uVar49 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b63d8(uVar37,0);
        if (((uVar37 != 0x200b) && ((uVar49 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar14 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b82c4(uVar37,0);
      iVar15 = iStack0000000000000128;
      if ((uVar49 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar18 - 2;
    }
    lVar30 = *in_stack_00000170;
    if (lVar30 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar30 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar30 + 0x24);
    iVar16 = *(int *)(lVar28 + 0x18);
    if (iVar16 < (int)(uVar54 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar30 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
    }
    lVar30 = *(long *)(lVar30 + 0x40);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)uVar54 * 0x18;
    *(long **)(lVar30 + 0x20) = unaff_x19;
    *(float *)(lVar30 + 0x28) = fStack0000000000000158;
    *(int *)(lVar30 + 0x2c) = iVar15;
    *(int *)(lVar30 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar30 = unaff_x19[0x6d];
    if (lVar30 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar30 + 0x50);
    *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar5) goto LAB_035575f4;
    lVar28 = lVar28 + lVar38 * 0x5c;
    bVar11 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
  }
  else {
    if (!bVar11) {
      fStack0000000000000158 = (float)uVar14;
    }
    if (uVar14 == *unaff_x20 - 1) {
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar30 + 0x40);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar30 + 0x24);
      iVar15 = *(int *)(lVar28 + 0x18);
      if (iVar15 < (int)(uVar54 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar30 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x40);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar30 = lVar30 + (long)(int)uVar54 * 0x18;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      *(float *)(lVar30 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar30 + 0x2c) = uVar14;
      *(uint *)(lVar30 + 0x30) = uVar18 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar30 = unaff_x19[0x6d];
      if (lVar30 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar5) goto LAB_035575f4;
      lVar28 = lVar28 + lVar38 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
LAB_03555d68:
    bVar11 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar54 = *(uint *)(lVar30 + 0x18);
  if (uVar54 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar40 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar12) {
LAB_03555da0:
      if (uVar54 <= uVar18 - 2) goto LAB_035575f4;
      lVar38 = *unaff_x19;
      uVar54 = *(uint *)(lVar30 + lVar26 + -0x330);
      uVar48 = *(undefined4 *)(lVar30 + lVar26 + -0x2f8);
LAB_035562ec:
      pcVar31 = *(code **)(lVar38 + 0x8d8);
LAB_035562f4:
      uVar55 = (ulong)uVar54;
      uVar51 = (ulong)(uint)_bStack0000000000000070;
      uVar53 = (ulong)_bStack0000000000000074;
      (*pcVar31)(fStack0000000000000078,uVar51,uVar53,uVar55,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar48);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar30 = *(long *)puVar9;
      }
LAB_03556348:
      bVar12 = false;
      fVar52 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar12 = false;
    }
  }
  else {
    lVar30 = lVar30 + lVar40 * 0x178;
    iVar15 = *(int *)(lVar30 + 0x68);
    *(int *)(lVar30 + 0x16c) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar5)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar49 = FUN_026b63d8(uVar37,0);
    if ((uVar37 != 0x200b) && ((uVar49 & 1) == 0)) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar38 = *(long *)(lVar30 + 0x38), lVar38 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_035575f4;
      fVar43 = *(float *)(lVar38 + lVar40 * 0x178 + 0x160);
      if (fVar52 <= fVar43) {
        fVar52 = fVar43;
      }
      if (fStack0000000000000100 <= ABS(fVar44)) {
        fStack0000000000000100 = ABS(fVar44);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar30 = *in_stack_00000170;
          if (lVar30 == 0) goto LAB_035574b8;
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar38 + 0x15a8);
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar45 = *(float *)(lVar30 + lVar40 * 0x178 + 0x14c);
      fVar43 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar45 = fVar45 + fVar52 * fVar43;
      if (fVar45 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar45;
      }
      uVar51 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar12) {
      bVar12 = false;
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar14)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar14 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b97f8(uVar37,0);
        if ((uVar49 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar30 = lVar30 + lVar40 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar30 + 0x160);
      fStack0000000000000078 = *(float *)(lVar30 + 0x11c);
      uVar53 = (ulong)(uint)fStack0000000000000078;
      bVar12 = fVar52 != 0.0;
      fVar43 = in_stack_00000088._4_4_;
      if (bVar12) {
        fVar43 = fVar52;
      }
      fVar52 = fVar43;
      uVar66 = *(undefined4 *)(lVar30 + 0x168);
      _bStack0000000000000074 = 0;
      fVar43 = fVar44;
      if (bVar12) {
        fVar43 = fStack0000000000000100;
      }
      uVar51 = (ulong)(uint)fVar43;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar43;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar14 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar40 * 0x178;
          lVar38 = *unaff_x19;
          uVar54 = *(uint *)(lVar30 + 0x128);
          uVar48 = *(undefined4 *)(lVar30 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar14 == uVar6) || ((int)uVar7 <= (int)uVar14)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        lVar38 = lVar40;
        uVar54 = uVar14;
        if (uVar37 == 0x200b || (uVar49 & 1) != 0) {
          lVar38 = lVar35;
          uVar54 = uVar7;
        }
        if (uVar54 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar38 * 0x178;
          uVar54 = *(uint *)(lVar30 + 0x128);
          uVar48 = *(undefined4 *)(lVar30 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        uVar54 = *(uint *)(lVar30 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_035575f4;
      uVar49 = FUN_03567ad8(uVar66,*(undefined4 *)(lVar30 + lVar26),0);
      if ((uVar49 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0)) {
          if (uVar14 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar40 * 0x178;
            uVar55 = (ulong)*(uint *)(lVar30 + 0x128);
            uVar53 = (ulong)_bStack0000000000000074;
            uVar51 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar51,uVar53,uVar55,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar30 + 0x160));
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar30 = *(long *)puVar9;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar12 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar54 = *(uint *)(lVar30 + lVar40 * 0x178 + 400);
  fVar43 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar54 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
      uVar54 = *(uint *)(lVar30 + lVar26 + -0x330);
      fVar63 = *(float *)(lVar30 + lVar26 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar55 = (ulong)uVar54;
      uVar51 = (ulong)(uint)fStack000000000000009c;
      uVar53 = (ulong)(uint)fStack0000000000000098;
      (*pcVar31)(fStack00000000000000a0,uVar51,uVar53,uVar55,
                 fStack00000000000000a8 * fVar43 + fVar63,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar38 = *(long *)(lVar30 + 0x38), lVar38 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar38 + lVar40 * 0x178 + 0x174) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar5)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar38 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar14)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar14 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b97f8(uVar37,0);
        if ((uVar49 & 1) != 0) goto LAB_035564e8;
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar30 = lVar30 + lVar40 * 0x178;
      fStack0000000000000040 = *(float *)(lVar30 + 0x60);
      fStack0000000000000038 = *(float *)(lVar30 + 0x14c);
      uVar51 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar30 + 0x11c);
      uVar53 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar30 + 0x160);
      fStack000000000000009c = fVar43 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar54 = *unaff_x20;
    if (uVar54 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar14 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar40 * 0x178;
          lVar35 = *unaff_x19;
          uVar54 = *(uint *)(lVar30 + 0x128);
          fVar63 = *(float *)(lVar30 + 0x14c);
LAB_03556654:
          pcVar31 = *(code **)(lVar35 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar14 == uVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar49 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        uVar54 = *(uint *)(lVar30 + 0x18);
        if (uVar37 == 0x200b || (uVar49 & 1) != 0) {
          if (uVar54 <= uVar7) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar35 = lVar40;
          if (uVar54 <= uVar14) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar30 = lVar30 + lVar35 * 0x178;
        fVar63 = *(float *)(lVar30 + 0x14c);
        uVar54 = *(uint *)(lVar30 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)uVar54) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 != 0) && (lVar38 = *(long *)(lVar30 + 0x38), lVar38 != 0)) {
        if (uVar18 < *(uint *)(lVar38 + 0x18)) {
          if (*(float *)(lVar38 + lVar26 + -0x108) == fStack0000000000000040) {
            fVar45 = *(float *)(lVar38 + lVar26 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar51 = (ulong)(uint)fStack0000000000000038;
            uVar49 = FUN_03567bac(fVar63 + fVar45,uVar51,0);
            if ((uVar49 & 1) != 0) {
              uVar54 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar30 = *in_stack_00000170;
            if (lVar30 == 0) goto LAB_035574b8;
          }
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 != 0) {
            uVar54 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar14 <= (int)uVar7) goto FUN_035568e8;
            if (uVar7 < uVar54) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar14 < (int)uVar54) {
      iVar15 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_035575f4;
      lVar30 = *(long *)(lVar22 + lVar26 + -0x130);
      if (lVar30 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar30,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar18 - 2 < *(uint *)(lVar30 + 0x18)) {
          lVar35 = *unaff_x19;
          uVar54 = *(uint *)(lVar30 + lVar26 + -0x330);
          fVar63 = *(float *)(lVar30 + lVar26 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar54 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar54 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar40 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar53,uVar55,fStack00000000000000d0,uVar53);
    }
LAB_035569b4:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar5)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar30 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar14)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar14 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar49 = FUN_026b97f8(uVar37,0);
        if ((uVar49 & 1) != 0) goto LAB_035569b4;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar9;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      uVar54 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar54 <= uVar14) goto LAB_035575f4;
      lVar35 = *(long *)(lVar35 + 0xb8);
      lVar33 = lVar30 + lVar40 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar35 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar35 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar35 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar35 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar54 <= uVar14) goto LAB_035575f4;
    lVar30 = lVar30 + lVar40 * 0x178;
    fVar43 = *(float *)(lVar30 + 0x128);
    fVar46 = *(float *)(lVar30 + 0x188);
    uVar20 = *(undefined8 *)(lVar30 + 0x17c);
    fVar67 = *(float *)(lVar30 + 0x184);
    uVar19 = *(undefined8 *)(lVar30 + 0x184);
    fVar61 = *(float *)(lVar30 + 0x18c);
    fVar63 = *(float *)(lVar30 + 0x11c);
    fVar64 = *(float *)(lVar30 + 0x148);
    fVar45 = *(float *)(lVar30 + 0x150);
    in_stack_00000178 = uVar20;
    fStack0000000000000180 = fVar67;
    fStack0000000000000184 = fVar46;
    in_stack_00000188 = fVar61;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar49 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar30 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar49 & 1) == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar43 = fVar43 + (float)in_stack_000017b8;
      uVar53 = (ulong)(uint)fVar43;
      fVar63 = fVar63 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar45 = fVar45 - in_stack_000017c0;
      uVar51 = (ulong)(uint)fVar45;
      fVar64 = fVar64 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar55 = (ulong)(uint)fVar64;
      if (fVar63 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar63;
      }
      if (fVar45 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar45;
      }
      if (fStack00000000000000c8 <= fVar43) {
        fStack00000000000000c8 = fVar43;
      }
      if (fStack00000000000000d0 <= fVar64) {
        fStack00000000000000d0 = fVar64;
      }
    }
    else {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar63 = (fVar63 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar55 = (ulong)(uint)fVar63;
      if (fVar45 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar45;
      }
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar64) {
        fStack00000000000000d0 = fVar64;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar53,uVar55,fStack00000000000000d0,uVar53);
      fStack00000000000000dc = fVar45 - fVar61;
      fStack00000000000000c8 = fVar43 + fVar67;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar64 + fVar46;
      fStack00000000000000d8 = fVar63;
      in_stack_000017b0 = uVar20;
      in_stack_000017b8 = uVar19;
      in_stack_000017c0 = fVar61;
    }
    if (((*unaff_x20 == 1) || (uVar14 == uVar6)) || (((int)uVar7 <= (int)uVar14 || (!bVar1)))) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar53,uVar55,fStack00000000000000d0,uVar53);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar14 = *unaff_x20;
  lVar26 = lVar26 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar14 <= (int)uVar18;
  unaff_x28 = in_stack_00000170;
  uVar18 = uVar18 + 1;
  uVar54 = uVar5;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar22 = *in_stack_00000170;
  if (lVar22 != 0) {
    iVar17 = uVar5 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar22 + 0x18) = uVar14;
    lVar26 = unaff_x19[0xd4];
    *(int *)(lVar22 + 0x2c) = iVar17;
    if ((int)uVar14 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar26;
    *(float *)(lVar22 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar49 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar49 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar22 = unaff_x19[0xdf];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*unaff_x28,*(undefined8 *)(lVar22 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar17 != 0x19) {
      lVar22 = unaff_x19[0xe5];
      if (lVar22 == 0) goto LAB_035574b8;
      uVar14 = FUN_03911ee4(lVar22,0);
      FUN_03911f20(lVar22,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar19 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar14 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar22 = *unaff_x28;
                              if (lVar22 != 0) {
                                lVar30 = 0;
                                lVar26 = 0;
                                do {
                                  uVar49 = lVar26 + 1;
                                  if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar49)
                                  goto LAB_03554724;
                                  lVar22 = *(long *)(lVar22 + 0x60);
                                  if (lVar22 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                  FUN_03596a20(lVar22 + lVar30 + 0x70,0);
                                  lVar22 = unaff_x19[0xe1];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                  uVar20 = *(undefined8 *)(lVar22 + lVar26 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar23 = FUN_036d35a8(uVar20,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0))
                                      break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                      FUN_03596b20(lVar22 + lVar30 + 0x70,1,0);
                                    }
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar35 = *(long *)(*unaff_x28 + 0x60), lVar35 == 0)) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar49) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a460c(lVar22,*(undefined8 *)(lVar35 + lVar30 + 0x80),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar35 = *(long *)(*unaff_x28 + 0x60), lVar35 == 0)) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar49) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a4810(lVar22,*(undefined8 *)(lVar35 + lVar30 + 0x98),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar35 = *(long *)(*unaff_x28 + 0x60), lVar35 == 0)) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar49) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a48bc(lVar22,*(undefined8 *)(lVar35 + lVar30 + 0xa0),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar35 = *(long *)(*unaff_x28 + 0x60), lVar35 == 0)) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar49) goto LAB_035575f4;
                                    if (lVar22 == 0) break;
                                    FUN_036a4e24(lVar22,*(undefined8 *)(lVar35 + lVar30 + 0xa8),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = UnityEngine_Material__GetColorArray(lVar22,0),
                                       lVar22 == 0)) break;
                                    FUN_036aa280(lVar22,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_037b514c(lVar22,0);
                                    lVar35 = unaff_x19[0xe1];
                                    if (lVar35 == 0) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar35 = *(long *)(lVar35 + lVar26 * 8 + 0x28);
                                    if ((lVar35 == 0) ||
                                       (uVar20 = UnityEngine_Material__GetColorArray(lVar35,0),
                                       lVar22 == 0)) break;
                                    FUN_0390f3a4(lVar22,uVar20,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
                                    FUN_0390eec8(uVar19,uVar51,uVar53,uVar55,lVar22,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
                                    FUN_0390ed78(lVar22,uVar14 & 1,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar49) goto LAB_035575f4;
                                    plVar39 = *(long **)(lVar22 + lVar26 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar39 == (long *)0x0) break;
                                    (**(code **)(*plVar39 + 0x2c8))
                                              (plVar39,uVar18 & 1,*(undefined8 *)(*plVar39 + 0x2d0))
                                    ;
                                  }
                                  lVar22 = *unaff_x28;
                                  lVar26 = lVar26 + 1;
                                  lVar30 = lVar30 + 0x50;
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
      }
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


