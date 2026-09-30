/*
FUNCTION_NAME: UnityEngine.Animator$$GetBehaviour
ENTRY_POINT: 03555334
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


void UnityEngine_Animator__GetBehaviour(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  code *pcVar19;
  long lVar20;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar21;
  long *plVar22;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  long lVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  ulong uVar31;
  float fVar32;
  uint uVar33;
  ulong uVar34;
  float fVar35;
  float unaff_s9;
  float fVar36;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar37;
  float unaff_s15;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  int *in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  float in_stack_00000060;
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
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  long in_stack_00000120;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  float in_stack_00000130;
  float in_stack_00000140;
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
  
code_r0x03555334:
  uVar8 = FUN_026b97f8(param_1,param_2);
  fStack00000000000000e8 = 0.0;
  fStack00000000000000ec = 0.0;
  uVar33 = uStack000000000000015c;
  uVar11 = unaff_w21;
switchD_03554f58_caseD_3:
  unaff_w21 = in_stack_00000160;
  uStack000000000000015c = uVar33;
  uVar33 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar29 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar27 = (float)in_stack_000000b8 + fStack00000000000000e8;
  fVar28 = (float)((ulong)in_stack_000000b8 >> 0x20) + fStack00000000000000ec;
  if (*(char *)(lVar23 + 0x194) == '\0') goto LAB_03555938;
  iVar10 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
  if (iVar10 != 0) goto LAB_0355574c;
  fVar24 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)unaff_w21,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar16 + 0x84) = 0;
    *(undefined4 *)(lVar16 + 0xac) = 0;
    *(undefined4 *)(lVar16 + 0xd4) = 0x3f800000;
    fVar24 = 1.0;
    break;
  case 1:
    fVar25 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = (in_stack_000000f8._4_4_ + fVar25) - *(float *)(in_stack_00000080 + 0x230);
      fVar32 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar32 = unaff_s12 - unaff_s9;
    *(float *)(lVar16 + 0x84) = fVar24 + (fVar25 - unaff_s9) / fVar32;
    *(float *)(lVar16 + 0xac) = fVar24 + (*(float *)(lVar16 + 0x98) - unaff_s9) / fVar32;
    *(float *)(lVar16 + 0xd4) = fVar24 + (*(float *)(lVar16 + 0xc0) - unaff_s9) / fVar32;
    fVar24 = fVar24 + (*(float *)(lVar16 + 0xe8) - unaff_s9) / fVar32;
    break;
  case 2:
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar32 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar25 = (in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar16 + 0x84) = fVar24 + fVar25 / fVar32;
    *(float *)(lVar16 + 0xac) =
         fVar24 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar16 + 0xd4) =
         fVar24 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar24 = fVar24 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar16 + 0x88) = 0;
      *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xd8) = 0;
      *(undefined4 *)(lVar16 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = fVar24 + (*(float *)(lVar16 + 0x74) - unaff_s13) / (in_stack_00000060 - unaff_s13);
      fVar32 = fVar24 + (*(float *)(lVar16 + 0x9c) - unaff_s13) / (in_stack_00000060 - unaff_s13);
      *(float *)(lVar16 + 0x88) = fVar25;
      *(float *)(lVar16 + 0xb0) = fVar32;
      *(float *)(lVar16 + 0xd8) = fVar25;
      *(float *)(lVar16 + 0x100) = fVar32;
      break;
    case 2:
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = fVar24 + (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar16 + 0x88) = fVar25;
      fVar32 = *(float *)(unaff_x19 + 0x9c);
      fVar37 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar16 + 0xd8) = fVar25;
      fVar25 = fVar24 + (*(float *)(lVar16 + 0x9c) - fVar32) / (fVar37 - fVar32);
      *(float *)(lVar16 + 0xb0) = fVar25;
      *(float *)(lVar16 + 0x100) = fVar25;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar33 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar25 = *(float *)(lVar16 + 0x15c);
    fVar32 = (1.0 - (*(float *)(lVar16 + 0x88) + *(float *)(lVar16 + 0xb0)) * fVar25) * 0.5;
    fVar37 = fVar24 + *(float *)(lVar16 + 0x88) * fVar25 + fVar32;
    fVar24 = fVar24 + fVar32 + *(float *)(lVar16 + 0xb0) * fVar25;
    *(float *)(lVar16 + 0x84) = fVar37;
    *(float *)(lVar16 + 0xac) = fVar37;
    *(float *)(lVar16 + 0xd4) = fVar24;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar24;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar16 + 0x88) = 0;
    *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w25 < uVar33) {
      lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar24 = (*(float *)(lVar16 + 0x74) - in_stack_00000130) /
               (in_stack_00000140 - in_stack_00000130);
      fVar25 = (*(float *)(lVar16 + 0x9c) - in_stack_00000130) /
               (in_stack_00000140 - in_stack_00000130);
      *(float *)(lVar16 + 0x88) = fVar24;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar24 = (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar16 + 0x88) = fVar24;
    fVar25 = (*(float *)(lVar16 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar16 + 0xb0) = fVar25;
    *(float *)(lVar16 + 0xd8) = fVar25;
    *(float *)(lVar16 + 0x100) = fVar24;
    break;
  case 3:
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar32 = *(float *)(lVar16 + 0x15c);
    fVar25 = (1.0 - (*(float *)(lVar16 + 0x84) + *(float *)(lVar16 + 0xd4)) / fVar32) * 0.5;
    fVar24 = *(float *)(lVar16 + 0x84) / fVar32 + fVar25;
    fVar25 = fVar25 + *(float *)(lVar16 + 0xd4) / fVar32;
    *(float *)(lVar16 + 0x88) = fVar24;
    *(float *)(lVar16 + 0xb0) = fVar25;
    *(float *)(lVar16 + 0x100) = fVar24;
    *(float *)(lVar16 + 0xd8) = fVar25;
  }
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
  unaff_s14 = *(float *)(lVar16 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar16 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar24 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar24 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar24 = in_stack_00000028._4_4_, in_stack_00000058 == 0)) {
    unaff_s14 = fVar24 * unaff_s14;
  }
  lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar25 = *(float *)(lVar16 + 0x88);
  fVar32 = *(float *)(lVar16 + 0x84);
  fVar24 = -2.1474836e+09;
  if (fVar32 != INFINITY) {
    fVar24 = (float)(int)fVar32;
  }
  fVar35 = *(float *)(lVar16 + 0xd4);
  fVar36 = *(float *)(lVar16 + 0xd8);
  fVar37 = -2.1474836e+09;
  if (fVar25 != INFINITY) {
    fVar37 = (float)(int)fVar25;
  }
  uVar26 = FUN_03591d3c(fVar32 - fVar24,fVar25 - fVar37);
  *(undefined4 *)(lVar16 + 0x84) = uVar26;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar36 = fVar36 - fVar37;
  *(float *)(lVar16 + 0x88) = unaff_s14;
  uVar26 = FUN_03591d3c(fVar32 - fVar24,fVar36);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar26;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar35 = fVar35 - fVar24;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
  fVar24 = (float)FUN_03591d3c(fVar35,fVar36);
  *(float *)(lVar16 + 0xd4) = fVar24;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  *(float *)(lVar16 + 0xd8) = unaff_s14;
  uVar26 = FUN_03591d3c(fVar35,fVar25 - fVar37);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar26;
  uVar33 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  if (((int)unaff_w25 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)unaff_w21 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar33 <= unaff_w25) goto LAB_035575f4;
      lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(ulong *)(lVar23 + 0x70) =
           CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar23 + 0x70));
      *(float *)(lVar23 + 0x78) = fVar28 + *(float *)(lVar23 + 0x78);
      *(ulong *)(lVar23 + 0x98) =
           CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar23 + 0x98));
      *(float *)(lVar23 + 0xa0) = fVar28 + *(float *)(lVar23 + 0xa0);
      *(ulong *)(lVar23 + 0xc0) =
           CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar23 + 0xc0));
      *(float *)(lVar23 + 200) = fVar28 + *(float *)(lVar23 + 200);
      *(ulong *)(lVar23 + 0xe8) =
           CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar23 + 0xe8));
      *(float *)(lVar23 + 0xf0) = fVar28 + *(float *)(lVar23 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)unaff_w21 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w25 < uVar33) {
        if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar23 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(ulong *)(lVar23 + 0x70) =
               CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                        fVar29 + (float)*(undefined8 *)(lVar23 + 0x70));
          *(float *)(lVar23 + 0x78) = fVar28 + *(float *)(lVar23 + 0x78);
          *(ulong *)(lVar23 + 0x98) =
               CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                        fVar29 + (float)*(undefined8 *)(lVar23 + 0x98));
          *(float *)(lVar23 + 0xa0) = fVar28 + *(float *)(lVar23 + 0xa0);
          *(ulong *)(lVar23 + 0xc0) =
               CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                        fVar29 + (float)*(undefined8 *)(lVar23 + 0xc0));
          *(float *)(lVar23 + 200) = fVar28 + *(float *)(lVar23 + 200);
          *(ulong *)(lVar23 + 0xe8) =
               CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                        fVar29 + (float)*(undefined8 *)(lVar23 + 0xe8));
          *(float *)(lVar23 + 0xf0) = fVar28 + *(float *)(lVar23 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar33 = *(uint *)(in_stack_000000f0 + 0x18);
  }
  puVar6 = PTR_DAT_03cbded8;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar16 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar16 + 0x78) = uVar26;
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar16 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar16 + 0xa0) = uVar26;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar16 + 200) = uVar26;
  uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar16 + 0xf0) = uVar26;
  *(undefined1 *)(lVar23 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar10 == 0) {
    pcVar19 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar19)();
  }
  else if (iVar10 == 1) {
    pcVar19 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar23 = lVar23 + unaff_x24 * 0x178;
  uVar30 = *(undefined8 *)(lVar23 + 0x11c);
  *(undefined8 *)(lVar23 + 0x11c) =
       CONCAT44(fVar27 + (float)((ulong)uVar30 >> 0x20),fVar29 + (float)uVar30);
  *(float *)(lVar23 + 0x124) = fVar28 + *(float *)(lVar23 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar23 = lVar23 + unaff_x24 * 0x178;
  *(ulong *)(lVar23 + 0x110) =
       CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0x110) >> 0x20),
                fVar29 + (float)*(undefined8 *)(lVar23 + 0x110));
  *(float *)(lVar23 + 0x118) = fVar28 + *(float *)(lVar23 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar23 = lVar23 + unaff_x24 * 0x178;
  *(ulong *)(lVar23 + 0x128) =
       CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar23 + 0x128) >> 0x20),
                fVar29 + (float)*(undefined8 *)(lVar23 + 0x128));
  *(float *)(lVar23 + 0x130) = fVar28 + *(float *)(lVar23 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar23 = lVar23 + unaff_x24 * 0x178;
  *(float *)(lVar23 + 0x134) = fVar29 + *(float *)(lVar23 + 0x134);
  *(ulong *)(lVar23 + 0x138) =
       CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar23 + 0x138) >> 0x20),
                fVar27 + (float)*(undefined8 *)(lVar23 + 0x138));
  lVar23 = *in_stack_00000170;
  if ((lVar23 == 0) || (lVar16 = *(long *)(lVar23 + 0x38), lVar16 == 0)) goto LAB_035574b8;
  uVar33 = *(uint *)(lVar16 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  lVar20 = lVar16 + unaff_x24 * 0x178;
  uVar12 = CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0x140) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar20 + 0x140));
  fVar28 = fVar27 + *(float *)(lVar20 + 0x150);
  uVar31 = (ulong)(uint)fVar28;
  uVar34 = CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar20 + 0x148) >> 0x20),
                    fVar27 + (float)*(undefined8 *)(lVar20 + 0x148));
  *(float *)(lVar20 + 0x150) = fVar28;
  *(ulong *)(lVar20 + 0x140) = uVar12;
  *(ulong *)(lVar20 + 0x148) = uVar34;
  if (unaff_w21 == uVar11) {
    uVar33 = *unaff_x20 - 1;
    if (unaff_w25 == uVar33) goto LAB_03555b44;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar20 = (long)(int)uVar11;
    lVar17 = lVar23 + lVar20 * 0x5c;
    uVar34 = (ulong)(uint)*(float *)(lVar17 + 0x58);
    fVar28 = fVar27 + *(float *)(lVar17 + 0x54);
    uVar12 = (ulong)(uint)fVar28;
    fVar24 = fVar29 + *(float *)(lVar17 + 0x58);
    uVar31 = (ulong)(uint)fVar24;
    *(ulong *)(lVar17 + 0x4c) =
         CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                  fVar27 + (float)*(undefined8 *)(lVar17 + 0x4c));
    *(float *)(lVar17 + 0x54) = fVar28;
    *(float *)(lVar17 + 0x58) = fVar24;
    if (uVar33 <= *(uint *)(lVar17 + 0x34)) goto LAB_035575f4;
    uVar26 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar17 + 0x34) * 0x178 + 0x11c);
    lVar23 = lVar23 + lVar20 * 0x5c;
    *(float *)(lVar23 + 0x70) = fVar28;
    *(undefined4 *)(lVar23 + 0x6c) = uVar26;
    lVar23 = *in_stack_00000170;
    if ((lVar23 == 0) || (lVar16 = *(long *)(lVar23 + 0x50), lVar16 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_035574b8;
    uVar33 = *(uint *)(lVar16 + lVar20 * 0x5c + 0x40);
    if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035575f4;
    lVar16 = lVar16 + lVar20 * 0x5c;
    *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar33 * 0x178 + 0x128);
    *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    uVar33 = *unaff_x20 - 1;
LAB_03555b44:
    if (unaff_w25 == uVar33) {
      lVar23 = *in_stack_00000170;
      if ((lVar23 == 0) || (lVar16 = *(long *)(lVar23 + 0x50), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar20 = lVar16 + unaff_x26 * 0x5c;
      uVar34 = (ulong)(uint)*(float *)(lVar20 + 0x58);
      uVar12 = CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                        fVar27 + (float)*(undefined8 *)(lVar20 + 0x4c));
      fVar28 = fVar27 + *(float *)(lVar20 + 0x54);
      fVar29 = fVar29 + *(float *)(lVar20 + 0x58);
      uVar31 = (ulong)(uint)fVar29;
      *(ulong *)(lVar20 + 0x4c) = uVar12;
      *(float *)(lVar20 + 0x54) = fVar28;
      *(float *)(lVar20 + 0x58) = fVar29;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar20 + 0x34)) goto LAB_035575f4;
      uVar26 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar20 + 0x34) * 0x178 + 0x11c);
      lVar16 = lVar16 + unaff_x26 * 0x5c;
      *(float *)(lVar16 + 0x70) = fVar28;
      *(undefined4 *)(lVar16 + 0x6c) = uVar26;
      lVar23 = *in_stack_00000170;
      if ((lVar23 == 0) || (lVar16 = *(long *)(lVar23 + 0x50), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_035574b8;
      uVar33 = *(uint *)(lVar16 + unaff_x26 * 0x5c + 0x40);
      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035575f4;
      lVar16 = lVar16 + unaff_x26 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar33 * 0x178 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar13 = FUN_026b82c4(in_stack_00000168._4_4_,0);
  if (((((uVar13 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
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
      uVar13 = FUN_026b81f8(in_stack_00000168._4_4_,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar13 & 1) == 0)) && (*unaff_x20 != 1))
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
      uVar13 = FUN_026b82c4(uVar4,0);
      if ((uVar13 & 1) != 0) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_00000120 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b82c4(uVar4,0);
        if ((uVar13 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b82c4(in_stack_00000168._4_4_,0);
      iVar10 = iStack0000000000000128;
      if ((uVar13 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar10 = uStack000000000000015c - 2;
    }
    lVar23 = *in_stack_00000170;
    if (lVar23 == 0) goto LAB_035574b8;
    lVar16 = *(long *)(lVar23 + 0x40);
    if (lVar16 == 0) goto LAB_035574b8;
    uVar33 = *(uint *)(lVar23 + 0x24);
    iVar9 = *(int *)(lVar16 + 0x18);
    if (iVar9 < (int)(uVar33 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar23 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar23 = *in_stack_00000170;
      if (lVar23 == 0) goto LAB_035574b8;
    }
    lVar23 = *(long *)(lVar23 + 0x40);
    if (lVar23 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035575f4;
    lVar23 = lVar23 + (long)(int)uVar33 * 0x18;
    *(long **)(lVar23 + 0x20) = unaff_x19;
    *(uint *)(lVar23 + 0x28) = uStack0000000000000158;
    *(int *)(lVar23 + 0x2c) = iVar10;
    *(uint *)(lVar23 + 0x30) = (iVar10 - uStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar23 = unaff_x19[0x6d];
    if (lVar23 == 0) goto LAB_035574b8;
    lVar16 = *(long *)(lVar23 + 0x50);
    *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
    if (lVar16 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
    lVar16 = lVar16 + unaff_x26 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      uStack0000000000000158 = unaff_w25;
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      lVar23 = *in_stack_00000170;
      if (lVar23 == 0) goto LAB_035574b8;
      lVar16 = *(long *)(lVar23 + 0x40);
      if (lVar16 == 0) goto LAB_035574b8;
      uVar33 = *(uint *)(lVar23 + 0x24);
      iVar10 = *(int *)(lVar16 + 0x18);
      if (iVar10 < (int)(uVar33 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar23 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar23 = *in_stack_00000170;
        if (lVar23 == 0) goto LAB_035574b8;
      }
      lVar23 = *(long *)(lVar23 + 0x40);
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)uVar33 * 0x18;
      *(long **)(lVar23 + 0x20) = unaff_x19;
      *(uint *)(lVar23 + 0x28) = uStack0000000000000158;
      *(uint *)(lVar23 + 0x2c) = unaff_w25;
      *(uint *)(lVar23 + 0x30) = uStack000000000000015c - uStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar23 = unaff_x19[0x6d];
      if (lVar23 == 0) goto LAB_035574b8;
      lVar16 = *(long *)(lVar23 + 0x50);
      *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
      if (lVar16 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar16 = lVar16 + unaff_x26 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  uVar33 = *(uint *)(lVar23 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  uVar18 = (uint)in_stack_000000e0;
  uVar11 = (uint)in_stack_00000150;
  if ((*(byte *)(lVar23 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar33 <= uStack000000000000015c - 2) goto LAB_035575f4;
      lVar16 = *unaff_x19;
      uVar33 = *(uint *)(lVar23 + in_stack_00000120 + -0x330);
      uVar26 = *(undefined4 *)(lVar23 + in_stack_00000120 + -0x2f8);
LAB_035562ec:
      pcVar19 = *(code **)(lVar16 + 0x8d8);
LAB_035562f4:
      uVar34 = (ulong)uVar33;
      uVar12 = (ulong)(uint)fStack0000000000000070;
      uVar31 = (ulong)uStack0000000000000074;
      (*pcVar19)(in_stack_00000078,uVar12,uVar31,uVar34,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar26);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *(long *)puVar6;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar23 = lVar23 + unaff_x24 * 0x178;
    iVar10 = *(int *)(lVar23 + 0x68);
    *(undefined4 *)(lVar23 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
    if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar13 & 1) == 0)) {
      lVar23 = *in_stack_00000170;
      if ((lVar23 == 0) || (lVar16 = *(long *)(lVar23 + 0x38), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w25) goto LAB_035575f4;
      fVar28 = *(float *)(lVar16 + unaff_x24 * 0x178 + 0x160);
      if (unaff_s15 <= fVar28) {
        unaff_s15 = fVar28;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar10 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *in_stack_00000170;
          if (lVar23 == 0) goto LAB_035574b8;
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar16 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar16 + 0x15a8);
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar29 = *(float *)(lVar23 + unaff_x24 * 0x178 + 0x14c);
      fVar28 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar29 = fVar29 + unaff_s15 * fVar28;
      if (fVar29 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar29;
      }
      uVar12 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar10;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar11 < (int)unaff_w25)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (unaff_w25 == uVar11) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar13 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar23 = lVar23 + unaff_x24 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar23 + 0x160);
      in_stack_00000078 = *(uint *)(lVar23 + 0x11c);
      uVar31 = (ulong)in_stack_00000078;
      bVar7 = unaff_s15 != 0.0;
      fVar28 = in_stack_00000088._4_4_;
      if (bVar7) {
        fVar28 = unaff_s15;
      }
      unaff_s15 = fVar28;
      in_stack_00000090 = *(undefined4 *)(lVar23 + 0x168);
      uStack0000000000000074 = 0;
      fVar28 = unaff_s14;
      if (bVar7) {
        fVar28 = fStack0000000000000100;
      }
      uVar12 = (ulong)(uint)fVar28;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar28;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + unaff_x24 * 0x178;
          lVar16 = *unaff_x19;
          uVar33 = *(uint *)(lVar23 + 0x128);
          uVar26 = *(undefined4 *)(lVar23 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((unaff_w25 == uVar18) || ((int)uVar11 <= (int)unaff_w25)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 != 0) && (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0))
      {
        lVar16 = unaff_x24;
        uVar33 = unaff_w25;
        if (in_stack_00000168._4_4_ == 0x200b || (uVar12 & 1) != 0) {
          lVar16 = in_stack_00000150;
          uVar33 = uVar11;
        }
        if (uVar33 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + lVar16 * 0x178;
          uVar33 = *(uint *)(lVar23 + 0x128);
          uVar26 = *(undefined4 *)(lVar23 + 0x160);
          pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0))
      {
        uVar33 = *(uint *)(lVar23 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      uVar13 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar23 + in_stack_00000120),0);
      if ((uVar13 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0)) {
          if (unaff_w25 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + unaff_x24 * 0x178;
            uVar34 = (ulong)*(uint *)(lVar23 + 0x128);
            uVar31 = (ulong)uStack0000000000000074;
            uVar12 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000078,uVar12,uVar31,uVar34,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar23 + 0x160));
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar6;
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
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
  if (in_stack_00000108 == 0) goto LAB_035574b8;
  uVar33 = *(uint *)(lVar23 + unaff_x24 * 0x178 + 400);
  fVar28 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
  if ((uVar33 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
      uVar33 = *(uint *)(lVar23 + in_stack_00000120 + -0x330);
      fVar27 = *(float *)(lVar23 + in_stack_00000120 + -0x30c);
      pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar34 = (ulong)uVar33;
      uVar12 = (ulong)(uint)fStack000000000000009c;
      uVar31 = (ulong)uStack0000000000000098;
      (*pcVar19)(in_stack_000000a0,uVar12,uVar31,uVar34,in_stack_000000a8 * fVar28 + fVar27,0,
                 in_stack_000000a8,in_stack_000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar23 = *in_stack_00000170;
    if ((lVar23 == 0) || (lVar16 = *(long *)(lVar23 + 0x38), lVar16 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar16 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(undefined4 *)(lVar16 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar16 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
        ((int)uVar11 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (unaff_w25 == uVar11) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar13 & 1) != 0) goto LAB_035564e8;
        lVar23 = *in_stack_00000170;
        if (lVar23 == 0) goto LAB_035574b8;
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar23 = lVar23 + unaff_x24 * 0x178;
      in_stack_00000040 = *(float *)(lVar23 + 0x60);
      in_stack_00000038 = *(float *)(lVar23 + 0x14c);
      uVar12 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar23 + 0x11c);
      uVar31 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar23 + 0x160);
      fStack000000000000009c = fVar28 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar10 = *unaff_x20;
    if (iVar10 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + unaff_x24 * 0x178;
          lVar16 = *unaff_x19;
          uVar33 = *(uint *)(lVar23 + 0x128);
          fVar27 = *(float *)(lVar23 + 0x14c);
LAB_03556654:
          pcVar19 = *(code **)(lVar16 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (unaff_w25 == uVar18) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((*in_stack_00000170 != 0) && (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0))
      {
        uVar33 = *(uint *)(lVar23 + 0x18);
        if (in_stack_00000168._4_4_ == 0x200b || (uVar12 & 1) != 0) {
          if (uVar33 <= uVar11) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          in_stack_00000150 = unaff_x24;
          if (uVar33 <= unaff_w25) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar23 = lVar23 + in_stack_00000150 * 0x178;
        fVar27 = *(float *)(lVar23 + 0x14c);
        uVar33 = *(uint *)(lVar23 + 0x128);
        pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < iVar10) {
      lVar23 = *in_stack_00000170;
      if ((lVar23 != 0) && (lVar16 = *(long *)(lVar23 + 0x38), lVar16 != 0)) {
        if (uStack000000000000015c < *(uint *)(lVar16 + 0x18)) {
          if (*(float *)(lVar16 + in_stack_00000120 + -0x108) == in_stack_00000040) {
            fVar29 = *(float *)(lVar16 + in_stack_00000120 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = (ulong)(uint)in_stack_00000038;
            uVar13 = FUN_03567bac(fVar27 + fVar29,uVar12,0);
            if ((uVar13 & 1) != 0) {
              iVar10 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar23 = *in_stack_00000170;
            if (lVar23 == 0) goto LAB_035574b8;
          }
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 != 0) {
            uVar33 = *(uint *)(lVar23 + 0x18);
            if ((int)unaff_w25 <= (int)uVar11) goto FUN_035568e8;
            if (uVar11 < uVar33) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)unaff_w25 < iVar10) {
      iVar10 = FUN_036d3364(in_stack_00000108,0);
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      lVar23 = *(long *)(in_stack_000000f0 + in_stack_00000120 + -0x130);
      if (lVar23 == 0) goto LAB_035574b8;
      iVar9 = FUN_036d3364(lVar23,0);
      if (iVar10 != iVar9) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 != 0))
      {
        if (uStack000000000000015c - 2 < *(uint *)(lVar23 + 0x18)) {
          lVar16 = *unaff_x19;
          uVar33 = *(uint *)(lVar23 + in_stack_00000120 + -0x330);
          fVar27 = *(float *)(lVar23 + in_stack_00000120 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  uVar33 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar23 + unaff_x24 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar31 = (ulong)uStack00000000000000c0;
      uVar12 = (ulong)(uint)fStack00000000000000dc;
      uVar34 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar12,uVar31,uVar34,fStack00000000000000d0,uVar31);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar23 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((in_stack_00000110._4_4_ & 1) == 0) {
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar11 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
      if (unaff_w25 == uVar11) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        if ((uVar13 & 1) != 0) goto LAB_035569b4;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *(long *)puVar6;
      }
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      uVar33 = (uint)*(undefined8 *)(lVar23 + 0x18);
      if (uVar33 <= unaff_w25) goto LAB_035575f4;
      lVar16 = *(long *)(lVar16 + 0xb8);
      lVar20 = lVar23 + unaff_x24 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar20 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar20 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar16 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar16 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar20 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar16 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar16 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar23 = lVar23 + unaff_x24 * 0x178;
    fVar28 = *(float *)(lVar23 + 0x128);
    fVar25 = *(float *)(lVar23 + 0x188);
    uVar21 = *(undefined8 *)(lVar23 + 0x17c);
    fVar37 = *(float *)(lVar23 + 0x184);
    uVar30 = *(undefined8 *)(lVar23 + 0x184);
    fVar32 = *(float *)(lVar23 + 0x18c);
    fVar27 = *(float *)(lVar23 + 0x11c);
    fVar24 = *(float *)(lVar23 + 0x148);
    fVar29 = *(float *)(lVar23 + 0x150);
    in_stack_00000178 = uVar21;
    fStack0000000000000180 = fVar37;
    fStack0000000000000184 = fVar25;
    in_stack_00000188 = fVar32;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar12 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar12 & 1) == 0) {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar23);
      }
      fVar28 = fVar28 + (float)in_stack_000017b8;
      uVar31 = (ulong)(uint)fVar28;
      fVar27 = fVar27 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar29 = fVar29 - in_stack_000017c0;
      uVar12 = (ulong)(uint)fVar29;
      fVar24 = fVar24 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar34 = (ulong)(uint)fVar24;
      if (fVar27 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar27;
      }
      if (fVar29 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar29;
      }
      if (in_stack_000000c8 <= fVar28) {
        in_stack_000000c8 = fVar28;
      }
      if (fStack00000000000000d0 <= fVar24) {
        fStack00000000000000d0 = fVar24;
      }
    }
    else {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar23);
      }
      fVar27 = (fVar27 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar34 = (ulong)(uint)fVar27;
      if (fVar29 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar29;
      }
      uVar12 = (ulong)(uint)fStack00000000000000dc;
      uVar31 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar24) {
        fStack00000000000000d0 = fVar24;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar12,uVar31,uVar34,fStack00000000000000d0,uVar31);
      fStack00000000000000dc = fVar29 - fVar32;
      in_stack_000000c8 = fVar28 + fVar37;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar24 + fVar25;
      fStack00000000000000d8 = fVar27;
      in_stack_000017b0 = uVar21;
      in_stack_000017b8 = uVar30;
      in_stack_000017c0 = fVar32;
    }
    if (((*unaff_x20 == 1) || (unaff_w25 == uVar18)) ||
       (((int)uVar11 <= (int)unaff_w25 || (!bVar1)))) {
      uVar31 = (ulong)uStack00000000000000c0;
      uVar12 = (ulong)(uint)fStack00000000000000dc;
      uVar34 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar12,uVar31,uVar34,fStack00000000000000d0,uVar31);
      in_stack_00000110._4_4_ = 0;
    }
    else {
      in_stack_00000110._4_4_ = 1;
    }
  }
  puVar6 = OVRPlugin_Media_TypeInfo;
  iVar10 = *unaff_x20;
  uVar33 = uStack000000000000015c + 1;
  in_stack_00000120 = in_stack_00000120 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  if (iVar10 <= (int)uStack000000000000015c) {
    lVar23 = *in_stack_00000170;
    if (lVar23 == 0) goto LAB_035574b8;
    *(int *)(lVar23 + 0x18) = iVar10;
    lVar16 = unaff_x19[0xd4];
    *(uint *)(lVar23 + 0x2c) = unaff_w21 + 1;
    if (iVar10 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar16;
    *(int *)(lVar23 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar13 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar13 & 1) == 0)) goto LAB_03554724;
    lVar23 = unaff_x19[0xdf];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar23 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar10 != 0x19) {
      lVar23 = unaff_x19[0xe5];
      if (lVar23 == 0) goto LAB_035574b8;
      uVar33 = FUN_03911ee4(lVar23,0);
      FUN_03911f20(lVar23,uVar33 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x60), lVar23 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x30),0);
    if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x48),0);
    if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x50),0);
    if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x58),0);
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa280(unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar30 = FUN_0390ef60(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar33 = FUN_0390ed3c(unaff_x19[0xe4],0);
    lVar23 = *in_stack_00000170;
    if (lVar23 == 0) goto LAB_035574b8;
    lVar20 = 0;
    lVar16 = 0;
    goto LAB_03557110;
  }
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x50), lVar23 == 0))
  goto LAB_035574b8;
  unaff_x24 = (long)(int)uStack000000000000015c;
  lVar16 = in_stack_000000f0 + unaff_x24 * 0x178;
  in_stack_00000160 = *(uint *)(lVar16 + 100);
  if (*(uint *)(lVar23 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
  unaff_x26 = (long)(int)in_stack_00000160;
  lVar23 = lVar23 + unaff_x26 * 0x5c;
  in_stack_00000108 = *(long *)(lVar16 + 0x38);
  uVar3 = *(ushort *)(lVar16 + 0x20);
  uVar5 = *(uint *)(lVar23 + 0x3c);
  in_stack_000000e0 = (long)(int)uVar5;
  uVar18 = *(uint *)(lVar23 + 0x68);
  iVar2 = *(int *)(lVar23 + 0x20);
  iVar10 = *(int *)(lVar23 + 0x28);
  iVar9 = *(int *)(lVar23 + 0x2c);
  in_stack_00000150 = (long)*(int *)(lVar23 + 0x40);
  in_stack_00000140 = *(float *)(lVar23 + 0x4c);
  in_stack_00000130 = *(float *)(lVar23 + 0x54);
  fVar27 = *(float *)(lVar23 + 0x58);
  fVar29 = *(float *)(lVar23 + 0x5c);
  fVar28 = *(float *)(lVar23 + 0x60);
  unaff_s9 = *(float *)(lVar23 + 0x6c);
  unaff_s13 = *(float *)(lVar23 + 0x70);
  unaff_s12 = *(float *)(lVar23 + 0x74);
  in_stack_00000060 = *(float *)(lVar23 + 0x78);
  in_stack_00000168._4_4_ = (uint)uVar3;
  unaff_w25 = uStack000000000000015c;
  uVar11 = unaff_w21;
  if ((int)uVar18 < 9) goto code_r0x03554f44;
  if (uVar18 == 0x10) goto switchD_03554f58_caseD_8;
  if (uVar18 == 0x20) {
    fVar27 = unaff_s9 + unaff_s12;
    goto LAB_03555018;
  }
  goto switchD_03554f58_caseD_3;
code_r0x03554f44:
  switch(uVar18) {
  case 1:
    if ((char)unaff_x19[0x1e] == '\0') {
      in_stack_000000f8._4_4_ = fVar28 + 0.0;
    }
    else {
      in_stack_000000f8._4_4_ = 0.0 - fVar27;
    }
    break;
  case 2:
LAB_03555018:
    in_stack_000000f8._4_4_ = (fVar28 + fVar29 * 0.5) - fVar27 * 0.5;
    break;
  default:
    goto switchD_03554f58_caseD_3;
  case 4:
    in_stack_000000f8._4_4_ = (fVar29 + fVar28) - fVar27;
    if ((char)unaff_x19[0x1e] != '\0') {
      in_stack_000000f8._4_4_ = fVar29 + fVar28;
    }
    break;
  case 8:
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
    uVar12 = FUN_026b8cc4(uVar4,0);
    if ((uVar12 & 1) == 0) {
      bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
    }
    else {
      bVar1 = false;
    }
    if ((fVar27 <= fVar29) && (!bVar1 && uVar18 >> 4 == 0)) {
      in_stack_000000f8._4_4_ = fVar28;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar29 + fVar28;
      }
      break;
    }
    if (((uVar33 == 1) || (in_stack_00000160 != unaff_w21)) ||
       (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) goto LAB_03555300;
    cVar15 = (char)unaff_x19[0x1e];
    fVar28 = -fVar27;
    if (cVar15 != '\0') {
      fVar28 = fVar27;
    }
    if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
    iVar9 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
            (-iVar2 - (uVar8 & 1)) + iVar9 + -1;
    if (iVar9 < 1) {
      fVar27 = 1.0;
      iVar9 = 1;
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
        uVar12 = FUN_026b97f8(in_stack_00000168._4_4_,0);
        cVar15 = (char)unaff_x19[0x1e];
        if ((uVar12 & 1) != 0) goto LAB_03556e74;
      }
      iVar9 = (iVar2 - (~uVar8 & 1)) + iVar10;
    }
    fVar27 = ((fVar29 + fVar28) * fVar27) / (float)iVar9;
    if (cVar15 == '\0') {
      in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar27;
      fStack00000000000000e8 = fStack00000000000000e8 + 0.0;
      fStack00000000000000ec = fStack00000000000000ec + 0.0;
    }
    else {
      in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar27;
    }
    goto switchD_03554f58_caseD_3;
  }
  fStack00000000000000e8 = 0.0;
  fStack00000000000000ec = 0.0;
  goto switchD_03554f58_caseD_3;
LAB_03555300:
  in_stack_000000f8._4_4_ = fVar28;
  if ((char)unaff_x19[0x1e] != '\0') {
    in_stack_000000f8._4_4_ = fVar29 + fVar28;
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  param_1 = (ulong)in_stack_00000168._4_4_;
  param_2 = 0;
  uStack000000000000015c = uVar33;
  goto code_r0x03555334;
  while( true ) {
    lVar23 = *in_stack_00000170;
    lVar16 = lVar16 + 1;
    lVar20 = lVar20 + 0x50;
    if (lVar23 == 0) break;
LAB_03557110:
    uVar13 = lVar16 + 1;
    if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar13) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar23 = *(long *)(lVar23 + 0x60);
    if (lVar23 == 0) break;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
    FUN_03596a20(lVar23 + lVar20 + 0x70,0);
    lVar23 = unaff_x19[0xe1];
    if (lVar23 == 0) break;
    if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
    uVar21 = *(undefined8 *)(lVar23 + lVar16 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036d35a8(uVar21,0,0);
    if ((uVar14 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar23 = *(long *)(*in_stack_00000170 + 0x60), lVar23 == 0)) break;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar13) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar23 + lVar20 + 0x70,1,0);
      }
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if (lVar23 == 0) break;
      lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar23 == 0) break;
      FUN_036a460c(lVar23,*(undefined8 *)(lVar17 + lVar20 + 0x80),0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if (lVar23 == 0) break;
      lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar23 == 0) break;
      FUN_036a4810(lVar23,*(undefined8 *)(lVar17 + lVar20 + 0x98),0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if (lVar23 == 0) break;
      lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar23 == 0) break;
      FUN_036a48bc(lVar23,*(undefined8 *)(lVar17 + lVar20 + 0xa0),0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if (lVar23 == 0) break;
      lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar23 == 0) break;
      FUN_036a4e24(lVar23,*(undefined8 *)(lVar17 + lVar20 + 0xa8),0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if ((lVar23 == 0) || (lVar23 = UnityEngine_Material__GetColorArray(lVar23,0), lVar23 == 0))
      break;
      FUN_036aa280(lVar23,0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if (lVar23 == 0) break;
      lVar23 = FUN_037b514c(lVar23,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar16 * 8 + 0x28);
      if ((lVar17 == 0) || (uVar21 = UnityEngine_Material__GetColorArray(lVar17,0), lVar23 == 0))
      break;
      FUN_0390f3a4(lVar23,uVar21,0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if ((lVar23 == 0) || (lVar23 = FUN_037b514c(lVar23,0), lVar23 == 0)) break;
      FUN_0390eec8(uVar30,uVar12,uVar31,uVar34,lVar23,0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + lVar16 * 8 + 0x28);
      if ((lVar23 == 0) || (lVar23 = FUN_037b514c(lVar23,0), lVar23 == 0)) break;
      FUN_0390ed78(lVar23,uVar33 & 1,0);
      lVar23 = unaff_x19[0xe1];
      if (lVar23 == 0) break;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      plVar22 = *(long **)(lVar23 + lVar16 * 8 + 0x28);
      uVar11 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar22 == (long *)0x0) break;
      (**(code **)(*plVar22 + 0x2c8))(plVar22,uVar11 & 1,*(undefined8 *)(*plVar22 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


