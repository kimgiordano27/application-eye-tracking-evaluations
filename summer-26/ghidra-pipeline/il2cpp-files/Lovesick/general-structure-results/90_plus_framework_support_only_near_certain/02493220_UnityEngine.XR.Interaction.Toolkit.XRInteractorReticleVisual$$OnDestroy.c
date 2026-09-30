/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$OnDestroy
ENTRY_POINT: 02493220
PROGRAM: Lovesick-libil2cpp.so
SCORE: 156
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__OnDestroy(float param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  double __x;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 uVar27;
  char cVar28;
  undefined4 *puVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar40;
  long lVar41;
  long *plVar42;
  uint uVar43;
  long *unaff_x23;
  uint *unaff_x24;
  long lVar44;
  long *plVar45;
  long *unaff_x26;
  long unaff_x27;
  long lVar46;
  long *plVar47;
  undefined1 *unaff_x28;
  uint unaff_w29;
  int iVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  double dVar55;
  float fVar56;
  float fVar57;
  ulong uVar58;
  float fVar59;
  float unaff_s8;
  float fVar60;
  float unaff_s9;
  float fVar61;
  float fVar62;
  uint uVar63;
  float fVar64;
  ulong unaff_d10;
  uint uVar65;
  float fVar66;
  ulong unaff_d11;
  float unaff_s12;
  float unaff_s13;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  uint uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  uint uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float in_stack_00000090;
  float fStack0000000000000098;
  uint uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 uStack00000000000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  undefined8 in_stack_000000f0;
  float in_stack_00000110;
  float in_stack_00000120;
  float in_stack_00000128;
  undefined8 in_stack_00000130;
  long *in_stack_00000138;
  int in_stack_00000140;
  uint *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  uint in_stack_00000880;
  undefined4 in_stack_00000884;
  undefined8 in_stack_00000888;
  undefined4 in_stack_00000890;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
  do {
    fVar49 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar56 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (unaff_s8 * 0.5 - unaff_s13 * (param_1 * 0.5 + fVar49));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar56;
    fVar49 = unaff_s13;
    do {
      if (((unaff_w21 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
        lVar44 = unaff_x19[0x22];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_02681b9c(lVar44,0,0);
        fVar51 = 0.0;
        if ((uVar21 & 1) != 0) {
          lVar44 = unaff_x19[0x22];
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar44 == 0) goto LAB_0249920c;
          uVar21 = FUN_0267e1d8(lVar44,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 0x54),0);
          fVar51 = 0.0;
          if ((uVar21 & 1) != 0) {
            lVar44 = unaff_x19[0x22];
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar44 == 0) goto LAB_0249920c;
            fVar57 = (float)FUN_0267f610(lVar44,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 0x54)
                                         ,0);
            if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
            fVar50 = *(float *)(*in_stack_00000138 + 0x1b0);
            fVar51 = (float)FUN_0267f610(unaff_x19[0x22],
                                         *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 0xcc),0);
            fVar51 = fVar51 * fVar57 * fVar50 * 0.25;
            if (fVar57 < in_stack_00000128 + fVar51) {
              in_stack_00000128 = fVar57 - fVar51;
            }
          }
        }
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar57 = *(float *)(*in_stack_00000138 + 0x1b4);
      }
      else {
        lVar44 = unaff_x19[0x22];
                    /* try { // try from 02493298 to 0259329b has its CatchHandler @ 024932c8 */
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
                    /* try { // try from 0249329c to 0259329f has its CatchHandler @ 024932c4 */
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_02681b9c(lVar44,0,0);
        fVar57 = 0.0;
        if ((uVar21 & 1) != 0) {
          lVar44 = unaff_x19[0x22];
                    /* catch() { ... } // from try @ 0249329c with catch @ 024932c4 */
                    /* catch() { ... } // from try @ 02493298 with catch @ 024932c8 */
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 024930ec with catch @ 024932cc */
            thunk_FUN_00d32864();
          }
          if (lVar44 == 0) goto LAB_0249920c;
                    /* try { // try from 024932dc to 0259332b has its CatchHandler @ 024933b0 */
          uVar21 = FUN_0267e1d8(lVar44,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 0x54),0);
          if ((uVar21 & 1) != 0) {
                    /* catch() { ... } // from try @ 024930bc with catch @ 024932f0 */
            lVar44 = unaff_x19[0x22];
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar44 == 0) goto LAB_0249920c;
                    /* catch() { ... } // from try @ 02493120 with catch @ 02493314 */
            uVar21 = FUN_0267e1d8(lVar44,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 0xcc),0);
            if ((uVar21 & 1) != 0) {
              lVar44 = unaff_x19[0x22];
                    /* try { // try from 0249332c to 02593337 has its CatchHandler @ 02492ba4 */
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
                    /* try { // try from 02493338 to 0259333f has its CatchHandler @ 024933b0 */
              if (lVar44 != 0) {
                    /* catch() { ... } // from try @ 024931d0 with catch @ 02493340
                       try { // try from 02493340 to 02593363 has its CatchHandler @ 02492ba4 */
                fVar50 = (float)FUN_0267f610(lVar44,*(undefined4 *)
                                                     (*(long *)(*unaff_x26 + 0xb8) + 0x54),0);
                if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                  fVar60 = *(float *)(*in_stack_00000138 + 0x1a8);
                  fVar51 = (float)FUN_0267f610(unaff_x19[0x22],
                                               *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 0xcc),
                                               0);
                  fVar51 = fVar51 * fVar50 * fVar60 * 0.25;
                  if (fVar50 < in_stack_00000128 + fVar51) {
                    in_stack_00000128 = fVar50 - fVar51;
                  }
                  goto LAB_024934bc;
                }
              }
              goto LAB_0249920c;
            }
          }
        }
        fVar51 = 0.0;
      }
LAB_024934bc:
      fStack00000000000000ec = *(float *)(unaff_x19 + 199);
      fVar50 = (float)FUN_026fd464(&stack0x00001770,0);
      fStack00000000000000ec =
           fStack00000000000000ec +
           (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
           fVar49 * (unaff_s9 + ((fVar50 - in_stack_00000128) - fVar51));
      fVar50 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar69 = *(float *)((long)unaff_x19 + 0x614) +
               ((in_stack_00000130._4_4_ + fVar49 * ((float)unaff_d10 + in_stack_00000128 + fVar50))
               - *(float *)(unaff_x19 + 0x9a));
      fVar50 = (float)FUN_026fd45c(&stack0x00001770,0);
      fVar64 = fVar69 - fVar49 * (in_stack_00000128 + in_stack_00000128 + fVar50);
      fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
      fVar60 = fStack00000000000000ec +
               (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
               fVar49 * (fVar51 + fVar51 + in_stack_00000128 + in_stack_00000128 + fVar50);
      fStack00000000000000e8 = fStack00000000000000ec;
      fVar50 = fVar60;
      if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w21 == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
        fVar52 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
        fVar50 = (float)FUN_026fd46c(&stack0x00001770,0);
        fVar62 = fVar52 * fVar49 * (fVar51 + in_stack_00000128 + fVar50);
        fVar50 = (float)FUN_026fd46c(&stack0x00001770,0);
        fVar59 = (float)FUN_026fd45c(&stack0x00001770,0);
        fVar69 = fVar69 + 0.0;
        fVar64 = fVar64 + 0.0;
        fVar52 = fVar52 * fVar49 * (((fVar50 - fVar59) - in_stack_00000128) - fVar51);
        fVar50 = fVar60 + fVar52;
        fVar59 = fStack00000000000000ec + fVar62;
        fVar53 = (fVar62 - fVar52) * 0.5;
        fStack00000000000000ec = (fStack00000000000000ec + fVar52) - fVar53;
        fVar60 = (fVar60 + fVar62) - fVar53;
        fStack00000000000000e8 = fVar59 - fVar53;
        fVar50 = fVar50 - fVar53;
      }
      if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
        fVar53 = 0.0;
        fVar54 = 0.0;
        fVar61 = 0.0;
        fVar52 = 0.0;
        fVar62 = fVar64;
        fVar59 = fVar69;
      }
      else {
        thunk_FUN_026935f0(_uStack0000000000000060,0);
        fVar66 = (fVar60 + fStack00000000000000ec) * 0.5;
        fVar67 = (fVar64 + fVar69) * 0.5;
        fVar69 = fVar69 - fVar67;
        fVar52 = 0.0;
        fVar59 = fVar69;
        fStack00000000000000e8 =
             (float)FUN_02692df0(fStack00000000000000e8 - fVar66,_uStack0000000000000060,0);
        fStack00000000000000e8 = fVar66 + fStack00000000000000e8;
        fVar52 = fVar52 + 0.0;
        fVar64 = fVar64 - fVar67;
        fVar53 = 0.0;
        fVar62 = fVar64;
        fStack00000000000000ec =
             (float)FUN_02692df0(fStack00000000000000ec - fVar66,_uStack0000000000000060,0);
        fStack00000000000000ec = fVar66 + fStack00000000000000ec;
        fVar53 = fVar53 + 0.0;
        fVar61 = 0.0;
        fVar60 = (float)FUN_02692df0(fVar60 - fVar66,_uStack0000000000000060,0);
        fVar60 = fVar66 + fVar60;
        fVar69 = fVar67 + fVar69;
        fVar61 = fVar61 + 0.0;
        fVar54 = 0.0;
        fVar50 = (float)FUN_02692df0(fVar50 - fVar66,_uStack0000000000000060,0);
        fVar50 = fVar66 + fVar50;
        fVar64 = fVar67 + fVar64;
        fVar54 = fVar54 + 0.0;
        fVar62 = fVar67 + fVar62;
        fVar59 = fVar67 + fVar59;
      }
      if (*unaff_x23 == 0) goto LAB_0249920c;
      lVar44 = *(long *)(*unaff_x23 + 0x38);
      uVar21 = (ulong)(uint)fVar49;
      if (lVar44 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar44 + 0x120) = fVar62;
      *(float *)(lVar44 + 0x11c) = fStack00000000000000ec;
      *(float *)(lVar44 + 0x124) = fVar53;
      if ((*unaff_x23 == 0) || (lVar44 = *(long *)(*unaff_x23 + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar44 + 0x114) = fVar59;
      *(float *)(lVar44 + 0x110) = fStack00000000000000e8;
      *(float *)(lVar44 + 0x118) = fVar52;
      if ((*unaff_x23 == 0) || (lVar44 = *(long *)(*unaff_x23 + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar44 + 0x128) = fVar60;
      *(float *)(lVar44 + 300) = fVar69;
      *(float *)(lVar44 + 0x130) = fVar61;
      if ((*unaff_x23 == 0) || (lVar44 = *(long *)(*unaff_x23 + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar44 + 0x134) = fVar50;
      *(float *)(lVar44 + 0x138) = fVar64;
      *(float *)(lVar44 + 0x13c) = fVar54;
      if ((*unaff_x23 == 0) || (lVar44 = *(long *)(*unaff_x23 + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      uVar14 = *unaff_x24;
      lVar41 = (long)(int)uVar14;
      if (*(uint *)(lVar44 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = lVar44 + lVar41 * unaff_x27;
      *(int *)(lVar33 + 0x140) = (int)unaff_x19[199];
      fVar69 = *(float *)(unaff_x19 + 0x9a);
      uVar22 = (ulong)(uint)fVar69;
      fVar50 = *(float *)((long)unaff_x19 + 0x614);
      *(float *)(lVar33 + 0x15c) = (fVar60 - fStack00000000000000ec) / (fVar59 - fVar62);
      *(float *)(lVar33 + 0x14c) = (in_stack_00000130._4_4_ - fVar69) + fVar50;
      in_stack_00000120 = in_stack_00000120 * fVar49;
      if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        in_stack_00000120 = in_stack_00000120 / in_stack_000000f0._4_4_;
        in_stack_00000110 = (in_stack_00000110 * fVar49) / in_stack_000000f0._4_4_;
      }
      else {
        in_stack_00000110 = in_stack_00000110 * fVar49;
      }
      uVar18 = *(uint *)(unaff_x19 + 0x92);
      bVar11 = unaff_w29 != 0;
      in_stack_00000120 = fVar50 + in_stack_00000120;
      bVar12 = uVar14 != uVar18;
      if (bVar12 && bVar11) {
        fVar50 = *(float *)(unaff_x19 + 0x98);
        lVar44 = lVar44 + lVar41 * unaff_x27;
        *(float *)(lVar44 + 0x154) = fVar50;
        in_stack_00000110 = *(float *)((long)unaff_x19 + 0x4c4);
        *(float *)(lVar44 + 0x148) = fVar50 - fVar69;
        *(float *)(lVar44 + 0x158) = in_stack_00000110;
        *(float *)(unaff_x19 + 0x97) = fVar50 - fVar69;
        in_stack_00000110 = in_stack_00000110 - fVar69;
        *(float *)(lVar44 + 0x150) = in_stack_00000110;
      }
      else {
        in_stack_00000110 = fVar50 + in_stack_00000110;
        fVar60 = in_stack_00000120;
        fVar64 = in_stack_00000110;
        if (fVar50 != 0.0) {
          fVar60 = (in_stack_00000120 - fVar50) / *(float *)((long)unaff_x19 + 0x3fc);
          fVar64 = (in_stack_00000110 - fVar50) / *(float *)((long)unaff_x19 + 0x3fc);
          if (fVar60 <= in_stack_00000120) {
            fVar60 = in_stack_00000120;
          }
          if (in_stack_00000110 <= fVar64) {
            fVar64 = in_stack_00000110;
          }
        }
        lVar44 = lVar44 + lVar41 * unaff_x27;
        fVar50 = fVar60;
        if (fVar60 <= *(float *)(unaff_x19 + 0x98)) {
          fVar50 = *(float *)(unaff_x19 + 0x98);
        }
        fVar52 = fVar64;
        if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar64) {
          fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
        }
        *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
        in_stack_00000110 = in_stack_00000110 - fVar69;
        *(float *)(unaff_x19 + 0x98) = fVar50;
        *(float *)(lVar44 + 0x154) = fVar60;
        *(float *)(lVar44 + 0x158) = fVar64;
        *(float *)(lVar44 + 0x148) = in_stack_00000120 - fVar69;
        *(float *)(unaff_x19 + 0x97) = in_stack_00000120 - fVar69;
        *(float *)(lVar44 + 0x150) = in_stack_00000110;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000110;
      if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
        if (!bVar12 || !bVar11) {
          *(float *)(unaff_x19 + 0x96) = fVar50;
          if (unaff_x19[0x1f] != 0) {
            fVar50 = *(float *)((long)unaff_x19 + 0x4b4);
            fVar60 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
            in_stack_000000f0._4_4_ = (fVar49 * fVar60) / in_stack_000000f0._4_4_;
            uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9a);
            if (fVar50 <= in_stack_000000f0._4_4_) {
              fVar50 = in_stack_000000f0._4_4_;
            }
            *(float *)((long)unaff_x19 + 0x4b4) = fVar50;
            goto LAB_02493948;
          }
          goto LAB_0249920c;
        }
      }
      else {
LAB_02493948:
        if ((!bVar12 || !bVar11) && (float)uVar22 == 0.0) {
          fVar50 = *(float *)(in_stack_00000070 + 0x208);
          if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000120) {
            fVar50 = in_stack_00000120;
          }
          *(float *)(in_stack_00000070 + 0x208) = fVar50;
        }
      }
      lVar44 = *unaff_x23;
      if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_0249920c;
      uVar63 = *in_stack_00000148;
      if (*(uint *)(lVar41 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar41 = lVar41 + (int)uVar63 * unaff_x27;
      *(undefined1 *)(lVar41 + 0x194) = 0;
      uVar65 = *(uint *)(unaff_x19 + 0x4e);
      iVar17 = (int)unaff_x27;
      if (((in_stack_000017bc == 9) ||
          ((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0xad)))) ||
         (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
          (*(int *)((long)unaff_x19 + 0x63c) == 1)))) {
        *(undefined1 *)(lVar41 + 0x194) = 1;
        pfVar31 = _fStack0000000000000088;
        pfVar34 = _fStack0000000000000098;
        if (unaff_w20 != 0) {
          lVar44 = *(long *)(lVar44 + 0x50);
          if (lVar44 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          pfVar34 = (float *)(lVar44 + 0x60);
          pfVar31 = (float *)(lVar44 + 100);
        }
        fVar60 = *pfVar34;
        fVar69 = *pfVar31;
        fVar50 = *(float *)(unaff_x19 + 0x6b);
        fVar64 = *(float *)(unaff_x19 + 199);
        fStack00000000000000d4 = (in_stack_00000090 - fVar60) - fVar69;
        bVar11 = true;
        if ((fVar50 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar50))) {
          bVar11 = fVar50 == -1.0;
        }
        if (!bVar11) {
          fStack00000000000000d4 = fVar50;
        }
        fVar50 = 0.0;
        if ((char)unaff_x19[0x1d] == '\0') {
          fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
          uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9a);
        }
        fVar62 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar53 = (float)uVar22;
        if (in_stack_000017bc != 0xad) {
          fStack00000000000000d0 = fVar49;
        }
        fVar54 = 0.0;
        if ((0.0 < fVar53) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar54 = (*(float *)(unaff_x19 + 0x96) - (fVar62 - fVar53)) + fVar54;
        uVar63 = *in_stack_00000148;
        if (fVar54 <= fStack00000000000000a4) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
          plVar42 = (long *)System_Threading_Mutex_TypeInfo;
          fVar53 = 1.0 - fVar52;
          uVar22 = (ulong)(uint)fVar53;
          fVar64 = ABS(fVar64) + fVar50 * fVar53 * fStack00000000000000d0;
          fVar50 = _DAT_0294c6e8;
          if ((uVar65 & 0x18) == 0) {
            fVar50 = 1.0;
          }
          if (fVar64 <= fVar50 * fStack00000000000000d4) {
LAB_02494950:
            if (in_stack_000017bc == 0xad) {
              if ((*in_stack_00000150 != 0) &&
                 (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
                if (*in_stack_00000148 < *(uint *)(lVar44 + 0x18)) {
                  *(undefined1 *)(lVar44 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
                  goto LAB_02494abc;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
            if (in_stack_000017bc != 9) {
              if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                (**(code **)(*unaff_x19 + 0x8c8))();
              }
              else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar51);
              }
              uVar63 = *in_stack_00000148;
              if (((uint)fStack0000000000000058 & 1) != 0) {
                *(uint *)(in_stack_00000070 + 0x1f0) = uVar63;
              }
              *(uint *)((long)unaff_x19 + 0x49c) = uVar63;
              *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar44 = *(long *)(unaff_x19[0x6c] + 0x50), lVar44 != 0)) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar44 + 0x18)) {
                  lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  fStack0000000000000058 = 0.0;
                  *(float *)(lVar44 + 0x60) = fVar60;
                  *(float *)(lVar44 + 100) = fVar69;
                  goto LAB_02494abc;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
            lVar44 = *in_stack_00000150;
            if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0))
            goto LAB_0249920c;
            uVar63 = *in_stack_00000148;
            if (uVar63 < *(uint *)(lVar41 + 0x18)) {
              *(undefined1 *)(lVar41 + (int)uVar63 * unaff_x27 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x49c) = uVar63;
              lVar41 = *(long *)(lVar44 + 0x50);
              if (lVar41 != 0) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar41 + 0x18)) {
                  lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
                  goto LAB_024949c4;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          if (((char)unaff_x19[0x5a] == '\0') || (uVar63 == *(uint *)(unaff_x19 + 0x92))) {
            if (((char)unaff_x19[0x46] != '\0') &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar62 = *(float *)(unaff_x19 + 0x59) / 100.0;
              if (fVar52 < fVar62) {
                fVar49 = fVar64 / fVar53;
                if (fVar52 <= 0.0) {
                  fVar49 = fVar64;
                }
                fVar52 = fVar52 + (fVar64 - fVar50 * (fStack00000000000000d4 + DAT_02958218)) /
                                  fVar49;
                goto LAB_0249929c;
              }
              fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
              uVar22 = (ulong)(uint)fVar53;
              fVar52 = *(float *)(unaff_x19 + 0x49);
              if (fVar53 <= fVar52) goto LAB_02493e34;
LAB_02499210:
              fVar49 = (fVar53 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar49 <= DAT_028aa298) {
                fVar49 = DAT_028aa298;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar53;
              fVar56 = (fVar53 - fVar49) * 20.0 + 0.5;
              fVar49 = DAT_02958220;
              if (fVar56 != INFINITY) {
                fVar49 = (float)(int)fVar56 / 20.0;
              }
              if (fVar49 <= fVar52) {
                fVar49 = fVar52;
              }
LAB_02495fd8:
              *(float *)((long)unaff_x19 + 0x1dc) = fVar49;
              return;
            }
LAB_02493e34:
            iVar13 = (int)unaff_x19[0x5b];
            if (iVar13 == 1) {
              lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *plVar42;
              }
              plVar47 = (long *)StringLiteral_302;
              lVar41 = *(long *)(lVar44 + 0xb8);
              lVar44 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
              if ((*(byte *)(lVar44 + 0x132) & 1) == 0) {
                lVar44 = FUN_00d5941c(lVar44);
              }
              lVar44 = *(long *)(*(long *)(lVar44 + 0xc0) + 8);
              if ((*(byte *)(lVar44 + 0x132) & 1) == 0) {
                lVar44 = FUN_00d5941c();
              }
              piVar24 = (int *)thunk_FUN_00d32ed4(lVar41 + 0x11f0,*(long *)(lVar44 + 0x80) + 0xa0);
              if (*piVar24 == 0) goto LAB_02495f00;
              lVar44 = *plVar42;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *plVar42;
              }
              FUN_013b8de4(*(long *)(lVar44 + 0xb8) + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              memcpy(&stack0x00000c70,&stack0x00000880,0x378);
              goto LAB_02494358;
            }
            if (iVar13 != 6) {
              if (iVar13 == 3) {
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                goto LAB_02493ec0;
              }
              goto LAB_02494950;
            }
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar47 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            lVar44 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar21 = FUN_02681b9c(lVar44,0,0);
            if ((uVar21 & 1) != 0) {
              plVar45 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x558))(plVar45,uVar23,*(undefined8 *)(*plVar45 + 0x560));
              lVar44 = unaff_x19[0x5c];
              if (lVar44 == 0) goto LAB_0249920c;
              *(int *)(lVar44 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar44,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar45 = (long *)unaff_x19[0x5c];
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
LAB_02494484:
            uVar21 = uVar22;
            in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
          }
          else {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
              lVar44 = *in_stack_00000150;
              if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0))
              goto LAB_0249920c;
              if (*(uint *)(lVar41 + 0x18) <= *in_stack_00000148)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar52 = *(float *)(unaff_x19 + 0x9a);
              fVar53 = 0.0;
              if ((0.0 < fVar52) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              fVar53 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                       *(float *)(lVar41 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                       (fVar53 - *(float *)((long)unaff_x19 + 0x4c4)) +
                       fStack0000000000000054 *
                       (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
            }
            else {
              lVar44 = unaff_x19[0x6c];
              *(undefined1 *)((long)unaff_x19 + 700) = 1;
              if (lVar44 == 0) goto LAB_0249920c;
              fVar52 = *(float *)(unaff_x19 + 0x9a);
              fVar53 = *(float *)(unaff_x19 + 0x57) +
                       fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
            }
            puVar9 = System_Threading_Mutex_TypeInfo;
            lVar44 = *(long *)(lVar44 + 0x38);
            if (lVar44 == 0) goto LAB_0249920c;
            uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
            if ((*(uint *)(lVar44 + 0x18) <= uVar36) ||
               (uVar43 = uVar36 - 1, *(uint *)(lVar44 + 0x18) <= uVar43))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar22 = (ulong)(uint)(fVar53 + *(float *)(unaff_x19 + 0x96));
            fVar54 = (fVar53 + *(float *)(unaff_x19 + 0x96) + fVar52) -
                     *(float *)(lVar44 + (int)uVar36 * unaff_x27 + 0x158);
            if (((in_stack_00000068._4_1_ & 1) != 0 ||
                 *(short *)(lVar44 + (long)(int)uVar43 * (long)iVar17 + 0x20) != 0xad) ||
               ((fStack00000000000000a4 <= fVar54 && ((int)unaff_x19[0x5b] != 0)))) {
              if (*(short *)(lVar44 + (int)uVar36 * unaff_x27 + 0x20) == 0xad) {
                in_stack_00000068._4_1_ = 1;
                plVar47 = (long *)StringLiteral_302;
                plVar42 = (long *)System_Threading_Mutex_TypeInfo;
                uVar21 = uVar22;
                goto LAB_02492630;
              }
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar62 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar62 <= fVar52) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar22 = (ulong)(uint)fVar53;
                  fVar52 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar52 < fVar53) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                  goto LAB_024946c0;
                }
LAB_024992ac:
                fVar49 = fVar64;
                if (0.0 < fVar52) {
                  fVar49 = fVar64 / (1.0 - fVar52);
                }
                fVar52 = fVar52 + (fVar64 - fVar50 * (fStack00000000000000d4 + DAT_02958218)) /
                                  fVar49;
LAB_0249929c:
                if (fVar62 <= fVar52) {
                  fVar52 = fVar62;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar52;
                return;
              }
LAB_024946c0:
              lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *(long *)puVar9;
              }
              iVar13 = *(int *)(*(long *)(lVar44 + 0xb8) + 0xe78);
              if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar44 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar44 = *(long *)(unaff_x19[0x6c] + 0x38), lVar44 == 0)) goto LAB_0249920c;
                uVar43 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar44 + 0x18) <= uVar43)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fStack0000000000000034 = (float)iVar13;
                if (*(short *)(lVar44 + (long)(int)uVar43 * (long)iVar17 + 0x20) == 0xad) {
                  *in_stack_00000148 = uVar43;
                  goto LAB_024947b4;
                }
              }
              if (fStack00000000000000a4 < fVar54) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                plVar47 = (long *)StringLiteral_302;
                plVar42 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar52 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar52 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar49 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar54) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar49 <= fVar52) {
                      fVar49 = fVar52;
                    }
LAB_024964c8:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar49;
                    return;
                  }
                  fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar62 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar52 < fVar62) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024992ac;
                  fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar22 = (ulong)(uint)fVar53;
                  fVar52 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar52 < fVar53) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  FUN_024d7014(fStack0000000000000054,uVar21,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar57,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  break;
                case 1:
                  lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar44 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar44 = *plVar42;
                  }
                  lVar41 = *(long *)(lVar44 + 0xb8);
                  lVar44 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar44 + 0x132) & 1) == 0) {
                    lVar44 = FUN_00d5941c(lVar44);
                  }
                  lVar44 = *(long *)(*(long *)(lVar44 + 0xc0) + 8);
                  if ((*(byte *)(lVar44 + 0x132) & 1) == 0) {
                    lVar44 = FUN_00d5941c();
                  }
                  piVar24 = (int *)thunk_FUN_00d32ed4(lVar41 + 0x11f0,
                                                      *(long *)(lVar44 + 0x80) + 0xa0);
                  if (*piVar24 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_02495f00;
                  }
                  lVar44 = *plVar42;
                  if (*(int *)(lVar44 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar44 = *plVar42;
                  }
                  FUN_013b8de4(*(long *)(lVar44 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                  iVar13 = FUN_024d66ec();
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_02494364;
                case 3:
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0249408c;
                case 5:
                  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                  FUN_024d7014(fStack0000000000000054,uVar21,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar57,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar44 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar21 = FUN_02681b9c(lVar44,0,0);
                  if ((uVar21 & 1) != 0) {
                    plVar45 = (long *)unaff_x19[0x5c];
                    uVar23 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar45 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar45 + 0x558))
                              (plVar45,uVar23,*(undefined8 *)(*plVar45 + 0x560));
                    lVar44 = unaff_x19[0x5c];
                    if (lVar44 == 0) goto LAB_0249920c;
                    *(int *)(lVar44 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar44,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar45 = (long *)unaff_x19[0x5c];
                    if (plVar45 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_02494484;
                default:
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_02494950;
                }
                in_stack_00000068._4_1_ = 0;
                bStack000000000000005c = 1;
                fStack0000000000000058 = 1.4013e-45;
                plVar47 = (long *)StringLiteral_302;
                plVar42 = (long *)System_Threading_Mutex_TypeInfo;
              }
              else {
                FUN_024d7014(fStack0000000000000054,uVar21,fStack00000000000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar57,fStack00000000000000cc,
                             fStack00000000000000d4,fStack0000000000000048);
                bStack000000000000005c = 1;
                in_stack_00000068._4_1_ = 0;
                fStack0000000000000058 = 1.4013e-45;
                plVar47 = (long *)StringLiteral_302;
                plVar42 = (long *)System_Threading_Mutex_TypeInfo;
              }
            }
            else {
              *in_stack_00000148 = uVar43;
LAB_024947b4:
              in_stack_000017a8 = CONCAT44(0x2d,uVar43);
              in_stack_00000068._4_1_ = 0;
              plVar47 = (long *)StringLiteral_302;
              plVar42 = (long *)System_Threading_Mutex_TypeInfo;
              uVar21 = uVar22;
              in_stack_00001788 = in_stack_00001788 - 1;
            }
          }
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar63;
          }
          plVar47 = (long *)StringLiteral_302;
          plVar42 = (long *)System_Threading_Mutex_TypeInfo;
          uVar23 = DAT_02941c08;
          if ((char)unaff_x19[0x46] != '\0') {
            fVar61 = *(float *)(unaff_x19 + 0x58);
            if (((fVar61 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar53)) &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar49 = *(float *)((long)unaff_x19 + 0x2b4) +
                       ((in_stack_00000018._4_4_ - fVar54) / (float)(int)unaff_x19[0x94]) /
                       fStack0000000000000054;
              if (fVar49 <= fVar61) {
                fVar49 = fVar61;
              }
              goto LAB_024964c8;
            }
            fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar53 = *(float *)(unaff_x19 + 0x49);
            uVar22 = (ulong)(uint)fVar53;
            if ((fVar53 < fVar54) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar49 = (fVar54 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar49 <= DAT_028aa298) {
                fVar49 = DAT_028aa298;
              }
              fVar56 = (fVar54 - fVar49) * 20.0 + 0.5;
              fVar49 = DAT_02958220;
              if (fVar56 != INFINITY) {
                fVar49 = (float)(int)fVar56 / 20.0;
              }
              if (fVar49 <= fVar53) {
                fVar49 = fVar53;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar54;
              goto LAB_02495fd8;
            }
          }
          switch((int)unaff_x19[0x5b]) {
          case 1:
            lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar44 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar44 = *plVar42;
            }
            lVar41 = *(long *)(lVar44 + 0xb8);
            lVar44 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar44 + 0x132) & 1) == 0) {
              lVar44 = FUN_00d5941c(lVar44);
            }
            plVar47 = (long *)StringLiteral_302;
            lVar44 = *(long *)(*(long *)(lVar44 + 0xc0) + 8);
            if ((*(byte *)(lVar44 + 0x132) & 1) == 0) {
              lVar44 = FUN_00d5941c();
            }
            piVar24 = (int *)thunk_FUN_00d32ed4(lVar41 + 0x11f0,*(long *)(lVar44 + 0x80) + 0xa0);
            if (*piVar24 == 0) {
LAB_02495f00:
              in_stack_000017a8 = DAT_02941c08;
              in_stack_00000148[0] = 0;
              in_stack_00000148[1] = 0;
              uVar21 = uVar22;
              in_stack_00001788 = 0xffffffff;
            }
            else {
              lVar44 = *plVar42;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *plVar42;
              }
              FUN_013b8de4(*(long *)(lVar44 + 0xb8) + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
              iVar13 = FUN_024d66ec();
LAB_02494364:
              iVar48 = *(int *)((long)unaff_x19 + 0x48c) + -1;
              *(int *)((long)unaff_x19 + 0x48c) = iVar48;
              in_stack_00000140 = in_stack_00000140 + 1;
              uVar21 = uVar22;
              in_stack_00001788 = iVar13 - 1;
              in_stack_000017a8 = CONCAT44(0x2026,iVar48);
            }
            goto LAB_02492630;
          default:
            goto 
            UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
            ;
          case 3:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
LAB_02493ec0:
            plVar47 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            break;
          case 5:
            if ((uVar63 == 0) || ((int)in_stack_00001788 < 0)) {
              *in_stack_00000148 = 0;
              plVar47 = (long *)StringLiteral_302;
              plVar42 = (long *)System_Threading_Mutex_TypeInfo;
              uVar21 = uVar22;
              in_stack_00001788 = 0xffffffff;
              in_stack_000017a8 = uVar23;
            }
            else {
              fVar56 = *(float *)(unaff_x19 + 0x98);
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              in_stack_00001788 = FUN_024d66ec();
              if (fStack00000000000000a4 < fVar56 - fVar62) break;
              *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
              *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              uVar21 = *(ulong *)(*(long *)(*plVar42 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
              *(undefined4 *)(unaff_x19 + 0x99) = 0;
              lVar44 = NEON_rev64(uVar21,4);
              unaff_x19[0x98] = lVar44;
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
              *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
            }
            goto LAB_02492630;
          case 6:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            plVar47 = (long *)StringLiteral_302;
            lVar44 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar21 = FUN_02681b9c(lVar44,0,0);
            if ((uVar21 & 1) != 0) {
              plVar45 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x558))(plVar45,uVar23,*(undefined8 *)(*plVar45 + 0x560));
              lVar44 = unaff_x19[0x5c];
              if (lVar44 == 0) goto LAB_0249920c;
              *(int *)(lVar44 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar44,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar45 = (long *)unaff_x19[0x5c];
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
          }
LAB_0249408c:
          uVar21 = uVar22;
          in_stack_000017a8 = CONCAT44(3,uVar63);
        }
      }
      else {
        if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
          fVar50 = 0.0;
          if ((0.0 < (float)uVar22) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          uVar21 = (ulong)(uint)fStack00000000000000a4;
          if (fStack00000000000000a4 <
              (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar22))
              + fVar50) {
            if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
              *(uint *)((long)unaff_x19 + 0x2dc) = uVar63;
            }
            plVar47 = (long *)StringLiteral_302;
            plVar42 = (long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            lVar44 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar22 = FUN_02681b9c(lVar44,0,0);
            if ((uVar22 & 1) != 0) {
              plVar45 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x558))(plVar45,uVar23,*(undefined8 *)(*plVar45 + 0x560));
              lVar44 = unaff_x19[0x5c];
              if (lVar44 == 0) goto LAB_0249920c;
              *(int *)(lVar44 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar44,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar45 = (long *)unaff_x19[0x5c];
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
            in_stack_000017a8 = CONCAT44(3,uVar63);
            goto LAB_02492630;
          }
        }
        if ((((in_stack_000017bc - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
          if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
             (in_stack_000017bc != 0x2060)) {
            lVar44 = *in_stack_00000150;
            if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x50), lVar41 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
            *(int *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + 1;
          }
        }
        else {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(in_stack_000017bc,0);
          if ((uVar21 & 1) != 0) goto LAB_024944e4;
        }
        if (in_stack_000017bc == 0xa0) {
          if ((*in_stack_00000150 == 0) ||
             (lVar44 = *(long *)(*in_stack_00000150 + 0x50), lVar44 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
          *(int *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + 1;
        }
LAB_02494abc:
        if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
          if (unaff_x19[0xca] == 0) goto LAB_0249920c;
          fVar50 = *(float *)(unaff_x19 + 0x3c);
          iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_0249920c;
          fVar60 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar44 = unaff_x19[0xc9];
          fVar51 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar51 = 1.0;
          }
          if ((lVar44 == 0) || (*(long *)(lVar44 + 0x20) == 0)) goto LAB_0249920c;
          fVar64 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar53 = *(float *)(lVar44 + 0x2c);
          fVar69 = (float)FUN_026fd668(*(long *)(lVar44 + 0x20),0);
          fVar52 = *_fStack0000000000000098;
          fVar69 = fVar64 * (fVar50 / (float)iVar13) * fVar60 * fVar51 * fVar53 * fVar69;
          fVar50 = *_fStack0000000000000088;
          if ((in_stack_000017bc == 10) &&
             (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
            if ((*in_stack_00000150 == 0) ||
               (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
            uVar63 = *(int *)((long)unaff_x19 + 0x48c) - 1;
            if (*(uint *)(lVar44 + 0x18) <= uVar63)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
            fVar51 = *(float *)(lVar44 + (long)(int)uVar63 * (long)iVar17 + 0x60);
            iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
            fVar64 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
            lVar44 = unaff_x19[0xc9];
            fVar60 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar60 = 1.0;
            }
            if ((lVar44 == 0) || (*(long *)(lVar44 + 0x20) == 0)) goto LAB_0249920c;
            fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
            fVar62 = *(float *)(lVar44 + 0x2c);
            fVar69 = (float)FUN_026fd668(*(long *)(lVar44 + 0x20),0);
            if ((*in_stack_00000150 == 0) ||
               (lVar44 = *(long *)(*in_stack_00000150 + 0x50), lVar44 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            fVar52 = *(float *)(lVar44 + 0x60);
            fVar50 = *(float *)(lVar44 + 100);
            fVar69 = fVar53 * (fVar51 / (float)iVar13) * fVar64 * fVar60 * fVar62 * fVar69;
          }
          fVar53 = *(float *)(unaff_x19 + 0x9a);
          fVar60 = *(float *)(unaff_x19 + 0x96);
          fVar62 = *(float *)((long)unaff_x19 + 0x4c4);
          fVar51 = 0.0;
          fVar64 = 0.0;
          if ((0.0 < fVar53) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar54 = *(float *)(unaff_x19 + 199);
          if ((char)unaff_x19[0x1d] == '\0') {
            if ((unaff_x19[0xc9] == 0) || (lVar44 = *(long *)(unaff_x19[0xc9] + 0x20), lVar44 == 0))
            goto LAB_0249920c;
            FUN_026fd62c(&stack0x00000880,lVar44,0);
            unaff_x28 = &stack0x00000880;
            fVar51 = (float)FUN_026fd474(&stack0x000016e0,0);
          }
          puVar9 = System_Threading_Mutex_TypeInfo;
          fVar61 = *(float *)(unaff_x19 + 0x6b);
          fVar50 = (in_stack_00000090 - fVar52) - fVar50;
          bVar11 = true;
          if ((fVar61 <= fVar50) && (bVar11 = false, !NAN(fVar61))) {
            bVar11 = fVar61 == -1.0;
          }
          if (!bVar11) {
            fVar50 = fVar61;
          }
          fVar52 = _DAT_0294c6e8;
          if ((uVar65 & 0x18) == 0) {
            fVar52 = 1.0;
          }
          if (((fVar60 - (fVar62 - fVar53)) + fVar64 < fStack00000000000000a4) &&
             (ABS(fVar54) + fVar69 * fVar51 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
              fVar52 * fVar50)) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            lVar44 = *(long *)(*(long *)puVar9 + 0xb8);
            memcpy(&stack0x00000508,(void *)(lVar44 + 0x788),0x378);
            FUN_013b86dc(lVar44 + 0x11f0,&stack0x00000508,
                         *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__
                        );
          }
        }
        fVar50 = 1.0;
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar41 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar63 = *(uint *)(unaff_x19 + 0x94);
        lVar41 = lVar41 + (int)*in_stack_00000148 * unaff_x27;
        *(uint *)(lVar41 + 100) = uVar63;
        *(int *)(lVar41 + 0x68) = (int)unaff_x19[0x95];
        if (((unaff_w20 & 1) == 0) &&
           ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0))))
        {
          lVar44 = *(long *)(lVar44 + 0x50);
          if (lVar44 == 0) goto LAB_0249920c;
LAB_02494e68:
          if (*(uint *)(lVar44 + 0x18) <= uVar63)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(int *)(lVar44 + (long)(int)uVar63 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        else {
          lVar44 = *(long *)(lVar44 + 0x50);
          if (lVar44 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= uVar63)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (*(int *)(lVar44 + (long)(int)uVar63 * 0x5c + 0x24) == 1) goto LAB_02494e68;
        }
        if (in_stack_000017bc == 9) {
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar56 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar51 = *(float *)(unaff_x19 + 199);
          fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
          fVar50 = fVar49 * fVar56 * fVar50;
          fVar56 = fVar50 * (float)(int)(fVar51 / fVar50);
          uVar21 = (ulong)(uint)fVar56;
          if (fVar56 <= fVar51) {
            fVar56 = fVar51 + fVar50;
          }
LAB_02495058:
          *(float *)(unaff_x19 + 199) = fVar56;
        }
        else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
          if ((char)unaff_x19[0x1d] == '\0') {
            if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
              fVar50 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
            }
            fVar56 = *(float *)(unaff_x19 + 199);
            fVar60 = (float)FUN_026fd474(&stack0x00001770,0);
            if (unaff_x19[0x1f] != 0) {
              fVar51 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
              fVar56 = fVar56 + fVar51 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                         fVar49 * ((float)unaff_d11 + fVar50 * fVar60) +
                                         fStack00000000000000c8 *
                                         (fVar57 + fStack00000000000000cc +
                                                   *(float *)(unaff_x19[0x1f] + 0x1ac)));
              *(float *)(unaff_x19 + 199) = fVar56;
              goto joined_r0x02494fac;
            }
            goto LAB_0249920c;
          }
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar56 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (*(float *)((long)unaff_x19 + 0x2a4) +
                   fVar49 * (float)unaff_d11 +
                   fStack00000000000000c8 *
                   (fVar57 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
          uVar21 = (ulong)(uint)fVar56;
          fVar56 = *(float *)(unaff_x19 + 199) - fVar56;
          *(float *)(unaff_x19 + 199) = fVar56;
          if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
            fVar50 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar21 = (ulong)(uint)fVar50;
            fVar56 = fVar56 - fVar50;
            goto LAB_02495058;
          }
        }
        else {
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar51 = *(float *)(unaff_x19 + 199);
          fVar56 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                            (*(float *)((long)unaff_x19 + 0x2a4) +
                            (*(float *)(unaff_x19 + 0x55) - fVar56) +
                            fStack00000000000000c8 *
                            (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
          *(float *)(unaff_x19 + 199) = fVar56;
joined_r0x02494fac:
          if ((unaff_w29 != 0) || (uVar21 = (ulong)(uint)fVar51, in_stack_000017bc == 0x200b)) {
            fVar50 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar21 = (ulong)(uint)fVar50;
            fVar56 = fVar56 + fVar50;
            goto LAB_02495058;
          }
        }
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_0249920c;
        uVar63 = *in_stack_00000148;
        uVar65 = (uint)*(undefined8 *)(lVar41 + 0x18);
        if (uVar65 <= uVar63)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(float *)(lVar41 + (int)uVar63 * unaff_x27 + 0x144) = fVar56;
        uVar36 = in_stack_000017bc;
        if ((int)in_stack_000017bc < 0xd) {
          if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
          if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
             ((float)uVar63 == in_stack_00000078._4_4_)) goto LAB_024950bc;
        }
        else {
          if (1 < in_stack_000017bc - 0x2028) {
            if (in_stack_000017bc != 0xd) goto FUN_02495710;
            uVar21 = 0;
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            if ((float)uVar63 != in_stack_00000078._4_4_) goto LAB_0249572c;
          }
LAB_024950bc:
          if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
            fVar56 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (((fStack000000000000004c < ABS(fVar56)) &&
                (*(char *)((long)unaff_x19 + 700) == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
              FUN_024d6ca8(fVar56);
              *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar56;
              *(float *)(unaff_x19 + 0x9a) = fVar56 + *(float *)(unaff_x19 + 0x9a);
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *(long *)puVar9;
              }
              lVar41 = *(long *)(lVar44 + 0xb8);
              if (*(int *)(lVar41 + 0x7ac) == (int)unaff_x19[0x94]) {
                if (*(int *)(lVar44 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar41 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                }
                FUN_013b8de4(lVar41 + 0x11f0,&stack0x00000880,
                             *(undefined8 *)
                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                            );
                lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
                memcpy((void *)(*(long *)(lVar44 + 0xb8) + 0x788),&stack0x00000880,0x378);
                lVar44 = *(long *)(lVar44 + 0xb8);
                *(float *)(lVar44 + 0x7bc) = fVar56 + *(float *)(lVar44 + 0x7bc);
                *(float *)(lVar44 + 0x800) = fVar56 + *(float *)(lVar44 + 0x800);
                memcpy(&stack0x00000190,(void *)(lVar44 + 0x788),0x378);
                FUN_013b86dc(lVar44 + 0x11f0,&stack0x00000190,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<TextStyle>_get_Item__);
              }
            }
          }
          fVar51 = *(float *)(unaff_x19 + 0x9a);
          *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
          fVar50 = *(float *)((long)unaff_x19 + 0x4c4) - fVar51;
          fVar56 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar50 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar56 = fVar50;
          }
          *(float *)((long)unaff_x19 + 0x4bc) = fVar56;
          fVar60 = *(float *)(unaff_x19 + 0x98);
          if (unaff_x28[0xf34] == '\0') {
            in_stack_000017b8 = fVar56;
          }
          if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
             (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
              ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
            unaff_x28[0xf34] = 1;
          }
          lVar44 = *in_stack_00000150;
          if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x50), lVar41 == 0)) goto LAB_0249920c;
          uVar63 = *(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar41 + 0x18) <= uVar63)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar33 = lVar41 + (long)(int)uVar63 * 0x5c;
          *(int *)(lVar33 + 0x34) = (int)unaff_x19[0x92];
          iVar13 = (int)unaff_x19[0x92];
          if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
            iVar13 = *(int *)((long)unaff_x19 + 0x494);
          }
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          *(int *)(lVar33 + 0x38) = iVar13;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          *(undefined4 *)(lVar33 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          iVar13 = *(int *)((long)unaff_x19 + 0x494);
          if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
            iVar13 = *(int *)((long)unaff_x19 + 0x49c);
          }
          *(int *)((long)unaff_x19 + 0x49c) = iVar13;
          *(int *)(lVar33 + 0x40) = iVar13;
          *(int *)(lVar33 + 0x24) = (*(int *)(lVar33 + 0x3c) - *(int *)(lVar33 + 0x34)) + 1;
          *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
          lVar44 = *(long *)(lVar44 + 0x38);
          if (lVar44 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar68 = *(undefined4 *)
                    (lVar44 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
          lVar41 = lVar41 + (long)(int)uVar63 * 0x5c;
          *(float *)(lVar41 + 0x70) = fVar50;
          *(undefined4 *)(lVar41 + 0x6c) = uVar68;
          lVar44 = *in_stack_00000150;
          if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x50), lVar41 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = *(long *)(lVar44 + 0x38);
          if (lVar44 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar68 = *(undefined4 *)
                    (lVar44 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
          fVar60 = fVar60 - fVar51;
          lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(float *)(lVar41 + 0x78) = fVar60;
          *(undefined4 *)(lVar41 + 0x74) = uVar68;
          lVar44 = *in_stack_00000150;
          if ((lVar44 == 0) || (lVar33 = *(long *)(lVar44 + 0x50), lVar33 == 0)) goto LAB_0249920c;
          lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar41 = lVar33 + lVar20 * 0x5c;
          *(float *)(lVar41 + 0x44) = *(float *)(lVar41 + 0x74) - fVar49 * in_stack_00000128;
          *(float *)(lVar41 + 0x5c) = fStack00000000000000d4;
          if (*(int *)(lVar41 + 0x24) == 1) {
            *(int *)(lVar33 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
          }
          if ((*in_stack_00000138 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0))
          goto LAB_0249920c;
          lVar46 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
          uVar65 = (uint)*(undefined8 *)(lVar41 + 0x18);
          if (uVar65 <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if ((*(char *)(lVar41 + lVar46 * unaff_x27 + 0x194) == '\0') &&
             (lVar46 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar65 <= *(uint *)(unaff_x19 + 0x93)
             )) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (fStack00000000000000c8 *
                    (fVar57 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
                   *(float *)((long)unaff_x19 + 0x2a4));
          fVar56 = -fVar57;
          if ((char)unaff_x19[0x1d] != '\0') {
            fVar56 = fVar57;
          }
          lVar33 = lVar33 + lVar20 * 0x5c;
          *(float *)(lVar33 + 0x58) = *(float *)(lVar41 + lVar46 * unaff_x27 + 0x144) + fVar56;
          fVar56 = *(float *)(unaff_x19 + 0x9a);
          *(float *)(lVar33 + 0x48) = fStack0000000000000050 + (fVar60 - fVar50);
          *(float *)(lVar33 + 0x4c) = fVar60;
          uVar21 = (ulong)(uint)(0.0 - fVar56);
          *(float *)(lVar33 + 0x50) = 0.0 - fVar56;
          *(float *)(lVar33 + 0x54) = fVar50;
          plVar42 = (long *)System_Threading_Mutex_TypeInfo;
          if ((int)in_stack_000017bc < 0x2d) {
            if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar47 = (long *)StringLiteral_302;
              FUN_024d69d4();
              lVar44 = unaff_x19[0x6c];
              *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
              iVar13 = (int)unaff_x19[0x94] + 1;
              *(int *)(unaff_x19 + 0x94) = iVar13;
              *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
              if ((lVar44 != 0) && (*(long *)(lVar44 + 0x50) != 0)) {
                if (*(int *)(*(long *)(lVar44 + 0x50) + 0x18) <= iVar13) {
                  FUN_024d6e60();
                  lVar44 = unaff_x19[0x6c];
                  if (lVar44 == 0) goto LAB_0249920c;
                }
                lVar44 = *(long *)(lVar44 + 0x38);
                if (lVar44 != 0) {
                  if (*in_stack_00000148 < *(uint *)(lVar44 + 0x18)) {
                    fVar56 = *(float *)(lVar44 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
                    if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                      fVar57 = 0.0;
                      if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                        fVar57 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar27 = 0;
                      fVar57 = *(float *)(unaff_x19 + 0x9a) +
                               fVar56 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                               fStack0000000000000054 *
                               (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                               fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar57);
                    }
                    else {
                      if ((in_stack_000017bc == 0x2029) || (fVar57 = 0.0, in_stack_000017bc == 10))
                      {
                        fVar57 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar27 = 1;
                      fVar57 = *(float *)(unaff_x19 + 0x9a) +
                               *(float *)(unaff_x19 + 0x57) +
                               fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar57);
                    }
                    *(float *)(unaff_x19 + 0x9a) = fVar57;
                    *(undefined1 *)((long)unaff_x19 + 700) = uVar27;
                    lVar44 = *plVar42;
                    if (*(int *)(lVar44 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar44 = *plVar42;
                    }
                    uVar23 = *(undefined8 *)(*(long *)(lVar44 + 0xb8) + 0x15a8);
                    *(float *)(unaff_x19 + 0x99) = fVar56;
                    uVar21 = NEON_rev64(uVar23,4);
                    unaff_x19[0x98] = uVar21;
                    *(float *)(unaff_x19 + 199) =
                         *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
                    FUN_024d69d4();
                    FUN_024d69d4();
                    *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                    fStack0000000000000058 = 1.4013e-45;
                    bStack000000000000005c = 1;
                    goto LAB_02492630;
                  }
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
              }
              goto LAB_0249920c;
            }
            if (in_stack_000017bc == 3) {
              if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
              in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
              uVar36 = 3;
            }
          }
          else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
        }
LAB_0249572c:
        uVar63 = *in_stack_00000148;
        if (uVar65 <= uVar63)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(char *)(lVar41 + (int)uVar63 * unaff_x27 + 0x194) != '\0') {
          lVar41 = lVar41 + (int)uVar63 * unaff_x27;
          uVar22 = *(ulong *)(lVar41 + 0x11c);
          uVar21 = *(ulong *)(in_stack_00000070 + 0x230);
          *(ulong *)(in_stack_00000070 + 0x230) =
               uVar22 ^ (uVar22 ^ uVar21) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar22 >> 0x20)),
                                 -(uint)((float)uVar21 < (float)uVar22));
          uVar22 = *(ulong *)(in_stack_00000070 + 0x238);
          uVar21 = *(ulong *)(lVar41 + 0x128);
          *(ulong *)(in_stack_00000070 + 0x238) =
               uVar21 ^ (uVar21 ^ uVar22) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar22 >> 0x20)),
                                 -(uint)((float)uVar21 < (float)uVar22));
        }
        if (((int)unaff_x19[0x5b] == 5) &&
           ((0xd < uVar36 || ((1 << (ulong)(uVar36 & 0x1f) & 0x2c00U) == 0)))) {
          lVar41 = *(long *)(lVar44 + 0x58);
          if (lVar41 == 0) goto LAB_0249920c;
          iVar13 = (int)unaff_x19[0x95] + 1;
          if (*(int *)(lVar41 + 0x18) < iVar13) {
            if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01147c08((long *)(lVar44 + 0x58),iVar13,1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
            lVar44 = *in_stack_00000150;
            if (lVar44 == 0) goto LAB_0249920c;
          }
          lVar41 = *(long *)(lVar44 + 0x58);
          if (lVar41 == 0) goto LAB_0249920c;
          uVar65 = *(uint *)(unaff_x19 + 0x95);
          lVar33 = (long)(int)uVar65;
          uVar63 = *(uint *)(lVar41 + 0x18);
          if (uVar63 <= uVar65)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar20 = lVar41 + lVar33 * 0x14;
          fVar57 = *(float *)(lVar20 + 0x30);
          uVar21 = (ulong)(uint)fVar57;
          *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          fVar56 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar57 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar56 = fVar57;
          }
          *(float *)(lVar20 + 0x30) = fVar56;
          uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
          if (uVar36 == 0 && uVar65 == 0) {
            *(uint *)(lVar41 + lVar33 * 0x14 + 0x20) = uVar36;
          }
          else {
            uVar43 = uVar36 - 1;
            if (0 < (int)uVar36) {
              lVar44 = *(long *)(lVar44 + 0x38);
              if (lVar44 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar44 + 0x18) <= uVar43)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              if (uVar65 != *(uint *)(lVar44 + (long)(int)uVar43 * (long)iVar17 + 0x68)) {
                if (uVar65 - 1 < uVar63) {
                  *(uint *)(lVar41 + 0x20 + (long)(int)(uVar65 - 1) * 0x14 + 4) = uVar43;
                  *(uint *)(lVar41 + 0x20 + lVar33 * 0x14) = uVar36;
                  goto LAB_024957b0;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
            }
            if ((float)uVar36 == in_stack_00000078._4_4_) {
              *(float *)(lVar41 + lVar33 * 0x14 + 0x24) = in_stack_00000078._4_4_;
            }
          }
        }
LAB_024957b0:
        puVar9 = System_Threading_Mutex_TypeInfo;
        if (((char)unaff_x19[0x5a] != '\0') ||
           ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
            ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
          if ((unaff_w29 == 0) &&
             (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
              (in_stack_000017bc != 0xad)))) {
            if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
              if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961))
                   && (0xfd < in_stack_000017bc - 0x1101)) ||
                  (uVar22 = FUN_024e95f0(0), (uVar22 & 1) != 0)) &&
                 ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                   (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
              goto LAB_024958f0;
              lVar44 = FUN_024e94b0(0);
              if ((lVar44 == 0) || (*(long *)(lVar44 + 0x10) == 0)) goto LAB_0249920c;
              uVar22 = FUN_0129aa60(*(long *)(lVar44 + 0x10),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
                lVar44 = FUN_024e94b0(0);
                if (((lVar44 != 0) && (*in_stack_00000150 != 0)) &&
                   (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 != 0)) {
                  if (*in_stack_00000148 + 1 < *(uint *)(lVar41 + 0x18)) {
                    if (*(long *)(lVar44 + 0x18) != 0) {
                      in_stack_00000880 =
                           (uint)*(ushort *)
                                  (lVar41 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar17 +
                                  0x20);
                      uVar25 = FUN_0129aa60(*(long *)(lVar44 + 0x18),&stack0x00000880,
                                            *(undefined8 *)
                                             System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                           );
                      if ((uVar22 & 1) != 0) goto LAB_02495adc;
                      if ((uVar25 & 1) == 0) goto LAB_02495bc4;
                      if ((bStack000000000000005c & 1) != 0) goto joined_r0x02495af4;
                      goto LAB_024959d4;
                    }
                    goto LAB_0249920c;
                  }
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
                goto LAB_0249920c;
              }
              in_stack_00000880 = in_stack_000017bc;
              if ((uVar22 & 1) == 0) {
LAB_02495bc4:
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                bStack000000000000005c = 0;
                goto LAB_02495b70;
              }
LAB_02495adc:
              if (uVar14 != uVar18 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
joined_r0x02495af4:
              if (unaff_w29 != 0) goto LAB_02495af8;
            }
            else {
LAB_024958f0:
              if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
                bStack000000000000005c = 0;
                goto LAB_02495b70;
              }
              if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
              goto joined_r0x02495af4;
LAB_02495af8:
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
            }
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 1;
          }
          else {
            if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_024958f0;
            if (((in_stack_000017bc - 0x2007 < 0x29) &&
                ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
               ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_02495868;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 0;
            *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
          }
        }
LAB_02495b70:
        plVar42 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar47 = (long *)StringLiteral_302;
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
      }
LAB_02492630:
      do {
        fVar56 = 1.0;
        in_stack_00001788 = in_stack_00001788 + 1;
        lVar44 = unaff_x19[0x8e];
        if (lVar44 == 0) goto LAB_0249920c;
        if ((int)*(uint *)(lVar44 + 0x18) <= (int)in_stack_00001788) {
LAB_02495f1c:
          fVar49 = (float)uVar21;
          if (((char)unaff_x19[0x46] != '\0') &&
             (fVar49 = DAT_02956ccc,
             DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
            fVar49 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar56 = *(float *)((long)unaff_x19 + 0x24c);
            if ((fVar49 < fVar56) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
              }
              fVar57 = (*(float *)((long)unaff_x19 + 0x234) - fVar49) * 0.5;
              if (fVar57 <= DAT_028aa298) {
                fVar57 = DAT_028aa298;
              }
              *(float *)(unaff_x19 + 0x47) = fVar49;
              fVar57 = (fVar49 + fVar57) * 20.0 + 0.5;
              fVar49 = DAT_02958220;
              if (fVar57 != INFINITY) {
                fVar49 = (float)(int)fVar57 / 20.0;
              }
              if (fVar56 <= fVar49) {
                fVar49 = fVar56;
              }
              goto LAB_02495fd8;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
          if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
            uVar23 = FUN_0176eb1c(in_stack_00000038,0);
            uVar19 = FUN_017840ac(in_stack_00000040,0);
            uVar23 = FUN_0160073c(*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,uVar23,
                                  *(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponents<Component>__,uVar19,0
                                 );
            if (*(int *)(*plVar47 + 0xe0) == 0) {
              thunk_FUN_00d32864(*plVar47);
            }
            FUN_02660dac(uVar23,0);
          }
          if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3))))
          {
            (**(code **)(*unaff_x19 + 0x948))();
            goto LAB_02496098;
          }
          lVar44 = *plVar42;
          if (*(int *)(lVar44 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar44 = *plVar42;
          }
          puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          lVar44 = **(long **)(lVar44 + 0xb8);
          if (lVar44 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          iVar17 = *(int *)(lVar44 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
          if ((*in_stack_00000150 == 0) ||
             (lVar44 = *(long *)(*in_stack_00000150 + 0x60), lVar44 == 0)) goto LAB_0249920c;
          if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(int *)(lVar44 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          FUN_024e7d94(lVar44 + 0x20,0,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          puVar10 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
          iVar13 = (int)unaff_x19[0x4d];
          fStack00000000000000c8 =
               **(float **)
                 (*(long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8);
          uStack00000000000000c0 =
               *(undefined8 *)
                (*(float **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8) + 1);
          lVar44 = unaff_x19[0xe2];
          _in_stack_00000090 = uStack00000000000000c0;
          fStack0000000000000098 = fStack00000000000000c8;
          if (iVar13 < 0x401) {
            if (iVar13 == 0x100) {
              if (lVar44 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar44 + 0x18) < 2)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar23 = *(undefined8 *)(lVar44 + 0x30);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar41 = *(long *)(*in_stack_00000150 + 0x58), lVar41 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar41 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fVar49 = *(float *)(lVar41 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
              }
              else {
                fVar49 = *(float *)(unaff_x19 + 0x96);
              }
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar44 + 0x2c);
              fVar49 = (0.0 - fVar49) - fStack0000000000000020;
            }
            else if (iVar13 == 0x200) {
              if (lVar44 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar44 + 0x18) == 1) || (*(int *)(lVar44 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fStack0000000000000098 = (*(float *)(lVar44 + 0x20) + *(float *)(lVar44 + 0x2c)) * 0.5
              ;
              uVar23 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar44 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar44 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar44 + 0x24) +
                                (float)*(undefined8 *)(lVar44 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar44 = *(long *)(*in_stack_00000150 + 0x58), lVar44 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar44 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar44 = lVar44 + (long)(int)uStack000000000000002c * 0x14;
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                fVar49 = ((fStack0000000000000020 + *(float *)(lVar44 + 0x28) +
                          *(float *)(lVar44 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
              }
              else {
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                fVar49 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8
                          ) - fStack0000000000000024) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar13 != 0x400) goto LAB_024965d0;
              if (lVar44 == 0) goto LAB_0249920c;
              if (*(int *)(lVar44 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar23 = *(undefined8 *)(lVar44 + 0x24);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar41 = *(long *)(*in_stack_00000150 + 0x58), lVar41 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar41 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                in_stack_000017b8 =
                     *(float *)(lVar41 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
              }
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar44 + 0x20);
              fVar49 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
            }
            _in_stack_00000090 =
                 CONCAT44((float)((ulong)uVar23 >> 0x20) + 0.0,(float)uVar23 + fVar49);
          }
          else if (iVar13 == 0x800) {
            if (lVar44 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar44 + 0x18) == 1) || (*(int *)(lVar44 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar49 = ((float)*(undefined8 *)(lVar44 + 0x24) + (float)*(undefined8 *)(lVar44 + 0x30))
                     * 0.5;
            fStack0000000000000098 =
                 fStack0000000000000030 + 0.0 +
                 (*(float *)(lVar44 + 0x20) + *(float *)(lVar44 + 0x2c)) * 0.5;
            _in_stack_00000090 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar44 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar44 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          fVar49 + 0.0);
          }
          else {
            if (iVar13 == 0x1000) {
              if (lVar44 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar44 + 0x18) == 1) || (*(int *)(lVar44 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar49 = (float)*(undefined8 *)(lVar44 + 0x24) + (float)*(undefined8 *)(lVar44 + 0x30)
              ;
              fVar56 = (float)((ulong)*(undefined8 *)(lVar44 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar44 + 0x30) >> 0x20);
              fStack0000000000000020 =
                   fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                   *(float *)(unaff_x19 + 0x9b);
              fStack0000000000000098 =
                   fStack0000000000000030 + 0.0 +
                   (*(float *)(lVar44 + 0x20) + *(float *)(lVar44 + 0x2c)) * 0.5;
            }
            else {
              if (iVar13 != 0x2000) goto LAB_024965d0;
              if (lVar44 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar44 + 0x18) == 1) || (*(int *)(lVar44 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar49 = (float)*(undefined8 *)(lVar44 + 0x24) + (float)*(undefined8 *)(lVar44 + 0x30)
              ;
              fVar56 = (float)((ulong)*(undefined8 *)(lVar44 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar44 + 0x30) >> 0x20);
              fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
              fStack0000000000000098 =
                   fStack0000000000000030 + 0.0 +
                   (*(float *)(lVar44 + 0x20) + *(float *)(lVar44 + 0x2c)) * 0.5;
            }
            fVar49 = fVar49 * 0.5;
            _in_stack_00000090 =
                 CONCAT44(fVar56 * 0.5 + 0.0,
                          fVar49 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
          }
LAB_024965d0:
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          uVar23 = FUN_0285a188(unaff_x19[0xe4],0);
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar9);
          }
          uVar21 = FUN_0268b4e0(uVar23,0,0);
          lVar44 = FUN_024c933c();
          if (lVar44 == 0) goto LAB_0249920c;
          FUN_026a125c(lVar44,0);
          *(float *)(unaff_x19 + 0xe1) = fVar49;
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          iVar13 = FUN_02859798(unaff_x19[0xe4],0);
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          fVar56 = (float)FUN_028598f0(unaff_x19[0xe4],0);
          __x = DAT_028aa048;
          dVar55 = modf(DAT_028aa048,(double *)&stack0x00000880);
          if (dVar55 == 0.5) {
            fVar57 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar57 = fVar57 + 1.0;
            }
          }
          else {
            fVar57 = 255.0;
          }
          dVar55 = modf(__x,(double *)&stack0x00000880);
          if (dVar55 == 0.5) {
            fVar50 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar50 = fVar50 + 1.0;
            }
          }
          else {
            fVar50 = 255.0;
          }
          dVar55 = modf(__x,(double *)&stack0x00000880);
          if (dVar55 == 0.5) {
            fVar51 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar51 = fVar51 + 1.0;
            }
          }
          else {
            fVar51 = 255.0;
          }
          dVar55 = modf(__x,(double *)&stack0x00000880);
          if (dVar55 == 0.5) {
            fVar60 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar60 = fVar60 + 1.0;
            }
          }
          else {
            fVar60 = 255.0;
          }
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_037825d3 == '\0') {
            thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
            DAT_037825d3 = '\x01';
          }
          lVar44 = *(long *)puVar10;
          if (*(int *)(lVar44 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar44 = *(long *)puVar10;
          }
          puVar29 = *(undefined4 **)(lVar44 + 0xb8);
          uVar22 = (ulong)(uint)puVar29[1];
          uVar25 = (ulong)(uint)puVar29[2];
          uVar58 = (ulong)(uint)puVar29[3];
          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                    (*puVar29,uVar22,uVar25,uVar58,&stack0x00001790,0x4000ffff,0);
          if (*(int *)(*plVar42 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar44 = *in_stack_00000150;
          if (lVar44 == 0) goto LAB_0249920c;
          uVar14 = *in_stack_00000148;
          if ((int)uVar14 < 1) {
            iStack00000000000000ac = 0;
            iVar17 = 0;
            goto LAB_02498c58;
          }
          lVar44 = *(long *)(lVar44 + 0x38);
          fVar49 = ABS(fVar49);
          fVar69 = 1.0;
          if ((uVar21 & 1) == 0) {
            fVar69 = fVar49;
          }
          if (lVar44 == 0) goto LAB_0249920c;
          bVar8 = false;
          bVar11 = false;
          bVar7 = false;
          bVar12 = false;
          uStack0000000000000060 =
               (int)fVar57 & 0xffU | ((int)fVar50 & 0xffU) << 8 | ((int)fVar51 & 0xffU) << 0x10 |
               (int)fVar60 << 0x18;
          fStack00000000000000d0 = *(float *)(*(long *)(*plVar42 + 0xb8) + 0x15a8);
          fStack00000000000000cc = 0.0;
          fStack0000000000000058 = fStack00000000000000b0;
          _bStack000000000000005c = 0.0;
          fStack0000000000000034 = 0.0;
          fStack0000000000000088 = 0.0;
          fStack0000000000000030 = 0.0;
          uVar18 = 0;
          iVar48 = 0;
          lVar41 = 0x2e0;
          fVar50 = 0.0;
          fVar57 = 0.0;
          iStack00000000000000ac = 0;
          fStack0000000000000020 = 0.0;
          fStack000000000000004c = 0.0;
          fStack00000000000000a4 = fStack00000000000000b0;
          fStack00000000000000a8 = fStack00000000000000b4;
          fStack0000000000000050 = fStack00000000000000b4;
          fStack0000000000000054 = (float)uStack00000000000000a0;
          in_stack_00000078._4_4_ = fStack00000000000000b4;
          fStack0000000000000080 = fStack00000000000000b0;
          in_stack_00000068._4_4_ = uStack00000000000000a0;
          uVar63 = 0;
          uVar65 = 1;
          goto LAB_02496a50;
        }
        if (*(uint *)(lVar44 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar14 = *(uint *)(lVar44 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (uVar14 == 0) goto LAB_02495f1c;
        if (5 < in_stack_00000140) {
          uVar23 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar19 = FUN_0176eb1c(&stack0x00001788,0);
          uVar23 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar23,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar19,0);
          if (*(int *)(*plVar47 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar47);
          }
          FUN_026610e4(uVar23,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (uVar14 != 0x3c)) {
          if ((*in_stack_00000150 == 0) ||
             (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = lVar44 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar44 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar44 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar44 + 0x38);
        }
        else {
          *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          uVar22 = FUN_024d0688();
          if (((uVar22 & 1) != 0) &&
             (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar14,
             *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
        }
        if ((unaff_x19[0x6c] == 0) || (lVar44 = *(long *)(unaff_x19[0x6c] + 0x38), lVar44 == 0))
        goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        if (*(uint *)(lVar44 + 0x18) <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = (long)(int)uVar18;
        unaff_w21 = (uint)*(byte *)(lVar44 + lVar33 * unaff_x27 + 0x5c);
        *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
        lVar41 = unaff_x19[0x23];
        if ((uint)in_stack_000017a8 == uVar18) {
          uVar14 = (uint)((ulong)in_stack_000017a8 >> 0x20);
          unaff_w20 = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          if (uVar14 == 0x2026) {
            lVar20 = unaff_x19[0xc9];
            lVar44 = lVar44 + lVar33 * unaff_x27;
            *(undefined4 *)(lVar44 + 0x2c) = 0;
            *(long *)(lVar44 + 0x30) = lVar20;
            *(long *)(lVar44 + 0x38) = unaff_x19[0xca];
            *(long *)(lVar44 + 0x50) = unaff_x19[0xcb];
            *(int *)(lVar44 + 0x58) = (int)unaff_x19[0xcc];
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            in_stack_000017a8 = CONCAT44(3,uVar18 + 1);
          }
          else if (uVar14 == 3) {
            if ((*in_stack_00000138 == 0) ||
               (lVar20 = FUN_024b11ac(*in_stack_00000138,0), lVar20 == 0)) goto LAB_0249920c;
            FUN_01299bc0(lVar20,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
            if (*(uint *)(lVar44 + 0x18) <= uVar18)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            unaff_w20 = 1;
            *(ulong *)(lVar44 + lVar33 * unaff_x27 + 0x30) =
                 CONCAT44(in_stack_00000884,in_stack_00000880);
            uVar18 = *(uint *)((long)unaff_x19 + 0x48c);
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
        else {
          unaff_w20 = 0;
        }
        in_stack_000017bc = uVar14;
        if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar14 != 3)) {
          if ((*in_stack_00000150 == 0) ||
             (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= uVar18)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = lVar44 + (long)(int)uVar18 * (long)iVar17;
          *(undefined1 *)(lVar44 + 0x194) = 0;
          *(undefined2 *)(lVar44 + 0x20) = 0x200b;
          *(undefined4 *)(lVar44 + 100) = 0;
          *in_stack_00000148 = uVar18 + 1;
          goto LAB_02492630;
        }
        iVar13 = *(int *)((long)unaff_x19 + 0x63c);
        fVar57 = fVar56;
        if (iVar13 == 0) {
          uVar18 = *(uint *)((long)unaff_x19 + 0x254);
          if ((uVar18 >> 4 & 1) == 0) {
            if ((uVar18 >> 3 & 1) == 0) {
              if ((uVar18 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar22 = FUN_016f92d4(uVar14,0);
                if ((uVar22 & 1) != 0) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar14 = FUN_016f95a8(uVar14,0);
                  uVar14 = uVar14 & 0xffff;
                  fVar57 = fStack0000000000000028;
                }
              }
            }
            else {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_016f9218(uVar14,0);
              if ((uVar22 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar14 = FUN_016f9724(uVar14,0);
                goto LAB_02492a0c;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = FUN_016f92d4(uVar14,0);
            fVar57 = 1.0;
            if ((uVar22 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_016f95a8(uVar14,0);
LAB_02492a0c:
              uVar14 = uVar14 & 0xffff;
              fVar57 = 1.0;
            }
          }
          iVar13 = *(int *)((long)unaff_x19 + 0x63c);
          in_stack_000017bc = uVar14;
          if (iVar13 == 0) goto LAB_02492a20;
LAB_0249265c:
          if (iVar13 != 1) {
            lVar44 = *in_stack_00000150;
            in_stack_000000f0 = CONCAT44(fVar57,fVar59);
            unaff_s13 = 0.0;
            if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
              unaff_s13 = fVar49;
            }
            in_stack_00000130._4_4_ = 0.0;
            if (lVar44 == 0) goto LAB_0249920c;
            in_stack_00000120 = 0.0;
            in_stack_00000110 = 0.0;
            fStack00000000000000d0 = fVar49;
            goto LAB_02492e2c;
          }
          if ((*in_stack_00000150 == 0) ||
             (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = lVar44 + (int)*in_stack_00000148 * unaff_x27;
          lVar33 = *(long *)(lVar44 + 0x40);
          unaff_x19[0xd2] = lVar33;
          *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar44 + 0x48);
          if ((lVar33 == 0) || (lVar44 = FUN_024ebfa0(lVar33,0), lVar44 == 0)) goto LAB_0249920c;
          FUN_0132138c(lVar44,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                       *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
          lVar33 = CONCAT44(in_stack_00000884,in_stack_00000880);
          if (lVar33 != 0) {
            if (in_stack_000017bc == 0x3c) {
              in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
            }
            else {
              lVar44 = *plVar42;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *plVar42;
              }
              *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                   *(undefined4 *)(*(long *)(lVar44 + 0xb8) + 0x68);
            }
            if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
            fVar49 = *(float *)(unaff_x19 + 0x3c);
            memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
            iVar13 = FUN_026fd110(&stack0x00001700,0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
            fVar51 = (float)FUN_026fd120(&stack0x00001700,0);
            fVar50 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar50 = 1.0;
            }
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            fVar50 = (fVar49 / (float)iVar13) * fVar51 * fVar50;
            iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            fVar49 = *(float *)(unaff_x19 + 0x3c);
            if (iVar13 < 1) {
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              iVar13 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar51 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
              in_stack_00000110 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                in_stack_00000110 = fVar56;
              }
              if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
              fVar56 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
              if (*(long *)(lVar33 + 0x20) == 0) goto LAB_0249920c;
              FUN_026fd62c(&stack0x00000880,*(long *)(lVar33 + 0x20),0);
              fVar60 = (float)FUN_026fd45c(&stack0x000016e0,0);
              if (*(long *)(lVar33 + 0x20) == 0) goto LAB_0249920c;
              fVar69 = *(float *)(lVar33 + 0x2c);
              fVar64 = (float)FUN_026fd668(*(long *)(lVar33 + 0x20),0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              in_stack_00000120 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar52 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
              if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
              in_stack_00000130._4_4_ = fVar50 * fVar52 * fVar53 * in_stack_00000130._4_4_;
              in_stack_00000110 = (fVar49 / (float)iVar13) * fVar51 * in_stack_00000110;
              fStack00000000000000d0 = in_stack_00000110 * (fVar56 / fVar60) * fVar69 * fVar64;
              in_stack_00000110 = in_stack_00000110 / fStack00000000000000d0;
              in_stack_00000120 = in_stack_00000110 * in_stack_00000120;
              fVar49 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
              in_stack_00000110 = in_stack_00000110 * fVar49;
            }
            else {
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar56 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (*(long *)(lVar33 + 0x20) == 0) goto LAB_0249920c;
              fVar60 = *(float *)(lVar33 + 0x2c);
              fVar51 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                fVar51 = 1.0;
              }
              fVar69 = (float)FUN_026fd668(*(long *)(lVar33 + 0x20),0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              in_stack_00000120 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar64 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000130._4_4_ = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              in_stack_00000130._4_4_ = fVar50 * fVar64 * fVar52 * in_stack_00000130._4_4_;
              fStack00000000000000d0 = (fVar49 / (float)iVar13) * fVar56 * fVar51 * fVar60 * fVar69;
              in_stack_00000110 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
            }
            lVar44 = unaff_x19[0x6c];
            unaff_x19[200] = lVar33;
            if ((lVar44 == 0) || (lVar33 = *(long *)(lVar44 + 0x38), lVar33 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar33 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar33 = lVar33 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)(lVar33 + 0x2c) = 1;
            *(float *)(lVar33 + 0x160) = fStack00000000000000d0;
            in_stack_00000128 = 0.0;
            *(long *)(lVar33 + 0x40) = unaff_x19[0xd2];
            *(long *)(lVar33 + 0x38) = unaff_x19[0x1f];
            *(int *)(lVar33 + 0x58) = (int)unaff_x19[0x23];
            *(int *)(unaff_x19 + 0x23) = (int)lVar41;
            goto LAB_02492e14;
          }
          goto LAB_02492630;
        }
        if (iVar13 != 0) goto LAB_0249265c;
LAB_02492a20:
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        uVar14 = *(uint *)(lVar44 + 0x18);
        if (uVar14 <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar41 = *(long *)(lVar44 + (int)uVar18 * unaff_x27 + 0x30);
        unaff_x19[200] = lVar41;
      } while (lVar41 == 0);
      lVar33 = lVar44 + (int)uVar18 * unaff_x27;
      lVar41 = *(long *)(lVar33 + 0x38);
      unaff_x19[0x1f] = lVar41;
      unaff_x19[0x22] = *(long *)(lVar33 + 0x50);
      *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar33 + 0x58);
      if (unaff_w20 == 0) {
LAB_02492ab4:
        if (lVar41 == 0) goto LAB_0249920c;
        fVar49 = *(float *)(unaff_x19 + 0x3c);
        iVar13 = FUN_026fd110(lVar41 + 0x50,0);
        lVar44 = unaff_x19[0x1f];
      }
      else {
        lVar33 = unaff_x19[0x8e];
        if (lVar33 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*(int *)(lVar33 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
           (uVar18 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
        if (uVar14 <= uVar18 - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (lVar41 == 0) goto LAB_0249920c;
        fVar49 = *(float *)(lVar44 + (long)(int)(uVar18 - 1) * (long)iVar17 + 0x60);
        iVar13 = FUN_026fd110(lVar41 + 0x50,0);
        lVar44 = *in_stack_00000138;
      }
      if (lVar44 == 0) goto LAB_0249920c;
      fVar51 = (float)FUN_026fd120(lVar44 + 0x50,0);
      fVar50 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar50 = fVar56;
      }
      in_stack_00000110 = 0.0;
      in_stack_00000120 = 0.0;
      if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        in_stack_00000120 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        in_stack_00000110 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
      }
      lVar44 = unaff_x19[200];
      if ((lVar44 == 0) || (*(long *)(lVar44 + 0x20) == 0)) goto LAB_0249920c;
      fVar56 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar60 = *(float *)(lVar44 + 0x2c);
      fStack00000000000000d0 = (float)FUN_026fd668(*(long *)(lVar44 + 0x20),0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar69 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar64 = *(float *)((long)unaff_x19 + 0x3fc);
      in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
      lVar44 = unaff_x19[0x6c];
      if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar41 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar41 = lVar41 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar41 + 0x2c) = 0;
      fVar50 = ((fVar57 * fVar49) / (float)iVar13) * fVar51 * fVar50;
      fStack00000000000000d0 = fVar50 * fVar56 * fVar60 * fStack00000000000000d0;
      *(float *)(lVar41 + 0x160) = fStack00000000000000d0;
      uVar14 = *(uint *)(unaff_x19 + 0x23);
      in_stack_00000130._4_4_ = fVar50 * fVar69 * fVar64 * in_stack_00000130._4_4_;
      if (uVar14 == 0) {
        in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
      }
      else {
        lVar41 = unaff_x19[0xe0];
        if (lVar41 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar41 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar41 = *(long *)(lVar41 + (long)(int)uVar14 * 8 + 0x20);
        if (lVar41 == 0) goto LAB_0249920c;
        in_stack_00000128 = *(float *)(lVar41 + 0x104);
      }
LAB_02492e14:
      in_stack_000000f0 = CONCAT44(fVar57,fVar59);
      unaff_s13 = 0.0;
      if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
        unaff_s13 = fStack00000000000000d0;
      }
LAB_02492e2c:
      unaff_s12 = 1.0;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)*in_stack_00000148 * unaff_x27;
      *(short *)(lVar44 + 0x20) = (short)in_stack_000017bc;
      *(int *)(lVar44 + 0x60) = (int)unaff_x19[0x3c];
      *(undefined4 *)(lVar44 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
      if ((unaff_x19[0x6c] == 0) || (lVar44 = *(long *)(unaff_x19[0x6c] + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar44 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
      if ((unaff_x19[0x6c] == 0) || (lVar44 = *(long *)(unaff_x19[0x6c] + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined4 *)(lVar44 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
           *(undefined4 *)((long)unaff_x19 + 0x154);
      if ((unaff_x19[0x6c] == 0) || (lVar44 = *(long *)(unaff_x19[0x6c] + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      uVar14 = *in_stack_00000148;
      FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                   *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
      if (*(uint *)(lVar44 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)uVar14 * unaff_x27;
      *(undefined4 *)(lVar44 + 0x18c) = in_stack_00000890;
      *(undefined8 *)(lVar44 + 0x184) = in_stack_00000888;
      *(ulong *)(lVar44 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
      if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined4 *)(lVar44 + (int)*in_stack_00000148 * unaff_x27 + 400) =
           *(undefined4 *)((long)unaff_x19 + 0x254);
      if ((unaff_x19[200] == 0) || (lVar44 = *(long *)(unaff_x19[200] + 0x20), lVar44 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000bf8,lVar44,0);
      unaff_x26 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      unaff_x28 = &stack0x00000880;
      if ((int)in_stack_000017bc < 0x10000) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016f68bc(in_stack_000017bc,0);
        unaff_w29 = uVar14 & 1;
      }
      else {
        unaff_w29 = 0;
      }
      fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
      *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
      if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
        unaff_d11 = 0;
        unaff_d10 = 0;
        unaff_s9 = 0.0;
      }
      else {
        if (unaff_x19[200] == 0) goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        uVar14 = *(uint *)(unaff_x19[200] + 0x28);
        if ((int)uVar18 < (int)in_stack_00000078._4_4_) {
          if ((*in_stack_00000150 == 0) ||
             (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= uVar18 + 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = *(long *)(lVar44 + (long)(int)(uVar18 + 1) * (long)iVar17 + 0x30);
          if ((((lVar44 == 0) || (*in_stack_00000138 == 0)) ||
              (lVar41 = *(long *)(*in_stack_00000138 + 0x128), lVar41 == 0)) ||
             (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)) goto LAB_0249920c;
          in_stack_00000880 = uVar14 | *(int *)(lVar44 + 0x28) << 0x10;
          uVar21 = FUN_0129eff4(lVar41,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          uVar68 = 0;
          if ((uVar21 & 1) == 0) {
            uVar65 = 0;
            uVar63 = 0;
            unaff_s9 = 0.0;
          }
          else {
            if (in_stack_000016d8 == 0) goto LAB_0249920c;
            unaff_s9 = *(float *)(in_stack_000016d8 + 0x14);
            uVar63 = *(uint *)(in_stack_000016d8 + 0x18);
            uVar65 = *(uint *)(in_stack_000016d8 + 0x1c);
            uVar68 = *(undefined4 *)(in_stack_000016d8 + 0x20);
            if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
              fStack00000000000000cc = 0.0;
            }
          }
          uVar18 = *in_stack_00000148;
        }
        else {
          uVar68 = 0;
          uVar65 = 0;
          uVar63 = 0;
          unaff_s9 = 0.0;
        }
        unaff_d11 = (ulong)uVar65;
        unaff_d10 = (ulong)uVar63;
        if (0 < (int)uVar18) {
          if ((*in_stack_00000150 == 0) ||
             (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= (uint)((long)(int)uVar18 + -1))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = *(long *)(lVar44 + ((long)(int)uVar18 + -1) * unaff_x27 + 0x30);
          if (((lVar44 == 0) || (*in_stack_00000138 == 0)) ||
             ((lVar41 = *(long *)(*in_stack_00000138 + 0x128), lVar41 == 0 ||
              (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)))) goto LAB_0249920c;
          in_stack_00000880 = *(uint *)(lVar44 + 0x28) | uVar14 << 0x10;
          uVar21 = FUN_0129eff4(lVar41,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          if ((uVar21 & 1) != 0) {
            if ((in_stack_000016d8 == 0) ||
               (unaff_s9 = (float)FUN_024bb1bc(unaff_s9,unaff_d10,unaff_d11,uVar68,
                                               *(undefined4 *)(in_stack_000016d8 + 0x28),
                                               *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                               *(undefined4 *)(in_stack_000016d8 + 0x30),
                                               *(undefined4 *)(in_stack_000016d8 + 0x34),0),
               in_stack_000016d8 == 0)) goto LAB_0249920c;
            if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
              fStack00000000000000cc = 0.0;
            }
          }
        }
        *(int *)((long)unaff_x19 + 0x2f4) = (int)unaff_d11;
      }
      if ((char)unaff_x19[0x1d] != '\0') {
        fVar56 = *(float *)(unaff_x19 + 199);
        fVar49 = (float)FUN_026fd474(&stack0x00001770,0);
        fVar56 = fVar56 - unaff_s13 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
        *(float *)(unaff_x19 + 199) = fVar56;
        if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
          *(float *)(unaff_x19 + 199) =
               fVar56 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        }
      }
      unaff_s8 = *(float *)(unaff_x19 + 0x55);
      fVar56 = 0.0;
      unaff_x23 = in_stack_00000150;
      unaff_x24 = in_stack_00000148;
      fVar49 = unaff_s13;
    } while (unaff_s8 == 0.0);
    param_1 = (float)FUN_026fd454(&stack0x00001770,0);
  } while( true );
LAB_02496a50:
  do {
    uVar14 = uVar65 - 1;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x50), lVar33 == 0))
    goto LAB_0249920c;
    lVar46 = (long)(int)uVar14;
    lVar20 = lVar44 + lVar46 * 0x178;
    uVar36 = *(uint *)(lVar20 + 100);
    if (*(uint *)(lVar33 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = *(long *)(lVar20 + 0x38);
    uVar3 = *(ushort *)(lVar20 + 0x20);
    lVar35 = (long)(int)uVar36;
    lVar33 = lVar33 + lVar35 * 0x5c;
    uVar5 = *(uint *)(lVar33 + 0x3c);
    iVar15 = *(int *)(lVar33 + 0x28);
    iVar16 = *(int *)(lVar33 + 0x2c);
    uVar6 = *(uint *)(lVar33 + 0x40);
    lVar20 = (long)(int)uVar6;
    uVar43 = *(uint *)(lVar33 + 0x68);
    fVar54 = *(float *)(lVar33 + 0x5c);
    fVar66 = *(float *)(lVar33 + 0x60);
    iVar2 = *(int *)(lVar33 + 0x20);
    fVar64 = *(float *)(lVar33 + 0x4c);
    fVar52 = *(float *)(lVar33 + 0x54);
    fVar51 = *(float *)(lVar33 + 0x58);
    fVar62 = *(float *)(lVar33 + 0x6c);
    fVar53 = *(float *)(lVar33 + 0x70);
    fVar60 = *(float *)(lVar33 + 0x74);
    fVar59 = *(float *)(lVar33 + 0x78);
    fVar61 = fVar54 + fVar66;
    uVar40 = (uint)uVar3;
    if ((int)uVar43 < 9) {
      switch(uVar43) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar66 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar51;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar66 + fVar54 * 0.5) - fVar51 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar61 - fVar51;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar61;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar43 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar40 != 3) && (uVar40 != 10)) goto LAB_02496bac;
      }
      else if ((uVar40 != 0xad) && ((uVar40 != 0x200b && (uVar40 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar44 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar44 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9f84(uVar4,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar36 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar51 <= fVar54) && (!bVar1 && (uVar43 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar66;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar61;
          }
          goto LAB_02496c90;
        }
        if (((uVar65 == 1) || (uVar36 != uVar63)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar66;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar61;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar3,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar28 = (char)unaff_x19[0x1d];
          fVar61 = -fVar51;
          if (cVar28 != '\0') {
            fVar61 = fVar51;
          }
          if (*(uint *)(lVar44 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar51 = 1.0;
          iVar16 = (int)*(char *)(lVar44 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar16 + -1;
          if (0 < iVar16) {
            fVar51 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar16 < 1) {
            iVar16 = 1;
          }
          if (uVar40 == 9) {
LAB_02498bb8:
            fVar51 = 1.0 - fVar51;
          }
          else {
            if (uVar40 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar21 = FUN_016fa418(uVar3,0);
              cVar28 = (char)unaff_x19[0x1d];
              if ((uVar21 & 1) != 0) goto LAB_02498bb8;
            }
            iVar16 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar15;
          }
          fVar51 = ((fVar54 + fVar61) * fVar51) / (float)iVar16;
          if (cVar28 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar51;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar51;
          }
        }
      }
    }
    else if (uVar43 == 0x20) {
      fVar51 = fVar62 + fVar60;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar43 = (uint)*(undefined8 *)(lVar44 + 0x18);
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar33 = lVar44 + lVar46 * 0x178;
    fVar61 = fStack0000000000000098 + fStack00000000000000c8;
    fVar51 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar54 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar33 + 0x194) == '\0') goto LAB_02497688;
    iVar15 = *(int *)(lVar44 + lVar46 * 0x178 + 0x2c);
    if (iVar15 != 0) goto LAB_02497374;
    fVar50 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar36,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar30 = lVar44 + lVar46 * 0x178;
      *(undefined4 *)(lVar30 + 0x84) = 0;
      *(undefined4 *)(lVar30 + 0xac) = 0;
      *(undefined4 *)(lVar30 + 0xd4) = 0x3f800000;
      fVar50 = 1.0;
      break;
    case 1:
      fVar59 = *(float *)(lVar44 + lVar46 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar30 = lVar44 + lVar46 * 0x178;
        fVar60 = (fStack00000000000000c8 + fVar59) - *(float *)(in_stack_00000070 + 0x230);
        fVar59 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar30 = lVar44 + lVar46 * 0x178;
      fVar60 = fVar60 - fVar62;
      *(float *)(lVar30 + 0x84) = fVar50 + (fVar59 - fVar62) / fVar60;
      *(float *)(lVar30 + 0xac) = fVar50 + (*(float *)(lVar30 + 0x98) - fVar62) / fVar60;
      *(float *)(lVar30 + 0xd4) = fVar50 + (*(float *)(lVar30 + 0xc0) - fVar62) / fVar60;
      fVar50 = fVar50 + (*(float *)(lVar30 + 0xe8) - fVar62) / fVar60;
      break;
    case 2:
      lVar30 = lVar44 + lVar46 * 0x178;
      fVar59 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar60 = (fStack00000000000000c8 + *(float *)(lVar30 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar30 + 0x84) = fVar50 + fVar60 / fVar59;
      *(float *)(lVar30 + 0xac) =
           fVar50 + ((fStack00000000000000c8 + *(float *)(lVar30 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar30 + 0xd4) =
           fVar50 + ((fStack00000000000000c8 + *(float *)(lVar30 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar50 = fVar50 + ((fStack00000000000000c8 + *(float *)(lVar30 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar30 = lVar44 + lVar46 * 0x178;
        *(undefined4 *)(lVar30 + 0x88) = 0;
        *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xd8) = 0;
        *(undefined4 *)(lVar30 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar30 = lVar44 + lVar46 * 0x178;
        fVar59 = fVar59 - fVar53;
        fVar60 = fVar50 + (*(float *)(lVar30 + 0x74) - fVar53) / fVar59;
        fVar59 = fVar50 + (*(float *)(lVar30 + 0x9c) - fVar53) / fVar59;
        *(float *)(lVar30 + 0x88) = fVar60;
        *(float *)(lVar30 + 0xb0) = fVar59;
        *(float *)(lVar30 + 0xd8) = fVar60;
        *(float *)(lVar30 + 0x100) = fVar59;
        break;
      case 2:
        lVar30 = lVar44 + lVar46 * 0x178;
        fVar60 = fVar50 + (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar30 + 0x88) = fVar60;
        fVar59 = *(float *)(unaff_x19 + 0x9b);
        fVar53 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar30 + 0xd8) = fVar60;
        fVar60 = fVar50 + (*(float *)(lVar30 + 0x9c) - fVar59) / (fVar53 - fVar59);
        *(float *)(lVar30 + 0xb0) = fVar60;
        *(float *)(lVar30 + 0x100) = fVar60;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar43 = (uint)*(undefined8 *)(lVar44 + 0x18);
      }
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar44 + lVar46 * 0x178;
      fVar60 = *(float *)(lVar30 + 0x15c);
      fVar59 = (1.0 - (*(float *)(lVar30 + 0x88) + *(float *)(lVar30 + 0xb0)) * fVar60) * 0.5;
      fVar53 = fVar50 + *(float *)(lVar30 + 0x88) * fVar60 + fVar59;
      fVar50 = fVar50 + fVar59 + *(float *)(lVar30 + 0xb0) * fVar60;
      *(float *)(lVar30 + 0x84) = fVar53;
      *(float *)(lVar30 + 0xac) = fVar53;
      *(float *)(lVar30 + 0xd4) = fVar50;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar44 + lVar46 * 0x178 + 0xfc) = fVar50;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar44 + lVar46 * 0x178;
      *(undefined4 *)(lVar30 + 0x88) = 0;
      *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0x100) = 0;
      break;
    case 1:
      if (uVar14 < uVar43) {
        lVar30 = lVar44 + lVar46 * 0x178;
        fVar64 = fVar64 - fVar52;
        fVar50 = (*(float *)(lVar30 + 0x74) - fVar52) / fVar64;
        fVar64 = (*(float *)(lVar30 + 0x9c) - fVar52) / fVar64;
        *(float *)(lVar30 + 0x88) = fVar50;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar44 + lVar46 * 0x178;
      fVar50 = (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar30 + 0x88) = fVar50;
      fVar64 = (*(float *)(lVar30 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar30 + 0xb0) = fVar64;
      *(float *)(lVar30 + 0xd8) = fVar64;
      *(float *)(lVar30 + 0x100) = fVar50;
      break;
    case 3:
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar44 + lVar46 * 0x178;
      fVar64 = *(float *)(lVar30 + 0x15c);
      fVar60 = (1.0 - (*(float *)(lVar30 + 0x84) + *(float *)(lVar30 + 0xd4)) / fVar64) * 0.5;
      fVar50 = *(float *)(lVar30 + 0x84) / fVar64 + fVar60;
      fVar60 = fVar60 + *(float *)(lVar30 + 0xd4) / fVar64;
      *(float *)(lVar30 + 0x88) = fVar50;
      *(float *)(lVar30 + 0xb0) = fVar60;
      *(float *)(lVar30 + 0x100) = fVar50;
      *(float *)(lVar30 + 0xd8) = fVar60;
    }
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar44 + lVar46 * 0x178;
    fVar50 = *(float *)(lVar30 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar30 + 0x5c) == '\0') && ((*(byte *)(lVar44 + lVar46 * 0x178 + 400) & 1) != 0))
    {
      fVar50 = -fVar50;
    }
    fVar60 = fVar49;
    if (((iVar13 == 2) || (fVar60 = fVar69, iVar13 == 1)) || (fVar60 = fVar49 / fVar56, iVar13 == 0)
       ) {
      fVar50 = fVar60 * fVar50;
    }
    lVar30 = lVar44 + lVar46 * 0x178;
    fVar64 = *(float *)(lVar30 + 0x88);
    fVar59 = *(float *)(lVar30 + 0x84);
    fVar60 = -2.1474836e+09;
    if (fVar59 != INFINITY) {
      fVar60 = (float)(int)fVar59;
    }
    fVar53 = *(float *)(lVar30 + 0xd4);
    fVar62 = *(float *)(lVar30 + 0xd8);
    fVar52 = -2.1474836e+09;
    if (fVar64 != INFINITY) {
      fVar52 = (float)(int)fVar64;
    }
    uVar68 = FUN_024e0374(fVar59 - fVar60,fVar64 - fVar52);
    *(undefined4 *)(lVar30 + 0x84) = uVar68;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar62 = fVar62 - fVar52;
    *(float *)(lVar30 + 0x88) = fVar50;
    uVar68 = FUN_024e0374(fVar59 - fVar60,fVar62);
    *(undefined4 *)(lVar44 + lVar46 * 0x178 + 0xac) = uVar68;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar53 = fVar53 - fVar60;
    *(float *)(lVar44 + lVar46 * 0x178 + 0xb0) = fVar50;
    fVar60 = (float)FUN_024e0374(fVar53,fVar62);
    *(float *)(lVar30 + 0xd4) = fVar60;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar30 + 0xd8) = fVar50;
    uVar68 = FUN_024e0374(fVar53,fVar64 - fVar52);
    *(undefined4 *)(lVar44 + lVar46 * 0x178 + 0xfc) = uVar68;
    uVar43 = (uint)*(undefined8 *)(lVar44 + 0x18);
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar44 + lVar46 * 0x178 + 0x100) = fVar50;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar14) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar36 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = lVar44 + lVar46 * 0x178;
      *(ulong *)(lVar33 + 0x70) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0x70) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar33 + 0x70));
      *(float *)(lVar33 + 0x78) = fVar54 + *(float *)(lVar33 + 0x78);
      if (*(uint *)(lVar44 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = lVar44 + lVar46 * 0x178;
      *(ulong *)(lVar33 + 0x98) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0x98) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar33 + 0x98));
      *(float *)(lVar33 + 0xa0) = fVar54 + *(float *)(lVar33 + 0xa0);
      if (*(uint *)(lVar44 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = lVar44 + lVar46 * 0x178;
      *(ulong *)(lVar33 + 0xc0) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0xc0) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar33 + 0xc0));
      *(float *)(lVar33 + 200) = fVar54 + *(float *)(lVar33 + 200);
      if (*(uint *)(lVar44 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = lVar44 + lVar46 * 0x178;
      *(ulong *)(lVar33 + 0xe8) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0xe8) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar33 + 0xe8));
      *(float *)(lVar33 + 0xf0) = fVar54 + *(float *)(lVar33 + 0xf0);
      if (iVar15 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar15 == 1) {
        pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar36 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar43 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar44 + lVar46 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar33 = lVar44 + lVar46 * 0x178;
        *(ulong *)(lVar33 + 0x70) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0x70) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar33 + 0x70));
        *(float *)(lVar33 + 0x78) = fVar54 + *(float *)(lVar33 + 0x78);
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = lVar44 + lVar46 * 0x178;
        *(ulong *)(lVar33 + 0x98) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0x98) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar33 + 0x98));
        *(float *)(lVar33 + 0xa0) = fVar54 + *(float *)(lVar33 + 0xa0);
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = lVar44 + lVar46 * 0x178;
        *(ulong *)(lVar33 + 0xc0) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0xc0) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar33 + 0xc0));
        *(float *)(lVar33 + 200) = fVar54 + *(float *)(lVar33 + 200);
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = lVar44 + lVar46 * 0x178;
        *(ulong *)(lVar33 + 0xe8) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0xe8) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar33 + 0xe8));
        *(float *)(lVar33 + 0xf0) = fVar54 + *(float *)(lVar33 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar43 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar30 = lVar44 + lVar46 * 0x178;
        uVar68 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar30 + 0x78) = uVar68;
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar44 + lVar46 * 0x178;
        uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar30 + 0xa0) = uVar68;
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar44 + lVar46 * 0x178;
        uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar30 + 200) = uVar68;
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar44 + lVar46 * 0x178;
        uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar30 + 0xf0) = uVar68;
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar33 + 0x194) = 0;
      }
      if (iVar15 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar32)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar33 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar33 = lVar33 + lVar46 * 0x178;
    uVar23 = *(undefined8 *)(lVar33 + 0x11c);
    *(undefined8 *)(lVar33 + 0x11c) =
         CONCAT44(fVar51 + (float)((ulong)uVar23 >> 0x20),fVar61 + (float)uVar23);
    *(float *)(lVar33 + 0x124) = fVar54 + *(float *)(lVar33 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar33 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar33 = lVar33 + lVar46 * 0x178;
    *(ulong *)(lVar33 + 0x110) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0x110) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar33 + 0x110));
    *(float *)(lVar33 + 0x118) = fVar54 + *(float *)(lVar33 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar33 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar33 = lVar33 + lVar46 * 0x178;
    *(ulong *)(lVar33 + 0x128) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0x128) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar33 + 0x128));
    *(float *)(lVar33 + 0x130) = fVar54 + *(float *)(lVar33 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar33 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar33 = lVar33 + lVar46 * 0x178;
    *(float *)(lVar33 + 0x134) = fVar61 + *(float *)(lVar33 + 0x134);
    *(ulong *)(lVar33 + 0x138) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar33 + 0x138) >> 0x20),
                  fVar51 + (float)*(undefined8 *)(lVar33 + 0x138));
    lVar33 = *in_stack_00000150;
    if ((lVar33 == 0) || (lVar30 = *(long *)(lVar33 + 0x38), lVar30 == 0)) goto LAB_0249920c;
    uVar43 = *(uint *)(lVar30 + 0x18);
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar30 + lVar46 * 0x178;
    uVar22 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar38 + 0x140));
    fVar60 = fVar51 + *(float *)(lVar38 + 0x150);
    uVar25 = (ulong)(uint)fVar60;
    uVar58 = CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                      fVar51 + (float)*(undefined8 *)(lVar38 + 0x148));
    *(ulong *)(lVar38 + 0x140) = uVar22;
    *(ulong *)(lVar38 + 0x148) = uVar58;
    *(float *)(lVar38 + 0x150) = fVar60;
    if (uVar36 == uVar63) {
      uVar63 = *in_stack_00000148 - 1;
      if (uVar14 == uVar63) goto LAB_0249788c;
    }
    else {
      lVar33 = *(long *)(lVar33 + 0x50);
      if (lVar33 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar33 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = (long)(int)uVar63;
      lVar39 = lVar33 + lVar38 * 0x5c;
      uVar58 = (ulong)(uint)*(float *)(lVar39 + 0x58);
      fVar60 = fVar51 + *(float *)(lVar39 + 0x54);
      uVar22 = (ulong)(uint)fVar60;
      fVar64 = fVar61 + *(float *)(lVar39 + 0x58);
      uVar25 = (ulong)(uint)fVar64;
      *(ulong *)(lVar39 + 0x4c) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                    fVar51 + (float)*(undefined8 *)(lVar39 + 0x4c));
      *(float *)(lVar39 + 0x54) = fVar60;
      *(float *)(lVar39 + 0x58) = fVar64;
      if (uVar43 <= *(uint *)(lVar39 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar68 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
      lVar33 = lVar33 + lVar38 * 0x5c;
      *(float *)(lVar33 + 0x70) = fVar60;
      *(undefined4 *)(lVar33 + 0x6c) = uVar68;
      lVar33 = *in_stack_00000150;
      if ((lVar33 == 0) || (lVar30 = *(long *)(lVar33 + 0x50), lVar30 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = *(long *)(lVar33 + 0x38);
      if (lVar33 == 0) goto LAB_0249920c;
      uVar63 = *(uint *)(lVar30 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar33 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + lVar38 * 0x5c;
      *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar33 + (long)(int)uVar63 * 0x178 + 0x128);
      *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
      uVar63 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar14 == uVar63) {
        lVar33 = *in_stack_00000150;
        if ((lVar33 == 0) || (lVar30 = *(long *)(lVar33 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar30 + lVar35 * 0x5c;
        uVar58 = (ulong)(uint)*(float *)(lVar38 + 0x58);
        uVar22 = CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                          fVar51 + (float)*(undefined8 *)(lVar38 + 0x4c));
        fVar60 = fVar51 + *(float *)(lVar38 + 0x54);
        fVar61 = fVar61 + *(float *)(lVar38 + 0x58);
        uVar25 = (ulong)(uint)fVar61;
        *(ulong *)(lVar38 + 0x4c) = uVar22;
        *(float *)(lVar38 + 0x54) = fVar60;
        *(float *)(lVar38 + 0x58) = fVar61;
        lVar33 = *(long *)(lVar33 + 0x38);
        if (lVar33 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= *(uint *)(lVar38 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar68 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
        lVar30 = lVar30 + lVar35 * 0x5c;
        *(float *)(lVar30 + 0x70) = fVar60;
        *(undefined4 *)(lVar30 + 0x6c) = uVar68;
        lVar33 = *in_stack_00000150;
        if ((lVar33 == 0) || (lVar30 = *(long *)(lVar33 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = *(long *)(lVar33 + 0x38);
        if (lVar33 == 0) goto LAB_0249920c;
        uVar63 = *(uint *)(lVar30 + lVar35 * 0x5c + 0x40);
        if (*(uint *)(lVar33 + 0x18) <= uVar63)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar35 * 0x5c;
        *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar33 + (long)(int)uVar63 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_016f9468(uVar40,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
      if (bVar11) {
        if (((uVar65 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar44 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_00000148 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
          if (*(uint *)(lVar44 + 0x18) <= uVar65 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar44 + lVar41 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f9468(uVar4,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar44 + 0x18) <= uVar65)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar44 + lVar41 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar21 = FUN_016f9468(uVar4,0);
            if ((uVar21 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar65 != 1) {
LAB_024985a0:
          bVar11 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f93a0(uVar40,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f68bc(uVar40,0);
          if (((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9468(uVar40,0);
        iVar15 = iVar48;
        if ((uVar21 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar15 = uVar65 - 2;
      }
      lVar33 = *in_stack_00000150;
      if (lVar33 == 0) goto LAB_0249920c;
      lVar30 = *(long *)(lVar33 + 0x40);
      if (lVar30 == 0) goto LAB_0249920c;
      uVar63 = *(uint *)(lVar33 + 0x24);
      iVar16 = *(int *)(lVar30 + 0x18);
      if (iVar16 < (int)(uVar63 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar33 + 0x40),iVar16 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar33 = *in_stack_00000150;
        if (lVar33 == 0) goto LAB_0249920c;
      }
      lVar30 = *(long *)(lVar33 + 0x40);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (long)(int)uVar63 * 0x18;
      *(uint *)(lVar30 + 0x28) = uVar18;
      *(int *)(lVar30 + 0x2c) = iVar15;
      *(uint *)(lVar30 + 0x30) = (iVar15 - uVar18) + 1;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      lVar30 = *(long *)(lVar33 + 0x50);
      *(int *)(lVar33 + 0x24) = *(int *)(lVar33 + 0x24) + 1;
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar36)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + lVar35 * 0x5c;
      bVar11 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
    }
    else {
      if (!bVar11) {
        uVar18 = uVar14;
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        lVar33 = *in_stack_00000150;
        if (lVar33 == 0) goto LAB_0249920c;
        lVar30 = *(long *)(lVar33 + 0x40);
        if (lVar30 == 0) goto LAB_0249920c;
        uVar63 = *(uint *)(lVar33 + 0x24);
        iVar15 = *(int *)(lVar30 + 0x18);
        if (iVar15 < (int)(uVar63 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar33 + 0x40),iVar15 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar33 = *in_stack_00000150;
          if (lVar33 == 0) goto LAB_0249920c;
        }
        lVar30 = *(long *)(lVar33 + 0x40);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar63)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)uVar63 * 0x18;
        *(uint *)(lVar30 + 0x28) = uVar18;
        *(uint *)(lVar30 + 0x2c) = uVar14;
        *(long **)(lVar30 + 0x20) = unaff_x19;
        *(uint *)(lVar30 + 0x30) = uVar65 - uVar18;
        lVar30 = *(long *)(lVar33 + 0x50);
        *(int *)(lVar33 + 0x24) = *(int *)(lVar33 + 0x24) + 1;
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar35 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar11 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    uVar63 = *(uint *)(lVar33 + 0x18);
    if (uVar63 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar33 + lVar46 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_02497adc:
        if (uVar63 <= uVar65 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *unaff_x19;
        uVar63 = *(uint *)(lVar33 + lVar41 + -0x330);
        uVar68 = *(undefined4 *)(lVar33 + lVar41 + -0x2f8);
LAB_0249805c:
        pcVar32 = *(code **)(lVar35 + 0x908);
LAB_02498064:
        uVar58 = (ulong)uVar63;
        uVar22 = (ulong)(uint)fStack0000000000000050;
        uVar25 = (ulong)(uint)fStack0000000000000054;
        (*pcVar32)(fStack0000000000000058,uVar22,uVar25,uVar58,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar68);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar33 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar33 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar12 = false;
        fVar57 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar33 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar12 = false;
      }
    }
    else {
      lVar33 = lVar33 + lVar46 * 0x178;
      iVar15 = *(int *)(lVar33 + 0x68);
      *(int *)(lVar33 + 0x16c) = iVar17;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar36)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar15 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_016f68bc(uVar40,0);
      if ((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar33 = *in_stack_00000150;
        if ((lVar33 == 0) || (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar60 = *(float *)(lVar35 + lVar46 * 0x178 + 0x160);
        if (fVar57 <= fVar60) {
          fVar57 = fVar60;
        }
        if (fStack00000000000000cc <= ABS(fVar50)) {
          fStack00000000000000cc = ABS(fVar50);
        }
        if ((float)iVar15 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar33 = *in_stack_00000150;
            if (lVar33 == 0) goto LAB_0249920c;
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar35 + 0x15a8);
        }
        lVar33 = *(long *)(lVar33 + 0x38);
        if (lVar33 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar64 = *(float *)(lVar33 + lVar46 * 0x178 + 0x14c);
        fVar60 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar64 = fVar64 + fVar57 * fVar60;
        if (fVar64 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar64;
        }
        uVar22 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar15;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar6 < (int)uVar14)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar40,0);
          if ((uVar21 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = lVar33 + lVar46 * 0x178;
        _bStack000000000000005c = *(float *)(lVar33 + 0x160);
        fStack0000000000000058 = *(float *)(lVar33 + 0x11c);
        bVar12 = fVar57 != 0.0;
        fVar60 = _bStack000000000000005c;
        if (bVar12) {
          fVar60 = fVar57;
        }
        fVar57 = fVar60;
        uStack0000000000000060 = *(uint *)(lVar33 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar60 = fVar50;
        if (bVar12) {
          fVar60 = fStack00000000000000cc;
        }
        uVar22 = (ulong)(uint)fVar60;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar60;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 != 0)) {
          if (uVar14 < *(uint *)(lVar33 + 0x18)) {
            lVar33 = lVar33 + lVar46 * 0x178;
            lVar35 = *unaff_x19;
            uVar63 = *(uint *)(lVar33 + 0x128);
            uVar68 = *(undefined4 *)(lVar33 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar14 == uVar5) || ((int)uVar6 <= (int)uVar14)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 != 0)) {
          if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
            lVar35 = lVar20;
            if (*(uint *)(lVar33 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar35 = lVar46;
            if (*(uint *)(lVar33 + 0x18) <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar33 = lVar33 + lVar35 * 0x178;
          uVar63 = *(uint *)(lVar33 + 0x128);
          uVar68 = *(undefined4 *)(lVar33 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 != 0)) {
          uVar63 = *(uint *)(lVar33 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= uVar65)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar21 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar33 + lVar41),0);
        if ((uVar21 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 != 0)) {
            if (uVar14 < *(uint *)(lVar33 + 0x18)) {
              lVar33 = lVar33 + lVar46 * 0x178;
              uVar58 = (ulong)*(uint *)(lVar33 + 0x128);
              uVar25 = (ulong)(uint)fStack0000000000000054;
              uVar22 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar22,uVar25,uVar58,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar33 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar33 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar33 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar33 = *(long *)puVar9;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar12 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar33 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar37 == 0) goto LAB_0249920c;
    uVar63 = *(uint *)(lVar33 + lVar46 * 0x178 + 400);
    fVar60 = (float)FUN_026fd1f0(lVar37 + 0x50,0);
    if ((uVar63 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*in_stack_00000150 == 0) ||
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= uVar65 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar63 = *(uint *)(lVar33 + lVar41 + -0x330);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        fVar51 = fStack0000000000000088 * fVar60 + *(float *)(lVar33 + lVar41 + -0x30c);
LAB_02498648:
        uVar58 = (ulong)uVar63;
        uVar22 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar25 = (ulong)in_stack_00000068._4_4_;
        (*pcVar32)(fStack0000000000000080,uVar22,uVar25,uVar58,fVar51,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar7 = false;
    }
    else {
      lVar33 = *in_stack_00000150;
      if ((lVar33 == 0) || (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar35 + lVar46 * 0x178 + 0x174) = iVar17;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar36)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar35 + lVar46 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar6 < (int)uVar14)) ||
         (bVar7 || !bVar1)) {
LAB_02498228:
        if (!bVar7) goto LAB_0249867c;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar40,0);
          if ((uVar21 & 1) != 0) goto LAB_02498228;
          lVar33 = *in_stack_00000150;
          if (lVar33 == 0) goto LAB_0249920c;
        }
        lVar33 = *(long *)(lVar33 + 0x38);
        if (lVar33 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = lVar33 + lVar46 * 0x178;
        fStack0000000000000034 = *(float *)(lVar33 + 0x60);
        fStack0000000000000088 = *(float *)(lVar33 + 0x160);
        fStack0000000000000030 = *(float *)(lVar33 + 0x14c);
        uVar22 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar33 + 0x11c);
        in_stack_00000078._4_4_ = fVar60 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar63 = *in_stack_00000148;
      if (uVar63 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 != 0)) {
          if (uVar14 < *(uint *)(lVar33 + 0x18)) {
            lVar33 = lVar33 + lVar46 * 0x178;
            lVar20 = *unaff_x19;
            uVar63 = *(uint *)(lVar33 + 0x128);
            fVar51 = *(float *)(lVar33 + 0x14c);
LAB_024983d8:
            pcVar32 = *(code **)(lVar20 + 0x908);
FUN_02498644:
            fVar51 = fVar60 * fStack0000000000000088 + fVar51;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar14 == uVar5) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 != 0)) {
          uVar63 = *(uint *)(lVar33 + 0x18);
          if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
            if (uVar63 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar20 = lVar46;
            if (uVar63 <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar33 = lVar33 + lVar20 * 0x178;
          fVar51 = *(float *)(lVar33 + 0x14c);
          uVar63 = *(uint *)(lVar33 + 0x128);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)uVar63) {
        lVar33 = *in_stack_00000150;
        if ((lVar33 != 0) && (lVar35 = *(long *)(lVar33 + 0x38), lVar35 != 0)) {
          if (uVar65 < *(uint *)(lVar35 + 0x18)) {
            if (*(float *)(lVar35 + lVar41 + -0x108) == fStack0000000000000034) {
              fVar64 = *(float *)(lVar35 + lVar41 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = (ulong)(uint)fStack0000000000000030;
              uVar21 = FUN_024aa280(fVar51 + fVar64,uVar22,0);
              if ((uVar21 & 1) != 0) {
                uVar63 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar33 = *in_stack_00000150;
              if (lVar33 == 0) goto LAB_0249920c;
            }
            lVar33 = *(long *)(lVar33 + 0x38);
            if (lVar33 != 0) {
              uVar63 = *(uint *)(lVar33 + 0x18);
              if ((int)uVar14 <= (int)uVar6) goto LAB_02498620;
              if (uVar6 < uVar63) goto LAB_02498628;
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }

      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
      :
      if ((int)uVar14 < (int)uVar63) {
        iVar15 = FUN_02681c0c(lVar37,0);
        if (*(uint *)(lVar44 + 0x18) <= uVar65)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar33 = *(long *)(lVar44 + lVar41 + -0x130);
        if (lVar33 == 0) goto LAB_0249920c;
        iVar16 = FUN_02681c0c(lVar33,0);
        if (iVar15 != iVar16) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 != 0)) {
          if (uVar65 - 2 < *(uint *)(lVar33 + 0x18)) {
            lVar20 = *unaff_x19;
            uVar63 = *(uint *)(lVar33 + lVar41 + -0x330);
            fVar51 = *(float *)(lVar33 + lVar41 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar7 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    uVar63 = (uint)*(undefined8 *)(lVar33 + 0x18);
    if (uVar63 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar33 + lVar46 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar25 = (ulong)uStack00000000000000a0;
        uVar58 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar58,fStack00000000000000a8,uVar25);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar36)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar33 + lVar46 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar8) {
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar6 < (int)uVar14)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar40,0);
          if ((uVar21 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar20 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0)) goto LAB_0249920c;
        uVar63 = (uint)*(undefined8 *)(lVar33 + 0x18);
        if (uVar63 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = *(long *)(lVar20 + 0xb8);
        lVar35 = lVar33 + lVar46 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar20 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar20 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar20 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar20 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar63 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = lVar33 + lVar46 * 0x178;
      fVar52 = *(float *)(lVar33 + 0x188);
      uVar19 = *(undefined8 *)(lVar33 + 0x17c);
      fVar62 = *(float *)(lVar33 + 0x184);
      uVar23 = *(undefined8 *)(lVar33 + 0x184);
      fVar53 = *(float *)(lVar33 + 0x18c);
      fVar51 = *(float *)(lVar33 + 0x11c);
      fVar64 = *(float *)(lVar33 + 0x128);
      fVar59 = *(float *)(lVar33 + 0x148);
      fVar60 = *(float *)(lVar33 + 0x150);
      in_stack_00000158 = uVar19;
      fStack0000000000000160 = fVar62;
      fStack0000000000000164 = fVar52;
      in_stack_00000168 = fVar53;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar21 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar33 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar33);
        }
        fVar51 = fVar51 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar51 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar51;
        }
        fVar60 = fVar60 - in_stack_000017a0;
        uVar22 = (ulong)(uint)fVar60;
        fVar64 = fVar64 + (float)in_stack_00001798;
        uVar25 = (ulong)(uint)fVar64;
        if (fVar60 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar60;
        }
        fVar59 = fVar59 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar58 = (ulong)(uint)fVar59;
        if (fStack00000000000000a4 <= fVar64) {
          fStack00000000000000a4 = fVar64;
        }
        if (fStack00000000000000a8 <= fVar59) {
          fStack00000000000000a8 = fVar59;
        }
      }
      else {
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar33);
        }
        fVar51 = (fVar51 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar58 = (ulong)(uint)fVar51;
        if (fVar60 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar60;
        }
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        uVar25 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar59) {
          fStack00000000000000a8 = fVar59;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar58,fStack00000000000000a8,uVar25);
        fStack00000000000000b4 = fVar60 - fVar53;
        fStack00000000000000a4 = fVar64 + fVar62;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar59 + fVar52;
        fStack00000000000000b0 = fVar51;
        in_stack_00001790 = uVar19;
        in_stack_00001798 = uVar23;
        in_stack_000017a0 = fVar53;
      }
      if (((*in_stack_00000148 == 1) || (uVar14 == uVar5)) ||
         (((int)uVar6 <= (int)uVar14 || (!bVar1)))) {
        uVar25 = (ulong)uStack00000000000000a0;
        uVar58 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar58,fStack00000000000000a8,uVar25);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar14 = *in_stack_00000148;
    iVar48 = iVar48 + 1;
    lVar41 = lVar41 + 0x178;
    bVar1 = (int)uVar65 < (int)uVar14;
    uVar63 = uVar36;
    uVar65 = uVar65 + 1;
  } while (bVar1);
  lVar44 = *in_stack_00000150;
  if (lVar44 != 0) {
    iVar17 = uVar36 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar44 + 0x18) = uVar14;
    lVar41 = unaff_x19[0xd3];
    *(int *)(lVar44 + 0x2c) = iVar17;
    iVar17 = iStack00000000000000ac;
    if ((int)uVar14 < 1) {
      iVar17 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar17 = 1;
    }
    *(int *)(lVar44 + 0x1c) = (int)lVar41;
    *(int *)(lVar44 + 0x24) = iVar17;
    *(int *)(lVar44 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar44 = unaff_x19[0xde];
    if (lVar44 != 0) {
      (**(code **)(lVar44 + 0x18))
                (*(undefined8 *)(lVar44 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar44 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar17 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar17 != 0x19) {
      lVar44 = unaff_x19[0xe4];
      if (lVar44 == 0) goto LAB_0249920c;
      uVar14 = FUN_02859dc4(lVar44,0);
      FUN_02859e00(lVar44,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x60), lVar44 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar44 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar44 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar44 = *(long *)(unaff_x19[0x6c] + 0x60), lVar44 != 0)) {
        if (*(int *)(lVar44 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar44 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar44 = *(long *)(unaff_x19[0x6c] + 0x60), lVar44 != 0)) {
            if (*(int *)(lVar44 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar44 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar44 = *(long *)(unaff_x19[0x6c] + 0x60), lVar44 != 0)) {
                if (*(int *)(lVar44 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar44 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar44 = *(long *)(unaff_x19[0x6c] + 0x60), lVar44 != 0)) {
                    if (*(int *)(lVar44 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar44 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar23 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar14 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar44 = *in_stack_00000150;
                              if (lVar44 != 0) {
                                lVar33 = 0;
                                lVar41 = 0;
                                do {
                                  uVar21 = lVar41 + 1;
                                  if ((long)*(int *)(lVar44 + 0x34) <= (long)uVar21)
                                  goto LAB_02496098;
                                  lVar44 = *(long *)(lVar44 + 0x60);
                                  if (lVar44 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar44 + lVar33 + 0x70,0);
                                  lVar44 = unaff_x19[0xe0];
                                  if (lVar44 == 0) break;
                                  if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar19 = *(undefined8 *)(lVar44 + lVar41 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar26 = FUN_0268b4e0(uVar19,0,0);
                                  if ((uVar26 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar44 = *(long *)(*in_stack_00000150 + 0x60), lVar44 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar44 + lVar33 + 0x70,1,0);
                                    }
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if (lVar44 == 0) break;
                                    lVar44 = FUN_024f0144(lVar44,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar44 == 0) break;
                                    FUN_0266b9c4(lVar44,*(undefined8 *)(lVar20 + lVar33 + 0x80),0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if (lVar44 == 0) break;
                                    lVar44 = FUN_024f0144(lVar44,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar44 == 0) break;
                                    FUN_0266bbc8(lVar44,*(undefined8 *)(lVar20 + lVar33 + 0x98),0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if (lVar44 == 0) break;
                                    lVar44 = FUN_024f0144(lVar44,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar44 == 0) break;
                                    FUN_0266bc74(lVar44,*(undefined8 *)(lVar20 + lVar33 + 0xa0),0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if (lVar44 == 0) break;
                                    lVar44 = FUN_024f0144(lVar44,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar44 == 0) break;
                                    FUN_0266c1dc(lVar44,*(undefined8 *)(lVar20 + lVar33 + 0xa8),0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if ((lVar44 == 0) ||
                                       (lVar44 = FUN_024f0144(lVar44,0), lVar44 == 0)) break;
                                    FUN_0266ed90(lVar44,0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if (lVar44 == 0) break;
                                    lVar44 = FUN_02738ef4(lVar44,0);
                                    lVar20 = unaff_x19[0xe0];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar20 = *(long *)(lVar20 + lVar41 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar19 = FUN_024f0144(lVar20,0), lVar44 == 0)) break;
                                    FUN_02858f1c(lVar44,uVar19,0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if ((lVar44 == 0) ||
                                       (lVar44 = FUN_02738ef4(lVar44,0), lVar44 == 0)) break;
                                    FUN_02858b14(uVar23,uVar22,uVar25,uVar58,lVar44,0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar44 = *(long *)(lVar44 + lVar41 * 8 + 0x28);
                                    if ((lVar44 == 0) ||
                                       (lVar44 = FUN_02738ef4(lVar44,0), lVar44 == 0)) break;
                                    FUN_02858a50(lVar44,uVar14 & 1,0);
                                    lVar44 = unaff_x19[0xe0];
                                    if (lVar44 == 0) break;
                                    if (*(uint *)(lVar44 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar42 = *(long **)(lVar44 + lVar41 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar42 == (long *)0x0) break;
                                    (**(code **)(*plVar42 + 0x2c8))
                                              (plVar42,uVar18 & 1,*(undefined8 *)(*plVar42 + 0x2d0))
                                    ;
                                  }
                                  lVar44 = *in_stack_00000150;
                                  lVar41 = lVar41 + 1;
                                  lVar33 = lVar33 + 0x50;
                                } while (lVar44 != 0);
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
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


