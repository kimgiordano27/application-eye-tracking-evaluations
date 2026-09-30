/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual$$ClearReticle
ENTRY_POINT: 02490f6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__ClearReticle
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined1 param_5 [16],float param_6,float param_7,float param_8)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined *puVar4;
  char in_NG;
  bool bVar5;
  char in_OV;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint in_w8;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int in_w9;
  code *pcVar15;
  long lVar16;
  long *in_x11;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 uVar17;
  int unaff_w24;
  long lVar18;
  long unaff_x26;
  int unaff_w27;
  long *plVar19;
  long unaff_x29;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float unaff_s8;
  float unaff_s9;
  float fVar30;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar31;
  float unaff_s15;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  int iStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  float in_stack_00000098;
  float fStack00000000000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  uint uStack00000000000000e0;
  int iStack00000000000000e4;
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  float in_stack_000000f0;
  float in_stack_00000100;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  uint in_stack_00000138;
  undefined8 in_stack_00000140;
  int *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined4 in_stack_000017a4;
  
code_r0x02490f6c:
  if (in_NG == in_OV) {
    unaff_s13 = *(float *)((long)unaff_x19 + 0x2d4);
  }
  if (in_w9 < 1) {
    in_w9 = 1;
  }
  if (in_stack_00000140._4_4_ == 9) {
LAB_02490fe0:
    unaff_s13 = 1.0 - unaff_s13;
    fStack000000000000002c = param_7;
    fStack0000000000000028 = param_8;
  }
  else {
    if (in_stack_00000140._4_4_ != 0xa0) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
      in_w8 = (uint)*(byte *)(unaff_x19 + 0x1d);
      in_x11 = (long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      param_4 = in_stack_00000100;
      param_6 = in_stack_000000f0;
      param_7 = fStack000000000000002c;
      param_8 = fStack0000000000000028;
      if ((uVar8 & 1) != 0) goto LAB_02490fe0;
    }
    in_w9 = (unaff_w24 - (~in_stack_00000020._4_4_ & 1)) + unaff_w27;
    fStack000000000000002c = param_7;
    fStack0000000000000028 = param_8;
  }
  fVar23 = ((unaff_s12 + param_1) * unaff_s13) / (float)in_w9;
  uVar14 = in_stack_00000130._4_4_;
  if (in_w8 == 0) {
    in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar23;
    in_stack_000000b8 =
         CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,(float)in_stack_000000b8 + 0.0);
  }
  else {
    in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar23;
  }
switchD_0248f070_caseD_3:
  uVar3 = in_stack_00000138;
  in_stack_00000130._4_4_ = uVar14;
  uVar14 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
  if (uVar14 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar18 = unaff_x21 + unaff_x26 * unaff_x29;
  fVar27 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar23 = (float)in_stack_00000088 + (float)in_stack_000000b8;
  fVar24 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar18 + 0x194) == '\0') goto LAB_0248fabc;
  iVar6 = *(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x2c);
  if (iVar6 != 0) goto LAB_0248f808;
  fVar20 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar3,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
    *(undefined4 *)(lVar11 + 0x84) = 0;
    *(undefined4 *)(lVar11 + 0xac) = 0;
    *(undefined4 *)(lVar11 + 0xd4) = 0x3f800000;
    fVar20 = 1.0;
    break;
  case 1:
    fVar21 = *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar21 = (in_stack_000000c0._4_4_ + fVar21) - *(float *)(in_stack_00000070 + 0x230);
      fVar26 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar26 = unaff_s8 - unaff_s9;
    *(float *)(lVar11 + 0x84) = fVar20 + (fVar21 - unaff_s9) / fVar26;
    *(float *)(lVar11 + 0xac) = fVar20 + (*(float *)(lVar11 + 0x98) - unaff_s9) / fVar26;
    *(float *)(lVar11 + 0xd4) = fVar20 + (*(float *)(lVar11 + 0xc0) - unaff_s9) / fVar26;
    fVar20 = fVar20 + (*(float *)(lVar11 + 0xe8) - unaff_s9) / fVar26;
    break;
  case 2:
    lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar26 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar21 = (in_stack_000000c0._4_4_ + *(float *)(lVar11 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar11 + 0x84) = fVar20 + fVar21 / fVar26;
    *(float *)(lVar11 + 0xac) =
         fVar20 + ((in_stack_000000c0._4_4_ + *(float *)(lVar11 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar11 + 0xd4) =
         fVar20 + ((in_stack_000000c0._4_4_ + *(float *)(lVar11 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar20 = fVar20 + ((in_stack_000000c0._4_4_ + *(float *)(lVar11 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
      *(undefined4 *)(lVar11 + 0x88) = 0;
      *(undefined4 *)(lVar11 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0xd8) = 0;
      *(undefined4 *)(lVar11 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar21 = fVar20 + (*(float *)(lVar11 + 0x74) - fStack000000000000002c) /
                        (fStack0000000000000028 - fStack000000000000002c);
      fVar26 = fVar20 + (*(float *)(lVar11 + 0x9c) - fStack000000000000002c) /
                        (fStack0000000000000028 - fStack000000000000002c);
      *(float *)(lVar11 + 0x88) = fVar21;
      *(float *)(lVar11 + 0xb0) = fVar26;
      *(float *)(lVar11 + 0xd8) = fVar21;
      *(float *)(lVar11 + 0x100) = fVar26;
      break;
    case 2:
      lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar21 = fVar20 + (*(float *)(lVar11 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar11 + 0x88) = fVar21;
      fVar26 = *(float *)(unaff_x19 + 0x9b);
      fVar31 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar11 + 0xd8) = fVar21;
      fVar21 = fVar20 + (*(float *)(lVar11 + 0x9c) - fVar26) / (fVar31 - fVar26);
      *(float *)(lVar11 + 0xb0) = fVar21;
      *(float *)(lVar11 + 0x100) = fVar21;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar14 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
    }
    if (uVar14 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar21 = *(float *)(lVar11 + 0x15c);
    fVar26 = (1.0 - (*(float *)(lVar11 + 0x88) + *(float *)(lVar11 + 0xb0)) * fVar21) * 0.5;
    fVar31 = fVar20 + *(float *)(lVar11 + 0x88) * fVar21 + fVar26;
    fVar20 = fVar20 + fVar26 + *(float *)(lVar11 + 0xb0) * fVar21;
    *(float *)(lVar11 + 0x84) = fVar31;
    *(float *)(lVar11 + 0xac) = fVar31;
    *(float *)(lVar11 + 0xd4) = fVar20;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = fVar20;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar14 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
    *(undefined4 *)(lVar11 + 0x88) = 0;
    *(undefined4 *)(lVar11 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar11 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar11 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w22 < uVar14) {
      lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar20 = (*(float *)(lVar11 + 0x74) - param_6) / (param_4 - param_6);
      fVar21 = (*(float *)(lVar11 + 0x9c) - param_6) / (param_4 - param_6);
      *(float *)(lVar11 + 0x88) = fVar20;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar14 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar20 = (*(float *)(lVar11 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar11 + 0x88) = fVar20;
    fVar21 = (*(float *)(lVar11 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar11 + 0xb0) = fVar21;
    *(float *)(lVar11 + 0xd8) = fVar21;
    *(float *)(lVar11 + 0x100) = fVar20;
    break;
  case 3:
    if (uVar14 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar26 = *(float *)(lVar11 + 0x15c);
    fVar21 = (1.0 - (*(float *)(lVar11 + 0x84) + *(float *)(lVar11 + 0xd4)) / fVar26) * 0.5;
    fVar20 = *(float *)(lVar11 + 0x84) / fVar26 + fVar21;
    fVar21 = fVar21 + *(float *)(lVar11 + 0xd4) / fVar26;
    *(float *)(lVar11 + 0x88) = fVar20;
    *(float *)(lVar11 + 0xb0) = fVar21;
    *(float *)(lVar11 + 0x100) = fVar20;
    *(float *)(lVar11 + 0xd8) = fVar21;
  }
  if (uVar14 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
  unaff_s11 = in_stack_00000040 * *(float *)(lVar11 + 0x160) *
              (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar11 + 0x5c) == '\0') &&
     ((*(byte *)(unaff_x21 + unaff_x26 * unaff_x29 + 400) & 1) != 0)) {
    unaff_s11 = -unaff_s11;
  }
  lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
  fVar21 = *(float *)(lVar11 + 0x88);
  fVar26 = *(float *)(lVar11 + 0x84);
  fVar20 = -2.1474836e+09;
  if (fVar26 != INFINITY) {
    fVar20 = (float)(int)fVar26;
  }
  fVar29 = *(float *)(lVar11 + 0xd4);
  fVar30 = *(float *)(lVar11 + 0xd8);
  fVar31 = -2.1474836e+09;
  if (fVar21 != INFINITY) {
    fVar31 = (float)(int)fVar21;
  }
  uVar22 = FUN_024e0374(fVar26 - fVar20,fVar21 - fVar31);
  *(undefined4 *)(lVar11 + 0x84) = uVar22;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar30 = fVar30 - fVar31;
  *(float *)(lVar11 + 0x88) = unaff_s11;
  uVar22 = FUN_024e0374(fVar26 - fVar20,fVar30);
  *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xac) = uVar22;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar29 = fVar29 - fVar20;
  *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xb0) = unaff_s11;
  fVar20 = (float)FUN_024e0374(fVar29,fVar30);
  *(float *)(lVar11 + 0xd4) = fVar20;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar11 + 0xd8) = unaff_s11;
  uVar22 = FUN_024e0374(fVar29,fVar21 - fVar31);
  *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = uVar22;
  uVar14 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
  if (uVar14 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x100) = unaff_s11;
  in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
LAB_0248f808:
  if (((int)unaff_w22 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar3 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar14 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar18 + 0x70) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                    fVar27 + (float)*(undefined8 *)(lVar18 + 0x70));
      *(float *)(lVar18 + 0x78) = fVar24 + *(float *)(lVar18 + 0x78);
      plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar18 + 0x98) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                    fVar27 + (float)*(undefined8 *)(lVar18 + 0x98));
      *(float *)(lVar18 + 0xa0) = fVar24 + *(float *)(lVar18 + 0xa0);
      uVar14 = *(uint *)(unaff_x21 + 0x18);
LAB_0248fa4c:
      if (uVar14 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar18 + 0xc0) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                    fVar27 + (float)*(undefined8 *)(lVar18 + 0xc0));
      *(float *)(lVar18 + 200) = fVar24 + *(float *)(lVar18 + 200);
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar18 + 0xe8) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                    fVar27 + (float)*(undefined8 *)(lVar18 + 0xe8));
      *(float *)(lVar18 + 0xf0) = fVar24 + *(float *)(lVar18 + 0xf0);
      if (iVar6 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar15)();
      goto LAB_0248fabc;
    }
    if (((int)uVar3 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (unaff_w22 < uVar14) {
        if (*(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x68) != iStack0000000000000030)
        goto LAB_0248f8d8;
        lVar18 = unaff_x21 + unaff_x26 * unaff_x29;
        *(ulong *)(lVar18 + 0x70) =
             CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                      fVar27 + (float)*(undefined8 *)(lVar18 + 0x70));
        *(float *)(lVar18 + 0x78) = fVar24 + *(float *)(lVar18 + 0x78);
        if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
          lVar18 = unaff_x21 + unaff_x26 * unaff_x29;
          *(ulong *)(lVar18 + 0x98) =
               CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                        fVar27 + (float)*(undefined8 *)(lVar18 + 0x98));
          *(float *)(lVar18 + 0xa0) = fVar24 + *(float *)(lVar18 + 0xa0);
          uVar14 = *(uint *)(unaff_x21 + 0x18);
          plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar14 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(in_x11);
    DAT_03774d76 = '\x01';
    in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
    ;
  }
  lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar11 + 0x70) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar11 + 0x78) = uVar22;
  plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar11 + 0x98) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar11 + 0xa0) = uVar22;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar11 + 0xc0) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar11 + 200) = uVar22;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar11 + 0xe8) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar11 + 0xf0) = uVar22;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar18 + 0x194) = 0;
  if (iVar6 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar6 == 1) {
    pcVar15 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar18 = lVar18 + unaff_x26 * unaff_x29;
  uVar25 = *(undefined8 *)(lVar18 + 0x11c);
  *(undefined8 *)(lVar18 + 0x11c) =
       CONCAT44(fVar23 + (float)((ulong)uVar25 >> 0x20),fVar27 + (float)uVar25);
  *(float *)(lVar18 + 0x124) = fVar24 + *(float *)(lVar18 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar18 = lVar18 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar18 + 0x110) =
       CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0x110) >> 0x20),
                fVar27 + (float)*(undefined8 *)(lVar18 + 0x110));
  *(float *)(lVar18 + 0x118) = fVar24 + *(float *)(lVar18 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar18 = lVar18 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar18 + 0x128) =
       CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar18 + 0x128) >> 0x20),
                fVar27 + (float)*(undefined8 *)(lVar18 + 0x128));
  *(float *)(lVar18 + 0x130) = fVar24 + *(float *)(lVar18 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar18 = lVar18 + unaff_x26 * unaff_x29;
  *(float *)(lVar18 + 0x134) = fVar27 + *(float *)(lVar18 + 0x134);
  *(ulong *)(lVar18 + 0x138) =
       CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0x138) >> 0x20),
                fVar23 + (float)*(undefined8 *)(lVar18 + 0x138));
  lVar18 = *in_stack_00000150;
  if ((lVar18 == 0) || (lVar11 = *(long *)(lVar18 + 0x38), lVar11 == 0)) goto LAB_02491464;
  uVar14 = *(uint *)(lVar11 + 0x18);
  if (uVar14 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar16 = lVar11 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar16 + 0x140) =
       CONCAT44(fVar27 + (float)((ulong)*(undefined8 *)(lVar16 + 0x140) >> 0x20),
                fVar27 + (float)*(undefined8 *)(lVar16 + 0x140));
  *(ulong *)(lVar16 + 0x148) =
       CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar16 + 0x148) >> 0x20),
                fVar23 + (float)*(undefined8 *)(lVar16 + 0x148));
  *(float *)(lVar16 + 0x150) = fVar23 + *(float *)(lVar16 + 0x150);
  if (uVar3 == unaff_w20) {
    uVar14 = *in_stack_00000148 - 1;
    if (unaff_w22 == uVar14) goto LAB_0248fccc;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x50);
    if (lVar18 == 0) goto LAB_02491464;
    if (*(uint *)(lVar18 + 0x18) <= unaff_w20)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar16 = (long)(int)unaff_w20;
    lVar12 = lVar18 + lVar16 * 0x5c;
    fVar24 = fVar23 + *(float *)(lVar12 + 0x54);
    *(ulong *)(lVar12 + 0x4c) =
         CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar12 + 0x4c) >> 0x20),
                  fVar23 + (float)*(undefined8 *)(lVar12 + 0x4c));
    *(float *)(lVar12 + 0x54) = fVar24;
    *(float *)(lVar12 + 0x58) = fVar27 + *(float *)(lVar12 + 0x58);
    if (uVar14 <= *(uint *)(lVar12 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar22 = *(undefined4 *)(lVar11 + (int)*(uint *)(lVar12 + 0x34) * unaff_x29 + 0x11c);
    lVar18 = lVar18 + lVar16 * 0x5c;
    *(float *)(lVar18 + 0x70) = fVar24;
    *(undefined4 *)(lVar18 + 0x6c) = uVar22;
    lVar18 = *in_stack_00000150;
    if ((lVar18 == 0) || (lVar11 = *(long *)(lVar18 + 0x50), lVar11 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w20)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto LAB_02491464;
    uVar14 = *(uint *)(lVar11 + lVar16 * 0x5c + 0x40);
    if (*(uint *)(lVar18 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar11 = lVar11 + lVar16 * 0x5c;
    *(undefined4 *)(lVar11 + 0x74) = *(undefined4 *)(lVar18 + (int)uVar14 * unaff_x29 + 0x128);
    *(undefined4 *)(lVar11 + 0x78) = *(undefined4 *)(lVar11 + 0x4c);
    uVar14 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (unaff_w22 == uVar14) {
      lVar18 = *in_stack_00000150;
      if ((lVar18 == 0) || (lVar11 = *(long *)(lVar18 + 0x50), lVar11 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar11 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = lVar11 + in_stack_00000120 * 0x5c;
      fVar24 = fVar23 + *(float *)(lVar16 + 0x54);
      *(ulong *)(lVar16 + 0x4c) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar16 + 0x4c) >> 0x20),
                    fVar23 + (float)*(undefined8 *)(lVar16 + 0x4c));
      *(float *)(lVar16 + 0x54) = fVar24;
      *(float *)(lVar16 + 0x58) = fVar27 + *(float *)(lVar16 + 0x58);
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_02491464;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar16 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar22 = *(undefined4 *)(lVar18 + (int)*(uint *)(lVar16 + 0x34) * unaff_x29 + 0x11c);
      lVar11 = lVar11 + in_stack_00000120 * 0x5c;
      *(float *)(lVar11 + 0x70) = fVar24;
      *(undefined4 *)(lVar11 + 0x6c) = uVar22;
      lVar18 = *in_stack_00000150;
      if ((lVar18 == 0) || (lVar11 = *(long *)(lVar18 + 0x50), lVar11 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar11 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_02491464;
      uVar14 = *(uint *)(lVar11 + in_stack_00000120 * 0x5c + 0x40);
      if (*(uint *)(lVar18 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar11 = lVar11 + in_stack_00000120 * 0x5c;
      *(undefined4 *)(lVar11 + 0x74) = *(undefined4 *)(lVar18 + (int)uVar14 * unaff_x29 + 0x128);
      *(undefined4 *)(lVar11 + 0x78) = *(undefined4 *)(lVar11 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_016f9468(in_stack_00000140._4_4_,0);
  if (((((uVar8 & 1) == 0) && (1 < in_stack_00000140._4_4_ - 0x2010)) &&
      (in_stack_00000140._4_4_ != 0xad)) && (in_stack_00000140._4_4_ != 0x2d)) {
    if ((in_stack_000000d8._4_4_ & 1) == 0) {
      if (in_stack_00000130._4_4_ != 1) {
LAB_024909a0:
        in_stack_000000d8._4_4_ = 0;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_016f93a0(in_stack_00000140._4_4_,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_016f68bc(in_stack_00000140._4_4_,0);
        if (((in_stack_00000140._4_4_ != 0x200b) && ((uVar8 & 1) == 0)) && (*in_stack_00000148 != 1)
           ) goto LAB_024909a0;
      }
    }
    else if (((in_stack_00000130._4_4_ != 1) &&
             ((int)unaff_w22 < (int)(*(uint *)(unaff_x21 + 0x18) - 1))) &&
            (((int)unaff_w22 < *in_stack_00000148 &&
             ((in_stack_00000140._4_4_ == 0x2019 || (in_stack_00000140._4_4_ == 0x27)))))) {
      if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_ - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar2 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x438);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_016f9468(uVar2,0);
      if ((uVar8 & 1) != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar2 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x148);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_016f9468(uVar2,0);
        if ((uVar8 & 1) != 0) goto LAB_0248fee0;
      }
    }
    if (unaff_w22 == *in_stack_00000148 - 1U) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_016f9468(in_stack_00000140._4_4_,0);
      iVar6 = iStack00000000000000e4;
      if ((uVar8 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar6 = in_stack_00000130._4_4_ - 2;
    }
    lVar18 = *in_stack_00000150;
    if (lVar18 == 0) goto LAB_02491464;
    lVar11 = *(long *)(lVar18 + 0x40);
    if (lVar11 == 0) goto LAB_02491464;
    uVar14 = *(uint *)(lVar18 + 0x24);
    iVar7 = *(int *)(lVar11 + 0x18);
    if (iVar7 < (int)(uVar14 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar18 + 0x40),iVar7 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar18 = *in_stack_00000150;
      if (lVar18 == 0) goto LAB_02491464;
    }
    lVar11 = *(long *)(lVar18 + 0x40);
    if (lVar11 == 0) goto LAB_02491464;
    if (*(uint *)(lVar11 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar11 = lVar11 + (long)(int)uVar14 * 0x18;
    *(long **)(lVar11 + 0x20) = unaff_x19;
    *(uint *)(lVar11 + 0x28) = in_stack_00000110._4_4_;
    *(int *)(lVar11 + 0x2c) = iVar6;
    *(uint *)(lVar11 + 0x30) = (iVar6 - in_stack_00000110._4_4_) + 1;
    lVar11 = *(long *)(lVar18 + 0x50);
    *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
    if (lVar11 == 0) goto LAB_02491464;
    if (*(uint *)(lVar11 + 0x18) <= uVar3)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar11 = lVar11 + in_stack_00000120 * 0x5c;
    in_stack_000000d8._4_4_ = 0;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
  }
  else {
    if ((in_stack_000000d8._4_4_ & 1) == 0) {
      in_stack_00000110._4_4_ = unaff_w22;
    }
    if (unaff_w22 == *in_stack_00000148 - 1U) {
      lVar18 = *in_stack_00000150;
      if (lVar18 == 0) goto LAB_02491464;
      lVar11 = *(long *)(lVar18 + 0x40);
      if (lVar11 == 0) goto LAB_02491464;
      uVar14 = *(uint *)(lVar18 + 0x24);
      iVar6 = *(int *)(lVar11 + 0x18);
      if (iVar6 < (int)(uVar14 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar18 + 0x40),iVar6 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar18 = *in_stack_00000150;
        if (lVar18 == 0) goto LAB_02491464;
      }
      lVar11 = *(long *)(lVar18 + 0x40);
      if (lVar11 == 0) goto LAB_02491464;
      if (*(uint *)(lVar11 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar11 = lVar11 + (long)(int)uVar14 * 0x18;
      *(long **)(lVar11 + 0x20) = unaff_x19;
      *(uint *)(lVar11 + 0x28) = in_stack_00000110._4_4_;
      *(uint *)(lVar11 + 0x2c) = unaff_w22;
      *(uint *)(lVar11 + 0x30) = in_stack_00000130._4_4_ - in_stack_00000110._4_4_;
      lVar11 = *(long *)(lVar18 + 0x50);
      *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      if (lVar11 == 0) goto LAB_02491464;
      if (*(uint *)(lVar11 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar11 = lVar11 + in_stack_00000120 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
    }
LAB_0248fee0:
    in_stack_000000d8._4_4_ = 1;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
  goto LAB_02491464;
  uVar14 = *(uint *)(lVar18 + 0x18);
  if (uVar14 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar13 = (uint)in_stack_000000b0;
  uVar10 = (uint)in_stack_00000118;
  if ((*(byte *)(lVar18 + unaff_x26 * unaff_x29 + 400) >> 2 & 1) == 0) {
    if ((uStack00000000000000ec & 1) == 0) {
LAB_024903d8:
      uStack00000000000000ec = 0;
    }
    else {
LAB_0248ff18:
      if (uVar14 <= in_stack_00000130._4_4_ - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar11 = *unaff_x19;
      uVar22 = *(undefined4 *)(lVar18 + in_stack_00000128 + -0x330);
      uVar28 = *(undefined4 *)(lVar18 + in_stack_00000128 + -0x2f8);
LAB_02490474:
      pcVar15 = *(code **)(lVar11 + 0x908);
LAB_0249047c:
      (*pcVar15)(uStack0000000000000054,fStack000000000000004c,uStack0000000000000050,uVar22,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar28);
      puVar4 = System_Threading_Mutex_TypeInfo;
      lVar18 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar18 = *(long *)puVar4;
      }
LAB_024904cc:
      uStack00000000000000ec = 0;
      unaff_s15 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
  }
  else {
    lVar18 = lVar18 + unaff_x26 * unaff_x29;
    iVar6 = *(int *)(lVar18 + 0x68);
    *(undefined4 *)(lVar18 + 0x16c) = in_stack_000017a4;
    if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar6 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_016f68bc(in_stack_00000140._4_4_,0);
    if ((in_stack_00000140._4_4_ != 0x200b) && ((uVar8 & 1) == 0)) {
      lVar18 = *in_stack_00000150;
      if ((lVar18 == 0) || (lVar11 = *(long *)(lVar18 + 0x38), lVar11 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar24 = *(float *)(lVar11 + unaff_x26 * unaff_x29 + 0x160);
      if (unaff_s15 <= fVar24) {
        unaff_s15 = fVar24;
      }
      if (fStack00000000000000c8 <= ABS(unaff_s11)) {
        fStack00000000000000c8 = ABS(unaff_s11);
      }
      if (iVar6 != iStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar18 = *in_stack_00000150;
          if (lVar18 == 0) goto LAB_02491464;
          lVar11 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar11 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar11 + 0x15a8);
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_02491464;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar27 = *(float *)(lVar18 + unaff_x26 * unaff_x29 + 0x14c);
      fVar24 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar27 = fVar27 + unaff_s15 * fVar24;
      iStack0000000000000048 = iVar6;
      if (fVar27 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar27;
      }
    }
    if ((uStack00000000000000ec & 1) == 0) {
      uStack00000000000000ec = 0;
      if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
          ((int)uVar10 < (int)unaff_w22)) || (!bVar1)) goto LAB_024904e8;
      if (unaff_w22 == uVar10) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
        if ((uVar8 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = lVar18 + unaff_x26 * unaff_x29;
      fStack0000000000000058 = *(float *)(lVar18 + 0x160);
      uStack0000000000000054 = *(undefined4 *)(lVar18 + 0x11c);
      bVar5 = unaff_s15 != 0.0;
      fVar24 = fStack0000000000000058;
      if (bVar5) {
        fVar24 = unaff_s15;
      }
      unaff_s15 = fVar24;
      uStack000000000000005c = *(undefined4 *)(lVar18 + 0x168);
      uStack0000000000000050 = 0;
      fVar24 = unaff_s11;
      if (bVar5) {
        fVar24 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar24;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 != 0))
      {
        if (unaff_w22 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + unaff_x26 * unaff_x29;
          lVar11 = *unaff_x19;
          uVar22 = *(undefined4 *)(lVar18 + 0x128);
          uVar28 = *(undefined4 *)(lVar18 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((unaff_w22 == uVar13) || ((int)uVar10 <= (int)unaff_w22)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_016f68bc(in_stack_00000140._4_4_,0);
      if ((*in_stack_00000150 != 0) && (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 != 0))
      {
        if (in_stack_00000140._4_4_ == 0x200b || (uVar8 & 1) != 0) {
          lVar11 = in_stack_00000118;
          if (*(uint *)(lVar18 + 0x18) <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar11 = unaff_x26;
          if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar18 = lVar18 + lVar11 * unaff_x29;
        uVar22 = *(undefined4 *)(lVar18 + 0x128);
        uVar28 = *(undefined4 *)(lVar18 + 0x160);
        pcVar15 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 != 0))
      {
        uVar14 = *(uint *)(lVar18 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)unaff_w22 < *in_stack_00000148 + -1) {
      if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar18 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar8 = FUN_024a9e4c(uStack000000000000005c,*(undefined4 *)(lVar18 + in_stack_00000128),0);
      if ((uVar8 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 != 0)) {
          if (unaff_w22 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + unaff_x26 * unaff_x29;
            (**(code **)(*unaff_x19 + 0x908))
                      (uStack0000000000000054,fStack000000000000004c,uStack0000000000000050,
                       *(undefined4 *)(lVar18 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar18 + 0x160));
            puVar4 = System_Threading_Mutex_TypeInfo;
            lVar18 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar18 = *(long *)puVar4;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    uStack00000000000000ec = 1;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (in_stack_000000d0 == 0) goto LAB_02491464;
  uVar14 = *(uint *)(lVar18 + unaff_x26 * unaff_x29 + 400);
  fVar24 = (float)FUN_026fd1f0(in_stack_000000d0 + 0x50,0);
  if ((uVar14 >> 6 & 1) == 0) {
    if ((uStack00000000000000e8 & 1) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar18 + 0x18) <= in_stack_00000130._4_4_ - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar22 = *(undefined4 *)(lVar18 + in_stack_00000128 + -0x330);
      pcVar15 = *(code **)(*unaff_x19 + 0x908);
      fVar23 = in_stack_00000080._4_4_ * fVar24 + *(float *)(lVar18 + in_stack_00000128 + -0x30c);
LAB_02490a68:
      (*pcVar15)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,in_stack_00000060,uVar22,fVar23,0,
                 in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    uStack00000000000000e8 = 0;
  }
  else {
    lVar18 = *in_stack_00000150;
    if ((lVar18 == 0) || (lVar11 = *(long *)(lVar18 + 0x38), lVar11 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar11 + unaff_x26 * unaff_x29 + 0x174) = in_stack_000017a4;
    if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar11 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
        ((int)uVar10 < (int)unaff_w22)) || ((uStack00000000000000e8 & 1) != 0 || !bVar1)) {
LAB_02490668:
      if ((uStack00000000000000e8 & 1) == 0) goto LAB_02490a9c;
    }
    else {
      if (unaff_w22 == uVar10) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
        if ((uVar8 & 1) != 0) goto LAB_02490668;
        lVar18 = *in_stack_00000150;
        if (lVar18 == 0) goto LAB_02491464;
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_02491464;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = lVar18 + unaff_x26 * unaff_x29;
      in_stack_00000038 = *(float *)(lVar18 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar18 + 0x160);
      fStack0000000000000034 = *(float *)(lVar18 + 0x14c);
      in_stack_00000078._4_4_ = *(undefined4 *)(lVar18 + 0x11c);
      in_stack_00000068._4_4_ = fVar24 * in_stack_00000080._4_4_ + fStack0000000000000034;
      in_stack_00000060 = 0;
    }
    iVar6 = *in_stack_00000148;
    if (iVar6 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar18 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar18 != 0) {
          if (unaff_w22 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + unaff_x26 * unaff_x29;
            lVar11 = *unaff_x19;
            uVar22 = *(undefined4 *)(lVar18 + 0x128);
            fVar23 = *(float *)(lVar18 + 0x14c);
LAB_024907e8:
            pcVar15 = *(code **)(lVar11 + 0x908);
LAB_02490a64:
            fVar23 = fVar24 * in_stack_00000080._4_4_ + fVar23;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (unaff_w22 == uVar13) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_016f68bc(in_stack_00000140._4_4_,0);
      if ((*in_stack_00000150 != 0) && (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 != 0))
      {
        uVar14 = *(uint *)(lVar18 + 0x18);
        if (in_stack_00000140._4_4_ == 0x200b || (uVar8 & 1) != 0) {
          if (uVar14 <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          in_stack_00000118 = unaff_x26;
          if (uVar14 <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar18 = lVar18 + in_stack_00000118 * unaff_x29;
        fVar23 = *(float *)(lVar18 + 0x14c);
        uVar22 = *(undefined4 *)(lVar18 + 0x128);
        pcVar15 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)unaff_w22 < iVar6) {
      lVar18 = *in_stack_00000150;
      if ((lVar18 != 0) && (lVar11 = *(long *)(lVar18 + 0x38), lVar11 != 0)) {
        if (in_stack_00000130._4_4_ < *(uint *)(lVar11 + 0x18)) {
          if (*(float *)(lVar11 + in_stack_00000128 + -0x108) == in_stack_00000038) {
            fVar27 = *(float *)(lVar11 + in_stack_00000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_024aa280(fVar23 + fVar27,fStack0000000000000034,0);
            if ((uVar8 & 1) != 0) {
              iVar6 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar18 = *in_stack_00000150;
            if (lVar18 == 0) goto LAB_02491464;
          }
          lVar18 = *(long *)(lVar18 + 0x38);
          if (lVar18 != 0) {
            uVar14 = *(uint *)(lVar18 + 0x18);
            if ((int)unaff_w22 <= (int)uVar10) goto LAB_02490a40;
            if (uVar10 < uVar14) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)unaff_w22 < iVar6) {
      iVar6 = FUN_02681c0c(in_stack_000000d0,0);
      if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = *(long *)(unaff_x21 + in_stack_00000128 + -0x130);
      if (lVar18 == 0) goto LAB_02491464;
      iVar7 = FUN_02681c0c(lVar18,0);
      if (iVar6 != iVar7) {
        if (*in_stack_00000150 != 0) {
          lVar18 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 != 0))
      {
        if (in_stack_00000130._4_4_ - 2 < *(uint *)(lVar18 + 0x18)) {
          lVar11 = *unaff_x19;
          uVar22 = *(undefined4 *)(lVar18 + in_stack_00000128 + -0x330);
          fVar23 = *(float *)(lVar18 + in_stack_00000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    uStack00000000000000e8 = 1;
  }
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
  goto LAB_02491464;
  uVar14 = (uint)*(undefined8 *)(lVar18 + 0x18);
  if (uVar14 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar18 + unaff_x26 * unaff_x29 + 0x191) >> 1 & 1) == 0) {
    if ((uStack00000000000000e0 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 in_stack_00000098,fStack00000000000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    uStack00000000000000e0 = 0;
  }
  else {
    if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar18 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((uStack00000000000000e0 & 1) == 0) {
      if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
          ((int)uVar10 < (int)unaff_w22)) || (!bVar1)) goto LAB_02490b04;
      if (unaff_w22 == uVar10) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
        if ((uVar8 & 1) != 0) goto LAB_02490b04;
      }
      puVar4 = System_Threading_Mutex_TypeInfo;
      lVar11 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar4;
      }
      if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x38), lVar18 == 0))
      goto LAB_02491464;
      uVar14 = (uint)*(undefined8 *)(lVar18 + 0x18);
      if (uVar14 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar11 = *(long *)(lVar11 + 0xb8);
      lVar16 = lVar18 + unaff_x26 * unaff_x29;
      in_stack_00001798 = *(undefined8 *)(lVar16 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar16 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar11 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar16 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar11 + 0x159c);
      in_stack_00000098 = *(float *)(lVar11 + 0x15a0);
      fStack00000000000000a0 = *(float *)(lVar11 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar14 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar18 = lVar18 + unaff_x26 * unaff_x29;
    fVar24 = *(float *)(lVar18 + 0x128);
    fVar21 = *(float *)(lVar18 + 0x188);
    uVar17 = *(undefined8 *)(lVar18 + 0x17c);
    fVar31 = *(float *)(lVar18 + 0x184);
    uVar25 = *(undefined8 *)(lVar18 + 0x184);
    fVar26 = *(float *)(lVar18 + 0x18c);
    fVar23 = *(float *)(lVar18 + 0x11c);
    fVar27 = *(float *)(lVar18 + 0x148);
    fVar20 = *(float *)(lVar18 + 0x150);
    in_stack_00000158 = uVar17;
    fStack0000000000000160 = fVar31;
    fStack0000000000000164 = fVar21;
    in_stack_00000168 = fVar26;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar8 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar18 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar18);
      }
      fVar24 = fVar24 + (float)in_stack_00001798;
      fVar23 = fVar23 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar27 = fVar27 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar23 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar23;
      }
      if (fVar20 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar20 - in_stack_000017a0;
      }
      if (in_stack_00000098 <= fVar24) {
        in_stack_00000098 = fVar24;
      }
      if (fStack00000000000000a0 <= fVar27) {
        fStack00000000000000a0 = fVar27;
      }
    }
    else {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar18);
      }
      fVar23 = (fVar23 + (in_stack_00000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar20 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar20;
      }
      if (fStack00000000000000a0 <= fVar27) {
        fStack00000000000000a0 = fVar27;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar23,
                 fStack00000000000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar20 - fVar26;
      in_stack_00000098 = fVar24 + fVar31;
      uStack0000000000000094 = 0;
      fStack00000000000000a0 = fVar27 + fVar21;
      fStack00000000000000a8 = fVar23;
      in_stack_00001790 = uVar17;
      in_stack_00001798 = uVar25;
      in_stack_000017a0 = fVar26;
    }
    if (((*in_stack_00000148 == 1) || (unaff_w22 == uVar13)) ||
       (((int)uVar10 <= (int)unaff_w22 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 in_stack_00000098,fStack00000000000000a0,uStack0000000000000094);
      uStack00000000000000e0 = 0;
    }
    else {
      uStack00000000000000e0 = 1;
    }
  }
  puVar4 = PTR_DAT_033ed410;
  iVar6 = *in_stack_00000148;
  iStack00000000000000e4 = iStack00000000000000e4 + 1;
  uVar14 = in_stack_00000130._4_4_ + 1;
  in_stack_00000128 = in_stack_00000128 + 0x178;
  if (iVar6 <= (int)in_stack_00000130._4_4_) {
    lVar18 = *in_stack_00000150;
    if (lVar18 == 0) goto LAB_02491464;
    *(int *)(lVar18 + 0x18) = iVar6;
    lVar11 = unaff_x19[0xd3];
    *(uint *)(lVar18 + 0x2c) = uVar3 + 1;
    iVar7 = iStack00000000000000a4;
    if (iVar6 < 1) {
      iVar7 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar7 = 1;
    }
    *(int *)(lVar18 + 0x1c) = (int)lVar11;
    *(int *)(lVar18 + 0x24) = iVar7;
    *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar8 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar8 & 1) == 0)) goto LAB_02491468;
    lVar18 = unaff_x19[0xda];
    if (lVar18 != 0) {
      (**(code **)(lVar18 + 0x18))
                (*(undefined8 *)(lVar18 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar18 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
      goto LAB_02491464;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar18 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar18 + 0x20,1,0);
    }
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
              (unaff_x19[0x73],0);
    if ((unaff_x19[0x6c] == 0) || (lVar18 = *(long *)(unaff_x19[0x6c] + 0x60), lVar18 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar18 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar18 + 0x30),0);
    if ((unaff_x19[0x6c] == 0) || (lVar18 = *(long *)(unaff_x19[0x6c] + 0x60), lVar18 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar18 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar18 + 0x48),0);
    if ((unaff_x19[0x6c] == 0) || (lVar18 = *(long *)(unaff_x19[0x6c] + 0x60), lVar18 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar18 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar18 + 0x50),0);
    if ((unaff_x19[0x6c] == 0) || (lVar18 = *(long *)(unaff_x19[0x6c] + 0x60), lVar18 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar18 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar18 + 0x58),0);
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266ed90(unaff_x19[0x73],0);
    lVar18 = *in_stack_00000150;
    if (lVar18 == 0) goto LAB_02491464;
    lVar16 = 0;
    lVar11 = 0;
    goto LAB_024911f4;
  }
  if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar18 = *(long *)(*in_stack_00000150 + 0x50), lVar18 == 0))
  goto LAB_02491464;
  unaff_x26 = (long)(int)in_stack_00000130._4_4_;
  lVar11 = unaff_x21 + unaff_x26 * unaff_x29;
  in_stack_00000138 = *(uint *)(lVar11 + 100);
  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000138)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  in_stack_000000d0 = *(long *)(lVar11 + 0x38);
  in_stack_00000140._4_4_ = (uint)*(ushort *)(lVar11 + 0x20);
  in_stack_00000120 = (long)(int)in_stack_00000138;
  lVar18 = lVar18 + in_stack_00000120 * 0x5c;
  uVar10 = *(uint *)(lVar18 + 0x3c);
  in_stack_000000b0 = (long)(int)uVar10;
  in_stack_00000118 = (long)*(int *)(lVar18 + 0x40);
  unaff_w27 = *(int *)(lVar18 + 0x28);
  iVar6 = *(int *)(lVar18 + 0x2c);
  uVar13 = *(uint *)(lVar18 + 0x68);
  unaff_s12 = *(float *)(lVar18 + 0x5c);
  fVar24 = *(float *)(lVar18 + 0x60);
  unaff_w24 = *(int *)(lVar18 + 0x20);
  param_4 = *(float *)(lVar18 + 0x4c);
  param_6 = *(float *)(lVar18 + 0x54);
  fVar23 = *(float *)(lVar18 + 0x58);
  unaff_s9 = *(float *)(lVar18 + 0x6c);
  fStack000000000000002c = *(float *)(lVar18 + 0x70);
  unaff_s8 = *(float *)(lVar18 + 0x74);
  fStack0000000000000028 = *(float *)(lVar18 + 0x78);
  fVar27 = unaff_s12 + fVar24;
  in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  unaff_w22 = in_stack_00000130._4_4_;
  unaff_w20 = uVar3;
  if ((int)uVar13 < 9) goto code_r0x0248f054;
  if (uVar13 == 0x10) goto switchD_0248f070_caseD_8;
  if (uVar13 == 0x20) {
    fVar23 = unaff_s9 + unaff_s8;
    goto LAB_0248f124;
  }
  goto switchD_0248f070_caseD_3;
code_r0x0248f054:
  switch(uVar13) {
  case 1:
    if ((char)unaff_x19[0x1d] == '\0') {
      in_stack_000000c0._4_4_ = fVar24 + 0.0;
    }
    else {
      in_stack_000000c0._4_4_ = 0.0 - fVar23;
    }
    break;
  case 2:
LAB_0248f124:
    in_stack_000000c0._4_4_ = (fVar24 + unaff_s12 * 0.5) - fVar23 * 0.5;
    break;
  default:
    goto switchD_0248f070_caseD_3;
  case 4:
    in_stack_000000c0._4_4_ = fVar27 - fVar23;
    if ((char)unaff_x19[0x1d] != '\0') {
      in_stack_000000c0._4_4_ = fVar27;
    }
    break;
  case 8:
switchD_0248f070_caseD_8:
    if (in_stack_00000140._4_4_ < 0xad) {
      if ((in_stack_00000140._4_4_ == 3) || (in_stack_00000140._4_4_ == 10))
      goto switchD_0248f070_caseD_3;
    }
    else if ((in_stack_00000140._4_4_ == 0xad) ||
            ((in_stack_00000140._4_4_ == 0x200b || (in_stack_00000140._4_4_ == 0x2060))))
    goto switchD_0248f070_caseD_3;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar2 = *(undefined2 *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x20);
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_016f9f84(uVar2,0);
    if ((uVar8 & 1) == 0) {
      bVar1 = (int)in_stack_00000138 < (int)unaff_x19[0x94];
    }
    else {
      bVar1 = false;
    }
    if ((unaff_s12 < fVar23) || (bVar1 || (uVar13 >> 4 & 1) != 0)) {
      if ((uVar14 == 1) ||
         ((in_stack_00000138 != uVar3 ||
          (in_stack_00000130._4_4_ == *(uint *)((long)unaff_x19 + 0x31c))))) {
        in_stack_000000c0._4_4_ = fVar24;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar27;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00000020._4_4_ = FUN_016fa418(in_stack_00000140._4_4_,0);
        in_stack_000000b8 = 0;
        in_x11 = (long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        goto switchD_0248f070_caseD_3;
      }
      in_w8 = (uint)*(byte *)(unaff_x19 + 0x1d);
      param_1 = -fVar23;
      if (*(byte *)(unaff_x19 + 0x1d) != 0) {
        param_1 = fVar23;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      unaff_s13 = 1.0;
      iVar6 = (int)*(char *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x194) +
              (-unaff_w24 - (in_stack_00000020._4_4_ & 1)) + iVar6;
      in_w9 = iVar6 + -1;
      in_OV = SBORROW4(in_w9,1);
      in_NG = iVar6 + -2 < 0;
      in_x11 = (long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      in_stack_00000130._4_4_ = uVar14;
      param_7 = fStack000000000000002c;
      param_8 = fStack0000000000000028;
      in_stack_000000f0 = param_6;
      in_stack_00000100 = param_4;
      goto code_r0x02490f6c;
    }
    in_stack_000000c0._4_4_ = fVar24;
    if ((char)unaff_x19[0x1d] != '\0') {
      in_stack_000000c0._4_4_ = fVar27;
    }
  }
  in_stack_000000b8 = 0;
  in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  goto switchD_0248f070_caseD_3;
  while( true ) {
    lVar18 = *in_stack_00000150;
    lVar11 = lVar11 + 1;
    lVar16 = lVar16 + 0x50;
    if (lVar18 == 0) break;
LAB_024911f4:
    uVar8 = lVar11 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar8) {
LAB_02491468:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7ecc(lVar18 + lVar16 + 0x70,0);
    lVar18 = unaff_x19[0xe0];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar25 = *(undefined8 *)(lVar18 + lVar11 * 8 + 0x28);
    if (*(int *)(*plVar19 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b4e0(uVar25,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar8) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        FUN_024e8000(lVar18 + lVar16 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe0];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_024eefa0(lVar18,0);
      if ((*in_stack_00000150 == 0) || (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar18 == 0) break;
      FUN_0266b9c4(lVar18,*(undefined8 *)(lVar12 + lVar16 + 0x80),0);
      lVar18 = unaff_x19[0xe0];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_024eefa0(lVar18,0);
      if ((*in_stack_00000150 == 0) || (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar18 == 0) break;
      FUN_0266bbc8(lVar18,*(undefined8 *)(lVar12 + lVar16 + 0x98),0);
      lVar18 = unaff_x19[0xe0];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_024eefa0(lVar18,0);
      if ((*in_stack_00000150 == 0) || (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar18 == 0) break;
      FUN_0266bc74(lVar18,*(undefined8 *)(lVar12 + lVar16 + 0xa0),0);
      lVar18 = unaff_x19[0xe0];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_024eefa0(lVar18,0);
      if ((*in_stack_00000150 == 0) || (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar18 == 0) break;
      FUN_0266c1dc(lVar18,*(undefined8 *)(lVar12 + lVar16 + 0xa8),0);
      lVar18 = unaff_x19[0xe0];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar18 = *(long *)(lVar18 + lVar11 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_024eefa0(lVar18,0), lVar18 == 0)) break;
      FUN_0266ed90(lVar18,0);
    }
  }
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


