/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual$$GetLineOriginAndDirection
ENTRY_POINT: 0248f82c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__GetLineOriginAndDirection
               (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
               undefined1 param_4 [16],float param_5)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  int in_w8;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint in_w9;
  uint uVar15;
  code *pcVar16;
  long *in_x11;
  long lVar17;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  uint uVar18;
  undefined8 unaff_x27;
  long *plVar19;
  undefined1 *unaff_x28;
  long unaff_x29;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s13;
  float fVar32;
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
  float in_stack_000000f0;
  undefined8 in_stack_00000100;
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
  float in_stack_00001798;
  float in_stack_0000179c;
  float in_stack_000017a0;
  undefined4 in_stack_000017a4;
  
code_r0x0248f82c:
  uVar15 = (uint)unaff_x27;
  fVar20 = (float)((ulong)param_2 >> 0x20);
  fVar24 = (float)param_2;
  if (((int)in_w9 < in_w8) && ((int)unaff_x19[0x5b] != 5)) {
                    /* try { // try from 0248f9e8 to 0258fa0b has its CatchHandler @ 0248f818 */
    if (uVar15 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
                    /* catch() { ... } // from try @ 0248f9e4 with catch @ 0248fa08 */
                    /* try { // try from 0248fa0c to 0258fa17 has its CatchHandler @ 0248fa2c */
    *(ulong *)(lVar12 + 0x70) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20),
                  param_5 + (float)*(undefined8 *)(lVar12 + 0x70));
    *(float *)(lVar12 + 0x78) = fVar20 + *(float *)(lVar12 + 0x78);
    plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                    /* try { // try from 0248fa18 to 0258fa23 has its CatchHandler @ 0248f818 */
                    /* try { // try from 0248fa24 to 0258fa2b has its CatchHandler @ 0248fa2c */
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0248fa0c with catch @ 0248fa2c
                       catch(type#2 @ 00000000) { ... } // from try @ 0248fa24 with catch @ 0248fa2c
                        */
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar12 + 0x98) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20),
                  param_5 + (float)*(undefined8 *)(lVar12 + 0x98));
    *(float *)(lVar12 + 0xa0) = fVar20 + *(float *)(lVar12 + 0xa0);
    uVar15 = *(uint *)(unaff_x21 + 0x18);
  }
  else {
    uVar11 = in_stack_00000130._4_4_;
    if ((int)unaff_x19[0x65] <= (int)in_stack_00000138) goto LAB_0248f8d8;
    if ((int)unaff_x19[0x5b] != 5) goto LAB_0248f8d8;
    if (uVar15 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x68) != iStack0000000000000030)
    goto LAB_0248f8d8;
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar12 + 0x70) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20),
                  param_5 + (float)*(undefined8 *)(lVar12 + 0x70));
    *(float *)(lVar12 + 0x78) = fVar20 + *(float *)(lVar12 + 0x78);
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar12 + 0x98) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20),
                  param_5 + (float)*(undefined8 *)(lVar12 + 0x98));
    *(float *)(lVar12 + 0xa0) = fVar20 + *(float *)(lVar12 + 0xa0);
    uVar15 = *(uint *)(unaff_x21 + 0x18);
    plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  }
  if (unaff_w22 < uVar15) {
    lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar12 + 0xc0) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 0x20),
                  param_5 + (float)*(undefined8 *)(lVar12 + 0xc0));
    *(float *)(lVar12 + 200) = fVar20 + *(float *)(lVar12 + 200);
    if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
      lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
      *(ulong *)(lVar12 + 0xe8) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20),
                    param_5 + (float)*(undefined8 *)(lVar12 + 0xe8));
      *(float *)(lVar12 + 0xf0) = fVar20 + *(float *)(lVar12 + 0xf0);
      if (unaff_w25 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
      do {
        (*pcVar16)();
        uVar15 = unaff_w20;
        uVar11 = in_stack_00000130._4_4_;
        do {
          do {
            unaff_w20 = in_stack_00000138;
            in_stack_00000130._4_4_ = uVar11;
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = lVar12 + unaff_x26 * unaff_x29;
            uVar21 = *(undefined8 *)(lVar12 + 0x11c);
            fVar24 = (float)in_stack_00000100;
            fVar20 = (float)((ulong)in_stack_00000100 >> 0x20);
            *(undefined8 *)(lVar12 + 0x11c) =
                 CONCAT44(fVar24 + (float)((ulong)uVar21 >> 0x20),in_stack_000000f0 + (float)uVar21)
            ;
            *(float *)(lVar12 + 0x124) = fVar20 + *(float *)(lVar12 + 0x124);
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = lVar12 + unaff_x26 * unaff_x29;
            *(ulong *)(lVar12 + 0x110) =
                 CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0x110) >> 0x20),
                          in_stack_000000f0 + (float)*(undefined8 *)(lVar12 + 0x110));
            *(float *)(lVar12 + 0x118) = fVar20 + *(float *)(lVar12 + 0x118);
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = lVar12 + unaff_x26 * unaff_x29;
            *(ulong *)(lVar12 + 0x128) =
                 CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar12 + 0x128) >> 0x20),
                          in_stack_000000f0 + (float)*(undefined8 *)(lVar12 + 0x128));
            *(float *)(lVar12 + 0x130) = fVar20 + *(float *)(lVar12 + 0x130);
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = lVar12 + unaff_x26 * unaff_x29;
            *(float *)(lVar12 + 0x134) = in_stack_000000f0 + *(float *)(lVar12 + 0x134);
            *(ulong *)(lVar12 + 0x138) =
                 CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(lVar12 + 0x138) >> 0x20),
                          fVar24 + (float)*(undefined8 *)(lVar12 + 0x138));
            lVar12 = *in_stack_00000150;
            if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x38), lVar13 == 0))
            goto LAB_02491464;
            uVar11 = *(uint *)(lVar13 + 0x18);
            if (uVar11 <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar17 = lVar13 + unaff_x26 * unaff_x29;
            *(ulong *)(lVar17 + 0x140) =
                 CONCAT44(in_stack_000000f0 +
                          (float)((ulong)*(undefined8 *)(lVar17 + 0x140) >> 0x20),
                          in_stack_000000f0 + (float)*(undefined8 *)(lVar17 + 0x140));
            *(ulong *)(lVar17 + 0x148) =
                 CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar17 + 0x148) >> 0x20),
                          fVar24 + (float)*(undefined8 *)(lVar17 + 0x148));
            *(float *)(lVar17 + 0x150) = fVar24 + *(float *)(lVar17 + 0x150);
            if (unaff_w20 == uVar15) {
              uVar15 = *in_stack_00000148 - 1;
              if (unaff_w22 == uVar15) goto LAB_0248fccc;
            }
            else {
              lVar12 = *(long *)(lVar12 + 0x50);
              if (lVar12 == 0) goto LAB_02491464;
              if (*(uint *)(lVar12 + 0x18) <= uVar15)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar17 = (long)(int)uVar15;
              lVar14 = lVar12 + lVar17 * unaff_x23;
              fVar20 = fVar24 + *(float *)(lVar14 + 0x54);
              *(ulong *)(lVar14 + 0x4c) =
                   CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar14 + 0x4c) >> 0x20),
                            fVar24 + (float)*(undefined8 *)(lVar14 + 0x4c));
              *(float *)(lVar14 + 0x54) = fVar20;
              *(float *)(lVar14 + 0x58) = in_stack_000000f0 + *(float *)(lVar14 + 0x58);
              if (uVar11 <= *(uint *)(lVar14 + 0x34))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              uVar23 = *(undefined4 *)(lVar13 + (int)*(uint *)(lVar14 + 0x34) * unaff_x29 + 0x11c);
              lVar12 = lVar12 + lVar17 * unaff_x23;
              *(float *)(lVar12 + 0x70) = fVar20;
              *(undefined4 *)(lVar12 + 0x6c) = uVar23;
              lVar12 = *in_stack_00000150;
              if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x50), lVar13 == 0))
              goto LAB_02491464;
              if (*(uint *)(lVar13 + 0x18) <= uVar15)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar12 = *(long *)(lVar12 + 0x38);
              if (lVar12 == 0) goto LAB_02491464;
              uVar15 = *(uint *)(lVar13 + lVar17 * unaff_x23 + 0x40);
              if (*(uint *)(lVar12 + 0x18) <= uVar15)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar13 = lVar13 + lVar17 * unaff_x23;
              *(undefined4 *)(lVar13 + 0x74) =
                   *(undefined4 *)(lVar12 + (int)uVar15 * unaff_x29 + 0x128);
              *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar13 + 0x4c);
              uVar15 = *in_stack_00000148 - 1;
LAB_0248fccc:
              if (unaff_w22 == uVar15) {
                lVar12 = *in_stack_00000150;
                if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x50), lVar13 == 0))
                goto LAB_02491464;
                if (*(uint *)(lVar13 + 0x18) <= unaff_w20)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar17 = lVar13 + in_stack_00000120 * unaff_x23;
                fVar20 = fVar24 + *(float *)(lVar17 + 0x54);
                *(ulong *)(lVar17 + 0x4c) =
                     CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                              fVar24 + (float)*(undefined8 *)(lVar17 + 0x4c));
                *(float *)(lVar17 + 0x54) = fVar20;
                *(float *)(lVar17 + 0x58) = in_stack_000000f0 + *(float *)(lVar17 + 0x58);
                lVar12 = *(long *)(lVar12 + 0x38);
                if (lVar12 == 0) goto LAB_02491464;
                if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar17 + 0x34))
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar23 = *(undefined4 *)(lVar12 + (int)*(uint *)(lVar17 + 0x34) * unaff_x29 + 0x11c)
                ;
                lVar13 = lVar13 + in_stack_00000120 * unaff_x23;
                *(float *)(lVar13 + 0x70) = fVar20;
                *(undefined4 *)(lVar13 + 0x6c) = uVar23;
                lVar12 = *in_stack_00000150;
                if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x50), lVar13 == 0))
                goto LAB_02491464;
                if (*(uint *)(lVar13 + 0x18) <= unaff_w20)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar12 = *(long *)(lVar12 + 0x38);
                if (lVar12 == 0) goto LAB_02491464;
                uVar15 = *(uint *)(lVar13 + in_stack_00000120 * unaff_x23 + 0x40);
                if (*(uint *)(lVar12 + 0x18) <= uVar15)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar13 = lVar13 + in_stack_00000120 * unaff_x23;
                *(undefined4 *)(lVar13 + 0x74) =
                     *(undefined4 *)(lVar12 + (int)uVar15 * unaff_x29 + 0x128);
                *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar13 + 0x4c);
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
                  if (((in_stack_00000140._4_4_ != 0x200b) && ((uVar8 & 1) == 0)) &&
                     (*in_stack_00000148 != 1)) goto LAB_024909a0;
                }
              }
              else if (((in_stack_00000130._4_4_ != 1) &&
                       ((int)unaff_w22 < (int)(*(uint *)(unaff_x21 + 0x18) - 1))) &&
                      (((int)unaff_w22 < *in_stack_00000148 &&
                       ((in_stack_00000140._4_4_ == 0x2019 || (in_stack_00000140._4_4_ == 0x27))))))
              {
                if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_ - 2)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar3 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x438);
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_016f9468(uVar3,0);
                if ((uVar8 & 1) != 0) {
                  if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  uVar3 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x148);
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar8 = FUN_016f9468(uVar3,0);
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
              lVar12 = *in_stack_00000150;
              if (lVar12 == 0) goto LAB_02491464;
              lVar13 = *(long *)(lVar12 + 0x40);
              if (lVar13 == 0) goto LAB_02491464;
              uVar15 = *(uint *)(lVar12 + 0x24);
              iVar7 = *(int *)(lVar13 + 0x18);
              if (iVar7 < (int)(uVar15 + 1)) {
                if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01147b84((long *)(lVar12 + 0x40),iVar7 + 1,
                             *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
                lVar12 = *in_stack_00000150;
                if (lVar12 == 0) goto LAB_02491464;
              }
              lVar13 = *(long *)(lVar12 + 0x40);
              if (lVar13 == 0) goto LAB_02491464;
              if (*(uint *)(lVar13 + 0x18) <= uVar15)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar13 = lVar13 + (long)(int)uVar15 * 0x18;
              *(long **)(lVar13 + 0x20) = unaff_x19;
              *(uint *)(lVar13 + 0x28) = in_stack_00000110._4_4_;
              *(int *)(lVar13 + 0x2c) = iVar6;
              *(uint *)(lVar13 + 0x30) = (iVar6 - in_stack_00000110._4_4_) + 1;
              lVar13 = *(long *)(lVar12 + 0x50);
              *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
              if (lVar13 == 0) goto LAB_02491464;
              unaff_x23 = 0x5c;
              if (*(uint *)(lVar13 + 0x18) <= unaff_w20)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar13 = lVar13 + in_stack_00000120 * 0x5c;
              in_stack_000000d8._4_4_ = 0;
              iStack00000000000000a4 = iStack00000000000000a4 + 1;
              *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
            }
            else {
              if ((in_stack_000000d8._4_4_ & 1) == 0) {
                in_stack_00000110._4_4_ = unaff_w22;
              }
              if (unaff_w22 == *in_stack_00000148 - 1U) {
                lVar12 = *in_stack_00000150;
                if (lVar12 == 0) goto LAB_02491464;
                lVar13 = *(long *)(lVar12 + 0x40);
                if (lVar13 == 0) goto LAB_02491464;
                uVar15 = *(uint *)(lVar12 + 0x24);
                iVar6 = *(int *)(lVar13 + 0x18);
                if (iVar6 < (int)(uVar15 + 1)) {
                  if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01147b84((long *)(lVar12 + 0x40),iVar6 + 1,
                               *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
                  lVar12 = *in_stack_00000150;
                  if (lVar12 == 0) goto LAB_02491464;
                }
                lVar13 = *(long *)(lVar12 + 0x40);
                unaff_x23 = 0x5c;
                if (lVar13 == 0) goto LAB_02491464;
                if (*(uint *)(lVar13 + 0x18) <= uVar15)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar13 = lVar13 + (long)(int)uVar15 * 0x18;
                *(long **)(lVar13 + 0x20) = unaff_x19;
                *(uint *)(lVar13 + 0x28) = in_stack_00000110._4_4_;
                *(uint *)(lVar13 + 0x2c) = unaff_w22;
                *(uint *)(lVar13 + 0x30) = in_stack_00000130._4_4_ - in_stack_00000110._4_4_;
                lVar13 = *(long *)(lVar12 + 0x50);
                *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
                if (lVar13 == 0) goto LAB_02491464;
                if (*(uint *)(lVar13 + 0x18) <= unaff_w20)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar13 = lVar13 + in_stack_00000120 * 0x5c;
                iStack00000000000000a4 = iStack00000000000000a4 + 1;
                *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
              }
LAB_0248fee0:
              in_stack_000000d8._4_4_ = 1;
            }
LAB_0248fee8:
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
            uVar15 = *(uint *)(lVar12 + 0x18);
            if (uVar15 <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar18 = (uint)in_stack_000000b0;
            uVar11 = (uint)in_stack_00000118;
            if ((*(byte *)(lVar12 + unaff_x26 * unaff_x29 + 400) >> 2 & 1) == 0) {
              if ((uStack00000000000000ec & 1) == 0) {
LAB_024903d8:
                uStack00000000000000ec = 0;
              }
              else {
LAB_0248ff18:
                if (uVar15 <= in_stack_00000130._4_4_ - 2)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar13 = *unaff_x19;
                uVar23 = *(undefined4 *)(lVar12 + in_stack_00000128 + -0x330);
                uVar28 = *(undefined4 *)(lVar12 + in_stack_00000128 + -0x2f8);
LAB_02490474:
                pcVar16 = *(code **)(lVar13 + 0x908);
LAB_0249047c:
                (*pcVar16)(uStack0000000000000054,fStack000000000000004c,uStack0000000000000050,
                           uVar23,fStack00000000000000cc,0,fStack0000000000000058,uVar28);
                puVar4 = System_Threading_Mutex_TypeInfo;
                lVar12 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar12 = *(long *)puVar4;
                }
LAB_024904cc:
                uStack00000000000000ec = 0;
                unaff_s15 = 0.0;
                fStack00000000000000cc = *(float *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
                fStack00000000000000c8 = 0.0;
              }
            }
            else {
              lVar12 = lVar12 + unaff_x26 * unaff_x29;
              iVar6 = *(int *)(lVar12 + 0x68);
              *(undefined4 *)(lVar12 + 0x16c) = in_stack_000017a4;
              if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)unaff_w20)
                  ) || (((int)unaff_x19[0x5b] == 5 && (iVar6 + 1 != (int)unaff_x19[0x66])))) {
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
                lVar12 = *in_stack_00000150;
                if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x38), lVar13 == 0))
                goto LAB_02491464;
                if (*(uint *)(lVar13 + 0x18) <= unaff_w22)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fVar20 = *(float *)(lVar13 + unaff_x26 * unaff_x29 + 0x160);
                if (unaff_s15 <= fVar20) {
                  unaff_s15 = fVar20;
                }
                if (fStack00000000000000c8 <= ABS(unaff_s13)) {
                  fStack00000000000000c8 = ABS(unaff_s13);
                }
                if (iVar6 != iStack0000000000000048) {
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar12 = *in_stack_00000150;
                    if (lVar12 == 0) goto LAB_02491464;
                    lVar13 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                  }
                  else {
                    lVar13 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                  }
                  fStack00000000000000cc = *(float *)(lVar13 + 0x15a8);
                }
                lVar12 = *(long *)(lVar12 + 0x38);
                if (lVar12 == 0) goto LAB_02491464;
                if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x1e] == 0) goto LAB_02491464;
                fVar22 = *(float *)(lVar12 + unaff_x26 * unaff_x29 + 0x14c);
                fVar20 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
                fVar22 = fVar22 + unaff_s15 * fVar20;
                iStack0000000000000048 = iVar6;
                if (fVar22 <= fStack00000000000000cc) {
                  fStack00000000000000cc = fVar22;
                }
              }
              unaff_x28 = &stack0x00000880;
              if ((uStack00000000000000ec & 1) == 0) {
                uStack00000000000000ec = 0;
                if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
                    ((int)uVar11 < (int)unaff_w22)) || (!bVar1)) goto LAB_024904e8;
                if (unaff_w22 == uVar11) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
                  if ((uVar8 & 1) != 0) goto LAB_024903d8;
                }
                if ((*in_stack_00000150 == 0) ||
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar12 = lVar12 + unaff_x26 * unaff_x29;
                fStack0000000000000058 = *(float *)(lVar12 + 0x160);
                uStack0000000000000054 = *(undefined4 *)(lVar12 + 0x11c);
                bVar5 = unaff_s15 != 0.0;
                fVar20 = fStack0000000000000058;
                if (bVar5) {
                  fVar20 = unaff_s15;
                }
                unaff_s15 = fVar20;
                uStack000000000000005c = *(undefined4 *)(lVar12 + 0x168);
                uStack0000000000000050 = 0;
                fVar20 = unaff_s13;
                if (bVar5) {
                  fVar20 = fStack00000000000000c8;
                }
                fStack000000000000004c = fStack00000000000000cc;
                fStack00000000000000c8 = fVar20;
              }
              if (*in_stack_00000148 == 1) {
                if ((*in_stack_00000150 != 0) &&
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 != 0)) {
                  if (unaff_w22 < *(uint *)(lVar12 + 0x18)) {
                    lVar12 = lVar12 + unaff_x26 * unaff_x29;
                    lVar13 = *unaff_x19;
                    uVar23 = *(undefined4 *)(lVar12 + 0x128);
                    uVar28 = *(undefined4 *)(lVar12 + 0x160);
                    goto LAB_02490474;
                  }
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                }
                goto LAB_02491464;
              }
              if ((unaff_w22 == uVar18) || ((int)uVar11 <= (int)unaff_w22)) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_016f68bc(in_stack_00000140._4_4_,0);
                if ((*in_stack_00000150 != 0) &&
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 != 0)) {
                  if (in_stack_00000140._4_4_ == 0x200b || (uVar8 & 1) != 0) {
                    lVar13 = in_stack_00000118;
                    if (*(uint *)(lVar12 + 0x18) <= uVar11)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                  else {
                    lVar13 = unaff_x26;
                    if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                  lVar12 = lVar12 + lVar13 * unaff_x29;
                  uVar23 = *(undefined4 *)(lVar12 + 0x128);
                  uVar28 = *(undefined4 *)(lVar12 + 0x160);
                  pcVar16 = *(code **)(*unaff_x19 + 0x908);
                  goto LAB_0249047c;
                }
                goto LAB_02491464;
              }
              if (!bVar1) {
                if ((*in_stack_00000150 != 0) &&
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 != 0)) {
                  uVar15 = *(uint *)(lVar12 + 0x18);
                  goto LAB_0248ff18;
                }
                goto LAB_02491464;
              }
              if ((int)unaff_w22 < *in_stack_00000148 + -1) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar12 + 0x18) <= in_stack_00000130._4_4_)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar8 = FUN_024a9e4c(uStack000000000000005c,
                                     *(undefined4 *)(lVar12 + in_stack_00000128),0);
                if ((uVar8 & 1) == 0) {
                  if ((*in_stack_00000150 != 0) &&
                     (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 != 0)) {
                    if (unaff_w22 < *(uint *)(lVar12 + 0x18)) {
                      lVar12 = lVar12 + unaff_x26 * unaff_x29;
                      (**(code **)(*unaff_x19 + 0x908))
                                (uStack0000000000000054,fStack000000000000004c,
                                 uStack0000000000000050,*(undefined4 *)(lVar12 + 0x128),
                                 fStack00000000000000cc,0,fStack0000000000000058,
                                 *(undefined4 *)(lVar12 + 0x160));
                      puVar4 = System_Threading_Mutex_TypeInfo;
                      lVar12 = *(long *)System_Threading_Mutex_TypeInfo;
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar12 = *(long *)puVar4;
                      }
                      goto LAB_024904cc;
                    }
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                  goto LAB_02491464;
                }
              }
              uStack00000000000000ec = 1;
            }
LAB_024904e8:
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (in_stack_000000d0 == 0) goto LAB_02491464;
            uVar15 = *(uint *)(lVar12 + unaff_x26 * unaff_x29 + 400);
            fVar20 = (float)FUN_026fd1f0(in_stack_000000d0 + 0x50,0);
            if ((uVar15 >> 6 & 1) == 0) {
              if ((uStack00000000000000e8 & 1) != 0) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar12 + 0x18) <= in_stack_00000130._4_4_ - 2)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar23 = *(undefined4 *)(lVar12 + in_stack_00000128 + -0x330);
                pcVar16 = *(code **)(*unaff_x19 + 0x908);
                fVar24 = in_stack_00000080._4_4_ * fVar20 +
                         *(float *)(lVar12 + in_stack_00000128 + -0x30c);
LAB_02490a68:
                (*pcVar16)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,in_stack_00000060,uVar23,
                           fVar24,0,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
              }
LAB_02490a9c:
              uStack00000000000000e8 = 0;
            }
            else {
              lVar12 = *in_stack_00000150;
              if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x38), lVar13 == 0))
              goto LAB_02491464;
              if (*(uint *)(lVar13 + 0x18) <= unaff_w22)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              *(undefined4 *)(lVar13 + unaff_x26 * unaff_x29 + 0x174) = in_stack_000017a4;
              if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)unaff_w20)
                  ) || (((int)unaff_x19[0x5b] == 5 &&
                        (*(int *)(lVar13 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66]
                        )))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((((in_stack_00000140._4_4_ == 0xd) || ((in_stack_00000140._4_4_ | 1) == 0xb)) ||
                  ((int)uVar11 < (int)unaff_w22)) || ((uStack00000000000000e8 & 1) != 0 || !bVar1))
              {
LAB_02490668:
                if ((uStack00000000000000e8 & 1) == 0) goto LAB_02490a9c;
              }
              else {
                if (unaff_w22 == uVar11) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
                  if ((uVar8 & 1) != 0) goto LAB_02490668;
                  lVar12 = *in_stack_00000150;
                  if (lVar12 == 0) goto LAB_02491464;
                }
                lVar12 = *(long *)(lVar12 + 0x38);
                if (lVar12 == 0) goto LAB_02491464;
                if (*(uint *)(lVar12 + 0x18) <= unaff_w22)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar12 = lVar12 + unaff_x26 * unaff_x29;
                in_stack_00000038 = *(float *)(lVar12 + 0x60);
                in_stack_00000080._4_4_ = *(float *)(lVar12 + 0x160);
                fStack0000000000000034 = *(float *)(lVar12 + 0x14c);
                in_stack_00000078._4_4_ = *(undefined4 *)(lVar12 + 0x11c);
                in_stack_00000068._4_4_ = fVar20 * in_stack_00000080._4_4_ + fStack0000000000000034;
                in_stack_00000060 = 0;
              }
              iVar6 = *in_stack_00000148;
              if (iVar6 == 1) {
                if (*in_stack_00000150 != 0) {
                  lVar12 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
                  if (lVar12 != 0) {
                    if (unaff_w22 < *(uint *)(lVar12 + 0x18)) {
                      lVar12 = lVar12 + unaff_x26 * unaff_x29;
                      lVar13 = *unaff_x19;
                      uVar23 = *(undefined4 *)(lVar12 + 0x128);
                      fVar24 = *(float *)(lVar12 + 0x14c);
LAB_024907e8:
                      pcVar16 = *(code **)(lVar13 + 0x908);
LAB_02490a64:
                      fVar24 = fVar20 * in_stack_00000080._4_4_ + fVar24;
                      goto LAB_02490a68;
                    }
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                }
                goto LAB_02491464;
              }
              if (unaff_w22 == uVar18) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_016f68bc(in_stack_00000140._4_4_,0);
                if ((*in_stack_00000150 != 0) &&
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 != 0)) {
                  uVar15 = *(uint *)(lVar12 + 0x18);
                  if (in_stack_00000140._4_4_ == 0x200b || (uVar8 & 1) != 0) {
                    if (uVar15 <= uVar11)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                  else {
LAB_02490a40:
                    in_stack_00000118 = unaff_x26;
                    if (uVar15 <= unaff_w22)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
LAB_02490a48:
                  lVar12 = lVar12 + in_stack_00000118 * unaff_x29;
                  fVar24 = *(float *)(lVar12 + 0x14c);
                  uVar23 = *(undefined4 *)(lVar12 + 0x128);
                  pcVar16 = *(code **)(*unaff_x19 + 0x908);
                  goto LAB_02490a64;
                }
                goto LAB_02491464;
              }
              if ((int)unaff_w22 < iVar6) {
                lVar12 = *in_stack_00000150;
                if ((lVar12 != 0) && (lVar13 = *(long *)(lVar12 + 0x38), lVar13 != 0)) {
                  if (in_stack_00000130._4_4_ < *(uint *)(lVar13 + 0x18)) {
                    if (*(float *)(lVar13 + in_stack_00000128 + -0x108) == in_stack_00000038) {
                      fVar22 = *(float *)(lVar13 + in_stack_00000128 + -0x1c);
                      if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar8 = FUN_024aa280(fVar24 + fVar22,fStack0000000000000034,0);
                      if ((uVar8 & 1) != 0) {
                        iVar6 = *in_stack_00000148;
                        goto LAB_024908ec;
                      }
                      lVar12 = *in_stack_00000150;
                      if (lVar12 == 0) goto LAB_02491464;
                    }
                    lVar12 = *(long *)(lVar12 + 0x38);
                    if (lVar12 != 0) {
                      uVar15 = *(uint *)(lVar12 + 0x18);
                      if ((int)unaff_w22 <= (int)uVar11) goto LAB_02490a40;
                      if (uVar11 < uVar15) goto LAB_02490a48;
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                    }
                    goto LAB_02491464;
                  }
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                }
                goto LAB_02491464;
              }
LAB_024908ec:
              if ((int)unaff_w22 < iVar6) {
                iVar6 = FUN_02681c0c(in_stack_000000d0,0);
                if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar12 = *(long *)(unaff_x21 + in_stack_00000128 + -0x130);
                if (lVar12 == 0) goto LAB_02491464;
                iVar7 = FUN_02681c0c(lVar12,0);
                if (iVar6 != iVar7) {
                  if (*in_stack_00000150 != 0) {
                    lVar12 = *(long *)(*in_stack_00000150 + 0x38);
                    goto joined_r0x024907c8;
                  }
                  goto LAB_02491464;
                }
              }
              if (!bVar1) {
                if ((*in_stack_00000150 != 0) &&
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 != 0)) {
                  if (in_stack_00000130._4_4_ - 2 < *(uint *)(lVar12 + 0x18)) {
                    lVar13 = *unaff_x19;
                    uVar23 = *(undefined4 *)(lVar12 + in_stack_00000128 + -0x330);
                    fVar24 = *(float *)(lVar12 + in_stack_00000128 + -0x30c);
                    goto LAB_024907e8;
                  }
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                }
                goto LAB_02491464;
              }
              uStack00000000000000e8 = 1;
            }
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
            uVar15 = (uint)*(undefined8 *)(lVar12 + 0x18);
            if (uVar15 <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if ((*(byte *)(lVar12 + unaff_x26 * unaff_x29 + 0x191) >> 1 & 1) == 0) {
              if ((uStack00000000000000e0 & 1) != 0) {
                (**(code **)(*unaff_x19 + 0x918))
                          (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                           in_stack_00000098,fStack00000000000000a0,uStack0000000000000094);
              }
LAB_02490b04:
              uStack00000000000000e0 = 0;
            }
            else {
              if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)unaff_w20)
                  ) || (((int)unaff_x19[0x5b] == 5 &&
                        (*(int *)(lVar12 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66]
                        )))) {
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
                  uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
                  if ((uVar8 & 1) != 0) goto LAB_02490b04;
                }
                puVar4 = System_Threading_Mutex_TypeInfo;
                lVar13 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar13 = *(long *)puVar4;
                }
                if ((*in_stack_00000150 == 0) ||
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x38), lVar12 == 0)) goto LAB_02491464;
                uVar15 = (uint)*(undefined8 *)(lVar12 + 0x18);
                if (uVar15 <= unaff_w22)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar13 = *(long *)(lVar13 + 0xb8);
                lVar17 = lVar12 + unaff_x26 * unaff_x29;
                uVar21 = *(undefined8 *)(lVar17 + 0x17c);
                fStack00000000000000a8 = *(float *)(lVar13 + 0x1598);
                in_stack_000017a0 = *(float *)(lVar17 + 0x18c);
                fStack00000000000000ac = *(float *)(lVar13 + 0x159c);
                in_stack_00000098 = *(float *)(lVar13 + 0x15a0);
                fStack00000000000000a0 = *(float *)(lVar13 + 0x15a4);
                *(undefined8 *)(unaff_x28 + 0xf18) = *(undefined8 *)(lVar17 + 0x184);
                *(undefined8 *)(unaff_x28 + 0xf10) = uVar21;
                uStack0000000000000094 = 0;
              }
              if (uVar15 <= unaff_w22)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar12 = lVar12 + unaff_x26 * unaff_x29;
              in_stack_00000178 = *(undefined8 *)(unaff_x28 + 0xf18);
              in_stack_00000170 = *(undefined8 *)(unaff_x28 + 0xf10);
              fVar20 = *(float *)(lVar12 + 0x128);
              fVar25 = *(float *)(lVar12 + 0x188);
              uVar21 = *(undefined8 *)(lVar12 + 0x17c);
              fVar29 = *(float *)(lVar12 + 0x184);
              fVar26 = *(float *)(lVar12 + 0x18c);
              fVar24 = *(float *)(lVar12 + 0x11c);
              fVar22 = *(float *)(lVar12 + 0x148);
              fVar27 = *(float *)(lVar12 + 0x150);
              in_stack_00000158 = uVar21;
              fStack0000000000000160 = fVar29;
              fStack0000000000000164 = fVar25;
              in_stack_00000168 = fVar26;
              in_stack_00000180 = in_stack_000017a0;
              uVar8 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
              lVar12 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
              if ((uVar8 & 1) == 0) {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar12);
                }
                fVar20 = fVar20 + in_stack_00001798;
                fVar24 = fVar24 - (float)((ulong)in_stack_00001790 >> 0x20);
                if (fVar24 <= fStack00000000000000a8) {
                  fStack00000000000000a8 = fVar24;
                }
                if (fVar27 - in_stack_000017a0 <= fStack00000000000000ac) {
                  fStack00000000000000ac = fVar27 - in_stack_000017a0;
                }
                if (in_stack_00000098 <= fVar20) {
                  in_stack_00000098 = fVar20;
                }
                if (fStack00000000000000a0 <= fVar22 + in_stack_0000179c) {
                  fStack00000000000000a0 = fVar22 + in_stack_0000179c;
                }
              }
              else {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar12);
                }
                fVar24 = (fVar24 + (in_stack_00000098 - in_stack_00001798)) * 0.5;
                if (fVar27 <= fStack00000000000000ac) {
                  fStack00000000000000ac = fVar27;
                }
                if (fStack00000000000000a0 <= fVar22) {
                  fStack00000000000000a0 = fVar22;
                }
                (**(code **)(*unaff_x19 + 0x918))
                          (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                           fVar24,fStack00000000000000a0,uStack0000000000000094);
                fStack00000000000000ac = fVar27 - fVar26;
                in_stack_00000098 = fVar20 + fVar29;
                uStack0000000000000094 = 0;
                fStack00000000000000a0 = fVar22 + fVar25;
                fStack00000000000000a8 = fVar24;
                in_stack_00001790 = uVar21;
                in_stack_00001798 = fVar29;
                in_stack_0000179c = fVar25;
                in_stack_000017a0 = fVar26;
              }
              unaff_x23 = 0x5c;
              if (((*in_stack_00000148 == 1) || (unaff_w22 == uVar18)) ||
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
            puVar4 = PTR_DAT_033ed410;
            iVar6 = *in_stack_00000148;
            iStack00000000000000e4 = iStack00000000000000e4 + 1;
            uVar11 = in_stack_00000130._4_4_ + 1;
            in_stack_00000128 = in_stack_00000128 + 0x178;
            if (iVar6 <= (int)in_stack_00000130._4_4_) {
              lVar12 = *in_stack_00000150;
              if (lVar12 == 0) goto LAB_02491464;
              *(int *)(lVar12 + 0x18) = iVar6;
              lVar13 = unaff_x19[0xd3];
              *(uint *)(lVar12 + 0x2c) = unaff_w20 + 1;
              iVar7 = iStack00000000000000a4;
              if (iVar6 < 1) {
                iVar7 = 1;
              }
              if (iStack00000000000000a4 == 0) {
                iVar7 = 1;
              }
              *(int *)(lVar12 + 0x1c) = (int)lVar13;
              *(int *)(lVar12 + 0x24) = iVar7;
              *(int *)(lVar12 + 0x30) = (int)unaff_x19[0x95] + 1;
              if (((int)unaff_x19[0x62] != 0xff) ||
                 (uVar8 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar8 & 1) == 0)) goto LAB_02491468;
              lVar12 = unaff_x19[0xda];
              if (lVar12 != 0) {
                (**(code **)(lVar12 + 0x18))
                          (*(undefined8 *)(lVar12 + 0x40),*in_stack_00000150,
                           *(undefined8 *)(lVar12 + 0x28));
              }
              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0)) goto LAB_02491464;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (*(int *)(lVar12 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                FUN_024e8000(lVar12 + 0x20,1,0);
              }
              if (unaff_x19[0x73] == 0) goto LAB_02491464;
              UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                        (unaff_x19[0x73],0);
              if ((unaff_x19[0x6c] == 0) ||
                 (lVar12 = *(long *)(unaff_x19[0x6c] + 0x60), lVar12 == 0)) goto LAB_02491464;
              if (*(int *)(lVar12 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (unaff_x19[0x73] == 0) goto LAB_02491464;
              FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar12 + 0x30),0);
              if ((unaff_x19[0x6c] == 0) ||
                 (lVar12 = *(long *)(unaff_x19[0x6c] + 0x60), lVar12 == 0)) goto LAB_02491464;
              if (*(int *)(lVar12 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (unaff_x19[0x73] == 0) goto LAB_02491464;
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar12 + 0x48),0);
              if ((unaff_x19[0x6c] == 0) ||
                 (lVar12 = *(long *)(unaff_x19[0x6c] + 0x60), lVar12 == 0)) goto LAB_02491464;
              if (*(int *)(lVar12 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (unaff_x19[0x73] == 0) goto LAB_02491464;
              FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar12 + 0x50),0);
              if ((unaff_x19[0x6c] == 0) ||
                 (lVar12 = *(long *)(unaff_x19[0x6c] + 0x60), lVar12 == 0)) goto LAB_02491464;
              if (*(int *)(lVar12 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (unaff_x19[0x73] == 0) goto LAB_02491464;
              FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar12 + 0x58),0);
              if (unaff_x19[0x73] == 0) goto LAB_02491464;
              FUN_0266ed90(unaff_x19[0x73],0);
              lVar12 = *in_stack_00000150;
              if (lVar12 == 0) goto LAB_02491464;
              lVar17 = 0;
              lVar13 = 0;
              goto LAB_024911f4;
            }
            if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if ((*in_stack_00000150 == 0) ||
               (lVar12 = *(long *)(*in_stack_00000150 + 0x50), lVar12 == 0)) goto LAB_02491464;
            unaff_x26 = (long)(int)in_stack_00000130._4_4_;
            lVar13 = unaff_x21 + unaff_x26 * unaff_x29;
            in_stack_00000138 = *(uint *)(lVar13 + 100);
            if (*(uint *)(lVar12 + 0x18) <= in_stack_00000138)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            in_stack_000000d0 = *(long *)(lVar13 + 0x38);
            in_stack_00000140._4_4_ = (uint)*(ushort *)(lVar13 + 0x20);
            in_stack_00000120 = (long)(int)in_stack_00000138;
            lVar12 = lVar12 + in_stack_00000120 * unaff_x23;
            uVar15 = *(uint *)(lVar12 + 0x3c);
            in_stack_000000b0 = (long)(int)uVar15;
            in_stack_00000118 = (long)*(int *)(lVar12 + 0x40);
            iVar6 = *(int *)(lVar12 + 0x28);
            iVar7 = *(int *)(lVar12 + 0x2c);
            uVar18 = *(uint *)(lVar12 + 0x68);
            fVar30 = *(float *)(lVar12 + 0x5c);
            fVar31 = *(float *)(lVar12 + 0x60);
            iVar2 = *(int *)(lVar12 + 0x20);
            fVar22 = *(float *)(lVar12 + 0x4c);
            fVar25 = *(float *)(lVar12 + 0x54);
            fVar24 = *(float *)(lVar12 + 0x58);
            fVar29 = *(float *)(lVar12 + 0x6c);
            fVar26 = *(float *)(lVar12 + 0x70);
            fVar20 = *(float *)(lVar12 + 0x74);
            fVar27 = *(float *)(lVar12 + 0x78);
            fVar32 = fVar30 + fVar31;
            if ((int)uVar18 < 9) {
              switch(uVar18) {
              case 1:
                if ((char)unaff_x19[0x1d] == '\0') {
                  in_stack_000000c0._4_4_ = fVar31 + 0.0;
                }
                else {
                  in_stack_000000c0._4_4_ = 0.0 - fVar24;
                }
                break;
              case 2:
LAB_0248f124:
                in_stack_000000c0._4_4_ = (fVar31 + fVar30 * 0.5) - fVar24 * 0.5;
                break;
              default:
                goto switchD_0248f070_caseD_3;
              case 4:
                in_stack_000000c0._4_4_ = fVar32 - fVar24;
                if ((char)unaff_x19[0x1d] != '\0') {
                  in_stack_000000c0._4_4_ = fVar32;
                }
                break;
              case 8:
                goto switchD_0248f070_caseD_8;
              }
LAB_0248f194:
              in_stack_000000b8 = 0;
            }
            else if (uVar18 == 0x10) {
switchD_0248f070_caseD_8:
              if (in_stack_00000140._4_4_ < 0xad) {
                if ((in_stack_00000140._4_4_ != 3) && (in_stack_00000140._4_4_ != 10))
                goto LAB_0248f0c8;
              }
              else if ((in_stack_00000140._4_4_ != 0xad) &&
                      ((in_stack_00000140._4_4_ != 0x200b && (in_stack_00000140._4_4_ != 0x2060))))
              {
LAB_0248f0c8:
                if (*(uint *)(unaff_x21 + 0x18) <= uVar15)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar3 = *(undefined2 *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x20);
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_016f9f84(uVar3,0);
                if ((uVar8 & 1) == 0) {
                  bVar1 = (int)in_stack_00000138 < (int)unaff_x19[0x94];
                }
                else {
                  bVar1 = false;
                }
                if ((fVar24 <= fVar30) && (!bVar1 && (uVar18 >> 4 & 1) == 0)) {
                  in_stack_000000c0._4_4_ = fVar31;
                  if ((char)unaff_x19[0x1d] != '\0') {
                    in_stack_000000c0._4_4_ = fVar32;
                  }
                  goto LAB_0248f194;
                }
                if (((uVar11 == 1) || (in_stack_00000138 != unaff_w20)) ||
                   (in_stack_00000130._4_4_ == *(uint *)((long)unaff_x19 + 0x31c))) {
                  in_stack_000000c0._4_4_ = fVar31;
                  if ((char)unaff_x19[0x1d] != '\0') {
                    in_stack_000000c0._4_4_ = fVar32;
                  }
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00000020._4_4_ = FUN_016fa418(in_stack_00000140._4_4_,0);
                  in_stack_000000b8 = 0;
                }
                else {
                  cVar10 = (char)unaff_x19[0x1d];
                  fVar31 = -fVar24;
                  if (cVar10 != '\0') {
                    fVar31 = fVar24;
                  }
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar15)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  fVar24 = 1.0;
                  iVar7 = (int)*(char *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x194) +
                          (-iVar2 - (in_stack_00000020._4_4_ & 1)) + iVar7 + -1;
                  if (0 < iVar7) {
                    fVar24 = *(float *)((long)unaff_x19 + 0x2d4);
                  }
                  if (iVar7 < 1) {
                    iVar7 = 1;
                  }
                  if (in_stack_00000140._4_4_ == 9) {
LAB_02490fe0:
                    fVar24 = 1.0 - fVar24;
                  }
                  else {
                    if (in_stack_00000140._4_4_ != 0xa0) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar8 = FUN_016fa418(in_stack_00000140._4_4_,0);
                      cVar10 = (char)unaff_x19[0x1d];
                      if ((uVar8 & 1) != 0) goto LAB_02490fe0;
                    }
                    iVar7 = (iVar2 - (~in_stack_00000020._4_4_ & 1)) + iVar6;
                  }
                  fVar24 = ((fVar30 + fVar31) * fVar24) / (float)iVar7;
                  if (cVar10 == '\0') {
                    in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar24;
                    in_stack_000000b8 =
                         CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                                  (float)in_stack_000000b8 + 0.0);
                  }
                  else {
                    in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar24;
                  }
                }
              }
            }
            else if (uVar18 == 0x20) {
              fVar24 = fVar29 + fVar20;
              goto LAB_0248f124;
            }
switchD_0248f070_caseD_3:
            unaff_x27 = *(undefined8 *)(unaff_x21 + 0x18);
            uVar18 = (uint)unaff_x27;
            if (uVar18 <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            unaff_x24 = unaff_x21 + unaff_x26 * unaff_x29;
            unaff_x28 = &stack0x00000880;
            in_stack_000000f0 = fStack0000000000000090 + in_stack_000000c0._4_4_;
            unaff_x23 = 0x5c;
            param_2 = CONCAT44((float)((ulong)in_stack_00000088 >> 0x20) +
                               (float)((ulong)in_stack_000000b8 >> 0x20),
                               (float)in_stack_00000088 + (float)in_stack_000000b8);
            plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
            ;
            unaff_w22 = in_stack_00000130._4_4_;
            uVar15 = unaff_w20;
            in_stack_00000100 = param_2;
          } while (*(char *)(unaff_x24 + 0x194) == '\0');
          unaff_w25 = *(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x2c);
          if (unaff_w25 != 0) goto LAB_0248f808;
          fVar24 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)in_stack_00000138,1.0);
          switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
          case 0:
            lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
            *(undefined4 *)(lVar12 + 0x84) = 0;
            *(undefined4 *)(lVar12 + 0xac) = 0;
            *(undefined4 *)(lVar12 + 0xd4) = 0x3f800000;
            fVar24 = 1.0;
            break;
          case 1:
            fVar27 = *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x70);
            if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
              lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
              fVar20 = (in_stack_000000c0._4_4_ + fVar27) - *(float *)(in_stack_00000070 + 0x230);
              fVar27 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
              ;
              goto LAB_0248f2dc;
            }
            lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
            fVar20 = fVar20 - fVar29;
            *(float *)(lVar12 + 0x84) = fVar24 + (fVar27 - fVar29) / fVar20;
            *(float *)(lVar12 + 0xac) = fVar24 + (*(float *)(lVar12 + 0x98) - fVar29) / fVar20;
            *(float *)(lVar12 + 0xd4) = fVar24 + (*(float *)(lVar12 + 0xc0) - fVar29) / fVar20;
            fVar24 = fVar24 + (*(float *)(lVar12 + 0xe8) - fVar29) / fVar20;
            break;
          case 2:
            lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
            fVar27 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
            fVar20 = (in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0x70)) -
                     *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
            *(float *)(lVar12 + 0x84) = fVar24 + fVar20 / fVar27;
            *(float *)(lVar12 + 0xac) =
                 fVar24 + ((in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0x98)) -
                          *(float *)(in_stack_00000070 + 0x230)) /
                          (*(float *)(in_stack_00000070 + 0x238) -
                          *(float *)(in_stack_00000070 + 0x230));
            *(float *)(lVar12 + 0xd4) =
                 fVar24 + ((in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0xc0)) -
                          *(float *)(in_stack_00000070 + 0x230)) /
                          (*(float *)(in_stack_00000070 + 0x238) -
                          *(float *)(in_stack_00000070 + 0x230));
            fVar24 = fVar24 + ((in_stack_000000c0._4_4_ + *(float *)(lVar12 + 0xe8)) -
                              *(float *)(in_stack_00000070 + 0x230)) /
                              (*(float *)(in_stack_00000070 + 0x238) -
                              *(float *)(in_stack_00000070 + 0x230));
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
              fVar27 = fVar27 - fVar26;
              fVar20 = fVar24 + (*(float *)(lVar12 + 0x74) - fVar26) / fVar27;
              fVar27 = fVar24 + (*(float *)(lVar12 + 0x9c) - fVar26) / fVar27;
              *(float *)(lVar12 + 0x88) = fVar20;
              *(float *)(lVar12 + 0xb0) = fVar27;
              *(float *)(lVar12 + 0xd8) = fVar20;
              *(float *)(lVar12 + 0x100) = fVar27;
              break;
            case 2:
              lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
              fVar20 = fVar24 + (*(float *)(lVar12 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                                (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
              *(float *)(lVar12 + 0x88) = fVar20;
              fVar27 = *(float *)(unaff_x19 + 0x9b);
              fVar26 = *(float *)(unaff_x19 + 0x9c);
              *(float *)(lVar12 + 0xd8) = fVar20;
              fVar20 = fVar24 + (*(float *)(lVar12 + 0x9c) - fVar27) / (fVar26 - fVar27);
              *(float *)(lVar12 + 0xb0) = fVar20;
              *(float *)(lVar12 + 0x100) = fVar20;
              break;
            case 3:
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
              uVar18 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
            }
            if (uVar18 <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
            fVar20 = *(float *)(lVar12 + 0x15c);
            fVar27 = (1.0 - (*(float *)(lVar12 + 0x88) + *(float *)(lVar12 + 0xb0)) * fVar20) * 0.5;
            fVar26 = fVar24 + *(float *)(lVar12 + 0x88) * fVar20 + fVar27;
            fVar24 = fVar24 + fVar27 + *(float *)(lVar12 + 0xb0) * fVar20;
            *(float *)(lVar12 + 0x84) = fVar26;
            *(float *)(lVar12 + 0xac) = fVar26;
            *(float *)(lVar12 + 0xd4) = fVar24;
            break;
          default:
            goto switchD_0248f240_default;
          }
          *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = fVar24;
switchD_0248f240_default:
          switch((int)unaff_x19[0x61]) {
          case 0:
            if (uVar18 <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
            *(undefined4 *)(lVar12 + 0x88) = 0;
            *(undefined4 *)(lVar12 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar12 + 0xd8) = 0x3f800000;
            *(undefined4 *)(lVar12 + 0x100) = 0;
            break;
          case 1:
            if (in_stack_00000130._4_4_ < uVar18) {
              lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
              fVar22 = fVar22 - fVar25;
              fVar24 = (*(float *)(lVar12 + 0x74) - fVar25) / fVar22;
              fVar22 = (*(float *)(lVar12 + 0x9c) - fVar25) / fVar22;
              *(float *)(lVar12 + 0x88) = fVar24;
              goto LAB_0248f644;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          case 2:
            if (uVar18 <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
            fVar24 = (*(float *)(lVar12 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                     (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
            *(float *)(lVar12 + 0x88) = fVar24;
            fVar22 = (*(float *)(lVar12 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
                     (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
            *(float *)(lVar12 + 0xb0) = fVar22;
            *(float *)(lVar12 + 0xd8) = fVar22;
            *(float *)(lVar12 + 0x100) = fVar24;
            break;
          case 3:
            if (uVar18 <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
            fVar22 = *(float *)(lVar12 + 0x15c);
            fVar20 = (1.0 - (*(float *)(lVar12 + 0x84) + *(float *)(lVar12 + 0xd4)) / fVar22) * 0.5;
            fVar24 = *(float *)(lVar12 + 0x84) / fVar22 + fVar20;
            fVar20 = fVar20 + *(float *)(lVar12 + 0xd4) / fVar22;
            *(float *)(lVar12 + 0x88) = fVar24;
            *(float *)(lVar12 + 0xb0) = fVar20;
            *(float *)(lVar12 + 0x100) = fVar24;
            *(float *)(lVar12 + 0xd8) = fVar20;
          }
          if (uVar18 <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
          unaff_s13 = in_stack_00000040 * *(float *)(lVar12 + 0x160) *
                      (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
          if ((*(char *)(lVar12 + 0x5c) == '\0') &&
             ((*(byte *)(unaff_x21 + unaff_x26 * unaff_x29 + 400) & 1) != 0)) {
            unaff_s13 = -unaff_s13;
          }
          lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
          fVar20 = *(float *)(lVar12 + 0x88);
          fVar22 = *(float *)(lVar12 + 0x84);
          fVar24 = -2.1474836e+09;
          if (fVar22 != INFINITY) {
            fVar24 = (float)(int)fVar22;
          }
          fVar25 = *(float *)(lVar12 + 0xd4);
          fVar26 = *(float *)(lVar12 + 0xd8);
          fVar27 = -2.1474836e+09;
          if (fVar20 != INFINITY) {
            fVar27 = (float)(int)fVar20;
          }
          uVar23 = FUN_024e0374(fVar22 - fVar24,fVar20 - fVar27);
          *(undefined4 *)(lVar12 + 0x84) = uVar23;
          if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar26 = fVar26 - fVar27;
          *(float *)(lVar12 + 0x88) = unaff_s13;
          uVar23 = FUN_024e0374(fVar22 - fVar24,fVar26);
          *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xac) = uVar23;
          if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar25 = fVar25 - fVar24;
          *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xb0) = unaff_s13;
          fVar24 = (float)FUN_024e0374(fVar25,fVar26);
          *(float *)(lVar12 + 0xd4) = fVar24;
          if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(float *)(lVar12 + 0xd8) = unaff_s13;
          uVar23 = FUN_024e0374(fVar25,fVar20 - fVar27);
          *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = uVar23;
          unaff_x27 = *(undefined8 *)(unaff_x21 + 0x18);
          if ((uint)unaff_x27 <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x100) = unaff_s13;
LAB_0248f808:
          unaff_x28 = &stack0x00000880;
          uVar15 = (uint)unaff_x27;
          unaff_x23 = 0x5c;
          in_x11 = (long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
          if (((int)in_stack_00000130._4_4_ < (int)unaff_x19[100]) &&
             (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
            in_w8 = (int)unaff_x19[0x65];
            in_stack_00000130._4_4_ = uVar11;
            in_w9 = in_stack_00000138;
            param_5 = in_stack_000000f0;
            goto code_r0x0248f82c;
          }
LAB_0248f8d8:
          in_stack_00000130._4_4_ = uVar11;
                    /* try { // try from 0248f8dc to 0258f917 has its CatchHandler @ 0248f9cc */
          if (uVar15 <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(in_x11);
            DAT_03774d76 = '\x01';
            in_x11 = (long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
          }
          lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
          uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
          *(undefined8 *)(lVar12 + 0x70) = **(undefined8 **)(*in_x11 + 0xb8);
          *(undefined4 *)(lVar12 + 0x78) = uVar23;
          plVar19 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                    /* try { // try from 0248f930 to 0258f937 has its CatchHandler @ 0248f9c8 */
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
                    /* try { // try from 0248f950 to 0258f977 has its CatchHandler @ 0248f9c4 */
          uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
          *(undefined8 *)(lVar12 + 0x98) = **(undefined8 **)(*in_x11 + 0xb8);
          *(undefined4 *)(lVar12 + 0xa0) = uVar23;
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
          uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
          *(undefined8 *)(lVar12 + 0xc0) = **(undefined8 **)(*in_x11 + 0xb8);
          *(undefined4 *)(lVar12 + 200) = uVar23;
                    /* try { // try from 0248f990 to 0258f99b has its CatchHandler @ 0248f9c8 */
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    /* try { // try from 0248f99c to 0258f9bb has its CatchHandler @ 0248f818 */
          lVar12 = unaff_x21 + unaff_x26 * unaff_x29;
          uVar23 = *(undefined4 *)(*(undefined8 **)(*in_x11 + 0xb8) + 1);
          *(undefined8 *)(lVar12 + 0xe8) = **(undefined8 **)(*in_x11 + 0xb8);
          *(undefined4 *)(lVar12 + 0xf0) = uVar23;
                    /* try { // try from 0248f9bc to 0258f9bf has its CatchHandler @ 0248f9cc */
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    /* try { // try from 0248f9c0 to 0258f9c3 has its CatchHandler @ 0248f9c4 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0248f950 with catch @ 0248f9c4
                       catch(type#1 @ 03274860) { ... } // from try @ 0248f9c0 with catch @ 0248f9c4
                       try { // try from 0248f9c4 to 0258f9e3 has its CatchHandler @ 0248f818 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0248f930 with catch @ 0248f9c8
                       catch(type#1 @ 03274860) { ... } // from try @ 0248f990 with catch @ 0248f9c8
                        */
          *(undefined1 *)(unaff_x24 + 0x194) = 0;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0248f8dc with catch @ 0248f9cc
                       catch(type#1 @ 03274860) { ... } // from try @ 0248f9bc with catch @ 0248f9cc
                        */
          if (unaff_w25 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
          uVar15 = unaff_w20;
          uVar11 = in_stack_00000130._4_4_;
        } while (unaff_w25 != 1);
        pcVar16 = *(code **)(*unaff_x19 + 0x8f8);
                    /* try { // try from 0248f9e4 to 0258f9e7 has its CatchHandler @ 0248fa08 */
      } while( true );
    }
  }
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  while( true ) {
    lVar12 = *in_stack_00000150;
    lVar13 = lVar13 + 1;
    lVar17 = lVar17 + 0x50;
    if (lVar12 == 0) break;
LAB_024911f4:
    uVar8 = lVar13 + 1;
    if ((long)*(int *)(lVar12 + 0x34) <= (long)uVar8) {
LAB_02491468:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar12 = *(long *)(lVar12 + 0x60);
    if (lVar12 == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7ecc(lVar12 + lVar17 + 0x70,0);
    lVar12 = unaff_x19[0xe0];
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar21 = *(undefined8 *)(lVar12 + lVar13 * 8 + 0x28);
    if (*(int *)(*plVar19 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b4e0(uVar21,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0)) break;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar8) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        FUN_024e8000(lVar12 + lVar17 + 0x70,1,0);
      }
      lVar12 = unaff_x19[0xe0];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_024eefa0(lVar12,0);
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar12 == 0) break;
      FUN_0266b9c4(lVar12,*(undefined8 *)(lVar14 + lVar17 + 0x80),0);
      lVar12 = unaff_x19[0xe0];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_024eefa0(lVar12,0);
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar12 == 0) break;
      FUN_0266bbc8(lVar12,*(undefined8 *)(lVar14 + lVar17 + 0x98),0);
      lVar12 = unaff_x19[0xe0];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_024eefa0(lVar12,0);
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar12 == 0) break;
      FUN_0266bc74(lVar12,*(undefined8 *)(lVar14 + lVar17 + 0xa0),0);
      lVar12 = unaff_x19[0xe0];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_024eefa0(lVar12,0);
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar12 == 0) break;
      FUN_0266c1dc(lVar12,*(undefined8 *)(lVar14 + lVar17 + 0xa8),0);
      lVar12 = unaff_x19[0xe0];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x28);
      if ((lVar12 == 0) || (lVar12 = FUN_024eefa0(lVar12,0), lVar12 == 0)) break;
      FUN_0266ed90(lVar12,0);
    }
  }
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


