/*
FUNCTION_NAME: UnityEngine.Animator$$SetLookAtWeight
ENTRY_POINT: 03554f24
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__SetLookAtWeight
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               float param_5,float param_6)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  code *pcVar18;
  long lVar19;
  long in_x15;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar20;
  long *plVar21;
  long unaff_x24;
  uint unaff_w25;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  ulong uVar30;
  float fVar31;
  uint uVar32;
  ulong uVar33;
  float unaff_s8;
  float fVar34;
  float unaff_s9;
  float fVar35;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar36;
  float unaff_s15;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  int *in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  uint in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  long in_stack_000000f0;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  long in_stack_00000120;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  long in_stack_00000150;
  uint uStack0000000000000158;
  uint uStack000000000000015c;
  uint in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined4 in_stack_000017c4;
  
code_r0x03554f24:
  fVar23 = unaff_s8 + unaff_s11 * param_3;
  param_3 = (unaff_s9 + unaff_s12) * param_3;
LAB_03555018:
  fStack00000000000000fc = fVar23 - param_3;
  uVar32 = uStack000000000000015c;
LAB_03555088:
  uStack000000000000015c = uVar32;
  fStack00000000000000e8 = 0.0;
  fStack00000000000000ec = 0.0;
  uVar32 = uStack000000000000015c;
  uVar10 = unaff_w21;
switchD_03554f58_caseD_3:
  unaff_w21 = in_stack_00000160;
  uStack000000000000015c = uVar32;
  uVar32 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar28 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar23 = (float)in_stack_000000b8 + fStack00000000000000e8;
  fVar27 = (float)((ulong)in_stack_000000b8 >> 0x20) + fStack00000000000000ec;
  if (*(char *)(lVar22 + 0x194) == '\0') goto LAB_03555938;
  iVar9 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
  if (iVar9 != 0) goto LAB_0355574c;
  fVar24 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)unaff_w21,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar15 + 0x84) = 0;
    *(undefined4 *)(lVar15 + 0xac) = 0;
    *(undefined4 *)(lVar15 + 0xd4) = 0x3f800000;
    fVar24 = 1.0;
    break;
  case 1:
    fVar25 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = (fStack00000000000000fc + fVar25) - *(float *)(in_stack_00000080 + 0x230);
      fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar31 = unaff_s12 - unaff_s9;
    *(float *)(lVar15 + 0x84) = fVar24 + (fVar25 - unaff_s9) / fVar31;
    *(float *)(lVar15 + 0xac) = fVar24 + (*(float *)(lVar15 + 0x98) - unaff_s9) / fVar31;
    *(float *)(lVar15 + 0xd4) = fVar24 + (*(float *)(lVar15 + 0xc0) - unaff_s9) / fVar31;
    fVar24 = fVar24 + (*(float *)(lVar15 + 0xe8) - unaff_s9) / fVar31;
    break;
  case 2:
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar31 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar25 = (fStack00000000000000fc + *(float *)(lVar15 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar15 + 0x84) = fVar24 + fVar25 / fVar31;
    *(float *)(lVar15 + 0xac) =
         fVar24 + ((fStack00000000000000fc + *(float *)(lVar15 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar15 + 0xd4) =
         fVar24 + ((fStack00000000000000fc + *(float *)(lVar15 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar24 = fVar24 + ((fStack00000000000000fc + *(float *)(lVar15 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar15 + 0x88) = 0;
      *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar15 + 0xd8) = 0;
      *(undefined4 *)(lVar15 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = fVar24 + (*(float *)(lVar15 + 0x74) - unaff_s13) / (param_6 - unaff_s13);
      fVar31 = fVar24 + (*(float *)(lVar15 + 0x9c) - unaff_s13) / (param_6 - unaff_s13);
      *(float *)(lVar15 + 0x88) = fVar25;
      *(float *)(lVar15 + 0xb0) = fVar31;
      *(float *)(lVar15 + 0xd8) = fVar25;
      *(float *)(lVar15 + 0x100) = fVar31;
      break;
    case 2:
      lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = fVar24 + (*(float *)(lVar15 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar15 + 0x88) = fVar25;
      fVar31 = *(float *)(unaff_x19 + 0x9c);
      fVar36 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar15 + 0xd8) = fVar25;
      fVar25 = fVar24 + (*(float *)(lVar15 + 0x9c) - fVar31) / (fVar36 - fVar31);
      *(float *)(lVar15 + 0xb0) = fVar25;
      *(float *)(lVar15 + 0x100) = fVar25;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar32 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar32 <= unaff_w25) goto LAB_035575f4;
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar25 = *(float *)(lVar15 + 0x15c);
    fVar31 = (1.0 - (*(float *)(lVar15 + 0x88) + *(float *)(lVar15 + 0xb0)) * fVar25) * 0.5;
    fVar36 = fVar24 + *(float *)(lVar15 + 0x88) * fVar25 + fVar31;
    fVar24 = fVar24 + fVar31 + *(float *)(lVar15 + 0xb0) * fVar25;
    *(float *)(lVar15 + 0x84) = fVar36;
    *(float *)(lVar15 + 0xac) = fVar36;
    *(float *)(lVar15 + 0xd4) = fVar24;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar24;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar32 <= unaff_w25) goto LAB_035575f4;
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar15 + 0x88) = 0;
    *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar15 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar15 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w25 < uVar32) {
      lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar24 = (*(float *)(lVar15 + 0x74) - param_5) / (param_4 - param_5);
      fVar25 = (*(float *)(lVar15 + 0x9c) - param_5) / (param_4 - param_5);
      *(float *)(lVar15 + 0x88) = fVar24;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar32 <= unaff_w25) goto LAB_035575f4;
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar24 = (*(float *)(lVar15 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar15 + 0x88) = fVar24;
    fVar25 = (*(float *)(lVar15 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar15 + 0xb0) = fVar25;
    *(float *)(lVar15 + 0xd8) = fVar25;
    *(float *)(lVar15 + 0x100) = fVar24;
    break;
  case 3:
    if (uVar32 <= unaff_w25) goto LAB_035575f4;
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar31 = *(float *)(lVar15 + 0x15c);
    fVar25 = (1.0 - (*(float *)(lVar15 + 0x84) + *(float *)(lVar15 + 0xd4)) / fVar31) * 0.5;
    fVar24 = *(float *)(lVar15 + 0x84) / fVar31 + fVar25;
    fVar25 = fVar25 + *(float *)(lVar15 + 0xd4) / fVar31;
    *(float *)(lVar15 + 0x88) = fVar24;
    *(float *)(lVar15 + 0xb0) = fVar25;
    *(float *)(lVar15 + 0x100) = fVar24;
    *(float *)(lVar15 + 0xd8) = fVar25;
  }
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
  unaff_s14 = *(float *)(lVar15 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar15 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar24 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar24 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar24 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar24 * unaff_s14;
  }
  lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar25 = *(float *)(lVar15 + 0x88);
  fVar31 = *(float *)(lVar15 + 0x84);
  fVar24 = -2.1474836e+09;
  if (fVar31 != INFINITY) {
    fVar24 = (float)(int)fVar31;
  }
  fVar34 = *(float *)(lVar15 + 0xd4);
  fVar35 = *(float *)(lVar15 + 0xd8);
  fVar36 = -2.1474836e+09;
  if (fVar25 != INFINITY) {
    fVar36 = (float)(int)fVar25;
  }
  uVar26 = FUN_03591d3c(fVar31 - fVar24,fVar25 - fVar36);
  *(undefined4 *)(lVar15 + 0x84) = uVar26;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar35 = fVar35 - fVar36;
  *(float *)(lVar15 + 0x88) = unaff_s14;
  uVar26 = FUN_03591d3c(fVar31 - fVar24,fVar35);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar26;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar34 = fVar34 - fVar24;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
  fVar24 = (float)FUN_03591d3c(fVar34,fVar35);
  *(float *)(lVar15 + 0xd4) = fVar24;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  *(float *)(lVar15 + 0xd8) = unaff_s14;
  uVar26 = FUN_03591d3c(fVar34,fVar25 - fVar36);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar26;
  uVar32 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  if (((int)unaff_w25 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)unaff_w21 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar32 <= unaff_w25) goto LAB_035575f4;
      lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(ulong *)(lVar22 + 0x70) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0x70) >> 0x20),
                    fVar28 + (float)*(undefined8 *)(lVar22 + 0x70));
      *(float *)(lVar22 + 0x78) = fVar27 + *(float *)(lVar22 + 0x78);
      *(ulong *)(lVar22 + 0x98) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0x98) >> 0x20),
                    fVar28 + (float)*(undefined8 *)(lVar22 + 0x98));
      *(float *)(lVar22 + 0xa0) = fVar27 + *(float *)(lVar22 + 0xa0);
      *(ulong *)(lVar22 + 0xc0) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20),
                    fVar28 + (float)*(undefined8 *)(lVar22 + 0xc0));
      *(float *)(lVar22 + 200) = fVar27 + *(float *)(lVar22 + 200);
      *(ulong *)(lVar22 + 0xe8) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0xe8) >> 0x20),
                    fVar28 + (float)*(undefined8 *)(lVar22 + 0xe8));
      *(float *)(lVar22 + 0xf0) = fVar27 + *(float *)(lVar22 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)unaff_w21 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w25 < uVar32) {
        if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar22 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(ulong *)(lVar22 + 0x70) =
               CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0x70) >> 0x20),
                        fVar28 + (float)*(undefined8 *)(lVar22 + 0x70));
          *(float *)(lVar22 + 0x78) = fVar27 + *(float *)(lVar22 + 0x78);
          *(ulong *)(lVar22 + 0x98) =
               CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0x98) >> 0x20),
                        fVar28 + (float)*(undefined8 *)(lVar22 + 0x98));
          *(float *)(lVar22 + 0xa0) = fVar27 + *(float *)(lVar22 + 0xa0);
          *(ulong *)(lVar22 + 0xc0) =
               CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20),
                        fVar28 + (float)*(undefined8 *)(lVar22 + 0xc0));
          *(float *)(lVar22 + 200) = fVar27 + *(float *)(lVar22 + 200);
          *(ulong *)(lVar22 + 0xe8) =
               CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0xe8) >> 0x20),
                        fVar28 + (float)*(undefined8 *)(lVar22 + 0xe8));
          *(float *)(lVar22 + 0xf0) = fVar27 + *(float *)(lVar22 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar32 = *(uint *)(in_stack_000000f0 + 0x18);
  }
  puVar6 = PTR_DAT_03cbded8;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar15 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar15 + 0x78) = uVar26;
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar15 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar15 + 0xa0) = uVar26;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar15 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar15 + 200) = uVar26;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar15 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar15 + 0xf0) = uVar26;
  *(undefined1 *)(lVar22 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar9 == 0) {
    pcVar18 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar18)();
  }
  else if (iVar9 == 1) {
    pcVar18 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar22 = lVar22 + unaff_x24 * 0x178;
  uVar29 = *(undefined8 *)(lVar22 + 0x11c);
  *(undefined8 *)(lVar22 + 0x11c) =
       CONCAT44(fVar23 + (float)((ulong)uVar29 >> 0x20),fVar28 + (float)uVar29);
  *(float *)(lVar22 + 0x124) = fVar27 + *(float *)(lVar22 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar22 = lVar22 + unaff_x24 * 0x178;
  *(ulong *)(lVar22 + 0x110) =
       CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0x110) >> 0x20),
                fVar28 + (float)*(undefined8 *)(lVar22 + 0x110));
  *(float *)(lVar22 + 0x118) = fVar27 + *(float *)(lVar22 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar22 = lVar22 + unaff_x24 * 0x178;
  *(ulong *)(lVar22 + 0x128) =
       CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar22 + 0x128) >> 0x20),
                fVar28 + (float)*(undefined8 *)(lVar22 + 0x128));
  *(float *)(lVar22 + 0x130) = fVar27 + *(float *)(lVar22 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar22 = lVar22 + unaff_x24 * 0x178;
  *(float *)(lVar22 + 0x134) = fVar28 + *(float *)(lVar22 + 0x134);
  *(ulong *)(lVar22 + 0x138) =
       CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar22 + 0x138) >> 0x20),
                fVar23 + (float)*(undefined8 *)(lVar22 + 0x138));
  lVar22 = *in_stack_00000170;
  if ((lVar22 == 0) || (lVar15 = *(long *)(lVar22 + 0x38), lVar15 == 0)) goto LAB_035574b8;
  uVar32 = *(uint *)(lVar15 + 0x18);
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  lVar19 = lVar15 + unaff_x24 * 0x178;
  uVar11 = CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar19 + 0x140) >> 0x20),
                    fVar28 + (float)*(undefined8 *)(lVar19 + 0x140));
  fVar27 = fVar23 + *(float *)(lVar19 + 0x150);
  uVar30 = (ulong)(uint)fVar27;
  uVar33 = CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0x148) >> 0x20),
                    fVar23 + (float)*(undefined8 *)(lVar19 + 0x148));
  *(float *)(lVar19 + 0x150) = fVar27;
  *(ulong *)(lVar19 + 0x140) = uVar11;
  *(ulong *)(lVar19 + 0x148) = uVar33;
  if (unaff_w21 == uVar10) {
    uVar32 = *unaff_x20 - 1;
    if (unaff_w25 == uVar32) goto LAB_03555b44;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_035575f4;
    lVar19 = (long)(int)uVar10;
    lVar16 = lVar22 + lVar19 * 0x5c;
    uVar33 = (ulong)(uint)*(float *)(lVar16 + 0x58);
    fVar27 = fVar23 + *(float *)(lVar16 + 0x54);
    uVar11 = (ulong)(uint)fVar27;
    fVar24 = fVar28 + *(float *)(lVar16 + 0x58);
    uVar30 = (ulong)(uint)fVar24;
    *(ulong *)(lVar16 + 0x4c) =
         CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar16 + 0x4c) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(lVar16 + 0x4c));
    *(float *)(lVar16 + 0x54) = fVar27;
    *(float *)(lVar16 + 0x58) = fVar24;
    if (uVar32 <= *(uint *)(lVar16 + 0x34)) goto LAB_035575f4;
    uVar26 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar16 + 0x34) * 0x178 + 0x11c);
    lVar22 = lVar22 + lVar19 * 0x5c;
    *(float *)(lVar22 + 0x70) = fVar27;
    *(undefined4 *)(lVar22 + 0x6c) = uVar26;
    lVar22 = *in_stack_00000170;
    if ((lVar22 == 0) || (lVar15 = *(long *)(lVar22 + 0x50), lVar15 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_035575f4;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_035574b8;
    uVar32 = *(uint *)(lVar15 + lVar19 * 0x5c + 0x40);
    if (*(uint *)(lVar22 + 0x18) <= uVar32) goto LAB_035575f4;
    lVar15 = lVar15 + lVar19 * 0x5c;
    *(undefined4 *)(lVar15 + 0x74) = *(undefined4 *)(lVar22 + (long)(int)uVar32 * 0x178 + 0x128);
    *(undefined4 *)(lVar15 + 0x78) = *(undefined4 *)(lVar15 + 0x4c);
    uVar32 = *unaff_x20 - 1;
LAB_03555b44:
    if (unaff_w25 == uVar32) {
      lVar22 = *in_stack_00000170;
      if ((lVar22 == 0) || (lVar15 = *(long *)(lVar22 + 0x50), lVar15 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar19 = lVar15 + in_x15 * 0x5c;
      uVar33 = (ulong)(uint)*(float *)(lVar19 + 0x58);
      uVar11 = CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                        fVar23 + (float)*(undefined8 *)(lVar19 + 0x4c));
      fVar27 = fVar23 + *(float *)(lVar19 + 0x54);
      fVar28 = fVar28 + *(float *)(lVar19 + 0x58);
      uVar30 = (ulong)(uint)fVar28;
      *(ulong *)(lVar19 + 0x4c) = uVar11;
      *(float *)(lVar19 + 0x54) = fVar27;
      *(float *)(lVar19 + 0x58) = fVar28;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(lVar19 + 0x34)) goto LAB_035575f4;
      uVar26 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c);
      lVar15 = lVar15 + in_x15 * 0x5c;
      *(float *)(lVar15 + 0x70) = fVar27;
      *(undefined4 *)(lVar15 + 0x6c) = uVar26;
      lVar22 = *in_stack_00000170;
      if ((lVar22 == 0) || (lVar15 = *(long *)(lVar22 + 0x50), lVar15 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      uVar32 = *(uint *)(lVar15 + in_x15 * 0x5c + 0x40);
      if (*(uint *)(lVar22 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar15 = lVar15 + in_x15 * 0x5c;
      *(undefined4 *)(lVar15 + 0x74) = *(undefined4 *)(lVar22 + (long)(int)uVar32 * 0x178 + 0x128);
      *(undefined4 *)(lVar15 + 0x78) = *(undefined4 *)(lVar15 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = FUN_026b82c4(in_stack_00000168._4_4_,0);
  if (((((uVar12 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
      (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (uStack000000000000015c != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b81f8(in_stack_00000168._4_4_,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar12 & 1) == 0)) && (*unaff_x20 != 1))
        goto LAB_0355686c;
      }
    }
    else if (((uStack000000000000015c != 1) &&
             ((int)unaff_w25 < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
            (((int)unaff_w25 < *unaff_x20 &&
             ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_00000120 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b82c4(uVar4,0);
      if ((uVar12 & 1) != 0) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_00000120 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b82c4(uVar4,0);
        if ((uVar12 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b82c4(in_stack_00000168._4_4_,0);
      iVar9 = iStack0000000000000128;
      if ((uVar12 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar9 = uStack000000000000015c - 2;
    }
    lVar22 = *in_stack_00000170;
    if (lVar22 == 0) goto LAB_035574b8;
    lVar15 = *(long *)(lVar22 + 0x40);
    if (lVar15 == 0) goto LAB_035574b8;
    uVar32 = *(uint *)(lVar22 + 0x24);
    iVar8 = *(int *)(lVar15 + 0x18);
    if (iVar8 < (int)(uVar32 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar22 + 0x40),iVar8 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar22 = *in_stack_00000170;
      if (lVar22 == 0) goto LAB_035574b8;
    }
    lVar22 = *(long *)(lVar22 + 0x40);
    if (lVar22 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= uVar32) goto LAB_035575f4;
    lVar22 = lVar22 + (long)(int)uVar32 * 0x18;
    *(long **)(lVar22 + 0x20) = unaff_x19;
    *(uint *)(lVar22 + 0x28) = uStack0000000000000158;
    *(int *)(lVar22 + 0x2c) = iVar9;
    *(uint *)(lVar22 + 0x30) = (iVar9 - uStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar22 = unaff_x19[0x6d];
    if (lVar22 == 0) goto LAB_035574b8;
    lVar15 = *(long *)(lVar22 + 0x50);
    *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
    if (lVar15 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w21) goto LAB_035575f4;
    lVar15 = lVar15 + in_x15 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      uStack0000000000000158 = unaff_w25;
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      lVar22 = *in_stack_00000170;
      if (lVar22 == 0) goto LAB_035574b8;
      lVar15 = *(long *)(lVar22 + 0x40);
      if (lVar15 == 0) goto LAB_035574b8;
      uVar32 = *(uint *)(lVar22 + 0x24);
      iVar9 = *(int *)(lVar15 + 0x18);
      if (iVar9 < (int)(uVar32 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar22 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar22 = *in_stack_00000170;
        if (lVar22 == 0) goto LAB_035574b8;
      }
      lVar22 = *(long *)(lVar22 + 0x40);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)uVar32 * 0x18;
      *(long **)(lVar22 + 0x20) = unaff_x19;
      *(uint *)(lVar22 + 0x28) = uStack0000000000000158;
      *(uint *)(lVar22 + 0x2c) = unaff_w25;
      *(uint *)(lVar22 + 0x30) = uStack000000000000015c - uStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar22 = unaff_x19[0x6d];
      if (lVar22 == 0) goto LAB_035574b8;
      lVar15 = *(long *)(lVar22 + 0x50);
      *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
      if (lVar15 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar15 = lVar15 + in_x15 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  uVar32 = *(uint *)(lVar22 + 0x18);
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  uVar17 = (uint)in_stack_000000e0;
  uVar10 = (uint)in_stack_00000150;
  if ((*(byte *)(lVar22 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar32 <= uStack000000000000015c - 2) goto LAB_035575f4;
      lVar15 = *unaff_x19;
      uVar32 = *(uint *)(lVar22 + in_stack_00000120 + -0x330);
      uVar26 = *(undefined4 *)(lVar22 + in_stack_00000120 + -0x2f8);
LAB_035562ec:
      pcVar18 = *(code **)(lVar15 + 0x8d8);
LAB_035562f4:
      uVar33 = (ulong)uVar32;
      uVar11 = (ulong)(uint)fStack0000000000000070;
      uVar30 = (ulong)uStack0000000000000074;
      (*pcVar18)(in_stack_00000078,uVar11,uVar30,uVar33,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar26);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar6;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar22 = lVar22 + unaff_x24 * 0x178;
    iVar9 = *(int *)(lVar22 + 0x68);
    *(undefined4 *)(lVar22 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar9 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
    if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar12 & 1) == 0)) {
      lVar22 = *in_stack_00000170;
      if ((lVar22 == 0) || (lVar15 = *(long *)(lVar22 + 0x38), lVar15 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w25) goto LAB_035575f4;
      fVar27 = *(float *)(lVar15 + unaff_x24 * 0x178 + 0x160);
      if (unaff_s15 <= fVar27) {
        unaff_s15 = fVar27;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar9 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *in_stack_00000170;
          if (lVar22 == 0) goto LAB_035574b8;
          lVar15 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar15 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar15 + 0x15a8);
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar28 = *(float *)(lVar22 + unaff_x24 * 0x178 + 0x14c);
      fVar27 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar28 = fVar28 + unaff_s15 * fVar27;
      if (fVar28 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar28;
      }
      uVar11 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar9;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar10 < (int)unaff_w25)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (unaff_w25 == uVar10) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar12 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar22 = lVar22 + unaff_x24 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar22 + 0x160);
      in_stack_00000078 = *(uint *)(lVar22 + 0x11c);
      uVar30 = (ulong)in_stack_00000078;
      bVar7 = unaff_s15 != 0.0;
      fVar27 = in_stack_00000088._4_4_;
      if (bVar7) {
        fVar27 = unaff_s15;
      }
      unaff_s15 = fVar27;
      in_stack_00000090 = *(undefined4 *)(lVar22 + 0x168);
      uStack0000000000000074 = 0;
      fVar27 = unaff_s14;
      if (bVar7) {
        fVar27 = fStack0000000000000100;
      }
      uVar11 = (ulong)(uint)fVar27;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar27;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + unaff_x24 * 0x178;
          lVar15 = *unaff_x19;
          uVar32 = *(uint *)(lVar22 + 0x128);
          uVar26 = *(undefined4 *)(lVar22 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((unaff_w25 == uVar17) || ((int)uVar10 <= (int)unaff_w25)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        lVar15 = unaff_x24;
        uVar32 = unaff_w25;
        if (in_stack_00000168._4_4_ == 0x200b || (uVar11 & 1) != 0) {
          lVar15 = in_stack_00000150;
          uVar32 = uVar10;
        }
        if (uVar32 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + lVar15 * 0x178;
          uVar32 = *(uint *)(lVar22 + 0x128);
          uVar26 = *(undefined4 *)(lVar22 + 0x160);
          pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        uVar32 = *(uint *)(lVar22 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      uVar12 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar22 + in_stack_00000120),0);
      if ((uVar12 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0)) {
          if (unaff_w25 < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + unaff_x24 * 0x178;
            uVar33 = (ulong)*(uint *)(lVar22 + 0x128);
            uVar30 = (ulong)uStack0000000000000074;
            uVar11 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000078,uVar11,uVar30,uVar33,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar22 + 0x160));
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *(long *)puVar6;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    uStack0000000000000118 = 1;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
  if (in_stack_00000108 == 0) goto LAB_035574b8;
  uVar32 = *(uint *)(lVar22 + unaff_x24 * 0x178 + 400);
  fVar27 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
  if ((uVar32 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
      uVar32 = *(uint *)(lVar22 + in_stack_00000120 + -0x330);
      fVar23 = *(float *)(lVar22 + in_stack_00000120 + -0x30c);
      pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar33 = (ulong)uVar32;
      uVar11 = (ulong)(uint)fStack000000000000009c;
      uVar30 = (ulong)uStack0000000000000098;
      (*pcVar18)(in_stack_000000a0,uVar11,uVar30,uVar33,in_stack_000000a8 * fVar27 + fVar23,0,
                 in_stack_000000a8,in_stack_000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar22 = *in_stack_00000170;
    if ((lVar22 == 0) || (lVar15 = *(long *)(lVar22 + 0x38), lVar15 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(undefined4 *)(lVar15 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar15 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
        ((int)uVar10 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (unaff_w25 == uVar10) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar12 & 1) != 0) goto LAB_035564e8;
        lVar22 = *in_stack_00000170;
        if (lVar22 == 0) goto LAB_035574b8;
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar22 = lVar22 + unaff_x24 * 0x178;
      in_stack_00000040 = *(float *)(lVar22 + 0x60);
      in_stack_00000038 = *(float *)(lVar22 + 0x14c);
      uVar11 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar22 + 0x11c);
      uVar30 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar22 + 0x160);
      fStack000000000000009c = fVar27 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar9 = *unaff_x20;
    if (iVar9 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + unaff_x24 * 0x178;
          lVar15 = *unaff_x19;
          uVar32 = *(uint *)(lVar22 + 0x128);
          fVar23 = *(float *)(lVar22 + 0x14c);
LAB_03556654:
          pcVar18 = *(code **)(lVar15 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (unaff_w25 == uVar17) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        uVar32 = *(uint *)(lVar22 + 0x18);
        if (in_stack_00000168._4_4_ == 0x200b || (uVar11 & 1) != 0) {
          if (uVar32 <= uVar10) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          in_stack_00000150 = unaff_x24;
          if (uVar32 <= unaff_w25) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar22 = lVar22 + in_stack_00000150 * 0x178;
        fVar23 = *(float *)(lVar22 + 0x14c);
        uVar32 = *(uint *)(lVar22 + 0x128);
        pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < iVar9) {
      lVar22 = *in_stack_00000170;
      if ((lVar22 != 0) && (lVar15 = *(long *)(lVar22 + 0x38), lVar15 != 0)) {
        if (uStack000000000000015c < *(uint *)(lVar15 + 0x18)) {
          if (*(float *)(lVar15 + in_stack_00000120 + -0x108) == in_stack_00000040) {
            fVar28 = *(float *)(lVar15 + in_stack_00000120 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = (ulong)(uint)in_stack_00000038;
            uVar12 = FUN_03567bac(fVar23 + fVar28,uVar11,0);
            if ((uVar12 & 1) != 0) {
              iVar9 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar22 = *in_stack_00000170;
            if (lVar22 == 0) goto LAB_035574b8;
          }
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 != 0) {
            uVar32 = *(uint *)(lVar22 + 0x18);
            if ((int)unaff_w25 <= (int)uVar10) goto FUN_035568e8;
            if (uVar10 < uVar32) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)unaff_w25 < iVar9) {
      iVar9 = FUN_036d3364(in_stack_00000108,0);
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      lVar22 = *(long *)(in_stack_000000f0 + in_stack_00000120 + -0x130);
      if (lVar22 == 0) goto LAB_035574b8;
      iVar8 = FUN_036d3364(lVar22,0);
      if (iVar9 != iVar8) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        if (uStack000000000000015c - 2 < *(uint *)(lVar22 + 0x18)) {
          lVar15 = *unaff_x19;
          uVar32 = *(uint *)(lVar22 + in_stack_00000120 + -0x330);
          fVar23 = *(float *)(lVar22 + in_stack_00000120 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  uVar32 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar32 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar22 + unaff_x24 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar30 = (ulong)uStack00000000000000c0;
      uVar11 = (ulong)(uint)fStack00000000000000dc;
      uVar33 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar11,uVar30,uVar33,fStack00000000000000d0,uVar30);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar22 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((in_stack_00000110._4_4_ & 1) == 0) {
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar10 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
      if (unaff_w25 == uVar10) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar12 & 1) != 0) goto LAB_035569b4;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *(long *)puVar6;
      }
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      uVar32 = (uint)*(undefined8 *)(lVar22 + 0x18);
      if (uVar32 <= unaff_w25) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + 0xb8);
      lVar19 = lVar22 + unaff_x24 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar19 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar19 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar15 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar15 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar19 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar15 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar15 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar32 <= unaff_w25) goto LAB_035575f4;
    lVar22 = lVar22 + unaff_x24 * 0x178;
    fVar27 = *(float *)(lVar22 + 0x128);
    fVar25 = *(float *)(lVar22 + 0x188);
    uVar20 = *(undefined8 *)(lVar22 + 0x17c);
    fVar36 = *(float *)(lVar22 + 0x184);
    uVar29 = *(undefined8 *)(lVar22 + 0x184);
    fVar31 = *(float *)(lVar22 + 0x18c);
    fVar23 = *(float *)(lVar22 + 0x11c);
    fVar24 = *(float *)(lVar22 + 0x148);
    fVar28 = *(float *)(lVar22 + 0x150);
    in_stack_00000178 = uVar20;
    fStack0000000000000180 = fVar36;
    fStack0000000000000184 = fVar25;
    in_stack_00000188 = fVar31;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar11 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar22 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar11 & 1) == 0) {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar22);
      }
      fVar27 = fVar27 + (float)in_stack_000017b8;
      uVar30 = (ulong)(uint)fVar27;
      fVar23 = fVar23 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar28 = fVar28 - in_stack_000017c0;
      uVar11 = (ulong)(uint)fVar28;
      fVar24 = fVar24 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar33 = (ulong)(uint)fVar24;
      if (fVar23 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar23;
      }
      if (fVar28 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar28;
      }
      if (in_stack_000000c8 <= fVar27) {
        in_stack_000000c8 = fVar27;
      }
      if (fStack00000000000000d0 <= fVar24) {
        fStack00000000000000d0 = fVar24;
      }
    }
    else {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar22);
      }
      fVar23 = (fVar23 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar33 = (ulong)(uint)fVar23;
      if (fVar28 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar28;
      }
      uVar11 = (ulong)(uint)fStack00000000000000dc;
      uVar30 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar24) {
        fStack00000000000000d0 = fVar24;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar11,uVar30,uVar33,fStack00000000000000d0,uVar30);
      fStack00000000000000dc = fVar28 - fVar31;
      in_stack_000000c8 = fVar27 + fVar36;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar24 + fVar25;
      fStack00000000000000d8 = fVar23;
      in_stack_000017b0 = uVar20;
      in_stack_000017b8 = uVar29;
      in_stack_000017c0 = fVar31;
    }
    if (((*unaff_x20 == 1) || (unaff_w25 == uVar17)) ||
       (((int)uVar10 <= (int)unaff_w25 || (!bVar1)))) {
      uVar30 = (ulong)uStack00000000000000c0;
      uVar11 = (ulong)(uint)fStack00000000000000dc;
      uVar33 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar11,uVar30,uVar33,fStack00000000000000d0,uVar30);
      in_stack_00000110._4_4_ = 0;
    }
    else {
      in_stack_00000110._4_4_ = 1;
    }
  }
  puVar6 = OVRPlugin_Media_TypeInfo;
  iVar9 = *unaff_x20;
  uVar32 = uStack000000000000015c + 1;
  in_stack_00000120 = in_stack_00000120 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  if (iVar9 <= (int)uStack000000000000015c) {
    lVar22 = *in_stack_00000170;
    if (lVar22 == 0) goto LAB_035574b8;
    *(int *)(lVar22 + 0x18) = iVar9;
    lVar15 = unaff_x19[0xd4];
    *(uint *)(lVar22 + 0x2c) = unaff_w21 + 1;
    if (iVar9 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar15;
    *(int *)(lVar22 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0)) goto LAB_03554724;
    lVar22 = unaff_x19[0xdf];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar22 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar9 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar9 != 0x19) {
      lVar22 = unaff_x19[0xe5];
      if (lVar22 == 0) goto LAB_035574b8;
      uVar32 = FUN_03911ee4(lVar22,0);
      FUN_03911f20(lVar22,uVar32 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x30),0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x48),0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x50),0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x58),0);
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa280(unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar29 = FUN_0390ef60(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar32 = FUN_0390ed3c(unaff_x19[0xe4],0);
    lVar22 = *in_stack_00000170;
    if (lVar22 == 0) goto LAB_035574b8;
    lVar19 = 0;
    lVar15 = 0;
    goto LAB_03557110;
  }
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x50), lVar22 == 0))
  goto LAB_035574b8;
  unaff_x24 = (long)(int)uStack000000000000015c;
  lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
  in_stack_00000160 = *(uint *)(lVar15 + 100);
  if (*(uint *)(lVar22 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
  in_x15 = (long)(int)in_stack_00000160;
  lVar22 = lVar22 + in_x15 * 0x5c;
  in_stack_00000108 = *(long *)(lVar15 + 0x38);
  uVar3 = *(ushort *)(lVar15 + 0x20);
  uVar5 = *(uint *)(lVar22 + 0x3c);
  in_stack_000000e0 = (long)(int)uVar5;
  uVar17 = *(uint *)(lVar22 + 0x68);
  iVar2 = *(int *)(lVar22 + 0x20);
  iVar9 = *(int *)(lVar22 + 0x28);
  iVar8 = *(int *)(lVar22 + 0x2c);
  in_stack_00000150 = (long)*(int *)(lVar22 + 0x40);
  param_4 = *(float *)(lVar22 + 0x4c);
  param_5 = *(float *)(lVar22 + 0x54);
  param_3 = *(float *)(lVar22 + 0x58);
  unaff_s11 = *(float *)(lVar22 + 0x5c);
  unaff_s8 = *(float *)(lVar22 + 0x60);
  unaff_s9 = *(float *)(lVar22 + 0x6c);
  unaff_s13 = *(float *)(lVar22 + 0x70);
  unaff_s12 = *(float *)(lVar22 + 0x74);
  param_6 = *(float *)(lVar22 + 0x78);
  in_stack_00000168._4_4_ = (uint)uVar3;
  unaff_w25 = uStack000000000000015c;
  uVar10 = unaff_w21;
  if ((int)uVar17 < 9) goto code_r0x03554f44;
  if (uVar17 == 0x10) goto switchD_03554f58_caseD_8;
  if (uVar17 == 0x20) {
    param_3 = 0.5;
    uStack000000000000015c = uVar32;
    goto code_r0x03554f24;
  }
  goto switchD_03554f58_caseD_3;
code_r0x03554f44:
  switch(uVar17) {
  case 1:
    break;
  case 2:
    param_3 = param_3 * 0.5;
    fVar23 = unaff_s8 + unaff_s11 * 0.5;
    uStack000000000000015c = uVar32;
    goto LAB_03555018;
  default:
    goto switchD_03554f58_caseD_3;
  case 4:
    fStack00000000000000fc = (unaff_s11 + unaff_s8) - param_3;
    if ((char)unaff_x19[0x1e] != '\0') {
      fStack00000000000000fc = unaff_s11 + unaff_s8;
    }
    goto LAB_03555088;
  case 8:
    goto switchD_03554f58_caseD_8;
  }
  if ((char)unaff_x19[0x1e] == '\0') {
    fStack00000000000000fc = unaff_s8 + 0.0;
  }
  else {
    fStack00000000000000fc = 0.0 - param_3;
  }
  goto LAB_03555088;
switchD_03554f58_caseD_8:
  if (uVar3 < 0xad) {
    if ((uVar3 == 3) || (uVar3 == 10)) goto switchD_03554f58_caseD_3;
  }
  else if ((uVar3 == 0xad) || ((uVar3 == 0x200b || (uVar3 == 0x2060))))
  goto switchD_03554f58_caseD_3;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
  uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_026b8cc4(uVar4,0);
  if ((uVar11 & 1) == 0) {
    bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
  }
  else {
    bVar1 = false;
  }
  if ((param_3 <= unaff_s11) && (!bVar1 && uVar17 >> 4 == 0)) {
    fStack00000000000000fc = unaff_s8;
    if ((char)unaff_x19[0x1e] != '\0') {
      fStack00000000000000fc = unaff_s11 + unaff_s8;
    }
    goto LAB_03555088;
  }
  if (((uVar32 == 1) || (in_stack_00000160 != unaff_w21)) ||
     (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
    fStack00000000000000fc = unaff_s8;
    if ((char)unaff_x19[0x1e] != '\0') {
      fStack00000000000000fc = unaff_s11 + unaff_s8;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
    fStack00000000000000e8 = 0.0;
    fStack00000000000000ec = 0.0;
    goto switchD_03554f58_caseD_3;
  }
  cVar14 = (char)unaff_x19[0x1e];
  fVar23 = -param_3;
  if (cVar14 != '\0') {
    fVar23 = param_3;
  }
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
  iVar8 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
          (-iVar2 - (uStack0000000000000028 & 1)) + iVar8 + -1;
  if (iVar8 < 1) {
    fVar27 = 1.0;
    iVar8 = 1;
  }
  else {
    fVar27 = *(float *)((long)unaff_x19 + 0x2dc);
  }
  if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
    fVar27 = 1.0 - fVar27;
  }
  else {
    if (in_stack_00000168._4_4_ != 0xa0) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
      cVar14 = (char)unaff_x19[0x1e];
      if ((uVar11 & 1) != 0) goto LAB_03556e74;
    }
    iVar8 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar9;
  }
  fVar23 = ((unaff_s11 + fVar23) * fVar27) / (float)iVar8;
  if (cVar14 == '\0') {
    fStack00000000000000fc = fStack00000000000000fc + fVar23;
    fStack00000000000000e8 = fStack00000000000000e8 + 0.0;
    fStack00000000000000ec = fStack00000000000000ec + 0.0;
  }
  else {
    fStack00000000000000fc = fStack00000000000000fc - fVar23;
  }
  goto switchD_03554f58_caseD_3;
  while( true ) {
    lVar22 = *in_stack_00000170;
    lVar15 = lVar15 + 1;
    lVar19 = lVar19 + 0x50;
    if (lVar22 == 0) break;
LAB_03557110:
    uVar12 = lVar15 + 1;
    if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar12) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar22 = *(long *)(lVar22 + 0x60);
    if (lVar22 == 0) break;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
    FUN_03596a20(lVar22 + lVar19 + 0x70,0);
    lVar22 = unaff_x19[0xe1];
    if (lVar22 == 0) break;
    if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
    uVar20 = *(undefined8 *)(lVar22 + lVar15 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_036d35a8(uVar20,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar22 = *(long *)(*in_stack_00000170 + 0x60), lVar22 == 0)) break;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar12) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar22 + lVar19 + 0x70,1,0);
      }
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a460c(lVar22,*(undefined8 *)(lVar16 + lVar19 + 0x80),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a4810(lVar22,*(undefined8 *)(lVar16 + lVar19 + 0x98),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a48bc(lVar22,*(undefined8 *)(lVar16 + lVar19 + 0xa0),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*in_stack_00000170 == 0) || (lVar16 = *(long *)(*in_stack_00000170 + 0x60), lVar16 == 0))
      break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a4e24(lVar22,*(undefined8 *)(lVar16 + lVar19 + 0xa8),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if ((lVar22 == 0) || (lVar22 = UnityEngine_Material__GetColorArray(lVar22,0), lVar22 == 0))
      break;
      FUN_036aa280(lVar22,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = FUN_037b514c(lVar22,0);
      lVar16 = unaff_x19[0xe1];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + lVar15 * 8 + 0x28);
      if ((lVar16 == 0) || (uVar20 = UnityEngine_Material__GetColorArray(lVar16,0), lVar22 == 0))
      break;
      FUN_0390f3a4(lVar22,uVar20,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if ((lVar22 == 0) || (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
      FUN_0390eec8(uVar29,uVar11,uVar30,uVar33,lVar22,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar15 * 8 + 0x28);
      if ((lVar22 == 0) || (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
      FUN_0390ed78(lVar22,uVar32 & 1,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      plVar21 = *(long **)(lVar22 + lVar15 * 8 + 0x28);
      uVar10 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar21 == (long *)0x0) break;
      (**(code **)(*plVar21 + 0x2c8))(plVar21,uVar10 & 1,*(undefined8 *)(*plVar21 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


