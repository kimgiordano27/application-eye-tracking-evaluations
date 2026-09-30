/*
FUNCTION_NAME: FUN_02491010
ENTRY_POINT: 02491010
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1
*/


void FUN_02491010(float param_1,float param_2,undefined1 param_3 [16],float param_4,
                 undefined1 param_5 [16],float param_6,float param_7,float param_8)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint in_w8;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  long *in_x11;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 uVar18;
  long lVar19;
  long unaff_x26;
  long *plVar20;
  long unaff_x29;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float unaff_s8;
  float unaff_s9;
  float fVar32;
  undefined8 unaff_d10;
  float unaff_s11;
  float fVar33;
  float unaff_s15;
  undefined8 in_stack_00000020;
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
  
code_r0x02491010:
  uVar15 = in_stack_00000130._4_4_;
  if (in_w8 == 0) {
    in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + param_1 / param_2;
    in_stack_000000b8 = unaff_d10;
  }
  else {
    in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - param_1 / param_2;
  }
switchD_0248f070_caseD_3:
  uVar4 = in_stack_00000138;
  in_stack_00000130._4_4_ = uVar15;
  uVar15 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
  if (uVar15 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar19 = unaff_x21 + unaff_x26 * unaff_x29;
  fVar29 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar25 = (float)in_stack_00000088 + (float)in_stack_000000b8;
  fVar24 = (float)((ulong)in_stack_000000b8 >> 0x20);
  fVar26 = (float)((ulong)in_stack_00000088 >> 0x20) + fVar24;
  plVar20 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar19 + 0x194) == '\0') goto LAB_0248fabc;
  iVar7 = *(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x2c);
  if (iVar7 != 0) goto LAB_0248f808;
  fVar21 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar4,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    *(undefined4 *)(lVar12 + 0x84) = 0;
    *(undefined4 *)(lVar12 + 0xac) = 0;
    *(undefined4 *)(lVar12 + 0xd4) = 0x3f800000;
    fVar21 = 1.0;
    break;
  case 1:
    fVar22 = *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar22 = (in_stack_000000c0._4_4_ + fVar22) - *(float *)(in_stack_00000070 + 0x230);
      fVar28 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar28 = unaff_s8 - unaff_s9;
    *(float *)(lVar12 + 0x84) = fVar21 + (fVar22 - unaff_s9) / fVar28;
    *(float *)(lVar12 + 0xac) = fVar21 + (*(float *)(lVar12 + 0x98) - unaff_s9) / fVar28;
    *(float *)(lVar12 + 0xd4) = fVar21 + (*(float *)(lVar12 + 0xc0) - unaff_s9) / fVar28;
    fVar21 = fVar21 + (*(float *)(lVar12 + 0xe8) - unaff_s9) / fVar28;
    break;
  case 2:
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar28 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar22 = (in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar12 + 0x84) = fVar21 + fVar22 / fVar28;
    *(float *)(lVar12 + 0xac) =
         fVar21 + ((in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar12 + 0xd4) =
         fVar21 + ((in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar21 = fVar21 + ((in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
      *(undefined4 *)(lVar12 + 0x88) = 0;
      *(undefined4 *)(lVar12 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0xd8) = 0;
      *(undefined4 *)(lVar12 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar22 = fVar21 + (*(float *)(lVar12 + 0x74) - param_7) / (param_8 - param_7);
      fVar28 = fVar21 + (*(float *)(lVar12 + 0x9c) - param_7) / (param_8 - param_7);
      *(float *)(lVar12 + 0x88) = fVar22;
      *(float *)(lVar12 + 0xb0) = fVar28;
      *(float *)(lVar12 + 0xd8) = fVar22;
      *(float *)(lVar12 + 0x100) = fVar28;
      break;
    case 2:
      lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar22 = fVar21 + (*(float *)(lVar12 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar12 + 0x88) = fVar22;
      fVar28 = *(float *)(unaff_x19 + 0x9b);
      fVar33 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar12 + 0xd8) = fVar22;
      fVar22 = fVar21 + (*(float *)(lVar12 + 0x9c) - fVar28) / (fVar33 - fVar28);
      *(float *)(lVar12 + 0xb0) = fVar22;
      *(float *)(lVar12 + 0x100) = fVar22;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar15 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
    }
    if (uVar15 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar22 = *(float *)(lVar12 + 0x15c);
    fVar28 = (1.0 - (*(float *)(lVar12 + 0x88) + *(float *)(lVar12 + 0xb0)) * fVar22) * 0.5;
    fVar33 = fVar21 + *(float *)(lVar12 + 0x88) * fVar22 + fVar28;
    fVar21 = fVar21 + fVar28 + *(float *)(lVar12 + 0xb0) * fVar22;
    *(float *)(lVar12 + 0x84) = fVar33;
    *(float *)(lVar12 + 0xac) = fVar33;
    *(float *)(lVar12 + 0xd4) = fVar21;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = fVar21;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar15 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    *(undefined4 *)(lVar12 + 0x88) = 0;
    *(undefined4 *)(lVar12 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w22 < uVar15) {
      lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar21 = (*(float *)(lVar12 + 0x74) - param_6) / (param_4 - param_6);
      fVar22 = (*(float *)(lVar12 + 0x9c) - param_6) / (param_4 - param_6);
      *(float *)(lVar12 + 0x88) = fVar21;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar15 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar21 = (*(float *)(lVar12 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar12 + 0x88) = fVar21;
    fVar22 = (*(float *)(lVar12 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar12 + 0xb0) = fVar22;
    *(float *)(lVar12 + 0xd8) = fVar22;
    *(float *)(lVar12 + 0x100) = fVar21;
    break;
  case 3:
    if (uVar15 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar28 = *(float *)(lVar12 + 0x15c);
    fVar22 = (1.0 - (*(float *)(lVar12 + 0x84) + *(float *)(lVar12 + 0xd4)) / fVar28) * 0.5;
    fVar21 = *(float *)(lVar12 + 0x84) / fVar28 + fVar22;
    fVar22 = fVar22 + *(float *)(lVar12 + 0xd4) / fVar28;
    *(float *)(lVar12 + 0x88) = fVar21;
    *(float *)(lVar12 + 0xb0) = fVar22;
    *(float *)(lVar12 + 0x100) = fVar21;
    *(float *)(lVar12 + 0xd8) = fVar22;
  }
  if (uVar15 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
  unaff_s11 = in_stack_00000040 * *(float *)(lVar12 + 0x160) *
              (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar12 + 0x5c) == '\0') &&
     ((*(byte *)(unaff_x21 + unaff_x26 * unaff_x29 + 400) & 1) != 0)) {
    unaff_s11 = -unaff_s11;
  }
  lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
  fVar22 = *(float *)(lVar12 + 0x88);
  fVar28 = *(float *)(lVar12 + 0x84);
  fVar21 = -2.1474836e+09;
  if (fVar28 != INFINITY) {
    fVar21 = (float)(int)fVar28;
  }
  fVar31 = *(float *)(lVar12 + 0xd4);
  fVar32 = *(float *)(lVar12 + 0xd8);
  fVar33 = -2.1474836e+09;
  if (fVar22 != INFINITY) {
    fVar33 = (float)(int)fVar22;
  }
  uVar23 = FUN_024e0374(fVar28 - fVar21,fVar22 - fVar33);
  *(undefined4 *)(lVar12 + 0x84) = uVar23;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar32 = fVar32 - fVar33;
  *(float *)(lVar12 + 0x88) = unaff_s11;
  uVar23 = FUN_024e0374(fVar28 - fVar21,fVar32);
  *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xac) = uVar23;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar31 = fVar31 - fVar21;
  *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xb0) = unaff_s11;
  fVar21 = (float)FUN_024e0374(fVar31,fVar32);
  *(float *)(lVar12 + 0xd4) = fVar21;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar12 + 0xd8) = unaff_s11;
  uVar23 = FUN_024e0374(fVar31,fVar22 - fVar33);
  *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = uVar23;
  uVar15 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
  if (uVar15 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x100) = unaff_s11;
  in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
LAB_0248f808:
  if (((int)unaff_w22 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar4 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar15 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar19 + 0x70) =
           CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar19 + 0x70));
      *(float *)(lVar19 + 0x78) = fVar26 + *(float *)(lVar19 + 0x78);
      plVar20 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar19 + 0x98) =
           CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar19 + 0x98));
      *(float *)(lVar19 + 0xa0) = fVar26 + *(float *)(lVar19 + 0xa0);
      uVar15 = *(uint *)(unaff_x21 + 0x18);
LAB_0248fa4c:
      if (uVar15 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar19 + 0xc0) =
           CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar19 + 0xc0));
      *(float *)(lVar19 + 200) = fVar26 + *(float *)(lVar19 + 200);
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar19 + 0xe8) =
           CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar19 + 0xe8));
      *(float *)(lVar19 + 0xf0) = fVar26 + *(float *)(lVar19 + 0xf0);
      if (iVar7 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar16)();
      goto LAB_0248fabc;
    }
    if (((int)uVar4 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (unaff_w22 < uVar15) {
        if (*(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x68) != iStack0000000000000030)
        goto LAB_0248f8d8;
        lVar19 = unaff_x21 + unaff_x26 * unaff_x29;
        *(ulong *)(lVar19 + 0x70) =
             CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                      fVar29 + (float)*(undefined8 *)(lVar19 + 0x70));
        *(float *)(lVar19 + 0x78) = fVar26 + *(float *)(lVar19 + 0x78);
        if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
          lVar19 = unaff_x21 + unaff_x26 * unaff_x29;
          *(ulong *)(lVar19 + 0x98) =
               CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                        fVar29 + (float)*(undefined8 *)(lVar19 + 0x98));
          *(float *)(lVar19 + 0xa0) = fVar26 + *(float *)(lVar19 + 0xa0);
          uVar15 = *(uint *)(unaff_x21 + 0x18);
          plVar20 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar15 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(in_x11);
    DAT_03774d76 = '\x01';
    in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
    ;
  }
  lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar12 + 0x70) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar12 + 0x78) = uVar23;
  plVar20 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar12 + 0x98) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar12 + 0xa0) = uVar23;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar12 + 0xc0) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar12 + 200) = uVar23;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
  uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
  *(undefined8 *)(lVar12 + 0xe8) = **(undefined8 **)(*in_x11 + 0xb8);
  *(undefined4 *)(lVar12 + 0xf0) = uVar23;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar19 + 0x194) = 0;
  if (iVar7 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar7 == 1) {
    pcVar16 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar19 = lVar19 + unaff_x26 * unaff_x29;
  uVar27 = *(undefined8 *)(lVar19 + 0x11c);
  *(undefined8 *)(lVar19 + 0x11c) =
       CONCAT44(fVar25 + (float)((ulong)uVar27 >> 0x20),fVar29 + (float)uVar27);
  *(float *)(lVar19 + 0x124) = fVar26 + *(float *)(lVar19 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar19 = lVar19 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar19 + 0x110) =
       CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0x110) >> 0x20),
                fVar29 + (float)*(undefined8 *)(lVar19 + 0x110));
  *(float *)(lVar19 + 0x118) = fVar26 + *(float *)(lVar19 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar19 = lVar19 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar19 + 0x128) =
       CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20),
                fVar29 + (float)*(undefined8 *)(lVar19 + 0x128));
  *(float *)(lVar19 + 0x130) = fVar26 + *(float *)(lVar19 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar19 = lVar19 + unaff_x26 * unaff_x29;
  *(float *)(lVar19 + 0x134) = fVar29 + *(float *)(lVar19 + 0x134);
  *(ulong *)(lVar19 + 0x138) =
       CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar19 + 0x138) >> 0x20),
                fVar25 + (float)*(undefined8 *)(lVar19 + 0x138));
  lVar19 = *in_stack_00000150;
  if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x38), lVar12 == 0)) goto LAB_02491464;
  uVar15 = *(uint *)(lVar12 + 0x18);
  if (uVar15 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar17 = lVar12 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar17 + 0x140) =
       CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar17 + 0x140) >> 0x20),
                fVar29 + (float)*(undefined8 *)(lVar17 + 0x140));
  *(ulong *)(lVar17 + 0x148) =
       CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar17 + 0x148) >> 0x20),
                fVar25 + (float)*(undefined8 *)(lVar17 + 0x148));
  *(float *)(lVar17 + 0x150) = fVar25 + *(float *)(lVar17 + 0x150);
  if (uVar4 == unaff_w20) {
    uVar15 = *in_stack_00000148 - 1;
    if (unaff_w22 == uVar15) goto LAB_0248fccc;
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x50);
    if (lVar19 == 0) goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= unaff_w20)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar17 = (long)(int)unaff_w20;
    lVar13 = lVar19 + lVar17 * 0x5c;
    fVar26 = fVar25 + *(float *)(lVar13 + 0x54);
    *(ulong *)(lVar13 + 0x4c) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar13 + 0x4c) >> 0x20),
                  fVar25 + (float)*(undefined8 *)(lVar13 + 0x4c));
    *(float *)(lVar13 + 0x54) = fVar26;
    *(float *)(lVar13 + 0x58) = fVar29 + *(float *)(lVar13 + 0x58);
    if (uVar15 <= *(uint *)(lVar13 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar23 = *(undefined4 *)(lVar12 + (int)*(uint *)(lVar13 + 0x34) * unaff_x29 + 0x11c);
    lVar19 = lVar19 + lVar17 * 0x5c;
    *(float *)(lVar19 + 0x70) = fVar26;
    *(undefined4 *)(lVar19 + 0x6c) = uVar23;
    lVar19 = *in_stack_00000150;
    if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x50), lVar12 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w20)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = *(long *)(lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_02491464;
    uVar15 = *(uint *)(lVar12 + lVar17 * 0x5c + 0x40);
    if (*(uint *)(lVar19 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = lVar12 + lVar17 * 0x5c;
    *(undefined4 *)(lVar12 + 0x74) = *(undefined4 *)(lVar19 + (int)uVar15 * unaff_x29 + 0x128);
    *(undefined4 *)(lVar12 + 0x78) = *(undefined4 *)(lVar12 + 0x4c);
    uVar15 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (unaff_w22 == uVar15) {
      lVar19 = *in_stack_00000150;
      if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x50), lVar12 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar12 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar17 = lVar12 + in_stack_00000120 * 0x5c;
      fVar26 = fVar25 + *(float *)(lVar17 + 0x54);
      *(ulong *)(lVar17 + 0x4c) =
           CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                    fVar25 + (float)*(undefined8 *)(lVar17 + 0x4c));
      *(float *)(lVar17 + 0x54) = fVar26;
      *(float *)(lVar17 + 0x58) = fVar29 + *(float *)(lVar17 + 0x58);
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_02491464;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar17 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar23 = *(undefined4 *)(lVar19 + (int)*(uint *)(lVar17 + 0x34) * unaff_x29 + 0x11c);
      lVar12 = lVar12 + in_stack_00000120 * 0x5c;
      *(float *)(lVar12 + 0x70) = fVar26;
      *(undefined4 *)(lVar12 + 0x6c) = uVar23;
      lVar19 = *in_stack_00000150;
      if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x50), lVar12 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar12 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_02491464;
      uVar15 = *(uint *)(lVar12 + in_stack_00000120 * 0x5c + 0x40);
      if (*(uint *)(lVar19 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = lVar12 + in_stack_00000120 * 0x5c;
      *(undefined4 *)(lVar12 + 0x74) = *(undefined4 *)(lVar19 + (int)uVar15 * unaff_x29 + 0x128);
      *(undefined4 *)(lVar12 + 0x78) = *(undefined4 *)(lVar12 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_016f9468(in_stack_00000140._4_4_,0);
  if (((((uVar9 & 1) == 0) && (1 < in_stack_00000140._4_4_ - 0x2010)) &&
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
      uVar9 = FUN_016f93a0(in_stack_00000140._4_4_,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_016f68bc(in_stack_00000140._4_4_,0);
        if (((in_stack_00000140._4_4_ != 0x200b) && ((uVar9 & 1) == 0)) && (*in_stack_00000148 != 1)
           ) goto LAB_024909a0;
      }
    }
    else if (((in_stack_00000130._4_4_ != 1) &&
             ((int)unaff_w22 < (int)(*(uint *)(unaff_x21 + 0x18) - 1))) &&
            (((int)unaff_w22 < *in_stack_00000148 &&
             ((in_stack_00000140._4_4_ == 0x2019 || (in_stack_00000140._4_4_ == 0x27)))))) {
      if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_ - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar3 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x438);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_016f9468(uVar3,0);
      if ((uVar9 & 1) != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar3 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x148);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_016f9468(uVar3,0);
        if ((uVar9 & 1) != 0) goto LAB_0248fee0;
      }
    }
    if (unaff_w22 == *in_stack_00000148 - 1U) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_016f9468(in_stack_00000140._4_4_,0);
      iVar7 = iStack00000000000000e4;
      if ((uVar9 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar7 = in_stack_00000130._4_4_ - 2;
    }
    lVar19 = *in_stack_00000150;
    if (lVar19 == 0) goto LAB_02491464;
    lVar12 = *(long *)(lVar19 + 0x40);
    if (lVar12 == 0) goto LAB_02491464;
    uVar15 = *(uint *)(lVar19 + 0x24);
    iVar8 = *(int *)(lVar12 + 0x18);
    if (iVar8 < (int)(uVar15 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar19 + 0x40),iVar8 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar19 = *in_stack_00000150;
      if (lVar19 == 0) goto LAB_02491464;
    }
    lVar12 = *(long *)(lVar19 + 0x40);
    if (lVar12 == 0) goto LAB_02491464;
    if (*(uint *)(lVar12 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = lVar12 + (long)(int)uVar15 * 0x18;
    *(long **)(lVar12 + 0x20) = unaff_x19;
    *(uint *)(lVar12 + 0x28) = in_stack_00000110._4_4_;
    *(int *)(lVar12 + 0x2c) = iVar7;
    *(uint *)(lVar12 + 0x30) = (iVar7 - in_stack_00000110._4_4_) + 1;
    lVar12 = *(long *)(lVar19 + 0x50);
    *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
    if (lVar12 == 0) goto LAB_02491464;
    if (*(uint *)(lVar12 + 0x18) <= uVar4)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = lVar12 + in_stack_00000120 * 0x5c;
    in_stack_000000d8._4_4_ = 0;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
  }
  else {
    if ((in_stack_000000d8._4_4_ & 1) == 0) {
      in_stack_00000110._4_4_ = unaff_w22;
    }
    if (unaff_w22 == *in_stack_00000148 - 1U) {
      lVar19 = *in_stack_00000150;
      if (lVar19 == 0) goto LAB_02491464;
      lVar12 = *(long *)(lVar19 + 0x40);
      if (lVar12 == 0) goto LAB_02491464;
      uVar15 = *(uint *)(lVar19 + 0x24);
      iVar7 = *(int *)(lVar12 + 0x18);
      if (iVar7 < (int)(uVar15 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar19 + 0x40),iVar7 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar19 = *in_stack_00000150;
        if (lVar19 == 0) goto LAB_02491464;
      }
      lVar12 = *(long *)(lVar19 + 0x40);
      if (lVar12 == 0) goto LAB_02491464;
      if (*(uint *)(lVar12 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = lVar12 + (long)(int)uVar15 * 0x18;
      *(long **)(lVar12 + 0x20) = unaff_x19;
      *(uint *)(lVar12 + 0x28) = in_stack_00000110._4_4_;
      *(uint *)(lVar12 + 0x2c) = unaff_w22;
      *(uint *)(lVar12 + 0x30) = in_stack_00000130._4_4_ - in_stack_00000110._4_4_;
      lVar12 = *(long *)(lVar19 + 0x50);
      *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
      if (lVar12 == 0) goto LAB_02491464;
      if (*(uint *)(lVar12 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = lVar12 + in_stack_00000120 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
    }
LAB_0248fee0:
    in_stack_000000d8._4_4_ = 1;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
  goto LAB_02491464;
  uVar15 = *(uint *)(lVar19 + 0x18);
  if (uVar15 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar14 = (uint)in_stack_000000b0;
  uVar11 = (uint)in_stack_00000118;
  if ((*(byte *)(lVar19 + unaff_x26 * unaff_x29 + 400) >> 2 & 1) == 0) {
    if ((uStack00000000000000ec & 1) == 0) {
LAB_024903d8:
      uStack00000000000000ec = 0;
    }
    else {
LAB_0248ff18:
      if (uVar15 <= in_stack_00000130._4_4_ - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = *unaff_x19;
      uVar23 = *(undefined4 *)(lVar19 + in_stack_00000128 + -0x330);
      uVar30 = *(undefined4 *)(lVar19 + in_stack_00000128 + -0x2f8);
LAB_02490474:
      pcVar16 = *(code **)(lVar12 + 0x908);
LAB_0249047c:
      (*pcVar16)(uStack0000000000000054,fStack000000000000004c,uStack0000000000000050,uVar23,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar30);
      puVar5 = System_Threading_Mutex_TypeInfo;
      lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar19 = *(long *)puVar5;
      }
LAB_024904cc:
      uStack00000000000000ec = 0;
      unaff_s15 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
  }
  else {
    lVar19 = lVar19 + unaff_x26 * unaff_x29;
    iVar7 = *(int *)(lVar19 + 0x68);
    *(undefined4 *)(lVar19 + 0x16c) = in_stack_000017a4;
    if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar7 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_016f68bc(in_stack_00000140._4_4_,0);
    if ((in_stack_00000140._4_4_ != 0x200b) && ((uVar9 & 1) == 0)) {
      lVar19 = *in_stack_00000150;
      if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x38), lVar12 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar26 = *(float *)(lVar12 + unaff_x26 * unaff_x29 + 0x160);
      if (unaff_s15 <= fVar26) {
        unaff_s15 = fVar26;
      }
      if (fStack00000000000000c8 <= ABS(unaff_s11)) {
        fStack00000000000000c8 = ABS(unaff_s11);
      }
      if (iVar7 != iStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar19 = *in_stack_00000150;
          if (lVar19 == 0) goto LAB_02491464;
          lVar12 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar12 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar12 + 0x15a8);
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_02491464;
      if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar29 = *(float *)(lVar19 + unaff_x26 * unaff_x29 + 0x14c);
      fVar26 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar29 = fVar29 + unaff_s15 * fVar26;
      iStack0000000000000048 = iVar7;
      if (fVar29 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar29;
      }
    }
    if ((uStack00000000000000ec & 1) == 0) {
      uStack00000000000000ec = 0;
      if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
          ((int)uVar11 < (int)unaff_w22)) || (!bVar1)) goto LAB_024904e8;
      if (unaff_w22 == uVar11) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_016fa418(in_stack_00000140._4_4_,0);
        if ((uVar9 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = lVar19 + unaff_x26 * unaff_x29;
      fStack0000000000000058 = *(float *)(lVar19 + 0x160);
      uStack0000000000000054 = *(undefined4 *)(lVar19 + 0x11c);
      bVar6 = unaff_s15 != 0.0;
      fVar26 = fStack0000000000000058;
      if (bVar6) {
        fVar26 = unaff_s15;
      }
      unaff_s15 = fVar26;
      uStack000000000000005c = *(undefined4 *)(lVar19 + 0x168);
      uStack0000000000000050 = 0;
      fVar26 = unaff_s11;
      if (bVar6) {
        fVar26 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar26;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0))
      {
        if (unaff_w22 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + unaff_x26 * unaff_x29;
          lVar12 = *unaff_x19;
          uVar23 = *(undefined4 *)(lVar19 + 0x128);
          uVar30 = *(undefined4 *)(lVar19 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((unaff_w22 == uVar14) || ((int)uVar11 <= (int)unaff_w22)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_016f68bc(in_stack_00000140._4_4_,0);
      if ((*in_stack_00000150 != 0) && (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0))
      {
        if (in_stack_00000140._4_4_ == 0x200b || (uVar9 & 1) != 0) {
          lVar12 = in_stack_00000118;
          if (*(uint *)(lVar19 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar12 = unaff_x26;
          if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar19 = lVar19 + lVar12 * unaff_x29;
        uVar23 = *(undefined4 *)(lVar19 + 0x128);
        uVar30 = *(undefined4 *)(lVar19 + 0x160);
        pcVar16 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0))
      {
        uVar15 = *(uint *)(lVar19 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)unaff_w22 < *in_stack_00000148 + -1) {
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar9 = FUN_024a9e4c(uStack000000000000005c,*(undefined4 *)(lVar19 + in_stack_00000128),0);
      if ((uVar9 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0)) {
          if (unaff_w22 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + unaff_x26 * unaff_x29;
            (**(code **)(*unaff_x19 + 0x908))
                      (uStack0000000000000054,fStack000000000000004c,uStack0000000000000050,
                       *(undefined4 *)(lVar19 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar19 + 0x160));
            puVar5 = System_Threading_Mutex_TypeInfo;
            lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar19 = *(long *)puVar5;
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
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (in_stack_000000d0 == 0) goto LAB_02491464;
  uVar15 = *(uint *)(lVar19 + unaff_x26 * unaff_x29 + 400);
  fVar26 = (float)FUN_026fd1f0(in_stack_000000d0 + 0x50,0);
  if ((uVar15 >> 6 & 1) == 0) {
    if ((uStack00000000000000e8 & 1) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_ - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar23 = *(undefined4 *)(lVar19 + in_stack_00000128 + -0x330);
      pcVar16 = *(code **)(*unaff_x19 + 0x908);
      fVar25 = in_stack_00000080._4_4_ * fVar26 + *(float *)(lVar19 + in_stack_00000128 + -0x30c);
LAB_02490a68:
      (*pcVar16)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,in_stack_00000060,uVar23,fVar25,0,
                 in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    uStack00000000000000e8 = 0;
  }
  else {
    lVar19 = *in_stack_00000150;
    if ((lVar19 == 0) || (lVar12 = *(long *)(lVar19 + 0x38), lVar12 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar12 + unaff_x26 * unaff_x29 + 0x174) = in_stack_000017a4;
    if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar12 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
        ((int)uVar11 < (int)unaff_w22)) || ((uStack00000000000000e8 & 1) != 0 || !bVar1)) {
LAB_02490668:
      if ((uStack00000000000000e8 & 1) == 0) goto LAB_02490a9c;
    }
    else {
      if (unaff_w22 == uVar11) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_016fa418(in_stack_00000140._4_4_,0);
        if ((uVar9 & 1) != 0) goto LAB_02490668;
        lVar19 = *in_stack_00000150;
        if (lVar19 == 0) goto LAB_02491464;
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_02491464;
      if (*(uint *)(lVar19 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = lVar19 + unaff_x26 * unaff_x29;
      in_stack_00000038 = *(float *)(lVar19 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar19 + 0x160);
      fStack0000000000000034 = *(float *)(lVar19 + 0x14c);
      in_stack_00000078._4_4_ = *(undefined4 *)(lVar19 + 0x11c);
      in_stack_00000068._4_4_ = fVar26 * in_stack_00000080._4_4_ + fStack0000000000000034;
      in_stack_00000060 = 0;
    }
    iVar7 = *in_stack_00000148;
    if (iVar7 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar19 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar19 != 0) {
          if (unaff_w22 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + unaff_x26 * unaff_x29;
            lVar12 = *unaff_x19;
            uVar23 = *(undefined4 *)(lVar19 + 0x128);
            fVar25 = *(float *)(lVar19 + 0x14c);
LAB_024907e8:
            pcVar16 = *(code **)(lVar12 + 0x908);
LAB_02490a64:
            fVar25 = fVar26 * in_stack_00000080._4_4_ + fVar25;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (unaff_w22 == uVar14) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_016f68bc(in_stack_00000140._4_4_,0);
      if ((*in_stack_00000150 != 0) && (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0))
      {
        uVar15 = *(uint *)(lVar19 + 0x18);
        if (in_stack_00000140._4_4_ == 0x200b || (uVar9 & 1) != 0) {
          if (uVar15 <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          in_stack_00000118 = unaff_x26;
          if (uVar15 <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar19 = lVar19 + in_stack_00000118 * unaff_x29;
        fVar25 = *(float *)(lVar19 + 0x14c);
        uVar23 = *(undefined4 *)(lVar19 + 0x128);
        pcVar16 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)unaff_w22 < iVar7) {
      lVar19 = *in_stack_00000150;
      if ((lVar19 != 0) && (lVar12 = *(long *)(lVar19 + 0x38), lVar12 != 0)) {
        if (in_stack_00000130._4_4_ < *(uint *)(lVar12 + 0x18)) {
          if (*(float *)(lVar12 + in_stack_00000128 + -0x108) == in_stack_00000038) {
            fVar29 = *(float *)(lVar12 + in_stack_00000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_024aa280(fVar25 + fVar29,fStack0000000000000034,0);
            if ((uVar9 & 1) != 0) {
              iVar7 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar19 = *in_stack_00000150;
            if (lVar19 == 0) goto LAB_02491464;
          }
          lVar19 = *(long *)(lVar19 + 0x38);
          if (lVar19 != 0) {
            uVar15 = *(uint *)(lVar19 + 0x18);
            if ((int)unaff_w22 <= (int)uVar11) goto LAB_02490a40;
            if (uVar11 < uVar15) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)unaff_w22 < iVar7) {
      iVar7 = FUN_02681c0c(in_stack_000000d0,0);
      if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = *(long *)(unaff_x21 + in_stack_00000128 + -0x130);
      if (lVar19 == 0) goto LAB_02491464;
      iVar8 = FUN_02681c0c(lVar19,0);
      if (iVar7 != iVar8) {
        if (*in_stack_00000150 != 0) {
          lVar19 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0))
      {
        if (in_stack_00000130._4_4_ - 2 < *(uint *)(lVar19 + 0x18)) {
          lVar12 = *unaff_x19;
          uVar23 = *(undefined4 *)(lVar19 + in_stack_00000128 + -0x330);
          fVar25 = *(float *)(lVar19 + in_stack_00000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    uStack00000000000000e8 = 1;
  }
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
  goto LAB_02491464;
  uVar15 = (uint)*(undefined8 *)(lVar19 + 0x18);
  if (uVar15 <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar19 + unaff_x26 * unaff_x29 + 0x191) >> 1 & 1) == 0) {
    if ((uStack00000000000000e0 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 in_stack_00000098,fStack00000000000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    uStack00000000000000e0 = 0;
  }
  else {
    if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar19 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((uStack00000000000000e0 & 1) == 0) {
      if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
          ((int)uVar11 < (int)unaff_w22)) || (!bVar1)) goto LAB_02490b04;
      if (unaff_w22 == uVar11) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_016fa418(in_stack_00000140._4_4_,0);
        if ((uVar9 & 1) != 0) goto LAB_02490b04;
      }
      puVar5 = System_Threading_Mutex_TypeInfo;
      lVar12 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar12 = *(long *)puVar5;
      }
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
      goto LAB_02491464;
      uVar15 = (uint)*(undefined8 *)(lVar19 + 0x18);
      if (uVar15 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = *(long *)(lVar12 + 0xb8);
      lVar17 = lVar19 + unaff_x26 * unaff_x29;
      in_stack_00001798 = *(undefined8 *)(lVar17 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar17 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar12 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar17 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar12 + 0x159c);
      in_stack_00000098 = *(float *)(lVar12 + 0x15a0);
      fStack00000000000000a0 = *(float *)(lVar12 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar15 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = lVar19 + unaff_x26 * unaff_x29;
    fVar26 = *(float *)(lVar19 + 0x128);
    fVar22 = *(float *)(lVar19 + 0x188);
    uVar18 = *(undefined8 *)(lVar19 + 0x17c);
    fVar33 = *(float *)(lVar19 + 0x184);
    uVar27 = *(undefined8 *)(lVar19 + 0x184);
    fVar28 = *(float *)(lVar19 + 0x18c);
    fVar25 = *(float *)(lVar19 + 0x11c);
    fVar29 = *(float *)(lVar19 + 0x148);
    fVar21 = *(float *)(lVar19 + 0x150);
    in_stack_00000158 = uVar18;
    fStack0000000000000160 = fVar33;
    fStack0000000000000164 = fVar22;
    in_stack_00000168 = fVar28;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar9 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar19 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar19);
      }
      fVar26 = fVar26 + (float)in_stack_00001798;
      fVar25 = fVar25 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar29 = fVar29 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar25 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar25;
      }
      if (fVar21 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar21 - in_stack_000017a0;
      }
      if (in_stack_00000098 <= fVar26) {
        in_stack_00000098 = fVar26;
      }
      if (fStack00000000000000a0 <= fVar29) {
        fStack00000000000000a0 = fVar29;
      }
    }
    else {
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar19);
      }
      fVar25 = (fVar25 + (in_stack_00000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar21 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar21;
      }
      if (fStack00000000000000a0 <= fVar29) {
        fStack00000000000000a0 = fVar29;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar25,
                 fStack00000000000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar21 - fVar28;
      in_stack_00000098 = fVar26 + fVar33;
      uStack0000000000000094 = 0;
      fStack00000000000000a0 = fVar29 + fVar22;
      fStack00000000000000a8 = fVar25;
      in_stack_00001790 = uVar18;
      in_stack_00001798 = uVar27;
      in_stack_000017a0 = fVar28;
    }
    if (((*in_stack_00000148 == 1) || (unaff_w22 == uVar14)) ||
       (((int)uVar11 <= (int)unaff_w22 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 in_stack_00000098,fStack00000000000000a0,uStack0000000000000094);
      uStack00000000000000e0 = 0;
    }
    else {
      uStack00000000000000e0 = 1;
    }
  }
  puVar5 = PTR_DAT_033ed410;
  iVar7 = *in_stack_00000148;
  iStack00000000000000e4 = iStack00000000000000e4 + 1;
  uVar15 = in_stack_00000130._4_4_ + 1;
  in_stack_00000128 = in_stack_00000128 + 0x178;
  if (iVar7 <= (int)in_stack_00000130._4_4_) {
    lVar19 = *in_stack_00000150;
    if (lVar19 == 0) goto LAB_02491464;
    *(int *)(lVar19 + 0x18) = iVar7;
    lVar12 = unaff_x19[0xd3];
    *(uint *)(lVar19 + 0x2c) = uVar4 + 1;
    iVar8 = iStack00000000000000a4;
    if (iVar7 < 1) {
      iVar8 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar8 = 1;
    }
    *(int *)(lVar19 + 0x1c) = (int)lVar12;
    *(int *)(lVar19 + 0x24) = iVar8;
    *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar9 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar9 & 1) == 0)) goto LAB_02491468;
    lVar19 = unaff_x19[0xda];
    if (lVar19 != 0) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar19 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x60), lVar19 == 0))
      goto LAB_02491464;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar19 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar19 + 0x20,1,0);
    }
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
              (unaff_x19[0x73],0);
    if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar19 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x30),0);
    if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar19 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x48),0);
    if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar19 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x50),0);
    if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
    goto LAB_02491464;
    if (*(int *)(lVar19 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x58),0);
    if (unaff_x19[0x73] == 0) goto LAB_02491464;
    FUN_0266ed90(unaff_x19[0x73],0);
    lVar19 = *in_stack_00000150;
    if (lVar19 == 0) goto LAB_02491464;
    lVar17 = 0;
    lVar12 = 0;
    goto LAB_024911f4;
  }
  if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x50), lVar19 == 0))
  goto LAB_02491464;
  unaff_x26 = (long)(int)in_stack_00000130._4_4_;
  lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
  in_stack_00000138 = *(uint *)(lVar12 + 100);
  if (*(uint *)(lVar19 + 0x18) <= in_stack_00000138)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  in_stack_000000d0 = *(long *)(lVar12 + 0x38);
  in_stack_00000140._4_4_ = (uint)*(ushort *)(lVar12 + 0x20);
  in_stack_00000120 = (long)(int)in_stack_00000138;
  lVar19 = lVar19 + in_stack_00000120 * 0x5c;
  uVar11 = *(uint *)(lVar19 + 0x3c);
  in_stack_000000b0 = (long)(int)uVar11;
  in_stack_00000118 = (long)*(int *)(lVar19 + 0x40);
  iVar7 = *(int *)(lVar19 + 0x28);
  iVar8 = *(int *)(lVar19 + 0x2c);
  uVar14 = *(uint *)(lVar19 + 0x68);
  fVar26 = *(float *)(lVar19 + 0x5c);
  fVar29 = *(float *)(lVar19 + 0x60);
  iVar2 = *(int *)(lVar19 + 0x20);
  param_4 = *(float *)(lVar19 + 0x4c);
  param_6 = *(float *)(lVar19 + 0x54);
  fVar25 = *(float *)(lVar19 + 0x58);
  unaff_s9 = *(float *)(lVar19 + 0x6c);
  param_7 = *(float *)(lVar19 + 0x70);
  unaff_s8 = *(float *)(lVar19 + 0x74);
  param_8 = *(float *)(lVar19 + 0x78);
  fVar21 = fVar26 + fVar29;
  in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  unaff_w22 = in_stack_00000130._4_4_;
  unaff_w20 = uVar4;
  if ((int)uVar14 < 9) goto code_r0x0248f054;
  if (uVar14 == 0x10) goto switchD_0248f070_caseD_8;
  if (uVar14 == 0x20) {
    fVar25 = unaff_s9 + unaff_s8;
    goto LAB_0248f124;
  }
  goto switchD_0248f070_caseD_3;
code_r0x0248f054:
  switch(uVar14) {
  case 1:
    if ((char)unaff_x19[0x1d] == '\0') {
      in_stack_000000c0._4_4_ = fVar29 + 0.0;
    }
    else {
      in_stack_000000c0._4_4_ = 0.0 - fVar25;
    }
    break;
  case 2:
LAB_0248f124:
    in_stack_000000c0._4_4_ = (fVar29 + fVar26 * 0.5) - fVar25 * 0.5;
    break;
  default:
    goto switchD_0248f070_caseD_3;
  case 4:
    in_stack_000000c0._4_4_ = fVar21 - fVar25;
    if ((char)unaff_x19[0x1d] != '\0') {
      in_stack_000000c0._4_4_ = fVar21;
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
    if (*(uint *)(unaff_x21 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar3 = *(undefined2 *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x20);
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_016f9f84(uVar3,0);
    if ((uVar9 & 1) == 0) {
      bVar1 = (int)in_stack_00000138 < (int)unaff_x19[0x94];
    }
    else {
      bVar1 = false;
    }
    if ((fVar26 < fVar25) || (bVar1 || (uVar14 >> 4 & 1) != 0)) {
      if ((uVar15 == 1) ||
         ((in_stack_00000138 != uVar4 ||
          (in_stack_00000130._4_4_ == *(uint *)((long)unaff_x19 + 0x31c))))) {
        in_stack_000000c0._4_4_ = fVar29;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar21;
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
      fVar29 = -fVar25;
      if (*(byte *)(unaff_x19 + 0x1d) != 0) {
        fVar29 = fVar25;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      param_1 = 1.0;
      iVar8 = (int)*(char *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x194) +
              (-iVar2 - (in_stack_00000020._4_4_ & 1)) + iVar8 + -1;
      if (0 < iVar8) {
        param_1 = *(float *)((long)unaff_x19 + 0x2d4);
      }
      if (iVar8 < 1) {
        iVar8 = 1;
      }
      unaff_d10 = CONCAT44(fVar24 + 0.0,(float)in_stack_000000b8 + 0.0);
      in_stack_00000130._4_4_ = uVar15;
      if (in_stack_00000140._4_4_ != 9) {
        if (in_stack_00000140._4_4_ != 0xa0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_016fa418(in_stack_00000140._4_4_,0);
          in_w8 = (uint)*(byte *)(unaff_x19 + 0x1d);
          if ((uVar9 & 1) != 0) goto LAB_02490fe0;
        }
        param_1 = (fVar26 + fVar29) * param_1;
        param_2 = (float)(int)((iVar2 - (~in_stack_00000020._4_4_ & 1)) + iVar7);
        in_x11 = (long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        goto code_r0x02491010;
      }
LAB_02490fe0:
      param_1 = (fVar26 + fVar29) * (1.0 - param_1);
      param_2 = (float)iVar8;
      in_x11 = (long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      goto code_r0x02491010;
    }
    in_stack_000000c0._4_4_ = fVar29;
    if ((char)unaff_x19[0x1d] != '\0') {
      in_stack_000000c0._4_4_ = fVar21;
    }
  }
  in_stack_000000b8 = 0;
  in_x11 = (long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  goto switchD_0248f070_caseD_3;
  while( true ) {
    lVar19 = *in_stack_00000150;
    lVar12 = lVar12 + 1;
    lVar17 = lVar17 + 0x50;
    if (lVar19 == 0) break;
LAB_024911f4:
    uVar9 = lVar12 + 1;
    if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar9) {
LAB_02491468:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar19 = *(long *)(lVar19 + 0x60);
    if (lVar19 == 0) break;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7ecc(lVar19 + lVar17 + 0x70,0);
    lVar19 = unaff_x19[0xe0];
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar27 = *(undefined8 *)(lVar19 + lVar12 * 8 + 0x28);
    if (*(int *)(*plVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_0268b4e0(uVar27,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x60), lVar19 == 0)) break;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar9) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        FUN_024e8000(lVar19 + lVar17 + 0x70,1,0);
      }
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = *(long *)(lVar19 + lVar12 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024eefa0(lVar19,0);
      if ((*in_stack_00000150 == 0) || (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar19 == 0) break;
      FUN_0266b9c4(lVar19,*(undefined8 *)(lVar13 + lVar17 + 0x80),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = *(long *)(lVar19 + lVar12 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024eefa0(lVar19,0);
      if ((*in_stack_00000150 == 0) || (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar19 == 0) break;
      FUN_0266bbc8(lVar19,*(undefined8 *)(lVar13 + lVar17 + 0x98),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = *(long *)(lVar19 + lVar12 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024eefa0(lVar19,0);
      if ((*in_stack_00000150 == 0) || (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar19 == 0) break;
      FUN_0266bc74(lVar19,*(undefined8 *)(lVar13 + lVar17 + 0xa0),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = *(long *)(lVar19 + lVar12 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024eefa0(lVar19,0);
      if ((*in_stack_00000150 == 0) || (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar19 == 0) break;
      FUN_0266c1dc(lVar19,*(undefined8 *)(lVar13 + lVar17 + 0xa8),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = *(long *)(lVar19 + lVar12 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = FUN_024eefa0(lVar19,0), lVar19 == 0)) break;
      FUN_0266ed90(lVar19,0);
    }
  }
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


